
/**
 * Enumeration for VCU_EXTERIOR_LAMP_SWITCH_REQUEST_SIGNAL_GROUP_FTP_VCU_REQUEST
 */
enum class VcuExteriorLampSwitchRequestSignalGroupFtpVcuRequest : int32_t {
    No_Action = 0,
    ON = 1,
};

/**
 * Enumeration for VCU_EXTERIOR_LAMP_SWITCH_REQUEST_SIGNAL_GROUP_HAZARD_LAMP_VCU_REQUEST
 */
enum class VcuExteriorLampSwitchRequestSignalGroupHazardLampVcuRequest : int32_t {
    No_Action = 0,
    OFF = 1,
    ON = 2,
};

/**
 * Enumeration for MIRROR_POSITION_STATUS
 */
enum class MirrorPositionStatus : int32_t {
    Unknown = 0,
    Recall_Complete = 1,
    Recall_Fail = 2,
    Cancel = 3,
    Ongoing = 4,
};

/**
 * Enumeration for DRIVER_SEAT_POSITION_REQUEST
 */
enum class DriverSeatPositionRequest : int32_t {
    Forward_Backward = 0,
    Recline_Upward_Downward = 1,
    Bolster_Outward_Inward = 2,
    Footrest_Upward_Downward = 3,
    Cushion_Front_Upward_Downward = 4,
    Cushion_Rear_Upward_Downward = 5,
    Headrest_Upward_Downward = 6,
    Legrest_Upward_Downward = 7,
};

/**
 * Enumeration for DRIVER_SEAT_POSITON_STAUTS
 */
enum class DriverSeatPositionStatus : int32_t {
    Forward_Backward = 0,
    Recline_Upward_Downward = 1,
    Bolster_Outward_Inward = 2,
    Footrest_Upward_Downward = 3,
    Cushion_Front_Upward_Downward = 4,
    Cushion_Rear_Upward_Downward = 5,
    Headrest_Upward_Downward = 6,
    Legrest_Upward_Downward = 7,
    Forward_Backward_valid = 8,
    Recline_Upward_Downward_valid = 9,
    Bolster_Outward_Inward_valid = 10,
    Footrest_Upward_Downward_valid = 11,
    Cushion_Front_Upward_Downward_valid = 12,
    Cushion_Rear_Upward_Downward_valid = 13,
    Headrest_Upward_Downward_valid = 14,
    Legrest_Upward_Downward_valid = 15,
};

/**
 * Enumeration for MIRROR_POSITION_REQUEST
 */
enum class MirrorPositionRequest : int32_t {
    Horizon = 0,
    Vertical = 1,
};

/**
 * Enumeration for VIRTUAL_CONTROL_AUTO_HIGH_BEAM_REQUEST
 */
enum class VirtualControlAutoHighBeamRequest : int32_t {
    No_Action = 0,
    OFF = 1,
    ON = 2,
};

/**
 * Enumeration for INFOTAINMENT_HEATED_STEERING_WHEEL_LEVEL_REQUEST
 */
enum class InfotainmentHeatedSteeringWheelLevelRequest : int32_t {
    No_Action = 0,
    Off = 1,
    Auto = 2,
    Low = 3,
    Medium = 4,
    High = 5,
};

/**
 * Enumeration for ADAPTIVE_CRUISE_CONTROL_AUTO_SET_SPEED_CUSTOMIZATION
 */
enum class AdaptiveCruiseControlAutoSetSpeedCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
};

/**
 * Enumeration for ADAPTIVE_CRUISE_CONTROL_ROUTE_SPEED_ADAPTATION_CUSTOMIZATION
 */
enum class AdaptiveCruiseControlRouteSpeedAdaptationCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
};

/**
 * Enumeration for ADAS_PERFORMANCE_MODE_CUSTOMIZATION
 */
enum class AdasPerformanceModeCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    Soft = 1,
    Normal = 2,
    Sport = 3,
};

/**
 * Enumeration for ADVANCED_PARK_ASSIST_VCU_SIGNAL_GROUP_PARK_ASSIST_SOFT_BUTTON_SELECTED_STATE_RAW
 */
enum class AdvancedParkAssistVcuSignalGroupParkAssistSoftButtonSelectedStateRaw : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
    Reserved2 = 2,
    Reserved3 = 3,
};

/**
 * Enumeration for AUTO_APPLY_EPB_CUSTOMIZATION
 */
enum class AutoApplyEpbCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_1 = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
};

/**
 * Enumeration for AUTO_CLOSE_MOVABLE_WINDOW_DRIVING_CUSTOMIZATION
 */
enum class AutoCloseMovableWindowDrivingCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_1 = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
};

/**
 * Enumeration for AUTO_CLOSE_MOVABLE_WINDOW_REMOTE_CUSTOMIZATION
 */
enum class AutoCloseMovableWindowRemoteCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_1 = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
};

/**
 * Enumeration for AUTO_HIGH_BEAM_ASSIST_CUSTOMIZATION
 */
enum class AutoHighBeamAssistCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    Off = 1,
    On = 2,
    Reserved_1 = 3,
    Reserved_2 = 4,
    Reserved_3 = 5,
    Reserved_4 = 6,
    Reserved_5 = 7,
};

/**
 * Enumeration for AUTO_VEHICLE_HOLD_SCREEN_CONFIGURATION
 */
enum class AutoVehicleHoldScreenConfiguration : int32_t {
    None = 0,
    AVH = 1,
};

/**
 * Enumeration for AUTO_VEHICLE_HOLD_SWITCH_STATUS_VIRTUAL_BUTTON
 */
