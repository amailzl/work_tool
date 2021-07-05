/*
 * Copyright (C) GM Global Technology Operations LLC 2019.
 * All Rights Reserved.
 * GM Confidential Restricted.
 */
package com.gm.hvac.CarCommunication;

import android.car.VehicleAreaSeat;
import android.car.VehiclePropertyAccess;
import android.car.VehiclePropertyIds;
import android.car.hardware.CarPropertyConfig;
import android.car.hardware.CarPropertyValue;
import android.car.hardware.property.CarPropertyManager;
import android.util.Log;
import androidx.annotation.Nullable;
import com.google.common.collect.HashBiMap;
import vendor.gm.vehicle.V1_0.VendorProperty;

import java.util.*;

import static com.gm.hvac.CarCommunication.HVACPropertyConstants.*;

abstract public class PropertyBase {
    protected String TAG = "PropertyBase";
    protected boolean mCustomOnChangeEventHandler = true;
    protected int mOnChangeEventListenerID = INVALID_PROP_ID;
    protected boolean mFrontIsDualZoneConfiguration = false;

    protected HashMap<Integer, CarPropertyConfig> mPropConfigList = null;
    private HashMap<Integer, HashBiMap<Integer, Integer>> mZoneToAreaIdMap = null;
    private HashMap<Integer, HashMap<Integer, HvacVehicleDataListener>> mAppListenerList;

    //TODO: RTC 180613 need to remove this workaround code from here
    // private final List<Integer> mHvacWorkAroundBooleanPropertyIds = Arrays.asList(
    //         VehiclePropertyIds.HVAC_POWER_ON,
    //         VendorProperty.HVAC_REAR_LOCK,
    //         VehiclePropertyIds.HVAC_AC_ON,
    //         VehiclePropertyIds.HVAC_RECIRC_ON,
    //         VehiclePropertyIds.HVAC_AUTO_ON,
    //         VehiclePropertyIds.HVAC_DUAL_ON);
    // private List<Integer> mHvacWorkAroundPropertyIds = new ArrayList<>();

    //TODO: RTC 180613 need to remove above workaround code till here

    private CarPropertyWrapper mCarPropertyWrapper;

    private CarPropertyManager.CarPropertyEventCallback mPropertyListener =
            new CarPropertyManager.CarPropertyEventCallback() {

                @Override
                public void onChangeEvent(CarPropertyValue carPropertyValue) {
                    try {

                        if (mCustomOnChangeEventHandler) {
                            customOnChangeEventHandler(carPropertyValue);
                        } else {
                            defaultOnChangeEventHandler(carPropertyValue);
                        }
                    } catch (NullPointerException e) {
                        Log.e(TAG, "NullPointerException in onChangeEvent !!! " + e);
                    } catch (ClassCastException e) {
                        Log.e(TAG, "ClassCastException in onChangeEvent !!! " + e);
                    } catch (Exception e) {
                        Log.e(TAG, "Exception in onChangeEvent !!! " + e);
                    }
                }

                @Override
                public void onErrorEvent(int i, int i1) {
                    Log.e(TAG, " CarPropertyEventCallback onErrorEvent received");
                }
            };

    public PropertyBase(CarPropertyWrapper carPropertyWrapper) {
        mCarPropertyWrapper = carPropertyWrapper;
        mAppListenerList = new HashMap<>();
        //TODO: RTC 180613 need to remove this workaround code from here
        // mHvacWorkAroundPropertyIds.addAll(mHvacWorkAroundBooleanPropertyIds);
        //TODO: RTC 180613 need to remove above workaround code till here
    }

