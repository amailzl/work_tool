
 *
 * Enumeration for ADAPTIVE_AND_CONVENTIONAL_CRUISE_CONTROL_INDICATION_REQUEST
 */
enum class AdaptiveAndConventionalCruiseControlIndicationRequest : int32_t {
    No_Action = 0,
    Cruise_Control_and_Adaptive_Cruise_Control_Telltale_Off = 1,
    Cruise_Control_Unavailable_Telltale_On = 2,
    Cruise_Control_White_Telltale_On = 3,
    Cruise_Control_Green_Telltale_On = 4,
    Cruise_Control_Blue_Telltale_On = 5,
    Adaptive_Cruise_Control_Unavailable_Telltale_On = 6,
    Adaptive_Cruise_Control_White_Telltale_On = 7,
    Adaptive_Cruise_Control_Green_Telltale_On = 8,
    Adaptive_Cruise_Control_Blue_Telltale_On = 9,
};

/**
 * Enumeration for ADAPTIVE_LIGHTING_RESPONSE_TYPE_CUSTOMIZATION
 */
enum class AdaptiveLightingResponseTypeCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    CORNER_AND_CURVE_LIGHTING = 2,
    INTELLIGENT_LIGHT_DISTRIBUTION = 3,
    INTELLIGENT_LIGHT_DISTRIBUTION_GPS_ASSISTANCE = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for COMMAND_REAR_PASSENGER_SECOND_ROW_CENTER_SEAT_BELT_VISUAL_INDICATION
 */
enum class CommandRearPassengerSecondRowCenterSeatBeltVisualIndication : int32_t {
    No_Indication = 0,
    Unbuckled_Indication = 1,
    Buckled_Indication = 2,
    Unbuckled_Flashing_Indication = 3,
};

/**
 * Enumeration for COMMAND_REAR_PASSENGER_SECOND_ROW_LEFT_SEAT_BELT_VISUAL_INDICATION
 */
enum class CommandRearPassengerSecondRowLeftSeatBeltVisualIndication : int32_t {
    No_Indication = 0,
    Unbuckled_Indication = 1,
    Buckled_Indication = 2,
    Unbuckled_Flashing_Indication = 3,
};

/**
 * Enumeration for COMMAND_REAR_PASSENGER_SECOND_ROW_RIGHT_SEAT_BELT_VISUAL_INDICATION
 */
enum class CommandRearPassengerSecondRowRightSeatBeltVisualIndication : int32_t {
    No_Indication = 0,
    Unbuckled_Indication = 1,
    Buckled_Indication = 2,
    Unbuckled_Flashing_Indication = 3,
};

/**
 * Enumeration for COMMAND_REAR_PASSENGER_THIRD_ROW_CENTER_SEAT_BELT_VISUAL_INDICATION
 */
enum class CommandRearPassengerThirdRowCenterSeatBeltVisualIndication : int32_t {
    No_Indication = 0,
    Unbuckled_Indication = 1,
    Buckled_Indication = 2,
    Unbuckled_Flashing_Indication = 3,
};

/**
 * Enumeration for COMMAND_REAR_PASSENGER_THIRD_ROW_RIGHT_SEAT_BELT_VISUAL_INDICATION
 */
enum class CommandRearPassengerThirdRowRightSeatBeltVisualIndication : int32_t {
    No_Indication = 0,
    Unbuckled_Indication = 1,
    Buckled_Indication = 2,
    Unbuckled_Flashing_Indication = 3,
};

/**
 * Enumeration for COMMAND_REAR_PASSENGER_THRD_ROW_LEFT_SEAT_BELT_VISUAL_INDICATION
 */
enum class CommandRearPassengerThrdRowLeftSeatBeltVisualIndication : int32_t {
    No_Indication = 0,
    Unbuckled_Indication = 1,
    Buckled_Indication = 2,
    Unbuckled_Flashing_Indication = 3,
};

/**
 * Enumeration for ADASIS_NAVILINK_BUILD_UP_FLAG
 */
enum class AdasisNavilinkBuildUpFlag : int32_t {
    NOT_VALID = 0,
    VALID = 1,
};

/**
 * Enumeration for ADASIS_NAVILINK_CONTROLLED_ACCESS_ROAD
 */
enum class AdasisNavilinkControlledAccessRoad : int32_t {
    ROAD_IS_NOT_CONTROLLED_ACCESS_ROAD = 0,
    ROAD_IS_CONTROLLED_ACCESS_ROAD = 1,
};

/**
 * Enumeration for ADASIS_NAVILINK_COUNTRY_CODE
 */
enum class AdasisNavilinkCountryCode : int32_t {
    AD = 0,
    AT = 1,
    BE = 2,
    CZ = 3,
    DK = 4,
    EE = 5,
    FR = 6,
    DE = 7,
    GR = 8,
    HU = 9,
    IE = 10,
    IT = 11,
    BY = 12,
    BG = 13,
    CY = 14,
    MT = 15,
    HR = 16,
    TR = 17,
    RS = 18,
    ME = 19,
    LV = 20,
    LT = 21,
    LU = 22,
    NL = 23,
    NO = 24,
    PL = 25,
    PT = 26,
    UK = 27,
    SK = 28,
    SI = 29,
    ES = 30,
    SE = 31,
    CH = 32,
    RO = 33,
    RU = 34,
    UA = 35,
    BA = 36,
    AL = 37,
    MD = 38,
    IS = 39,
    MK = 40,
    US = 41,
    ZA = 42,
    AU = 43,
    NZ = 44,
    KR = 45,
    CN = 46,
};

/**
 * Enumeration for ADASIS_NAVILINK_DIGITAL_MAP_CONDITIONAL_SPEED_LIMIT
 */
enum class AdasisNavilinkDigitalMapConditionalSpeedLimit : int32_t {
    UNKNOWN = 0,
    Underscore_5_KM_H_MPH_ = 1,
    Num7_KM_H_MPH_ = 2,
    Num10_KM_H_MPH_ = 3,
    Num15_KM_H_MPH_ = 4,
    Num20_KM_H_MPH_ = 5,
    Num25_KM_H_MPH_ = 6,
    Num30_KM_H_MPH_ = 7,
    Num35_KM_H_MPH_ = 8,
    Num40_KM_H_MPH_ = 9,
    Num45_KM_H_MPH_ = 10,
    Num50_KM_H_MPH_ = 11,
    Num55_KM_H_MPH_ = 12,
    Num60_KM_H = 13,
    MPH_65_KM_H_MPH_ = 14,
    Num70_KM_H_MPH_ = 15,
    Num75_KM_H_MPH_ = 16,
    Num80_KM_H_MPH_ = 17,
    Num85_KM_H_MPH_ = 18,
    Num90_KM_H_MPH_ = 19,
    Num95_KM_H_MPH_ = 20,
    Num100_KM_H_MPH_ = 21,
    Num105_KM_H_MPH_ = 22,
    Num110_KM_H_MPH_ = 23,
    Num115_KM_H_MPH_ = 24,
    Num120_KM_H_MPH_ = 25,
    Num130_KM_H_MPH_ = 26,
    Num140_KM_H_MPH_ = 27,
    Num150_KM_H_MPH_ = 28,
    Num160_KM_H_MPH_ = 29,
    UNLIMITED = 30,
    NOT_AVAILABLE = 31,
};

/**
 * Enumeration for ADASIS_NAVILINK_DIGITAL_MAP_CONDITIONAL_SPEED_LIMIT_TYPE
 */
enum class AdasisNavilinkDigitalMapConditionalSpeedLimitType : int32_t {
    LANE_DEPENDENT = 0,
    ONLY_BY_FOG = 1,
    ONLY_BY_NIGHT = 2,
    ONLY_BY_DAY = 3,
    BY_TIME_OF_DAY = 4,
    ONLY_BY_RAIN = 5,
    ONLY_BY_SNOW = 6,
    UNKNOWN = 7,
};

/**
 * Enumeration for ADASIS_NAVILINK_DIGITAL_MAP_DRIVING_SIDE
 */
enum class AdasisNavilinkDigitalMapDrivingSide : int32_t {
    DRIVING_SIDE_LEFT = 0,
    DRIVING_SIDE_RIGHT = 1,
};

/**
 * Enumeration for ADASIS_NAVILINK_DIGITAL_MAP_EFFECTIVE_SPEED_LIMIT
 */
enum class AdasisNavilinkDigitalMapEffectiveSpeedLimit : int32_t {
    UNKNOWN = 0,
    Underscore_5_KM_H_MPH_ = 1,
    Num7_KM_H_MPH_ = 2,
    Num10_KM_H_MPH_ = 3,
    Num15_KM_H_MPH_ = 4,
    Num20_KM_H_MPH_ = 5,
    Num25_KM_H_MPH_ = 6,
    Num30_KM_H_MPH_ = 7,
    Num35_KM_H_MPH_ = 8,
    Num40_KM_H_MPH_ = 9,
    Num45_KM_H_MPH_ = 10,
    Num50_KM_H_MPH_ = 11,
    Num55_KM_H_MPH_ = 12,
    Num60_KM_H = 13,
    MPH_65_KM_H_MPH_ = 14,
    Num70_KM_H_MPH_ = 15,
    Num75_KM_H_MPH_ = 16,
    Num80_KM_H_MPH_ = 17,
    Num85_KM_H_MPH_ = 18,
    Num90_KM_H_MPH_ = 19,
    Num95_KM_H_MPH_ = 20,
    Num100_KM_H_MPH_ = 21,
    Num105_KM_H_MPH_ = 22,
    Num110_KM_H_MPH_ = 23,
    Num115_KM_H_MPH_ = 24,
    Num120_KM_H_MPH_ = 25,
    Num130_KM_H_MPH_ = 26,
    Num140_KM_H_MPH_ = 27,
    Num150_KM_H_MPH_ = 28,
    Num160_KM_H_MPH_ = 29,
    UNLIMITED = 30,
    NOT_AVAILABLE = 31,
};

/**
 * Enumeration for ADASIS_NAVILINK_DIGITAL_MAP_EFFECTIVE_SPEED_LIMIT_TYPE
 */
enum class AdasisNavilinkDigitalMapEffectiveSpeedLimitType : int32_t {
    IMPLICIT = 0,
    ON_TRAFFIC_SIGN = 1,
    ONLY_BY_NIGHT = 2,
    ONLY_BY_DAY = 3,
    TIME_OF_DAY = 4,
    ONLY_BY_RAIN = 5,
    ONLY_BY_SNOW_OR_FOG = 6,
    UNKOWN = 7,
};

/**
 * Enumeration for ADASIS_NAVILINK_DIGITAL_MAP_PASSING_RESTRICTION
 */
enum class AdasisNavilinkDigitalMapPassingRestriction : int32_t {
    NO_PASSING_RESTRICTIONS = 0,
    GENERAL_NO_OVERTAKE = 1,
    FLUCTUATING_E_G_LED_SIGNS_ = 2,
    CONDITIONAL_PASSENGER_CAR_WITH_TRAILER = 3,
    CONDITIONAL_TRACTORS_ARE_ALLOWED_TO_OVERTAKE = 4,
    CONDITIONAL_WHEN_WET = 5,
    CONDITIONAL_WHEN_SNOW = 6,
    UNKNOWN_CONDITION = 7,
};

/**
 * Enumeration for ADASIS_NAVILINK_DIGITAL_MAP_POSTED_SPEED_LIMIT_ASSURED
 */
enum class AdasisNavilinkDigitalMapPostedSpeedLimitAssured : int32_t {
    NOT_ASSURED = 0,
    ASSURED = 1,
};

/**
 * Enumeration for ADASIS_NAVILINK_DIGITAL_MAP_SPEED_CATEGORY
 */
enum class AdasisNavilinkDigitalMapSpeedCategory : int32_t {
    Underscore_130_KPH_OR_80_MPH = 0,
    Num101_130_KPH_OR_65_80_MPH = 1,
    Num91_100_KPH_OR_55_64_MPH = 2,
    Num71_90_KPH_OR_41_54_MPH = 3,
    Num51_70_KPH_OR_31_40_MPH = 4,
    Num31_50_KPH_OR_21_30_MPH = 5,
    Num11_30_KPH_OR_6_20_MPH = 6,
    Underscore_11_KPH_OR_6_MPH = 7,
    UNKNOWN = 8,
};

/**
 * Enumeration for ADASIS_NAVILINK_DIGITAL_MAP_VERSION_QUARTER
 */
enum class AdasisNavilinkDigitalMapVersionQuarter : int32_t {
    QUARTER_1 = 0,
    QUARTER_2 = 1,
    QUARTER_3 = 2,
    QUARTER_4 = 3,
};

/**
 * Enumeration for ADASIS_NAVILINK_DIGITAL_MAP_VERSION_YEAR
 */
enum class AdasisNavilinkDigitalMapVersionYear : int32_t {
    Num2000 = 0,
    Num2001 = 1,
    Num2002 = 2,
    Num2003 = 3,
    Num2004 = 4,
    Num2005 = 5,
    Num2006 = 6,
    Num2007 = 7,
    Num2008 = 8,
    Num2009 = 9,
    Num2010 = 10,
    Num2011 = 11,
    Num2012 = 12,
    Num2013 = 13,
    Num2014 = 14,
    Num2015 = 15,
    Num2016 = 16,
    Num2017 = 17,
    Num2018 = 18,
    Num2019 = 19,
    Num2020 = 20,
    Num2021 = 21,
    Num2022 = 22,
    Num2023 = 23,
    Num2024 = 24,
    Num2025 = 25,
    Num2026 = 26,
    Num2027 = 27,
    Num2028 = 28,
    Num2029 = 29,
    Num2030 = 30,
    Num2031 = 31,
    Num2032 = 32,
    Num2033 = 33,
    Num2034 = 34,
    Num2035 = 35,
    Num2036 = 36,
    Num2037 = 37,
    Num2038 = 38,
    Num2039 = 39,
    Num2040 = 40,
    Num2041 = 41,
    Num2042 = 42,
    Num2043 = 43,
    Num2044 = 44,
    Num2045 = 45,
    Num2046 = 46,
    Num2047 = 47,
    Num2048 = 48,
    Num2049 = 49,
    Num2050 = 50,
    Num2051 = 51,
    Num2052 = 52,
    Num2053 = 53,
    Num2054 = 54,
    Num2055 = 55,
    Num2056 = 56,
    Num2057 = 57,
    Num2058 = 58,
    Num2059 = 59,
    Num2060 = 60,
    Num2061 = 61,
    Num2062 = 62,
    NOT_APPLICABLE = 63,
};

/**
 * Enumeration for ADASIS_NAVILINK_FUNCTIONAL_ROAD_CLASS
 */
enum class AdasisNavilinkFunctionalRoadClass : int32_t {
    LOCAL = 0,
    SFREEWAY = 1,
    FREEWAY = 2,
    PED_MALL = 3,
    HIGHWAY = 4,
    ARTERIAL = 5,
    ALLEY = 6,
    COLLECTOR = 7,
};

/**
 * Enumeration for ADASIS_NAVILINK_LANE_CATEGORY
 */
enum class AdasisNavilinkLaneCategory : int32_t {
    NO_INFO_AVAILABLE = 0,
    ONE_LANE = 1,
    TWO_OR_THREE_LANES = 2,
    FOUR_OR_MORE_LANES = 3,
};

/**
 * Enumeration for ADASIS_NAVILINK_MAP_DATA_AVAILABILITY
 */
enum class AdasisNavilinkMapDataAvailability : int32_t {
    NOT_VALID = 0,
    VALID = 1,
};

/**
 * Enumeration for ADASIS_NAVILINK_SEPARATED_LANE_ROAD
 */
enum class AdasisNavilinkSeparatedLaneRoad : int32_t {
    ROAD_IS_NOT_CONTROLLED_ACCESS_ROAD = 0,
    ROAD_IS_CONTROLLED_ACCESS_ROAD = 1,
};

/**
 * Enumeration for ADASIS_NAVILINK_SPEED_LIMIT_UNIT
 */
enum class AdasisNavilinkSpeedLimitUnit : int32_t {
    MILES_H = 0,
    KM_H = 1,
};

/**
 * Enumeration for ADVANCED_PARK_ASSIST_CROSS_BACK_IN_SOFT_BUTTON_STATUS
 */
enum class AdvancedParkAssistCrossBackInSoftButtonStatus : int32_t {
    NOT_PRESSED = 0,
    PRESSED = 1,
};

/**
 * Enumeration for ADVANCED_PARK_ASSIST_EXIT_PARK_SOFT_BUTTON_REQUEST
 */
enum class AdvancedParkAssistExitParkSoftButtonRequest : int32_t {
    HIDDEN = 0,
    DISABLED = 1,
    ENABLED = 2,
    HIGHLIGHTED = 3,
};

/**
 * Enumeration for ADVANCED_PARK_ASSIST_EXIT_PARK_SOFT_BUTTON_STATUS
 */
enum class AdvancedParkAssistExitParkSoftButtonStatus : int32_t {
    NOT_PRESSED = 0,
    PRESSED = 1,
};

/**
 * Enumeration for ADVANCED_PARK_ASSIST_FOCUS_STATUS_CSM
 */
enum class AdvancedParkAssistFocusStatusCsm : int32_t {
    NO_FOCUS = 0,
    FOCUS = 1,
};

/**
 * Enumeration for ADVANCED_PARK_ASSIST_LEFT_SOFT_BUTTON_STATUS
 */
enum class AdvancedParkAssistLeftSoftButtonStatus : int32_t {
    NOT_PRESSED = 0,
    PRESSED = 1,
};

/**
 * Enumeration for ADVANCED_PARK_ASSIST_PARALLEL_PARKING_SOFT_BUTTON_STATUS
 */
enum class AdvancedParkAssistParallelParkingSoftButtonStatus : int32_t {
    NOT_PRESSED = 0,
    PRESSED = 1,
};

/**
 * Enumeration for ADVANCED_PARK_ASSIST_RIGHT_SOFT_BUTTON_STATUS
 */
enum class AdvancedParkAssistRightSoftButtonStatus : int32_t {
    NOT_PRESSED = 0,
    PRESSED = 1,
};

/**
 * Enumeration for ADVANCED_PARK_ASSIST_SEARCHING_SOFT_BUTTON_STATUS
 */
enum class AdvancedParkAssistSearchingSoftButtonStatus : int32_t {
    NOT_PRESSED = 0,
    PRESSED = 1,
};

/**
 * Enumeration for ADVANCED_PARK_ASSIST_SOFT_BUTTON_SELECTED_STATE_RAW
 */
enum class AdvancedParkAssistSoftButtonSelectedStateRaw : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
    Unknown = 2,
    Failed = 3,
};

/**
 * Enumeration for ADVANCED_PARK_ASSIST_WARNING_INDICATIONS_ADVANCED_PARK_ASSIST_FOCUS_REQUEST
 */
enum class AdvancedParkAssistWarningIndicationsAdvancedParkAssistFocusRequest : int32_t {
    NO_REQUEST = 0,
    FOCUS_REQUEST_IPC = 1,
    FOCUS_REQUEST_CSM = 2,
};

/**
 * Enumeration for ADVANCED_PARK_ASSIST_WARNING_INDICATIONS_ADVANCED_PARK_ASSIST_WARNING_INDICATION_REQUEST
 */