enum class AutoVehicleHoldSwitchStatusVirtualButton : int32_t {
    Inactive = 0,
    Active = 1,
};

/**
 * Enumeration for BRAKE_HEALTH_MONITOR_SYSTEM_STATUS
 */
enum class BrakeHealthMonitorSystemStatus : int32_t {
    Normal_Mode = 0,
    Backup_Mode = 1,
    Error = 2,
    Reserved3 = 3,
};

/**
 * Enumeration for BRAKE_PART_WEAR_INITIALIZE_STATUS
 */
enum class BrakePartWearInitializeStatus : int32_t {
    Reset_None = 0,
    Reset_Front_Pad = 1,
    Reset_Rear_Pad = 2,
    Reset_Front_Rotot = 3,
    Reset_Rear_Rotor = 4,
    Reserved5 = 5,
    Reserved6 = 6,
    Reserved7 = 7,
    Reserved8 = 8,
    Reserved9 = 9,
    ReservedA = 10,
    ReservedB = 11,
    ReservedC = 12,
    ReservedD = 13,
    ReservedE = 14,
    ReservedF = 15,
};

/**
 * Enumeration for CABIN_AIR_QUALITY_CONTROL_CUSTOMIZATION
 */
enum class CabinAirQualityControlCustomization : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for COLLISION_PREPARATION_SYSTEM_CUSTOMIZATION
 */
enum class CollisionPreparationSystemCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    Off = 1,
    Alert = 2,
    Alert_and_Brake = 3,
    Alert_and_Brake_and_Steer = 4,
};

/**
 * Enumeration for CUSTOM_MODE_AVH_SELECTION_OF_GEAR_CUSTOMIZATION
 */
enum class CustomModeAvhSelectionOfGearCustomization : int32_t {
    UNKNOWN = 0,
    AVH_enable_in_R_gear_and_enable_in_N_gear = 1,
    AVH_enable_in_R_gear_and_disable_in_N_gear = 2,
    AVH_disable_in_R_gear_and_enable_in_N_gear = 3,
    AVH_disable_in_R_gear_and_disable_in_N_gear = 4,
};

/**
 * Enumeration for DOME_LIGHT_DEFEAT_REQUEST
 */
enum class DomeLightDefeatRequest : int32_t {
    No_action = 0,
    Auto = 1,
    Defeat = 2,
};

/**
 * Enumeration for DOME_LIGHT_OFF_REQUEST
 */
enum class DomeLightOffRequest : int32_t {
    No_action = 0,
    OFF = 1,
};

/**
 * Enumeration for DOME_LIGHT_ON_REQUEST
 */
enum class DomeLightOnRequest : int32_t {
    No_action = 0,
    ON = 1,
};

/**
 * Enumeration for DOOR_OPENING_WARNING_CUSTOMIZATION
 */
enum class DoorOpeningWarningCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    Off = 1,
    On = 2,
    Unused_and_Reserved = 3,
};

/**
 * Enumeration for DRIVER_SEAT_BELT_REMINDER_ASIA_CHIME_EVENT_STATE
 */
enum class DriverSeatBeltReminderAsiaChimeEventState : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
    CANCEL_CHIME = 2,
};

/**
 * Enumeration for DRIVER_SEAT_MEMORY_RECALL_STATUS
 */
enum class DriverSeatMemoryRecallStatus : int32_t {
    No_Status_to_Report = 0,
    Stored_Successfully = 1,
    Stored_UnSuccessfully = 2,
    Recall_Successfully = 3,
    Recall_UnSuccessfully_Local_Interrupt = 4,
    Recall_UnSuccessfully_Error = 5,
    Target_Position_Already = 6,
};

/**
 * Enumeration for DRIVER_WINDOW_MOTION_STATUS
 */
enum class DriverWindowMotionStatus : int32_t {
    No_Action = 0,
    Opening = 1,
    Closing = 2,
    Unknown = 3,
};

/**
 * Enumeration for DRIVER_WINDOW_PERCENTAGE_POSITION_STATUS_VALIDITY
 */
enum class DriverWindowPercentagePositionStatusValidity : int32_t {
    Valid = 0,
    Invalid = 1,
};

/**
 * Enumeration for DRIVER_WINDOW_POSITION_STATUS
 */
enum class DriverWindowPositionStatus : int32_t {
    Window_at_Fully_Closed_Position = 0,
    Window_Open_less_then_A = 1,
    position_A = 2,
    position_B = 3,
    position_C = 4,
    Window_Open_more_then_C = 5,
    Window_Fully_Opened_Position = 6,
    Not_used = 7,
};

/**
 * Enumeration for FIRST_ROW_COOLED_SEAT_INDICATION_CONTROL_VALIDITY
 */
enum class FirstRowCooledSeatIndicationControlValidity : int32_t {
    valid = 0,
    invalid = 1,
};

/**
 * Enumeration for FIRST_ROW_HEATED_SEAT_INDICATION_CONTROL_VALIDITY
 */
enum class FirstRowHeatedSeatIndicationControlValidity : int32_t {
    valid = 0,
    invalid = 1,
};

/**
 * Enumeration for FRONT_PAD_WEAR_INITIALIZE_REQUEST
 */
enum class FrontPadWearInitializeRequest : int32_t {
    No_Action = 0,
    Initialize = 1,
};

/**
 * Enumeration for FRONT_ROTOR_WEAR_INITIALIZE_REQUEST
 */
enum class FrontRotorWearInitializeRequest : int32_t {
    No_Action = 0,
    Initialize = 1,
};

/**
 * Enumeration for FRONT_SUNSHADE_CONTROL_REQUEST
 */