    protected void initPropertyProxy(int... propList) {

        if (null == mCarPropertyWrapper) {
            Log.e(TAG, "initPropertyProxy Car Property Wrapper is not initialised.");
            return;
        }

        synchronized (mCarPropertyWrapper) {
            mPropConfigList = new HashMap<>();

            if (0 == propList.length) {
                Log.e(TAG, "No property ID passed to initPropertyProxy.");
                return;
            }

            for (int propId : propList) {
                CarPropertyConfig pc = mCarPropertyWrapper.getPropertyConfig(propId);
                if (null == pc) {
                    Log.e(TAG, "No property config found for property " +
                            HVACPropertyConstants.getPropertyName(propId));
                } else {
                    if(isReadableProperty(pc.getAccess())) {
                        mCarPropertyWrapper.subscribeToPropertyChanges(propId, mPropertyListener);
                    }
                    else {
                        Log.w(TAG, "Can't subscribe for changes as property is not readable "+
                                HVACPropertyConstants.getPropertyName(propId));
                    }
                    mPropConfigList.put(propId, pc);
                }
            }

            if (mPropConfigList.isEmpty()) {
                Log.e(TAG, "Error :- No property configurations found for input property " +
                        "IDs!!!");
                return;
            }

            calculateAreaIdMapping();
        }
    }

    protected void calculateAreaIdMapping() {
        mZoneToAreaIdMap = new HashMap<>();

        for (Map.Entry<Integer, CarPropertyConfig> entry : mPropConfigList.entrySet()) {
            Integer propId = entry.getKey();
            CarPropertyConfig propertyConfig = entry.getValue();

            int[] supportedAreaIds = propertyConfig.getAreaIds();
            HashBiMap<Integer, Integer> zoneToAreaMap = HashBiMap.create();

            if(VendorProperty.INDICATION_HEATER_SETTING == propId){
                zoneToAreaMap.put(ZONE_GLOBAL, GLOBAL_AREA);
            }
            else if ((AREA_NOT_APPLICABLE == supportedAreaIds.length) ||
                    (Arrays.binarySearch(supportedAreaIds, GLOBAL_AREA) >= 0)) {

                zoneToAreaMap.put(ZONE_GLOBAL, HVAC_ALL_SEATS);
            } else if (Arrays.binarySearch(supportedAreaIds, HVAC_ALL_SEATS) >= 0) {

                zoneToAreaMap.put(ZONE_FRONT_CPW, HVAC_ALL_SEATS);

            } else {
                if (Arrays.binarySearch(supportedAreaIds, VehicleAreaSeat.SEAT_ROW_1_CENTER) >= 0) {

                    zoneToAreaMap.put(ZONE_FRONT_CPW, VehicleAreaSeat.SEAT_ROW_1_CENTER);
                }

                if (Arrays.binarySearch(supportedAreaIds, HVAC_FRONT_SEATS) >= 0) {

                    zoneToAreaMap.put(ZONE_FRONT_CPW, HVAC_FRONT_SEATS);
                } else {
                    if (Arrays.binarySearch(supportedAreaIds, VehicleAreaSeat.SEAT_ROW_1_LEFT) >= 0)
                    {

                        zoneToAreaMap.put(ZONE_FRONT_LEFT, VehicleAreaSeat.SEAT_ROW_1_LEFT);
                        mFrontIsDualZoneConfiguration = true;
                    } else if (Arrays.binarySearch(supportedAreaIds, HVAC_LEFT_SEATS) >= 0) {

                        zoneToAreaMap.put(ZONE_FRONT_LEFT, HVAC_LEFT_SEATS);
                        mFrontIsDualZoneConfiguration = true;
                    }

                    if ((Arrays.binarySearch(supportedAreaIds,
                            VehicleAreaSeat.SEAT_ROW_1_RIGHT) >= 0) ) {

                        zoneToAreaMap.put(ZONE_FRONT_RIGHT, VehicleAreaSeat.SEAT_ROW_1_RIGHT);
                    } else if (Arrays.binarySearch(supportedAreaIds, HVAC_RIGHT_SEATS) >= 0) {

                        zoneToAreaMap.put(ZONE_FRONT_RIGHT, HVAC_RIGHT_SEATS);
                    }
                }

                if (Arrays.binarySearch(supportedAreaIds, HVAC_REAR_SEATS) >= 0) {

                    zoneToAreaMap.put(ZONE_REAR_CPW, HVAC_REAR_SEATS);
                } else {

                    if (Arrays.binarySearch(supportedAreaIds, VehicleAreaSeat.SEAT_ROW_2_LEFT)
                            >= 0) {

                        zoneToAreaMap.put(ZONE_REAR_LEFT, VehicleAreaSeat.SEAT_ROW_2_LEFT);
                    }
                    else if (Arrays.binarySearch(supportedAreaIds, HVAC_REAR_LEFT_TEMP_SEAT)
                            >= 0) {

                        zoneToAreaMap.put(ZONE_REAR_LEFT, HVAC_REAR_LEFT_TEMP_SEAT);
                    }

                    if (Arrays.binarySearch(supportedAreaIds, VehicleAreaSeat.SEAT_ROW_2_RIGHT)
                            >= 0) {

                        zoneToAreaMap.put(ZONE_REAR_RIGHT, VehicleAreaSeat.SEAT_ROW_2_RIGHT);
                    }
                }
            }

            if ((AREA_NOT_APPLICABLE != supportedAreaIds.length) &&
                    (supportedAreaIds.length != zoneToAreaMap.size())) {
                Log.e(TAG, getPropertyName(propId) +
                        " Failed to map some of the received AREA ID's to ZONE ID's !!");
            }

            if (!zoneToAreaMap.isEmpty()) {
                mZoneToAreaIdMap.put(propId, zoneToAreaMap);
                for (Map.Entry<Integer, Integer> pair : zoneToAreaMap.entrySet())
                    Log.d(getPropertyName(propId), " has area Id " +
                            HVACPropertyConstants.toString(pair.getValue()) + " and zone " +
                            pair.getKey());
            }
        }
    }