enum class AdvancedParkAssistWarningIndicationsAdvancedParkAssistWarningIndicationRequest : int32_t {
    OFF = 0,
    SEARCHING_PARALLEL_RIGHT = 1,
    SEARCHING_PARALLEL_LEFT = 2,
    SEARCHING_CROSS_RIGHT = 3,
    SEARCHING_CROSS_LEFT = 4,
    SPOT_FOUND = 5,
    SPOT_FOUND_PARALLEL_LEFT = 6,
    SPOT_FOUND_CROSS_LEFT = 7,
    SPOT_FOUND_PARALLEL_RIGHT = 8,
    SPOT_FOUND_CROSS_RIGHT = 9,
    MOVE_AHEAD = 10,
    MOVE_AHEAD_PARALLEL_LEFT = 11,
    MOVE_AHEAD_CROSS_LEFT = 12,
    MOVE_AHEAD_PARALLEL_RIGHT = 13,
    MOVE_AHEAD_CROSS_RIGHT = 14,
    STOP_AND_R_PARALLEL_LEFT = 15,
    STOP_AND_R_CROSS_BACK_LEFT = 16,
    STOP_AND_R_CROSS_FRONT_LEFT = 17,
    STOP_AND_R_PARALLEL_RIGHT = 18,
    STOP_AND_R_CROSS_BACK_RIGHT = 19,
    STOP_AND_R_CROSS_FRONT_RIGHT = 20,
    SEARCH_SPEED_WARNING = 21,
    SEARCH_DEACTIVATED = 22,
    EXIT_PARK_TO_LEFT = 23,
    EXIT_PARK_TO_RIGHT = 24,
    SELECT_DRIVE_GEAR = 25,
    AUTO_STEERING_ACTIVE = 26,
    AUTO_PARKING_ACTIVE = 27,
    DRIVE_BACKWARD = 28,
    BACKWARD_MOVE = 29,
    DRIVE_FORWARD = 30,
    FORWARD_MOVE = 31,
    STOP = 32,
    SHIFTING = 33,
    POSITION_REACHED = 34,
    TAKE_CONTROL = 35,
    PARKING_COMPLETE = 36,
    EXIT_PARK_COMPLETE = 37,
    DEACTIVATED = 38,
    CANCELED_GENERAL = 39,
    CANCELED_MOVES = 40,
    CANCELED_SPEED = 41,
    CANCELED_INTERFERENCE = 42,
    CANCELED_EXIT_PARK = 43,
    STOPPING = 44,
    AUTO_PARKING_COMPLETE = 45,
    RELEASE_BRAKE = 46,
    IN_VEHICLE_OR_REMOTE = 47,
    REMOTE_STAY_ALERT = 48,
    REMOTE_CONNECTING = 49,
    REMOTE_CANNOT_CONNECT = 50,
    REMOTE_NO_DEVICE = 51,
    REMOTE_SHIFT_TO_PARK = 52,
    REMOTE_RETRY = 53,
    REMOTE_CANCELED_RANGE = 54,
    REMOTE_CANCELED_SUPERVISION = 55,
    REMOTE_CANCELED_CONNECTION = 56,
    REMOTE_PAUSED_RANGE = 57,
    REMOTE_PAUSED_SUPERVISION = 58,
    REMOTE_PAUSED_CONNECTION = 59,
};

/**
 * Enumeration for AIR_QUALITY_SENSOR_CUSTOMIZATION
 */
enum class AirQualitySensorCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    LOW_SENSITIVITY = 2,
    HI_SENSITIVITY = 3,
    RESERVED_1 = 4,
    RESERVED_2 = 5,
    RESERVED_3 = 6,
    RESERVED_4 = 7,
};

/**
 * Enumeration for AMPLIFIER_CALL_AUDIO_PLAYBACK_STATE_OF_HEALTH
 */
enum class AmplifierCallAudioPlaybackStateOfHealth : int32_t {
    Unknown = 0,
    Healthy = 1,
    Faulted = 2,
};

/**
 * Enumeration for AUTOMATIC_AIR_DISTRIBUTION_CUSTOMIZATION
 */
enum class AutomaticAirDistributionCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    DIFFUSE_AIRFLOW = 1,
    NORMAL = 2,
    DIRECT_AIRFLOW = 3,
    OSCILLATING_AIRFLOW = 4,
    RESERVED_1 = 5,
    RESERVED_2 = 6,
    RESERVED_3 = 7,
};

/**
 * Enumeration for AUTOMATIC_COOLED_SEAT_CUSTOMIZATION
 */
enum class AutomaticCooledSeatCustomization : int32_t {
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
 * Enumeration for AUTOMATIC_DEFOG_CUSTOMIZATION
 */
enum class AutomaticDefogCustomization : int32_t {
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
 * Enumeration for AUTOMATIC_DRIVE_LOCKING_CUSTOMIZATION
 */
enum class AutomaticDriveLockingCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for AUTOMATIC_FAN_CUSTOMIZATION
 */
enum class AutomaticFanCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    LOW = 1,
    NORMAL = 2,
    HIGH = 3,
    RESERVED_1 = 4,
    RESERVED_2 = 5,
    RESERVED_3 = 6,
    RESERVED_4 = 7,
};

/**
 * Enumeration for AUTOMATIC_HEATED_SEAT_CUSTOMIZATION
 */
enum class AutomaticHeatedSeatCustomization : int32_t {
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
 * Enumeration for AUTOMATIC_LANE_CHANGE_CUSTOMIZATION
 */
enum class AutomaticLaneChangeCustomization : int32_t {
    Setting_Unkown = 0,
    Off = 1,
    On = 2,
    LCOD = 3,
    LCOD_and_ALC = 4,
};

/**
 * Enumeration for AUTOMATIC_TRANSPARENT_HOOD_ACTIVATION_CUSTOMIZATION
 */
enum class AutomaticTransparentHoodActivationCustomization : int32_t {
    Setting_Unknown = 0,
    Active = 1,
    Inactive = 2,
};

/**
 * Enumeration for AUTOMATIC_UNLOCKING_CUSTOMIZATION
 */
enum class AutomaticUnlockingCustomization : int32_t {
    NO_ACTION = 0,
    OFF = 1,
    ALL_DOORS = 2,
    DRIVER_DOOR = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for AUTO_MEMORY_RECALL_CUSTOMIZATION
 */
enum class AutoMemoryRecallCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    AUTO_MEMORY_RECALL = 3,
    EASY_EXIT = 4,
    AUTO_MEMORY_AND_EASY_EXIT_RECALLS = 5,
    RESERVED_7 = 6,
};

/**
 * Enumeration for AUTO_MIRROR_FOLD_CUSTOMIZATION
 */
enum class AutoMirrorFoldCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    Off = 1,
    On = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for AUTO_REAR_WIPE_CUSTOMIZATION
 */
enum class AutoRearWipeCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for AUXILIARY_1_AMBIENT_ANIMATION_CONTROL_CUSTOMIZATION
 */
enum class Auxiliary1AmbientAnimationControlCustomization : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Animation_Type_1 = 2,
    Animation_Type_2 = 3,
    Animation_Type_3 = 4,
    Animation_Type_4 = 5,
    Animation_Type_5 = 6,
    Animation_Type_6 = 7,
    Animation_Type_7 = 8,
    Animation_Type_8 = 9,
    Animation_Type_9 = 10,
    Animation_Type_10 = 11,
    Animation_Type_11 = 12,
    Animation_Type_12 = 13,
    Animation_Type_13 = 14,
    Animation_Type_14 = 15,
};

/**
 * Enumeration for AUXILIARY_1_AMBIENT_BRIGHTNESS_CONTROL_CUSTOMIZATION
 */
enum class Auxiliary1AmbientBrightnessControlCustomization : int32_t {
    Setting_Unknown = 0,
    BrightnessLevel_1 = 1,
    BrightnessLevel_2 = 2,
    BrightnessLevel_3 = 3,
    BrightnessLevel_4 = 4,
    ReservedLevel_5 = 5,
    ReservedLevel_6 = 6,
    ReservedLevel_7 = 7,
};

/**
 * Enumeration for AUXILIARY_1_AMBIENT_COLOR_CONTROL_CUSTOMIZATION
 */
enum class Auxiliary1AmbientColorControlCustomization : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Color_Type_1 = 2,
    Color_Type_2 = 3,
    Color_Type_3 = 4,
    Color_Type_4 = 5,
    Color_Type_5 = 6,
    Color_Type_6 = 7,
    Color_Type_7 = 8,
    Color_Type_8 = 9,
    Color_Type_9 = 10,
    Color_Type_10 = 11,
    Color_Type_11 = 12,
    Color_Type_12 = 13,
    Color_Type_13 = 14,
    Color_Type_14 = 15,
    Color_Type_15 = 16,
    Color_Type_16 = 17,
    Color_Type_17 = 18,
    Color_Type_18 = 19,
    Color_Type_19 = 20,
    Color_Type_20 = 21,
    Color_Type_21 = 22,
    Color_Type_22 = 23,
    Color_Type_23 = 24,
    Color_Type_24 = 25,
    Color_Type_25 = 26,
    Color_Type_26 = 27,
    Color_Type_27 = 28,
    Color_Type_28 = 29,
    Color_Type_29 = 30,
    Color_Type_30 = 31,
    Color_Type_31 = 32,
    Color_Type_32 = 33,
    Color_Type_33 = 34,
    Color_Type_34 = 35,
    Color_Type_35 = 36,
    Color_Type_36 = 37,
    Color_Type_37 = 38,
    Color_Type_38 = 39,
    Color_Type_39 = 40,
    Color_Type_40 = 41,
    Color_Type_41 = 42,
    Color_Type_42 = 43,
    Color_Type_43 = 44,
    Color_Type_44 = 45,
    Color_Type_45 = 46,
    Color_Type_46 = 47,
    Color_Type_47 = 48,
    Color_Type_48 = 49,
    Color_Type_49 = 50,
    Color_Type_50 = 51,
    Color_Type_51 = 52,
    Color_Type_52 = 53,
    Color_Type_53 = 54,
    Color_Type_54 = 55,
    Color_Type_55 = 56,
    Color_Type_56 = 57,
    Color_Type_57 = 58,
    Color_Type_58 = 59,
    Color_Type_59 = 60,
    Color_Type_60 = 61,
    Color_Type_61 = 62,
    Color_Type_62 = 63,
    Color_Type_63 = 64,
    Color_Type_64 = 65,
    Color_Type_65 = 66,
    Color_Type_66 = 67,
    Color_Type_67 = 68,
    Color_Type_68 = 69,
    Color_Type_69 = 70,
    Color_Type_70 = 71,
    Color_Type_71 = 72,
    Color_Type_72 = 73,
    Color_Type_73 = 74,
    Color_Type_74 = 75,
    Color_Type_75 = 76,
    Color_Type_76 = 77,
    Color_Type_77 = 78,
    Color_Type_78 = 79,
    Color_Type_79 = 80,
    Color_Type_80 = 81,
    Color_Type_81 = 82,
    Color_Type_82 = 83,
    Color_Type_83 = 84,
    Color_Type_84 = 85,
    Color_Type_85 = 86,
    Color_Type_86 = 87,
    Color_Type_87 = 88,
    Color_Type_88 = 89,
    Color_Type_89 = 90,
    Color_Type_90 = 91,
    Color_Type_91 = 92,
    Color_Type_92 = 93,
    Color_Type_93 = 94,
    Color_Type_94 = 95,
    Color_Type_95 = 96,
    Color_Type_96 = 97,
    Color_Type_97 = 98,
    Color_Type_98 = 99,
    Color_Type_99 = 100,
    Color_Type_100 = 101,
    Color_Type_101 = 102,
    Color_Type_102 = 103,
    Color_Type_103 = 104,
    Color_Type_104 = 105,
    Color_Type_105 = 106,
    Color_Type_106 = 107,
    Color_Type_107 = 108,
    Color_Type_108 = 109,
    Color_Type_109 = 110,
    Color_Type_110 = 111,
    Color_Type_111 = 112,
    Color_Type_112 = 113,
    Color_Type_113 = 114,
    Color_Type_114 = 115,
    Color_Type_115 = 116,
    Color_Type_116 = 117,
    Color_Type_117 = 118,
    Color_Type_118 = 119,
    Color_Type_119 = 120,
    Color_Type_120 = 121,
    Color_Type_121 = 122,
    Color_Type_122 = 123,
    Color_Type_123 = 124,
    Color_Type_124 = 125,
    Color_Type_125 = 126,
    Color_Type_126 = 127,
};

/**
 * Enumeration for BATTERY_VOLTAGE_INDICATION_REQUEST
 */
enum class BatteryVoltageIndicationRequest : int32_t {
    Battery_Voltage_OK = 0,
    Battery_Voltage_Low = 1,
    Battery_Voltage_High = 2,
    Battery_Voltage_Very_Low = 3,
};

/**
 * Enumeration for BICYCLE_DETECTION_CUSTOMIZATION
 */
enum class BicycleDetectionCustomization : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Alert = 2,
};

/**
 * Enumeration for BRAKES_TEMPERATURE_STATUS_INDICATION_REQUEST
 */
enum class BrakesTemperatureStatusIndicationRequest : int32_t {
    No_Action = 0,
    Normal = 1,
    Warm = 2,
    Hot = 3,
    Overheated = 4,
};

/**
 * Enumeration for BRAKE_PAD_LIFE_STATUS_INFORMATION_BRAKE_PAD_LIFE_FRONT_DISTANCE_WARNING_INDICATION_REQUEST
 */
enum class BrakePadLifeStatusInformationBrakePadLifeFrontDistanceWarningIndicationRequest : int32_t {
    No_Action = 0,
    Low = 1,
    Display_Distance = 2,
};

/**
 * Enumeration for BRAKE_PAD_LIFE_STATUS_INFORMATION_BRAKE_PAD_LIFE_REAR_DISTANCE_WARNING_INDICATION_REQUEST
 */
enum class BrakePadLifeStatusInformationBrakePadLifeRearDistanceWarningIndicationRequest : int32_t {
    No_Action = 0,
    Low = 1,
    Display_Distance = 2,
};

/**
 * Enumeration for BRAKE_PAD_LIFE_STATUS_INFORMATION_BRAKE_PAD_LIFE_STATUS_INDICATION_REQUEST
 */
enum class BrakePadLifeStatusInformationBrakePadLifeStatusIndicationRequest : int32_t {
    No_Action = 0,
    Not_Present = 1,
    Ok = 2,
    Change_Soon = 3,
    Change_Now = 4,
    Disabled = 5,
    Service = 6,
};

/**
 * Enumeration for BRAKE_PAD_LIFE_SYSTEM_DRIVER_REQUEST
 */
enum class BrakePadLifeSystemDriverRequest : int32_t {
    No_Action = 0,
    Disable = 1,
    Enable = 2,
    Reset_Front = 3,
    Reset_Rear = 4,
};

/**
 * Enumeration for CARGO_BED_VIEW_AUTO_LIGHTING_CUSTOMIZATION
 */
enum class CargoBedViewAutoLightingCustomization : int32_t {
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
 * Enumeration for CHARGER_SYSTEM_AUDIBLE_INDICATION_CUSTOMIZATION_CURRENT_SETTING_VALUE
 */
enum class ChargerSystemAudibleIndicationCustomizationCurrentSettingValue : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for CHARGE_CORD_THEFT_ALERT_CUSTOMIZATION_CURRENT_SETTING_VALUE
 */
enum class ChargeCordTheftAlertCustomizationCurrentSettingValue : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for CHARGE_CORD_THEFT_ALERT_CUSTOMIZATION_SETTING_REQUEST
 */
enum class ChargeCordTheftAlertCustomizationSettingRequest : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for CHARGE_PORT_DOOR_INDICATION_REQUEST
 */
enum class ChargePortDoorIndicationRequest : int32_t {
    Inactive = 0,
    Open_Park = 1,
    Open_Moving = 2,
    Fault = 3,
};

/**
 * Enumeration for CHARGE_POWER_LOSS_ALERT_CUSTOMIZATION_CURRENT_SETTING_VALUE
 */
enum class ChargePowerLossAlertCustomizationCurrentSettingValue : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for CHARGE_POWER_LOSS_ALERT_CUSTOMIZATION_SETTING_REQUEST
 */
enum class ChargePowerLossAlertCustomizationSettingRequest : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for CHARGE_SYSTEM_AUDIBLE_INDICATION_CUSTOMIZATION_SETTING_REQUEST
 */
enum class ChargeSystemAudibleIndicationCustomizationSettingRequest : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for CHARGING_DATA_REQUEST
 */
enum class ChargingDataRequest : int32_t {
    No_Action = 0,
    Wakeup_Init_All = 1,
    Reinit_All = 2,
    Reinit_Partial = 3,
};

/**
 * Enumeration for COMPASS_DECLINATION_ZONE
 */
enum class CompassDeclinationZone : int32_t {
    Unknown = 0,
    Zone_1 = 1,
    Zone_2 = 2,
    Zone_3 = 3,
    Zone_4 = 4,
    Zone_5 = 5,
    Zone_6 = 6,
    Zone_7 = 7,
    Zone_8 = 8,
    Zone_9 = 9,
    zone_10 = 10,
    Zone_11 = 11,
    Zone_12 = 12,
    Zone_13 = 13,
    Zone_14 = 14,
    Zone_15 = 15,
};

/**
 * Enumeration for COMPASS_OCTANT_HEADING_DATA_SOURCE
 */
enum class CompassOctantHeadingDataSource : int32_t {
    Stored_Value = 0,
    Calculated_Value = 1,
};

/**
 * Enumeration for COMPASS_MODULE_FAULT_PRESENT
 */
enum class CompassModuleFaultPresent : int32_t {
    False = 0,
    True = 1,
};

/**
 * Enumeration for COMPASS_OCTANT_HEADING
 */
enum class CompassOctantHeading : int32_t {
    N = 0,
    NE = 1,
    E = 2,
    SE = 3,
    S = 4,
    SW = 5,
    W = 6,
    NW = 7,
};

/**
 * Enumeration for CURB_VIEW_FEATURE_ACTIVE_REQUEST
 */
enum class CurbViewFeatureActiveRequest : int32_t {
    On = 0,
    Off = 1,
    Failed = 2,
};

/**
 * Enumeration for CUSTOM_MODE_POWERTRAIN_CUSTOMIZATION_PENDING_SETTING_VALUE
 */
enum class CustomModePowertrainCustomizationPendingSettingValue : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for CUSTOM_MODE_ACTIVE_AERO_CUSTOMIZATION
 */
enum class CustomModeActiveAeroCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for CUSTOM_MODE_BRAKE_PEDAL_CUSTOMIZATION
 */
enum class CustomModeBrakePedalCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for CUSTOM_MODE_DRIVELINE_CUSTOMIZATION
 */
enum class CustomModeDrivelineCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for CUSTOM_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_CUSTOMIZATION
 */
enum class CustomModeElectricVehiclePedalMapCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for CUSTOM_MODE_ENERGY_REGENERATION_CUSTOMIZATION
 */
enum class CustomModeEnergyRegenerationCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for CUSTOM_MODE_POWERTRAIN_CUSTOMIZATION
 */
enum class CustomModePowertrainCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for CUSTOM_MODE_RIDE_HEIGHT_CUSTOMIZATION
 */
enum class CustomModeRideHeightCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for DRIVER_SEAT_BELT_REMINDER_INDICATION_REQUEST
 */
enum class DriverSeatBeltReminderIndicationRequest : int32_t {
    OFF = 0,
    ON = 1,
    Num0_5_Hz = 2,
    Num1_Hz = 3,
    Num2_Hz = 4,
    Num4_Hz = 5,
    RESERVED_1 = 6,
    RESERVED_2 = 7,
};

/**
 * Enumeration for CUSTOM_MODE_SOUND_CUSTOMIZATION
 */
enum class CustomModeSoundCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for CUSTOM_MODE_STEERING_CUSTOMIZATION
 */
enum class CustomModeSteeringCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for CUSTOM_MODE_SUSPENSION_CUSTOMIZATION
 */
enum class CustomModeSuspensionCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for CUSTOM_MODE_TRACTION_STABILITY_CUSTOMIZATION
 */
enum class CustomModeTractionStabilityCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for DAYTIME_TAIL_LIGHTS_CUSTOMIZATION
 */
enum class DaytimeTailLightsCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for DOOR_LOCK_LEFT_FRONT_STATUS
 */
enum class DoorLockLeftFrontStatus : int32_t {
    Unknown = 0,
    Locked = 1,
    Unlocked = 2,
};

/**
 * Enumeration for DOOR_LOCK_LEFT_REAR_STATUS
 */
enum class DoorLockLeftRearStatus : int32_t {
    Unknown = 0,
    Locked = 1,
    Unlocked = 2,
};

/**
 * Enumeration for DOOR_LOCK_RIGHT_FRONT_STATUS
 */
enum class DoorLockRightFrontStatus : int32_t {
    Unknown = 0,
    Locked = 1,
    Unlocked = 2,
};

/**
 * Enumeration for DOOR_LOCK_RIGHT_REAR_STATUS
 */
enum class DoorLockRightRearStatus : int32_t {
    Unknown = 0,
    Locked = 1,
    Unlocked = 2,
};

/**
 * Enumeration for DRIVER_ALERT_TYPE_CUSTOMIZATION
 */
enum class DriverAlertTypeCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    CHIME = 1,
    SEAT = 2,
};

/**
 * Enumeration for DRIVER_SEAT_BELT_STATUS
 */