enum class FrontSunshadeControlRequest : int32_t {
    No_Action = 0,
    Comfort_Close = 1,
    Comfort_Open = 2,
    Stop = 3,
};

/**
 * Enumeration for FRONT_SUNSHADE_PERCENTAGE_CONTROL_REQUEST
 */
enum class FrontSunshadePercentageControlRequest : int32_t {
    No_Request = 0,
    X0_ = 1,
    X5_ = 2,
    X10_ = 3,
    X15_ = 4,
    X20_ = 5,
    X25_ = 6,
    X30_ = 7,
    X35_ = 8,
    X40_ = 9,
    X45_ = 10,
    X50_ = 11,
    X55_ = 12,
    X60_ = 13,
    X65_ = 14,
    X70_ = 15,
    X75_ = 16,
    X80_ = 17,
    X85_ = 18,
    X90_ = 19,
    X95_ = 20,
    X100_ = 21,
    Reserved_16 = 22,
    Reserved_17 = 23,
    Reserved_18 = 24,
    Reserved_19 = 25,
    Reserved_1A = 26,
    Reserved_1B = 27,
    Reserved_1C = 28,
    Reserved_1D = 29,
    Reserved_1E = 30,
    Reserved_1F = 31,
};

/**
 * Enumeration for FRONT_SUNSHADE_PERCENTAGE_POSITION_STATUS_VALIDITY
 */
enum class FrontSunshadePercentagePositionStatusValidity : int32_t {
    valid = 0,
    invalid = 1,
};

/**
 * Enumeration for FRONT_SUNSHADE_POSITION_STATUS
 */
enum class FrontSunshadePositionStatus : int32_t {
    FULLY_CLOSED = 0,
    FULLY_OPENED = 1,
    Position_A = 2,
    Position_B = 3,
    Position_C = 4,
    CLOSING = 5,
    OPENING = 6,
    Not_Used = 7,
};

/**
 * Enumeration for HEAD_AND_PARK_LAMPS_CURRENT_SELECTION_VALUE
 */
enum class HeadAndParkLampsCurrentSelectionValue : int32_t {
    AUTO = 0,
    OFF = 1,
    PARKLAMP = 2,
    HEADLAMP = 3,
};

/**
 * Enumeration for HEATED_STEERING_WHEEL_INDICATION
 */
enum class HeatedSteeringWheelIndication : int32_t {
    Off = 0,
    Low = 1,
    Med = 2,
    High = 3,
};

/**
 * Enumeration for HEATED_STEERING_WHEEL_LEVELS_AVAILABLE
 */
enum class HeatedSteeringWheelLevelsAvailable : int32_t {
    Not_Available = 0,
    Two_Levels_Available = 1,
    Three_Levels_Available = 2,
    Four_Levels_Available = 3,
};

/**
 * Enumeration for HILL_DESCENT_CONTROL_SCREEN_CONFIGURATION
 */
enum class HillDescentControlScreenConfiguration : int32_t {
    None = 0,
    HDC = 1,
};

/**
 * Enumeration for HILL_DESCENT_CONTROL_SWITCH_STATUS_VIRTUAL_BUTTON
 */
enum class HillDescentControlSwitchStatusVirtualButton : int32_t {
    Inactive = 0,
    Active = 1,
};

/**
 * Enumeration for HILL_DESCENT_CONTROL_SYSTEM_STATUS
 */
enum class HillDescentControlSystemStatus : int32_t {
    Normal = 0,
    Enabled = 1,
    Active = 2,
    Failed = 3,
    Temporarily_Inhibited = 4,
};

/**
 * Enumeration for HVAC_REMOTE_START_SETTING_CUSTOMIZATION
 */
enum class HvacRemoteStartSettingCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    AUTOMATIC = 1,
    LAST_SETTING = 2,
    RESERVED_1 = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
};

/**
 * Enumeration for ILS_AMBIENT_LIGHT_ANIMATION_CONTROL_REQUEST_SERVICE_VCU
 */
enum class IlsAmbientLightAnimationControlRequestServiceVcu : int32_t {
    No_Action = 0,
    Animation1 = 1,
    Animation2 = 2,
    Animation3 = 3,
    Animation4 = 4,
    Animation5 = 5,
    Animation6 = 6,
};

/**
 * Enumeration for ILS_AMBIENT_LIGHT_BRIGHTNESS_LEVEL_SETTING_REQUEST_ENABLE_SERVICE_VCU
 */
enum class IlsAmbientLightBrightnessLevelSettingRequestEnableServiceVcu : int32_t {
    Disable = 0,
    Enable = 1,
};

/**
 * Enumeration for ILS_AMBIENT_LIGHT_ON_OFF_CONTROL_REQUEST_SERVICE_VCU
 */
enum class IlsAmbientLightOnOffControlRequestServiceVcu : int32_t {
    No_Action = 0,
    ON = 1,
    OFF = 2,
};

/**
 * Enumeration for ILS_AMBIENT_LIGHT_RGB_COLOR_VALUE_SETTING_REQUEST_ENABLE_SERVICE_VCU
 */
enum class IlsAmbientLightRgbColorValueSettingRequestEnableServiceVcu : int32_t {
    Disable = 0,
    Enable = 1,
};

/**
 * Enumeration for INTERIOR_DIMMING_CHANGE_REQUEST
 */
enum class InteriorDimmingChangeRequest : int32_t {
    No_Action = 0,
    Increase = 1,
    Decrease = 2,
};

/**
 * Enumeration for INTERIOR_DIMMING_DISPLAY_CHANGE_REQUEST
 */