    protected int getAreaID(int propertyId, int zone) {

        if (null == mZoneToAreaIdMap) {
            Log.e(TAG, "getZoneID mZoneToAreaIdMap is null.");
            return NO_AREA_SUPPORTED;
        }

        synchronized (mZoneToAreaIdMap) {
            if (!mZoneToAreaIdMap.containsKey(propertyId)) {
                Log.e(TAG, " getAreaID Zone to area ID mapping is empty for property ID " +
                        getPropertyName(propertyId));
                return NO_AREA_SUPPORTED;
            }

            if (!mZoneToAreaIdMap.get(propertyId).containsKey(zone)) {
                Log.e(TAG, getPropertyName(propertyId) + " No area ID " +
                        " found for input zone ID " + zone);
                return NO_AREA_SUPPORTED;
            }
            return mZoneToAreaIdMap.get(propertyId).get(zone);
        }
    }

    protected int getZoneID(int propertyId, int areaId) {

        if (null == mZoneToAreaIdMap) {
            Log.e(TAG, "getZoneID mZoneToAreaIdMap is null.");
            return INVALID_ZONE;
        }

        synchronized (mZoneToAreaIdMap) {
            if (!mZoneToAreaIdMap.containsKey(propertyId)) {
                Log.e(TAG, "getZoneID mZoneToAreaIdMap does not have Property ID " +
                        getPropertyName(propertyId));
                return INVALID_ZONE;
            }

            if (!mZoneToAreaIdMap.get(propertyId).inverse().containsKey(areaId)) {
                Log.e(TAG, getPropertyName(propertyId) + " No zone ID " +
                        " found for input area ID " + HVACPropertyConstants.toString(areaId));
                return INVALID_ZONE;
            }
            return mZoneToAreaIdMap.get(propertyId).inverse().get(areaId);
        }
    }