enum class DriverSeatBeltStatus : int32_t {
    Unknown = 0,
    UnFastened = 1,
    Fastened = 2,
};

/**
 * Enumeration for DRIVER_SELECTED_CONFIRMATION
 */
enum class DriverSelectedConfirmation : int32_t {
    NO_ACTION = 0,
    SETTINGS_ACCEPTED = 1,
    SETTINGS_CANCELED = 2,
    MENU_ERROR_EVENT = 3,
};

/**
 * Enumeration for DRIVE_MODE_CONFIRMATION_DRIVER_RESPONSE
 */
enum class DriveModeConfirmationDriverResponse : int32_t {
    No_Indication = 0,
    Baja_ESC_Confirm = 1,
    Baja_ESC_Cancel = 2,
    Terrain_ESC_Confirm = 3,
    Terrain_ESC_Cancel = 4,
    Response_5 = 5,
    Response_6 = 6,
    Response_7 = 7,
    Response_8 = 8,
    Response_9 = 9,
    Response_10 = 10,
    Response_11 = 11,
    Response_12 = 12,
    Response_13 = 13,
    Response_14 = 14,
    Response_15 = 15,
};

/**
 * Enumeration for DRIVER_SEAT_MEMORY_IDENTIFIER
 */
enum class DriverSeatMemoryIdentifier : int32_t {
    Memory_1 = 0,
    Memory_2 = 1,
    Memory_3 = 2,
    Memory_4 = 3,
    Memory_5 = 4,
    Memory_6 = 5,
    Memory_7 = 6,
    Unknown = 7,
};

/**
 * Enumeration for DRIVER_SELECTED_TRAILER_PRESENT
 */
enum class DriverSelectedTrailerPresent : int32_t {
    Trailer_Present = 0,
    No_Trailer = 1,
};

/**
 * Enumeration for DRIVE_MODE_CONFIRMATION_INDICATION_REQUEST
 */
enum class DriveModeConfirmationIndicationRequest : int32_t {
    No_Indication = 0,
    Baja_ESC_Reduced = 1,
    Terrain_ESC_Off = 2,
    Max_Power = 3,
    Confirmation_4 = 4,
    Confirmation_5 = 5,
    Confirmation_6 = 6,
    Confirmation_7 = 7,
};

/**
 * Enumeration for FOUR_AND_ALL_WHEEL_DRIVE_INDICATION_REQUEST
 */
enum class FourAndAllWheelDriveIndicationRequest : int32_t {
    No_Indication = 0,
    Two_Wheel_Drive_High_Pending = 1,
    Two_Wheel_Drive_High_Active = 2,
    Four_Wheel_Drive_High_Auto_Pending = 3,
    Four_Wheel_Drive_High_Auto_Active = 4,
    Four_Wheel_Drive_High_Lock_Pending = 5,
    Four_Wheel_Drive_High_Lock_Active = 6,
    Four_Wheel_Drive_Low_Lock_Pending = 7,
    Four_Wheel_Drive_Low_Lock_Active = 8,
    Transfer_Case_Neutral_Pending = 9,
    Transfer_Case_Neutral_Active = 10,
    Position_Undetermined_Active = 11,
    AWD_Connected_Mode_Pending = 12,
    AWD_Connected_Mode_Active = 13,
    Front_Wheel_Drive_Mode_Pending = 14,
    Front_Wheel_Drive_Mode_Active = 15,
};

/**
 * Enumeration for DRIVING_MODE_VISUALIZATION_SCREEN_STATUS
 */
enum class DrivingModeVisualizationScreenStatus : int32_t {
    No_Action = 0,
    Custom = 1,
    Personal = 2,
    Sport = 3,
    Snow_Ice = 4,
    Weather = 5,
    Tour = 6,
    Track = 7,
    Offroad = 8,
    TowHaul = 9,
    PerformanceSportPlus = 10,
    Terrain = 11,
    Baja = 12,
};

/**
 * Enumeration for EASY_EXIT_CUSTOMIZATION
 */
enum class EasyExitCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for ELECTRIC_PARK_BRAKE_APPLICATION_STATUS
 */
enum class ElectricParkBrakeApplicationStatus : int32_t {
    Unknown = 0,
    Applied = 1,
    Released = 2,
    Dynamic_Apply = 3,
    In_Progress = 4,
};

/**
 * Enumeration for ELECTRIC_PARK_BRAKE_SYSTEM_STATUS_INDICATION_REQUEST
 */
enum class ElectricParkBrakeSystemStatusIndicationRequest : int32_t {
    Off = 0,
    On = 1,
    Num0_5_Hz = 2,
    Num1_Hz = 3,
    Num2_Hz = 4,
    Num4_Hz = 5,
};

/**
 * Enumeration for ELEVATED_IDLE_CUSTOMIZATION_CHANGE_SETTING_REQUEST
 */
enum class ElevatedIdleCustomizationChangeSettingRequest : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for ELEVATED_IDLE_CUSTOMIZATION_CURRENT_SETTING_VALUE
 */
enum class ElevatedIdleCustomizationCurrentSettingValue : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for ENERGY_ECONOMY_MEASUREMENT_UNIT
 */
enum class EnergyEconomyMeasurementUnit : int32_t {
    Distance_Per_Electrical_Energy = 0,
    Distance_Per_Volume_Equivalent = 1,
    Electrical_Energy_Per_Distance = 2,
    Volume_Equivalent_Per_Distance = 3,
    Electrical_Energy_Per_Distance_x_100 = 4,
    Volume_Equivalent_Per_Distance_x_100 = 5,
};

/**
 * Enumeration for ENGINE_AIR_FILTER_MONITOR_DRIVER_REQUEST
 */
enum class EngineAirFilterMonitorDriverRequest : int32_t {
    No_Action = 0,
    Enable = 1,
    Disable = 2,
    Reset = 3,
};

/**
 * Enumeration for ENGINE_AIR_FILTER_MONITOR_STATUS
 */
enum class EngineAirFilterMonitorStatus : int32_t {
    OK = 0,
    Replace_Air_Filter_Soon = 1,
    Replace_Air_Filter_Now = 2,
    Fault_Present = 3,
    Disabled = 4,
    No_Action = 5,
};

/**
 * Enumeration for ENGINE_SPEED_STATE
 */
enum class EngineSpeedState : int32_t {
    Normal_Operation = 0,
    Degraded_Operation = 1,
    Invalid = 2,
};

/**
 * Enumeration for EXIT_LIGHTING_CUSTOMIZATION
 */
enum class ExitLightingCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    THIRTY_SECONDS_DEFAULT = 2,
    ONE_MINUTE = 3,
    TWO_MINUTES = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for EXTENDED_HILL_START_ASSIST_CUSTOMIZATION
 */
enum class ExtendedHillStartAssistCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    EXTENDED_HOLD = 1,
    STANDARD_HOLD = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for FORWARD_IMPACT_MITIGATION_OPERATION_SELECT_CUSTOMIZATION
 */
enum class ForwardImpactMitigationOperationSelectCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ALERT = 2,
    ALERT_BRAKE = 3,
    ALERT_BRAKE_STEER = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for FORWARD_VEHICLE_IMMINENT_ALERT_INDICATION_REQUEST
 */
enum class ForwardVehicleImminentAlertIndicationRequest : int32_t {
    OFF = 0,
    ON = 1,
    Num0_5_Hz = 2,
    Num1_Hz = 3,
    Num2_Hz = 4,
    Num4_Hz = 5,
    RESERVED_1 = 6,
    RESERVED_2 = 7,
};

/**
 * Enumeration for FRONT_CENTER_STACK_LOW_VOLUME_MODULE_VIDEO_INPUT_LOCKED
 */
enum class FrontCenterStackLowVolumeModuleVideoInputLocked : int32_t {
    Not_Locked = 0,
    Locked = 1,
};

/**
 * Enumeration for FRONT_PASSENGER_SEAT_BELT_REMINDER_INDICATION_REQUEST
 */
enum class FrontPassengerSeatBeltReminderIndicationRequest : int32_t {
    OFF = 0,
    ON = 1,
    Num0_5_Hz = 2,
    Num1_Hz = 3,
    Num2_Hz = 4,
    Num4_Hz = 5,
    RESERVED_1 = 6,
    RESERVED_2 = 7,
};

/**
 * Enumeration for FRONT_CENTER_STACK_PRIMARY_VIDEO_INPUT_LOCKED
 */
enum class FrontCenterStackPrimaryVideoInputLocked : int32_t {
    Not_Locked = 0,
    Locked = 1,
};

/**
 * Enumeration for FRONT_CENTER_STACK_VIDEO_INPUT_SELECT
 */
enum class FrontCenterStackVideoInputSelect : int32_t {
    Primary_Video_Input = 0,
    Reserved = 1,
    LVM_Video_Input = 2,
};

/**
 * Enumeration for FRONT_PASSENGER_SEAT_BELT_REMINDER_OCCUPANCY_STATUS
 */
enum class FrontPassengerSeatBeltReminderOccupancyStatus : int32_t {
    UNKNOWN = 0,
    EMPTY = 1,
    OCCUPIED = 2,
};

/**
 * Enumeration for FRONT_SEAT_HEATED_VENTED_LEVELS_AVAILABLE_FRONT_SEAT_HEATED_BACK_LEVELS_AVAILABLE
 */
enum class FrontSeatHeatedVentedLevelsAvailableFrontSeatHeatedBackLevelsAvailable : int32_t {
    Not_Available = 0,
    Two_Levels_Available = 1,
    Three_Levels_Available = 2,
    Four_Levels_Available = 3,
};

/**
 * Enumeration for FRONT_PASSENGER_SEAT_BELT_STATUS
 */
enum class FrontPassengerSeatBeltStatus : int32_t {
    Unknown = 0,
    Unfastened = 1,
    Fastened = 2,
};

/**
 * Enumeration for FRONT_PCM_RESPONSE_TYPE_CUSTOMIZATION
 */
enum class FrontPcmResponseTypeCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ALERT = 2,
    ALERT_AND_BRAKE = 3,
    ALERT_AND_BRAKE_AND_STEER = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for FRONT_RIDE_HEIGHT_GPS_CUSTOMIZATION
 */
enum class FrontRideHeightGpsCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for GLARE_FREE_HIGH_BEAM_RESPONSE_TYPE_CUSTOMIZATION
 */
enum class GlareFreeHighBeamResponseTypeCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    AUTOMATIC_HIGH_BEAM = 1,
    GLARE_FREE_HIGH_BEAM = 2,
    RESERVED_3 = 3,
    Underscore_RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for GO_NOTIFIER_CUSTOMIZATION
 */
enum class GoNotifierCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for HANDS_FREE_REAR_CLOSURE_CUSTOMIZATION
 */
enum class HandsFreeRearClosureCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    OPEN_AND_CLOSE = 2,
    OPEN_ONLY = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for HEAD_AND_PARK_LAMPS_CURRENT_SELECTION_VALUE
 */
enum class HeadAndParkLampsCurrentSelectionValue : int32_t {
    Unknown = 0,
    Off = 1,
    Auto = 2,
    Parking = 3,
    On = 4,
};

/**
 * Enumeration for HIGH_VOLTAGE_BATTERY_CHARGE_COMPLETE_DAY_OF_WEEK
 */
enum class HighVoltageBatteryChargeCompleteDayOfWeek : int32_t {
    Unknown = 0,
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
};

/**
 * Enumeration for HIGH_VOLTAGE_BATTERY_CHARGE_COMPLETE_TIME_DISPLAY_FORMAT
 */
enum class HighVoltageBatteryChargeCompleteTimeDisplayFormat : int32_t {
    No_Action = 0,
    Display_Complete_Time = 1,
    Display_Minutes_to_Complete = 2,
};

/**
 * Enumeration for HIGH_VOLTAGE_BATTERY_CHARGE_COMPLETE_TIME_DISPLAY_POWER_LEVEL
 */
enum class HighVoltageBatteryChargeCompleteTimeDisplayPowerLevel : int32_t {
    Unknown = 0,
    Level_1 = 1,
    Level_2 = 2,
    DC = 3,
    Wireless = 4,
};

/**
 * Enumeration for HIGH_VOLTAGE_BATTERY_LIMITATION_DUE_TO_TEMPERATURE_INDICATION
 */
enum class HighVoltageBatteryLimitationDueToTemperatureIndication : int32_t {
    Normal = 0,
    Cold = 1,
    Hot = 2,
};

/**
 * Enumeration for HIGH_VOLTAGE_BATTERY_PRECONDITIONING_STATUS
 */
enum class HighVoltageBatteryPreconditioningStatus : int32_t {
    No_Action = 0,
    Inactive = 1,
    Active = 2,
    Performance_Limited = 3,
    Battery_At_Target = 4,
    Disabled = 5,
};

/**
 * Enumeration for HIGH_VOLTAGE_CHARGER_SYSTEM_STATUS
 */
enum class HighVoltageChargerSystemStatus : int32_t {
    Default = 0,
    Idle = 1,
    Initializing = 2,
    Active = 3,
    Complete = 4,
    Aborted = 5,
    Utility_Override_Active = 6,
    Utility_Override_Reduced_Power = 7,
    Pause_Due_to_Update = 8,
    Connection_Unpowered = 9,
    Unconnected = 10,
    Offboard_Energy_Transfer_Active = 11,
};

/**
 * Enumeration for HIGH_VOLTAGE_CHARGE_ABORT_REASON
 */
enum class HighVoltageChargeAbortReason : int32_t {
    No_Action = 0,
    Loss_of_AC = 1,
    Unplugged_Charging = 2,
    Unplugged_Delayed = 3,
    Charge_Failure = 4,
    Cordset_Fault = 5,
    Cordset_Delay = 6,
};

/**
 * Enumeration for HIGH_VOLTAGE_CHARGE_INHIBIT_REASON
 */
enum class HighVoltageChargeInhibitReason : int32_t {
    No_Action = 0,
    Cord_Not_Fully_Inserted = 1,
    Cord_Lock_Not_Engaged = 2,
    See_Charging_Station = 3,
};

/**
 * Enumeration for HIGH_VOLTAGE_CHARGE_LIMITED_REASON
 */
enum class HighVoltageChargeLimitedReason : int32_t {
    No_Action = 0,
    High_Voltage_System_Fault = 1,
    Low_Voltage_System_Fault = 2,
    Temperature_Out_of_Bounds = 3,
    State_of_Charge_Out_of_Bounds = 4,
    Temporary_Limiting_Condition = 5,
    Utility_Power_Override = 6,
};

/**
 * Enumeration for HIGH_VOLTAGE_DC_FAST_CHARGE_SOON_REQUEST
 */
enum class HighVoltageDcFastChargeSoonRequest : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for INDICATION_HEATER_SETTING
 */
enum class IndicationHeaterSetting : int32_t {
    Heater_Off = 0,
    Heater_On = 1,
};

/**
 * Enumeration for INDICATION_TEMPERATURE_UNITS
 */
enum class IndicationTemperatureUnits : int32_t {
    Celcius = 0,
    Fahrenheit = 1,
};

/**
 * Enumeration for INTERIOR_AMBIENT_ANIMATION_CONTROL_CUSTOMIZATION
 */
enum class InteriorAmbientAnimationControlCustomization : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Animation_Type_1 = 2,
    Animation_Type_2 = 3,
    Animation_Type_3 = 4,
    Animation_Type_4 = 5,
    Animation_Type_5 = 6,
    Animation_Type_6 = 7,
    Animation_Type_7 = 8,
    Animation_Type_8 = 9,
    Animation_Type_9 = 10,
    Animation_Type_10 = 11,
    Animation_Type_11 = 12,
    Animation_Type_12 = 13,
    Animation_Type_13 = 14,
    Animation_Type_14 = 15,
};

/**
 * Enumeration for INTERIOR_AMBIENT_BRIGHTNESS_CONTROL_CUSTOMIZATION
 */
enum class InteriorAmbientBrightnessControlCustomization : int32_t {
    Setting_Unknown = 0,
    BrightnessLevel_1 = 1,
    BrightnessLevel_2 = 2,
    BrightnessLevel_3 = 3,
    BrightnessLevel_4 = 4,
    ReservedLevel_5 = 5,
    ReservedLevel_6 = 6,
    ReservedLevel_7 = 7,
};

/**
 * Enumeration for INTERIOR_AMBIENT_COLOR_CONTROL_CUSTOMIZATION
 */
enum class InteriorAmbientColorControlCustomization : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Color_Type_1 = 2,
    Color_Type_2 = 3,
    Color_Type_3 = 4,
    Color_Type_4 = 5,
    Color_Type_5 = 6,
    Color_Type_6 = 7,
    Color_Type_7 = 8,
    Color_Type_8 = 9,
    Color_Type_9 = 10,
    Color_Type_10 = 11,
    Color_Type_11 = 12,
    Color_Type_12 = 13,
    Color_Type_13 = 14,
    Color_Type_14 = 15,
    Color_Type_15 = 16,
    Color_Type_16 = 17,
    Color_Type_17 = 18,
    Color_Type_18 = 19,
    Color_Type_19 = 20,
    Color_Type_20 = 21,
    Color_Type_21 = 22,
    Color_Type_22 = 23,
    Color_Type_23 = 24,
    Color_Type_24 = 25,
    Color_Type_25 = 26,
    Color_Type_26 = 27,
    Color_Type_27 = 28,
    Color_Type_28 = 29,
    Color_Type_29 = 30,
    Color_Type_30 = 31,
    Color_Type_31 = 32,
    Color_Type_32 = 33,
    Color_Type_33 = 34,
    Color_Type_34 = 35,
    Color_Type_35 = 36,
    Color_Type_36 = 37,
    Color_Type_37 = 38,
    Color_Type_38 = 39,
    Color_Type_39 = 40,
    Color_Type_40 = 41,
    Color_Type_41 = 42,
    Color_Type_42 = 43,
    Color_Type_43 = 44,
    Color_Type_44 = 45,
    Color_Type_45 = 46,
    Color_Type_46 = 47,
    Color_Type_47 = 48,
    Color_Type_48 = 49,
    Color_Type_49 = 50,
    Color_Type_50 = 51,
    Color_Type_51 = 52,
    Color_Type_52 = 53,
    Color_Type_53 = 54,
    Color_Type_54 = 55,
    Color_Type_55 = 56,
    Color_Type_56 = 57,
    Color_Type_57 = 58,
    Color_Type_58 = 59,
    Color_Type_59 = 60,
    Color_Type_60 = 61,
    Color_Type_61 = 62,
    Color_Type_62 = 63,
    Color_Type_63 = 64,
    Color_Type_64 = 65,
    Color_Type_65 = 66,
    Color_Type_66 = 67,
    Color_Type_67 = 68,
    Color_Type_68 = 69,
    Color_Type_69 = 70,
    Color_Type_70 = 71,
    Color_Type_71 = 72,
    Color_Type_72 = 73,
    Color_Type_73 = 74,
    Color_Type_74 = 75,
    Color_Type_75 = 76,
    Color_Type_76 = 77,
    Color_Type_77 = 78,
    Color_Type_78 = 79,
    Color_Type_79 = 80,
    Color_Type_80 = 81,
    Color_Type_81 = 82,
    Color_Type_82 = 83,
    Color_Type_83 = 84,
    Color_Type_84 = 85,
    Color_Type_85 = 86,
    Color_Type_86 = 87,
    Color_Type_87 = 88,
    Color_Type_88 = 89,
    Color_Type_89 = 90,
    Color_Type_90 = 91,
    Color_Type_91 = 92,
    Color_Type_92 = 93,
    Color_Type_93 = 94,
    Color_Type_94 = 95,
    Color_Type_95 = 96,
    Color_Type_96 = 97,
    Color_Type_97 = 98,
    Color_Type_98 = 99,
    Color_Type_99 = 100,
    Color_Type_100 = 101,
    Color_Type_101 = 102,
    Color_Type_102 = 103,
    Color_Type_103 = 104,
    Color_Type_104 = 105,
    Color_Type_105 = 106,
    Color_Type_106 = 107,
    Color_Type_107 = 108,
    Color_Type_108 = 109,
    Color_Type_109 = 110,
    Color_Type_110 = 111,
    Color_Type_111 = 112,
    Color_Type_112 = 113,
    Color_Type_113 = 114,
    Color_Type_114 = 115,
    Color_Type_115 = 116,
    Color_Type_116 = 117,
    Color_Type_117 = 118,
    Color_Type_118 = 119,
    Color_Type_119 = 120,
    Color_Type_120 = 121,
    Color_Type_121 = 122,
    Color_Type_122 = 123,
    Color_Type_123 = 124,
    Color_Type_124 = 125,
    Color_Type_125 = 126,
    Color_Type_126 = 127,
};