enum class InteriorDimmingDisplayChangeRequest : int32_t {
    No_Action = 0,
    Increase = 1,
    Decrease = 2,
};

/**
 * Enumeration for LANE_CENTERING_ADAPTIVE_OFFSET_CUSTOMIZATION
 */
enum class LaneCenteringAdaptiveOffsetCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
};

/**
 * Enumeration for LANE_CENTERING_CONVENIENCE_SIGNAL_GROUP_LANE_CENTERING_CONTROL_INDICATION_REQUEST_FCM
 */
enum class LaneCenteringConvenienceSignalGroupLaneCenteringControlIndicationRequestFcm : int32_t {
    Indicator_Off = 0,
    White_Indicator = 1,
    Green_Indicator = 2,
    Blue_Indicator = 3,
    Red_Indicator = 4,
    Yellow_Flashing_Indicator = 5,
    Reserved_6 = 6,
    Reserved_7 = 7,
};

/**
 * Enumeration for LANE_CENTERING_CONVENIENCE_SIGNAL_GROUP_LANE_CENTERING_CONTROL_INDICATION_REQUEST_IDCM_A
 */
enum class LaneCenteringConvenienceSignalGroupLaneCenteringControlIndicationRequestIdcmA : int32_t {
    Indicator_Off = 0,
    White_Indicator = 1,
    Green_Indicator = 2,
    Blue_Indicator = 3,
    Red_Indicator = 4,
    Yellow_Flashing_Indicator = 5,
    Reserved_6 = 6,
    Reserved_7 = 7,
};

/**
 * Enumeration for LANE_CHANGE_BY_COMMAND_CUSTOMIZATION
 */
enum class LaneChangeByCommandCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
};

/**
 * Enumeration for LANE_DETECTION_WARNING_AND_CONTROL_CUSTOMIZATION
 */
enum class LaneDetectionWarningAndControlCustomization : int32_t {
    Setting_UNKNOWN = 0,
    Off = 1,
    Lane_Departure_Warning_Only = 2,
    Lane_Keeping_Assist = 3,
    Lateral_Impact_Avoidance = 4,
    Enhanced_Lane_Keep_Assist = 5,
};

/**
 * Enumeration for LEFT_REAR_WINDOW_POSITION_STATUS
 */
enum class LeftRearWindowPositionStatus : int32_t {
    Window_at_Fully_Closed_Position = 0,
    Window_Open_less_then_A = 1,
    position_A = 2,
    position_B = 3,
    position_C = 4,
    Window_Open_more_then_C = 5,
    Window_Fully_Opened_Position = 6,
    Not_used = 7,
};

/**
 * Enumeration for LEFT_TURN_LAMP_ACTIVE
 */
enum class LeftTurnLampActive : int32_t {
    Off = 0,
    On_without_telltale = 1,
    On_with_telltale = 2,
};

/**
 * Enumeration for NAVIGATION_ON_ADAS_CUSTOMIZATION
 */
enum class NavigationOnAdasCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
};

/**
 * Enumeration for NAVIGATION_ON_ADAS_LANE_CHANGE_TYPE_CUSTOMIZATION
 */
enum class NavigationOnAdasLaneChangeTypeCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    Manual = 1,
    Automatic = 2,
};

/**
 * Enumeration for OSRVM_COMFORT_FOLD_CUSTOMIZATION
 */
enum class OsrvmComfortFoldCustomization : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
    Reserved_3 = 3,
    Reserved_4 = 4,
    Reserved_5 = 5,
    Reserved_6 = 6,
    Reserved_7 = 7,
};

/**
 * Enumeration for PARK_ASSIST_SOFT_BUTTON_REQUEST
 */
enum class ParkAssistSoftButtonRequest : int32_t {
    HIDDEN = 0,
    DISABLED = 1,
    ENABLED = 2,
    HIGHLIGHTED = 3,
};

/**
 * Enumeration for PASSENGER_WINDOW_MOTION_STATUS
 */
enum class PassengerWindowMotionStatus : int32_t {
    No_Action = 0,
    Opening = 1,
    Closing = 2,
    Unknown = 3,
};

/**
 * Enumeration for PASSENGER_WINDOW_PERCENTAGE_POSITION_STATUS_VALIDITY
 */
enum class PassengerWindowPercentagePositionStatusValidity : int32_t {
    Valid = 0,
    Invalid = 1,
};

/**
 * Enumeration for PASSENGER_WINDOW_POSITION_STATUS
 */
enum class PassengerWindowPositionStatus : int32_t {
    Window_at_Fully_Closed_Position = 0,
    Window_Open_less_then_A = 1,
    position_A = 2,
    position_B = 3,
    position_C = 4,
    Window_Open_more_then_C = 5,
    Window_Fully_Opened_Position = 6,
    Not_used = 7,
};

/**
 * Enumeration for PEDESTRIAN_WARNING_INDICATION_REQUEST
 */
enum class PedestrianWarningIndicationRequest : int32_t {
    None = 0,
    Pedestrian_detected = 1,
    Pedestrian_alert = 2,
    Reserved = 3,
};

/**
 * Enumeration for PM_2_5_FILTER_REMAINING_LIFE_VALIDITY
 */
enum class Pm25FilterRemainingLifeValidity : int32_t {
    Valid = 0,
    Invalid = 1,
};

/**
 * Enumeration for REAR_CROSS_TRAFFIC_ASSIST_CUSTOMIZATION
 */
enum class RearCrossTrafficAssistCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    Off = 1,
    Alert_Only = 2,
    Alert_and_Brake = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for REAR_LEFT_SIDE_SUNBLIND_INFOTAINMENT_COMFORT_REQUEST
 */