    protected <E> void setPropertyValue(int propId, int zone, E val) {

        if (null == mCarPropertyWrapper) {
            Log.e(TAG, "setProperty mCarPropertyWrapper is null.");
            return;
        }

        if (null == mPropConfigList) {
            Log.e(TAG, "setProperty mPropConfigList is null.");
            return;
        }

        if (!mPropConfigList.containsKey(propId)) {
            Log.e(TAG, getPropertyName(propId) + " is not supported. " +
                    "Can't set its value ");
            return;
        }

        if (ifNull(mPropConfigList.get(propId).getPropertyType())) {
            Log.e(TAG, "setProperty getPropertyType is NULL !!!. Hence " +
                    "Can't set its value ");
            return;
        }

        if (ifNull(mPropConfigList.get(propId))) {
            Log.e(TAG, "setProperty PropertyConfig is NULL for this property!!!. Hence  " +
                    "Can't set its value ");
            return;
        }

        if ((VehiclePropertyAccess.READ_WRITE == mPropConfigList.get(propId).getAccess()) ||
                (VehiclePropertyAccess.WRITE == mPropConfigList.get(propId).getAccess())) {
            int areaId = getAreaID(propId, zone);
            if (NO_AREA_SUPPORTED == areaId) {
                Log.e(TAG, "Failed to set " +
                        HVACPropertyConstants.getPropertyName(propId) + " value to " + val);
                return;
            }

            synchronized (mCarPropertyWrapper) {

                //TODO: RTC 180613 need to remove this workaround code from here
                // if (mHvacWorkAroundPropertyIds.contains(propId)) {
                //     if (mHvacWorkAroundBooleanPropertyIds.contains(propId)) {
                //         if ((boolean) (Object) val) {
                //             CarPropertyValue currentState =
                //                     mCarPropertyWrapper.getProperty(propId, areaId);
                //             if (null == currentState) {
                //                 Log.e(TAG, "Failed to get current state. Hence can't " +
                //                         "toggle its state ");
                //                 return;
                //             }
                //             Log.e(TAG,
                //                     "Workaround toggeling from current state " +
                //                             currentState.getValue() +
                //                             " to state " + (!(boolean) currentState.getValue()));

                //             mCarPropertyWrapper.setProperty(
                //                     mPropConfigList.get(propId).getPropertyType(),
                //                     propId,
                //                     areaId,
                //                     (!(boolean) currentState.getValue()));
                //         }
                //     }
                //     return;
                // }
                //TODO: RTC 180613 need to remove above workaround code till here

                mCarPropertyWrapper.setProperty(
                        mPropConfigList.get(propId).getPropertyType(),
                        propId,
                        areaId,
                        val);
            }
        } else {
            Log.e(TAG, HVACPropertyConstants.getPropertyName(propId) + " does not have " +
                    " WRITE access. Can't set its value ");
        }
    }

    @Nullable
    protected CarPropertyValue getPropertyValue(int propId, int zone) {
        int areaId;

        if (null == mCarPropertyWrapper) {
            Log.e(TAG, "getPropertyValue mCarPropertyWrapper is null.");
            return null;
        }

        if (null == mPropConfigList) {
            Log.e(TAG, "getPropertyValue mPropConfigList is null.");
            return null;
        }

        if (!mPropConfigList.containsKey(propId)) {
            Log.e(TAG, HVACPropertyConstants.getPropertyName(propId) + " is not supported. " +
                    "Can't get its value ");
            return null;
        }

        if ((VehiclePropertyAccess.READ_WRITE == mPropConfigList.get(propId).getAccess()) ||
                (VehiclePropertyAccess.READ == mPropConfigList.get(propId).getAccess())) {
            areaId = getAreaID(propId, zone);
            Log.d(TAG, "getPropertyValue input zone " + zone + " to area " + areaId);
            if (NO_AREA_SUPPORTED == areaId) {
                Log.e(TAG,
                        "Failed to get value of " +
                                HVACPropertyConstants.getPropertyName(propId));
                return null;
            }

            synchronized (mCarPropertyWrapper) {
                return mCarPropertyWrapper.getProperty(propId, areaId);
            }
        } else {
            Log.e(TAG, HVACPropertyConstants.getPropertyName(propId) + " does not have " +
                    " READ access. Can't get its value ");
            return null;
        }
    }