/**
 * Enumeration for INTERSECTION_COLLISION_MITIGATION_CUSTOMIZATION
 */
enum class IntersectionCollisionMitigationCustomization : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Alert = 2,
    Alert_Brake = 3,
    Alert_Brake_Steer = 4,
};

/**
 * Enumeration for INVISIBLE_TRAILER_AUX_1_CAMERA_CONNECTION_STATUS
 */
enum class InvisibleTrailerAux1CameraConnectionStatus : int32_t {
    Unknown = 0,
    Not_Connected = 1,
    Connected = 2,
};

/**
 * Enumeration for INVISIBLE_TRAILER_AUX_2_CAMERA_CONNECTION_STATUS
 */
enum class InvisibleTrailerAux2CameraConnectionStatus : int32_t {
    Unknown = 0,
    Not_Connected = 1,
    Connected = 2,
};

/**
 * Enumeration for INVISIBLE_TRAILER_OPERATIONAL_STATUS
 */
enum class InvisibleTrailerOperationalStatus : int32_t {
    Available = 0,
    Degraded = 1,
    Unavailable = 2,
    Unknown = 3,
};

/**
 * Enumeration for IONIZER_CONTROL_CUSTOMIZATION
 */
enum class IonizerControlCustomization : int32_t {
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
 * Enumeration for JACK_KNIFE_DETECTION_CUSTOMIZATION
 */
enum class JackKnifeDetectionCustomization : int32_t {
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
 * Enumeration for TRACTION_CONTROL_SYSTEM_CURRENT_STATE_REQUEST
 */
enum class TractionControlSystemCurrentStateRequest : int32_t {
    No_action = 0,
    OFF = 1,
    ON = 2,
};

/**
 * Enumeration for LANE_CENTERING_CONTROL_INDICATION_REQUEST
 */
enum class LaneCenteringControlIndicationRequest : int32_t {
    Indication_Off = 0,
    White_Indicator = 1,
    Green_Indicator = 2,
    Yellow_Indicator = 3,
    Red_Indicator = 4,
    Blue_Indicator = 5,
};

/**
 * Enumeration for LANE_CENTERING_CONVENIENCE_MESSAGE_INDICATION_REQUEST
 */
enum class LaneCenteringConvenienceMessageIndicationRequest : int32_t {
    No_Indication = 0,
    Behind_Slow_Vehicle = 1,
    Being_Passed_on_Left = 2,
    Being_Passed_on_Right = 3,
    Tailgater_Detected = 4,
    Left_Blind_Spot_Occupied = 5,
    Right_Blind_Spot_Occupied = 6,
    Heavy_Traffic = 7,
    Merging_Vehicle = 8,
    Slow_Moving_Traffic_in_Left_Lane = 9,
    Slow_Moving_Traffic_Ahead = 10,
    Slow_Moving_Traffic_in_Right_Lane = 11,
    Major_Road_Interchange_Ahead = 12,
    Road_Exit_Detected_Ahead = 13,
    Exit_Only_Lane_Ahead = 14,
    Lane_Ending_Ahead = 15,
    Road_Detour_Detected = 16,
    Take_Time_to_Look_at_Road = 17,
    Show_Fuel_Level = 18,
    Show_Fuel_Range_Normal = 19,
    Show_Fuel_Range_Low = 20,
    Take_Steering_Active_With_Muting = 21,
};

/**
 * Enumeration for LANE_CENTERING_SPEECH_PROMPT_REQUEST
 */
enum class LaneCenteringSpeechPromptRequest : int32_t {
    No_Prompt = 0,
    Take_Steering = 1,
    Take_Vehicle_Control = 2,
};

/**
 * Enumeration for LANE_CHANGE_ALERT_CUSTOMIZATION
 */
enum class LaneChangeAlertCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for LANE_DETECTION_WARNING_AND_CONTROL_VISUAL_ALERT_COMMAND_GENERIC
 */
enum class LaneDetectionWarningAndControlVisualAlertCommandGeneric : int32_t {
    OFF = 0,
    NOT_READY_TO_ASSIST = 1,
    READY_TO_ASSIST = 2,
    ALERT = 3,
    INTERVENTION = 4,
};

/**
 * Enumeration for LANGUAGE_SELECTION_EXTENDED
 */
enum class LanguageSelectionExtended : int32_t {
    NA_English = 0,
    German = 1,
    Italian = 2,
    Swedish = 3,
    French = 4,
    Spanish = 5,
    Dutch = 6,
    Portuguese = 7,
    Norwegian = 8,
    Finnish = 9,
    Danish = 10,
    Greek = 11,
    Japanese = 12,
    Arabic = 13,
    Standard_Chinese = 14,
    Polish = 15,
    Turkish = 16,
    Korean = 17,
    Traditional_Chinese = 18,
    UK_English = 19,
    Hungarian = 20,
    Czech = 21,
    Slovak = 22,
    Russian = 23,
    Brazilian_Portuguese = 24,
    Thai = 25,
    Bulgarian = 26,
    Romanian = 27,
    Slovenian = 28,
    Croatian = 29,
    Ukrainian = 30,
    NA_French = 31,
    NA_Spanish = 32,
    Cantonese = 33,
    Uzbek = 34,
    Serbian = 35,
    Lithuanian = 36,
    Estonian = 37,
    Latvian = 38,
    Macedonian = 39,
    AU_English = 40,
    ZA_English = 41,
    Hebrew = 42,
    LA_Spanish = 43,
};

/**
 * Enumeration for LAST_DOOR_CLOSED_LOCKING_CUSTOMIZATION
 */
enum class LastDoorClosedLockingCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for LEFT_RIGHT_HAND_TRAFFIC_CUSTOMIZATION
 */
enum class LeftRightHandTrafficCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    LEFT_HAND_DRIVE = 1,
    RIGHT_HAND_DRIVE = 2,
    AUTOMATIC_WITH_GPS = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for LEVELING_SYSTEM_ALIGNMENT_MODE_CUSTOMIZATION
 */
enum class LevelingSystemAlignmentModeCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for LEVELING_SYSTEM_ENTRY_EGRESS_MODE_CUSTOMIZATION
 */
enum class LevelingSystemEntryEgressModeCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for LEVELING_SYSTEM_SERVICE_MODE_CUSTOMIZATION
 */
enum class LevelingSystemServiceModeCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for LOCATION_BASED_CHARGING_CUSTOMIZATION_CURRENT_SETTING_VALUE
 */
enum class LocationBasedChargingCustomizationCurrentSettingValue : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for LOCATION_BASED_CHARGING_CUSTOMIZATION_SETTING_REQUEST
 */
enum class LocationBasedChargingCustomizationSettingRequest : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for LOCATION_BASED_CHARGING_POSITION_MODIFICATION_REQUEST
 */
enum class LocationBasedChargingPositionModificationRequest : int32_t {
    No_Action = 0,
    Store_Position_1 = 1,
    Store_Position_2 = 2,
    Store_Position_3 = 3,
    Store_Position_4 = 4,
};

/**
 * Enumeration for LOW_VOLUME_MODULE_AUDIO_VIDEO_REQUEST_APPLICATION_STATE
 */
enum class LowVolumeModuleAudioVideoRequestApplicationState : int32_t {
    NO_ACTION = 0,
    LVM_NAV = 1,
    LVM_DMB = 2,
    LVM_PERFORMANCE_COMPUTER = 3,
    LVM_COMPLEX_MODE = 4,
};

/**
 * Enumeration for OFF_ROAD_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_VISUALIZATION_DISPLAY_VALUE
 */
enum class OffRoadModeElectricVehiclePedalMapVisualizationDisplayValue : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for ONE_PEDAL_DRIVING_CURRENT_SELECTION_VALUE
 */
enum class OnePedalDrivingCurrentSelectionValue : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

/**
 * Enumeration for ONE_PEDAL_DRIVING_CUSTOMIZATION
 */
enum class OnePedalDrivingCustomization : int32_t {
    Setting_Unknown = 0,
    Level_1 = 1,
    Level_2 = 2,
    Level_3 = 3,
    Level_4 = 4,
};

/**
 * Enumeration for OPEN_DOOR_ANTI_LOCK_OUT_CUSTOMIZATION
 */
enum class OpenDoorAntiLockOutCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for OVERRIDE_NEXT_PLANNED_CHARGE_DEPARTURE_DAY_OF_WEEK_REQUEST
 */
enum class OverrideNextPlannedChargeDepartureDayOfWeekRequest : int32_t {
    Unknown = 0,
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
};

/**
 * Enumeration for OVERRIDE_NEXT_PLANNED_CHARGE_REQUEST
 */
enum class OverrideNextPlannedChargeRequest : int32_t {
    No_Action = 0,
    Charge_Now = 1,
    Charge_Later = 2,
};

/**
 * Enumeration for PARK_ASSIST_ON_OFF_CUSTOMIZATION
 */
enum class ParkAssistOnOffCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ALERT = 2,
    ALERT_BRAKE = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for PARK_ASSIST_SOFT_BUTTON_SELECTED_STATE_RAW
 */
enum class ParkAssistSoftButtonSelectedStateRaw : int32_t {
    Not_Pressed = 0,
    Pressed = 1,
    Unknown = 2,
    Failed = 3,
};

/**
 * Enumeration for PARK_ASSIST_TRAILER_HITCH_PRESENT_CUSTOMIZATION
 */
enum class ParkAssistTrailerHitchPresentCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF_NOT_ATTACHED = 1,
    ON_ATTACHED = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for PASSIVE_UNLOCKING_CUSTOMIZATION
 */
enum class PassiveUnlockingCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    DRIVER_DOOR = 1,
    ALL_DOORS = 2,
    OFF = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for PEDESTRIAN_FRIENDLY_ALERT_SOUND_SELECTION_CUSTOMIZATION
 */
enum class PedestrianFriendlyAlertSoundSelectionCustomization : int32_t {
    Setting_Unknown = 0,
    Pedestrian_Alert_Sound_1 = 1,
    Pedestrian_Alert_Sound_2 = 2,
    Pedestrian_Alert_Sound_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for PERFORMANCE_MODE_MAIN_MENU_TYPE
 */
enum class PerformanceModeMainMenuType : int32_t {
    No_Action = 0,
    Main_Menu_Type_1 = 1,
    Main_Menu_Type_2 = 2,
    Main_Menu_Type_3 = 3,
    Main_Menu_Type_4 = 4,
    Main_Menu_Type_5 = 5,
    Main_Menu_Type_6 = 6,
    Main_Menu_Type_7 = 7,
};

/**
 * Enumeration for PERSONAL_MODE_ACTIVE_AERO_CUSTOMIZATION
 */
enum class PersonalModeActiveAeroCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

/**
 * Enumeration for PERSONAL_MODE_BRAKE_PEDAL_CUSTOMIZATION
 */
enum class PersonalModeBrakePedalCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

/**
 * Enumeration for PERSONAL_MODE_DRIVELINE_CUSTOMIZATION
 */
enum class PersonalModeDrivelineCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

/**
 * Enumeration for PERSONAL_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_CUSTOMIZATION
 */
enum class PersonalModeElectricVehiclePedalMapCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for PERSONAL_MODE_ENERGY_REGENERATION_CUSTOMIZATION
 */
enum class PersonalModeEnergyRegenerationCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for PERSONAL_MODE_RIDE_HEIGHT_CUSTOMIZATION
 */
enum class PersonalModeRideHeightCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

/**
 * Enumeration for PERSONAL_MODE_SOUND_CUSTOMIZATION
 */
enum class PersonalModeSoundCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

/**
 * Enumeration for PERSONAL_MODE_STEERING_CUSTOMIZATION
 */
enum class PersonalModeSteeringCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

/**
 * Enumeration for PERSONAL_MODE_SUSPENSION_CUSTOMIZATION
 */
enum class PersonalModeSuspensionCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    PERSONAL_MODE_1 = 1,
    PERSONAL_MODE_2 = 2,
    PERSONAL_MODE_3 = 3,
    PERSONAL_MODE_4 = 4,
    PERSONAL_MODE_5 = 5,
    PERSONAL_MODE_6 = 6,
    PERSONAL_MODE_7 = 7,
};

/**
 * Enumeration for PHONE_LEFT_IN_VEHICLE_CUSTOMIZATION
 */
enum class PhoneLeftInVehicleCustomization : int32_t {
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
 * Enumeration for PLUG_AND_CHARGE_ENABLED_STATUS
 */
enum class PlugAndChargeEnabledStatus : int32_t {
    Unknown = 0,
    Enabled = 1,
    Disabled = 2,
};

/**
 * Enumeration for PLUG_AND_CHARGE_ENABLE_REQUEST
 */
enum class PlugAndChargeEnableRequest : int32_t {
    Unknown = 0,
    No_Action = 1,
    Enable = 2,
    Disable = 3,
};

/**
 * Enumeration for PLUG_AND_CHARGE_STATUS_DISPLAY
 */
enum class PlugAndChargeStatusDisplay : int32_t {
    No_Action = 0,
    No_Errors = 1,
    Unplug_And_Replug = 2,
    Two_Factor_Authentication_Failure = 3,
    Try_Different_Charging_Station = 4,
    Install_Contract_or_Private_Operator_Certificate = 5,
    Contract_Certificate_Invalid = 6,
    Service_Vehicle = 7,
    Certificate_Revoked = 8,
};

/**
 * Enumeration for POLLUTION_CONTROL_CUSTOMIZATION
 */
enum class PollutionControlCustomization : int32_t {
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
 * Enumeration for POWER_FRONT_STORAGE_COMPARTMENT_CLOSURE_CUSTOMIZATION
 */
enum class PowerFrontStorageCompartmentClosureCustomization : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
    On_Custom_Height = 3,
};

/**
 * Enumeration for POWER_REAR_CLOSURE_CUSTOMIZATION
 */
enum class PowerRearClosureCustomization : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
    On_Custom_Height = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for POWER_TAKE_OFF_ENGINE_RUN_TIMER_CUSTOMIZATION
 */
enum class PowerTakeOffEngineRunTimerCustomization : int32_t {
    Setting_Unknown = 0,
    Min_10 = 1,
    Min_30 = 2,
    Min_90 = 3,
    Min_120 = 4,
    Min_150 = 5,
    Min_180 = 6,
    Min_210 = 7,
    Min_240 = 8,
    Min_270 = 9,
    Min_200 = 10,
    Min_330 = 11,
    Min_360 = 12,
    Min_390 = 13,
    Min_420 = 14,
    Min_450 = 15,
};

/**
 * Enumeration for POWER_TAKE_OFF_ENGINE_SPEED_TYPE_CUSTOMIZATION
 */
enum class PowerTakeOffEngineSpeedTypeCustomization : int32_t {
    Setting_Unknown = 0,
    Preset = 1,
    Variable = 2,
};

/**
 * Enumeration for POWER_TAKE_OFF_MODE_CUSTOMIZATION
 */
enum class PowerTakeOffModeCustomization : int32_t {
    Setting_Unknown = 0,
    Standard = 1,
    Remote = 2,
};

/**
 * Enumeration for POWER_TAKE_OFF_SET_1_SPEED_CUSTOMIZATION
 */
enum class PowerTakeOffSet1SpeedCustomization : int32_t {
    Setting_Unknown = 0,
    RPM_1100 = 1,
    RPM_1200 = 2,
    RPM_1300 = 3,
    RPM_1400 = 4,
    RPM_1500 = 5,
    RPM_1600 = 6,
    RPM_1700 = 7,
    RPM_1800 = 8,
    RPM_1900 = 9,
    RPM_2000 = 10,
    RPM_2100 = 11,
    RPM_2200 = 12,
    RPM_2300 = 13,
    RPM_2400 = 14,
    RPM_2500 = 15,
};

/**
 * Enumeration for POWER_TAKE_OFF_SET_2_SPEED_CUSTOMIZATION
 */
enum class PowerTakeOffSet2SpeedCustomization : int32_t {
    Setting_Unknown = 0,
    RPM_1700 = 1,
    RPM_1800 = 2,
    RPM_1900 = 3,
    RPM_2000 = 4,
    RPM_2100 = 5,
    RPM_2200 = 6,
    RPM_2300 = 7,
    RPM_2400 = 8,
    RPM_2500 = 9,
    RPM_2600 = 10,
    RPM_2700 = 11,
    RPM_2800 = 12,
    RPM_2900 = 13,
    RPM_3000 = 14,
    RPM_3100 = 15,
};

/**
 * Enumeration for POWER_TAKE_OFF_STANDBY_SPEED_CUSTOMIZATION
 */
enum class PowerTakeOffStandbySpeedCustomization : int32_t {
    Setting_Unknown = 0,
    RPM_900 = 1,
    RPM_1000 = 2,
    RPM_1100 = 3,
    RPM_1200 = 4,
    RPM_1300 = 5,
    RPM_1400 = 6,
    RPM_1500 = 7,
};

/**
 * Enumeration for POWER_TAKE_OFF_TAP_STEP_SPEED_CUSTOMIZATION
 */
enum class PowerTakeOffTapStepSpeedCustomization : int32_t {
    Setting_Unknown = 0,
    RPM_5 = 1,
    RPM_10 = 2,
    RPM_25 = 3,
    RPM_50 = 4,
    RPM_100 = 5,
    RPM_250 = 6,
    RPM_500 = 7,
};

/**
 * Enumeration for RAIN_SENSE_CUSTOMIZATION
 */
enum class RainSenseCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for REAR_CROSS_TRAFFIC_ALERT_CUSTOMIZATION
 */
enum class RearCrossTrafficAlertCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ALERT = 2,
    ALERT_and_BRAKE = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for REAR_DEFOG_STARTUP_CUSTOMIZATION
 */
enum class RearDefogStartupCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    MANUAL = 1,
    AUTOMATIC = 2,
    RESERVED_1 = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
};

/**
 * Enumeration for REAR_PCM_RESPONSE_TYPE_CUSTOMIZATION
 */
enum class RearPcmResponseTypeCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ALERT = 2,
    ALERT_AND_BRAKE = 3,
    RESERVED_4_RESERVED_5 = 4,
    RESERVED_6 = 5,
    RESERVED_7 = 6,
};

/**
 * Enumeration for REAR_SEAT_HEATED_BACK_LEVELS_AVAILABLE
 */
enum class RearSeatHeatedBackLevelsAvailable : int32_t {
    Not_Available = 0,
    Two_Levels_Available = 1,
    Three_Levels_Available = 2,
    Four_Levels_Available = 3,
};

/**
 * Enumeration for REAR_SEAT_REMINDER_ENABLE_DISABLE_CUSTOMIZATION
 */
enum class RearSeatReminderEnableDisableCustomization : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    On = 2,
    Underscore_Reserved_3 = 3,
    Reserved_4 = 4,
    Reserved_5 = 5,
    Reserved_6 = 6,
    Reserved_7_ = 7,
};

/**
 * Enumeration for REAR_STEERING_MODE_DISPLAY_INDICATION_REQUEST
 */
enum class RearSteeringModeDisplayIndicationRequest : int32_t {
    None = 0,
    Automatic = 1,
    Fixed = 2,
    Crab = 3,
    Crab_Pending = 4,
    Crab_Ready = 5,
};

/**
 * Enumeration for REAR_VIEW_PARK_ASSIST_SYMBOL_CUSTOMIZATION
 */
enum class RearViewParkAssistSymbolCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for REAR_ZONE_STARTUP_CUSTOMIZATION
 */
enum class RearZoneStartupCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    REAR_OFF = 1,
    REAR_MIMIC_FRONT = 2,
    REAR_LAST_KNOWN = 3,
    RESERVED_1 = 4,
    RESERVED_2 = 5,
    RESERVED_3 = 6,
    RESERVED_4 = 7,
};

/**
 * Enumeration for RELOCK_REMOTE_UNLOCKED_DOOR_CUSTOMIZATION
 */
enum class RelockRemoteUnlockedDoorCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for REMOTE_IN_VEHICLE_REMINDER_CUSTOMIZATION
 */
enum class RemoteInVehicleReminderCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for REMOTE_LEFT_VEHICLE_REMINDER_CUSTOMIZATION
 */
enum class RemoteLeftVehicleReminderCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for REMOTE_LOCKING_FEEDBACK_CUSTOMIZATION
 */
enum class RemoteLockingFeedbackCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    HORN_AND_LIGHTS_OFF = 1,
    HORN_AND_LIGHTS_ON = 2,
    FLASH_LIGHTS_ONLY = 3,
    HORN_CHIRP_ONLY = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for REMOTE_START_COOLED_SEAT_CUSTOMIZATION
 */
enum class RemoteStartCooledSeatCustomization : int32_t {
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
 * Enumeration for REMOTE_START_HEATED_SEAT_CUSTOMIZATION
 */
enum class RemoteStartHeatedSeatCustomization : int32_t {
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
 * Enumeration for REMOTE_SUNROOF_OPERATION_CUSTOMIZATION
 */
enum class RemoteSunroofOperationCustomization : int32_t {
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
 * Enumeration for REMOTE_UNLOCK_LIGHTING_FEEDBACK_CUSTOMIZATION
 */
enum class RemoteUnlockLightingFeedbackCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    FLASH_LIGHTS_ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for REMOTE_WINDOW_OPERATION_CUSTOMIZATION
 */
enum class RemoteWindowOperationCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for REVERSE_TILT_MIRROR_CUSTOMIZATION
 */
enum class ReverseTiltMirrorCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    DRIVER = 2,
    PASSENGER = 3,
    DRIVER_AND_PASSENGER = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for RIDE_HEIGHT_ACTIVATION_INDICATION_REQUEST
 */
enum class RideHeightActivationIndicationRequest : int32_t {
    No_Indication = 0,
    Raising = 1,
    Lowering = 2,
    Location_Raising = 3,
    Location_Lowering = 4,
    Raising_Without_Remember = 5,
};

/**
 * Enumeration for RIDE_HEIGHT_MOVEMENT_INDICATION_REQUEST
 */
enum class RideHeightMovementIndicationRequest : int32_t {
    No_Movement = 0,
    Raising_to_2 = 1,
    Raising = 2,
    Lowering = 3,
    Cargo_Loading = 4,
};

/**
 * Enumeration for RIDE_HEIGHT_STATE_INDICATION_REQUEST
 */
enum class RideHeightStateIndicationRequest : int32_t {
    Nominal_Trim = 0,
    Raised_2 = 1,
    Raised_1 = 2,
    Lowered_1 = 3,
    Lowered_2 = 4,
    Cargo_Trailer = 5,
    Entry_Exit = 6,
    Alignment_Mode = 7,
    Service_Mode = 8,
    Entry_Exit_Pending = 9,
    Safety_Lowered = 10,
};

/**
 * Enumeration for RIDE_HEIGHT_WARNING_1_INDICATION_REQUEST
 */
enum class RideHeightWarning1IndicationRequest : int32_t {
    No_indication = 0,
    Front_Lift_Inhibited = 1,
    Leveling_Inhibited = 2,
    Front_Lift_Unavailable = 3,
    Leveling_Unavailable = 4,
    Front_Lift_Faulted = 5,
    Leveling_Faulted = 6,
};

/**
 * Enumeration for RIDE_HEIGHT_WARNING_2_INDICATION_REQUEST
 */
enum class RideHeightWarning2IndicationRequest : int32_t {
    No_Indication = 0,
    Auto_Lowering = 1,
    Suspension_Low_Wait = 2,
    Suspension_Low_Caution = 3,
    Suspension_High = 4,
    Safety_Lowered = 5,
    Raised_2_Inhibit_4WD = 6,
    Raised_2_Inhibit_Speed = 7,
    Raised_Inhibit_Speed = 8,
    Cargo_Inhibit_Speed = 9,
    Entry_Exit_Pending_Speed = 10,
    Raised_2_Inhibit_Crawl = 11,
    Object_Detected = 12,
    SuspensionOverloaded = 13,
    Lowered_Inhibit_DMC = 14,
};

/**
 * Enumeration for RUNNING_BOARDS_AUTOMATIC_DEPLOYMENT_CUSTOMIZATION
 */
enum class RunningBoardsAutomaticDeploymentCustomization : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Door = 2,
    Door_Park = 3,
    Reserved_5 = 4,
    Reserved_6 = 5,
    Reserved_7 = 6,
};

/**
 * Enumeration for RUNNING_BOARDS_MANUAL_DEPLOYMENT_CUSTOMIZATION
 */
enum class RunningBoardsManualDeploymentCustomization : int32_t {
    Setting_Unknown = 0,
    Off = 1,
    Extend_to_Door = 2,
    Extend_to_Bed = 3,
    Reserved_4 = 4,
    Reserved_5 = 5,
    Reserved_6 = 6,
    Reserved_7 = 7,
};

/**
 * Enumeration for SEAT_BELT_SHIFT_INTERLOCK_CUSTOMIZATION
 */
enum class SeatBeltShiftInterlockCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for SEAT_BELT_TIGHTENING_CUSTOMIZATION
 */
enum class SeatBeltTighteningCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for SELECTIVE_UNLOCKING_CUSTOMIZATION
 */
enum class SelectiveUnlockingCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    DRIVER_DOOR_ONLY = 1,
    ALL_DOORS = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for SIDE_BLIND_ZONE_ALERT_CUSTOMIZATION
 */
enum class SideBlindZoneAlertCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for SPORT_MODE_ACTIVE_AERODYNAMICS_VISUALIZATION_DISPLAY_VALUE
 */
enum class SportModeActiveAerodynamicsVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for SPORT_MODE_BRAKE_PEDAL_VISUALIZATION_DISPLAY_VALUE
 */
enum class SportModeBrakePedalVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for SPORT_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_VISUALIZATION_DISPLAY_VALUE
 */
enum class SportModeElectricVehiclePedalMapVisualizationDisplayValue : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for SPORT_MODE_ESC_VISUALIZATION_DISPLAY_VALUE
 */
enum class SportModeEscVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for SPORT_MODE_POWERTRAIN_VISUALIZATION_DISPLAY_VALUE
 */
enum class SportModePowertrainVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for SPORT_MODE_SOUND_VISUALIZATION_DISPLAY_VALUE
 */
enum class SportModeSoundVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for SPORT_MODE_STEERING_VISUALIZATION_DISPLAY_VALUE
 */
enum class SportModeSteeringVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for SPORT_MODE_SUSPENSION_VISUALIZATION_DISPLAY_VALUE
 */
enum class SportModeSuspensionVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for STEERING_WHEEL_ANGLE_CALIBRATION_STATUS
 */
enum class SteeringWheelAngleCalibrationStatus : int32_t {
    Unknown = 0,
    Estimated = 1,
    Calibrated = 2,
};

/**
 * Enumeration for SURROUND_VIEW_LIGHTING_CUSTOMIZATION
 */
enum class SurroundViewLightingCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for TEEN_DRIVER_OVERSPEED_WARNING_CUSTOMIZATION
 */
enum class TeenDriverOverspeedWarningCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for TEEN_DRIVER_RESPONSE
 */
enum class TeenDriverResponse : int32_t {
    No_Action = 0,
    Teen_PIN_Verified = 1,
    Teen_PIN_Updated = 2,
    Teen_PIN_Mismatch = 3,
    Teen_Key_Set_Complete = 4,
    Teen_Key_Clear_Complete = 5,
    Key_Not_Present = 6,
    Key_Detected_As_Teen_Key = 7,
    Key_Detected_As_NOT_Teen_Key = 8,
    PIN_Locked = 9,
};

/**
 * Enumeration for TEEN_DRIVER_SEAT_BELT_SHIFT_INTERLOCK_CUSTOMIZATION
 */
enum class TeenDriverSeatBeltShiftInterlockCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for TEEN_DRIVER_SPEED_LIMIT_CUSTOMIZATION
 */
enum class TeenDriverSpeedLimitCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for TELEMATICS_AUDIO_REQUEST_AUDIO_CONNECTION_REQUEST
 */
enum class TelematicsAudioRequestAudioConnectionRequest : int32_t {
    NO_ACTION = 0,
    MIX_PROMPT = 1,
    MUTEX_PROMPT = 2,
    RING_TONE = 3,
    PHONE = 4,
    EMERGENCY_PHONE = 5,
    RESERVED_1 = 6,
    RESERVED_2 = 7,
    RESERVED_3 = 8,
    RESERVED_4 = 9,
    RESERVED_5 = 10,
    RESERVED_6 = 11,
    RESERVED_7 = 12,
    RESERVED_8 = 13,
    RESERVED_9 = 14,
    RESERVED_10 = 15,
};

/**
 * Enumeration for TELEMATICS_AUDIO_REQUEST_AUDIO_SOURCE_STATUS
 */
enum class TelematicsAudioRequestAudioSourceStatus : int32_t {
    NO_ACTION = 0,
    AUDIO_READY = 1,
    AUDIO_PLAYING = 2,
    AUDIO_REQUEST = 3,
    AUDIO_DISCONNECT_RESERVED_1 = 4,
    RESERVED_2 = 5,
    RESERVED_3 = 6,
    RESERVED_4 = 7,
    RESERVED_5 = 8,
    RESERVED_6 = 9,
    RESERVED_7 = 10,
    RESERVED_8 = 11,
    RESERVED_9 = 12,
    RESERVED_10 = 13,
    RESERVED_11 = 14,
};

/**
 * Enumeration for TERRAIN_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_VISUALIZATION_DISPLAY_VALUE
 */
enum class TerrainModeElectricVehiclePedalMapVisualizationDisplayValue : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for TIME_DISPLAY_FORMAT
 */
enum class TimeDisplayFormat : int32_t {
    Num12_Hour_Mode = 0,
    Num24_Hour_Mode = 1,
};

/**
 * Enumeration for TIME_OF_DAY_CHARGING_NEXT_PLANNED_CHARGE
 */
enum class TimeOfDayChargingNextPlannedCharge : int32_t {
    No_Action = 0,
    Charge_Now = 1,
    Charge_Later = 2,
    Invalid = 3,
};

/**
 * Enumeration for TIME_OF_DAY_CHARGING_NEXT_PLANNED_DEPARTURE_DAY_OF_WEEK
 */
enum class TimeOfDayChargingNextPlannedDepartureDayOfWeek : int32_t {
    Unknown = 0,
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
};

/**
 * Enumeration for TIME_OF_DAY_CHARGING_NEXT_PLANNED_PORTABLE_CHARGE_CORD_LIMIT_CUSTOMIZATION_CURRENT_SETTING_VALUE
 */
enum class TimeOfDayChargingNextPlannedPortableChargeCordLimitCustomizationCurrentSettingValue : int32_t {
    No_Action = 0,
    Reduced = 1,
    Maximum = 2,
};

/**
 * Enumeration for TIME_OF_DAY_CHARGING_SETTING_REQUEST_PORTABLE_CHARGE_CORD_LIMIT_CUSTOMIZATION_SETTING_REQUEST
 */
enum class TimeOfDayChargingSettingRequestPortableChargeCordLimitCustomizationSettingRequest : int32_t {
    No_Action = 0,
    Reduced = 1,
    Maximum = 2,
};

/**
 * Enumeration for TIRE_LEAK_DETECTION_ENABLE_STATUS
 */
enum class TireLeakDetectionEnableStatus : int32_t {
    Unknown = 0,
    Enabled = 1,
    Disabled = 2,
};

/**
 * Enumeration for TIRE_LEAK_DETECTION_USER_REQUEST
 */
enum class TireLeakDetectionUserRequest : int32_t {
    No_Action = 0,
    Enable = 1,
    Disable = 2,
    Reset = 3,
};

/**
 * Enumeration for TIRE_PRESSURE_MONITORING_TIRE_LOADING_STATUS
 */
enum class TirePressureMonitoringTireLoadingStatus : int32_t {
    Unkown = 0,
    Light_Load = 1,
    Best_Economy_Load = 2,
    Max_Load = 3,
};

/**
 * Enumeration for TIRE_TREAD_TEMPERATURE_STATUS
 */
enum class TireTreadTemperatureStatus : int32_t {
    Unknown = 0,
    Cold = 1,
    Cool = 2,
    Normal = 3,
    Warm = 4,
    Hot = 5,
};

/**
 * Enumeration for TOUR_MODE_ACTIVE_AERODYNAMICS_VISUALIZATION_DISPLAY_VALUE
 */
enum class TourModeActiveAerodynamicsVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for TOUR_MODE_BRAKE_PEDAL_VISUALIZATION_DISPLAY_VALUE
 */
enum class TourModeBrakePedalVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for TOUR_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_VISUALIZATION_DISPLAY_VALUE
 */
enum class TourModeElectricVehiclePedalMapVisualizationDisplayValue : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for TOUR_MODE_ESC_VISUALIZATION_DISPLAY_VALUE
 */
enum class TourModeEscVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for TOUR_MODE_POWERTRAIN_VISUALIZATION_DISPLAY_VALUE
 */
enum class TourModePowertrainVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for TOUR_MODE_SOUND_VISUALIZATION_DISPLAY_VALUE
 */
enum class TourModeSoundVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for TOUR_MODE_STEERING_VISUALIZATION_DISPLAY_VALUE
 */
enum class TourModeSteeringVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for TOUR_MODE_SUSPENSION_VISUALIZATION_DISPLAY_VALUE
 */
enum class TourModeSuspensionVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for TPMS_STATUS_LF
 */
enum class TpmsStatusLf : int32_t {
    Unknown = 0,
    Nominal = 1,
    Low_Service_Now = 2,
    Low = 3,
    Low_Extended_Mobility = 4,
    High = 5,
};

/**
 * Enumeration for TPMS_STATUS_LR
 */
enum class TpmsStatusLr : int32_t {
    Unknown = 0,
    Nominal = 1,
    Low_Service_Now = 2,
    Low = 3,
    Low_Extended_Mobility = 4,
    High = 5,
};

/**
 * Enumeration for TPMS_STATUS_RF
 */
enum class TpmsStatusRf : int32_t {
    Unknown = 0,
    Nominal = 1,
    Low_Service_Now = 2,
    Low = 3,
    Low_Extended_Mobility = 4,
    High = 5,
};

/**
 * Enumeration for TPMS_STATUS_RR
 */
enum class TpmsStatusRr : int32_t {
    Unknown = 0,
    Nominal = 1,
    Low_Service_Now = 2,
    Low = 3,
    Low_Extended_Mobility = 4,
    High = 5,
};

/**
 * Enumeration for TRACK_MODE_ACTIVE_AERODYNAMICS_VISUALIZATION_DISPLAY_VALUE
 */
enum class TrackModeActiveAerodynamicsVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for TRACK_MODE_BRAKE_PEDAL_VISUALIZATION_DISPLAY_VALUE
 */
enum class TrackModeBrakePedalVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for TRACK_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_VISUALIZATION_DISPLAY_VALUE
 */
enum class TrackModeElectricVehiclePedalMapVisualizationDisplayValue : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for TRACK_MODE_ESC_VISUALIZATION_DISPLAY_VALUE
 */
enum class TrackModeEscVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for TRACK_MODE_POWERTRAIN_VISUALIZATION_DISPLAY_VALUE
 */
enum class TrackModePowertrainVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for TRACK_MODE_SOUND_VISUALIZATION_DISPLAY_VALUE
 */
enum class TrackModeSoundVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for TRACK_MODE_STEERING_VISUALIZATION_DISPLAY_VALUE
 */
enum class TrackModeSteeringVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for TRACK_MODE_SUSPENSION_VISUALIZATION_DISPLAY_VALUE
 */
enum class TrackModeSuspensionVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for TRAFFIC_LIGHT_ASSIST_CUSTOMIZATION
 */
enum class TrafficLightAssistCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ALERT = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for TRANSMISSION_COMMANDED_GEAR
 */
enum class TransmissionCommandedGear : int32_t {
    Not_Supported = 0,
    First_Gear = 1,
    Second_Gear = 2,
    Third_Gear = 3,
    Fourth_Gear = 4,
    Fifth_Gear = 5,
    Sixth_Gear = 6,
    Seventh_Gear = 7,
    Eighth_Gear = 8,
    Ninth_Gear = 9,
    Tenth_Gear = 10,
    Unused_and_Reserved = 11,
    CVT_Forward_Gear = 12,
    Neutral_Gear = 13,
    Reverse_Gear = 14,
    Park_Gear = 15,
};

/**
 * Enumeration for TRAILERING_MIRROR_VIDEO_ENABLE_CUSTOMIZATION
 */
enum class TraileringMirrorVideoEnableCustomization : int32_t {
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
 * Enumeration for TRAILERING_MIRROR_VIDEO_GUIDELINES_CUSTOMIZATION
 */
enum class TraileringMirrorVideoGuidelinesCustomization : int32_t {
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
 * Enumeration for TRAILER_ARTICULATION_ANGLE_CALIBRATION_STATUS
 */
enum class TrailerArticulationAngleCalibrationStatus : int32_t {
    Unknown = 0,
    Available = 1,
    Degraded = 2,
    Unavailable = 3,
};

/**
 * Enumeration for TRAILER_AXLE_COUNT
 */
enum class TrailerAxleCount : int32_t {
    Unknown = 0,
    Num1 = 1,
    Num2 = 2,
    Num3 = 3,
};

/**
 * Enumeration for TRAILER_BRAKING_SYSTEM_PROFILE_STATUS
 */
enum class TrailerBrakingSystemProfileStatus : int32_t {
    Default_Profile = 0,
    Profile_1 = 1,
    Profile_2 = 2,
    Profile_3 = 3,
    Profile_4 = 4,
    Profile_5 = 5,
};

/**
 * Enumeration for TRAILER_CONNECTION_STATUS
 */
enum class TrailerConnectionStatus : int32_t {
    Not_Connected = 0,
    Connected = 1,
};

/**
 * Enumeration for TRAILER_HITCH_TYPE
 */
enum class TrailerHitchType : int32_t {
    Unknown = 0,
    Conventional = 1,
    Num5th_Wheel = 2,
    Gooseneck = 3,
};

/**
 * Enumeration for TRAILER_PROFILE_DELETION
 */
enum class TrailerProfileDeletion : int32_t {
    No_Profile_Deleted = 0,
    Profile1_Deleted = 1,
    Profile2_Deleted = 2,
    Profile3_Deleted = 3,
    Profile4_Deleted = 4,
    Profile5_Deleted = 5,
    Profile6_Deleted = 6,
    Profile7_Deleted = 7,
    Profile8_Deleted = 8,
    Profile9_Deleted = 9,
    Profile10_Deleted = 10,
    Profile11_Deleted = 11,
    Profile12_Deleted = 12,
    Profile13_Deleted = 13,
    Profile14_Deleted = 14,
    Profile15_Deleted = 15,
    Profile16_Deleted = 16,
    Profile17_Deleted = 17,
    Profile18_Deleted = 18,
    Profile19_Deleted = 19,
    Profile20_Deleted = 20,
};

/**
 * Enumeration for TRAILER_PROFILE_DRIVER_REQUESTED_SELECTION
 */
enum class TrailerProfileDriverRequestedSelection : int32_t {
    No_Action = 0,
    Default_Profile = 1,
    Profile1 = 2,
    Profile2 = 3,
    Profile3 = 4,
    Profile4 = 5,
    Profile5 = 6,
    Profile6 = 7,
    Profile7 = 8,
    Profile8 = 9,
    Profile9 = 10,
    Profile10 = 11,
    Profile11 = 12,
    Profile12 = 13,
    Profile13 = 14,
    Profile14 = 15,
    Profile15 = 16,
    Profile16 = 17,
    Profile17 = 18,
    Profile18 = 19,
    Profile19 = 20,
    Profile20 = 21,
};

/**
 * Enumeration for TRAILER_PROFILE_SELECTION_RESPONSE
 */
enum class TrailerProfileSelectionResponse : int32_t {
    No_Action = 0,
    Default_Profile = 1,
    Profile1 = 2,
    Profile2 = 3,
    Profile3 = 4,
    Profile4 = 5,
    Profile5 = 6,
    Profile6 = 7,
    Profile7 = 8,
    Profile8 = 9,
    Profile9 = 10,
    Profile10 = 11,
    Profile11 = 12,
    Profile12 = 13,
    Profile13 = 14,
    Profile14 = 15,
    Profile15 = 16,
    Profile16 = 17,
    Profile17 = 18,
    Profile18 = 19,
    Profile19 = 20,
    Profile20 = 21,
};

/**
 * Enumeration for TRAILER_STATE_TOW_HAUL_MODE_OVERRIDE
 */
enum class TrailerStateTowHaulModeOverride : int32_t {
    No_Override = 0,
    Override_to_Not_Tow_Haul = 1,
    Unused_and_Reserved_1 = 2,
    Unused_and_Reserved_2 = 3,
};

/**
 * Enumeration for TRAILER_TIRE_LEARN_STATUS
 */
enum class TrailerTireLearnStatus : int32_t {
    Unknown = 0,
    Learn_Completed = 1,
    Learn_Progressing = 2,
    Learn_Failed = 3,
    Tires_not_Learned = 4,
};

/**
 * Enumeration for TRAILER_TIRE_LEFT_FRONT_PRESSURE_STATUS
 */
enum class TrailerTireLeftFrontPressureStatus : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

/**
 * Enumeration for TRAILER_TIRE_LEFT_MIDDLE_PRESSURE_STATUS
 */
enum class TrailerTireLeftMiddlePressureStatus : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

/**
 * Enumeration for TRAILER_TIRE_LEFT_REAR_PRESSURE_STATUS
 */
enum class TrailerTireLeftRearPressureStatus : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

/**
 * Enumeration for TRAILER_TIRE_RIGHT_FRONT_PRESSURE_STATUS
 */
enum class TrailerTireRightFrontPressureStatus : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

/**
 * Enumeration for TRAILER_TIRE_RIGHT_MIDDLE_PRESSURE_STATUS
 */
enum class TrailerTireRightMiddlePressureStatus : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

/**
 * Enumeration for TRAILER_TIRE_RIGHT_REAR_PRESSURE_STATUS
 */
enum class TrailerTireRightRearPressureStatus : int32_t {
    Unknown = 0,
    Normal = 1,
    Low_Pressure = 2,
    Malfunction = 3,
    Learning_in_Progress = 4,
    Learn_Tire = 5,
    Tire_Learning_Complete = 6,
    High_Pressure = 7,
    High_Temperature = 8,
};

/**
 * Enumeration for TRAILER_TYPE
 */
enum class TrailerType : int32_t {
    Unknown = 0,
    Box = 1,
    Not_Box = 2,
};

/**
 * Enumeration for TRANSMISSION_SHIFT_LEVER_POSITION
 */
enum class TransmissionShiftLeverPosition : int32_t {
    Between_Ranges = 0,
    Park_Range = 1,
    Reverse_Range = 2,
    Neutral_Range = 3,
    Forward_Range_A = 4,
    Forward_Range_B = 5,
    Forward_Range_C = 6,
    Forward_Range_D = 7,
    Forward_Range_E = 8,
    Forward_Range_F = 9,
    Forward_Range_G = 10,
    Forward_Range_H = 11,
    Forward_Range_I = 12,
    Forward_Range_J = 13,
    Lever_Position_Unknown = 14,
};

/**
 * Enumeration for VEHICLE_STABILITY_COMPETITIVE_MODE_CURRENT_STATE_REQUEST
 */
enum class VehicleStabilityCompetitiveModeCurrentStateRequest : int32_t {
    No_action = 0,
    OFF = 1,
    ON = 2,
};

/**
 * Enumeration for VEHICLE_LOCATION_STATUS
 */
enum class VehicleLocationStatus : int32_t {
    Not_Within_Stored_Regions = 0,
    Within_Stored_Region_1 = 1,
    Within_Stored_Region_2 = 2,
    Within_Stored_Region_3 = 3,
    Within_Stored_Region_4 = 4,
};

/**
 * Enumeration for VEHICLE_LOCATOR_LIGHTS_CUSTOMIZATION
 */
enum class VehicleLocatorLightsCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    RESERVED_3 = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for VEHICLE_MASS_ESTIMATE_STATUS
 */
enum class VehicleMassEstimateStatus : int32_t {
    Undetermined = 0,
    Degraded = 1,
    Normal = 2,
};

/**
 * Enumeration for VEHICLE_MOTION_MOVEMENT_STATE
 */
enum class VehicleMotionMovementState : int32_t {
    Parked = 0,
    Neutral = 1,
    Forward = 2,
    Reverse = 3,
    Invalid = 4,
};

/**
 * Enumeration for VEHICLE_STABILITY_ENHANCEMENT_CURRENT_STATE
 */
enum class VehicleStabilityEnhancementCurrentState : int32_t {
    On = 0,
    Off = 1,
};

/**
 * Enumeration for VEHICLE_STABILITY_ENHANCEMENT_CURRENT_STATE_REQUEST
 */
enum class VehicleStabilityEnhancementCurrentStateRequest : int32_t {
    No_action = 0,
    OFF = 1,
    ON = 2,
};

/**
 * Enumeration for VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_CONTROL_AVAILABLE
 */
enum class VirtualControlAccessoryCircuitControlAvailable : int32_t {
    Not_Available = 0,
    Available = 1,
};

/**
 * Enumeration for VIRTUAL_CONTROL_AUTO_HIGH_BEAM_REQUEST
 */
enum class VirtualControlAutoHighBeamRequest : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

/**
 * Enumeration for VIRTUAL_CONTROL_AUTO_HIGH_BEAM_STATUS_CONTROL_AVAILABLE
 */
enum class VirtualControlAutoHighBeamStatusControlAvailable : int32_t {
    Not_Available = 0,
    Available = 1,
};

/**
 * Enumeration for VIRTUAL_CONTROL_AUTO_HIGH_BEAM_STATUS_CURRENT_SELECTION_VALUE
 */
enum class VirtualControlAutoHighBeamStatusCurrentSelectionValue : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

/**
 * Enumeration for VIRTUAL_CONTROL_AUTO_HIGH_BEAM_STATUS_USER_CONTROL_ALLOWED
 */
enum class VirtualControlAutoHighBeamStatusUserControlAllowed : int32_t {
    Allowed = 0,
    Not_Allowed = 1,
};

/**
 * Enumeration for VIRTUAL_CONTROL_DOME_LIGHT_STATUS_DOME_DEFEAT_AVAILABLE
 */
enum class VirtualControlDomeLightStatusDomeDefeatAvailable : int32_t {
    Not_Available = 0,
    Available = 1,
};

/**
 * Enumeration for VIRTUAL_CONTROL_DOME_LIGHT_STATUS_DOME_DEFEAT_CURRENT_SELECTION_VALUE
 */
enum class VirtualControlDomeLightStatusDomeDefeatCurrentSelectionValue : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

/**
 * Enumeration for VIRTUAL_CONTROL_DOME_LIGHT_STATUS_DOME_LIGHT_AVAILABLE
 */
enum class VirtualControlDomeLightStatusDomeLightAvailable : int32_t {
    Not_Available = 0,
    Available = 1,
};

/**
 * Enumeration for VIRTUAL_CONTROL_DOME_LIGHT_STATUS_DOME_LIGHT_CURRENT_SELECTION_VALUE
 */
enum class VirtualControlDomeLightStatusDomeLightCurrentSelectionValue : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

/**
 * Enumeration for VIRTUAL_CONTROL_DRIVE_MODE_REQUEST
 */
enum class VirtualControlDriveModeRequest : int32_t {
    Normal = 0,
    Powertrain_Sport = 1,
    Chassis_Sport = 2,
    Eco = 3,
    Mountain = 4,
    Hold = 5,
    Snow_Ice = 6,
    Start_Stop = 7,
    Tow_Haul = 8,
    Grade_Braking_Disable = 9,
    Speed_Matching = 10,
    Track = 11,
    Exhaust_Brake = 12,
    Normal_AWD = 13,
    ManualRegen = 14,
    Crawl = 15,
    Custom = 16,
    Personal = 17,
    Baja = 18,
    Max_Power = 19,
    Reserved_1 = 20,
    Reserved_2 = 21,
    Reserved_3 = 22,
    Reserved_4 = 23,
    Reserved_5 = 24,
    Reserved_6 = 25,
    Reserved_7 = 26,
    Reserved_8 = 27,
    Reserved_9 = 28,
    Reserved_10 = 29,
    No_Mode_Change_Requested = 30,
    Critically_Disabled = 31,
};

/**
 * Enumeration for VIRTUAL_CONTROL_FOG_LAMPS_FRONT_REQUEST
 */
enum class VirtualControlFogLampsFrontRequest : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

/**
 * Enumeration for VIRTUAL_CONTROL_FOG_LAMPS_FRONT_STATUS_CONTROL_AVAILABLE
 */
enum class VirtualControlFogLampsFrontStatusControlAvailable : int32_t {
    Not_Available = 0,
    Available = 1,
};

/**
 * Enumeration for VIRTUAL_CONTROL_FOG_LAMPS_FRONT_STATUS_CURRENT_SELECTION_VALUE
 */
enum class VirtualControlFogLampsFrontStatusCurrentSelectionValue : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

/**
 * Enumeration for VIRTUAL_CONTROL_FOG_LAMPS_FRONT_STATUS_USER_CONTROL_ALLOWED
 */
enum class VirtualControlFogLampsFrontStatusUserControlAllowed : int32_t {
    Allowed = 0,
    Not_Allowed = 1,
};

/**
 * Enumeration for VIRTUAL_CONTROL_FOG_LAMPS_REAR_REQUEST
 */
enum class VirtualControlFogLampsRearRequest : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

/**
 * Enumeration for VIRTUAL_CONTROL_FOG_LAMPS_REAR_STATUS_CONTROL_AVAILABLE
 */
enum class VirtualControlFogLampsRearStatusControlAvailable : int32_t {
    Not_Available = 0,
    Available = 1,
};

/**
 * Enumeration for VIRTUAL_CONTROL_FOG_LAMPS_REAR_STATUS_CURRENT_SELECTION_VALUE
 */
enum class VirtualControlFogLampsRearStatusCurrentSelectionValue : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
};

/**
 * Enumeration for VIRTUAL_CONTROL_FOG_LAMPS_REAR_STATUS_USER_CONTROL_ALLOWED
 */
enum class VirtualControlFogLampsRearStatusUserControlAllowed : int32_t {
    Allowed = 0,
    Not_Allowed = 1,
};

/**
 * Enumeration for VIRTUAL_CONTROL_HEAD_AND_PARK_LAMPS_AVAILABLE
 */
enum class VirtualControlHeadAndParkLampsAvailable : int32_t {
    Not_Available = 0,
    Available = 1,
};

/**
 * Enumeration for VIRTUAL_CONTROL_HEATED_VENTED_SEAT_SWITCH_FRONT_AVAILABLE
 */
enum class VirtualControlHeatedVentedSeatSwitchFrontAvailable : int32_t {
    Not_Available = 0,
    Available = 1,
};

/**
 * Enumeration for VIRTUAL_CONTROL_HEATED_VENTED_SEAT_SWITCH_REAR_AVAILABLE
 */
enum class VirtualControlHeatedVentedSeatSwitchRearAvailable : int32_t {
    Not_Available = 0,
    Available = 1,
};

/**
 * Enumeration for VIRTUAL_ONE_PEDAL_DRIVING_CONTROL_AVAILABLE
 */
enum class VirtualOnePedalDrivingControlAvailable : int32_t {
    Not_Available = 0,
    Available = 1,
};

/**
 * Enumeration for VIRTUAL_ONE_PEDAL_DRIVING_REQUEST
 */
enum class VirtualOnePedalDrivingRequest : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

/**
 * Enumeration for VIRTUAL_ONE_PEDAL_DRIVING_USER_CONTROL_ALLOWED
 */
enum class VirtualOnePedalDrivingUserControlAllowed : int32_t {
    Allowed = 0,
    Not_Allowed = 1,
};

/**
 * Enumeration for WALK_AWAY_LOCKING_CUSTOMIZATION
 */
enum class WalkAwayLockingCustomization : int32_t {
    SETTING_UNKNOWN = 0,
    OFF = 1,
    ON = 2,
    ON_WITH_CHIRP = 3,
    RESERVED_4 = 4,
    RESERVED_5 = 5,
    RESERVED_6 = 6,
    RESERVED_7 = 7,
};

/**
 * Enumeration for WEATHER_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_VISUALIZATION_DISPLAY_VALUE
 */
enum class WeatherModeElectricVehiclePedalMapVisualizationDisplayValue : int32_t {
    SETTING_UNKNOWN = 0,
    CUSTOM_MODE_1 = 1,
    CUSTOM_MODE_2 = 2,
    CUSTOM_MODE_3 = 3,
    CUSTOM_MODE_4 = 4,
    CUSTOM_MODE_5 = 5,
    CUSTOM_MODE_6 = 6,
    CUSTOM_MODE_7 = 7,
};

/**
 * Enumeration for WEATHER_SNOW_MODE_ACTIVE_AERODYNAMICS_VISUALIZATION_DISPLAY_VALUE
 */
enum class WeatherSnowModeActiveAerodynamicsVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for WEATHER_SNOW_MODE_BRAKE_PEDAL_VISUALIZATION_DISPLAY_VALUE
 */
enum class WeatherSnowModeBrakePedalVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for WEATHER_SNOW_MODE_ESC_VISUALIZATION_DISPLAY_VALUE
 */
enum class WeatherSnowModeEscVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for WEATHER_SNOW_MODE_POWERTRAIN_VISUALIZATION_DISPLAY_VALUE
 */
enum class WeatherSnowModePowertrainVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for WEATHER_SNOW_MODE_SOUND_VISUALIZATION_DISPLAY_VALUE
 */
enum class WeatherSnowModeSoundVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for WEATHER_SNOW_MODE_STEERING_VISUALIZATION_DISPLAY_VALUE
 */
enum class WeatherSnowModeSteeringVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for WEATHER_SNOW_MODE_SUSPENSION_VISUALIZATION_DISPLAY_VALUE
 */
enum class WeatherSnowModeSuspensionVisualizationDisplayValue : int32_t {
    Setting_Unknown = 0,
    Custom_Mode_1 = 1,
    Custom_Mode_2 = 2,
    Custom_Mode_3 = 3,
    Custom_Mode_4 = 4,
    Custom_Mode_5 = 5,
    Custom_Mode_6 = 6,
    Custom_Mode_7 = 7,
};

/**
 * Enumeration for WINDOW_POSITION_STATUS_LEFT_FRONT
 */
enum class WindowPositionStatusLeftFront : int32_t {
    Denormalized = 0,
    Fully_Closed = 1,
    Less_Than_Position_A = 2,
    Position_A = 3,
    Greater_Than_A_but_less_than_Position_C = 4,
    Position_C = 5,
    Greater_than_Position_C_but_less_than_Fully_open = 6,
    Fully_Open = 7,
};

/**
 * Enumeration for WINDOW_POSITION_STATUS_LEFT_REAR
 */
enum class WindowPositionStatusLeftRear : int32_t {
    Denormalized = 0,
    Fully_Closed = 1,
    Less_Than_Position_A = 2,
    Position_A = 3,
    Greater_Than_A_but_less_than_Position_C = 4,
    Position_C = 5,
    Greater_than_Position_C_but_less_than_Fully_open = 6,
    Fully_Open = 7,
};

/**
 * Enumeration for WINDOW_POSITION_STATUS_RIGHT_FRONT
 */
enum class WindowPositionStatusRightFront : int32_t {
    Denormalized = 0,
    Fully_Closed = 1,
    Less_Than_Position_A = 2,
    Position_A = 3,
    Greater_Than_A_but_less_than_Position_C = 4,
    Position_C = 5,
    Greater_than_Position_C_but_less_than_Fully_open = 6,
    Fully_Open = 7,
};

/**
 * Enumeration for WINDOW_POSITION_STATUS_RIGHT_REAR
 */
enum class WindowPositionStatusRightRear : int32_t {
    Denormalized = 0,
    Fully_Closed = 1,
    Less_Than_Position_A = 2,
    Position_A = 3,
    Greater_Than_A_but_less_than_Position_C = 4,
    Position_C = 5,
    Greater_than_Position_C_but_less_than_Fully_open = 6,
    Fully_Open = 7,
};

/**
 * Enumeration for WIRELESS_CHARGING_SYSTEM_CHARGING_STATUS
 */
enum class WirelessChargingSystemChargingStatus : int32_t {
    WCS_Not_Present = 0,
    Charging_Inactive = 1,
    Charging_Active = 2,
    Charging_Complete = 3,
    Foreign_Object_Detected = 4,
    WCS_Overtemp_Shutdown = 5,
    Reserved_1 = 6,
    Reserved_2 = 7,
};

/*
 * ========== END GENERATED ENUMS ==========
 *
 *
 * Enumeration of vector indexing of property AMPLIFIER_SETTINGS_SINK_LEVEL_CONTROL
 */
enum class AmplifierSettingsSinkLevelControlIndex : int32_t {
    MUTEX_SINK_TREBLE = 0,
    AUTOMATIC_LOUDNESS = 1,
    MUTEX_SINK_BALANCE = 2,
    MUTEX_SINK_FADE = 3,
    VOICE_SOURCE_ACTIVE = 4,
    MUTEX_SINK_BASS = 5,
    MUTEX_SINK_MID = 6,
    INT_RANGE_END = 7,
    AUDIBLE_FEEDBACK_SINK_LEVEL = 0,
    FIVE_SINK_LEVEL = 1,
    MUTEX_SINK_LEVEL = 2,
    MIXED_PROMPT_SINK_LEVEL = 3,
    FLOAT_RANGE_END = 4,
};

/**
 * Enumeration of vector indexing of property AMPLIFIER_SETTINGS_TONE_CONTROL
 */
enum class AmplifierSettingsToneControlIndex : int32_t {
    MUTEX_SINK_RAMP_TIME = 0,
    MUTEX_SINK_MUTE = 1,
    CHIME_SINK_SPEAKER_POSITION = 2,
    SURROUND_LEVEL = 3,
    AMPLIFIER_LOW_POWER_STATE = 4,
    DSP_MODE = 5,
    LEFT_REAR_TACTILE_LEVEL = 6,
    VEHICLE_NOISE_COMPENSATION_ACTIVE = 7,
    RIGHT_REAR_TACTILE_LEVEL = 8,
    DRIVER_FRONT_TACTILE_LEVEL = 9,
    GLOBAL_AUDIO_SINK_MUTE = 10,
    PASSENGER_FRONT_TACTILE_LEVEL = 11,
    INT_RANGE_END = 12,
    CHIME_SINK_LEVEL = 0,
    FLOAT_RANGE_END = 1,
};

/**
 * Enumeration of ASTC_ChimSnkSpkrPos, value of
 * 3rd int32Values of property AMPLIFIER_SETTINGS_TONE_CONTROL
 * indexed by AmplifierSettingsToneControlIndex::CHIME_SINK_SPEAKER_POSITION
 */
enum class ASTC_ChimSnkSpkrPos : int32_t {
    NO_ACTION = 0,
    FULL_FRONT = 1,
    FULL_REAR = 2,
    FULL_LEFT = 3,
    FULL_RIGHT = 4,
    RIGHT_FRONT = 5,
    RIGHT_REAR = 6,
    LEFT_FRONT = 7,
    LEFT_REAR = 8,
    RESERVED_1 = 9,
    RESERVED_2 = 10,
    RESERVED_3 = 11,
    RESERVED_4 = 12,
    RESERVED_5 = 13,
    RESERVED_6 = 14,
    RESERVED_7 = 15,
};

/**
 * Enumeration of ASTC_DSPMd, value of
 * 6th int32Values of property AMPLIFIER_SETTINGS_TONE_CONTROL
 * indexed by AmplifierSettingsToneControlIndex::DSP_MODE
 */
enum class ASTC_DSPMd : int32_t {
    NO_ACTION = 0,
    DSP_MODE_0 = 1,
    DSP_MODE_1 = 2,
    DSP_MODE_2 = 3,
    DSP_MODE_3 = 4,
    DSP_MODE_4 = 5,
    DSP_MODE_5 = 6,
    DSP_MODE_6 = 7,
    DSP_MODE_7 = 8,
    RESERVED_1 = 9,
    RESERVED_2 = 10,
    RESERVED_3 = 11,
    RESERVED_4 = 12,
    RESERVED_5 = 13,
    RESERVED_6 = 14,
    RESERVED_7 = 15,
};

/**
 * Indexes for the LOCAL_TIME and UTC properties.
 */
enum class DateAndTimeIndex : int32_t {
    YEAR = 0,
    MONTH = 1,
    DAY = 2,
    HOUR = 3,
    MINUTE = 4,
    SECOND = 5,
};

/**
 * Enumeration of vector indexing of property TELEMATICS_AUDIO_CONTROL
 */
enum class TelematicsAudioControlIndex : int32_t {
    AUDIO_CHANNEL_CONNECTION_STATE = 0,
    AUDIO_CONNECTION_OUTCOME = 1,
};

/**
 * Enumeration of TAC_AudChConctStat, value of
 * 1st int32Values of property TELEMATICS_AUDIO_CONTROL
 * indexed by TelematicsAudioControlIndex::TAC_AudChConctStat
 */
enum class TAC_AudChConctStat : int32_t {
    NO_ACTION = 0,
    MIX_PROMPT = 1,
    MUTEX_PROMPT = 2,
    RING_TONE = 3,
    PHONE = 4,
    EMERGENCY_PHONE = 5,
    RESERVED_1 = 6,
    RESERVED_2 = 7,
    RESERVED_3 = 8,
    RESERVED_4 = 9,
    RESERVED_5 = 10,
    RESERVED_6 = 11,
    RESERVED_7 = 12,
    RESERVED_8 = 13,
    RESERVED_9 = 14,
    RESERVED_10 = 15,
};

/**
 * Enumeration of TAC_AudConctOutcm, value of
 * 2nd int32Values of property TELEMATICS_AUDIO_CONTROL
 * indexed by TelematicsAudioControlIndex::TAC_AudConctOutcm
 */
enum class TAC_AudConctOutcm : int32_t {
    NO_ACTION = 0,
    REQUEST_GRANTED = 1,
    REQUEST_DENIED = 2,
    AUDIO_FAULT = 3,
    RESERVED_2 = 4,
    RESERVED_3 = 5,
    RESERVED_4 = 6,
    RESERVED_5 = 7,
    RESERVED_6 = 8,
    RESERVED_7 = 9,
    RESERVED_8 = 10,
    RESERVED_9 = 11,
    RESERVED_10 = 12,
    RESERVED_11 = 13,
    RESERVED_12 = 14,
    RESERVED_13 = 15,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_BACK_AND_CUSHION_BOLSTER_IN_OUT
 */
enum class SeatControlDisplayStatusBackandCushionBolsterInOut : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Back_Bolster_In = 2,
    Back_Bolster_Out = 3,
    Cushion_Bolster_In = 4,
    Cushion_Bolster_Out = 5,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_BACK_BOLSTER_IN_OUT
 */
enum class SeatControlDisplayStatusBackBolsterInOut : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_CUSHION_BOLSTER_IN_OUT
 */
enum class SeatControlDisplayStatusCushionBolsterInOut : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_CUSHION_LENGTH_ADJUSTMENT_FORWARD_REARWARD
 */
enum class SeatControlDisplayStatusCushionLengthAdjustmentForwardRearward : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_HEADREST_FORWARD_REARWARD
 */
enum class SeatControlDisplayStatusHeadrestForwardRearward : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_HEADREST_FORWARD_REARWARD_AND_UP_DOWN
 */
enum class SeatControlDisplayStatusHeadrestForwardRearwardandUpDown : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
    Forward = 4,
    Rearward = 5,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_HEADREST_TILT_FORWARD_REARWARD
 */
enum class SeatControlDisplayStatusHeadrestTiltForwardRearward : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_HEADREST_UP_DOWN
 */
enum class SeatControlDisplayStatusHeadrestUpDown : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_HEADREST_WINGS_IN_OUT
 */
enum class SeatControlDisplayStatusHeadrestWingsInOut : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    In = 2,
    Out = 3,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_LUMBAR_FORWARD_REARWARD
 */
enum class SeatControlDisplayStatusLumbarForwardRearward : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_LUMBAR_UP_DOWN
 */
enum class SeatControlDisplayStatusLumbarUpDown : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_LUMBAR_UP_DOWN_AND_FORWARD_REARWARD
 */
enum class SeatControlDisplayStatusLumbarUpDownandForwardRearward : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Up = 2,
    Down = 3,
    Forward = 4,
    Rearward = 5,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_MASSAGE
 */
enum class SeatControlDisplayStatusMassage : int32_t {
    Not_Selected = 0,
    Selected_Massage_Off = 1,
    Selected_Massage_On = 2,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_MASSAGE_INTENSITY
 */
enum class SeatControlDisplayStatusMassageIntensity : int32_t {
    Massage_Off = 0,
    Massage_Intensity_1 = 1,
    Massage_Intensity_2 = 2,
    Massage_Intensity_3 = 3,
    Massage_Intensity_4 = 4,
    Massage_Intensity_5 = 5,
    Massage_Intensity_6 = 6,
    Massage_Intensity_7 = 7,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_MASSAGE_TYPE
 */
enum class SeatControlDisplayStatusMassageType : int32_t {
    Massage_Off = 0,
    Massage_Type_1 = 1,
    Massage_Type_2 = 2,
    Massage_Type_3 = 3,
    Massage_Type_4 = 4,
    Massage_Type_5 = 5,
    Massage_Type_6 = 6,
    Massage_Type_7 = 7,
    Massage_Type_8 = 8,
    Massage_Type_9 = 9,
    Massage_Type_10 = 10,
    Massage_Type_11 = 11,
    Massage_Type_12 = 12,
    Massage_Type_13 = 13,
    Massage_Type_14 = 14,
    Massage_Type_15 = 15,
};

/**
 * Enumeration for SEAT_CONTROL_DISPLAY_STATUS_UPPER_SHOULDER_FORWARD_REARWARD
 */
enum class SeatControlDisplayStatusUpperShoulderForwardRearward : int32_t {
    Not_Selected = 0,
    Selected_No_Movement = 1,
    Forward = 2,
    Rearward = 3,
};

/**
 * Enumeration of IAQI_IntrAirQltyGasStat, value of
 * 3rd int32Values of property INTERIOR_AIR_QUALITY_INDICATIONS
 * indexed by IAQIndicationsIndex::IAQI_IntrAirQltyGasStat
 */
enum class IAQI_IntrAirQltyGasStat : int32_t {
    NoDisplay = 0,
    AQIstate1 = 1,
    AQIstate2 = 2,
    AQIstate3 = 3,
    AQIstate4 = 4,
    AQIstate5 = 5,
    AQIstate6 = 6,
    NoDataAvailable = 7,
    ServiceSensor = 8,
    Unknown = 9,
};

/**
 * Enumeration of IAQI_IntrAirQltyOvrallStat, value of
 * 7th int32Values of property INTERIOR_AIR_QUALITY_INDICATIONS
 * indexed by IAQIndicationsIndex::IAQI_IntrAirQltyOvrallStat
 */
enum class IAQI_IntrAirQltyOvrallStat : int32_t {
    NoDisplay = 0,
    AQIstate1 = 1,
    AQIstate2 = 2,
    AQIstate3 = 3,
    AQIstate4 = 4,
    AQIstate5 = 5,
    AQIstate6 = 6,
    NoDataAvailable = 7,
    ServiceSensor = 8,
    Unknown = 9,
};

/**
 * Enumeration of IAQI_IntrAirQltyPrtclteStat, value of
 * 10th int32Values of property INTERIOR_AIR_QUALITY_INDICATIONS
 * indexed by IAQIndicationsIndex::IAQI_IntrAirQltyPrtclteStat
 */
enum class IAQI_IntrAirQltyPrtclteStat : int32_t {
    NoDisplay = 0,
    AQIstate1 = 1,
    AQIstate2 = 2,
    AQIstate3 = 3,
    AQIstate4 = 4,
    AQIstate5 = 5,
    AQIstate6 = 6,
    NoDataAvailable = 7,
    ServiceSensor = 8,
    Unknown = 9,
};

/**
 * Enumeration of vector indexing of property LOW_VOLUME_MODULE_AUDIO_VIDEO_COMMAND
 */
enum class LowVolModAudVidCmdIndex : int32_t {
    LVM_APPLICATION_ID = 0,
    REMOTE_SPEECH_RECOGNITION_ACTION = 1,
    PROMPT_AUDIO_RESPONSE = 2,
    REMOTE_SPEECH_RECOGNITION_ID = 3,
    SPEECH_RECOGNITION_AVAILABLE = 4,
    REMOTE_ENABLE = 5,
    STEREO_AUDIO_RESPONSE = 6,
    MAX_RANGE_END = 7,
};

/**
 * Enumeration of LVMAVC_ApplID, 1st int32Values of
 * property LOW_VOLUME_MODULE_AUDIO_VIDEO_COMMAND
 * indexed by LowVolModAudVidCmdIndex::LVMAVC_ApplID
 */
enum class LVMAVC_ApplID : int32_t {
    NO_ACTION = 0,
    LVM_NAV = 1,
    LVM_DMB = 2,
    LVM_PERFORMANCE_COMPUTER = 3,
    LVM_COMPLEX_MODE = 4,
};

/**
 * Enumeration of LVMAVC_RmtSpchRcgnActn, 2nd int32Values of
 * property LOW_VOLUME_MODULE_AUDIO_VIDEO_COMMAND
 * indexed by LowVolModAudVidCmdIndex::LVMAVC_RmtSpchRcgnActn
 */
enum class LVMAVC_RmtSpchRcgnActn : int32_t {
    NO_ACTION = 0,
    ACTIVATE_LVM_SR = 1,
    PTT_BUTTON_PRESS = 2,
    END_BUTTON_PRESS = 3,
};

/**
 * Enumeration of LVMAVC_PrmtAudResp, 3rd int32Values of
 * property LOW_VOLUME_MODULE_AUDIO_VIDEO_COMMAND
 * indexed by LowVolModAudVidCmdIndex::LVMAVC_PrmtAudResp
 */
enum class LVMAVC_PrmtAudResp : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
};

/**
 * Enumeration of LVMAVC_RmtSpchRcgnID, 4th int32Values of
 * property LOW_VOLUME_MODULE_AUDIO_VIDEO_COMMAND
 * indexed by LowVolModAudVidCmdIndex::LVMAVC_RmtSpchRcgnID
 */
enum class LVMAVC_RmtSpchRcgnID : int32_t {
    NO_ACTION = 0,
    LVM_NAV = 1,
    LVM_DMB = 2,
    LVM_PDR = 3,
};

/**
 * Enumeration of LVMAVC_SpchRcgnAval, 5th int32Values of
 * property LOW_VOLUME_MODULE_AUDIO_VIDEO_COMMAND
 * indexed by LowVolModAudVidCmdIndex::LVMAVC_SpchRcgnAval
 */
enum class LVMAVC_SpchRcgnAval : int32_t {
    NO_ACTION = 0,
    LVM_SPEECH_REC_AVAILABLE = 1,
};

/**
 * Enumeration of LVMAVC_RmtEnbl, 6th int32Values of
 * property LOW_VOLUME_MODULE_AUDIO_VIDEO_COMMAND
 * indexed by LowVolModAudVidCmdIndex::LVMAVC_RmtEnbl
 */
enum class LVMAVC_RmtEnbl : int32_t {
    NO_ACTION = 0,
    REMOTE_ENABLE_ON = 1,
    REMOTE_ENABLE_ACTIVE = 2,
};

/**
 * Enumeration of LVMAVC_StreoAudResp, 7th int32Values of
 * property LOW_VOLUME_MODULE_AUDIO_VIDEO_COMMAND
 * indexed by LowVolModAudVidCmdIndex::LVMAVC_StreoAudResp
 */
enum class LVMAVC_StreoAudResp : int32_t {
    NO_ACTION = 0,
    ACTIVE = 1,
};

/**
 * Enumeration of HVAC_IONIZER_STATE, mimicking value of IndInzrStat
 */
enum class IonizerState : int32_t {
    OFF = 0,
    IONIZER_ON = 1,
    IONIZER_OFF = 2,
    IONIZER_LO = 3,
    IONIZER_HI = 4,
};

/**
 * Enumeration for TCP_LCM_DATA_MESSAGE_STATUS
 */
enum class TelematicsLicenseComplianceMaterialDataMessageStatus : int32_t {
    No_Action = 0,
    Acknowledge = 1,
};

/**
 * Enumeration for TCP_LCM_FILE_TRANSFER
 */
enum class TelematicsLicenseComplianceMaterialFileTransfer : int32_t {
    No_Action = 0,
    Begin_Transfer = 1,
    Successful_Block_Transfer = 2,
    Cancel_Transfer = 3,
    Retry_Last_Block = 4,
};

/**
 * Enumeration for WIRELESS_CHARGER_MODULE_LICENSE_COMPLIANCE_MATERIAL_DATA_MESSAGE_STATUS
 */
enum class WirelessChargerModuleLicenseComplianceMaterialDataMessageStatus : int32_t {
    No_Action = 0,
    Acknowledge = 1,
};

/**
 * Enumeration for WIRELESS_CHARGER_MODULE_LICENSE_COMPLIANCE_MATERIAL_FILE_TRANSFER
 */
enum class WirelessChargerModuleLicenseComplianceMaterialFileTransfer : int32_t {
    No_Action = 0,
    Begin_Transfer = 1,
    Successful_Block_Transfer = 2,
    Cancel_Transfer = 3,
    Retry_Last_Block = 4,
};

/*
 * Enumeration for LANE_DETECTION_WARNING_AND_CONTROL_AUDIO_ATTENUATION_REQUESTED_SUM
 */
enum class Lane_detection_warning_and_control_audio_attenuation_requested_availability_indication_sum : int32_t {
    DISABLED = 0,
    UNINITIALIZED = 1,
    UNAVAILABLE = 2,
    AVAILABLE = 3,
};

/**
 * Enumeration for FRONT_PEDESTRIAN_COLLISION_MITIGATION_AUDIO_ATTENUATION_REQUESTED_SUM
 */
enum class Front_pedestrian_collision_mitigation_audio_attenuation_requested_availability_indication_sum : int32_t {
    DISABLED = 0,
    UNINITIALIZED = 1,
    UNAVAILABLE = 2,
    AVAILABLE = 3,
};

/**
 * Enumeration for FORWARD_COLLISION_ALERT_IMMINENT_ALERT_AUDIO_ATTENUATION_REQUESTED_SUM
 */
enum class Forward_collision_alert_imminent_alert_audio_attenuation_requested_availability_indication_sum : int32_t {
    DISABLED = 0,
    UNINITIALIZED = 1,
    UNAVAILABLE = 2,
    AVAILABLE = 3,
};

/**
 * Enumeration for TRAILER_LIGHTING_SEQUENCE sets
 */
enum class TrailerLightingSequenceRequest : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for TRAILER_LIGHTING_SEQUENCE gets
 */
enum class TrailerLightingSequenceStatus : int32_t {
    Sequence_Off = 0,
    Sequence_On = 1,
};

/**
 * Enumeration for HW_KEY_ENABLE
 */
enum class HwInputDeviceIndex : int32_t {
    SWC = 1,
    MFC = 2,
};

/**
 * Enumeration for FORCE_NIGHT_MODE
 */
enum class ForceNightMode : int32_t {
    SENSOR_MODE = 0,
    FORCE_DAY_MODE = 1,
    FORCE_NIGHT_MODE = 2,
};

/**
 * Enumeration of HWButtonCode, 1st int32Values of
 * property HW_KEY_STATUS
 */
enum class HWButtonCode : int32_t {
    POWER_BUTTON = 0,
};

/**
 * Enumeration for HIGH_VOLTAGE_BATTERY_CHARGE_COMPLETE
 */
enum class HVBCC_DyOfWk : int32_t {
    Unknown = 0,
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
};

/**
 * Enumeration for HIGH_VOLTAGE_BATTERY_CHARGE_COMPLETE
 */
enum class HVBCC_TmDispFormat : int32_t {
    No_Action = 0,
    Display_Complete_Time = 1,
    Display_Minutes_to_Complete = 2,
};

/**
 * Enumeration for HIGH_VOLTAGE_BATTERY_CHARGE_COMPLETE
 */
enum class HVBCC_TmDispPwrLvl : int32_t {
    Unknown = 0,
    Level_1 = 1,
    Level_2 = 2,
    DC = 3,
    Wireless = 4,
};

/**
 * Enumeration for TOD_CHARGING_NEXT_PLANNED
 */
enum class TODCNP_Chrg : int32_t {
    No_Action = 0,
    Charge_Now = 1,
    Charge_Later = 2,
};

/**
 * Enumeration for TOD_CHARGING_NEXT_PLANNED
 */
enum class TODCNP_DprtrDyOfWk : int32_t {
    Unknown = 0,
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
};

/**
 * Enumeration for TOD_CHARGING_NEXT_PLANNED
 */
enum class TODCNP_PCCLCstCurrSetVal : int32_t {
    No_Action = 0,
    Reduced = 1,
    Maximum = 2,
};

/**
 * Enumeration for TIRE_LEAK_DETECTION_WORST_CASE_INFORMATION
 */
enum class TLDWCI_Sts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

/**
 * Enumeration for TIRE_LEAK_DETECTION_STATUS
 */
enum class FTLDI_LFSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

/**
 * Enumeration for TIRE_LEAK_DETECTION_STATUS
 */
enum class FTLDI_RFSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

/**
 * Enumeration for TIRE_LEAK_DETECTION_STATUS
 */
enum class RTLDI_LRSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

/**
 * Enumeration for TIRE_LEAK_DETECTION_STATUS
 */
enum class RTLDI_RRSts : int32_t {
    Unknown = 0,
    No_Leak = 1,
    Slow_Leak = 2,
    Fast_Leak = 3,
};

/**
 * Enumeration for VirtCtlAccCkt1CurrSeltnVal in
 * VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_CURRENT_SELECTION_VALUE
 */
enum class VirtualControlAccessoryCircuit1CurrentSelectionValue : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
    Failed = 3,
};

/**
 * Enumeration for VirtCtlAccCkt2CurrSeltnVal in
 * VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_CURRENT_SELECTION_VALUE
 */
enum class VirtualControlAccessoryCircuit2CurrentSelectionValue : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
    Failed = 3,
};

/**
 * Enumeration for VirtCtlAccCkt3CurrSeltnVal in
 * VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_CURRENT_SELECTION_VALUE
 */
enum class VirtualControlAccessoryCircuit3CurrentSelectionValue : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
    Failed = 3,
};

/**
 * Enumeration for VirtCtlAccCkt4CurrSeltnVal in
 * VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_CURRENT_SELECTION_VALUE
 */
enum class VirtualControlAccessoryCircuit4CurrentSelectionValue : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
    Failed = 3,
};

/**
 * Enumeration for VirtCtlAccCkt5CurrSeltnVal in
 * VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_CURRENT_SELECTION_VALUE
 */
enum class VirtualControlAccessoryCircuit5CurrentSelectionValue : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
    Failed = 3,
};