enum class RearLeftSideSunblindInfotainmentComfortRequest : int32_t {
    No_action = 0,
    Express_Up = 1,
    Express_Down = 2,
};

/**
 * Enumeration for REAR_LEFT_SIDE_SUNBLIND_POSITION_STATUS
 */
enum class RearLeftSideSunblindPositionStatus : int32_t {
    Unknown = 0,
    fully_closed = 1,
    fully_open = 2,
    Closing = 3,
    Opening = 4,
};

/**
 * Enumeration for REAR_LEFT_WINDOW_MOTION_STATUS
 */
enum class RearLeftWindowMotionStatus : int32_t {
    No_Action = 0,
    Opening = 1,
    Closing = 2,
    Unknown = 3,
};

/**
 * Enumeration for REAR_LEFT_WINDOW_PERCENTAGE_POSITION_STATUS_VALIDITY
 */
enum class RearLeftWindowPercentagePositionStatusValidity : int32_t {
    Valid = 0,
    Invalid = 1,
};

/**
 * Enumeration for REAR_PAD_WEAR_INITIALIZE_REQUEST
 */
enum class RearPadWearInitializeRequest : int32_t {
    No_Action = 0,
    Initialize = 1,
};

/**
 * Enumeration for REAR_RIGHT_SIDE_SUNBLIND_INFOTAINMENT_COMFORT_REQUEST
 */
enum class RearRightSideSunblindInfotainmentComfortRequest : int32_t {
    No_action = 0,
    Express_Up = 1,
    Express_Down = 2,
};

/**
 * Enumeration for REAR_RIGHT_SIDE_SUNBLIND_POSITION_STATUS
 */
enum class RearRightSideSunblindPositionStatus : int32_t {
    Unknown = 0,
    fully_closed = 1,
    fully_open = 2,
    Closing = 3,
    Opening = 4,
};

/**
 * Enumeration for REAR_RIGHT_WINDOW_MOTION_STATUS
 */
enum class RearRightWindowMotionStatus : int32_t {
    No_Action = 0,
    Opening = 1,
    Closing = 2,
    Unknown = 3,
};

/**
 * Enumeration for REAR_RIGHT_WINDOW_PERCENTAGE_POSITION_STATUS_VALIDITY
 */
enum class RearRightWindowPercentagePositionStatusValidity : int32_t {
    Valid = 0,
    Invalid = 1,
};

/**
 * Enumeration for REAR_ROTOR_WEAR_INITIALIZE_REQUEST
 */
enum class RearRotorWearInitializeRequest : int32_t {
    No_Action = 0,
    Initialize = 1,
};

/**
 * Enumeration for REAR_SUNSHADE_CONTROL_REQUEST
 */
enum class RearSunshadeControlRequest : int32_t {
    No_Action = 0,
    Comfort_Close = 1,
    Comfort_Open = 2,
    Stop = 3,
};

/**
 * Enumeration for REAR_SUNSHADE_PERCENTAGE_CONTROL_REQUEST
 */
enum class RearSunshadePercentageControlRequest : int32_t {
    No_Request = 0,
    X0_ = 1,
    X5_ = 2,
    X10_ = 3,
    X15_ = 4,
    X20_ = 5,
    X25_ = 6,
    X30_ = 7,
    X35_ = 8,
    X40_ = 9,
    X45_ = 10,
    X50_ = 11,
    X55_ = 12,
    X60_ = 13,
    X65_ = 14,
    X70_ = 15,
    X75_ = 16,
    X80_ = 17,
    X85_ = 18,
    X90_ = 19,
    X95_ = 20,
    X100_ = 21,
    Reserved_16 = 22,
    Reserved_17 = 23,
    Reserved_18 = 24,
    Reserved_19 = 25,
    Reserved_1A = 26,
    Reserved_1B = 27,
    Reserved_1C = 28,
    Reserved_1D = 29,
    Reserved_1E = 30,
    Reserved_1F = 31,
};

/**
 * Enumeration for REAR_SUNSHADE_PERCENTAGE_POSITION_STATUS_VALIDITY
 */
enum class RearSunshadePercentagePositionStatusValidity : int32_t {
    valid = 0,
    invalid = 1,
};

/**
 * Enumeration for REAR_SUNSHADE_POSITION_STATUS
 */
enum class RearSunshadePositionStatus : int32_t {
    FULLY_CLOSED = 0,
    FULLY_OPENED = 1,
    Position_A = 2,
    Position_B = 3,
    Position_C = 4,
    CLOSING = 5,
    OPENING = 6,
    Not_Used = 7,
};

/**
 * Enumeration for REAR_VIRTUAL_BUMPER_CUSTOMIZATION
 */
enum class RearVirtualBumperCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for REMOTE_START_HEAT_STEERING_WHEEL_CUSTOMIZATION
 */
enum class RemoteStartHeatSteeringWheelCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_1 = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
};

/**
 * Enumeration for RESTORE_CUSTOMIZATION_FACTORY_DEFAULTS
 */
enum class RestoreCustomizationFactoryDefaults : int32_t {
    No_Action = 0,
    Restore_Defaults = 1,
};

/**
 * Enumeration for RIGHT_REAR_WINDOW_POSITION_STATUS
 */
enum class RightRearWindowPositionStatus : int32_t {
    Window_at_Fully_Closed_Position = 0,
    Window_Open_less_then_A = 1,
    position_A = 2,
    position_B = 3,
    position_C = 4,
    Window_Open_more_then_C = 5,
    Window_Fully_Opened_Position = 6,
    Not_used = 7,
};

/**
 * Enumeration for RIGHT_TURN_LAMP_ACTIVE
 */