    public void unsubscribeFromPropertyChanges() {
        if (null == mCarPropertyWrapper) {
            Log.e(TAG, "unsubscribeToProperty Car Property Wrapper is not initialised.");
            return;
        }

        if ((null == mPropConfigList) || (mPropConfigList.isEmpty())) {
            Log.e(TAG, "Error :- No property IDs found to unsubscribe!!!");
            return;
        }

        synchronized (mCarPropertyWrapper) {
            for (int propId : mPropConfigList.keySet()) {
                mCarPropertyWrapper.unsubscribeFromPropertyChanges(propId, mPropertyListener);
            }
        }
    }

    protected void registerAppListener(int propId, int zone, HvacVehicleDataListener listener) {
        int areaId;
        if (null == listener) {
            Log.e(TAG, "registerAppListener:  Input app listener is NULL for zone " + zone);
            return;
        }

        if (null == mAppListenerList) {
            mAppListenerList = new HashMap<>();
        }

        areaId = getAreaID(propId, zone);
        if (NO_AREA_SUPPORTED == areaId) {
            Log.e(TAG, HVACPropertyConstants.getPropertyName(propId) +
                    " NO AREA SUPPORTED for input zone " + zone + ".Can't register app listner");
            return;
        }
        Log.d(TAG, HVACPropertyConstants.getPropertyName(propId) +
                " Saving app listener for area "
                + HVACPropertyConstants.toString(areaId));

        if (mAppListenerList.containsKey(propId)) {
            this.mAppListenerList.get(propId).remove(areaId);
            this.mAppListenerList.get(propId).put(areaId, listener);
        } else {
            HashMap<Integer, HvacVehicleDataListener> areaListenerList = new HashMap<>();
            areaListenerList.put(areaId, listener);
            mAppListenerList.put(propId, areaListenerList);
        }
    }

    protected void unregisterAppListener(int propId, int zone) {
        int areaId;

        if (null == mAppListenerList) {
            Log.e(TAG, "unregisterAppListener mAppListenerList is NULL.");
            return;
        }

        if (this.mAppListenerList.containsKey(propId)) {
            areaId = getAreaID(propId, zone);
            this.mAppListenerList.get(propId).remove(areaId);
        }
    }

    protected HvacVehicleDataListener getAppListener(int propId, int areaId) {

        if (null == mAppListenerList) {
            Log.e(TAG, "getAppListener mAppListenerList is NULL.");
            return null;
        }

        if (!this.mAppListenerList.containsKey(propId)) {
            Log.e(TAG, HVACPropertyConstants.getPropertyName(propId) + " property does not " +
                    "have any app listeners");
            return null;
        }

        if (!this.mAppListenerList.get(propId).containsKey(areaId)) {
            Log.e(TAG, HVACPropertyConstants.getPropertyName(propId) + " no app listener " +
                    "found for input area " + HVACPropertyConstants.toString(areaId));
            return null;
        }
        return this.mAppListenerList.get(propId).get(areaId);
    }

    protected boolean checkIfMinMaxValuesExist(int propId, int zone){
        if (null == mPropConfigList) {
            Log.e(TAG, "getPropertyMinMaxValues Error :- mPropConfigList is NULL !!!");
            return false;
        }
        if (mPropConfigList.isEmpty()) {
            Log.e(TAG, "getPropertyMinMaxValues Error :- mPropConfigList is empty!!!");
            return false;
        }
        if (!mPropConfigList.containsKey(propId)) {
            Log.e(TAG, "getPropertyMinMaxValues Error :- " +
                    "Property configuration not found !!!");
            return false;
        }
        int areaId = getAreaID(propId, zone);
        if (NO_AREA_SUPPORTED == areaId) {
            Log.e(TAG,
                    "Failed to get Min Max Values for " +
                            HVACPropertyConstants.getPropertyName(propId));
            return false;
        }

        if (ifNull(mPropConfigList.get(propId).getMinValue(areaId))) {
            Log.e(TAG, "getPropertyMinMaxValues Error :- minValue is NULL !!!");
            return false;
        }

        if (ifNull(mPropConfigList.get(propId).getMaxValue(areaId))) {
            Log.e(TAG, "getPropertyMinMaxValues Error :- maxValue is NULL !!!");
            return false;
        }

        return true;
    }