/**
 * Enumeration for VirtCtlAccCkt6CurrSeltnVal in
 * VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_CURRENT_SELECTION_VALUE
 */
enum class VirtualControlAccessoryCircuit6CurrentSelectionValue : int32_t {
    Unknown = 0,
    On = 1,
    Off = 2,
    Failed = 3,
};

/**
 * Enumeration for VirtCtlAccCkt1Req in VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_REQUEST
 */
enum class VirtualControlAccessoryCircuit1Request : int32_t {
    No_Action = 0,
    Momentary_On = 1,
    Momentary_Lightbar_On = 2,
    Latch_On = 3,
    Latch_Lightbar_On = 4,
    Off = 5,
};

/**
 * Enumeration for VirtCtlAccCkt2Req in VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_REQUEST
 */
enum class VirtualControlAccessoryCircuit2Request : int32_t {
    No_Action = 0,
    Momentary_On = 1,
    Momentary_Lightbar_On = 2,
    Latch_On = 3,
    Latch_Lightbar_On = 4,
    Off = 5,
};

/**
 * Enumeration for VirtCtlAccCkt3Req in VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_REQUEST
 */
enum class VirtualControlAccessoryCircuit3Request : int32_t {
    No_Action = 0,
    Momentary_On = 1,
    Momentary_Lightbar_On = 2,
    Latch_On = 3,
    Latch_Lightbar_On = 4,
    Off = 5,
};