enum class RightTurnLampActive : int32_t {
    Off = 0,
    On_without_telltale = 1,
    On_with_telltale = 2,
};

/**
 * Enumeration for SEAT_PASSENGER_COMPARTMENT_MODE_CURRENT_MODE_STATUS
 */
enum class SeatPassengerCompartmentModeCurrentModeStatus : int32_t {
    Not_Mode_Status = 0,
    Easy_Entry_Mode_Position = 1,
    Easy_Exit_Mode_Position = 2,
    Luggage_Mode_Left_Position = 3,
    Luggage_Mode_Right_Position = 4,
    Luggage_Mode_All_Position = 5,
    Easy_Entry_Mode_Ongoing = 6,
    Easy_Exit_Mode_Ongoing = 7,
    Luggage_Mode_Left_Ongoing = 8,
    Luggage_Mode_Right_Ongoing = 9,
    Luggage_Mode_All_Ongoing = 16,
    Easy_Entry_Mode_Exiting = 17,
    Easy_Exit_Mode_Exiting = 18,
    Luggage_Mode_Left_Exiting = 19,
    Luggage_Mode_Right_Exiting = 20,
    Luggage_Mode_All_Exiting = 21,
};

/**
 * Enumeration for SEAT_PASSENGER_COMPARTMENT_MODE_HMI_REQUEST
 */
enum class SeatPassengerCompartmentModeHmiRequest : int32_t {
    No_Action = 0,
    Access_Mode_Easy_Entry = 1,
    Access_Mode_Easy_Exit = 2,
    Luggage_Mode_L = 3,
    Luggage_Mode_R = 4,
    Luggage_Mode_All = 5,
    Stop = 6,
    Cancel = 7,
};

/**
 * Enumeration for SEAT_PASSENGER_COMPARTMENT_MODE_NOTIFICATION_HMI_DISPLAY_COMMAND
 */
enum class SeatPassengerCompartmentModeNotificationHmiDisplayCommand : int32_t {
    No_Action = 0,
    Load_Shed_Exceed_Indication = 1,
    Indication_2_Reserved_ = 2,
    Indication_3_Reserved_ = 3,
    Indication_4_Reserved_ = 4,
    Indication_5_Reserved_ = 5,
    Indication_6_Reserved_ = 6,
    Indication_7_Reserved_ = 7,
};

/**
 * Enumeration for SEAT_PASSENGER_COMPARTMENT_MODE_RECALL_RESPONSE_STATUS
 */
enum class SeatPassengerCompartmentModeRecallResponseStatus : int32_t {
    No_Status_to_Report = 0,
    Stored_Successfully = 1,
    Stored_UnSuccessfully = 2,
    VCU_Recall_Successfully = 3,
    VCU_Recall_UnSuccessfully_Local_Interrupt = 4,
    VCU_Recall_UnSuccessfully_Error = 5,
    Roof_Console_Switch_Recall_Successfully = 6,
    Roof_Console_Switch_Recall_UnSuccessfully_Local_Interrupt = 7,
    Roof_Console_Switch_Recall_UnSuccessfully_Error = 8,
};

/**
 * Enumeration for SEAT_PASSENGER_COMPARTMENT_MODE_ROOF_CONTROL_SWITCH_SELECTED_STATUS
 */
enum class SeatPassengerCompartmentModeRoofControlSwitchSelectedStatus : int32_t {
    No_Mode_Indicator_On = 0,
    Easy_Entry_Mode_Indicator_On = 1,
    Easy_Exit_Mode_Indicator_On = 2,
    VIP_Mode_Left_Indicator_On = 3,
    VIP_Mode_Right_Indicator_On = 4,
    VIP_Mode_Indicator_On = 5,
    Luggage_Mode_Left_Indicator_On = 6,
    Luggage_Mode_Right_Indicator_On = 7,
    Luggage_Mode_All_Indicator_On = 8,
};

/**
 * Enumeration for SECOND_ROW_COMFORT_MODE_MUTE_REQUEST_INFO
 */
enum class SecondRowComfortModeMuteRequestInfo : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for SECOND_ROW_COOLED_SEAT_INDICATION_CONTROL_VALIDITY
 */
enum class SecondRowCooledSeatIndicationControlValidity : int32_t {
    valid = 0,
    invalid = 1,
};

/**
 * Enumeration for SECOND_ROW_HEATED_SEAT_INDICATION_CONTROL_VALIDITY
 */
enum class SecondRowHeatedSeatIndicationControlValidity : int32_t {
    valid = 0,
    invalid = 1,
};

/**
 * Enumeration for SUNROOF_CONTROL_REQUEST
 */
enum class SunroofControlRequest : int32_t {
    No_Action = 0,
    Comfort_Close = 1,
    Comfort_Open = 2,
    Vent = 3,
    Stop = 4,
};

/**
 * Enumeration for SUNROOF_PERCENTAGE_CONTROL_REQUEST
 */
enum class SunroofPercentageControlRequest : int32_t {
    No_Request = 0,
    X0_ = 1,
    X5_ = 2,
    X10_ = 3,
    X15_ = 4,
    X20_ = 5,
    X25_ = 6,
    X30_ = 7,
    X35_ = 8,
    X40_ = 9,
    X45_ = 10,
    X50_ = 11,
    X55_ = 12,
    X60_ = 13,
    X65_ = 14,
    X70_ = 15,
    X75_ = 16,
    X80_ = 17,
    X85_ = 18,
    X90_ = 19,
    X95_ = 20,
    X100_ = 21,
    Reserved_22 = 22,
    Reserved_23 = 23,
    Reserved_24 = 24,
    Reserved_25 = 25,
    Reserved_26 = 26,
    Reserved_27 = 27,
    Reserved_28 = 28,
    Reserved_29 = 29,
    Reserved_30 = 30,
    Reserved_31 = 31,
};