    protected List<Integer> getPropertyMinMaxValues(int propId, int zone) {
        List<Integer> minMaxVal = new ArrayList<>();

        if (!checkIfMinMaxValuesExist(propId, zone)){
            return minMaxVal;
        }

        int areaId = getAreaID(propId, zone);
        if (NO_AREA_SUPPORTED == areaId) {
            return minMaxVal;
        }
        minMaxVal.add((int) mPropConfigList.get(propId).getMinValue(areaId));
        minMaxVal.add((int) mPropConfigList.get(propId).getMaxValue(areaId));

        return minMaxVal;
    }

    protected boolean checkIfCarPropertyValueValid(CarPropertyValue carPropertyValue) {
        if (null == carPropertyValue) {
            Log.e(TAG, "NUll value received for carPropertyValue ");
            return false;
        }

        String propId = HVACPropertyConstants.getPropertyName(carPropertyValue.getPropertyId());
        String areaId = HVACPropertyConstants.toString(carPropertyValue.getAreaId());

        if (null == carPropertyValue.getValue()) {
            Log.e(TAG, " Null value received for " + propId + " area id " + areaId );
            return false;
        }

        if (VehiclePropertyStatus.UNAVAILABLE.ordinal() == carPropertyValue.getStatus()) {
            Log.e(TAG, carPropertyValue.getValue() +
                    " value received for " + propId + " area id " + areaId +
                    " with property status as UNAVAILABLE ");
            return false;
        }

        if (VehiclePropertyStatus.ERROR.ordinal() == carPropertyValue.getStatus()) {
            Log.e(TAG, carPropertyValue.getValue() +
                    " value received for " + propId + " area id " + areaId +
                    " with property status as ERROR ");
            return false;
        }


        return true;
    }

    protected HvacVehicleDataListener getOnChangeEventListener(int mainPropId,
                                                               CarPropertyValue carPropertyValue) {
        if (!checkIfCarPropertyValueValid(carPropertyValue)) {
            Log.e(TAG, "Failed to handle carPropertyValue in onChangeEvent ");
            return null;
        }

        int areaId = carPropertyValue.getAreaId();
        int currPropId = carPropertyValue.getPropertyId();

        Log.d(TAG, HVACPropertyConstants.getPropertyName(currPropId) +
                " Change received for area id " +
                HVACPropertyConstants.toString(areaId) +
                "\t Value\t" + carPropertyValue.getValue() +
                "\t Status\t" + carPropertyValue.getStatus());

        return getAppListener(mainPropId, areaId);
    }

    protected void customOnChangeEventHandler(CarPropertyValue carPropertyValue) {
        if (null == carPropertyValue) {
            Log.e(TAG, "NUll value received for carPropertyValue in customOnChangeEventHandler ");
        }

        Log.e(TAG, HVACPropertyConstants.getPropertyName(carPropertyValue.getPropertyId()) +
                " No handler found for property change notifications !!!");
    }

    protected void defaultOnChangeEventHandler(CarPropertyValue carPropertyValue) {
        if (INVALID_PROP_ID == mOnChangeEventListenerID) {
            Log.e(TAG, " Property ID to handle change notifications is not set ");
            return;
        }

        HvacVehicleDataListener listener = getOnChangeEventListener(
                mOnChangeEventListenerID,
                carPropertyValue);

        if (null == listener) {
            return;
        }

        listener.onVehicleDataChanged(carPropertyValue.getValue());
    }

    protected boolean ifNull(Object value) {
        return null == value;
    }

    private boolean isReadableProperty(int access) {
        if ((VehiclePropertyAccess.READ_WRITE == access) ||
                (VehiclePropertyAccess.READ == access)) {
            return true;
        }
        return false;
    }
}
