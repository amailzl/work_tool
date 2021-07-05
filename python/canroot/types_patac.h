#ifndef HIDL_GENERATED_VENDOR_PATAC_VEHICLE_V1_0_TYPES_H
#define HIDL_GENERATED_VENDOR_PATAC_VEHICLE_V1_0_TYPES_H

#include <android/hardware/automotive/vehicle/2.0/types.h>

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace vendor {
namespace patac {
namespace vehicle {
namespace V1_0 {

// Forward declaration for forward reference support:
enum class PatacProperty : int32_t;
enum class VcuExteriorLampSwitchRequestSignalGroupFtpVcuRequest : int32_t;
enum class VcuExteriorLampSwitchRequestSignalGroupHazardLampVcuRequest : int32_t;
enum class MirrorPositionStatus : int32_t;
enum class DriverSeatPositionRequest : int32_t;
enum class DriverSeatPositionStatus : int32_t;
enum class MirrorPositionRequest : int32_t;
enum class VirtualControlAutoHighBeamRequest : int32_t;
enum class InfotainmentHeatedSteeringWheelLevelRequest : int32_t;
enum class AdaptiveCruiseControlAutoSetSpeedCustomization : int32_t;
enum class AdaptiveCruiseControlRouteSpeedAdaptationCustomization : int32_t;
enum class AdasPerformanceModeCustomization : int32_t;
enum class AdvancedParkAssistVcuSignalGroupParkAssistSoftButtonSelectedStateRaw : int32_t;
enum class AutoApplyEpbCustomization : int32_t;
enum class AutoCloseMovableWindowDrivingCustomization : int32_t;
enum class AutoCloseMovableWindowRemoteCustomization : int32_t;
enum class AutoHighBeamAssistCustomization : int32_t;
enum class AutoVehicleHoldScreenConfiguration : int32_t;
enum class AutoVehicleHoldSwitchStatusVirtualButton : int32_t;
enum class BrakeHealthMonitorSystemStatus : int32_t;
enum class BrakePartWearInitializeStatus : int32_t;
enum class CabinAirQualityControlCustomization : int32_t;
enum class CollisionPreparationSystemCustomization : int32_t;
enum class CustomModeAvhSelectionOfGearCustomization : int32_t;
enum class DomeLightDefeatRequest : int32_t;
enum class DomeLightOffRequest : int32_t;
enum class DomeLightOnRequest : int32_t;
enum class DoorOpeningWarningCustomization : int32_t;
enum class DriverSeatBeltReminderAsiaChimeEventState : int32_t;
enum class DriverSeatMemoryRecallStatus : int32_t;
enum class DriverWindowMotionStatus : int32_t;
enum class DriverWindowPercentagePositionStatusValidity : int32_t;
enum class DriverWindowPositionStatus : int32_t;
enum class FirstRowCooledSeatIndicationControlValidity : int32_t;
enum class FirstRowHeatedSeatIndicationControlValidity : int32_t;
enum class FrontPadWearInitializeRequest : int32_t;
enum class FrontRotorWearInitializeRequest : int32_t;
enum class FrontSunshadeControlRequest : int32_t;
enum class FrontSunshadePercentageControlRequest : int32_t;
enum class FrontSunshadePercentagePositionStatusValidity : int32_t;
enum class FrontSunshadePositionStatus : int32_t;
enum class HeadAndParkLampsCurrentSelectionValue : int32_t;
enum class HeatedSteeringWheelIndication : int32_t;
enum class HeatedSteeringWheelLevelsAvailable : int32_t;
enum class HillDescentControlScreenConfiguration : int32_t;
enum class HillDescentControlSwitchStatusVirtualButton : int32_t;
enum class HillDescentControlSystemStatus : int32_t;
enum class HvacRemoteStartSettingCustomization : int32_t;
enum class IlsAmbientLightAnimationControlRequestServiceVcu : int32_t;
enum class IlsAmbientLightBrightnessLevelSettingRequestEnableServiceVcu : int32_t;
enum class IlsAmbientLightOnOffControlRequestServiceVcu : int32_t;
enum class IlsAmbientLightRgbColorValueSettingRequestEnableServiceVcu : int32_t;
enum class InteriorDimmingChangeRequest : int32_t;
enum class InteriorDimmingDisplayChangeRequest : int32_t;
enum class LaneCenteringAdaptiveOffsetCustomization : int32_t;
enum class LaneCenteringConvenienceSignalGroupLaneCenteringControlIndicationRequestFcm : int32_t;
enum class LaneCenteringConvenienceSignalGroupLaneCenteringControlIndicationRequestIdcmA : int32_t;
enum class LaneChangeByCommandCustomization : int32_t;
enum class LaneDetectionWarningAndControlCustomization : int32_t;
enum class LeftRearWindowPositionStatus : int32_t;
enum class LeftTurnLampActive : int32_t;
enum class NavigationOnAdasCustomization : int32_t;
enum class NavigationOnAdasLaneChangeTypeCustomization : int32_t;
enum class OsrvmComfortFoldCustomization : int32_t;
enum class ParkAssistSoftButtonRequest : int32_t;
enum class PassengerWindowMotionStatus : int32_t;
enum class PassengerWindowPercentagePositionStatusValidity : int32_t;
enum class PassengerWindowPositionStatus : int32_t;
enum class PedestrianWarningIndicationRequest : int32_t;
enum class Pm25FilterRemainingLifeValidity : int32_t;
enum class RearCrossTrafficAssistCustomization : int32_t;
enum class RearLeftSideSunblindInfotainmentComfortRequest : int32_t;
enum class RearLeftSideSunblindPositionStatus : int32_t;
enum class RearLeftWindowMotionStatus : int32_t;
enum class RearLeftWindowPercentagePositionStatusValidity : int32_t;
enum class RearPadWearInitializeRequest : int32_t;
enum class RearRightSideSunblindInfotainmentComfortRequest : int32_t;
enum class RearRightSideSunblindPositionStatus : int32_t;
enum class RearRightWindowMotionStatus : int32_t;
enum class RearRightWindowPercentagePositionStatusValidity : int32_t;
enum class RearRotorWearInitializeRequest : int32_t;
enum class RearSunshadeControlRequest : int32_t;
enum class RearSunshadePercentageControlRequest : int32_t;
enum class RearSunshadePercentagePositionStatusValidity : int32_t;
enum class RearSunshadePositionStatus : int32_t;
enum class RearVirtualBumperCustomization : int32_t;
enum class RemoteStartHeatSteeringWheelCustomization : int32_t;
enum class RestoreCustomizationFactoryDefaults : int32_t;
enum class RightRearWindowPositionStatus : int32_t;
enum class RightTurnLampActive : int32_t;
enum class SeatPassengerCompartmentModeCurrentModeStatus : int32_t;
enum class SeatPassengerCompartmentModeHmiRequest : int32_t;
enum class SeatPassengerCompartmentModeNotificationHmiDisplayCommand : int32_t;
enum class SeatPassengerCompartmentModeRecallResponseStatus : int32_t;
enum class SeatPassengerCompartmentModeRoofControlSwitchSelectedStatus : int32_t;
enum class SecondRowComfortModeMuteRequestInfo : int32_t;
enum class SecondRowCooledSeatIndicationControlValidity : int32_t;
enum class SecondRowHeatedSeatIndicationControlValidity : int32_t;
enum class SunroofControlRequest : int32_t;
enum class SunroofPercentageControlRequest : int32_t;
enum class SunroofPercentagePositionStatusValidity : int32_t;
enum class SunroofPositionStatus : int32_t;
enum class SystemPowerMode : int32_t;
enum class ThirdRowCooledSeatIndicationControlValidity : int32_t;
enum class ThirdRowHeatedSeatIndicationControlValidity : int32_t;
enum class TimeDisplayFormatRadioLow : int32_t;
enum class TractionAndStabilitySystemCurrentStatus : int32_t;
enum class TractionAndStabilitySystemDriverRequest : int32_t;
enum class TractionAndStabilitySystemDriverRequestValidity : int32_t;
enum class TractionAndStabilitySystemScreenConfiguration : int32_t;
enum class TrafficLightAndStopLineControlCustomization : int32_t;
enum class TrafficSignMemoryCustomization : int32_t;
enum class VehicleGreetModeCustomization : int32_t;
enum class VehicleStabilityEnhancementStatus : int32_t;
enum class VehicleTheftNotificationSignalGroupAhbaControlReminder : int32_t;
enum class VehicleTheftNotificationSignalGroupFrontFogControlReminder : int32_t;
enum class VehicleTheftNotificationSignalGroupHeadlampControlReminder : int32_t;
enum class VehicleTheftNotificationSignalGroupRearFogControlReminder : int32_t;
enum class VirtualControlDomeLightStatusDomeLightCurrentSelectionValue : int32_t;
enum class VirtualControlPowerWindowLockoutRequest : int32_t;
enum class VirtualControlPowerWindowLockoutStatusCurrentSelectionValue : int32_t;
enum class VrBcmRequestSignalGroupWiperMistRequestVcu : int32_t;
enum class V2XWarningIndicationRequest : int32_t;
enum class WindowControlRequestSignalGroupDriverWindowInfotainmentComfortRequest : int32_t;
enum class WindowControlRequestSignalGroupPassengerWindowInfotainmentComfortRequest : int32_t;
enum class WindowControlRequestSignalGroupRearLeftWindowInfotainmentComfortRequest : int32_t;
enum class WindowControlRequestSignalGroupRearRightWindowInfotainmentComfortRequest : int32_t;
enum class WiperStatus : int32_t;

enum class PatacProperty : int32_t {
    AIRBAG_INDICATIONS_SIGNAL_GROUP_FASTEN_DRIVER_SEATBELT_INDICATION_CONTROL_INDICATION_ON = 555758382 /* (((0x332E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    INTERIOR_DIMMING_LEVEL = 557855907 /* (((0x34A3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    TACHOMETER_ENGINE_SPEED = 559960067 /* (((0x5003 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Request Ionizer Setting Change Info (ReqIonStngChgInfo)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    HVAC_IONIZER_STATE_CHANGE = 555765764 /* (((0x5004 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Single Seat Active (IndSingSeatAct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    HVAC_SINGLE_SEAT_MODE = 555765765 /* (((0x5005 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Cabin PM 2.5 Pollution (CabinPM25Plu)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HVAC_PM25 = 557862918 /* (((0x5006 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Cabin PM 10 Pollution (CabinPM10Plu)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HVAC_PM10 = 557862919 /* (((0x5007 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Cabin AQI data (CabinAQI)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HVAC_AQI = 557862920 /* (((0x5008 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Cabin CO2 PPM Active (CabinCO2PPM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HVAC_CO2 = 557862921 /* (((0x5009 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Engine Air Filter Monitor Driver Request (EngAirFiltMonDrvrReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ENGINE_AIR_FILTER_MONITOR_DRIVER_REQUEST = 557862924 /* (((0x500C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    HW_KEYEVENT_SIMULATE_INPUT = 557928461 /* (((0x500D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Notification Front Passenger Seat Occupancy Status(NotiFrntPasSeatOccSta)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FRONT_PASSENGER_RESTRAINT_OCCUPANCY_STATUS = 557862927 /* (((0x500F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Driver Heated/Cooled Seat Mode Indication Control : Seat Mode Indication 1 ~3 (DrvHCSMInd1 ~3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVER_HEATED_COOLED_SEAT_MODE = 557928464 /* (((0x5010 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Passenger Heated/Cooled Seat Mode Indication Control : Seat Mode Indication 1 ~3 (DrvHCSMInd1 ~3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PASSENGER_HEATED_COOLED_SEAT_MODE = 557928465 /* (((0x5011 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Heated/Cooled Seat Mode Indication Control : Seat Mode Indication 1 ~3 (DrvHCSMInd1 ~3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_RIGHT_HEATED_COOLED_SEAT_MODE = 557928466 /* (((0x5012 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Heated/Cooled Seat Mode Indication Control : Seat Mode Indication 1 ~3 (DrvHCSMInd1 ~3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_LEFT_HEATED_COOLED_SEAT_MODE = 557928467 /* (((0x5013 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Third Row Right Heated/Cooled Seat Mode Indication Control : Seat Mode Indication 1 ~3 (DrvHCSMInd1 ~3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    THIRD_ROW_RIGHT_HEATED_COOLED_SEAT_MODE = 557928468 /* (((0x5014 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Third Row Left Heated/Cooled Seat Mode Indication Control : Seat Mode Indication 1 ~3 (DrvHCSMInd1 ~3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    THIRD_ROW_LEFT_HEATED_COOLED_SEAT_MODE = 557928469 /* (((0x5015 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Driver Heated/Cooled Seat Level Indication Control : Seat Level 1 ~5 (DrvHCSLSeatLev1 ~5)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVER_HEATED_COOLED_SEAT_LEVEL = 557928470 /* (((0x5016 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Passenger Heated/Cooled Seat Level Indication Control : Seat Level 1 ~5 (PassHCSLSeatLev1 ~5)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PASSENGER_HEATED_COOLED_SEAT_LEVEL = 557928471 /* (((0x5017 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Heated/Cooled Seat Level Indication Control : Seat Level 1 ~5 (RRHCSLSeatLev1 ~5)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_RIGHT_HEATED_COOLED_SEAT_LEVEL = 557928472 /* (((0x5018 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Heated/Cooled Seat Level Indication Control : Seat Level 1 ~5 (RLHCSLSeatLev1 ~5)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_LEFT_HEATED_COOLED_SEAT_LEVEL = 557928473 /* (((0x5019 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Third Row Right Heated/Cooled Seat Level Indication Control : Seat Level 1~5 (ThdRRHCSLSeatLev1 ~5)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    THIRD_ROW_RIGHT_HEATED_COOLED_SEAT_LEVEL = 557928474 /* (((0x501A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Third Row Left Heated/Cooled Seat Level Indication Control : Seat Level 1 ~5 (ThdRLHCSLSeatLev1 ~5)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    THIRD_ROW_LEFT_HEATED_COOLED_SEAT_LEVEL = 557928475 /* (((0x501B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Third Row Left Heated/Cooled Seat Level Indication Control : Seat Level 1 ~5 (ThdRLHCSLSeatLev1 ~5)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    SEAT_CUSHION_AND_BACK_VENTED_LEVEL_CONTROL = 622874652 /* (((0x501C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Third Row Left Heated/Cooled Seat Level Indication Control : Seat Level 1 ~5 (ThdRLHCSLSeatLev1 ~5)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    SEAT_BACK_HEATED_LEVEL_CONTROL = 622874653 /* (((0x501D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Third Row Left Heated/Cooled Seat Level Indication Control : Seat Level 1 ~5 (ThdRLHCSLSeatLev1 ~5)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    SEAT_BACK_AND_CUSHION_HEATED_LEVEL_CONTROL = 622874654 /* (((0x501E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Fuel Filter Life Reset Requested (FuelFltLfRstRqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    FUEL_FILTER_LIFE_RESET_REQUESTED = 555765792 /* (((0x5020 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Engine Oil Life Reset Request_IPC (EngOilLfRstRq_IPC)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    ENGINE_OIL_LIFE_RESET_REQUEST = 555765793 /* (((0x5021 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED1_BCM (ILSAmbLgtLED1AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED1_RGBB = 557928482 /* (((0x5022 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED2_BCM (ILSAmbLgtLED2AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED2_RGBB = 557928483 /* (((0x5023 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED3_BCM (ILSAmbLgtLED3AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED3_RGBB = 557928484 /* (((0x5024 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED4_BCM (ILSAmbLgtLED4AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED4_RGBB = 557928485 /* (((0x5025 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED5_BCM (ILSAmbLgtLED5AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED5_RGBB = 557928486 /* (((0x5026 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED6_BCM (ILSAmbLgtLED6AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED6_RGBB = 557928487 /* (((0x5027 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED7_BCM (ILSAmbLgtLED7AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED7_RGBB = 557928488 /* (((0x5028 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED8_BCM (ILSAmbLgtLED8AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED8_RGBB = 557928489 /* (((0x5029 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED9_BCM (ILSAmbLgtLED9AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED9_RGBB = 557928490 /* (((0x502A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED10_BCM (ILSAmbLgtLED10AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED10_RGBB = 557928491 /* (((0x502B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED11_BCM (ILSAmbLgtLED11AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED11_RGBB = 557928492 /* (((0x502C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light RGB Color Value Setting Request Service_VCU (ILSAmbLgtRed~Gren~BluColrValSetReqServVCU)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    ILS_AMBIENT_LIGHT_RGB_COLOR_VALUE_SETTING_REQUEST_SERVICE_VCU = 557928493 /* (((0x502D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Heated Seat Configuration (DrHtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HEATED_SEAT_CONFIGURATION = 622874670 /* (((0x502E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Heated Seat Available (DrHtSeatAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HEATED_SEAT_AVAILABLE = 622874671 /* (((0x502F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Vent Seat Configuration (DrVtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VENT_SEAT_CONFIGURATION = 622874672 /* (((0x5030 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Vent Seat Available (DrVtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VENT_SEAT_AVAILABLE = 622874673 /* (((0x5031 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Heated Seat Indication Control Validity (FirRHSIndCtrl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HEATED_SEAT_INDICATION_CONTROL_VALIDITY = 624971826 /* (((0x5032 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Cooled Seat Indication Control Validity (FirRCSIndCtrl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    COOLED_SEAT_INDICATION_CONTROL_VALIDITY = 624971827 /* (((0x5033 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * VCU Exterior Lamp Switch Request Signal Group : Main Light Switch VCU Request (MLSVCUReqst)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum VirtualControlHeadAndParkLampsRequestAuthenticated
     */
    VIRTUAL_CONTROL_HEAD_AND_PARK_LAMPS_REQUEST_AUTHENTICATED = 557862964 /* (((0x5034 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * VCU Exterior Lamp Switch Request Signal Group : Front Fog VCU Request (FrtFogVCUReqst)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum VirtualControlFogLampsFrontRequest
     */
    VIRTUAL_CONTROL_FOG_LAMPS_FRONT_REQUEST = 557862965 /* (((0x5035 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * VCU Exterior Lamp Switch Request Signal Group : Rear Fog VCU Request (RearFogVCUReqst)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum VirtualControlFogLampsRearRequest
     */
    VIRTUAL_CONTROL_FOG_LAMPS_REAR_REQUEST = 557862966 /* (((0x5036 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Dome_light_ON_request(DomLgtONreq)
     * Dome_light_OFF_request(DomLgtOFFreq)
     * Dome_light_Defeat_request(DomLgtDeftreq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    VIRTUAL_CONTROL_DOME_LIGHT_REQUEST = 557928503 /* (((0x5037 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * VCU Exterior Lamp Switch Request Signal Group : FTP VCU Request (FTPVCUReqst)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum VcuExteriorLampSwitchRequestSignalGroupFtpVcuRequest
     */
    VCU_EXTERIOR_LAMP_SWITCH_REQUEST_SIGNAL_GROUP_FTP_VCU_REQUEST = 557862968 /* (((0x5038 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * VCU Exterior Lamp Switch Request Signal Group : Hazard Lamp VCU Request (HzrdVCUReqst)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum VcuExteriorLampSwitchRequestSignalGroupHazardLampVcuRequest
     */
    VCU_EXTERIOR_LAMP_SWITCH_REQUEST_SIGNAL_GROUP_HAZARD_LAMP_VCU_REQUEST = 557862969 /* (((0x5039 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Second Row Comfort Mode Request Info (SecRwLtCmftMdRqInf)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum SecondRowComfortModeRequestInfo
     */
    SECOND_ROW_COMFORT_MODE_REQUEST_INFO = 557862970 /* (((0x503A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Second Row Comfort Mode Available (SecRwLtCmftMdAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SecondRowComfortModeAvailabl
     */
    SECOND_ROW_COMFORT_MODE_AVAILABLE = 555765819 /* (((0x503B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Second Row Comfort Mode Flag (SecRwCmftMd1~4Flg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SecondRowComfortModeFlag
     */
    SECOND_ROW_COMFORT_MODE_FLAG = 557928508 /* (((0x503C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Second Row Comfort Motion Status (SecRwLtCmftMtnSt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SecondRowComfortMotionStatus
     */
    SECOND_ROW_COMFORT_MOTION_STATUS = 557862973 /* (((0x503D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Second Row Current Mode (SecRwLtCurMd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SecondRowCurrentMode
     */
    SECOND_ROW_CURRENT_MODE = 557862974 /* (((0x503E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Second Row Comfort Mode Remind Info (SecRwLtCmftMdRmndInf)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SecondRowComfortModeRemindInfo
     */
    SECOND_ROW_COMFORT_MODE_REMIND_INFO = 557862975 /* (((0x503F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Mirror Position Request (DrvRvMirPosRecReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum MirrorPositionRequest
     */
    MIRROR_POSITION_REQUEST = 560025664 /* (((0x5040 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Mirror Position Status (DriverMirPsnValdty)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum MirrorPositionStatus
     */
    MIRROR_POSITION_STATUS = 560025665 /* (((0x5041 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Driver Seat Position Request (DrvStPosRecReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum DriverSeatPositionRequest
     */
    DRIVER_SEAT_POSITION_REQUEST = 560025666 /* (((0x5042 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Driver Seat Position Status (DriverMirPsnValdty)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum DriverSeatPositionStatus
     */
    DRIVER_SEAT_POSITON_STAUTS = 560025667 /* (((0x5043 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     * VCU Exterior Lamp Switch Request Signal Group : AHBA VCU Request (AHBAVCUReqst)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum VirtualControlAutoHighBeamRequest
     */
    VIRTUAL_CONTROL_AUTO_HIGH_BEAM_REQUEST = 557862980 /* (((0x5044 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * HMI Seat Heat Cool Switches Signal Group : Infotainment Heated Steering Wheel Level Request (InfoHtdStrgWhlLvlReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum InfotainmentHeatedSteeringWheelLevelRequest
     */
    INFOTAINMENT_HEATED_STEERING_WHEEL_LEVEL_REQUEST = 557862981 /* (((0x5045 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : AHBA Control Available (AHBACtlAvliable)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VIRTUAL_CONTROL_AUTO_HIGH_BEAM_STATUS_USER_CONTROL_ALLOWED = 555757610 /* (((0x302A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : AHBA Control Reminder (AHBACtlRmder)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VehicleTheftNotificationSignalGroupAhbaControlReminder
     */
    VEHICLE_THEFT_NOTIFICATION_SIGNAL_GROUP_AHBA_CONTROL_REMINDER = 557854763 /* (((0x302B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : AHBA VCU Control Configuration (AHBAVCUCtlConfign)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VIRTUAL_CONTROL_AUTO_HIGH_BEAM_STATUS_CONTROL_AVAILABLE = 555757612 /* (((0x302C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Auto Hold Disabled Door Open Indication On (AHDisbldDrOpnIO)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    AUTO_HOLD_DISABLED_DOOR_OPEN_INDICATION_ON = 555757614 /* (((0x302E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Auto Hold Disabled Seatbelt Indication On (AHDisbldStbltIO)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    AUTO_HOLD_DISABLED_SEATBELT_INDICATION_ON = 555757615 /* (((0x302F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Auto Hold Enabled (AHEnbld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    AUTO_HOLD_ENABLED = 555757616 /* (((0x3030 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Auto Vehicle Hold Screen Configuration (AVHScrnCnfg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AutoVehicleHoldScreenConfiguration
     */
    AUTO_VEHICLE_HOLD_SCREEN_CONFIGURATION = 557854858 /* (((0x308A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Auto Vehicle Hold configuration availability (AVHScrnCnfgAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    AUTO_VEHICLE_HOLD_CONFIGURATION_AVAILABILITY = 555757707 /* (((0x308B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Auto Vehicle Hold Switch Status Virtual Button (AVHSwtchStatsVirBtn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AutoVehicleHoldSwitchStatusVirtualButton
     */
    AUTO_VEHICLE_HOLD_SWITCH_STATUS_VIRTUAL_BUTTON = 557854862 /* (((0x308E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Auto High Beam Control Indication On (AutoHgBmCtrlInOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VIRTUAL_CONTROL_AUTO_HIGH_BEAM_STATUS_CURRENT_SELECTION_VALUE = 555757806 /* (((0x30EE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Brake Health Monitor System Status (BHMSStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum BrakeHealthMonitorSystemStatus
     */
    BRAKE_HEALTH_MONITOR_SYSTEM_STATUS = 557854975 /* (((0x30FF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Brake Part Wear Initialize Status (BrkPrtWrInitStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum BrakePartWearInitializeStatus
     */
    BRAKE_PART_WEAR_INITIALIZE_STATUS = 557855042 /* (((0x3142 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Brake Temperature Warming (BrkTempWarm)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    BRAKE_TEMPERATURE_WARMING = 555757902 /* (((0x314E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Driver Door Ajar Switch Active (DDAjrSwAtv)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVER_DOOR_AJAR_STATUS = 555758011 /* (((0x31BB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Dome_light_Defeat_active (DomLgtDeftAtv)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VIRTUAL_CONTROL_DOME_LIGHT_STATUS_DOME_DEFEAT_CURRENT_SELECTION_VALUE = 555758054 /* (((0x31E6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Dome_light_Defeat_Configuration (DomLgtDeftConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VIRTUAL_CONTROL_DOME_LIGHT_STATUS_DOME_DEFEAT_AVAILABLE = 555758055 /* (((0x31E7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Dome_light_Defeat_request (DomLgtDeftreq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum DomeLightDefeatRequest
     */
    DOME_LIGHT_DEFEAT_REQUEST = 557855208 /* (((0x31E8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Dome_light_OFF_request (DomLgtOFFreq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum DomeLightOffRequest
     */
    DOME_LIGHT_OFF_REQUEST = 557855209 /* (((0x31E9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Dome_light_ON_OFF_Configuration (DomLgtONOFFConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VIRTUAL_CONTROL_DOME_LIGHT_STATUS_DOME_LIGHT_AVAILABLE = 555758058 /* (((0x31EA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Dome_light_ON_OFF_status (DomLgtONOFFsts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VirtualControlDomeLightStatusDomeLightCurrentSelectionValue
     */
    VIRTUAL_CONTROL_DOME_LIGHT_STATUS_DOME_LIGHT_CURRENT_SELECTION_VALUE = 557855211 /* (((0x31EB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Dome_light_ON_request (DomLgtONreq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum DomeLightOnRequest
     */
    DOME_LIGHT_ON_REQUEST = 557855212 /* (((0x31EC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Driver Heated Seat Configuration (DrHtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVER_HEATED_SEAT_CONFIGURATION = 555758064 /* (((0x31F0 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Driver Vent Seat Configuration (DrVtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVER_VENT_SEAT_CONFIGURATION = 555758087 /* (((0x3207 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Percentage Window control Signal Group : Driver Window Control Position Request (DrWndCtrlPosReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    PERCENTAGE_WINDOW_CONTROL_SIGNAL_GROUP_DRIVER_WINDOW_CONTROL_POSITION_REQUEST = 557855240 /* (((0x3208 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Percentage Window control Signal Group : Driver Window Control Position Request Enable (DrWndCtrlPosReqEnbl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    PERCENTAGE_WINDOW_CONTROL_SIGNAL_GROUP_DRIVER_WINDOW_CONTROL_POSITION_REQUEST_ENABLE = 555758089 /* (((0x3209 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Driver Window Motion Status (DrWndMtnSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum DriverWindowMotionStatus
     */
    DRIVER_WINDOW_MOTION_STATUS = 557855242 /* (((0x320A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Driver Window Not Normalized Indication On (DrWndNtNrmIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVER_WINDOW_NOT_NORMALIZED_INDICATION_ON = 555758091 /* (((0x320B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Driver Window Percentage Position Status (DrWndPctPosSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVER_WINDOW_PERCENTAGE_POSITION_STATUS = 557855244 /* (((0x320C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Driver Window Percentage Position Status Validity (DrWndPctPosStsV)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum DriverWindowPercentagePositionStatusValidity
     */
    DRIVER_WINDOW_PERCENTAGE_POSITION_STATUS_VALIDITY = 557855245 /* (((0x320D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Driver SeatBelt Reminder Asia ChimeEventState (DrvSBltRmChmEvntStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum DriverSeatBeltReminderAsiaChimeEventState
     */
    DRIVER_SEAT_BELT_REMINDER_ASIA_CHIME_EVENT_STATE = 557855268 /* (((0x3224 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Driver Seat Memory Recall Status (DrvStMemRclStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum DriverSeatMemoryRecallStatus
     */
    DRIVER_SEAT_MEMORY_RECALL_STATUS = 557855339 /* (((0x326B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Driver Window Available (DrvWndAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVER_WINDOW_AVAILABLE = 555758204 /* (((0x327C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Driver Window Configuration (DrvWndCfg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVER_WINDOW_CONFIGURATION = 555758205 /* (((0x327D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Window Control Request Signal Group : Driver Window Infotainment Comfort Request (DrvWndInfoCmfReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum WindowControlRequestSignalGroupDriverWindowInfotainmentComfortRequest
     */
    WINDOW_CONTROL_REQUEST_SIGNAL_GROUP_DRIVER_WINDOW_INFOTAINMENT_COMFORT_REQUEST = 557855360 /* (((0x3280 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Driver Window Position Status (DrvWndPosStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum DriverWindowPositionStatus
     */
    DRIVER_WINDOW_POSITION_STATUS = 557855361 /* (((0x3281 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Airbag Indications Signal Group : Fasten Driver Seatbelt Indication Control Indication On (FDSIC_IO)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVER_SEAT_BELT_REMINDER_INDICATION_REQUEST = 555758402 /* (((0x3342 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : FTP Control Available (FTPCtlAvilable)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VEHICLE_THEFT_NOTIFICATION_SIGNAL_GROUP_FTP_CONTROL_AVAILABLE = 555758421 /* (((0x3355 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : FTP VCU Control Configuration (FTPVCUCtlConfign)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VEHICLE_THEFT_NOTIFICATION_SIGNAL_GROUP_FTP_VCU_CONTROL_CONFIGURATION = 555758422 /* (((0x3356 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * First Row Cooled Seat Indication Control Validity (FirRCSIndCtrl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum FirstRowCooledSeatIndicationControlValidity
     */
    FIRST_ROW_COOLED_SEAT_INDICATION_CONTROL_VALIDITY = 557855577 /* (((0x3359 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * First Row Heated Seat Indication Control Validity (FirRHSIndCtrl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum FirstRowHeatedSeatIndicationControlValidity
     */
    FIRST_ROW_HEATED_SEAT_INDICATION_CONTROL_VALIDITY = 557855578 /* (((0x335A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * PPEI Engine General Status 5 Signal Group : Fuel Level Percent (FlLvlPct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FUEL_INFORMATION_FILTERED_DISPLAY_TOTAL_FUEL_LEVEL_PERCENT = 559952733 /* (((0x335D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Front Fog Lamps Active (FrFogLmpsAct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VIRTUAL_CONTROL_FOG_LAMPS_FRONT_STATUS_CURRENT_SELECTION_VALUE = 555758439 /* (((0x3367 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : Front Fog VCU Control Configuration (FrontFogVCUCtlConfign)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VIRTUAL_CONTROL_FOG_LAMPS_FRONT_STATUS_CONTROL_AVAILABLE = 555758443 /* (((0x336B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Front Brake Pad Low (FrtBrkPdLw)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FRONT_BRAKE_PAD_LOW = 555758448 /* (((0x3370 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Front Brake Rotor Low (FrtBrkRotLw)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FRONT_BRAKE_ROTOR_LOW = 555758449 /* (((0x3371 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Front Brake Temperature (FrtBrkTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FRONT_BRAKE_TEMPERATURE = 557855602 /* (((0x3372 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : Front Fog Control Available (FrtFogCtlAvliable)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VIRTUAL_CONTROL_FOG_LAMPS_FRONT_STATUS_USER_CONTROL_ALLOWED = 555758454 /* (((0x3376 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : Front Fog Control Reminder (FrtFogCtlRmder)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VehicleTheftNotificationSignalGroupFrontFogControlReminder
     */
    VEHICLE_THEFT_NOTIFICATION_SIGNAL_GROUP_FRONT_FOG_CONTROL_REMINDER = 557855607 /* (((0x3377 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Front Pad Wear Initialize Request (FrtPdWrInitReqs)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum FrontPadWearInitializeRequest
     */
    FRONT_PAD_WEAR_INITIALIZE_REQUEST = 557855613 /* (((0x337D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Front Rotor Remain mileage (FrtRotRemge)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FRONT_ROTOR_REMAIN_MILEAGE = 557855619 /* (((0x3383 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Front Rotor Wear Initialize Request (FrtRotWrInitReqs)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum FrontRotorWearInitializeRequest
     */
    FRONT_ROTOR_WEAR_INITIALIZE_REQUEST = 557855620 /* (((0x3384 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Front Sunshade Configuration (FrtSnshdConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FRONT_SUNSHADE_CONFIGURATION = 555758469 /* (((0x3385 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Front Sunshade  Control Available (FrtSnshdCtrlAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FRONT_SUNSHADE_CONTROL_AVAILABLE = 555758470 /* (((0x3386 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Front Sunshade Control Request (FrtSnshdCtrlReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum FrontSunshadeControlRequest
     */
    FRONT_SUNSHADE_CONTROL_REQUEST = 557855623 /* (((0x3387 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Front Sunshade Percentage control Request (FrtSnshdPctCtrlReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum FrontSunshadePercentageControlRequest
     */
    FRONT_SUNSHADE_PERCENTAGE_CONTROL_REQUEST = 557855624 /* (((0x3388 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Front Sunshade Percentage Position status (FrtSnshdPctPosSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FRONT_SUNSHADE_PERCENTAGE_POSITION_STATUS = 557855625 /* (((0x3389 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Front Sunshade  Percentage Position Status Validity (FrtSnshdPctPosStsV)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum FrontSunshadePercentagePositionStatusValidity
     */
    FRONT_SUNSHADE_PERCENTAGE_POSITION_STATUS_VALIDITY = 557855626 /* (((0x338A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Front Sunshade Position Status (FrtSnshdPosSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum FrontSunshadePositionStatus
     */
    FRONT_SUNSHADE_POSITION_STATUS = 557855627 /* (((0x338B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Hazard Switch Active (HazSwAtv)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HAZARD_SWITCH_ACTIVE = 555758567 /* (((0x33E7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : Headlamp Control Available (HdlmpCtlAvliable)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VEHICLE_THEFT_NOTIFICATION_SIGNAL_GROUP_HEADLAMP_CONTROL_AVAILABLE = 555758574 /* (((0x33EE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : Headlamp Control Reminder (HdlmpCtlRmder)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VehicleTheftNotificationSignalGroupHeadlampControlReminder
     */
    VEHICLE_THEFT_NOTIFICATION_SIGNAL_GROUP_HEADLAMP_CONTROL_REMINDER = 557855727 /* (((0x33EF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Hill Descent Control Screen Configuration (HillDesCtrlSrcnCnfg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HillDescentControlScreenConfiguration
     */
    HILL_DESCENT_CONTROL_SCREEN_CONFIGURATION = 557855735 /* (((0x33F7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Hill Descent Control configuration availability (HillDesCtrlSrcnCnfgAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HILL_DESCENT_CONTROL_CONFIGURATION_AVAILABILITY = 555758584 /* (((0x33F8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Hill Descent Control Switch Status Virtual Button (HillDesCtrlSwtchStatsVrtBtn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum HillDescentControlSwitchStatusVirtualButton
     */
    HILL_DESCENT_CONTROL_SWITCH_STATUS_VIRTUAL_BUTTON = 557855737 /* (((0x33F9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Hill Descent Control Reduce Vehicle Speed to enable Indication On (HillDscntCntlRedVehlSpToEnbIO)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HILL_DESCENT_CONTROL_REDUCE_VEHICLE_SPEED_TO_ENABLE_INDICATION_ON = 555758586 /* (((0x33FA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Hill Descent Control System Status (HillDscntCntlSysStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HillDescentControlSystemStatus
     */
    HILL_DESCENT_CONTROL_SYSTEM_STATUS = 557855739 /* (((0x33FB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * HMI Wiper Control Available (HmiWprCtrlAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HMI_WIPER_CONTROL_AVAILABLE = 555758592 /* (((0x3400 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Heated Steering Wheel Configuration (HtStrWhlConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HEATED_STEERING_WHEEL_CONFIGURATION = 555758610 /* (((0x3412 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Heated Steering Wheel Indication (HtdStrgWhlInd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HeatedSteeringWheelIndication
     */
    HEATED_STEERING_WHEEL_INDICATION = 557855763 /* (((0x3413 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Heated Steering Wheel Levels Available (HtdStrgWhlLvlAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HeatedSteeringWheelLevelsAvailable
     */
    HEATED_STEERING_WHEEL_LEVELS_AVAILABLE = 557855764 /* (((0x3414 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : Hazard Lamp Control Available (HzrdCtlAvilable)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VEHICLE_THEFT_NOTIFICATION_SIGNAL_GROUP_HAZARD_LAMP_CONTROL_AVAILABLE = 555758615 /* (((0x3417 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : Hazard Lamp VCU Control Configuration (HzrdVCUCtlConfign)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VEHICLE_THEFT_NOTIFICATION_SIGNAL_GROUP_HAZARD_LAMP_VCU_CONTROL_CONFIGURATION = 555758616 /* (((0x3418 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Animation Control Request Service_VCU (ILSAmbLgtAnimaCtrlReqServVCU)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum IlsAmbientLightAnimationControlRequestServiceVcu
     */
    ILS_AMBIENT_LIGHT_ANIMATION_CONTROL_REQUEST_SERVICE_VCU = 557855780 /* (((0x3424 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Blue Color Value LED10_BCM (ILSAmbLgtBluColrValLED10BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BLUE_COLOR_VALUE_LED_10_BCM = 557855781 /* (((0x3425 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Blue Color Value LED11_BCM (ILSAmbLgtBluColrValLED11BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BLUE_COLOR_VALUE_LED_11_BCM = 557855782 /* (((0x3426 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Blue Color Value LED1_BCM (ILSAmbLgtBluColrValLED1BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BLUE_COLOR_VALUE_LED_1_BCM = 557855783 /* (((0x3427 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Blue Color Value LED2_BCM (ILSAmbLgtBluColrValLED2BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BLUE_COLOR_VALUE_LED_2_BCM = 557855784 /* (((0x3428 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Blue Color Value LED3_BCM (ILSAmbLgtBluColrValLED3BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BLUE_COLOR_VALUE_LED_3_BCM = 557855785 /* (((0x3429 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Blue Color Value LED4_BCM (ILSAmbLgtBluColrValLED4BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BLUE_COLOR_VALUE_LED_4_BCM = 557855786 /* (((0x342A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Blue Color Value LED5_BCM (ILSAmbLgtBluColrValLED5BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BLUE_COLOR_VALUE_LED_5_BCM = 557855787 /* (((0x342B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Blue Color Value LED6_BCM (ILSAmbLgtBluColrValLED6BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BLUE_COLOR_VALUE_LED_6_BCM = 557855788 /* (((0x342C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Blue Color Value LED7_BCM (ILSAmbLgtBluColrValLED7BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BLUE_COLOR_VALUE_LED_7_BCM = 557855789 /* (((0x342D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Blue Color Value LED8_BCM (ILSAmbLgtBluColrValLED8BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BLUE_COLOR_VALUE_LED_8_BCM = 557855790 /* (((0x342E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Blue Color Value LED9_BCM (ILSAmbLgtBluColrValLED9BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BLUE_COLOR_VALUE_LED_9_BCM = 557855791 /* (((0x342F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Blue Color Value Setting Request Service_VCU (ILSAmbLgtBluColrValSetReqServVCU)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    ILS_AMBIENT_LIGHT_BLUE_COLOR_VALUE_SETTING_REQUEST_SERVICE_VCU = 557855792 /* (((0x3430 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness and RGB Validity LED ALL_BCM (ILSAmbLgtBritAndRGBValdLEDALLBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BRIGHTNESS_AND_RGB_VALIDITY_LED_ALL_BCM = 555758641 /* (((0x3431 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED10_BCM (ILSAmbLgtBritLvlLED10BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BRIGHTNESS_LEVEL_LED_10_BCM = 557855794 /* (((0x3432 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED11_BCM (ILSAmbLgtBritLvlLED11BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BRIGHTNESS_LEVEL_LED_11_BCM = 557855795 /* (((0x3433 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED1_BCM (ILSAmbLgtBritLvlLED1BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BRIGHTNESS_LEVEL_LED_1_BCM = 557855796 /* (((0x3434 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED2_BCM (ILSAmbLgtBritLvlLED2BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BRIGHTNESS_LEVEL_LED_2_BCM = 557855797 /* (((0x3435 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED3_BCM (ILSAmbLgtBritLvlLED3BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BRIGHTNESS_LEVEL_LED_3_BCM = 557855798 /* (((0x3436 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED4_BCM (ILSAmbLgtBritLvlLED4BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BRIGHTNESS_LEVEL_LED_4_BCM = 557855799 /* (((0x3437 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED5_BCM (ILSAmbLgtBritLvlLED5BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BRIGHTNESS_LEVEL_LED_5_BCM = 557855800 /* (((0x3438 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED6_BCM (ILSAmbLgtBritLvlLED6BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BRIGHTNESS_LEVEL_LED_6_BCM = 557855801 /* (((0x3439 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED7_BCM (ILSAmbLgtBritLvlLED7BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BRIGHTNESS_LEVEL_LED_7_BCM = 557855802 /* (((0x343A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED8_BCM (ILSAmbLgtBritLvlLED8BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BRIGHTNESS_LEVEL_LED_8_BCM = 557855803 /* (((0x343B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level LED9_BCM (ILSAmbLgtBritLvlLED9BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_BRIGHTNESS_LEVEL_LED_9_BCM = 557855804 /* (((0x343C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level Setting Request Enable Service_VCU (ILSAmbLgtBritLvlSetReqEnblServVCU)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum IlsAmbientLightBrightnessLevelSettingRequestEnableServiceVcu
     */
    ILS_AMBIENT_LIGHT_BRIGHTNESS_LEVEL_SETTING_REQUEST_ENABLE_SERVICE_VCU = 557855805 /* (((0x343D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Brightness Level Setting Request Service_VCU (ILSAmbLgtBritLvlSetReqServVCU)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    ILS_AMBIENT_LIGHT_BRIGHTNESS_LEVEL_SETTING_REQUEST_SERVICE_VCU = 557855806 /* (((0x343E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Green Color Value LED10_BCM (ILSAmbLgtGrenColrValLED10BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_GREEN_COLOR_VALUE_LED_10_BCM = 557855808 /* (((0x3440 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Green Color Value LED11_BCM (ILSAmbLgtGrenColrValLED11BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_GREEN_COLOR_VALUE_LED_11_BCM = 557855809 /* (((0x3441 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Green Color Value LED1_BCM (ILSAmbLgtGrenColrValLED1BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_GREEN_COLOR_VALUE_LED_1_BCM = 557855810 /* (((0x3442 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Green Color Value LED2_BCM (ILSAmbLgtGrenColrValLED2BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_GREEN_COLOR_VALUE_LED_2_BCM = 557855811 /* (((0x3443 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Green Color Value LED3_BCM (ILSAmbLgtGrenColrValLED3BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_GREEN_COLOR_VALUE_LED_3_BCM = 557855812 /* (((0x3444 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Green Color Value LED4_BCM (ILSAmbLgtGrenColrValLED4BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_GREEN_COLOR_VALUE_LED_4_BCM = 557855813 /* (((0x3445 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Green Color Value LED5_BCM (ILSAmbLgtGrenColrValLED5BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_GREEN_COLOR_VALUE_LED_5_BCM = 557855814 /* (((0x3446 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Green Color Value LED6_BCM (ILSAmbLgtGrenColrValLED6BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_GREEN_COLOR_VALUE_LED_6_BCM = 557855815 /* (((0x3447 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Green Color Value LED7_BCM (ILSAmbLgtGrenColrValLED7BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_GREEN_COLOR_VALUE_LED_7_BCM = 557855816 /* (((0x3448 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Green Color Value LED8_BCM (ILSAmbLgtGrenColrValLED8BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_GREEN_COLOR_VALUE_LED_8_BCM = 557855817 /* (((0x3449 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Green Color Value LED9_BCM (ILSAmbLgtGrenColrValLED9BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_GREEN_COLOR_VALUE_LED_9_BCM = 557855818 /* (((0x344A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Green Color Value Setting Request Service_VCU (ILSAmbLgtGrenColrValSetReqServVCU)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    ILS_AMBIENT_LIGHT_GREEN_COLOR_VALUE_SETTING_REQUEST_SERVICE_VCU = 557855819 /* (((0x344B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light LED 10 Availability_BCM (ILSAmbLgtLED10AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED_10_AVAILABILITY_BCM = 555758668 /* (((0x344C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light LED 11 Availability_BCM (ILSAmbLgtLED11AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED_11_AVAILABILITY_BCM = 555758669 /* (((0x344D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light LED 1 Availability_BCM (ILSAmbLgtLED1AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED_1_AVAILABILITY_BCM = 555758670 /* (((0x344E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light LED 2 Availability_BCM (ILSAmbLgtLED2AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED_2_AVAILABILITY_BCM = 555758671 /* (((0x344F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light LED 3 Availability_BCM (ILSAmbLgtLED3AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED_3_AVAILABILITY_BCM = 555758672 /* (((0x3450 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light LED 4 Availability_BCM (ILSAmbLgtLED4AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED_4_AVAILABILITY_BCM = 555758673 /* (((0x3451 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light LED 5 Availability_BCM (ILSAmbLgtLED5AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED_5_AVAILABILITY_BCM = 555758674 /* (((0x3452 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light LED 6 Availability_BCM (ILSAmbLgtLED6AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED_6_AVAILABILITY_BCM = 555758675 /* (((0x3453 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light LED 7 Availability_BCM (ILSAmbLgtLED7AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED_7_AVAILABILITY_BCM = 555758676 /* (((0x3454 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light LED 8 Availability_BCM (ILSAmbLgtLED8AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED_8_AVAILABILITY_BCM = 555758677 /* (((0x3455 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light LED 9 Availability_BCM (ILSAmbLgtLED9AvbtyBCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_LED_9_AVAILABILITY_BCM = 555758678 /* (((0x3456 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light On OFF Control Request Service_VCU (ILSAmbLgtOnOffCtrlReqVCU)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum IlsAmbientLightOnOffControlRequestServiceVcu
     */
    ILS_AMBIENT_LIGHT_ON_OFF_CONTROL_REQUEST_SERVICE_VCU = 557855831 /* (((0x3457 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light RGB Color Value Setting Request Enable Service_VCU (ILSAmbLgtRGBColrValSetReqEnblServVCU)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum IlsAmbientLightRgbColorValueSettingRequestEnableServiceVcu
     */
    ILS_AMBIENT_LIGHT_RGB_COLOR_VALUE_SETTING_REQUEST_ENABLE_SERVICE_VCU = 557855832 /* (((0x3458 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Red Color Value LED10_BCM (ILSAmbLgtRedColrValLED10BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_RED_COLOR_VALUE_LED_10_BCM = 557855833 /* (((0x3459 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Red Color Value LED11_BCM (ILSAmbLgtRedColrValLED11BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_RED_COLOR_VALUE_LED_11_BCM = 557855834 /* (((0x345A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Red Color Value LED1_BCM (ILSAmbLgtRedColrValLED1BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_RED_COLOR_VALUE_LED_1_BCM = 557855835 /* (((0x345B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Red Color Value LED2_BCM (ILSAmbLgtRedColrValLED2BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_RED_COLOR_VALUE_LED_2_BCM = 557855836 /* (((0x345C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Red Color Value LED3_BCM (ILSAmbLgtRedColrValLED3BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_RED_COLOR_VALUE_LED_3_BCM = 557855837 /* (((0x345D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Red Color Value LED4_BCM (ILSAmbLgtRedColrValLED4BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_RED_COLOR_VALUE_LED_4_BCM = 557855838 /* (((0x345E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Red Color Value LED5_BCM (ILSAmbLgtRedColrValLED5BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_RED_COLOR_VALUE_LED_5_BCM = 557855839 /* (((0x345F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Red Color Value LED6_BCM (ILSAmbLgtRedColrValLED6BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_RED_COLOR_VALUE_LED_6_BCM = 557855840 /* (((0x3460 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Red Color Value LED7_BCM (ILSAmbLgtRedColrValLED7BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_RED_COLOR_VALUE_LED_7_BCM = 557855841 /* (((0x3461 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Red Color Value LED8_BCM (ILSAmbLgtRedColrValLED8BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_RED_COLOR_VALUE_LED_8_BCM = 557855842 /* (((0x3462 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Red Color Value LED9_BCM (ILSAmbLgtRedColrValLED9BCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ILS_AMBIENT_LIGHT_RED_COLOR_VALUE_LED_9_BCM = 557855843 /* (((0x3463 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ILS Ambient Light Red Color Value Setting Request Service_VCU (ILSAmbLgtRedColrValSetReqServVCU)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    ILS_AMBIENT_LIGHT_RED_COLOR_VALUE_SETTING_REQUEST_SERVICE_VCU = 557855844 /* (((0x3464 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Interior Dimming Change Provided Allowed (IntDimChgPvdAld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INTERIOR_DIMMING_CHANGE_PROVIDED_ALLOWED = 555758773 /* (((0x34B5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Interior Dimming Change Request (IntDimChgReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum InteriorDimmingChangeRequest
     */
    INTERIOR_DIMMING_CHANGE_REQUEST = 557855926 /* (((0x34B6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Interior Dimming Display Change Provided Allowed (IntDimDspChgPvdAld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INTERIOR_DIMMING_DISPLAY_CHANGE_PROVIDED_ALLOWED = 555758775 /* (((0x34B7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Interior Dimming Display Change Request (IntDimDspChgReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum InteriorDimmingDisplayChangeRequest
     */
    INTERIOR_DIMMING_DISPLAY_CHANGE_REQUEST = 557855928 /* (((0x34B8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Interior Dimming Display Level (IntDimDspLvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INTERIOR_DIMMING_DISPLAY_LEVEL = 557855929 /* (((0x34B9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Interior Dimming Level (IntDimLvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INTERIOR_DIMMING_BACKLIGHTING_LEVEL = 557855930 /* (((0x34BA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Lane Centering Convenience Signal Group : Lane Centering Control Indication Request_FCM (LCCIndReq_FCM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum LaneCenteringConvenienceSignalGroupLaneCenteringControlIndicationRequestFcm
     */
    LANE_CENTERING_CONVENIENCE_SIGNAL_GROUP_LANE_CENTERING_CONTROL_INDICATION_REQUEST_FCM = 557855960 /* (((0x34D8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Lane Centering Convenience Signal Group : Lane Centering Control Indication Request_IDCM_A (LCCIndReq_IDCM_A)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum LaneCenteringConvenienceSignalGroupLaneCenteringControlIndicationRequestIdcmA
     */
    LANE_CENTERING_CONVENIENCE_SIGNAL_GROUP_LANE_CENTERING_CONTROL_INDICATION_REQUEST_IDCM_A = 557855961 /* (((0x34D9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Left Rear Window Position Status (LRWndPosStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum LeftRearWindowPositionStatus
     */
    LEFT_REAR_WINDOW_POSITION_STATUS = 557855989 /* (((0x34F5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Left Turn Lamp Active (LftTrnLmpAtv)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum LeftTurnLampActive
     */
    LEFT_TURN_LAMP_ACTIVE = 557856029 /* (((0x351D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : Main Light Switch VCU Control Configuration (MLSVCUCtlConfign)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VEHICLE_THEFT_NOTIFICATION_SIGNAL_GROUP_MAIN_LIGHT_SWITCH_VCU_CONTROL_CONFIGURATION = 555758923 /* (((0x354B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Main Light Switch (MainLghtSw)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HeadAndParkLampsCurrentSelectionValue
     */
    HEAD_AND_PARK_LAMPS_CURRENT_SELECTION_VALUE = 557856077 /* (((0x354D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Park Assist Soft Button Request (PASftBtnRqst)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum ParkAssistSoftButtonRequest
     */
    PARK_ASSIST_SOFT_BUTTON_REQUEST = 557856165 /* (((0x35A5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Advanced Park Assist VCU Signal Group : Park Assist Soft Button Selected State Raw (PASftBtnSeltdStatRw)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdvancedParkAssistVcuSignalGroupParkAssistSoftButtonSelectedStateRaw
     */
    ADVANCED_PARK_ASSIST_VCU_SIGNAL_GROUP_PARK_ASSIST_SOFT_BUTTON_SELECTED_STATE_RAW = 557856166 /* (((0x35A6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * PM2.5 Filter remaining Life (PM25FilterRemainLife)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PM_2_5_FILTER_REMAINING_LIFE = 559953326 /* (((0x35AE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Customer reset PM2.5 Filter remaining life (PM25FilterRemainLifeRest)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    CUSTOMER_RESET_PM_2_5_FILTER_REMAINING_LIFE = 555759023 /* (((0x35AF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * PM2.5 Filter remaining Life Validity (PM25FilterRemainLifeV)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum Pm25FilterRemainingLifeValidity
     */
    PM_2_5_FILTER_REMAINING_LIFE_VALIDITY = 557856176 /* (((0x35B0 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Passenger Heated Seat Configuration (PassHtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PASSENGER_HEATED_SEAT_CONFIGURATION = 555759115 /* (((0x360B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Passenger Vent Seat Configuration (PassVtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PASSENGER_VENT_SEAT_CONFIGURATION = 555759165 /* (((0x363D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Pedestrian Warning Indication Request (PedWrnIndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum PedestrianWarningIndicationRequest
     */
    PEDESTRIAN_WARNING_INDICATION_REQUEST = 557856326 /* (((0x3646 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Passenger Window Available (PsWndAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PASSENGER_WINDOW_AVAILABLE = 555759376 /* (((0x3710 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Passenger Window Configuration (PsWndCfg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PASSENGER_WINDOW_CONFIGURATION = 555759377 /* (((0x3711 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Percentage Window control Signal Group : Passenger Window Control Position Request (PsWndCtrlPosReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    PERCENTAGE_WINDOW_CONTROL_SIGNAL_GROUP_PASSENGER_WINDOW_CONTROL_POSITION_REQUEST = 557856533 /* (((0x3715 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Percentage Window control Signal Group : Passenger Window Control Position Request Enable (PsWndCtrlPosReqEnbl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    PERCENTAGE_WINDOW_CONTROL_SIGNAL_GROUP_PASSENGER_WINDOW_CONTROL_POSITION_REQUEST_ENABLE = 555759382 /* (((0x3716 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Window Control Request Signal Group : Passenger Window Infotainment Comfort Request (PsWndInfoCmfReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum WindowControlRequestSignalGroupPassengerWindowInfotainmentComfortRequest
     */
    WINDOW_CONTROL_REQUEST_SIGNAL_GROUP_PASSENGER_WINDOW_INFOTAINMENT_COMFORT_REQUEST = 557856537 /* (((0x3719 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Passenger Window Motion Status (PsWndMtnSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum PassengerWindowMotionStatus
     */
    PASSENGER_WINDOW_MOTION_STATUS = 557856538 /* (((0x371A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Passenger Window Not Normalized Indication On (PsWndNtNrmIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PASSENGER_WINDOW_NOT_NORMALIZED_INDICATION_ON = 555759387 /* (((0x371B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Passenger Window Percentage Position Status (PsWndPctPosSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PASSENGER_WINDOW_PERCENTAGE_POSITION_STATUS = 557856540 /* (((0x371C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Passenger Window Percentage Position Status Validity (PsWndPctPosStsV)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum PassengerWindowPercentagePositionStatusValidity
     */
    PASSENGER_WINDOW_PERCENTAGE_POSITION_STATUS_VALIDITY = 557856541 /* (((0x371D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Passenger Window Position Status (PsWndPosStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum PassengerWindowPositionStatus
     */
    PASSENGER_WINDOW_POSITION_STATUS = 557856542 /* (((0x371E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Heated Seat Configuration (RLHtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_LEFT_HEATED_SEAT_CONFIGURATION = 555759457 /* (((0x3761 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Side Sunblind Infotainment Comfort Request (RLSSBInfoCmfReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum RearLeftSideSunblindInfotainmentComfortRequest
     */
    REAR_LEFT_SIDE_SUNBLIND_INFOTAINMENT_COMFORT_REQUEST = 557856612 /* (((0x3764 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Side Sunblind Position Status (RLSSBPosSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RearLeftSideSunblindPositionStatus
     */
    REAR_LEFT_SIDE_SUNBLIND_POSITION_STATUS = 557856613 /* (((0x3765 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Side Sunblind Available (RLSSBdAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_LEFT_SIDE_SUNBLIND_AVAILABLE = 555759462 /* (((0x3766 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Side Sunblind Configuration (RLSSBdCfg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_LEFT_SIDE_SUNBLIND_CONFIGURATION = 555759463 /* (((0x3767 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Side Sunblind Normalization Required Indication On (RLSdSnBNormzRqrdIO)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_LEFT_SIDE_SUNBLIND_NORMALIZATION_REQUIRED_INDICATION_ON = 555759464 /* (((0x3768 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Vent Seat Configuration (RLVtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_LEFT_VENT_SEAT_CONFIGURATION = 555759467 /* (((0x376B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Window Available (RLWndAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_LEFT_WINDOW_AVAILABLE = 555759468 /* (((0x376C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Window Configuration (RLWndCfg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_LEFT_WINDOW_CONFIGURATION = 555759469 /* (((0x376D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Percentage Window control Signal Group : Rear Left Window Control Position Request (RLWndCtrlPosReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    PERCENTAGE_WINDOW_CONTROL_SIGNAL_GROUP_REAR_LEFT_WINDOW_CONTROL_POSITION_REQUEST = 557856623 /* (((0x376F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Percentage Window control Signal Group : Rear Left Window Control Position Request Enable (RLWndCtrlPosReqEnbl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    PERCENTAGE_WINDOW_CONTROL_SIGNAL_GROUP_REAR_LEFT_WINDOW_CONTROL_POSITION_REQUEST_ENABLE = 555759472 /* (((0x3770 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Window Control Request Signal Group : Rear Left Window Infotainment Comfort Request (RLWndInfoCmfReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum WindowControlRequestSignalGroupRearLeftWindowInfotainmentComfortRequest
     */
    WINDOW_CONTROL_REQUEST_SIGNAL_GROUP_REAR_LEFT_WINDOW_INFOTAINMENT_COMFORT_REQUEST = 557856626 /* (((0x3772 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Window Motion Status (RLWndMtnSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RearLeftWindowMotionStatus
     */
    REAR_LEFT_WINDOW_MOTION_STATUS = 557856627 /* (((0x3773 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Window Not Normalized Indication On (RLWndNtNrmIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_LEFT_WINDOW_NOT_NORMALIZED_INDICATION_ON = 555759476 /* (((0x3774 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Window Percentage Position Status (RLWndPctPosSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_LEFT_WINDOW_PERCENTAGE_POSITION_STATUS = 557856629 /* (((0x3775 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Left Window Percentage Position Status Validity (RLWndPctPosStsV)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RearLeftWindowPercentagePositionStatusValidity
     */
    REAR_LEFT_WINDOW_PERCENTAGE_POSITION_STATUS_VALIDITY = 557856630 /* (((0x3776 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Brake Pad Low (RRBrkPdLw)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_BRAKE_PAD_LOW = 555759488 /* (((0x3780 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Brake Rotor Low (RRBrkRotLw)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_BRAKE_ROTOR_LOW = 555759489 /* (((0x3781 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Brake Temperature (RRBrkTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_BRAKE_TEMPERATURE = 557856642 /* (((0x3782 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Heated Seat Configuration (RRHtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_RIGHT_HEATED_SEAT_CONFIGURATION = 555759504 /* (((0x3790 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Pad Wear Initialize Request (RRPdWrInitReqs)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum RearPadWearInitializeRequest
     */
    REAR_PAD_WEAR_INITIALIZE_REQUEST = 557856658 /* (((0x3792 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Rotor Wear Initialize Request (RRRotWrInitReqs)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum RearRotorWearInitializeRequest
     */
    REAR_ROTOR_WEAR_INITIALIZE_REQUEST = 557856660 /* (((0x3794 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Side Sunblind Available (RRSSBAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_RIGHT_SIDE_SUNBLIND_AVAILABLE = 555759509 /* (((0x3795 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Side Sunblind Configuration (RRSSBCfg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_RIGHT_SIDE_SUNBLIND_CONFIGURATION = 555759510 /* (((0x3796 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Side Sunblind Infotainment Comfort Request (RRSSBInfoCmfReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum RearRightSideSunblindInfotainmentComfortRequest
     */
    REAR_RIGHT_SIDE_SUNBLIND_INFOTAINMENT_COMFORT_REQUEST = 557856664 /* (((0x3798 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Side Sunblind Position Status (RRSSBPosSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RearRightSideSunblindPositionStatus
     */
    REAR_RIGHT_SIDE_SUNBLIND_POSITION_STATUS = 557856665 /* (((0x3799 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Side Sunblind Normalization Required Indication On (RRSdSnBNormzRqrdIO)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_RIGHT_SIDE_SUNBLIND_NORMALIZATION_REQUIRED_INDICATION_ON = 555759514 /* (((0x379A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Vent Seat Configuration (RRVtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_RIGHT_VENT_SEAT_CONFIGURATION = 555759517 /* (((0x379D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Window Available (RRWndAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_RIGHT_WINDOW_AVAILABLE = 555759518 /* (((0x379E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Window Configuration (RRWndCfg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_RIGHT_WINDOW_CONFIGURATION = 555759519 /* (((0x379F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Percentage Window control Signal Group : Rear Right Window Control Position Request (RRWndCtrlPosReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    PERCENTAGE_WINDOW_CONTROL_SIGNAL_GROUP_REAR_RIGHT_WINDOW_CONTROL_POSITION_REQUEST = 557856673 /* (((0x37A1 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Percentage Window control Signal Group : Rear Right Window Control Position Request Enable (RRWndCtrlPosReqEnbl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    PERCENTAGE_WINDOW_CONTROL_SIGNAL_GROUP_REAR_RIGHT_WINDOW_CONTROL_POSITION_REQUEST_ENABLE = 555759522 /* (((0x37A2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Window Control Request Signal Group : Rear Right Window Infotainment Comfort Request (RRWndInfoCmfReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum WindowControlRequestSignalGroupRearRightWindowInfotainmentComfortRequest
     */
    WINDOW_CONTROL_REQUEST_SIGNAL_GROUP_REAR_RIGHT_WINDOW_INFOTAINMENT_COMFORT_REQUEST = 557856676 /* (((0x37A4 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Window Motion Status (RRWndMtnSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RearRightWindowMotionStatus
     */
    REAR_RIGHT_WINDOW_MOTION_STATUS = 557856677 /* (((0x37A5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Window Not Normalized Indication On (RRWndNtNrmIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_RIGHT_WINDOW_NOT_NORMALIZED_INDICATION_ON = 555759526 /* (((0x37A6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Window Percentage Position Status (RRWndPctPosSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_RIGHT_WINDOW_PERCENTAGE_POSITION_STATUS = 557856679 /* (((0x37A7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Right Window Percentage Position Status Validity (RRWndPctPosStsV)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RearRightWindowPercentagePositionStatusValidity
     */
    REAR_RIGHT_WINDOW_PERCENTAGE_POSITION_STATUS_VALIDITY = 557856680 /* (((0x37A8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Right Rear Window Position Status (RRWndPosStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RightRearWindowPositionStatus
     */
    RIGHT_REAR_WINDOW_POSITION_STATUS = 557856681 /* (((0x37A9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Remote Vehicle Position Latitude (ReVelPosLati)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REMOTE_VEHICLE_POSITION_LATITUDE = 557856778 /* (((0x380A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Remote Vehicle Position Longitude (ReVelPosLongti)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REMOTE_VEHICLE_POSITION_LONGITUDE = 557856780 /* (((0x380C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : Rear Fog Control Available (RearFogCtlAvliable)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VIRTUAL_CONTROL_FOG_LAMPS_REAR_STATUS_USER_CONTROL_ALLOWED = 555759633 /* (((0x3811 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : Rear Fog Control Reminder (RearFogCtlRmder)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VehicleTheftNotificationSignalGroupRearFogControlReminder
     */
    VEHICLE_THEFT_NOTIFICATION_SIGNAL_GROUP_REAR_FOG_CONTROL_REMINDER = 557856786 /* (((0x3812 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Theft Notification Signal Group : Rear Fog VCU Control Configuration (RearFogVCUCtlConfign)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VIRTUAL_CONTROL_FOG_LAMPS_REAR_STATUS_CONTROL_AVAILABLE = 555759636 /* (((0x3814 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Fog Lamps Active (RrFogLmpsAct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VIRTUAL_CONTROL_FOG_LAMPS_REAR_STATUS_CURRENT_SELECTION_VALUE = 555759716 /* (((0x3864 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Rotor Remain mileage (RrRotRemge)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_ROTOR_REMAIN_MILEAGE = 557856874 /* (((0x386A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Sunshade Configuration (RrSnshdConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_SUNSHADE_CONFIGURATION = 555759723 /* (((0x386B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Sunshade  Control Available (RrSnshdCtrlAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_SUNSHADE_CONTROL_AVAILABLE = 555759724 /* (((0x386C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Sunshade Control Request (RrSnshdCtrlReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum RearSunshadeControlRequest
     */
    REAR_SUNSHADE_CONTROL_REQUEST = 557856877 /* (((0x386D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Sunshade Percentage control Request (RrSnshdPctCtrlReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum RearSunshadePercentageControlRequest
     */
    REAR_SUNSHADE_PERCENTAGE_CONTROL_REQUEST = 557856878 /* (((0x386E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Sunshade Percentage Position status (RrSnshdPctPosSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_SUNSHADE_PERCENTAGE_POSITION_STATUS = 557856879 /* (((0x386F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Sunshade  Percentage Position Status Validity (RrSnshdPctPosStsV)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RearSunshadePercentagePositionStatusValidity
     */
    REAR_SUNSHADE_PERCENTAGE_POSITION_STATUS_VALIDITY = 557856880 /* (((0x3870 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Sunshade Position Status (RrSnshdPosSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RearSunshadePositionStatus
     */
    REAR_SUNSHADE_POSITION_STATUS = 557856881 /* (((0x3871 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Restore Customization Factory Defaults (RstrCustFctrDef)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum RestoreCustomizationFactoryDefaults
     */
    RESTORE_CUSTOMIZATION_FACTORY_DEFAULTS = 557856887 /* (((0x3877 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Right Turn Lamp Active (RtTrnLmpAtv)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RightTurnLampActive
     */
    RIGHT_TURN_LAMP_ACTIVE = 557856909 /* (((0x388D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Second Row Cooled Seat Indication Control Validity (SecRCSIndCtrl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SecondRowCooledSeatIndicationControlValidity
     */
    SECOND_ROW_COOLED_SEAT_INDICATION_CONTROL_VALIDITY = 557856937 /* (((0x38A9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Second Row Heated Seat Indication Control Validity (SecRHSIndCtrl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SecondRowHeatedSeatIndicationControlValidity
     */
    SECOND_ROW_HEATED_SEAT_INDICATION_CONTROL_VALIDITY = 557856938 /* (((0x38AA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Second Row Comfort Mode Mute Request_Info (SecRwCmftMdMuteRqInf)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SecondRowComfortModeMuteRequestInfo
     */
    SECOND_ROW_COMFORT_MODE_MUTE_REQUEST_INFO = 557856943 /* (((0x38AF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Sunroof Configuration (SnrfConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SUNROOF_CONFIGURATION = 555759916 /* (((0x392C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Sunroof  Control Available (SnrfCtrlAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SUNROOF_CONTROL_AVAILABLE = 555759917 /* (((0x392D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Sunroof Control Request (SnrfCtrlReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum SunroofControlRequest
     */
    SUNROOF_CONTROL_REQUEST = 557857070 /* (((0x392E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Sunroof Percentage control Request (SnrfPctCtrlReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum SunroofPercentageControlRequest
     */
    SUNROOF_PERCENTAGE_CONTROL_REQUEST = 557857072 /* (((0x3930 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Sunroof  Percentage Position Status (SnrfPctPosSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SUNROOF_PERCENTAGE_POSITION_STATUS = 557857073 /* (((0x3931 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Sunroof  Percentage Position Status Validity (SnrfPctPosStsV)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SunroofPercentagePositionStatusValidity
     */
    SUNROOF_PERCENTAGE_POSITION_STATUS_VALIDITY = 557857074 /* (((0x3932 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Sunroof position status (Snrfpossts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SunroofPositionStatus
     */
    SUNROOF_POSITION_STATUS = 557857075 /* (((0x3933 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Service Up Parking Request (SrvUpPrkngRq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    SERVICE_UP_PARKING_REQUEST = 555759937 /* (((0x3941 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Seat Passenger Compartment Mode Configuration (StPassCmprtMdConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_PASSENGER_COMPARTMENT_MODE_CONFIGURATION = 555759948 /* (((0x394C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Seat Passenger Compartment Mode Current Mode Status (StPassCmprtMdCrtMdStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatPassengerCompartmentModeCurrentModeStatus
     */
    SEAT_PASSENGER_COMPARTMENT_MODE_CURRENT_MODE_STATUS = 557857101 /* (((0x394D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Seat Passenger Compartment Mode Control Available (StPassCmprtMdCtrlAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_PASSENGER_COMPARTMENT_MODE_CONTROL_AVAILABLE = 555759950 /* (((0x394E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Seat Passenger Compartment Mode Notification HMI Display Command (StPassCmprtMdHMIDisCmd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatPassengerCompartmentModeNotificationHmiDisplayCommand
     */
    SEAT_PASSENGER_COMPARTMENT_MODE_NOTIFICATION_HMI_DISPLAY_COMMAND = 557857103 /* (((0x394F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Seat Passenger Compartment Mode HMI Request (StPassCmprtMdHMIReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum SeatPassengerCompartmentModeHmiRequest
     */
    SEAT_PASSENGER_COMPARTMENT_MODE_HMI_REQUEST = 557857104 /* (((0x3950 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Seat Passenger Compartment Mode Recall Response Status (StPassCmprtMdRclRspStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatPassengerCompartmentModeRecallResponseStatus
     */
    SEAT_PASSENGER_COMPARTMENT_MODE_RECALL_RESPONSE_STATUS = 557857107 /* (((0x3953 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Seat Passenger Compartment Mode Roof Control Switch Selected Status (StPassCmprtMdRfCtrlSwSlctStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatPassengerCompartmentModeRoofControlSwitchSelectedStatus
     */
    SEAT_PASSENGER_COMPARTMENT_MODE_ROOF_CONTROL_SWITCH_SELECTED_STATUS = 557857108 /* (((0x3954 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * PPEI Platform General Status Signal Group : System Power Mode (SysPwrMd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SystemPowerMode
     */
    SYSTEM_POWER_MODE = 557857162 /* (((0x398A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Traction control system disable availability (TCSysDsblAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRACTION_CONTROL_SYSTEM_DISABLE_AVAILABILITY = 555760030 /* (((0x399E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Hour of Day_RadioLow (TOD_HrofDay_RadioLow)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    HOUR_OF_DAY_RADIO_LOW = 561002926 /* (((0x39AE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BYTES) | VehicleArea:GLOBAL) */,
    /**
     * Time of Day Minute of Hour_RadioLow (TOD_MinofHr_RadioLow)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TIME_OF_DAY_MINUTE_OF_HOUR_RADIO_LOW = 561002927 /* (((0x39AF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BYTES) | VehicleArea:GLOBAL) */,
    /**
     * Traffic Sign Memory Customer Reset Request (TSMCustRstReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAFFIC_SIGN_MEMORY_CUSTOMER_RESET_REQUEST = 555760051 /* (((0x39B3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Third Row Cooled Seat Indication Control Validity (ThdRCSIndCtrl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum ThirdRowCooledSeatIndicationControlValidity
     */
    THIRD_ROW_COOLED_SEAT_INDICATION_CONTROL_VALIDITY = 557857210 /* (((0x39BA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Third Row Heated Seat Indication Control Validity (ThdRHSIndCtrl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum ThirdRowHeatedSeatIndicationControlValidity
     */
    THIRD_ROW_HEATED_SEAT_INDICATION_CONTROL_VALIDITY = 557857211 /* (((0x39BB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Third Row Left Heated Seat Configuration (ThdRLHtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    THIRD_ROW_LEFT_HEATED_SEAT_CONFIGURATION = 555760071 /* (((0x39C7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Third Row Left Vent Seat Configuration (ThdRLVtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    THIRD_ROW_LEFT_VENT_SEAT_CONFIGURATION = 555760073 /* (((0x39C9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Third Row Right Heated Seat Configuration (ThdRRHtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    THIRD_ROW_RIGHT_HEATED_SEAT_CONFIGURATION = 555760085 /* (((0x39D5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Third Row Right Vent Seat Configuration (ThdRRVtSeatConfig)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    THIRD_ROW_RIGHT_VENT_SEAT_CONFIGURATION = 555760087 /* (((0x39D7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Time Display Format_RadioLow (TimeDispFormat_RadioLow)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum TimeDisplayFormatRadioLow
     */
    TIME_DISPLAY_FORMAT_RADIO_LOW = 557857303 /* (((0x3A17 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Traction and stability system driver request (TracAndStbDrvRq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum TractionAndStabilitySystemDriverRequest
     */
    TRACTION_AND_STABILITY_SYSTEM_DRIVER_REQUEST = 557857354 /* (((0x3A4A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Traction and stability system driver request validity (TracAndStbDrvRqV)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum TractionAndStabilitySystemDriverRequestValidity
     */
    TRACTION_AND_STABILITY_SYSTEM_DRIVER_REQUEST_VALIDITY = 557857355 /* (((0x3A4B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Traction and stability system screen configuration (TracAndStbScrnCnfg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TractionAndStabilitySystemScreenConfiguration
     */
    TRACTION_AND_STABILITY_SYSTEM_SCREEN_CONFIGURATION = 557857356 /* (((0x3A4C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Traction and stability system current status (TracAndStbScrnCnfgCurSt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TractionAndStabilitySystemCurrentStatus
     */
    TRACTION_AND_STABILITY_SYSTEM_CURRENT_STATUS = 557857357 /* (((0x3A4D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * V2X Warning Distance Remaining (V2XWrngDistRemng)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    V_2_X_WARNING_DISTANCE_REMAINING = 557857501 /* (((0x3ADD | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * V2X Warning Indication Request (V2XWrngIndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum V2XWarningIndicationRequest
     */
    V_2_X_WARNING_INDICATION_REQUEST = 557857502 /* (((0x3ADE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Virtual Control Power Window Lockout Status : Control Available (VCPWLS_CtlAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VIRTUAL_CONTROL_POWER_WINDOW_LOCKOUT_STATUS_CONTROL_AVAILABLE = 555760354 /* (((0x3AE2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Virtual Control Power Window Lockout Status : Current Selection Value (VCPWLS_CurrSeltnVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VirtualControlPowerWindowLockoutStatusCurrentSelectionValue
     */
    VIRTUAL_CONTROL_POWER_WINDOW_LOCKOUT_STATUS_CURRENT_SELECTION_VALUE = 557857507 /* (((0x3AE3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle stability enhancement disable and traction control system disable availability (VehStbEnhDsblAndTCSysDsblAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VEHICLE_STABILITY_ENHANCEMENT_DISABLE_AND_TRACTION_CONTROL_SYSTEM_DISABLE_AVAILABILITY = 555760446 /* (((0x3B3E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle stability enhancement enable and traction control system enable availability (VehStbEnhEnblAndTCSysEnblAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VEHICLE_STABILITY_ENHANCEMENT_ENABLE_AND_TRACTION_CONTROL_SYSTEM_ENABLE_AVAILABILITY = 555760447 /* (((0x3B3F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Stability Enhancement Status (VehStbEnhSt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VehicleStabilityEnhancementStatus
     */
    VEHICLE_STABILITY_ENHANCEMENT_STATUS = 557857600 /* (((0x3B40 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Centerline Distance to Left Lane Marking (VhCntrlinDistToLLnMrkng)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VEHICLE_CENTERLINE_DISTANCE_TO_LEFT_LANE_MARKING = 559954759 /* (((0x3B47 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Centerline Distance to Right Lane Marking (VhCntrlinDistToRLnMrkng)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VEHICLE_CENTERLINE_DISTANCE_TO_RIGHT_LANE_MARKING = 559954760 /* (((0x3B48 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Virtual Control Power Window Lockout Request (VirtCtlPwrWndLckoutReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum VirtualControlPowerWindowLockoutRequest
     */
    VIRTUAL_CONTROL_POWER_WINDOW_LOCKOUT_REQUEST = 557857613 /* (((0x3B4D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Wiper Mist Control Available (WprMstCtrlAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    WIPER_MIST_CONTROL_AVAILABLE = 555760506 /* (((0x3B7A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * VR BCM Request Signal Group : Wiper Mist Request_VCU (WprMstReq_VCU)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum VrBcmRequestSignalGroupWiperMistRequestVcu
     */
    VR_BCM_REQUEST_SIGNAL_GROUP_WIPER_MIST_REQUEST_VCU = 557857659 /* (((0x3B7B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Wiper Service Up Parking Status (WprSrvUpPrkngSt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    WIPER_SERVICE_UP_PARKING_STATUS = 555760508 /* (((0x3B7C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Wiper Status (WprStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum WiperStatus
     */
    WIPER_STATUS = 557857661 /* (((0x3B7D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Adaptive Cruise Control Auto Set Speed Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AdaptiveCruiseControlAutoSetSpeedCustomization
     */
    ADAPTIVE_CRUISE_CONTROL_AUTO_SET_SPEED_CUSTOMIZATION = 557858816 /* (((0x4000 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Adaptive Cruise Control Route Speed Adaptation Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AdaptiveCruiseControlRouteSpeedAdaptationCustomization
     */
    ADAPTIVE_CRUISE_CONTROL_ROUTE_SPEED_ADAPTATION_CUSTOMIZATION = 557858817 /* (((0x4001 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Adas Performance Mode Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AdasPerformanceModeCustomization
     */
    ADAS_PERFORMANCE_MODE_CUSTOMIZATION = 557858818 /* (((0x4002 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Auto Apply Epb Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutoApplyEpbCustomization
     */
    AUTO_APPLY_EPB_CUSTOMIZATION = 557858826 /* (((0x400A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Auto Close Movable Window Driving Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutoCloseMovableWindowDrivingCustomization
     */
    AUTO_CLOSE_MOVABLE_WINDOW_DRIVING_CUSTOMIZATION = 557858827 /* (((0x400B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Auto Close Movable Window Remote Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutoCloseMovableWindowRemoteCustomization
     */
    AUTO_CLOSE_MOVABLE_WINDOW_REMOTE_CUSTOMIZATION = 557858828 /* (((0x400C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Auto High Beam Assist Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutoHighBeamAssistCustomization
     */
    AUTO_HIGH_BEAM_ASSIST_CUSTOMIZATION = 557858830 /* (((0x400E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Cabin Air Quality Control Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CabinAirQualityControlCustomization
     */
    CABIN_AIR_QUALITY_CONTROL_CUSTOMIZATION = 557858833 /* (((0x4011 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Collision Preparation System Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CollisionPreparationSystemCustomization
     */
    COLLISION_PREPARATION_SYSTEM_CUSTOMIZATION = 557858834 /* (((0x4012 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Custom Mode Avh Selection Of Gear Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CustomModeAvhSelectionOfGearCustomization
     */
    CUSTOM_MODE_AVH_SELECTION_OF_GEAR_CUSTOMIZATION = 557858835 /* (((0x4013 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Door Opening Warning Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum DoorOpeningWarningCustomization
     */
    DOOR_OPENING_WARNING_CUSTOMIZATION = 557858839 /* (((0x4017 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Hvac Remote Start Setting Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum HvacRemoteStartSettingCustomization
     */
    HVAC_REMOTE_START_SETTING_CUSTOMIZATION = 557858847 /* (((0x401F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Lane Centering Adaptive Offset Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum LaneCenteringAdaptiveOffsetCustomization
     */
    LANE_CENTERING_ADAPTIVE_OFFSET_CUSTOMIZATION = 557858849 /* (((0x4021 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Lane Change By Command Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum LaneChangeByCommandCustomization
     */
    LANE_CHANGE_BY_COMMAND_CUSTOMIZATION = 557858851 /* (((0x4023 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Lane Detection Warning And Control Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum LaneDetectionWarningAndControlCustomization
     */
    LANE_DETECTION_WARNING_AND_CONTROL_CUSTOMIZATION = 557858852 /* (((0x4024 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Navigation On Adas Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum NavigationOnAdasCustomization
     */
    NAVIGATION_ON_ADAS_CUSTOMIZATION = 557858854 /* (((0x4026 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Navigation On Adas Lane Change Type Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum NavigationOnAdasLaneChangeTypeCustomization
     */
    NAVIGATION_ON_ADAS_LANE_CHANGE_TYPE_CUSTOMIZATION = 557858855 /* (((0x4027 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Osrvm Comfort Fold Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum OsrvmComfortFoldCustomization
     */
    OSRVM_COMFORT_FOLD_CUSTOMIZATION = 557858857 /* (((0x4029 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Cross Traffic Assist Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RearCrossTrafficAssistCustomization
     */
    REAR_CROSS_TRAFFIC_ASSIST_CUSTOMIZATION = 557858863 /* (((0x402F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Virtual Bumper Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RearVirtualBumperCustomization
     */
    REAR_VIRTUAL_BUMPER_CUSTOMIZATION = 557858866 /* (((0x4032 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Remote Start Heat Steering Wheel Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RemoteStartHeatSteeringWheelCustomization
     */
    REMOTE_START_HEAT_STEERING_WHEEL_CUSTOMIZATION = 557858874 /* (((0x403A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Traffic Light And Stop Line Control Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum TrafficLightAndStopLineControlCustomization
     */
    TRAFFIC_LIGHT_AND_STOP_LINE_CONTROL_CUSTOMIZATION = 557858881 /* (((0x4041 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Traffic Sign Memory Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum TrafficSignMemoryCustomization
     */
    TRAFFIC_SIGN_MEMORY_CUSTOMIZATION = 557858882 /* (((0x4042 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Greet Mode Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum VehicleGreetModeCustomization
     */
    VEHICLE_GREET_MODE_CUSTOMIZATION = 557858883 /* (((0x4043 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
};