/**
 * Enumeration for SUNROOF_PERCENTAGE_POSITION_STATUS_VALIDITY
 */
enum class SunroofPercentagePositionStatusValidity : int32_t {
    Valid = 0,
    Invalid = 1,
};

/**
 * Enumeration for SUNROOF_POSITION_STATUS
 */
enum class SunroofPositionStatus : int32_t {
    FULLY_CLOSED = 0,
    FULLY_OPENED = 1,
    VENT = 2,
    COMFORT_OPEN_POSITION = 3,
    Reserved = 4,
    CLOSING = 5,
    OPENING = 6,
    PARTIALLY_OPEN = 7,
};

/**
 * Enumeration for SYSTEM_POWER_MODE
 */
enum class SystemPowerMode : int32_t {
    Off = 0,
    Accessory = 1,
    Run = 2,
    Crank_Request = 3,
};

/**
 * Enumeration for THIRD_ROW_COOLED_SEAT_INDICATION_CONTROL_VALIDITY
 */
enum class ThirdRowCooledSeatIndicationControlValidity : int32_t {
    valid = 0,
    invalid = 1,
};

/**
 * Enumeration for THIRD_ROW_HEATED_SEAT_INDICATION_CONTROL_VALIDITY
 */
enum class ThirdRowHeatedSeatIndicationControlValidity : int32_t {
    valid = 0,
    invalid = 1,
};

/**
 * Enumeration for TIME_DISPLAY_FORMAT_RADIO_LOW
 */
enum class TimeDisplayFormatRadioLow : int32_t {
    X12_hour_mode = 0,
    X24_hour_mode = 1,
};

/**
 * Enumeration for TRACTION_AND_STABILITY_SYSTEM_CURRENT_STATUS
 */
enum class TractionAndStabilitySystemCurrentStatus : int32_t {
    Vehicle_stability_enhancement_enabled_and_traction_control_system_enabled = 0,
    Vehicle_stability_enhancement_disabled_and_traction_control_system_disabled = 1,
    Vehicle_stability_enhancement_enabled_and_traction_control_system_disabled = 2,
};

/**
 * Enumeration for TRACTION_AND_STABILITY_SYSTEM_DRIVER_REQUEST
 */
enum class TractionAndStabilitySystemDriverRequest : int32_t {
    no_action = 0,
    Vehicle_stability_enhancement_enable_and_traction_control_system_enable = 1,
    Vehicle_stability_enhancement_disable_and_traction_control_system_disable = 2,
    Vehicle_stability_enhancement_enable_and_traction_control_system_disable = 3,
};

/**
 * Enumeration for TRACTION_AND_STABILITY_SYSTEM_DRIVER_REQUEST_VALIDITY
 */
enum class TractionAndStabilitySystemDriverRequestValidity : int32_t {
    Valid = 0,
    Invalid = 1,
};

/**
 * Enumeration for TRACTION_AND_STABILITY_SYSTEM_SCREEN_CONFIGURATION
 */
enum class TractionAndStabilitySystemScreenConfiguration : int32_t {
    None = 0,
    TCS_Only = 1,
    TCS_and_ESC = 2,
    TCS_ESC_and_Comp = 3,
};

/**
 * Enumeration for TRAFFIC_LIGHT_AND_STOP_LINE_CONTROL_CUSTOMIZATION
 */
enum class TrafficLightAndStopLineControlCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    Display_Only = 2,
    Display_and_Control = 3,
};

/**
 * Enumeration for TRAFFIC_SIGN_MEMORY_CUSTOMIZATION
 */
enum class TrafficSignMemoryCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    Off = 1,
    Display_Only = 2,
    Display_and_Warning = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for VEHICLE_GREET_MODE_CUSTOMIZATION
 */
enum class VehicleGreetModeCustomization : int32_t {
    No_Value = 0,
    Mode_1 = 1,
    Mode_2 = 2,
    Mode_3 = 3,
    Mode_4 = 4,
    Mode_5 = 5,
    Mode_6 = 6,
    Mode_7 = 7,
};

/**
 * Enumeration for VEHICLE_STABILITY_ENHANCEMENT_STATUS
 */
enum class VehicleStabilityEnhancementStatus : int32_t {
    Inactive = 0,
    Active = 1,
    Fault = 2,
    Warming_Up = 3,
    Not_Ready = 4,
};

/**
 * Enumeration for VEHICLE_THEFT_NOTIFICATION_SIGNAL_GROUP_AHBA_CONTROL_REMINDER
 */
enum class VehicleTheftNotificationSignalGroupAhbaControlReminder : int32_t {
    No_Fault = 0,
    X_PRZ_Enable_ = 1,
    X_Power_Mode_ = 2,
    X_PLEASE_MLS = 3,
    X_OPEN_LB_ = 4,
    X_CLOSE_HB_MANUALLY_ = 5,
    X_Reverse_Position_ = 6,
    X_CLOSE_FOG_LAMP_ = 7,
    X_AHBA_Feature_Fault_ = 8,
};

/**
 * Enumeration for VEHICLE_THEFT_NOTIFICATION_SIGNAL_GROUP_FRONT_FOG_CONTROL_REMINDER
 */
enum class VehicleTheftNotificationSignalGroupFrontFogControlReminder : int32_t {
    No_Fault = 0,
    X_Power_Mode_ = 1,
    X_OPEN_LB_ = 2,
    X_CLOSE_LB_ = 3,
    X_CLOSE_HB_ = 4,
    X_FOG_FAULT_ = 5,
};

