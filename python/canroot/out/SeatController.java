    /**
    * this method is used for compartment mode control.
    *
    * supported arch : CLEA ONLY.
    * property access : READ.
    * @return errorcode, {@link #ERROR_UNSURPPORT_ARCH} or {@link #ERROR_UNSURPPORT_CALIBRATION}
    * or returns value if no error .
    */
    public Boolean getSeatCompartmentRoofControlSwitchAvailable() {
        if (VehicleController.isCleaArch()) {
            //wait for hal impl
            return false;
            // return VehicleController.getInstance().getBoolean(PatacProperty.SEAT_PASSENGER_COMPARTMENT_MODE_ROOF_CONTROL_SWITCH_CUSTOMIZATION_SETTING_AVAILABLE, VehicleArea.GLOBAL);
        } else {
            Log.e(TAG, "unsupported ARCH!");
            return false;
        }
    }

    /**
    * this method is used for registerSeatCompartmentRoofControlSwitchAvailableListener.
    *
    * supported arch : CLEA ONLY.
    */
    public void registerSeatCompartmentRoofControlSwitchAvailableListener(SeatCompartmentRoofControlSwitchAvailableListener l) {
        if (VehicleController.isCleaArch()) {
            if (l != null) {
                VehicleController.getInstance().registerSignalCallback(l);
            } else {
                Log.e(TAG, "Listener is null");
            }
        } else {
            Log.e(TAG, "unsupported ARCH!");
        }
    }

    /**
    * this method is used for unregisterSeatCompartmentRoofControlSwitchAvailableListener.
    *
    * supported arch : CLEA ONLY.
    */
    public void unregisterSeatCompartmentRoofControlSwitchAvailableListener(SeatCompartmentRoofControlSwitchAvailableListener l) {
        if (VehicleController.isCleaArch()) {
            if (l != null) {
                VehicleController.getInstance().unregisterSignalCallback(l);
            } else {
                Log.w(TAG, "Listener is null");
            }
        } else {
            Log.e(TAG, "unsupported ARCH!");
        }
    }

    /**
    * this class is used for listen to compartment mode control event.
    *
    * supported arch : CLEA ONLY.
    * property access : READ.
    * see {@link #registerSeatCompartmentRoofControlSwitchAvailablelistener} and {@link #unregisterSeatCompartmentRoofControlSwitchAvailableListener}
    */
    public abstract class SeatCompartmentRoofControlSwitchAvailableListener extends SignalListener<Boolean> {

        public SeatCompartmentRoofControlSwitchAvailableListener() {
            //wait for hal impl
            // super(PatacProperty.SEAT_PASSENGER_COMPARTMENT_MODE_ROOF_CONTROL_SWITCH_CUSTOMIZATION_SETTING_AVAILABLE, VehicleArea.GLOBAL, CarPropertyManager.SENSOR_RATE_ONCHANGE);
        }

        protected SeatCompartmentRoofControlSwitchAvailableListener(int propertyId, int area, float rate) {
            super(propertyId, area, rate);
        }

        protected void onSignalChanged(CarPropertyValue<Boolean> value) {
            if(value != null) onSeatCompartmentRoofControlSwitchAvailableChanged(value.getValue());
        }

        public abstract void onSeatCompartmentRoofControlSwitchAvailableChanged(Boolean value);
    }

    /**
    * this method is used for compartment mode control.
    *
    * supported arch : CLEA ONLY.
    * property access : WRITE.
    * @return errocode {@link #ERROR_NONE} or {@link #ERROR_UNSURPPORT_ARCH} or {@link #ERROR_UNSURPPORT_CALIBRATION}
    */
    public int setSeatCompartmentRoofControlSwitchPositionRequest(int value) {
        if (VehicleController.isCleaArch()) {
            // wait for hal impl
            // VehicleController.getInstance().setValue(PatacProperty.SEAT_PASSENGER_COMPARTMENT_MODE_CUSTOMIZED_ROOF_CONTROL_SWITCH_POSITION_REQUEST, VehicleArea.GLOBAL, value);
            return ERROR_NONE;
        } else {
            Log.e(TAG, "unsupported ARCH!");
            return ERROR_UNSURPPORT_ARCH;
        }
    }

    /**
    * this method is used for compartment mode control.
    *
    * supported arch : CLEA ONLY.
    * property access : READ.
    * @return errorcode, {@link #ERROR_UNSURPPORT_ARCH} or {@link #ERROR_UNSURPPORT_CALIBRATION}
    * or returns value if no error .
    */
    public int getSeatCompartmentRoofControlSwitchPositionStatus() {
        if (VehicleController.isCleaArch()) {
            // wait for hal impl
            // return VehicleController.getInstance().getInt(PatacProperty.SEAT_PASSENGER_COMPARTMENT_MODE_CUSTOMIZATION_ROOF_CONTROL_SWITCH_POSITION_STATUS, VehicleArea.GLOBAL);
        } else {
            Log.e(TAG, "unsupported ARCH!");
            return ERROR_UNSURPPORT_ARCH;
        }
    }

    /**
    * this method is used for registerSeatCompartmentRoofControlSwitchPositionStatusListener.
    *
    * supported arch : CLEA ONLY.
    */
    public void registerSeatCompartmentRoofControlSwitchPositionStatusListener(SeatCompartmentRoofControlSwitchPositionStatusListener l) {
        if (VehicleController.isCleaArch()) {
            if (l != null) {
                VehicleController.getInstance().registerSignalCallback(l);
            } else {
                Log.e(TAG, "Listener is null");
            }
        } else {
            Log.e(TAG, "unsupported ARCH!");
        }
    }

    /**
    * this method is used for unregisterSeatCompartmentRoofControlSwitchPositionStatusListener.
    *
    * supported arch : CLEA ONLY.
    */
    public void unregisterSeatCompartmentRoofControlSwitchPositionStatusListener(SeatCompartmentRoofControlSwitchPositionStatusListener l) {
        if (VehicleController.isCleaArch()) {
            if (l != null) {
                VehicleController.getInstance().unregisterSignalCallback(l);
            } else {
                Log.w(TAG, "Listener is null");
            }
        } else {
            Log.e(TAG, "unsupported ARCH!");
        }
    }

    /**
    * this class is used for listen to compartment mode control event.
    *
    * supported arch : CLEA ONLY.
    * property access : READ.
    * see {@link #registerSeatCompartmentRoofControlSwitchPositionStatuslistener} and {@link #unregisterSeatCompartmentRoofControlSwitchPositionStatusListener}
    */
    public abstract class SeatCompartmentRoofControlSwitchPositionStatusListener extends SignalListener<Integer> {

        public SeatCompartmentRoofControlSwitchPositionStatusListener() {
            // wait for hal impl
            // super(PatacProperty.SEAT_PASSENGER_COMPARTMENT_MODE_CUSTOMIZATION_ROOF_CONTROL_SWITCH_POSITION_STATUS, VehicleArea.GLOBAL, CarPropertyManager.SENSOR_RATE_ONCHANGE);
        }

        protected SeatCompartmentRoofControlSwitchPositionStatusListener(int propertyId, int area, float rate) {
            super(propertyId, area, rate);
        }

        protected void onSignalChanged(CarPropertyValue<Integer> value) {
            if(value != null) onSeatCompartmentRoofControlSwitchPositionStatusChanged(value.getValue());
        }

        public abstract void onSeatCompartmentRoofControlSwitchPositionStatusChanged(int value);
    }

    /**
    * this method is used for compartment mode control.
    *
    * supported arch : CLEA ONLY.
    * property access : READ.
    * @return errorcode, {@link #ERROR_UNSURPPORT_ARCH} or {@link #ERROR_UNSURPPORT_CALIBRATION}
    * or returns value if no error .
    */
    public int getSeatCompartmentRoofControlSwitchRecallResponseStatus() {
        if (VehicleController.isCleaArch()) {
            // wait for hal impl
            // return VehicleController.getInstance().getInt(PatacProperty.SEAT_PASSENGER_COMPARTMENT_MODE_ROOF_CONTROL_SWITCH_RECALL_RESPONSE_STATUS, VehicleArea.GLOBAL);
        } else {
            Log.e(TAG, "unsupported ARCH!");
            return ERROR_UNSURPPORT_ARCH;
        }
    }

    /**
    * this method is used for registerSeatCompartmentRoofControlSwitchRecallResponseStatusListener.
    *
    * supported arch : CLEA ONLY.
    */
    public void registerSeatCompartmentRoofControlSwitchRecallResponseStatusListener(SeatCompartmentRoofControlSwitchRecallResponseStatusListener l) {
        if (VehicleController.isCleaArch()) {
            if (l != null) {
                VehicleController.getInstance().registerSignalCallback(l);
            } else {
                Log.e(TAG, "Listener is null");
            }
        } else {
            Log.e(TAG, "unsupported ARCH!");
        }
    }

    /**
    * this method is used for unregisterSeatCompartmentRoofControlSwitchRecallResponseStatusListener.
    *
    * supported arch : CLEA ONLY.
    */
    public void unregisterSeatCompartmentRoofControlSwitchRecallResponseStatusListener(SeatCompartmentRoofControlSwitchRecallResponseStatusListener l) {
        if (VehicleController.isCleaArch()) {
            if (l != null) {
                VehicleController.getInstance().unregisterSignalCallback(l);
            } else {
                Log.w(TAG, "Listener is null");
            }
        } else {
            Log.e(TAG, "unsupported ARCH!");
        }
    }

    /**
    * this class is used for listen to compartment mode control event.
    *
    * supported arch : CLEA ONLY.
    * property access : READ.
    * see {@link #registerSeatCompartmentRoofControlSwitchRecallResponseStatuslistener} and {@link #unregisterSeatCompartmentRoofControlSwitchRecallResponseStatusListener}
    */
    public abstract class SeatCompartmentRoofControlSwitchRecallResponseStatusListener extends SignalListener<Integer> {

        public SeatCompartmentRoofControlSwitchRecallResponseStatusListener() {
            // wait for hal impl
            // super(PatacProperty.SEAT_PASSENGER_COMPARTMENT_MODE_ROOF_CONTROL_SWITCH_RECALL_RESPONSE_STATUS, VehicleArea.GLOBAL, CarPropertyManager.SENSOR_RATE_ONCHANGE);
        }

        protected SeatCompartmentRoofControlSwitchRecallResponseStatusListener(int propertyId, int area, float rate) {
            super(propertyId, area, rate);
        }

        protected void onSignalChanged(CarPropertyValue<Integer> value) {
            if(value != null) onSeatCompartmentRoofControlSwitchRecallResponseStatusChanged(value.getValue());
        }

        public abstract void onSeatCompartmentRoofControlSwitchRecallResponseStatusChanged(int value);
    }