/**
 * Enumeration for VirtCtlAccCkt4Req in VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_REQUEST
 */
enum class VirtualControlAccessoryCircuit4Request : int32_t {
    No_Action = 0,
    Momentary_On = 1,
    Momentary_Lightbar_On = 2,
    Latch_On = 3,
    Latch_Lightbar_On = 4,
    Off = 5,
};

/**
 * Enumeration for VirtCtlAccCkt5Req in VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_REQUEST
 */
enum class VirtualControlAccessoryCircuit5Request : int32_t {
    No_Action = 0,
    Momentary_On = 1,
    Momentary_Lightbar_On = 2,
    Latch_On = 3,
    Latch_Lightbar_On = 4,
    Off = 5,
};

/**
 * Enumeration for VirtCtlAccCkt6Req in VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_REQUEST
 */
enum class VirtualControlAccessoryCircuit6Request : int32_t {
    No_Action = 0,
    Momentary_On = 1,
    Momentary_Lightbar_On = 2,
    Latch_On = 3,
    Latch_Lightbar_On = 4,
    Off = 5,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_REQ
 */
enum class TODCSR_LocNumReq : int32_t {
    No_Action = 0,
    Not_in_Stored_Location = 1,
    Stored_Location_1 = 2,
    Stored_Location_2 = 3,
    Stored_Location_3 = 4,
    Stored_Location_4 = 5,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_REQ
 */
enum class TODCSR_ChrgSchedDyOfWkReq : int32_t {
    No_Action = 0,
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
    All_Days_Same = 8,
    Monday_to_Friday_Same = 9,
    Saturday_and_Sunday_Same = 10,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_REQ
 */
enum class TODCCbnPrcndtngSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_REQ
 */
enum class TODCSR_ERSPrdDyReq : int32_t {
    No_Action = 0,
    Weekday_1 = 1,
    Weekday_2 = 2,
    Weekday_3 = 3,
    Weekday_4 = 4,
    Weekday_5 = 5,
    Weekend_1 = 6,
    Weekend_2 = 7,
    Weekend_3 = 8,
    Weekend_4 = 9,
    Weekend_5 = 10,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_REQ
 */
enum class TODCSR_ERSPrdLvlReq : int32_t {
    No_Action = 0,
    Low_Rate = 1,
    Medium_Rate = 2,
    High_Rate = 3,
    Reserved_1 = 4,
    Invalid_Rate = 5,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_REQ
 */
enum class TODCSR_ERSCstSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_REQ
 */
enum class TODCSR_LocChrgPwrLvlReq : int32_t {
    Unknown = 0,
    Level_1 = 1,
    Level_2 = 2,
    DC = 3,
    Wireless = 4,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_REQ
 */
enum class TODCSR_ChrgSchedCstSetReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_REQ
 */
enum class PrtblChrgCordLimCstSetReq : int32_t {
    No_Action = 0,
    Reduced = 1,
    Maximum = 2,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_RESP
 */
enum class TODCSR_LocNumResp : int32_t {
    No_Action = 0,
    Not_in_Stored_Location = 1,
    Stored_Location_1 = 2,
    Stored_Location_2 = 3,
    Stored_Location_3 = 4,
    Stored_Location_4 = 5,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_RESP
 */
enum class TODCSR_ChrgSchedDyOfWkResp : int32_t {
    No_Action = 0,
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
    All_Days_Same = 8,
    Monday_to_Friday_Same = 9,
    Saturday_and_Sunday_Same = 10,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_RESP
 */
enum class TODCCbnPrcndtngSetResp : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_RESP
 */
enum class TODCSR_ERSPrdDyResp : int32_t {
    No_Action = 0,
    Weekday_1 = 1,
    Weekday_2 = 2,
    Weekday_3 = 3,
    Weekday_4 = 4,
    Weekday_5 = 5,
    Weekend_1 = 6,
    Weekend_2 = 7,
    Weekend_3 = 8,
    Weekend_4 = 9,
    Weekend_5 = 10,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_RESP
 */
enum class TODCSR_ERSPrdLvlResp : int32_t {
    No_Action = 0,
    Low_Rate = 1,
    Medium_Rate = 2,
    High_Rate = 3,
    Reserved_1 = 4,
    Invalid_Rate = 5,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_RESP
 */
enum class TODCSR_ERSCstSetVal : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_RESP
 */
enum class TODCSR_LocChrgPwrLvlResp : int32_t {
    Unknown = 0,
    Level_1 = 1,
    Level_2 = 2,
    DC = 3,
    Wireless = 4,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_RESP
 */
enum class TODCSR_ChrgSchedCstSetVal : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for TOD_CHARGING_SETTING_RESP
 */
enum class PrtblChrgCordLimCstSetResp : int32_t {
    No_Action = 0,
    Reduced = 1,
    Maximum = 2,
};

/**
 * Enumeration for OVERRIDE_NEXT_PLANNED_CHARGE
 */
enum class OvrrdNextPlndCbnPrcndtngReq : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for DRIVE_MODE_NAME
 */
enum class DriveModeName : int32_t {
    None = 0,
    Tour = 1,
    Sport = 2,
    Track = 3,
    Winter = 4,
    Off_Road = 5,
    Tow_Haul = 6,
    Hold = 7,
    Mountain = 8,
    Personal = 9,
    Custom = 10,
    AWD = 11,
    Economy = 12,
    Automatic = 13,
    EV = 14,
    grade_braking = 15,
    exhaust_brake = 16,
    active_rev_match = 17,
    Num2WD = 18,
    Comfort = 19,
    start_stop_disable = 20,
    Crawl = 21,
    Charge_Plus = 22,
    Baja = 23,
    Max_Power = 24,
    Reserved_1_Reserved_7 = 25,
};

/**
 * Enumeration for LOCATION_BASED_CHARGING_CUSTOMER_DATA_RESET_RESPONSE
 */
enum class LBCCDRR_ClrStrdPstnResp : int32_t {
    No_Action = 0,
    Clear_Position_Request_Acknowledged = 1,
    Clear_Position_Request_Performed = 2,
};

/**
 * Enumeration for LOCATION_BASED_CHARGING_CUSTOMER_DATA_RESET_RESPONSE
 */
enum class LBCCDRR_PstnNumResp : int32_t {
    No_Action = 0,
    Clear_Position_1 = 1,
    Clear_Position_2 = 2,
    Clear_Position_3 = 3,
    Clear_Position_4 = 4,
};

/**
 * Enumeration for LOCATION_BASED_CHARGING_POSITION_STORAGE_STATUS
 */
enum class LBCPSS_PstnUpdtLoc : int32_t {
    No_Action = 0,
    Update_Position_1 = 1,
    Update_Position_2 = 2,
    Update_Position_3 = 3,
    Update_Position_4 = 4,
};

/**
 * Enumeration for LOCATION_BASED_CHARGING_POSITION_STORAGE_STATUS
 */
enum class LBCPSS_PstnUpdtSts : int32_t {
    No_Action = 0,
    Position_Updated = 1,
    Position_Modified = 2,
};

/**
 * ENUMERATION for TIME_OF_DAY_CHARGING_NEXT_PLANNED_CABIN_PRECONDITIONING_SETTING_RESPONSE
 */
enum class TimeOfDayChargingNextPlannedCabinPreconditioningSettingResponse : int32_t {
    No_Action = 0,
    Off = 1,
    On = 2,
};

/**
 * Enumeration for RIDE_HEIGHT_SELECTION_NAME
 */
enum class RideHeightSelectionNameValues : int32_t {
    No_Action = 0,
    Auto = 1,
    Raised_2 = 2,
    Raised = 3,
    Normal = 4,
    Entry_Exit = 5,
    Cargo_Loading = 6,
    Lowered = 7,
};

/**
 * Enumeration for PLUG_AND_CHARGE_CERTIFICATE_ACTION_REQUEST_AUTHENTICATED
 */
enum class PnCActnReqCertfctOpAuth : int32_t {
    No_Action = 0,
    Disable_Certificate = 1,
    Enable_Certificate = 2,
    Erase_Certificate = 3,
    Install_Certificate = 4,
};

/**
 * Enumeration for PLUG_AND_CHARGE_CERTIFICATE_ACTION_STATUS
 */
enum class PnCActionCertificateType : int32_t {
    None = 0,
    GM_Provisioning_Certificate = 1,
    Contract_Certificate = 2,
    V2G_Root_Certificate = 3,
    OCSP_Certificate = 4,
    Private_Operator_Root_Certificate = 5,
    Reserved1 = 6,
    Reserved2 = 7,
    Reserved3 = 8,
    Reserved4 = 9,
    Reserved5 = 10,
    Reserved6 = 11,
    Reserved7 = 12,
    Reserved8 = 13,
    All_Contract_And_Private_Operator_Root_Certificates = 14,
};

/**
 * Enumeration for PLUG_AND_CHARGE_CERTIFICATE_ACTION_REQUEST_AUTHENTICATED
 */
enum class PnCActnReqCertfctTypAuth : int32_t {
    None = 0,
    GM_Provisioning_Certificate = 1,
    Contract_Certificate = 2,
    V2G_Root_Certificate = 3,
    OCSP_Certificate = 4,
    Private_Operator_Root_Certificate = 5,
    Reserved1 = 6,
    Reserved2 = 7,
    Reserved3 = 8,
    Reserved4 = 9,
    Reserved5 = 10,
    Reserved6 = 11,
    Reserved7 = 12,
    Reserved8 = 13,
    All_Contract_And_Private_Operator_Root_Certificates = 14,
};

/**
 * Enumeration for PLUG_AND_CHARGE_CERTIFICATE_ACTION_STATUS
 */
enum class PnCActionStatusCertificateOperationStatus : int32_t {
    NoAction = 0,
    CertificateDisabledSuccessfully = 1,
    CertificateDisableFailed = 2,
    CertificateEnabledSuccessfully = 3,
    CertificateEnableFailed = 4,
    CertificateErasedSuccessfully = 5,
    CertificateErasureFailed = 6,
    CertificateDisableOperationInProgress = 7,
    CertificateEnableOperationInProgress = 8,
    CertificateEraseOperationInProgress = 9,
    SelectedCertificateOperationLocationisOutofBounds = 10,
    NoCertificateisInstalledintheRequestedCertificateLocation = 11,
    NoCertificateofThisCertificateTypeisInstalledintheEVCC = 12,
    CertificateOperationNotSupportedonThisCertificateType = 13,
    CertificateOperationCannotbePerformedatThisTime = 14,
    CertificateInstallOperationInProgress = 15,
    CertificateInstalledSuccessfully = 16,
    CertificateInstallFailed = 17,
};

/*
 * Enumeration for REAR_INNER_TPMS_STATUS
 */
enum class TirePressureStatus : int32_t {
    Unknown = 0,
    Nominal = 1,
    Low_Service_Now = 2,
    Low = 3,
    Low_Extended_Mobility = 4,
    High = 5,
};

/**
 * Enumeration for Availability Indication SUM properties
 */
enum class AvailabilityIndicationSum : int32_t {
    DISABLED = 0,
    UNINITIALIZED = 1,
    UNAVAILABLE = 2,
    AVAILABLE = 3,
};

/**
 * Enumeration for LOCATION_BASED_CHARGING_CUSTOMER_DATA_RESET_REQUEST
 */
enum class LBCCDRR_ClrStrdPstnReq : int32_t {
    No_Action = 0,
    Request_to_Clear_Position = 1,
    Confirmation_to_Clear_Position = 2,
};

/**
 * Enumeration for LOCATION_BASED_CHARGING_CUSTOMER_DATA_RESET_REQUEST
 */
enum class LBCCDRR_PstnNumReq : int32_t {
    No_Action = 0,
    Position_Number_1 = 1,
    Position_Number_2 = 2,
    Position_Number_3 = 3,
    Position_Number_4 = 4,
};

/**
 * Enumeration of vector indexing of property DRIVE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_ENERGY_PERCENT
 */
enum class DriveCycleElectricalEnergyPercentIndex : int32_t {
    DCEEC_EngyPct1 = 0,
    DCEEC_EngyPct2 = 1,
    DCEEC_EngyPct3 = 2,
    DCEEC_EngyPct4 = 3,
};

/**
 * Enumeration for Index of property
 * PRIMARY_PRECISE_POSITIONING
 */
enum class PrimaryPrecisePosition_Index : int32_t {
    Index_SigAcqTm = 0,
    Index_TmOfDy = 1,
    Index_CldrDy = 2,
    Index_CldrYr = 3,
    Index_GPSMode = 4,
    Index_LocUsbl = 5,
    Index_InvMask = 6,
    Index_Lat = 0,
    Index_Lng = 1,
    Index_Elvtn = 2,
    Index_Hdg = 3,
    Index_CalcdSpd = 4,
    Index_2DAbsPstnErrEst = 5,
    Index_3DAbsPstnErrEst = 6,
    Index_AbsHdgErrEst = 7,
    Index_AbsVelErrEst = 8,
};

/**
 * Enumeration for Global Positioning System Mode of property
 * PRIMARY_PRECISE_POSITIONING
 */
enum class PrimaryPrecisePosition_GPSMode : int32_t {
    GNSS_Standalone = 0,
    GNSS_and_SBAS = 1,
    GNSS_and_RTX = 2,
    GNSS_and_DR = 3,
    GNSS_and_SBAS_and_DR = 4,
    GNSS_and_RTX_and_DR = 5,
    DR_Only = 6,
    GNSS_and_RTX_and_DR_and_MM = 7,
};

/**
 * Enumeration for Invalid Mask of property
 * PRIMARY_PRECISE_POSITIONING
 */
enum class PrimaryPrecisePosition_InvMask : int32_t {
    Mask_None = 0,
    Mask_Lat = 1,
    Mask_Lng = 2,
    Mask_Elvtn = 4,
    Mask_Hdg = 8,
    Mask_CalcdSpd = 16,
    Mask_2DAbsPstnErrEst = 32,
    Mask_3DAbsPstnErrEst = 64,
    Mask_AbsHdgErrEst = 128,
    Mask_AbsVelErrEst = 256,
    Mask_SigAcqTm = 512,
    Mask_TmOfDy = 1024,
    Mask_CldDy = 2048,
    Mask_CldYr = 4096,
    Mask_GpsMode = 8192,
    Mask_LocUsbl = 16384,
    Mask_All = 32797,
};

/**
 * GNSS Space Vehicle Information Index of property
 * GNSS_SPACE_VEHICLE_INFORMATION
 */
enum class GNSSSpcVehInfo_Index : int32_t {
    Index_SatID = 0,
    Index_SatCnstltn = 1,
    Index_SatUsdPsFix = 2,
    Index_SatDuDMask = 3,
    Index_SatInvMask = 4,
    Index_SatCarNois = 0,
    Index_SatElvtn = 1,
    Index_SatAzm = 2,
    Int32ElementSize = 5,
    FloatElementSize = 3,
};

/**
 * GNSS Space Vehicle Information Satellite Constellation
 * value of 4th int32 values in array for property
 * GNSS_SPACE_VEHICLE_INFORMATION
 */
enum class GNSSSpcVehInfo_SatConstellation : int32_t {
    Unknown = 0,
    Gps = 1,
    Glonass = 2,
    Galileo = 3,
    Beidou = 4,
    Qzss = 5,
    Sbas = 6,
};

/**
 * Enumeration for Dud / Invalid Mask for property
 * GNSS_SPACE_VEHICLE_INFORMATION
 */
enum class GNSSSpcVehInfo_DuDInvMask : int32_t {
    Mask_None = 0,
    Mask_ID = 1,
    Mask_Cnstltn = 2,
    Mask_UsdPsFix = 4,
    Mask_CarNois = 8,
    Mask_Elvtn = 16,
    Mask_Azm = 32,
    Mask_All = 63,
};

/**
 * Enumeration of vector indexing of property NEXT_CHARGING_DESTINATION_COORDINATES
 */
enum class NextChargingDestinationCoordinatesIndex : int32_t {
    NextChrgDestLat = 0,
    NextChrgDestLng = 1,
};

/**
 * Enumeration of vector indexing of property NEXT_CHARGING_DESTINATION_INFORMATION_1
 */
enum class NextChargingDestinationInformation1Index : int32_t {
    NextChrgDestDistToArvl = 0,
    NextChrgDestSts = 1,
    NextChrgDestTmToArvl = 2,
    NextChrgDestPwrLvl = 3,
};

/**
 * Enumeration of vector indexing of property NAVIGATION_ROUTE_INFORMATION_1
 */
enum class NavigationRouteInformation1Index : int32_t {
    NavRteChgOcc = 0,
    NavRtePrdtdOAT = 1,
    NavRtePrdtdVehSpd = 2,
    NavRteSts = 3,
    NavRteTmIdx1 = 4,
    NavRtePrdtdCustUsblSOC = 5,
    NavRtePrdtdRdLdPwr = 6,
};

/**
 * Enumeration of vector indexing of property NAVIGATION_ROUTE_INFORMATION_2
 */
enum class NavigationRouteInformation2Index : int32_t {
    NavRtePrdtdElvtn = 0,
    NavRtePrdtdLng = 1,
    NavRteTmIdx2 = 2,
};

/**
 * Enumeration of vector indexing of property NAVIGATION_ROUTE_INFORMATION_3
 */
enum class NavigationRouteInformation3Index : int32_t {
    NavRtePrdtdLat = 0,
    NavRteTmIdx3 = 1,
    NavRtePrdtdEngyDelt = 2,
};

/**
 * Enumeration for property
 * DISPLAY_UNITS
 */
enum class DisplayUnits : int32_t {
    METRIC = 0,
    US = 1,
    IMPERIAL = 2,
};

/**
 * Enumeration of vector for indexing SUM properties
 */
enum class SumPropertyIndex : int32_t {
    SigType = 0,
    Av = 1,
    LcFA = 2,
    FsI = 3,
    FsFA = 4,
    FcI = 5,
    FcFA = 6,
    FoI = 7,
    FoFa = 8,
    FpI = 9,
    FpFA = 10,
};

/**
 * Enumeration for VIRTUAL_CONTROL_DOME_LIGHT_REQUEST
 */
enum class VirtualControlDomeLightRequest : int32_t {
    No_Action = 0,
    On = 1,
    Off = 2,
};

/**
 * Enumeration for REMOTE_PROGRAMMING_SCHEDULED_UPDATE
 */
enum class RPSU_Sts : int32_t {
    Unknown = 0,
    Inactive = 1,
    Scheduled = 2,
};

/**
 * Enumeration for REMOTE_PROGRAMMING_SCHEDULED_UPDATE
 */
enum class RPSU_Mth : int32_t {
    Unknown = 0,
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12,
};

/**
 * Enumeration for ODI_EVENT
 */
enum class ODIEvent : int32_t {
    FUClassID = 0,
    EventID = 1,
};

/**
 * Enumeration for ODI_DYNDATA
 */
enum class ODIDynData : int32_t {
    FUClassID = 0,
    DataID = 1,
    Value = 2,
    DataType = 3,
    Valid = 4,
};

/**
 * Enumeration for ODI_INDICATIONS
 */
enum class ODIIndication : int32_t {
    FUClassID = 0,
    IndIdStart = 1,
};

/**
 * Enumeration for ODI_ACTION
 */
enum class ODIAction : int32_t {
    FUClassID = 0,
    ActionID = 1,
    Value = 2,
    DataType = 3,
};

/**
 * Enumeration for ODI_SUBSCRIBE
 */
enum class ODISubscribe : int32_t {
    FUClassID = 0,
    DynIdStart = 1,
};

/**
 * Enumeration for ODI Data type
 */
enum class ODIDataType : int32_t {
    OdiSpeed = 0,
    OdiString = 1,
    OdiInteger = 2,
    OdiEnumerationValue = 3,
    OdiDecimal = 4,
    OdiTime = 5,
    OdiDate = 6,
    OdiListDataType = 7,
    OdiPictogram = 8,
    OdiTextId = 9,
    OdiBitmapId = 10,
    OdiDistanceLong = 11,
    OdiDistanceShort = 12,
    OdiVolume = 13,
    OdiTemperature = 14,
    OdiPressure = 15,
    OdiFuelConsumption = 16,
    OdiFuelConsumptionInverted = 17,
    OdiCharacter = 18,
    OdiHoursOfDay = 19,
    OdiDecimalShort = 20,
    OdiBitmap = 21,
    OdiFuelConsumptionStandStill = 22,
    OdiFuelConsumptionCng = 23,
    OdiFuelConsumptionCngInverted = 24,
    OdiFuelConsumptionCngStandingStill = 25,
    OdiFuelUsedCng = 26,
};