/**
 * Enumeration for VEHICLE_THEFT_NOTIFICATION_SIGNAL_GROUP_HEADLAMP_CONTROL_REMINDER
 */
enum class VehicleTheftNotificationSignalGroupHeadlampControlReminder : int32_t {
    No_Fault = 0,
    X_Headlamp_Fault_ = 1,
    X_Power_Mode_ = 2,
    X_PLEASE_MLS = 3,
    X_No_Operation_in_Night_ = 4,
};

/**
 * Enumeration for VEHICLE_THEFT_NOTIFICATION_SIGNAL_GROUP_REAR_FOG_CONTROL_REMINDER
 */
enum class VehicleTheftNotificationSignalGroupRearFogControlReminder : int32_t {
    No_Fault = 0,
    X_Power_Mode_ = 1,
    X_OPEN_LB_ = 2,
    X_CLOSE_LB_ = 3,
    X_CLOSE_HB_ = 4,
    X_FOG_FAULT_ = 5,
};

/**
 * Enumeration for VIRTUAL_CONTROL_DOME_LIGHT_STATUS_DOME_LIGHT_CURRENT_SELECTION_VALUE
 */
enum class VirtualControlDomeLightStatusDomeLightCurrentSelectionValue : int32_t {
    Unknown = 0,
    OFF = 1,
    ON = 2,
};

/**
 * Enumeration for VIRTUAL_CONTROL_POWER_WINDOW_LOCKOUT_REQUEST
 */
enum class VirtualControlPowerWindowLockoutRequest : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

/**
 * Enumeration for VIRTUAL_CONTROL_POWER_WINDOW_LOCKOUT_STATUS_CURRENT_SELECTION_VALUE
 */
enum class VirtualControlPowerWindowLockoutStatusCurrentSelectionValue : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

/**
 * Enumeration for VR_BCM_REQUEST_SIGNAL_GROUP_WIPER_MIST_REQUEST_VCU
 */
enum class VrBcmRequestSignalGroupWiperMistRequestVcu : int32_t {
    No_Action = 0,
    Trigger = 1,
};

/**
 * Enumeration for V_2_X_WARNING_INDICATION_REQUEST
 */
enum class V2XWarningIndicationRequest : int32_t {
    No_Indication = 0,
    Forward_Collision_Warning = 1,
    Intersection_Collision_Warning = 2,
    Left_Turn_Assist_Warning = 3,
    Blind_Spot_Warning_Lane_Change_Warning = 4,
    Do_Not_Pass_Warning = 5,
    Emergency_Brake_Warning = 6,
    Abnormal_Vehicle_Warning = 7,
    Control_Loss_Warning = 8,
    Hazardous_Location_Warning = 9,
    Speed_Limit_Warning = 10,
    Red_Ligth_Violation_Warning = 11,
    Vulnerable_Road_User_Collision_Warning = 12,
    Green_Light_Optimal_Speed_Advisory = 13,
    In_Vehicle_Signage = 14,
    Traffic_Jam_Warning = 15,
    Emergency_Vehicle_Warning = 16,
    Vehicle_Near_Field_Payment = 17,
    Work_Zone_Warning = 18,
    Reserved_1 = 19,
    Reserved_2 = 20,
    Reserved_3 = 21,
    Reserved_4 = 22,
    Reserved_5 = 23,
    Reserved_6 = 24,
    Reserved_7 = 25,
    Reserved_8 = 26,
    Reserved_9 = 27,
    Reserved_10 = 28,
    Reserved_11 = 29,
    Reserved_12 = 30,
    Reserved_13 = 31,
};

/**
 * Enumeration for WINDOW_CONTROL_REQUEST_SIGNAL_GROUP_DRIVER_WINDOW_INFOTAINMENT_COMFORT_REQUEST
 */
enum class WindowControlRequestSignalGroupDriverWindowInfotainmentComfortRequest : int32_t {
    No_Action = 0,
    Comfort_Close = 1,
    Comfort_Open = 2,
    Stop = 3,
};

/**
 * Enumeration for WINDOW_CONTROL_REQUEST_SIGNAL_GROUP_PASSENGER_WINDOW_INFOTAINMENT_COMFORT_REQUEST
 */
enum class WindowControlRequestSignalGroupPassengerWindowInfotainmentComfortRequest : int32_t {
    No_Action = 0,
    Comfort_Close = 1,
    Comfort_Open = 2,
    Stop = 3,
};

/**
 * Enumeration for WINDOW_CONTROL_REQUEST_SIGNAL_GROUP_REAR_LEFT_WINDOW_INFOTAINMENT_COMFORT_REQUEST
 */
enum class WindowControlRequestSignalGroupRearLeftWindowInfotainmentComfortRequest : int32_t {
    No_Action = 0,
    Comfort_Close = 1,
    Comfort_Open = 2,
    Stop = 3,
};

/**
 * Enumeration for WINDOW_CONTROL_REQUEST_SIGNAL_GROUP_REAR_RIGHT_WINDOW_INFOTAINMENT_COMFORT_REQUEST
 */
enum class WindowControlRequestSignalGroupRearRightWindowInfotainmentComfortRequest : int32_t {
    No_Action = 0,
    Comfort_Close = 1,
    Comfort_Open = 2,
    Stop = 3,
};

/**
 * Enumeration for WIPER_STATUS
 */
enum class WiperStatus : int32_t {
    OFF = 0,
    Intermittent = 1,
    Low_Speed = 2,
    High_Speed = 3,
};
