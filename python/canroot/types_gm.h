#ifndef HIDL_GENERATED_VENDOR_GM_VEHICLE_V1_0_TYPES_H
#define HIDL_GENERATED_VENDOR_GM_VEHICLE_V1_0_TYPES_H

#include <android/hardware/automotive/vehicle/2.0/types.h>

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace vendor {
namespace gm {
namespace vehicle {
namespace V1_0 {

// Forward declaration for forward reference support:
enum class VendorProperty : int32_t;
enum class AdaptiveLightingResponseTypeCustomization : int32_t;
enum class AdasisNavilinkBuildUpFlag : int32_t;
enum class AdasisNavilinkControlledAccessRoad : int32_t;
enum class AdasisNavilinkCountryCode : int32_t;
enum class AdasisNavilinkDigitalMapConditionalSpeedLimit : int32_t;
enum class AdasisNavilinkDigitalMapConditionalSpeedLimitType : int32_t;
enum class AdasisNavilinkDigitalMapDrivingSide : int32_t;
enum class AdasisNavilinkDigitalMapEffectiveSpeedLimit : int32_t;
enum class AdasisNavilinkDigitalMapEffectiveSpeedLimitType : int32_t;
enum class AdasisNavilinkDigitalMapPassingRestriction : int32_t;
enum class AdasisNavilinkDigitalMapPostedSpeedLimitAssured : int32_t;
enum class AdasisNavilinkDigitalMapSpeedCategory : int32_t;
enum class AdasisNavilinkDigitalMapVersionQuarter : int32_t;
enum class AdasisNavilinkDigitalMapVersionYear : int32_t;
enum class AdasisNavilinkFunctionalRoadClass : int32_t;
enum class AdasisNavilinkLaneCategory : int32_t;
enum class AdasisNavilinkMapDataAvailability : int32_t;
enum class AdasisNavilinkSeparatedLaneRoad : int32_t;
enum class AdasisNavilinkSpeedLimitUnit : int32_t;
enum class AdvancedParkAssistCrossBackInSoftButtonStatus : int32_t;
enum class AdvancedParkAssistExitParkSoftButtonRequest : int32_t;
enum class AdvancedParkAssistExitParkSoftButtonStatus : int32_t;
enum class AdvancedParkAssistFocusStatusCsm : int32_t;
enum class AdvancedParkAssistLeftSoftButtonStatus : int32_t;
enum class AdvancedParkAssistParallelParkingSoftButtonStatus : int32_t;
enum class AdvancedParkAssistRightSoftButtonStatus : int32_t;
enum class AdvancedParkAssistSearchingSoftButtonStatus : int32_t;
enum class AdvancedParkAssistSoftButtonSelectedStateRaw : int32_t;
enum class AdvancedParkAssistWarningIndicationsAdvancedParkAssistFocusRequest : int32_t;
enum class AdvancedParkAssistWarningIndicationsAdvancedParkAssistWarningIndicationRequest : int32_t;
enum class AirQualitySensorCustomization : int32_t;
enum class AmplifierCallAudioPlaybackStateOfHealth : int32_t;
enum class AutomaticAirDistributionCustomization : int32_t;
enum class AutomaticCooledSeatCustomization : int32_t;
enum class AutomaticDefogCustomization : int32_t;
enum class AutomaticDriveLockingCustomization : int32_t;
enum class AutomaticFanCustomization : int32_t;
enum class AutomaticHeatedSeatCustomization : int32_t;
enum class AutomaticLaneChangeCustomization : int32_t;
enum class AutomaticTransparentHoodActivationCustomization : int32_t;
enum class AutomaticUnlockingCustomization : int32_t;
enum class AutoMemoryRecallCustomization : int32_t;
enum class AutoMirrorFoldCustomization : int32_t;
enum class AutoRearWipeCustomization : int32_t;
enum class Auxiliary1AmbientAnimationControlCustomization : int32_t;
enum class Auxiliary1AmbientBrightnessControlCustomization : int32_t;
enum class Auxiliary1AmbientColorControlCustomization : int32_t;
enum class BatteryVoltageIndicationRequest : int32_t;
enum class BicycleDetectionCustomization : int32_t;
enum class BrakePadLifeStatusInformationBrakePadLifeFrontDistanceWarningIndicationRequest : int32_t;
enum class BrakePadLifeStatusInformationBrakePadLifeRearDistanceWarningIndicationRequest : int32_t;
enum class BrakePadLifeStatusInformationBrakePadLifeStatusIndicationRequest : int32_t;
enum class CargoBedViewAutoLightingCustomization : int32_t;
enum class ChargerSystemAudibleIndicationCustomizationCurrentSettingValue : int32_t;
enum class ChargeCordTheftAlertCustomizationCurrentSettingValue : int32_t;
enum class ChargeCordTheftAlertCustomizationSettingRequest : int32_t;
enum class ChargePortDoorIndicationRequest : int32_t;
enum class ChargePowerLossAlertCustomizationCurrentSettingValue : int32_t;
enum class ChargePowerLossAlertCustomizationSettingRequest : int32_t;
enum class ChargeSystemAudibleIndicationCustomizationSettingRequest : int32_t;
enum class ChargingDataRequest : int32_t;
enum class CompassDeclinationZone : int32_t;
enum class CompassModuleFaultPresent : int32_t;
enum class CompassOctantHeading : int32_t;
enum class CurbViewFeatureActiveRequest : int32_t;
enum class CustomModeActiveAeroCustomization : int32_t;
enum class CustomModeBrakePedalCustomization : int32_t;
enum class CustomModeDrivelineCustomization : int32_t;
enum class CustomModeElectricVehiclePedalMapCustomization : int32_t;
enum class CustomModeEnergyRegenerationCustomization : int32_t;
enum class CustomModePowertrainCustomization : int32_t;
enum class CustomModeRideHeightCustomization : int32_t;
enum class CustomModeSoundCustomization : int32_t;
enum class CustomModeSteeringCustomization : int32_t;
enum class CustomModeSuspensionCustomization : int32_t;
enum class CustomModeTractionStabilityCustomization : int32_t;
enum class DaytimeTailLightsCustomization : int32_t;
enum class DriverAlertTypeCustomization : int32_t;
enum class DriverSeatBeltStatus : int32_t;
enum class DriverSeatMemoryIdentifier : int32_t;
enum class DriverSelectedTrailerPresent : int32_t;
enum class DriveModeConfirmationIndicationRequest : int32_t;
enum class DrivingModeVisualizationScreenStatus : int32_t;
enum class EasyExitCustomization : int32_t;
enum class ElectricParkBrakeApplicationStatus : int32_t;
enum class ElectricParkBrakeSystemStatusIndicationRequest : int32_t;
enum class ElevatedIdleCustomizationChangeSettingRequest : int32_t;
enum class ElevatedIdleCustomizationCurrentSettingValue : int32_t;
enum class EnergyEconomyMeasurementUnit : int32_t;
enum class EngineAirFilterMonitorDriverRequest : int32_t;
enum class EngineAirFilterMonitorStatus : int32_t;
enum class EngineSpeedState : int32_t;
enum class ExitLightingCustomization : int32_t;
enum class ExtendedHillStartAssistCustomization : int32_t;
enum class ForwardImpactMitigationOperationSelectCustomization : int32_t;
enum class ForwardVehicleImminentAlertIndicationRequest : int32_t;
enum class FrontCenterStackLowVolumeModuleVideoInputLocked : int32_t;
enum class FrontCenterStackPrimaryVideoInputLocked : int32_t;
enum class FrontCenterStackVideoInputSelect : int32_t;
enum class FrontPassengerSeatBeltReminderOccupancyStatus : int32_t;
enum class FrontPassengerSeatBeltStatus : int32_t;
enum class FrontPcmResponseTypeCustomization : int32_t;
enum class FrontRideHeightGpsCustomization : int32_t;
enum class GlareFreeHighBeamResponseTypeCustomization : int32_t;
enum class GoNotifierCustomization : int32_t;
enum class HandsFreeRearClosureCustomization : int32_t;
enum class HighVoltageBatteryChargeCompleteDayOfWeek : int32_t;
enum class HighVoltageBatteryChargeCompleteTimeDisplayFormat : int32_t;
enum class HighVoltageBatteryChargeCompleteTimeDisplayPowerLevel : int32_t;
enum class HighVoltageBatteryLimitationDueToTemperatureIndication : int32_t;
enum class HighVoltageBatteryPreconditioningStatus : int32_t;
enum class HighVoltageChargerSystemStatus : int32_t;
enum class HighVoltageChargeAbortReason : int32_t;
enum class HighVoltageChargeInhibitReason : int32_t;
enum class HighVoltageChargeLimitedReason : int32_t;
enum class HighVoltageDcFastChargeSoonRequest : int32_t;
enum class IndicationHeaterSetting : int32_t;
enum class IndicationTemperatureUnits : int32_t;
enum class InteriorAmbientAnimationControlCustomization : int32_t;
enum class InteriorAmbientBrightnessControlCustomization : int32_t;
enum class InteriorAmbientColorControlCustomization : int32_t;
enum class InvisibleTrailerAux1CameraConnectionStatus : int32_t;
enum class InvisibleTrailerAux2CameraConnectionStatus : int32_t;
enum class InvisibleTrailerOperationalStatus : int32_t;
enum class IonizerControlCustomization : int32_t;
enum class JackKnifeDetectionCustomization : int32_t;
enum class LaneCenteringControlIndicationRequest : int32_t;
enum class LaneCenteringConvenienceMessageIndicationRequest : int32_t;
enum class LaneCenteringSpeechPromptRequest : int32_t;
enum class LaneChangeAlertCustomization : int32_t;
enum class LaneDetectionWarningAndControlVisualAlertCommandGeneric : int32_t;
enum class LanguageSelectionExtended : int32_t;
enum class LastDoorClosedLockingCustomization : int32_t;
enum class LeftRightHandTrafficCustomization : int32_t;
enum class LevelingSystemAlignmentModeCustomization : int32_t;
enum class LevelingSystemEntryEgressModeCustomization : int32_t;
enum class LevelingSystemServiceModeCustomization : int32_t;
enum class LocationBasedChargingCustomizationCurrentSettingValue : int32_t;
enum class LocationBasedChargingCustomizationSettingRequest : int32_t;
enum class LocationBasedChargingPositionModificationRequest : int32_t;
enum class LowVolumeModuleAudioVideoRequestApplicationState : int32_t;
enum class OffRoadModeElectricVehiclePedalMapVisualizationDisplayValue : int32_t;
enum class OnePedalDrivingCurrentSelectionValue : int32_t;
enum class OnePedalDrivingCustomization : int32_t;
enum class OpenDoorAntiLockOutCustomization : int32_t;
enum class OverrideNextPlannedChargeDepartureDayOfWeekRequest : int32_t;
enum class OverrideNextPlannedChargeRequest : int32_t;
enum class ParkAssistOnOffCustomization : int32_t;
enum class ParkAssistSoftButtonSelectedStateRaw : int32_t;
enum class ParkAssistTrailerHitchPresentCustomization : int32_t;
enum class PassiveUnlockingCustomization : int32_t;
enum class PedestrianFriendlyAlertSoundSelectionCustomization : int32_t;
enum class PerformanceModeMainMenuType : int32_t;
enum class PersonalModeActiveAeroCustomization : int32_t;
enum class PersonalModeBrakePedalCustomization : int32_t;
enum class PersonalModeDrivelineCustomization : int32_t;
enum class PersonalModeElectricVehiclePedalMapCustomization : int32_t;
enum class PersonalModeEnergyRegenerationCustomization : int32_t;
enum class PersonalModeRideHeightCustomization : int32_t;
enum class PersonalModeSoundCustomization : int32_t;
enum class PersonalModeSteeringCustomization : int32_t;
enum class PersonalModeSuspensionCustomization : int32_t;
enum class PhoneLeftInVehicleCustomization : int32_t;
enum class PlugAndChargeEnabledStatus : int32_t;
enum class PlugAndChargeEnableRequest : int32_t;
enum class PlugAndChargeStatusDisplay : int32_t;
enum class PollutionControlCustomization : int32_t;
enum class PowerFrontStorageCompartmentClosureCustomization : int32_t;
enum class PowerRearClosureCustomization : int32_t;
enum class PowerTakeOffEngineRunTimerCustomization : int32_t;
enum class PowerTakeOffEngineSpeedTypeCustomization : int32_t;
enum class PowerTakeOffModeCustomization : int32_t;
enum class PowerTakeOffSet1SpeedCustomization : int32_t;
enum class PowerTakeOffSet2SpeedCustomization : int32_t;
enum class PowerTakeOffStandbySpeedCustomization : int32_t;
enum class PowerTakeOffTapStepSpeedCustomization : int32_t;
enum class RainSenseCustomization : int32_t;
enum class RearCrossTrafficAlertCustomization : int32_t;
enum class RearDefogStartupCustomization : int32_t;
enum class RearPcmResponseTypeCustomization : int32_t;
enum class RearSeatReminderEnableDisableCustomization : int32_t;
enum class RearSteeringModeDisplayIndicationRequest : int32_t;
enum class RearViewParkAssistSymbolCustomization : int32_t;
enum class RearZoneStartupCustomization : int32_t;
enum class RelockRemoteUnlockedDoorCustomization : int32_t;
enum class RemoteInVehicleReminderCustomization : int32_t;
enum class RemoteLeftVehicleReminderCustomization : int32_t;
enum class RemoteLockingFeedbackCustomization : int32_t;
enum class RemoteStartCooledSeatCustomization : int32_t;
enum class RemoteStartHeatedSeatCustomization : int32_t;
enum class RemoteSunroofOperationCustomization : int32_t;
enum class RemoteUnlockLightingFeedbackCustomization : int32_t;
enum class RemoteWindowOperationCustomization : int32_t;
enum class ReverseTiltMirrorCustomization : int32_t;
enum class RideHeightActivationIndicationRequest : int32_t;
enum class RideHeightMovementIndicationRequest : int32_t;
enum class RideHeightStateIndicationRequest : int32_t;
enum class RideHeightWarning1IndicationRequest : int32_t;
enum class RideHeightWarning2IndicationRequest : int32_t;
enum class RunningBoardsAutomaticDeploymentCustomization : int32_t;
enum class RunningBoardsManualDeploymentCustomization : int32_t;
enum class SeatBeltShiftInterlockCustomization : int32_t;
enum class SeatBeltTighteningCustomization : int32_t;
enum class SelectiveUnlockingCustomization : int32_t;
enum class SideBlindZoneAlertCustomization : int32_t;
enum class SportModeActiveAerodynamicsVisualizationDisplayValue : int32_t;
enum class SportModeBrakePedalVisualizationDisplayValue : int32_t;
enum class SportModeElectricVehiclePedalMapVisualizationDisplayValue : int32_t;
enum class SportModeEscVisualizationDisplayValue : int32_t;
enum class SportModePowertrainVisualizationDisplayValue : int32_t;
enum class SportModeSoundVisualizationDisplayValue : int32_t;
enum class SportModeSteeringVisualizationDisplayValue : int32_t;
enum class SportModeSuspensionVisualizationDisplayValue : int32_t;
enum class SteeringWheelAngleCalibrationStatus : int32_t;
enum class SurroundViewLightingCustomization : int32_t;
enum class TeenDriverOverspeedWarningCustomization : int32_t;
enum class TeenDriverResponse : int32_t;
enum class TeenDriverSeatBeltShiftInterlockCustomization : int32_t;
enum class TeenDriverSpeedLimitCustomization : int32_t;
enum class TelematicsAudioRequestAudioConnectionRequest : int32_t;
enum class TelematicsAudioRequestAudioSourceStatus : int32_t;
enum class TerrainModeElectricVehiclePedalMapVisualizationDisplayValue : int32_t;
enum class TimeDisplayFormat : int32_t;
enum class TimeOfDayChargingNextPlannedCharge : int32_t;
enum class TimeOfDayChargingNextPlannedDepartureDayOfWeek : int32_t;
enum class TimeOfDayChargingNextPlannedPortableChargeCordLimitCustomizationCurrentSettingValue : int32_t;
enum class TimeOfDayChargingSettingRequestPortableChargeCordLimitCustomizationSettingRequest : int32_t;
enum class TireLeakDetectionEnableStatus : int32_t;
enum class TireLeakDetectionUserRequest : int32_t;
enum class TirePressureMonitoringTireLoadingStatus : int32_t;
enum class TourModeActiveAerodynamicsVisualizationDisplayValue : int32_t;
enum class TourModeBrakePedalVisualizationDisplayValue : int32_t;
enum class TourModeElectricVehiclePedalMapVisualizationDisplayValue : int32_t;
enum class TourModeEscVisualizationDisplayValue : int32_t;
enum class TourModePowertrainVisualizationDisplayValue : int32_t;
enum class TourModeSoundVisualizationDisplayValue : int32_t;
enum class TourModeSteeringVisualizationDisplayValue : int32_t;
enum class TourModeSuspensionVisualizationDisplayValue : int32_t;
enum class TpmsStatusLf : int32_t;
enum class TpmsStatusLr : int32_t;
enum class TpmsStatusRf : int32_t;
enum class TpmsStatusRr : int32_t;
enum class TrackModeActiveAerodynamicsVisualizationDisplayValue : int32_t;
enum class TrackModeBrakePedalVisualizationDisplayValue : int32_t;
enum class TrackModeElectricVehiclePedalMapVisualizationDisplayValue : int32_t;
enum class TrackModeEscVisualizationDisplayValue : int32_t;
enum class TrackModePowertrainVisualizationDisplayValue : int32_t;
enum class TrackModeSoundVisualizationDisplayValue : int32_t;
enum class TrackModeSteeringVisualizationDisplayValue : int32_t;
enum class TrackModeSuspensionVisualizationDisplayValue : int32_t;
enum class TrafficLightAssistCustomization : int32_t;
enum class TraileringMirrorVideoEnableCustomization : int32_t;
enum class TraileringMirrorVideoGuidelinesCustomization : int32_t;
enum class TrailerArticulationAngleCalibrationStatus : int32_t;
enum class TrailerAxleCount : int32_t;
enum class TrailerBrakingSystemProfileStatus : int32_t;
enum class TrailerConnectionStatus : int32_t;
enum class TrailerHitchType : int32_t;
enum class TrailerProfileDeletion : int32_t;
enum class TrailerProfileDriverRequestedSelection : int32_t;
enum class TrailerProfileSelectionResponse : int32_t;
enum class TrailerStateTowHaulModeOverride : int32_t;
enum class TrailerTireLearnStatus : int32_t;
enum class TrailerTireLeftFrontPressureStatus : int32_t;
enum class TrailerTireLeftMiddlePressureStatus : int32_t;
enum class TrailerTireLeftRearPressureStatus : int32_t;
enum class TrailerTireRightFrontPressureStatus : int32_t;
enum class TrailerTireRightMiddlePressureStatus : int32_t;
enum class TrailerTireRightRearPressureStatus : int32_t;
enum class TrailerType : int32_t;
enum class TransmissionShiftLeverPosition : int32_t;
enum class VehicleLocationStatus : int32_t;
enum class VehicleLocatorLightsCustomization : int32_t;
enum class VehicleMassEstimateStatus : int32_t;
enum class VehicleMotionMovementState : int32_t;
enum class VehicleStabilityEnhancementCurrentState : int32_t;
enum class VirtualControlAccessoryCircuitControlAvailable : int32_t;
enum class VirtualControlDomeLightStatusDomeDefeatAvailable : int32_t;
enum class VirtualControlDomeLightStatusDomeDefeatCurrentSelectionValue : int32_t;
enum class VirtualControlDomeLightStatusDomeLightAvailable : int32_t;
enum class VirtualControlDomeLightStatusDomeLightCurrentSelectionValue : int32_t;
enum class VirtualControlDriveModeRequest : int32_t;
enum class VirtualOnePedalDrivingControlAvailable : int32_t;
enum class VirtualOnePedalDrivingRequest : int32_t;
enum class VirtualOnePedalDrivingUserControlAllowed : int32_t;
enum class WalkAwayLockingCustomization : int32_t;
enum class WeatherModeElectricVehiclePedalMapVisualizationDisplayValue : int32_t;
enum class WeatherSnowModeActiveAerodynamicsVisualizationDisplayValue : int32_t;
enum class WeatherSnowModeBrakePedalVisualizationDisplayValue : int32_t;
enum class WeatherSnowModeEscVisualizationDisplayValue : int32_t;
enum class WeatherSnowModePowertrainVisualizationDisplayValue : int32_t;
enum class WeatherSnowModeSoundVisualizationDisplayValue : int32_t;
enum class WeatherSnowModeSteeringVisualizationDisplayValue : int32_t;
enum class WeatherSnowModeSuspensionVisualizationDisplayValue : int32_t;
enum class WirelessChargingSystemChargingStatus : int32_t;
enum class AmplifierSettingsSinkLevelControlIndex : int32_t;
enum class AmplifierSettingsToneControlIndex : int32_t;
enum class ASTC_ChimSnkSpkrPos : int32_t;
enum class ASTC_DSPMd : int32_t;
enum class DateAndTimeIndex : int32_t;
enum class TelematicsAudioControlIndex : int32_t;
enum class TAC_AudChConctStat : int32_t;
enum class TAC_AudConctOutcm : int32_t;
enum class SeatControlDisplayStatusBackandCushionBolsterInOut : int32_t;
enum class SeatControlDisplayStatusBackBolsterInOut : int32_t;
enum class SeatControlDisplayStatusCushionBolsterInOut : int32_t;
enum class SeatControlDisplayStatusCushionLengthAdjustmentForwardRearward : int32_t;
enum class SeatControlDisplayStatusHeadrestForwardRearward : int32_t;
enum class SeatControlDisplayStatusHeadrestForwardRearwardandUpDown : int32_t;
enum class SeatControlDisplayStatusHeadrestTiltForwardRearward : int32_t;
enum class SeatControlDisplayStatusHeadrestUpDown : int32_t;
enum class SeatControlDisplayStatusHeadrestWingsInOut : int32_t;
enum class SeatControlDisplayStatusLumbarForwardRearward : int32_t;
enum class SeatControlDisplayStatusLumbarUpDown : int32_t;
enum class SeatControlDisplayStatusLumbarUpDownandForwardRearward : int32_t;
enum class SeatControlDisplayStatusMassage : int32_t;
enum class SeatControlDisplayStatusMassageIntensity : int32_t;
enum class SeatControlDisplayStatusMassageType : int32_t;
enum class SeatControlDisplayStatusUpperShoulderForwardRearward : int32_t;
enum class IAQI_IntrAirQltyGasStat : int32_t;
enum class IAQI_IntrAirQltyOvrallStat : int32_t;
enum class IAQI_IntrAirQltyPrtclteStat : int32_t;
enum class LowVolModAudVidCmdIndex : int32_t;
enum class LVMAVC_ApplID : int32_t;
enum class LVMAVC_RmtSpchRcgnActn : int32_t;
enum class LVMAVC_PrmtAudResp : int32_t;
enum class LVMAVC_RmtSpchRcgnID : int32_t;
enum class LVMAVC_SpchRcgnAval : int32_t;
enum class LVMAVC_RmtEnbl : int32_t;
enum class LVMAVC_StreoAudResp : int32_t;
enum class IonizerState : int32_t;
enum class TelematicsLicenseComplianceMaterialDataMessageStatus : int32_t;
enum class TelematicsLicenseComplianceMaterialFileTransfer : int32_t;
enum class WirelessChargerModuleLicenseComplianceMaterialDataMessageStatus : int32_t;
enum class WirelessChargerModuleLicenseComplianceMaterialFileTransfer : int32_t;
enum class Lane_detection_warning_and_control_audio_attenuation_requested_availability_indication_sum : int32_t;
enum class Front_pedestrian_collision_mitigation_audio_attenuation_requested_availability_indication_sum : int32_t;
enum class Forward_collision_alert_imminent_alert_audio_attenuation_requested_availability_indication_sum : int32_t;
enum class TrailerLightingSequenceRequest : int32_t;
enum class TrailerLightingSequenceStatus : int32_t;
enum class HwInputDeviceIndex : int32_t;
enum class ForceNightMode : int32_t;
enum class HWButtonCode : int32_t;
enum class HVBCC_DyOfWk : int32_t;
enum class HVBCC_TmDispFormat : int32_t;
enum class HVBCC_TmDispPwrLvl : int32_t;
enum class TODCNP_Chrg : int32_t;
enum class TODCNP_DprtrDyOfWk : int32_t;
enum class TODCNP_PCCLCstCurrSetVal : int32_t;
enum class TLDWCI_Sts : int32_t;
enum class FTLDI_LFSts : int32_t;
enum class FTLDI_RFSts : int32_t;
enum class RTLDI_LRSts : int32_t;
enum class RTLDI_RRSts : int32_t;
enum class VirtualControlAccessoryCircuit1CurrentSelectionValue : int32_t;
enum class VirtualControlAccessoryCircuit2CurrentSelectionValue : int32_t;
enum class VirtualControlAccessoryCircuit3CurrentSelectionValue : int32_t;
enum class VirtualControlAccessoryCircuit4CurrentSelectionValue : int32_t;
enum class VirtualControlAccessoryCircuit5CurrentSelectionValue : int32_t;
enum class VirtualControlAccessoryCircuit6CurrentSelectionValue : int32_t;
enum class VirtualControlAccessoryCircuit1Request : int32_t;
enum class VirtualControlAccessoryCircuit2Request : int32_t;
enum class VirtualControlAccessoryCircuit3Request : int32_t;
enum class VirtualControlAccessoryCircuit4Request : int32_t;
enum class VirtualControlAccessoryCircuit5Request : int32_t;
enum class VirtualControlAccessoryCircuit6Request : int32_t;
enum class TODCSR_LocNumReq : int32_t;
enum class TODCSR_ChrgSchedDyOfWkReq : int32_t;
enum class TODCCbnPrcndtngSetReq : int32_t;
enum class TODCSR_ERSPrdDyReq : int32_t;
enum class TODCSR_ERSPrdLvlReq : int32_t;
enum class TODCSR_ERSCstSetReq : int32_t;
enum class TODCSR_LocChrgPwrLvlReq : int32_t;
enum class TODCSR_ChrgSchedCstSetReq : int32_t;
enum class PrtblChrgCordLimCstSetReq : int32_t;
enum class TODCSR_LocNumResp : int32_t;
enum class TODCSR_ChrgSchedDyOfWkResp : int32_t;
enum class TODCCbnPrcndtngSetResp : int32_t;
enum class TODCSR_ERSPrdDyResp : int32_t;
enum class TODCSR_ERSPrdLvlResp : int32_t;
enum class TODCSR_ERSCstSetVal : int32_t;
enum class TODCSR_LocChrgPwrLvlResp : int32_t;
enum class TODCSR_ChrgSchedCstSetVal : int32_t;
enum class PrtblChrgCordLimCstSetResp : int32_t;
enum class OvrrdNextPlndCbnPrcndtngReq : int32_t;
enum class DriveModeName : int32_t;
enum class LBCCDRR_ClrStrdPstnResp : int32_t;
enum class LBCCDRR_PstnNumResp : int32_t;
enum class LBCPSS_PstnUpdtLoc : int32_t;
enum class LBCPSS_PstnUpdtSts : int32_t;
enum class TimeOfDayChargingNextPlannedCabinPreconditioningSettingResponse : int32_t;
enum class RideHeightSelectionNameValues : int32_t;
enum class PnCActnReqCertfctOpAuth : int32_t;
enum class PnCActionCertificateType : int32_t;
enum class PnCActnReqCertfctTypAuth : int32_t;
enum class PnCActionStatusCertificateOperationStatus : int32_t;
enum class TirePressureStatus : int32_t;
enum class AvailabilityIndicationSum : int32_t;
enum class LBCCDRR_ClrStrdPstnReq : int32_t;
enum class LBCCDRR_PstnNumReq : int32_t;
enum class DriveCycleElectricalEnergyPercentIndex : int32_t;
enum class PrimaryPrecisePosition_Index : int32_t;
enum class PrimaryPrecisePosition_GPSMode : int32_t;
enum class PrimaryPrecisePosition_InvMask : int32_t;
enum class GNSSSpcVehInfo_Index : int32_t;
enum class GNSSSpcVehInfo_SatConstellation : int32_t;
enum class GNSSSpcVehInfo_DuDInvMask : int32_t;
enum class NextChargingDestinationCoordinatesIndex : int32_t;
enum class NextChargingDestinationInformation1Index : int32_t;
enum class NavigationRouteInformation1Index : int32_t;
enum class NavigationRouteInformation2Index : int32_t;
enum class NavigationRouteInformation3Index : int32_t;
enum class DisplayUnits : int32_t;
enum class SumPropertyIndex : int32_t;
enum class VirtualControlDomeLightRequest : int32_t;

enum class VendorProperty : int32_t {
    /**
     * Vehicle identification number
     *
     * This is added as a vendor property because we don't implement
     * the AOSP INFO_VIN property due to privacy concerns.
     *
     * This property collects the 3 VIN signals
     *    VehIdNmDig1, VehIdNmDig2_9 and VehIdNmDig10_17.
     * When all 3 have been received the property value is set and the
     * status changes to AVAILABLE.
     * After that the VIN signals are ignored and the property value
     * won't change until the next reboot.
     *
     * @change_mode VehiclePropertyChangeMode:STATIC
     * @access VehiclePropertyAccess:READ
     */
    INFO_VIN = 554696960 /* (((0x0100 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:STRING) | VehicleArea:GLOBAL) */,
    /**
     * Outside air temperature display value
     *
     * This is the outside temperature that should be shown to the user.
     * It does not have units and changes depending on what units are selected.
     * It depends on the OATP_OtsAirTmpCrValAuth and DispMeasSysExtnd signals.
     * As a side effect, the HAL sends out the OATDispdVal and OATDispdVal_DuD
     * signals so the same temperature can be shown on the cluster.
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    OUTSIDE_AIR_TEMPERATURE_DISPLAYED = 557842689 /* (((0x0101 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Drive Mode Status
     *
     * (DM1Status,DM2Status,DM3Status,DM4Status,DM5Status,DM6Status,DM7Status,DM8Status)
     * an 8 items hidl_vec<int32_t> drive mode status will be returned
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_MODE_STATUS = 557908226 /* (((0x0102 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Light Failed
     *
     * (TrlLfTrInLtFld,TrlrRtTrInLtFld,TrlrTlLtFld)
     * a 3 items hidl_vec<int32_t> trailer light failed indication will be returned
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_LIGHT_FAILED = 557908227 /* (((0x0103 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Invisible Trailer Aux 1 Camera Placement Feedback
     *
     * (InvsblTrlrAux1CamPlcmtFdbkX,InvsblTrlrAux1CamPlcmtFdbkY,InvsblTrlrAux1CamPlcmtFdbkRoll,InvsblTrlrAux1CamPlcmtFdbkPtch)
     * a 4 items hidl_vec<float> camera placement feedback will be returned
     *
     * @change_mode VehiclePropertyChangeModeu:CONTINUOUS
     * @access VehiclePropertyAccess:READ
     */
    INVISIBLE_TRAILER_AUX_1_CAMERA_PLACEMENT_FEEDBACK = 560005380 /* (((0x0104 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Barometric Pressure Absolute (BarPrsAbs)
     *
     * VehicleUnit: kPa
     * Max Rate: 10
     * Min Rate: 1
     *
     * @change_mode VehiclePropertyChangeMode:CONTINUOUS
     * @access VehiclePropertyAccess:READ
     */
    BAROMETRIC_PRESSURE_ABSOLUTE = 559939845 /* (((0x0105 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Amplifier Settings Tone Control
     *
     * write a 12 items int32_vec for following signals respectively:
     *  ASTC_MtxSnkRmpTm    : INT32
     *  ASTC_MtxSnkMut      : BOOL
     *  ASTC_ChimSnkSpkrPos : ENUM, refer to ASTC_ChimSnkSpkrPos for details
     *  ASTC_SurndLvl       : INT32
     *  ASTC_AmpLwPwrSt     : BOOL
     *  ASTC_DSPMd          : ENUM, refer to ASTC_DSPMd for details
     *  ASTC_LRTctlLvl      : INT32
     *  ASTC_VehNoisCmpnAct : BOOL
     *  ASTC_RRTctlLvl      : INT32
     *  ASTC_DrvrFrtTctlLvl : INT32
     *  ASTC_GblAudSnkMut   : BOOL
     *  ASTC_PsngrFrtTctlLvl: INT32
     * and write a float item for signal:
     *  ASTC_ChimSnkLvl     : FLOAT
     *
     * refer to AmplifierSettingsToneControlIndex for indexing
     *
     * @change_mode VehiclePropertyChangeModeu:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    AMPLIFIER_SETTINGS_TONE_CONTROL = 568328454 /* (((0x0106 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:MIXED) | VehicleArea:GLOBAL) */,
    /**
     * Amplifier Settings Sink Level Control
     *
     * Write a 7 items int32_vec for following signals respectively:
     *  ASSLC_MtxSnkTrbl      : INT32
     *  ASSLC_AutoLdnsCmpnAct : BOOL
     *  ASSLC_MtxSnkBal       : INT32
     *  ASSLC_MtxSnkFd        : INT32
     *  ASSLC_VcSrcActOnMtx   : BOOL
     *  ASSLC_MtxSnkBass      : INT32
     *  ASSLC_MtxSnkMdrng     : INT32
     * and write 4 items float_vec for following signals recpectively:
     *  ASSLC_AudFdbkSnkLvl   : FLOAT
     *  ASSLC_FvSnkLvl        : FLOAT
     *  ASSLC_MtxSnkLvl       : FLOAT
     *  ASSLC_MxPrmtSnkLvl    : FLOAT
     *
     * refer to AmplifierSettingsSinkLevelControlIndex for indexing
     *
     * @change_mode VehiclePropertyChangeModeu:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    AMPLIFIER_SETTINGS_SINK_LEVEL_CONTROL = 568328455 /* (((0x0107 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:MIXED) | VehicleArea:GLOBAL) */,
    /**
     * Amplifier Sink State Dsp Mode Present
     *
     * Read a 8 items int32_vec for following signals respectively:
     * (ASS_DSPMd0Prsnt,ASS_DSPMd1Prsnt,ASS_DSPMd2Prsnt,ASS_DSPMd3Prsnt,
     * ASS_DSPMd4Prsnt,ASS_DSPMd5Prsnt,ASS_DSPMd6Prsnt,ASS_DSPMd7Prsnt)
     *
     * @change_mode VehiclePropertyChangeModeu:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    AMPLIFIER_SINK_STATE_DSP_MODE_PRESENT = 557908232 /* (((0x0108 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Local Time
     *
     * LOCAL_TIME and UTC have the current date and time as a vector
     * in the int32Values field.
     *
     *     0 = year (2000-2255)
     *     1 = month (1-12)
     *     2 = day (1-31)
     *     3 = hours (0-23)
     *     4 = minutes (0-59)
     *     5 = seconds (0-59)
     *
     * See the DateAndTimeIndex enum.
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LOCAL_TIME = 557908233 /* (((0x0109 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Coordinated Universal Time (UTC)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    UTC = 557908234 /* (((0x010A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Time Sync Message (TmSyncMsg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIME_SYNC_MESSAGE = 558891275 /* (((0x010B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT64) | VehicleArea:GLOBAL) */,
    /**
     * Telematics Audio Control
     *
     * Write a 2 items int32_vec for following signals respectively:
     *  int32Values[0] = Audio Channel Connection State     TAC_AudChConctStat
     *  int32Values[1] = Audio Connection Outcome           TAC_AudConctOutcm
     *
     * refer to TelematicsAudioControlIndex for indexing
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TELEMATICS_AUDIO_CONTROL = 557908236 /* (((0x010C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * GPS Position (GPSC_PPSLat, GPSC_PPSLong)
     *
     * write 2 items to int32_vec for following signals respectively:
     *  GPSC_PPSLat    : INT32
     *  GPSC_PPSLong   : INT32
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    GPS_POSITION = 557908237 /* (((0x010D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * GPS Quality (GPSQM_PPS2DAbsPstnErrEst, GPSQM_PPS3DAbsPstnErrEst,
     * GPSQM_PPSAbsHdgErrEst, GPSQM_PPSAbsVelErrEst, GPSQM_PPSMode,
     * GPSQM_PPSPstnDilutnPrcsn)
     *
     * write 6 items to float_vec for following signals respectively:
     *  GPSQM_PPS2DAbsPstnErrEst   : FLOAT
     *  GPSQM_PPS3DAbsPstnErrEst   : FLOAT
     *  GPSQM_PPSAbsHdgErrEst      : FLOAT
     *  GPSQM_PPSAbsVelErrEst      : FLOAT
     *  GPSQM_PPSMode              : FLOAT
     *  GPSQM_PPSPstnDilutnPrcsn   : FLOAT
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    GPS_QUALITY = 560005390 /* (((0x010E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     * GPS Time (GPST_PPSCldrDy, GPST_PPSCldrYr, GPST_PPSTmOfDy)
     *
     * write 3 items to int32_vec for following signals respectively:
     *  GPST_PPSCldrDy   : INT32
     *  GPST_PPSCldrYr   : INT32
     *  GPST_PPSTmOfDy   : INT32
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    GPS_TIME = 557908239 /* (((0x010F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * GPS Velocity (GPSV_PPSCalcdSpd, GPSV_PPSElvtn, GPSV_PPSHdg)
     *
     * write 3 items to float_vec for following signals respectively:
     *  GPSV_PPSCalcdSpd : FLOAT
     *  GPST_PPSElvtn    : FLOAT
     *  GPST_PPSHdg      : FLOAT
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    GPS_VELOCITY = 560005392 /* (((0x0110 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Interior Air Quality Indications
     *
     * Read a 10 items int32_vec for following signals respectively:
     *  IAQI_IntrAirQltyGasIdx          : INT32
     *  IAQI_IntrAirQltyGasSclPstn      : INT32
     *  IAQI_IntrAirQltyGasStat         : ENUM
     *  IAQI_IntrAirQltyNumOfStats      : INT32
     *  IAQI_IntrAirQltyOvrallIdx       : INT32
     *  IAQI_IntrAirQltyOvrallSclPstn   : INT32
     *  IAQI_IntrAirQltyOvrallStat      : ENUM
     *  IAQI_IntrAirQltyPrtclteIdx      : INT32
     *  IAQI_IntrAirQltyPrtclteSclPstn  : INT32
     *  IAQI_IntrAirQltyPrtclteStat     : ENUM
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INTERIOR_AIR_QUALITY_INDICATIONS = 557908241 /* (((0x0111 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Vendor Property working off of HVAC_FAN_DIRECTION
     * Returns true or false depending on whether or not fan direction is auto
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    HVAC_AUTO_FAN_DIRECTION_ACTIVE = 622854418 /* (((0x0112 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Vendor Property expounding on HVAC_TEMPERATURE_SET
     * Returns TRUE if IndTmpStngSt** is high else false
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HVAC_TEMPERATURE_AUTO_HIGH = 622854419 /* (((0x0113 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Vendor Property expounding on HVAC_TEMPERATURE_SET
     * Returns TRUE if IndTmpStngSt** is low else false
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HVAC_TEMPERATURE_AUTO_LOW = 622854420 /* (((0x0114 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Vendor Property expounding on HVAC_FAN_SPEED
     * Returns TRUE if IndBlwStngSt** is auto else false
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HVAC_FAN_SPEED_AUTO_ACTIVE = 622854421 /* (((0x0115 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Vendor Property expounding on HVAC_AC_ON
     * Returns TRUE if IndCompStng is ECON else false
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    HVAC_AC_COMP_ECON_ACTIVE = 622854422 /* (((0x0116 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Property used to turn on and off the heater. Sends out HVACControlRequestGroup1 HtrSet
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    HVAC_HEATER_SETTING = 622854423 /* (((0x0117 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Property to lock the rear infotainment system. Depends on IndRrHvac_Lckd to see locked status
     * Sends out of HVACInfoCtlReqRrLckSetChg to set lock
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    HVAC_REAR_LOCK = 622854424 /* (((0x0118 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Property to read the state of the ionizer.Depends on IndInzrStat
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum IonizerState
     */
    HVAC_IONIZER_STATE = 624951577 /* (((0x0119 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Display Request
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_CONTROL_DISPLAY_STATUS_DISPLAY_REQUEST = 622854426 /* (((0x011A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT) */,
    /**
     * Seat Actuator Priority : Back and Cushion Bolster In/Out
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_ACTUATOR_PRIORITY_BACK_AND_CUSHION_BOLSTER_IN_OUT = 624951579 /* (((0x011B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Actuator Priority : Back Bolster In/Out
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_ACTUATOR_PRIORITY_BACK_BOLSTER_IN_OUT = 624951580 /* (((0x011C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Actuator Priority : Cushion Bolster In/Out
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_ACTUATOR_PRIORITY_CUSHION_BOLSTER_IN_OUT = 624951581 /* (((0x011D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Actuator Priority : Cushion Length Adjustment Forward/Rearward
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_ACTUATOR_PRIORITY_CUSHION_LENGTH_ADJUSTMENT_FORWARD_REARWARD = 624951582 /* (((0x011E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Actuator Priority : Headrest Forward/Rearward
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_ACTUATOR_PRIORITY_HEADREST_FORWARD_REARWARD = 624951583 /* (((0x011F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Actuator Priority : Headrest Tilt Forward/Rearward
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_ACTUATOR_PRIORITY_HEADREST_TILT_FORWARD_REARWARD = 624951584 /* (((0x0120 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Actuator Priority : Headrest Up/Down
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_ACTUATOR_PRIORITY_HEADREST_UP_DOWN = 624951585 /* (((0x0121 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Actuator Priority : Headrest Up/Down and Forward/Rearward
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_ACTUATOR_PRIORITY_HEADREST_UP_DOWN_AND_FORWARD_REARWARD = 624951586 /* (((0x0122 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Actuator Priority : Headrest Wings Inward/Outward
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_ACTUATOR_PRIORITY_HEADREST_WINGS_INWARD_OUTWARD = 624951587 /* (((0x0123 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Actuator Priority : Lumbar Forward/Rearward
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_ACTUATOR_PRIORITY_LUMBAR_FORWARD_REARWARD = 624951588 /* (((0x0124 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Actuator Priority : Lumbar Up/Down
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_ACTUATOR_PRIORITY_LUMBAR_UP_DOWN = 624951589 /* (((0x0125 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Actuator Priority : Lumbar Up/Down and Forward/Rearward
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_ACTUATOR_PRIORITY_LUMBAR_UP_DOWN_AND_FORWARD_REARWARD = 624951590 /* (((0x0126 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Actuator Priority : Massage
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_ACTUATOR_PRIORITY_MASSAGE = 624951591 /* (((0x0127 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Actuator Priority : Upper Shoulder Forward/Rearward
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_ACTUATOR_PRIORITY_UPPER_SHOULDER_FORWARD_REARWARD = 624951592 /* (((0x0128 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Maximum Display Value
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_MAXIMUM_DISPLAY_VALUE = 624951593 /* (((0x0129 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 1
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_1 = 624951594 /* (((0x012A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 2
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_2 = 624951595 /* (((0x012B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 3
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_3 = 624951596 /* (((0x012C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 4
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_4 = 624951597 /* (((0x012D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 5
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_5 = 624951598 /* (((0x012E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 6
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_6 = 624951599 /* (((0x012F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 7
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_7 = 624951600 /* (((0x0130 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 8
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_8 = 624951601 /* (((0x0131 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 9
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_9 = 624951602 /* (((0x0132 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 10
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_10 = 624951603 /* (((0x0133 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 11
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_11 = 624951604 /* (((0x0134 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 12
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_12 = 624951605 /* (((0x0135 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 13
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_13 = 624951606 /* (((0x0136 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 14
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_14 = 624951607 /* (((0x0137 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Massage Priority : Type 15
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SEAT_MASSAGE_PRIORITY_TYPE_15 = 624951608 /* (((0x0138 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Back and Cushion Bolster In/Out
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusBackandCushionBolsterInOut
     */
    SEAT_CONTROL_DISPLAY_STATUS_BACK_AND_CUSHION_BOLSTER_IN_OUT = 624951609 /* (((0x0139 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Back Bolster In/Out
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusBackBolsterInOut
     */
    SEAT_CONTROL_DISPLAY_STATUS_BACK_BOLSTER_IN_OUT = 624951610 /* (((0x013A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Cushion Bolster In/Out
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusCushionBolsterInOut
     */
    SEAT_CONTROL_DISPLAY_STATUS_CUSHION_BOLSTER_IN_OUT = 624951611 /* (((0x013B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Cushion Length Adjustment Forward/Rearward
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusCushionLengthAdjustmentForwardRearward
     */
    SEAT_CONTROL_DISPLAY_STATUS_CUSHION_LENGTH_ADJUSTMENT_FORWARD_REARWARD = 624951612 /* (((0x013C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Headrest Forward/Rearward
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusHeadrestForwardRearward
     */
    SEAT_CONTROL_DISPLAY_STATUS_HEADREST_FORWARD_REARWARD = 624951613 /* (((0x013D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Headrest Forward/Rearward and Up/Down
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusHeadrestForwardRearwardandUpDown
     */
    SEAT_CONTROL_DISPLAY_STATUS_HEADREST_FORWARD_REARWARD_AND_UP_DOWN = 624951614 /* (((0x013E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Headrest Tilt Forward/Rearward
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusHeadrestTiltForwardRearward
     */
    SEAT_CONTROL_DISPLAY_STATUS_HEADREST_TILT_FORWARD_REARWARD = 624951615 /* (((0x013F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Headrest Up/Down
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusHeadrestUpDown
     */
    SEAT_CONTROL_DISPLAY_STATUS_HEADREST_UP_DOWN = 624951616 /* (((0x0140 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Headrest Wings In/Out
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusHeadrestWingsInOut
     */
    SEAT_CONTROL_DISPLAY_STATUS_HEADREST_WINGS_IN_OUT = 624951617 /* (((0x0141 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Lumbar Forward/Rearward
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusLumbarForwardRearward
     */
    SEAT_CONTROL_DISPLAY_STATUS_LUMBAR_FORWARD_REARWARD = 624951618 /* (((0x0142 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Lumbar Up/Down
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusLumbarUpDown
     */
    SEAT_CONTROL_DISPLAY_STATUS_LUMBAR_UP_DOWN = 624951619 /* (((0x0143 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Lumbar Up/Down and Forward/Rearward
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusLumbarUpDownandForwardRearward
     */
    SEAT_CONTROL_DISPLAY_STATUS_LUMBAR_UP_DOWN_AND_FORWARD_REARWARD = 624951620 /* (((0x0144 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Massage
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusMassage
     */
    SEAT_CONTROL_DISPLAY_STATUS_MASSAGE = 624951621 /* (((0x0145 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Massage Intensity
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusMassageIntensity
     */
    SEAT_CONTROL_DISPLAY_STATUS_MASSAGE_INTENSITY = 624951622 /* (((0x0146 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Massage Type
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusMassageType
     */
    SEAT_CONTROL_DISPLAY_STATUS_MASSAGE_TYPE = 624951623 /* (((0x0147 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Seat Control Display Status : Upper Shoulder Forward/Rearward
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SeatControlDisplayStatusUpperShoulderForwardRearward
     */
    SEAT_CONTROL_DISPLAY_STATUS_UPPER_SHOULDER_FORWARD_REARWARD = 624951624 /* (((0x0148 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Wheel Rotational Directional Status (WRDSP_LFAuth, WRDSP_LRAuth, WRDSP_RFAuth, WRDSP_RRAuth)
     *
     * write 4 items to int_vec for following signals respectively:
     *  WRDSP_LFAuth     : INT32
     *  WRDSP_LRAuth     : INT32
     *  WRDSP_RFAuth     : INT32
     *  WRDSP_RRAuth     : INT32
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    WHEEL_ROTATIONAL_DIRECTIONAL_STATUS = 557908297 /* (((0x0149 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Proto Key Property
     *
     * VHAL gets proto key from Kernel and exposes it to Android applications as
     * a property.
     * After the property was avaliable, the property value
     * won't change until the next reboot.
     *
     * @change_mode VehiclePropertyChangeMode:STATIC
     * @access VehiclePropertyAccess:READ
     */
    PROTO_KEY = 554697034 /* (((0x014A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:STRING) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Speed Limit Posted Spped
     *
     *  intValues[0] corresponds to the value of ADASIS_NAVILINK_SpdLmtPstdSpd
     *  intValues[1] corresponds to the value of ADASIS_NAVILINK_SpdLmtPsdSpd_DuD
     *     0 corresponds to ADASIS_NAVILINK_SpdLmtPsdSpd_DuD = 0
     *     all other values correspond to ADASIS_NAVILINK_SpdLmtPsdSpd_DuD = 1
     *
     * @change_mode VehiclePropertyChangeModeu:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    ADASIS_NAVILINK_SPEED_LIMIT_POSTED_SPEED = 557908299 /* (((0x014B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Low Volume Module Audio Video Command
     *
     * Write a 7 items int32_vec for following signals respectively:
     *  int32Values[0] = LVM Application ID                LVMAVC_ApplID
     *  int32Values[1] = Remote Speech Recognition Action  LVMAVC_RmtSpchRcgnActn
     *  int32Values[2] = Prompt Audio Response             LVMAVC_PrmtAudResp
     *  int32Values[3] = Remote Speech Recognition ID      LVMAVC_RmtSpchRcgnID
     *  int32Values[4] = Speech Recognition Available      LVMAVC_SpchRcgnAval
     *  int32Values[5] = Remote Enable                     LVMAVC_RmtEnbl
     *  int32Values[6] = Stereo Audio Response             LVMAVC_StreoAudResp
     *
     * refer to LowVolModAudVidCmdIndex for indexing
     */
    LOW_VOLUME_MODULE_AUDIO_VIDEO_COMMAND = 557908300 /* (((0x014C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Yaw Rate
     *
     * VehicleUnit: Deg/Sec
     * Max Rate: 10
     * Min Rate: 1
     *
     * @change_mode VehiclePropertyChangeMode:CONTINUOUS
     * @access VehiclePropertyAccess:READ
     */
    YAW_RATE = 559939917 /* (((0x014D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * LicenseComplianceMaterialDisplayInterface : TCP_LCMDataAvailableOwnerID (TCP_LCMDataAvlblOwnID)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LICENSE_COMPLIANCE_MATERIAL_DISPLAY_INTERFACE_TCP_LCMDATA_AVAILABLE_OWNER_ID = 557842766 /* (((0x014E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * LicenseComplianceMaterialDisplayInterface : TCP_LCMDataAvailableChecksum (TCP_LCMDataAvlblChksum)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TCP_LCM_DATA_AVAILABLE_CHECKSUM = 558891343 /* (((0x014F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT64) | VehicleArea:GLOBAL) */,
    /**
     * LicenseComplianceMaterialDisplayInterface : TCP_LCMDataAvailableLicenseTag (TCP_LCMDataAvlblLicTag)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TCP_LCM_DATA_AVAILABLE_LICENSE_TAG = 557842768 /* (((0x0150 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * LicenseComplianceMaterialDisplayInterface : TCP_LCMDataAvailableTotalBlocks (TCP_LCMDataAvlblTotBlks)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TCP_LCM_DATA_AVAILABLE_TOTAL_BLOCKS = 557842769 /* (((0x0151 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * TCP_LCMFileDat_Data (TCP_LCMFileDat_Data)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TCP_LCM_FILE_DATA = 560988498 /* (((0x0152 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BYTES) | VehicleArea:GLOBAL) */,
    /**
     * Telematics - License Compliance Material Data Message Status (TCP_LCMDataMsgStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum TelematicsLicenseComplianceMaterialDataMessageStatus
     */
    TCP_LCM_DATA_MESSAGE_STATUS = 557842771 /* (((0x0153 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Telematics - License Compliance Material File Transfer (TCP_LCMFileTrans)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum TelematicsLicenseComplianceMaterialFileTransfer
     */
    TCP_LCM_FILE_TRANSFER = 557842772 /* (((0x0154 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * License Compliance Material Display Interface - Wireless Charger Module : Data Available Owner Identification (LCMDI_WCM_DatAvalOwnID)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LICENSE_COMPLIANCE_MATERIAL_DISPLAY_INTERFACE_WIRELESS_CHARGER_MODULE_DATA_AVAILABLE_OWNER_IDENTIFICATION = 557842773 /* (((0x0155 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * License Compliance Material Display Interface - Wireless Charger Module : Data Available Checksum (LCMDI_WCM_DatAvalCksum)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LICENSE_COMPLIANCE_MATERIAL_DISPLAY_INTERFACE_WIRELESS_CHARGER_MODULE_DATA_AVAILABLE_CHECKSUM = 558891350 /* (((0x0156 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT64) | VehicleArea:GLOBAL) */,
    /**
     * License Compliance Material Display Interface - Wireless Charger Module : Data Available License Tag (LCMDI_WCM_DatAvalLicTag)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LICENSE_COMPLIANCE_MATERIAL_DISPLAY_INTERFACE_WIRELESS_CHARGER_MODULE_DATA_AVAILABLE_LICENSE_TAG = 557842775 /* (((0x0157 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * License Compliance Material Display Interface - Wireless Charger Module : Data Available Total Blocks (LCMDI_WCM_DatAvalTotBlks)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LICENSE_COMPLIANCE_MATERIAL_DISPLAY_INTERFACE_WIRELESS_CHARGER_MODULE_DATA_AVAILABLE_TOTAL_BLOCKS = 557842776 /* (((0x0158 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * WCM_LCMFileDat_Data (WCM_LCMFileDat_Data)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    WIRELESS_CHARGER_MODULE_LICENSE_COMPLIANCE_MATERIAL_FILE_DATA = 560988505 /* (((0x0159 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BYTES) | VehicleArea:GLOBAL) */,
    /**
     * Wireless Charger Module - License Compliance Material Data Message Status (WCM_LCMDataMsgStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum WirelessChargerModuleLicenseComplianceMaterialDataMessageStatus
     */
    WIRELESS_CHARGER_MODULE_LICENSE_COMPLIANCE_MATERIAL_DATA_MESSAGE_STATUS = 557842778 /* (((0x015A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Wireless Charger Module - License Compliance Material File Transfer (WCM_LCMFileTrans)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum WirelessChargerModuleLicenseComplianceMaterialFileTransfer
     */
    WIRELESS_CHARGER_MODULE_LICENSE_COMPLIANCE_MATERIAL_FILE_TRANSFER = 557842779 /* (((0x015B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Integrated Center Stack Touch Status
     *
     * Write a 2 items float_vec for following signals respectively:
     *  floatValues[0] =
     * Integrated Center Stack Touch Status : X1 Touch Coordinate     ICSTS_X1TchCrdnt
     *  floatValues[1] =
     * Integrated Center Stack Touch Status : Y1 Touch Coordinate     ICSTS_Y1TchCrdnt
     *
     * @change_mode VehiclePropertyChangeModeu:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    INTEGRATED_CENTER_STACK_TOUCH_STATUS = 560005468 /* (((0x015C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Date and Time
     *
     * Write a 6 items int32_vec for following signals respectively:
     *  int32Values[0] = Calendar Year              CldrYr
     *  int32Values[1] = Calendar Month             CldrMth
     *  int32Values[2] = Calendar Day               CldrDay
     *  int32Values[3] = Hour of Day                HrOfDay
     *  int32Values[4] = Minute of Hour             MinOfHr
     *  int32Values[5] = Second of Minute           SecOfMin
     *
     * refer to DateAndTimeIndex for indexing
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    DATE_AND_TIME = 557908317 /* (((0x015D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Demo mode
     *
     * Return current status of the demo mode.
     * True indicates vehicle is not sold to customer, running in demo mode.
     * False indicates vehicle is sold to customer.
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    DEMO_MODE = 555745630 /* (((0x015E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Audio Attentuation Signal of the SUM format, triggerd off of LDWCtrlAudAttnReqd
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum Lane_detection_warning_and_control_audio_attenuation_requested_availability_indication_sum
     */
    LANE_DETECTION_WARNING_AND_CONTROL_AUDIO_ATTENUATION_REQUESTED_SUM = 557842783 /* (((0x015F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Audio Attentuation Signal of the SUM format, triggerd off of FrtPedtrnClsnMtgnAudAttnReqd
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum Front_pedestrian_collision_mitigation_audio_attenuation_requested_availability_indication_sum
     */
    FRONT_PEDESTRIAN_COLLISION_MITIGATION_AUDIO_ATTENUATION_REQUESTED_SUM = 557842784 /* (((0x0160 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Audio Attentuation Signal of the SUM format, triggerd off of FrwdClsnAlrtImntAlrtAudAttnReqd
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum Forward_collision_alert_imminent_alert_audio_attenuation_requested_availability_indication_sum
     */
    FORWARD_COLLISION_ALERT_IMMINENT_ALERT_AUDIO_ATTENUATION_REQUESTED_SUM = 557842785 /* (((0x0161 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Lighting Sequence
     *
     * Reading from this property reads the TrlrLtngSeqStat CAN signal
     * Writing to this property writes to the TrlrLtngSeqReq CAN signal
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    TRAILER_LIGHTING_SEQUENCE = 557842786 /* (((0x0162 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Property to control sending of H/W input events from Vehicle to
     * Android
     *
     * int32Values[0]: Hardware device ID -
     *     Steering Wheel Control = 1,
     *     MFC = 2,
     *     See HwInputDeviceIndex enum
     * int32Values[1]: TRUE indicates enable sending H/W input events to
     *     Android
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess: WRITE
     */
    HW_KEY_ENABLE = 557908323 /* (((0x0163 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Property to provide keyevent of given keycode of H/W input device keys
     *
     * Write:
     * int32Values[0]: keycode, must be one of H/W input device keycodes OR
     *                  -1, to know keyevent of recent input key.
     *
     * Read:
     * int32Values[0]: Requested keycode or recent keycode
     * int32Values[1]: keyevent, action defined by VehicleHwKeyInputAction
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    HW_KEY_REPORT = 557908324 /* (((0x0164 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Property to inject H/W key events to Android
     *
     * int32Values[0]: keycode, must be one of input key keycodes
     * int32Values[1]: keyevent, action defined by VehicleHwKeyInputAction
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    HW_KEY_INJECT = 557908325 /* (((0x0165 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Force Night Mode
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum ForceNightMode
     */
    FORCE_NIGHT_MODE = 557842790 /* (((0x0166 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Message telling apps if the HVAC front request is true
     * Reads the ReqFrtClmtApp signal
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HVAC_REQUEST_FRONT_HVAC_APP = 555745639 /* (((0x0167 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Message telling apps if the HVAC rear request is true
     * Reads the ReqRrClmtApp signal
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HVAC_REQUEST_REAR_HVAC_APP = 555745640 /* (((0x0168 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Virtual Control Accessory Circuit current selection value
     *
     * Read a 6 items int32_vec for following signals respectively
     * int32Values[0] : VirtCtlAccCkt1CurrSeltnVal  ENUM
     *    see VirtualControlAccessoryCircuit1CurrentSelectionValue enum
     * int32Values[1] : VirtCtlAccCkt2CurrSeltnVal  ENUM
     *    see VirtualControlAccessoryCircuit2CurrentSelectionValue enum
     * int32Values[2] : VirtCtlAccCkt3CurrSeltnVal  ENUM
     *    see VirtualControlAccessoryCircuit3CurrentSelectionValue enum
     * int32Values[3] : VirtCtlAccCkt4CurrSeltnVal  ENUM
     *    see VirtualControlAccessoryCircuit4CurrentSelectionValue enum
     * int32Values[4] : VirtCtlAccCkt5CurrSeltnVal  ENUM
     *    see VirtualControlAccessoryCircuit5CurrentSelectionValue enum
     * int32Values[5] : VirtCtlAccCkt6CurrSeltnVal  ENUM
     *    see VirtualControlAccessoryCircuit6CurrentSelectionValue enum
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_CURRENT_SELECTION_VALUE = 557908329 /* (((0x0169 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Virtual Control Accessory Circuit Request
     *
     * Write a 6 items int32_vec for following signals respectively
     * int32Values[0] : VirtCtlAccCkt1Req  ENUM
     *     see VirtualControlAccessoryCircuit1Request enum
     * int32Values[1] : VirtCtlAccCkt2Req  ENUM
     *     see VirtualControlAccessoryCircuit2Request enum
     * int32Values[2] : VirtCtlAccCkt3Req  ENUM
     *     see VirtualControlAccessoryCircuit3Request enum
     * int32Values[3] : VirtCtlAccCkt4Req  ENUM
     *     see VirtualControlAccessoryCircuit4Request enum
     * int32Values[4] : VirtCtlAccCkt5Req  ENUM
     *     see VirtualControlAccessoryCircuit5Request enum
     * int32Values[5] : VirtCtlAccCkt6Req  ENUM
     *     see VirtualControlAccessoryCircuit6Request enum
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_REQUEST = 557908330 /* (((0x016A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Time of Day Charging Settings Request
     *
     * Write a 14 items int32_vec for following signals respectively
     * int32Values[0] : TODCSR_LocNumReq               ENUM
     *     see TODCSR_LocNumReq enum
     * int32Values[1] : TODCSR_ChrgSchedDyOfWkReq      ENUM
     *     see TODCSR_ChrgSchedDyOfWkReq enum
     * int32Values[2] : TODCSR_ChrgSchedHrOfDyReq      INT32
     * int32Values[3] : TODCSR_ChrgSchedMinOfHrReq     INT32
     * int32Values[4] : TODCSR_TgtChrgLvlReq           INT32
     * int32Values[5] : TODCCbnPrcndtngSetReq          ENUM
     *     see TODCCbnPrcndtngSetReq enum
     * int32Values[6] : TODCSR_ERSPrdDyReq             ENUM
     *     see TODCSR_ERSPrdDyReq enum
     * int32Values[7] : TODCSR_ERSPrdHrOfDyReq         INT32
     * int32Values[8] : TODCSR_ERSPrdMinOfHrReq        INT32
     * int32Values[9] : TODCSR_ERSPrdLvlReq            ENUM
     *     see TODCSR_ERSPrdLvlReq enum
     * int32Values[10] : TODCSR_ERSCstSetReq           ENUM
     *     see TODCSR_ERSCstSetReq enum
     * int32Values[11] : TODCSR_LocChrgPwrLvlReq       ENUM
     *     see TODCSR_LocChrgPwrLvlReq enum
     * int32Values[12] : TODCSR_ChrgSchedCstSetReq     ENUM
     *     see TODCSR_ChrgSchedCstSetReq enum
     * int32Values[13] : PrtblChrgCordLimCstSetReq     ENUM
     *     see PrtblChrgCordLimCstSetReq enum
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TOD_CHARGING_SETTING_REQ = 557908331 /* (((0x016B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Time of Day Charging Settings Response
     *
     * Read a 14 items int32_vec for following signals respectively
     * int32Values[0] : TODCSR_LocNumResp              ENUM
     *     see TODCSR_LocNumResp enum
     * int32Values[1] : TODCSR_ChrgSchedDyOfWkResp     ENUM
     *     see TODCSR_ChrgSchedDyOfWkResp enum
     * int32Values[2] : TODCSR_ChrgSchedHrOfDyResp     INT32
     * int32Values[3] : TODCSR_ChrgSchedMinOfHrResp    INT32
     * int32Values[4] : TODCSR_TgtChrgLvlResp          INT32
     * int32Values[5] : TODCCbnPrcndtngSetResp         ENUM
     *     see TODCCbnPrcndtngSetResp enum
     * int32Values[6] : TODCSR_ERSPrdDyResp            ENUM
     *     see TODCSR_ERSPrdDyResp enum
     * int32Values[7] : TODCSR_ERSPrdHrOfDyResp        INT32
     * int32Values[8] : TODCSR_ERSPrdMinOfHrResp       INT32
     * int32Values[9] : TODCSR_ERSPrdLvlResp           ENUM
     *     see TODCSR_ERSPrdLvlResp enum
     * int32Values[10] : TODCSR_ERSCstSetVal           ENUM
     *     see TODCSR_ERSCstSetVal enum
     * int32Values[11] : TODCSR_LocChrgPwrLvlResp      ENUM
     *     see TODCSR_LocChrgPwrLvlResp enum
     * int32Values[12] : TODCSR_ChrgSchedCstSetVal     ENUM
     *     see TODCSR_ChrgSchedCstSetVal enum
     * int32Values[13] : PrtblChrgCordLimCstSetResp    ENUM
     *     see PrtblChrgCordLimCstSetResp enum
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TOD_CHARGING_SETTING_RESP = 557908332 /* (((0x016C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Report Button Status to VIP
     *
     * Write a 2 items int32_vec for following signals respectively:
     *
     * int32Values[0] = HardKey Button Code, value of Enum HWButtonCode
     * int32Values[1] = Button Status, value of Enum VehicleHwKeyInputAction
     *
     * @change_mode VehiclePropertyChangeModeu:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    HW_KEY_STATUS = 557908333 /* (((0x016D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Override Next Planned Charge
     *
     * Write a 6 items int32_vec for following signals respectively
     * int32Values[0] : ONPC_DprtrDyOfWkReq          ENUM
     *    see OverrideNextPlannedChargeDepartureDayOfWeekRequest enum
     * int32Values[1] : ONPC_DprtrHrOfDyReq          INT32
     * int32Values[2] : ONPC_DprtrMinOfHrReq         INT32
     * int32Values[3] : ONPC_Req                     ENUM
     *    see OverrideNextPlannedChargeRequest enum
     * int32Values[4] : ONPC_TgtChrgLvlReq           INT32
     * int32Values[5] : OvrrdNextPlndCbnPrcndtngReq  ENUM
     *    see OvrrdNextPlndCbnPrcndtngReq enum
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    OVERRIDE_NEXT_PLANNED_CHARGE = 557908334 /* (((0x016E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Drive Mode Name
     *
     * (DM1Name,DM2Name,DM3Name,DM4Name,DM5Name,DM6Name,DM7Name,DM8Name)
     * an 8 items hidl_vec<int32_t> drive mode status will be returned
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum DriveModeName
     */
    DRIVE_MODE_NAME = 557908335 /* (((0x016F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Drive Mode Unavailable
     *
     * (DM1Unavailable,DM2Unavailable,DM3Unavailable,DM4Unavailable,
     *   DM5Unavailable,DM6Unavailable,DM7Unavailable,DM8Unavailable)
     * an 8 items hidl_vec<int32_t> drive mode status will be returned
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_MODE_UNAVAILABLE = 557908336 /* (((0x0170 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Location Based Charging Customer Data Reset Response
     *
     * Read a 2 items int32_vec for following signals respectively
     * int32Values[0] : LBCCDRR_ClrStrdPstnResp          ENUM
     *    see LBCCDRR_ClrStrdPstnResp enum
     * int32Values[1] : LBCCDRR_PstnNumResp              ENUM
     *  see LBCCDRR_PstnNumResp enum
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LOCATION_BASED_CHARGING_CUSTOMER_DATA_RESET_RESPONSE = 557908337 /* (((0x0171 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Location Based Charging Customer Feedback
     *
     * Read a 4 items int32_vec for following signals respectively
     * int32Values[0]  : LBCCF_Loc1PstnStrdIndOn    BOOLEAN
     * int32Values[1]  : LBCCF_Loc2PstnStrdIndOn    BOOLEAN
     * int32Values[2]  : LBCCF_Loc3PstnStrdIndOn    BOOLEAN
     * int32Values[3]  : LBCCF_Loc4PstnStrdIndOn    BOOLEAN
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LOCATION_BASED_CHARGING_CUSTOMER_FEEDBACK = 557908338 /* (((0x0172 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Location Based Charging Position Storage Status
     *
     * Read a 2 items int32_vec for following signals respectively
     * int32Values[0] : LBCPSS_PstnUpdtLoc          ENUM
     *    see LBCPSS_PstnUpdtLoc enum
     * int32Values[1] : LBCPSS_PstnUpdtSts          ENUM
     *   see LBCPSS_PstnUpdtSts enum
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LOCATION_BASED_CHARGING_POSITION_STORAGE_STATUS = 557908339 /* (((0x0173 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    APP_CONTROL_ACTION = 560988532 /* (((0x0174 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BYTES) | VehicleArea:GLOBAL) */,
    /**
     * Ride Height Selection Name
     *
     * Read a 8 items int32_vec for following signals respectively
     * int32Values[0] : RideHghtSeltn1Name ENUM
     * int32Values[1] : RideHghtSeltn2Name ENUM
     * int32Values[2] : RideHghtSeltn3Name ENUM
     * int32Values[3] : RideHghtSeltn4Name ENUM
     * int32Values[4] : RideHghtSeltn5Name ENUM
     * int32Values[5] : RideHghtSeltn6Name ENUM
     * int32Values[6] : RideHghtSeltn7Name ENUM
     * int32Values[7] : RideHghtSeltn8Name ENUM
     *     see RideHeightSelectionNameValues enum
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    RIDE_HEIGHT_SELECTION_NAME = 557908343 /* (((0x0177 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Property used to allow incremental increases/decrease to temperature
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    HVAC_TEMPERATURE_SET_STEP = 624951672 /* (((0x0178 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Property used to allow incremental increases/decrease to fan
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    HVAC_FAN_SPEED_STEP = 624951673 /* (((0x0179 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:SEAT) */,
    /**
     * Indication Message for the AC in the battery
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_AC_ON_FOR_BATTERY_COOLING_MESSAGE = 555745658 /* (((0x017A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Message for Air Quality Recirc
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_AIR_QUALITY_SYSTEM_TAKING_RECIRC_ACTION_MESSAGE = 555745659 /* (((0x017B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Message for the Low Speed Pollution Recirc
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_LOW_SPEED_POLLUTION_TAKING_RECIRC_ACTION_MESSAGE = 555745660 /* (((0x017C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Time of day charging next planned
     *
     * Read a 7 items int32_vec for following signals respectively
     * int32Values[0] : TODCNP_Chrg           ENUM
     *     see TimeOfDayChargingNextPlannedCharge enum
     * int32Values[1] : TODCNP_DprtrDyOfWk    ENUM
     *     see TimeOfDayChargingNextPlannedDepartureDayOfWeek enum
     * int32Values[2] : TODCNP_DprtrHrOfDy    INT32
     * int32Values[3] : TODCNP_DprtrMinOfHr   INT32
     * int32Values[4] : TODCNextPlndCbnPrcndtngSetResp
     *    see TimeOfDayChargingNextPlannedCabinPreconditioningSettingResponse enum
     * int32Values[5] : TODCNP_TgtChrgLvl    INT32
     * int32Values[6] : TODCNP_PCCLCstCurrSetVal ENUM
     *     see TimeOfDayChargingNextPlannedPortableChargeCordLimitCustomizationCurrentSettingValue
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIME_OF_DAY_CHARGING_NEXT_PLANNED = 557908349 /* (((0x017D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * One Pedal Driving Customization Allowed Flag
     *
     * Read a 7 items int32_vec for following signals respectively
     * int32Values[0] : OnePedDrvCstSetAllwdFlg1 BOOLEAN
     * int32Values[1] : OnePedDrvCstSetAllwdFlg2 BOOLEAN
     * int32Values[2] : OnePedDrvCstSetAllwdFlg3 BOOLEAN
     * int32Values[3] : OnePedDrvCstSetAllwdFlg4 BOOLEAN
     * int32Values[4] : OnePedDrvCstSetAllwdFlg5 BOOLEAN
     * int32Values[5] : OnePedDrvCstSetAllwdFlg6 BOOLEAN
     * int32Values[6] : OnePedDrvCstSetAllwdFlg7 BOOLEAN
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ONE_PEDAL_DRIVING_CUSTOMIZATION_ALLOWED_FLAG = 557908350 /* (((0x017E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Electrical Energy State
     *
     * Write a 4 items float_vec for following signals respectively
     * floatValues[0] : DrvCycEleclEngyStat1    FLOAT
     * floatValues[1] : DrvCycEleclEngyStat2    FLOAT
     * floatValues[2] : DrvCycEleclEngyStat3    FLOAT
     * floatValues[3] : DrvCycEleclEngyStat4    FLOAT
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_ELECTRICAL_ENERGY_STATE = 560005507 /* (((0x0183 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy State
     *
     * Write a 4 items float_vec for following signals respectively
     * floatValues[0] : ChrgCycEleclEngyStat1    FLOAT
     * floatValues[1] : ChrgCycEleclEngyStat2    FLOAT
     * floatValues[2] : ChrgCycEleclEngyStat3    FLOAT
     * floatValues[3] : ChrgCycEleclEngyStat4    FLOAT
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_STATE = 560005508 /* (((0x0184 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Plug and Charge Certificate Action Request
     *
     * write a 3 items int32_vec for following signals respectively
     * int32Values[0] : PnCActnReqCertfctNum INT32
     * int32Values[1] : PnCActnReqCertfctOp  ENUM
     *     see PnCActionRequestCertificateOperation enum
     * int32Values[2] : PnCActnReqCertfctTyp ENUM
     *     see PnCActionCertificateType enum
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    PLUG_AND_CHARGE_CERTIFICATE_ACTION_REQUEST = 557908357 /* (((0x0185 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Plug and Charge Certificate Action status
     *
     * read a 3 items int32_vec for following signals respectively
     * int32Values[0] : PnCActnStsCertfctNum   INT32
     * int32Values[1] : PnCActnStsCertfctOpSts ENUM
     *     see PnCActionStatusCertificateOperationStatus enum
     * int32Values[2] : PnCActnStsCertfctTyp   ENUM
     *     see PnCActionCertificateType enum
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PLUG_AND_CHARGE_CERTIFICATE_ACTION_STATUS = 557908358 /* (((0x0186 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Position offset from trim
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    POSITION_OFFSET_FROM_TRIM = 660603271 /* (((0x0187 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:WHEEL) */,
    /**
     * Wheel torque percentage of total torque
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    WHEEL_TORQUE_PERCENTAGE_OF_TOTAL_TORQUE = 660603272 /* (((0x0188 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:WHEEL) */,
    /**
     * Compass Octant Heading Signal SUM output, triggered by CmpsOctHding
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    COMPASS_OCTANT_HEADING_SUM = 557908361 /* (((0x0189 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Global positioning system velocity precise positioning system elevation Signal
     * SUM output, triggered by GPSV_PPSElvtn
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    GLOBAL_POSITIONING_SYSTEM_VELOCITY_PRECISE_POSITIONING_SYSTEM_ELEVATION_SUM = 557908362 /* (((0x018A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Lateral acceleration authenticated Signal SUM output, triggered by LatAccelAuth
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    LATERAL_ACCELERATION_AUTHENTICATED_SUM = 557908363 /* (((0x018B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Longitudinal acceleration authenticated Signal SUM output, triggered by LongAccelAuth
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    LONGITUDINAL_ACCELERATION_AUTHENTICATED_SUM = 557908364 /* (((0x018C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Position offset from trim left front Signal SUM output, triggered by POFT_PstnOfstFrmTrmLF
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    POSITION_OFFSET_FROM_TRIM_LEFT_FRONT_SUM = 557908365 /* (((0x018D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Position offset from trim left rear Signal SUM output, triggered by POFT_PstnOfstFrmTrmLR
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    POSITION_OFFSET_FROM_TRIM_LEFT_REAR_SUM = 557908366 /* (((0x018E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Position offset from trim right front Signal SUM output, triggered by POFT_PstnOfstFrmTrmRF
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    POSITION_OFFSET_FROM_TRIM_RIGHT_FRONT_SUM = 557908367 /* (((0x018F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Position offset from trim right rear Signal SUM output, triggered by POFT_PstnOfstFrmTrmRR
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    POSITION_OFFSET_FROM_TRIM_RIGHT_REAR_SUM = 557908368 /* (((0x0190 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Ride height warning 1 indication request Signal SUM output, triggered by RdHgtWrn1IndReq
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     */
    RIDE_HEIGHT_WARNING_1_INDICATION_REQUEST_SUM = 557908369 /* (((0x0191 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Off road display information road wheel angle Signal SUM output, triggered by RdWhlAng
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    OFF_ROAD_DISPLAY_INFORMATION_ROAD_WHEEL_ANGLE_SUM = 557908370 /* (((0x0192 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Tire pressure information tpms status left front Signal SUM output,
     * triggered by TirePrsStatLF
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     */
    TIRE_PRESSURE_INFORMATION_TPMS_STATUS_LF_SUM = 557908371 /* (((0x0193 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Tire pressure information tpms status left rear Signal SUM output,
     * triggered by TirePrsStatLR
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     */
    TIRE_PRESSURE_INFORMATION_TPMS_STATUS_LR_SUM = 557908372 /* (((0x0194 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Tire pressure information tpms status right front Signal SUM output,
     * triggered by TirePrsStatRF
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     */
    TIRE_PRESSURE_INFORMATION_TPMS_STATUS_RF_SUM = 557908373 /* (((0x0195 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Tire pressure information tpms status right rear Signal SUM output,
     * triggered by TirePrsStatRR
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     */
    TIRE_PRESSURE_INFORMATION_TPMS_STATUS_RR_SUM = 557908374 /* (((0x0196 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Off road display information vehicle pitch angle Signal SUM output, triggered by VehPtchAng
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    OFF_ROAD_DISPLAY_INFORMATION_VEHICLE_PITCH_ANGLE_SUM = 557908375 /* (((0x0197 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Off road display information vehicle roll angle Signal SUM output, triggered by VehRollAng
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    OFF_ROAD_DISPLAY_INFORMATION_VEHICLE_ROLL_ANGLE_SUM = 557908376 /* (((0x0198 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Virtual control accessory circuit control Signal SUM output,
     * triggered by VirtCtlAccCktCtlAval
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     */
    VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_CONTROL_AVAILABLE_SUM = 557908377 /* (((0x0199 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Drive Mode Pending
     *
     * (DM1Pending,DM2Pending,DM3Pending,DM4Pending,
     *  DM5Pending,DM6Pending,DM7Pending,DM8Pending)
     * Return an 8 item hidl_vec<int32_t> with 1/0 values
     * 1 = Pending
     * 0 = Otherwise
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_MODE_PENDING = 557908378 /* (((0x019A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Ride Height Selection Pending
     *
     * Read a 8 items int32_vec for following signals respectively
     * int32Values[0] : RideHghtSeltn1Pndg BOOLEAN
     * int32Values[1] : RideHghtSeltn2Pndg BOOLEAN
     * int32Values[2] : RideHghtSeltn3Pndg BOOLEAN
     * int32Values[3] : RideHghtSeltn4Pndg BOOLEAN
     * int32Values[4] : RideHghtSeltn5Pndg BOOLEAN
     * int32Values[5] : RideHghtSeltn6Pndg BOOLEAN
     * int32Values[6] : RideHghtSeltn7Pndg BOOLEAN
     * int32Values[7] : RideHghtSeltn8Pndg BOOLEAN
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    RIDE_HEIGHT_SELECTION_PENDING = 557908379 /* (((0x019B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Ride Height Selection Unavailable
     *
     * Read a 8 items int32_vec for following signals respectively
     * int32Values[0] : RideHghtSeltn1Unv BOOLEAN
     * int32Values[1] : RideHghtSeltn2Unv BOOLEAN
     * int32Values[2] : RideHghtSeltn3Unv BOOLEAN
     * int32Values[3] : RideHghtSeltn4Unv BOOLEAN
     * int32Values[4] : RideHghtSeltn5Unv BOOLEAN
     * int32Values[5] : RideHghtSeltn6Unv BOOLEAN
     * int32Values[6] : RideHghtSeltn7Unv BOOLEAN
     * int32Values[7] : RideHghtSeltn8Unv BOOLEAN
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    RIDE_HEIGHT_SELECTION_UNAVAILABLE = 557908380 /* (((0x019C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * REAR_INNER_TIRE_PRESSURE (TirePrsLRInr, TirePrsRRInr)
     *
     * read 2 items to int32_vec for following signals respectively:
     *  TirePrsLRInr: INT32
     *  TirePrsRRInr: INT32
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_INNER_TIRE_PRESSURE = 557908381 /* (((0x019D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Tire Leak Detection WorstCase Information
     *
     * Read a 2 items int32_vec for following signals respectively
     * int32Values[0] : TLDWCI_Sts                     ENUM
     *    see TLDWCI_Sts enum
     * int32Values[1] : TLDWCI_TmToFlt                 INT32
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIRE_LEAK_DETECTION_WORST_CASE_INFORMATION = 557908382 /* (((0x019E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Tire Leak Detection Status
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @enum Tire Leak Detection Status
     */
    TIRE_LEAK_DETECTION_STATUS = 658506143 /* (((0x019F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:WHEEL) */,
    /**
     * Tire Leak Detection Time To Flat
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIRE_LEAK_DETECTION_TIME_TO_FLAT = 658506144 /* (((0x01A0 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:WHEEL) */,
    /**
     * Read for Peak value for Vehicle Pitch Angle (VehPtchAng)
     * Write anything to clear up the historical data
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    VEHICLE_PITCH_ANGLE_PEAK_VALUE = 559940001 /* (((0x01A1 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Read for Peak Value for Vehicle Roll Angle (VehRollAng)
     * Write anything to clear up the historical data
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    VEHICLE_ROLL_ANGLE_PEAK_VALUE = 559940002 /* (((0x01A2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Read for Peak Value for Drift Angle (HVPPP_HstVehSdslAngAuth)
     * Write anything to clear up the historical data
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     *
     */
    DRIFT_ANGLE_PEAK_VALUE = 559940003 /* (((0x01A3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Read for Peak Value for G-Force
     * Write anything to clear up the historical data
     *
     * Read 5 items to float_vec for following signals respectively:
     *  floatValues[0] = Max Positive Long Accel
     *  floatValues[1] = Max Negative Long Accel
     *  floatValues[2] = Max Positive Vert Accel
     *  floatValues[3] = Max Negative Vert Accel
     *  floatValues[4] = Max Cumulative Accel
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    G_FORCE_PEAK_VALUE = 560005540 /* (((0x01A4 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Charge Complete
     *
     * Write a 6 items int32_vec for following signals respectively
     * int32Values[0] : HVBCC_MinRmn          INT32
     * int32Values[1] : HVBCC_DyOfWk          ENUM
     *    see HVBCC_DyOfWk enum
     * int32Values[2] : HVBCC_HrOfDy          INT32
     * int32Values[3] : HVBCC_MinOfHr         INT32
     * int32Values[4] : HVBCC_TmDispFormat    ENUM
     *    see HVBCC_TmDispFormat enum
     * int32Values[5] : HVBCC_TmDispPwrLvl  ENUM
     *    see HVBCC_TmDispPwrLvl enum
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_CHARGE_COMPLETE = 557908389 /* (((0x01A5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy Consumed
     *
     * Write a 4 items float_vec for following signals respectively
     * floatValues[0] : CCEEC_EngyPct1             FLOAT
     * floatValues[1] : CCEEC_EngyPct2             FLOAT
     * floatValues[2] : CCEEC_EngyPct3             FLOAT
     * floatValues[3] : CCEEC_EngyPct4             FLOAT
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_ENERGY_PERCENT = 560005542 /* (((0x01A6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Electrical Energy Consumed Range Impact
     *
     * Write a 4 items float_vec for following signals respectively
     * floatValues[0] : DrvCycEleclEngyCnsmdRngImp1    FLOAT
     * floatValues[1] : DrvCycEleclEngyCnsmdRngImp2    FLOAT
     * floatValues[2] : DrvCycEleclEngyCnsmdRngImp3    FLOAT
     * floatValues[3] : DrvCycEleclEngyCnsmdRngImp4    FLOAT
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_RANGE_IMPACT = 560005543 /* (((0x01A7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy Consumed Range Impact
     *
     * Write a 4 items float_vec for following signals respectively
     * floatValues[0] : ChrgCycEleclEngyCnsmdRngImp1    FLOAT
     * floatValues[1] : ChrgCycEleclEngyCnsmdRngImp2    FLOAT
     * floatValues[2] : ChrgCycEleclEngyCnsmdRngImp3    FLOAT
     * floatValues[3] : ChrgCycEleclEngyCnsmdRngImp4    FLOAT
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_RANGE_IMPACT = 560005544 /* (((0x01A8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Plug and Charge Certificate Action Request
     *
     * write a 4 items int32_vec for following signals respectively
     * int32Values[0] : PnCActnReqCertfctTypAuth ENUM
     *     see PnCActnReqCertfctTypAuth ENUM
     * int32Values[1] : PnCActnReqCertfctNumAuth  INT32
     * int32Values[2] : PnCActnReqCertfctOpAuth ENUM
     *     see PnCActnReqCertfctOpAuth ENUM
     * int32Values[3] : PnCEnblReqAuth ENUM
     *     see PnCEnblReqAuth enum
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    PLUG_AND_CHARGE_CERTIFICATE_ACTION_REQUEST_AUTHENTICATED = 557908393 /* (((0x01A9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Read for HVAC_USER_INTERACTION (HVACUsrCtlIntrctnDispReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     *
     */
    HVAC_USER_INTERACTION = 555745722 /* (((0x01BA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * REAR_INNER_TPMS_STATUS (TirePrsStatLRInr, TirePrsStatRRInr)
     *
     * read 2 items to int32_vec for following signals respectively:
     *  TirePrsStatLRInr: INT32
     *  TirePrsStatRRInr: INT32
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @enum TirePressureStatus
     */
    REAR_INNER_TPMS_STATUS = 557908408 /* (((0x01B8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Location Based Charging Customer Data Reset Request
     *
     * Write a 2 items int32_vec for following signals respectively
     * int32Values[0] : LBCCDRR_ClrStrdPstnReq          ENUM
     *    see LocationBasedChargingCustomerClearPositionRequest enum
     * int32Values[1] : LBCCDRR_PstnNumReq              ENUM
     *    see LocationBasedChargingCustomerPositionNumberRequest enum
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    LOCATION_BASED_CHARGING_CUSTOMER_DATA_RESET_REQUEST = 557908409 /* (((0x01B9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Electrical Energy Consumed
     *
     * Write a 4 items float_vec for following signals respectively
     * DCEEC_EngyPct1             FLOAT
     * DCEEC_EngyPct2             FLOAT
     * DCEEC_EngyPct3             FLOAT
     * DCEEC_EngyPct4             FLOAT
     *
     * Use DriveCycleElectricalEnergyPercentIndex enum for indexing of float_vec
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_ENERGY_PERCENT = 560005563 /* (((0x01BB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT_VEC) | VehicleArea:GLOBAL) */,
    /**
     *  Primary Precise Positioning System Data Group
     *
     *  Write a 9 items float_vec for the following signals respectively:
     *  Lat                 : FLOAT      Latitude (ms arc)
     *  Lng                 : FLOAT      Longitude (ms arc)
     *  Elvtn               : FLOAT      Elevation (cm)
     *  Hdg                 : FLOAT      Heading (deg)
     *  CalcdSpd            : FLOAT      Calculated Speed (km/h)
     *  2DAbsPstnErrEst     : FLOAT      2D Absolute Position Error Estimate (m)
     *  3DAbsPstnErrEst     : FLOAT      3D Absolute Position Error Estimate (m)
     *  AbsHdgErrEst        : FLOAT      Absolute Heading Error Estimate (deg)
     *  AbsVelErrEst        : FLOAT      Absolute Velocity Error Estimate (km/h)
     *
     *  Write a 7 items int32_vec for the following signals respectively:
     *  SigAcqTm            : INT32      Signal Acquisition Time (ms)
     *  TmOfDy              : INT32      Time of Day (ms)
     *  CldrDy              : INT32      Calendar Day (day)
     *  CldrYr              : INT32      Calendar Year (year)
     *  GPSMode             : INT32      Global Positioning System Mode
     *                                   #PrimaryPrecisePosition_GPSMode
     *  LocUsbl             : BOOL       Location Usable
     *  InvMask             : INT32      Invalid Mask for the signal
     *                                   #PrimaryPrecisePosition_InvMask
     *
     *  Use PrimaryPrecisePosition_Index for accessing index of float_vec and int32_vec
     *  For example, to access Calculated Speed, use
     *  floatValues[PrimaryPrecisePosition_Index::Index_CalcdSpd]
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PRIMARY_PRECISE_POSITIONING = 568328636 /* (((0x01BC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:MIXED) | VehicleArea:GLOBAL) */,
    /**
     *  GNSS Space Vehicle Information
     *
     *  Write a 300 (5 * 60 Satellites) items int32_vec for the following signals
     *  ID            : INT32    Satellite ID
     *  Cnstltn       : INT32    Satellite Constellation
     *                           #GNSSSpcVehInfo_SatConstellation
     *  UsdPsFix      : BOOL     Satellite Used In Position Fix
     *  DuDMask       : INT32    Don't Use Data Mask for the signal
     *                           #GNSSSpcVehInfo_DuDInvMask
     *                           Unlike Invalid Mask, the signal shout not be
     *                           consumed if DuD Mask is set to true
     *  InvMask       : INT32    Invalid Mask for the signal
     *                           #GNSSSpcVehInfo_DuDInvMask
     *                           An invalid flag always tie to DTC,
     *                           therefore invalid true only means
     *                           a fault is present, but it can still hold
     *                           an accurate value in the signal, and signal
     *                           should still be consumed
     *
     *  Write a 180 (3 * 60 Satellites) items float_vec for the following signals
     *  CarNois       : FLOAT    Satellite Carrier To Noise (dBHz)
     *  Elvtn         : FLOAT    Satellite Elevation (rad)
     *  Azm           : FLOAT    Satellite Azimuth (rad)
     *
     *  While this property always contains 60 satellites, not all of them are valid.
     *  Valid satellites always come first in the vector, followed by invalid satellites.
     *
     *  Use #GNSSSpcVehInfo_Index for accessing index of float_vec and int32_vec
     *  For example, to access Constellation for 5th Satellite, use
     *  int32Values[(5 - 1) * GNSSSpcVehInfo_Index::Int32ElementSize
     *              + GNSSSpcVehInfo_Index::Index_SatCnstltn]
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    GNSS_SPACE_VEHICLE_INFORMATION = 568328637 /* (((0x01BD | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:MIXED) | VehicleArea:GLOBAL) */,
    NEXT_CHARGING_DESTINATION_COORDINATES = 557908414 /* (((0x01BE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Next Charging Destination Information 1
     *
     * Write a 4 items int32_vec for following signals respectively:
     * NextChrgDestDistToArvl  INT32
     * NextChrgDestSts         ENUM  refer NextChrgDestSts for details.
     * NextChrgDestTmToArvl    INT32
     * NextChrgDestPwrLvl      INT32(float value *100)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    NEXT_CHARGING_DESTINATION_INFORMATION_1 = 557908415 /* (((0x01BF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Navigation Route Information 1
     *
     * Write a 7 items int32_vec for following signals respectively:
     * NavRteChgOcc            BOOL
     * NavRtePrdtdOAT          INT32
     * NavRtePrdtdVehSpd       INT32
     * NavRteSts               INT32
     * NavRteTmIdx1            INT32
     * NavRtePrdtdCustUsblSOC  INT32(float value *65536)
     * NavRtePrdtdRdLdPwr      INT32(float value *100)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    NAVIGATION_ROUTE_INFORMATION_1 = 557908416 /* (((0x01C0 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Navigation Route Information 2
     *
     * write a 3 items int_vec for following signals respectively
     * NavRtePrdtdElvtn  INT32
     * NavRtePrdtdLng    INT32
     * NavRteTmIdx2      INT32
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    NAVIGATION_ROUTE_INFORMATION_2 = 557908417 /* (((0x01C1 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Navigation Route Information 3
     *
     * write a 3 items int_vec for following signals respectively:
     * NavRtePrdtdLat       INT32
     * NavRteTmIdx3         INT32
     * NavRtePrdtdEngyDelt  INT32(float value *100)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    NAVIGATION_ROUTE_INFORMATION_3 = 557908418 /* (((0x01C2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Display Measurement system extended
     * for read : Internal signal - DispMeasSysExtnd
     * for write : Internal signal - UnitSettingFromHMIScreen
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @enum DisplayUnits
     */
    DISPLAY_UNITS = 557842883 /* (((0x01C3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Battery Voltage Indication Request Signal SUM output, triggered by BattVltIRq
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    BATTERY_VOLTAGE_INDICATION_REQUEST_SUM = 557908420 /* (((0x01C4 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Engine Oil Pressure Signal SUM output, triggered by EngOilPrs
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    ENGINE_OIL_PRESSURE_SUM = 557908421 /* (((0x01C5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Brake Pad Life Front Signal SUM output, triggered by BrkPadLifeFrt
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    BRAKE_PAD_LIFE_FRONT_SUM = 557908422 /* (((0x01C6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Brake Pad Life Rear Signal SUM output, triggered by BrkPadLifeRr
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    BRAKE_PAD_LIFE_REAR_SUM = 557908423 /* (((0x01C7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Engine Air Filter Monitor Status Signal SUM output, triggered by EngAirFiltMonSts
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    ENGINE_AIR_FILTER_MONITOR_STATUS_SUM = 557908424 /* (((0x01C8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Engine Air Filter Life Remaining Signal SUM output, triggered by EngAirFiltLifeRmn
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    ENGINE_AIR_FILTER_LIFE_REMAINING_SUM = 557908425 /* (((0x01C9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Fuel Filter Remaining Life Signal SUM output, triggered by FuelFiltRmnLife
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    FUEL_FILTER_REMAINING_LIFE_SUM = 557908426 /* (((0x01CA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Engine Oil Temperature Signal SUM output, triggered by EngOilTmp
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    ENGINE_OIL_TEMP_SUM = 557908427 /* (((0x01CB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Arbitrated Engine Temperature Signal SUM output, triggered by ArbdEngTemp
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    ARBITRATED_ENGINE_TEMPERATURE_SUM = 557908428 /* (((0x01CC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Transmission Oil Temperature Signal SUM output, triggered by TrnsOilTmp
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    TRANSMISSION_OIL_TEMPERATURE_SUM = 557908429 /* (((0x01CD | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * RVC 12V Battery State of Charge Signal SUM output, triggered by RVC12VBatSOC
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    RVC_12_V_BATTERY_STATE_OF_CHARGE_SUM = 557908430 /* (((0x01CE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Charger System Status Signal SUM output, triggered by HiVltgChrgrSysSts
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    HIGH_VOLTAGE_CHARGER_SYSTEM_STATUS_SUM = 557908431 /* (((0x01CF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Tire Pressure Left Front Signal SUM output, triggered by TirePrsLF
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    TIRE_PRESSURE_LF_SUM = 557908433 /* (((0x01D1 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Tire Pressure Left Rear Signal SUM output, triggered by TirePrsLR
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    TIRE_PRESSURE_LR_SUM = 557908434 /* (((0x01D2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Tire Pressure Right Front Signal SUM output, triggered by TirePrsRF
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    TIRE_PRESSURE_RF_SUM = 557908435 /* (((0x01D3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Tire Pressure Right Rear Signal SUM output, triggered by TirePrsRR
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    TIRE_PRESSURE_RR_SUM = 557908436 /* (((0x01D4 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Virtual control dome light request
     *
     * write a 2 items int_vec for following signals respectively:
     *  int32Values[0] : VCDLR_DomeDft   ENUM
     *  see VirtualControlDomeLightRequest ENUM
     *  int32Values[1] : VCDLR_DomeLgt   ENUM
     *  see VirtualControlDomeLightRequest ENUM
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    VIRTUAL_CONTROL_DOME_LIGHT_REQUEST = 557908437 /* (((0x01D5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Engine Oil Remaining Life Signal SUM output, triggered by EngOilRmnLf
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    ENGINE_OIL_REMAINING_LIFE_SUM = 557908442 /* (((0x01DA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Diesel Exhaust Information Diesel Exhaust Fluid Remaining Distance Signal SUM output,
     * triggered by DslExhFldRmnDist
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    DIESEL_EXHAUST_INFORMATION_DIESEL_EXHAUST_FLUID_REMAINING_DISTANCE_SUM = 557908443 /* (((0x01DB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Diesel Exhaust Fluid Level Percent Signal SUM output,
     * triggered by DslExhFldLvlPct
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    DIESEL_EXHAUST_FLUID_LEVEL_PERCENT_SUM = 557908444 /* (((0x01DC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Drive Mode Denied
     *
     * (DM1Denied,DM2Denied,DM3Denied,DM4Denied,
     *  DM5Denied,DM6Denied,DM7Denied,DM8Denied)
     * Return an 8 item hidl_vec<int32_t> with 1/0 values
     * 1 = Denied
     * 0 = Otherwise
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_MODE_DENIED = 557908446 /* (((0X01DE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Host Vehicle Sideslip Angle Authenticated Signal SUM output, triggered by HVPPP_HstVehSdslAngAuth
     *
     * Write 11 items int32_vec for following signals respectively:
     *  int32Values[0] = SignalType for which property is updated(to be used to fetch changed data)
     *  int32Values[1] = Av         Availability Indication
     *  int32Values[2] = LcFA       Loss of comm. Fault Active
     *  int32Values[3] = FsI        Failed Safety Indication
     *  int32Values[4] = FsFA       Failed Safety Fault Active
     *  int32Values[5] = FcI        Failed Security Indication
     *  int32Values[6] = FcFA       Failed Security Fault Active
     *  int32Values[7] = FoI        Failed Continuous Operation Indication
     *  int32Values[8] = FoFa       Failed Continuous Operation Fault Active
     *  int32Values[9] = FpI        Failed Protection Indication
     *  int32Values[10] = FpFA      Failed Protection Fault Active
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AvailabilityIndicationSum for Availability Indication
     * @data_enum SumPropertyIndex for vector indexing
     */
    HOST_VEHICLE_SIDESLIP_ANGLE_SUM = 557908447 /* (((0x01DF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL) */,
    /**
     * Battery Voltage (BatVlt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    BATTERY_VOLTAGE = 559943680 /* (((0x1000 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Type (TrlrTyp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum TrailerType
     */
    TRAILER_TYPE = 557846532 /* (((0x1004 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Width (TrlrWdth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    TRAILER_WIDTH = 557846533 /* (((0x1005 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Connection Counter (TrlrConnCntr)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_CONNECTION_COUNTER = 557846534 /* (((0x1006 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Connection Status (TrlrConnStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrailerConnectionStatus
     */
    TRAILER_CONNECTION_STATUS = 557846535 /* (((0x1007 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Reverse Light Failed Enabled (TrlRvsLghtFldEnbld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILER_REVERSE_LIGHT_FAILED_ENABLED = 555749384 /* (((0x1008 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Light Alerts Enabled (TrlrLghtAlrtEnbld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILER_LIGHT_ALERTS_ENABLED = 555749385 /* (((0x1009 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Theft Alert Enabled (TrlrThftAlrtEnbld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILER_THEFT_ALERT_ENABLED = 555749386 /* (((0x100A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Braking System Profile Status (TrlrBrkgSysProfSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrailerBrakingSystemProfileStatus
     */
    TRAILER_BRAKING_SYSTEM_PROFILE_STATUS = 557846541 /* (((0x100D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Profile Deletion (TrlrProfDeltn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum TrailerProfileDeletion
     */
    TRAILER_PROFILE_DELETION = 557846542 /* (((0x100E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Profile Driver Requested Selection (TrlrProfDrvrReqdSeltn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum TrailerProfileDriverRequestedSelection
     */
    TRAILER_PROFILE_DRIVER_REQUESTED_SELECTION = 557846543 /* (((0x100F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Profile Selection Response (TrlrProfSeltnResp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrailerProfileSelectionResponse
     */
    TRAILER_PROFILE_SELECTION_RESPONSE = 557846544 /* (((0x1010 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Overspeed Warning Customization Current Setting Value : Display Value (TDOSWCCSV_DspVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_OVERSPEED_WARNING_CUSTOMIZATION_DISPLAY_VALUE = 559943697 /* (((0x1011 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Overspeed Warning Customization Change Setting Request : Decrement Switch Active (TDOSWCCSR_DecSwAct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TEEN_DRIVER_OVERSPEED_WARNING_CUSTOMIZATION_DECREMENT_SWITCH_ACTIVE = 555749394 /* (((0x1012 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Overspeed Warning Customization Change Setting Request : Increment Switch Active (TDOSWCCSR_IncSwAct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TEEN_DRIVER_OVERSPEED_WARNING_CUSTOMIZATION_INCREMENT_SWITCH_ACTIVE = 555749395 /* (((0x1013 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Driver Selected Trailer Present (DrvrSeltdTrlrPrsnt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum DriverSelectedTrailerPresent
     */
    DRIVER_SELECTED_TRAILER_PRESENT = 557846548 /* (((0x1014 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 18 Protected : Engine Speed State Authenticated (ESP_EngSpdStAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum EngineSpeedState
     */
    ENGINE_SPEED_STATE = 557846549 /* (((0x1015 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Fuel Injected Rolling Count (FlInjRlCt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FUEL_INJECTED_ROLLING_COUNT = 559943702 /* (((0x1016 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Fuel Injected Rolling Count Reset Occurred (FlInjRlCtRstOcc)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FUEL_INJECTED_ROLLING_COUNT_RESET_OCCURRED = 555749399 /* (((0x1017 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Hitch Type (TrlrHtchTyp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum TrailerHitchType
     */
    TRAILER_HITCH_TYPE = 557846552 /* (((0x1018 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Video Processing Module General Information 1 Protected : Invisible Trailer Aux1 Camera Connection Status Authenticated (VPMGI1P_ITAux1CamConctStsAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum InvisibleTrailerAux1CameraConnectionStatus
     */
    INVISIBLE_TRAILER_AUX_1_CAMERA_CONNECTION_STATUS = 557846553 /* (((0x1019 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Video Processing Module General Information 1 Protected : Invisible Trailer Aux2 Camera Connection Status Authenticated (VPMGI1P_ITAux2CamConctStsAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum InvisibleTrailerAux2CameraConnectionStatus
     */
    INVISIBLE_TRAILER_AUX_2_CAMERA_CONNECTION_STATUS = 557846554 /* (((0x101A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Invisible Trailer Operational Status (InvsblTrlrOprtlSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum InvisibleTrailerOperationalStatus
     */
    INVISIBLE_TRAILER_OPERATIONAL_STATUS = 557846555 /* (((0x101B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Articulation Angle Calibration Status (TrlrArtclnAngCalSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrailerArticulationAngleCalibrationStatus
     */
    TRAILER_ARTICULATION_ANGLE_CALIBRATION_STATUS = 557846556 /* (((0x101C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Brake Light Failed (TrlrBrkLtFld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_BRAKE_LIGHT_FAILED = 555749405 /* (((0x101D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Brakes Detected (TrlrBrkDtd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_BRAKES_DETECTED = 555749406 /* (((0x101E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Disconnected Indication On (TrlrDisconndIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_DISCONNECTED_INDICATION_ON = 555749407 /* (((0x101F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Height (TrlrHght)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    TRAILER_HEIGHT = 557846560 /* (((0x1020 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Axle Count (NumofAxls)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum TrailerAxleCount
     */
    TRAILER_AXLE_COUNT = 557846561 /* (((0x1021 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Hitch Height (VehHtchHght)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    VEHICLE_HITCH_HEIGHT = 559943714 /* (((0x1022 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Hitch Length (VehHtchLgth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    VEHICLE_HITCH_LENGTH = 559943715 /* (((0x1023 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tongue Length (TrlrTngeLgth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILER_TONGUE_LENGTH = 557846564 /* (((0x1024 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Hitching Point Length (HtchPtLgth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    HITCHING_POINT_LENGTH = 557846565 /* (((0x1025 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Length (TrlrLgth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    TRAILER_LENGTH = 557846566 /* (((0x1026 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Reverse Lamp Outage Indication On (TrlrRvrsLmpOtgIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_REVERSE_LAMP_OUTAGE_INDICATION_ON = 555749415 /* (((0x1027 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Placard Pressure (TrlrPlcrdPres)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILER_PLACARD_PRESSURE = 557846568 /* (((0x1028 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer State Tow Haul Mode Override (TrlrStatTowHaulModeOvrrd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum TrailerStateTowHaulModeOverride
     */
    TRAILER_STATE_TOW_HAUL_MODE_OVERRIDE = 557846569 /* (((0x1029 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Count (TrlrTireCnt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILER_TIRE_COUNT = 557846570 /* (((0x102A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Learn Status (TrlrTireLrnSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrailerTireLearnStatus
     */
    TRAILER_TIRE_LEARN_STATUS = 557846571 /* (((0x102B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Left Front Pressure (TrlrTireLFPres)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TIRE_LEFT_FRONT_PRESSURE = 557846572 /* (((0x102C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Left Front Pressure Status (TrlrTireLFPresSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrailerTireLeftFrontPressureStatus
     */
    TRAILER_TIRE_LEFT_FRONT_PRESSURE_STATUS = 557846573 /* (((0x102D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Left Front Temperature (TrlrTireLFTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TIRE_LEFT_FRONT_TEMPERATURE = 557846574 /* (((0x102E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Left Middle Pressure (TrlrTireLtMdlPres)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TIRE_LEFT_MIDDLE_PRESSURE = 557846575 /* (((0x102F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Left Middle Pressure Status (TrlrTireLtMdlPresSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrailerTireLeftMiddlePressureStatus
     */
    TRAILER_TIRE_LEFT_MIDDLE_PRESSURE_STATUS = 557846576 /* (((0x1030 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Left Middle Temperature (TrlrTireLtMdlTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TIRE_LEFT_MIDDLE_TEMPERATURE = 557846577 /* (((0x1031 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Left Rear Pressure (TrlrTireLRPres)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TIRE_LEFT_REAR_PRESSURE = 557846578 /* (((0x1032 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Left Rear Pressure Status (TrlrTireLRPresSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrailerTireLeftRearPressureStatus
     */
    TRAILER_TIRE_LEFT_REAR_PRESSURE_STATUS = 557846579 /* (((0x1033 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Left Rear Temperature (TrlrTireLRTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TIRE_LEFT_REAR_TEMPERATURE = 557846580 /* (((0x1034 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Right Front Pressure (TrlrTireRFPres)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TIRE_RIGHT_FRONT_PRESSURE = 557846581 /* (((0x1035 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Right Front Pressure Status (TrlrTireRFPresSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrailerTireRightFrontPressureStatus
     */
    TRAILER_TIRE_RIGHT_FRONT_PRESSURE_STATUS = 557846582 /* (((0x1036 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Right Front Temperature (TrlrTireRFTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TIRE_RIGHT_FRONT_TEMPERATURE = 557846583 /* (((0x1037 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Right Middle Pressure (TrlrTireRtMdlPres)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TIRE_RIGHT_MIDDLE_PRESSURE = 557846584 /* (((0x1038 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Right Middle Pressure Status (TrlrTireRtMdlPresSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrailerTireRightMiddlePressureStatus
     */
    TRAILER_TIRE_RIGHT_MIDDLE_PRESSURE_STATUS = 557846585 /* (((0x1039 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Right Middle Temperature (TrlrTireRtMdlTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TIRE_RIGHT_MIDDLE_TEMPERATURE = 557846586 /* (((0x103A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Right Rear Pressure (TrlrTireRRPres)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TIRE_RIGHT_REAR_PRESSURE = 557846587 /* (((0x103B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Right Rear Pressure Status (TrlrTireRRPresSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrailerTireRightRearPressureStatus
     */
    TRAILER_TIRE_RIGHT_REAR_PRESSURE_STATUS = 557846588 /* (((0x103C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Right Rear Temperature (TrlrTireRRTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TIRE_RIGHT_REAR_TEMPERATURE = 557846589 /* (((0x103D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Pressure Feature Enabled (TrlrTirePresFtrEnbld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TIRE_PRESSURE_FEATURE_ENABLED = 555749438 /* (((0x103E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Pressure Sensor ID Learn Requested (TrlrTirePresSnsrIDLrnReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILER_TIRE_PRESSURE_SENSOR_ID_LEARN_REQUESTED = 555749439 /* (((0x103F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tire Pressure System Failed (TrlrTirePresSysFaild)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TIRE_PRESSURE_SYSTEM_FAILED = 555749440 /* (((0x1040 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailering App Aux 1 Camera Preview Requested (TrlrAppAux1CamPrvwReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILERING_APP_AUX_1_CAMERA_PREVIEW_REQUESTED = 555749441 /* (((0x1041 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailering App Aux 2 Camera Preview Requested (TrlrAppAux2CamPrvwReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILERING_APP_AUX_2_CAMERA_PREVIEW_REQUESTED = 555749442 /* (((0x1042 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailering App Invisible Trailer Preview Requested (TrlrAppInvsblTrlrPrvwReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILERING_APP_INVISIBLE_TRAILER_PREVIEW_REQUESTED = 555749443 /* (((0x1043 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Transmission Oil Temperature (TrnsOilTmp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRANSMISSION_OIL_TEMPERATURE = 557846596 /* (((0x1044 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 6 Protected : Vehicle Motion Movement State Authenticated (VMMP_VehMtnMvmtStatAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VehicleMotionMovementState
     */
    VEHICLE_MOTION_MOVEMENT_STATE = 557846597 /* (((0x1045 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Transport Mode Active Indication On (TrnspModeActvIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRANSPORT_MODE_ACTIVE_INDICATION_ON = 555749446 /* (((0x1046 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Transport Mode Inactive Indication On (TrnspModeInactiveIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRANSPORT_MODE_INACTIVE_INDICATION_ON = 555749447 /* (((0x1047 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Transport/Storage Logistics Mode Activation (TrnstStrgLogisticsMdActivation)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRANSPORT_STORAGE_LOGISTICS_MODE_ACTIVATION = 555749448 /* (((0x1048 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rain Sensor Active Indication On (RnSnsActIO)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    RAIN_SENSOR_ACTIVE_INDICATION_ON = 555749449 /* (((0x1049 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 15 Protected : Electric Park Brake Application Status Authenticated (EPBSP_ElecPrkBrkApplStsAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum ElectricParkBrakeApplicationStatus
     */
    ELECTRIC_PARK_BRAKE_APPLICATION_STATUS = 557846602 /* (((0x104A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Amplifier Sink State : DSP Available (ASS_DSPAvail)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    AMPLIFIER_SINK_STATE_DSP_AVAILABLE = 555749451 /* (((0x104B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Amplifier Sink State : Mutex Sink Mute State (ASS_MtxSnkMutStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    AMPLIFIER_SINK_STATE_MUTEX_SINK_MUTE_STATE = 555749452 /* (((0x104C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Amplifier Sink State : Phase Locked Loop Locked (ASS_PhLckdLpLckd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    AMPLIFIER_SINK_STATE_PHASE_LOCKED_LOOP_LOCKED = 555749453 /* (((0x104D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Amplifier Sink State : Suround Available (ASS_SurndAvail)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    AMPLIFIER_SINK_STATE_SUROUND_AVAILABLE = 555749454 /* (((0x104E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Amplifier Sink State : Vehicle Noise Compensation Available (ASS_VehNoisCmpnAvail)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    AMPLIFIER_SINK_STATE_VEHICLE_NOISE_COMPENSATION_AVAILABLE = 555749455 /* (((0x104F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Chime Request Information : Chime Producer Request (CRI_ChmPrdcrReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHIME_PRODUCER_REQUEST = 557846608 /* (((0x1050 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Critical Chime Producer Status (CrtclChmPrdcrStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CRITICAL_CHIME_PRODUCER_STATUS = 557846609 /* (((0x1051 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Forward Collision Alert Imminent Alert Audio Attenuation Requested (FrwdClsnAlrtImntAlrtAudAttnReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FORWARD_COLLISION_ALERT_IMMINENT_ALERT_AUDIO_ATTENUATION_REQUESTED = 555749458 /* (((0x1052 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Front Pedestrian Collision Mitigation Audio Attenuation Requested (FrtPedtrnClsnMtgnAudAttnReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FRONT_PEDESTRIAN_COLLISION_MITIGATION_AUDIO_ATTENUATION_REQUESTED = 555749459 /* (((0x1053 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Lane Centering Convenience Message Indication Request (LnCntrCnvMsgIndRqst)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum LaneCenteringConvenienceMessageIndicationRequest
     */
    LANE_CENTERING_CONVENIENCE_MESSAGE_INDICATION_REQUEST = 557846612 /* (((0x1054 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Lane Detection Warning and Control Audio Attenuation Requested (LDWCtrlAudAttnReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LANE_DETECTION_WARNING_AND_CONTROL_AUDIO_ATTENUATION_REQUESTED = 555749461 /* (((0x1055 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Chime Producer Status (ChmPrdcrStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     */
    CHIME_PRODUCER_STATUS = 557846614 /* (((0x1056 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Triggered Video Recorder Feature Present (TrgrdVidRcrdrFtrPrsnt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRIGGERED_VIDEO_RECORDER_FEATURE_PRESENT = 555749463 /* (((0x1057 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Cellular Network Date and Time Available (CellNWDateTimeAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CELLULAR_NETWORK_DATE_AND_TIME_AVAILABLE = 555749464 /* (((0x1058 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Time Display Format (TimeDispFormat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum TimeDisplayFormat
     */
    TIME_DISPLAY_FORMAT = 557846617 /* (((0x1059 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Front Center Stack Primary Video Input Locked (FrtCntrStckPriVidInLckd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum FrontCenterStackPrimaryVideoInputLocked
     */
    FRONT_CENTER_STACK_PRIMARY_VIDEO_INPUT_LOCKED = 557846618 /* (((0x105A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Front Center Stack Video Input Select (FrtCntrStckVidInSel)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum FrontCenterStackVideoInputSelect
     */
    FRONT_CENTER_STACK_VIDEO_INPUT_SELECT = 557846619 /* (((0x105B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Backup System Power Mode Protected : Remote Programming Active Authenticated (BSPMP_RmtProgmActvAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REMOTE_PROGRAMMING_ACTIVE = 555749468 /* (((0x105C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * RVC 12V Battery State of Charge (RVC12VBatSOC)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    RVC_12_V_BATTERY_STATE_OF_CHARGE = 559943773 /* (((0x105D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Lane Detection Warning and Control Visual Alert Command Generic (LnDtWrnCntrlVsAlrtCmdGnc)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum LaneDetectionWarningAndControlVisualAlertCommandGeneric
     */
    LANE_DETECTION_WARNING_AND_CONTROL_VISUAL_ALERT_COMMAND_GENERIC = 557846622 /* (((0x105E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Stability And Traction Control Information : Vehicle Stability Enhancement Current State (VehStbEnhcmntCurStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VehicleStabilityEnhancementCurrentState
     */
    VEHICLE_STABILITY_ENHANCEMENT_CURRENT_STATE = 557846623 /* (((0x105F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Forward Vehicle Imminent Alert Indication Request (FrwdVhImAlrtIndRqst)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum ForwardVehicleImminentAlertIndicationRequest
     */
    FORWARD_VEHICLE_IMMINENT_ALERT_INDICATION_REQUEST = 557846624 /* (((0x1060 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Engine Oil Change Indication On (EngOilChngIO)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ENGINE_OIL_CHANGE_INDICATION_ON = 555749473 /* (((0x1061 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Engine Oil Remaining Life (EngOilRmnLf)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ENGINE_OIL_REMAINING_LIFE = 559943778 /* (((0x1062 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Check Low Beams Indication On (CkLoBmsIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHECK_LOW_BEAMS_INDICATION_ON = 555749475 /* (((0x1063 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Turn Lamp Front Left Outage Indication On (TrnLmpFrtLtOtgIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TURN_LAMP_FRONT_LEFT_OUTAGE_INDICATION_ON = 555749476 /* (((0x1064 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Turn Lamp Front Right Outage Indication On (TrnLmpFrtRtOtgIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TURN_LAMP_FRONT_RIGHT_OUTAGE_INDICATION_ON = 555749477 /* (((0x1065 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * License Lamp Outage Indication On (LicLpOtIO)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LICENSE_LAMP_OUTAGE_INDICATION_ON = 555749478 /* (((0x1066 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Reverse Lamp Outage Indication On (RvLpOtIO)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REVERSE_LAMP_OUTAGE_INDICATION_ON = 555749479 /* (((0x1067 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 6 Protected : Teen Driver Active Authenticated (TDAP_TeenDrvrActvAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_ACTIVE = 555749480 /* (((0x1068 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Antilock Brake System Active Events Report (TnDrvABSAtvEvntsRpt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_ANTILOCK_BRAKE_SYSTEM_ACTIVE_EVENTS_REPORT = 557846633 /* (((0x1069 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Distance Driven Report (TnDrvDistDrvnRpt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_DISTANCE_DRIVEN_REPORT = 557846634 /* (((0x106A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Drowsy Driver Alerts Report (TnDrvDrowDrvAlrtsRpt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_DROWSY_DRIVER_ALERTS_REPORT = 557846635 /* (((0x106B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Feature Available (TeenDrvFtrAvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_FEATURE_AVAILABLE = 555749484 /* (((0x106C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Forward Collision Imminent Alerts Report (TDFwdClnImntAlrtsRpt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_FORWARD_COLLISION_IMMINENT_ALERTS_REPORT = 557846637 /* (((0x106D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Forward Collision Mitigation Braking Events Report (TDFwdClnMtgnBrEvRpt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_FORWARD_COLLISION_MITIGATION_BRAKING_EVENTS_REPORT = 557846638 /* (((0x106E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Lane Departure Warning Events Report (TeenDrvLDWEvntsRpt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_LANE_DEPARTURE_WARNING_EVENTS_REPORT = 557846639 /* (((0x106F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Maximum Speed Report (TeenDrvMaxSpdRpt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_MAXIMUM_SPEED_REPORT = 559943792 /* (((0x1070 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Over Speed Events Report (TnDrvOvSpdEvntsRpt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_OVER_SPEED_EVENTS_REPORT = 557846641 /* (((0x1071 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver PIN Stored (TnDrvPINStrd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_PIN_STORED = 555749490 /* (((0x1072 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Response (TeenDrvRsp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TeenDriverResponse
     */
    TEEN_DRIVER_RESPONSE = 557846643 /* (((0x1073 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Reverse Collision Mitigation Braking Events Report (TDRevClnMtgnBrEvRpt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_REVERSE_COLLISION_MITIGATION_BRAKING_EVENTS_REPORT = 557846644 /* (((0x1074 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Stability Control Events Report (TnDrvStblCtrlEvntsRpt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_STABILITY_CONTROL_EVENTS_REPORT = 557846645 /* (((0x1075 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Wide Open Throttle Events Report (TeenDrvWOTEvntsRpt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TEEN_DRIVER_WIDE_OPEN_THROTTLE_EVENTS_REPORT = 557846646 /* (((0x1076 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tire Pressure Information : TPMS Status (LF) (TirePrsStatLF)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TpmsStatusLf
     */
    TPMS_STATUS_LF = 557846647 /* (((0x1077 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tire Pressure Information : TPMS Status (LR) (TirePrsStatLR)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TpmsStatusLr
     */
    TPMS_STATUS_LR = 557846648 /* (((0x1078 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tire Pressure Information : TPMS Tire Location Warnings Enabled (TireLocatnWarnEn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TPMS_TIRE_LOCATION_WARNINGS_ENABLED = 555749497 /* (((0x1079 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Tire Pressure Monitoring System Failed (TrPrsMntrSysFld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIRE_PRESSURE_MONITORING_SYSTEM_FAILED = 555749498 /* (((0x107A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * TPMS Learn Complete Status (TPMTrLrnMdCmplt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TPMS_LEARN_COMPLETE_STATUS = 555749499 /* (((0x107B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Tire Pressure Monitoring Tire Loading Status (TrPrsMntrTrLdStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TirePressureMonitoringTireLoadingStatus
     */
    TIRE_PRESSURE_MONITORING_TIRE_LOADING_STATUS = 557846652 /* (((0x107C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tire Pressure Information : TPMS Status (RF) (TirePrsStatRF)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TpmsStatusRf
     */
    TPMS_STATUS_RF = 557846653 /* (((0x107D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tire Pressure Information : TPMS Status (RR) (TirePrsStatRR)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TpmsStatusRr
     */
    TPMS_STATUS_RR = 557846654 /* (((0x107E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Fog Light Failed (TrlrFgLtFld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_FOG_LIGHT_FAILED = 555749503 /* (((0x107F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Left Turn Indicator Light Failed (TrlLfTrInLtFld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_LEFT_TURN_INDICATOR_LIGHT_FAILED = 555749504 /* (((0x1080 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Right Turn Indicator Light Failed (TrlrRtTrInLtFld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_RIGHT_TURN_INDICATOR_LIGHT_FAILED = 555749505 /* (((0x1081 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Tail Light Failed (TrlrTlLtFld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_TAIL_LIGHT_FAILED = 555749506 /* (((0x1082 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Advanced Park Assist Cross Back-In Soft Button Status (APACrssBckInSftBtnStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdvancedParkAssistCrossBackInSoftButtonStatus
     */
    ADVANCED_PARK_ASSIST_CROSS_BACK_IN_SOFT_BUTTON_STATUS = 557846659 /* (((0x1083 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Advanced Park Assist Exit Park Soft Button Request (APAExtPrkSftBtnRqst)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AdvancedParkAssistExitParkSoftButtonRequest
     */
    ADVANCED_PARK_ASSIST_EXIT_PARK_SOFT_BUTTON_REQUEST = 557846660 /* (((0x1084 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Advanced Park Assist Exit Park Soft Button Status (APAExtPrkSftBtnStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdvancedParkAssistExitParkSoftButtonStatus
     */
    ADVANCED_PARK_ASSIST_EXIT_PARK_SOFT_BUTTON_STATUS = 557846661 /* (((0x1085 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Advanced Park Assist Focus Status CSM (APAFcStatCSM)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdvancedParkAssistFocusStatusCsm
     */
    ADVANCED_PARK_ASSIST_FOCUS_STATUS_CSM = 557846662 /* (((0x1086 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Advanced Park Assist Left Soft Button Status (APALftSftBtnStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdvancedParkAssistLeftSoftButtonStatus
     */
    ADVANCED_PARK_ASSIST_LEFT_SOFT_BUTTON_STATUS = 557846663 /* (((0x1087 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Advanced Park Assist Parallel Parking Soft Button Status (APAPrllPrkSftBtnStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdvancedParkAssistParallelParkingSoftButtonStatus
     */
    ADVANCED_PARK_ASSIST_PARALLEL_PARKING_SOFT_BUTTON_STATUS = 557846664 /* (((0x1088 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Advanced Park Assist Right Soft Button Status (APARghtSftBtnStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdvancedParkAssistRightSoftButtonStatus
     */
    ADVANCED_PARK_ASSIST_RIGHT_SOFT_BUTTON_STATUS = 557846665 /* (((0x1089 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Advanced Park Assist Searching Soft Button Status (APASrchSftBtnStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdvancedParkAssistSearchingSoftButtonStatus
     */
    ADVANCED_PARK_ASSIST_SEARCHING_SOFT_BUTTON_STATUS = 557846666 /* (((0x108A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Advanced Park Assist Warning Indications : Advanced Park Assist Focus Request (APAWI_FcsReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AdvancedParkAssistWarningIndicationsAdvancedParkAssistFocusRequest
     */
    ADVANCED_PARK_ASSIST_WARNING_INDICATIONS_ADVANCED_PARK_ASSIST_FOCUS_REQUEST = 557846667 /* (((0x108B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Advanced Park Assist Warning Indications : Advanced Park Assist Maneuver Progress (APAWI_MnvrPrgs)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ADVANCED_PARK_ASSIST_WARNING_INDICATIONS_ADVANCED_PARK_ASSIST_MANEUVER_PROGRESS = 559943820 /* (((0x108C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Advanced Park Assist Warning Indications : Advanced Park Assist Warning Indication Request (APAWI_WrnIndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AdvancedParkAssistWarningIndicationsAdvancedParkAssistWarningIndicationRequest
     */
    ADVANCED_PARK_ASSIST_WARNING_INDICATIONS_ADVANCED_PARK_ASSIST_WARNING_INDICATION_REQUEST = 557846669 /* (((0x108D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Build Up Flag (ADASIS_NAVILINK_BldUpFlg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkBuildUpFlag
     */
    ADASIS_NAVILINK_BUILD_UP_FLAG = 557846670 /* (((0x108E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Controlled Access Road (ADASIS_NAVILINK_CntrldAccssRd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkControlledAccessRoad
     */
    ADASIS_NAVILINK_CONTROLLED_ACCESS_ROAD = 557846671 /* (((0x108F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Country Code (ADASIS_NAVILINK_CntryCd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkCountryCode
     */
    ADASIS_NAVILINK_COUNTRY_CODE = 557846672 /* (((0x1090 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Digital Map Conditional Speed Limit (ADASIS_NAVILINK_DigMpCndlSpdLmt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkDigitalMapConditionalSpeedLimit
     */
    ADASIS_NAVILINK_DIGITAL_MAP_CONDITIONAL_SPEED_LIMIT = 557846673 /* (((0x1091 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Digital Map Conditional Speed Limit Type (ADASIS_NAVILINK_DgMpCnSpdLmTyp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkDigitalMapConditionalSpeedLimitType
     */
    ADASIS_NAVILINK_DIGITAL_MAP_CONDITIONAL_SPEED_LIMIT_TYPE = 557846674 /* (((0x1092 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Digital Map Driving Side (ADASIS_NAVILINK_DigMpDrvngSd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkDigitalMapDrivingSide
     */
    ADASIS_NAVILINK_DIGITAL_MAP_DRIVING_SIDE = 557846675 /* (((0x1093 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Digital Map Effective Speed Limit (ADASIS_NAVILINK_DgtlMpEfSpdLm)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkDigitalMapEffectiveSpeedLimit
     */
    ADASIS_NAVILINK_DIGITAL_MAP_EFFECTIVE_SPEED_LIMIT = 557846676 /* (((0x1094 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Digital Map Effective Speed Limit Type (ADASIS_NAVILINK_DigMpEfSpdLmTyp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkDigitalMapEffectiveSpeedLimitType
     */
    ADASIS_NAVILINK_DIGITAL_MAP_EFFECTIVE_SPEED_LIMIT_TYPE = 557846677 /* (((0x1095 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Digital Map Passing Restriction (ADASIS_NAVILINK_DgtlMpPsngRst)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkDigitalMapPassingRestriction
     */
    ADASIS_NAVILINK_DIGITAL_MAP_PASSING_RESTRICTION = 557846678 /* (((0x1096 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Digital Map Posted Speed Limit Assured (ADASIS_NAVILINK_DigMpPstSpdLmAs)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkDigitalMapPostedSpeedLimitAssured
     */
    ADASIS_NAVILINK_DIGITAL_MAP_POSTED_SPEED_LIMIT_ASSURED = 557846679 /* (((0x1097 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Digital Map Speed Category (ADASIS_NAVILINK_DgtlMpSpdCtgry)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkDigitalMapSpeedCategory
     */
    ADASIS_NAVILINK_DIGITAL_MAP_SPEED_CATEGORY = 557846680 /* (((0x1098 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Digital Map Version Quarter (ADASIS_NAVILINK_DigMpVerQtr)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkDigitalMapVersionQuarter
     */
    ADASIS_NAVILINK_DIGITAL_MAP_VERSION_QUARTER = 557846681 /* (((0x1099 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Digital Map Version Year (ADASIS_NAVILINK_DigMpVerYr)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkDigitalMapVersionYear
     */
    ADASIS_NAVILINK_DIGITAL_MAP_VERSION_YEAR = 557846682 /* (((0x109A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Functional Road Class (ADASIS_NAVILINK_FncRdClss)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkFunctionalRoadClass
     */
    ADASIS_NAVILINK_FUNCTIONAL_ROAD_CLASS = 557846683 /* (((0x109B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Lane Category (ADASIS_NAVILINK_LnCtgry)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkLaneCategory
     */
    ADASIS_NAVILINK_LANE_CATEGORY = 557846684 /* (((0x109C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Map data availability (ADASIS_NAVILINK_MpDtAv)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkMapDataAvailability
     */
    ADASIS_NAVILINK_MAP_DATA_AVAILABILITY = 557846685 /* (((0x109D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Separated Lane Road (ADASIS_NAVILINK_SprtdLnRd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkSeparatedLaneRoad
     */
    ADASIS_NAVILINK_SEPARATED_LANE_ROAD = 557846686 /* (((0x109E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Speed Limit Recommended Speed (ADASIS_NAVILINK_SpdLmtRcmdSpd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    ADASIS_NAVILINK_SPEED_LIMIT_RECOMMENDED_SPEED = 557846687 /* (((0x109F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * ADASIS NAVILINK Speed Limit Unit (ADASIS_NAVILINK_SpdLmtUnt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdasisNavilinkSpeedLimitUnit
     */
    ADASIS_NAVILINK_SPEED_LIMIT_UNIT = 557846688 /* (((0x10A0 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Telematics Audio Request : Audio Source Status (TAR_AudSrcStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TelematicsAudioRequestAudioSourceStatus
     */
    TELEMATICS_AUDIO_REQUEST_AUDIO_SOURCE_STATUS = 557846689 /* (((0x10A1 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Telematics Audio Request : Audio Connection Request (TAR_AudConctReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TelematicsAudioRequestAudioConnectionRequest
     */
    TELEMATICS_AUDIO_REQUEST_AUDIO_CONNECTION_REQUEST = 557846690 /* (((0x10A2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Language Selection Extended (LngSelExt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum LanguageSelectionExtended
     */
    LANGUAGE_SELECTION_EXTENDED = 557846691 /* (((0x10A3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Left Front Seat Status Display Active (LFStStsDispActv)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    LEFT_FRONT_SEAT_STATUS_DISPLAY_ACTIVE = 555749540 /* (((0x10A4 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Right Front Seat Status Display Active (RFStStsDispActv)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    RIGHT_FRONT_SEAT_STATUS_DISPLAY_ACTIVE = 555749541 /* (((0x10A5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Performance Mode Main Menu Type (PerfMdMainMenuTy)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum PerformanceModeMainMenuType
     */
    PERFORMANCE_MODE_MAIN_MENU_TYPE = 557846694 /* (((0x10A6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Elevated Idle Customization Current Setting Value (ElvtdIdlCstCrStVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum ElevatedIdleCustomizationCurrentSettingValue
     */
    ELEVATED_IDLE_CUSTOMIZATION_CURRENT_SETTING_VALUE = 557846695 /* (((0x10A7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Elevated Idle Customization Change Setting Request (ElvtdIdlCstChgSetReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum ElevatedIdleCustomizationChangeSettingRequest
     */
    ELEVATED_IDLE_CUSTOMIZATION_CHANGE_SETTING_REQUEST = 557846696 /* (((0x10A8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Leveling System Alignment Mode Customization Setting Selectable (LvlgSysAlgnMdCstSetSelable)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LEVELING_SYSTEM_ALIGNMENT_MODE_CUSTOMIZATION_SETTING_SELECTABLE = 555749545 /* (((0x10A9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Front Center Stack Low Volume Module Video Input Locked (FrtCntrStckLVMVidInLckd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum FrontCenterStackLowVolumeModuleVideoInputLocked
     */
    FRONT_CENTER_STACK_LOW_VOLUME_MODULE_VIDEO_INPUT_LOCKED = 557846698 /* (((0x10AA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Low Volume Module Audio Video Request : Application State (LVMAVR_ApplStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum LowVolumeModuleAudioVideoRequestApplicationState
     */
    LOW_VOLUME_MODULE_AUDIO_VIDEO_REQUEST_APPLICATION_STATE = 557846699 /* (((0x10AB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Front Center Stack Touch Controller Reset Command (FrtCntrStckTchCtlrRstCmd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    FRONT_CENTER_STACK_TOUCH_CONTROLLER_RESET_COMMAND = 555749548 /* (((0x10AC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * System Power Mode Protected : Start/Stop Ignition Switch Pressed Authenticated (RIP_StrtStopIgnSwPrssdAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    START_STOP_IGNITION_SWITCH_PRESSED = 555749549 /* (((0x10AD | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Front Passenger Seat Belt Reminder Occupancy Status (FrntPsStBltRmOccStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum FrontPassengerSeatBeltReminderOccupancyStatus
     */
    FRONT_PASSENGER_SEAT_BELT_REMINDER_OCCUPANCY_STATUS = 557846703 /* (((0x10AF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Transmission Estimated Gear Protected : Transmission Shift Lever Position Authenticated (TEGP_TrnsShftLvrPstnAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TransmissionShiftLeverPosition
     */
    TRANSMISSION_SHIFT_LEVER_POSITION = 557846704 /* (((0x10B0 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Compass Corrected Heading (CmpsCrHding)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    COMPASS_CORRECTED_HEADING = 557846705 /* (((0x10B1 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Driving Mode Visualization Screen Status (DrvModeVisScreenSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum DrivingModeVisualizationScreenStatus
     */
    DRIVING_MODE_VISUALIZATION_SCREEN_STATUS = 557846706 /* (((0x10B2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Track Mode Active Aerodynamics Visualization Display Value (TkModeActvAeroVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrackModeActiveAerodynamicsVisualizationDisplayValue
     */
    TRACK_MODE_ACTIVE_AERODYNAMICS_VISUALIZATION_DISPLAY_VALUE = 557846707 /* (((0x10B3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Track Mode Brake Pedal Visualization Display Value (TkModeBrkPedVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrackModeBrakePedalVisualizationDisplayValue
     */
    TRACK_MODE_BRAKE_PEDAL_VISUALIZATION_DISPLAY_VALUE = 557846708 /* (((0x10B4 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Track Mode ESC Visualization Display Value (TkModeESCVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrackModeEscVisualizationDisplayValue
     */
    TRACK_MODE_ESC_VISUALIZATION_DISPLAY_VALUE = 557846709 /* (((0x10B5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Track Mode Powertrain Visualization Display Value (TkModePwrtrnVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrackModePowertrainVisualizationDisplayValue
     */
    TRACK_MODE_POWERTRAIN_VISUALIZATION_DISPLAY_VALUE = 557846710 /* (((0x10B6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Track Mode Sound Visualization Display Value (TkModeSndVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrackModeSoundVisualizationDisplayValue
     */
    TRACK_MODE_SOUND_VISUALIZATION_DISPLAY_VALUE = 557846711 /* (((0x10B7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Track Mode Steering Visualization Display Value (TkModeStrgVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrackModeSteeringVisualizationDisplayValue
     */
    TRACK_MODE_STEERING_VISUALIZATION_DISPLAY_VALUE = 557846712 /* (((0x10B8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Track Mode Suspension Visualization Display Value (TkModeSpnsnVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrackModeSuspensionVisualizationDisplayValue
     */
    TRACK_MODE_SUSPENSION_VISUALIZATION_DISPLAY_VALUE = 557846713 /* (((0x10B9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Weather Snow Mode Active Aerodynamics Visualization Display Value (WthrSnwModeActvAeroVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum WeatherSnowModeActiveAerodynamicsVisualizationDisplayValue
     */
    WEATHER_SNOW_MODE_ACTIVE_AERODYNAMICS_VISUALIZATION_DISPLAY_VALUE = 557846714 /* (((0x10BA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Weather Snow Mode Brake Pedal Visualization Display Value (WthrSnwModeBrkPedVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum WeatherSnowModeBrakePedalVisualizationDisplayValue
     */
    WEATHER_SNOW_MODE_BRAKE_PEDAL_VISUALIZATION_DISPLAY_VALUE = 557846715 /* (((0x10BB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Weather Snow Mode ESC Visualization Display Value (WthrSnwModeESCVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum WeatherSnowModeEscVisualizationDisplayValue
     */
    WEATHER_SNOW_MODE_ESC_VISUALIZATION_DISPLAY_VALUE = 557846716 /* (((0x10BC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Weather Snow Mode Powertrain Visualization Display Value (WthrSnwModePwrtrnVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum WeatherSnowModePowertrainVisualizationDisplayValue
     */
    WEATHER_SNOW_MODE_POWERTRAIN_VISUALIZATION_DISPLAY_VALUE = 557846717 /* (((0x10BD | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Weather Snow Mode Sound Visualization Display Value (WthrSnwModeSndVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum WeatherSnowModeSoundVisualizationDisplayValue
     */
    WEATHER_SNOW_MODE_SOUND_VISUALIZATION_DISPLAY_VALUE = 557846718 /* (((0x10BE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Weather Snow Mode Steering Visualization Display Value (WthrSnwModeStrgVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum WeatherSnowModeSteeringVisualizationDisplayValue
     */
    WEATHER_SNOW_MODE_STEERING_VISUALIZATION_DISPLAY_VALUE = 557846719 /* (((0x10BF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Weather Snow Mode Suspension Visualization Display Value (WthrSnwModeSpnsnVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum WeatherSnowModeSuspensionVisualizationDisplayValue
     */
    WEATHER_SNOW_MODE_SUSPENSION_VISUALIZATION_DISPLAY_VALUE = 557846721 /* (((0x10C1 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Sport Mode Active Aerodynamics Visualization Display Value (SprtModeActvAeroVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SportModeActiveAerodynamicsVisualizationDisplayValue
     */
    SPORT_MODE_ACTIVE_AERODYNAMICS_VISUALIZATION_DISPLAY_VALUE = 557846722 /* (((0x10C2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Sport Mode Brake Pedal Visualization Display Value (SprtModeBrkPedVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SportModeBrakePedalVisualizationDisplayValue
     */
    SPORT_MODE_BRAKE_PEDAL_VISUALIZATION_DISPLAY_VALUE = 557846723 /* (((0x10C3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Sport Mode ESC Visualization Display Value (SprtModeESCVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SportModeEscVisualizationDisplayValue
     */
    SPORT_MODE_ESC_VISUALIZATION_DISPLAY_VALUE = 557846724 /* (((0x10C4 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Sport Mode Powertrain Visualization Display Value (SprtModePwrtrnVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SportModePowertrainVisualizationDisplayValue
     */
    SPORT_MODE_POWERTRAIN_VISUALIZATION_DISPLAY_VALUE = 557846725 /* (((0x10C5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Sport Mode Sound Visualization Display Value (SprtModeSndVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SportModeSoundVisualizationDisplayValue
     */
    SPORT_MODE_SOUND_VISUALIZATION_DISPLAY_VALUE = 557846726 /* (((0x10C6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Sport Mode Steering Visualization Display Value (SprtModeStrgVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SportModeSteeringVisualizationDisplayValue
     */
    SPORT_MODE_STEERING_VISUALIZATION_DISPLAY_VALUE = 557846727 /* (((0x10C7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Sport Mode Suspension Visualization Display Value (SprtModeSpnsnVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SportModeSuspensionVisualizationDisplayValue
     */
    SPORT_MODE_SUSPENSION_VISUALIZATION_DISPLAY_VALUE = 557846728 /* (((0x10C8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tour Mode Active Aerodynamics Visualization Display Value (TourModeActvAeroVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TourModeActiveAerodynamicsVisualizationDisplayValue
     */
    TOUR_MODE_ACTIVE_AERODYNAMICS_VISUALIZATION_DISPLAY_VALUE = 557846729 /* (((0x10C9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tour Mode Brake Pedal Visualization Display Value (TourModeBrkPedVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TourModeBrakePedalVisualizationDisplayValue
     */
    TOUR_MODE_BRAKE_PEDAL_VISUALIZATION_DISPLAY_VALUE = 557846730 /* (((0x10CA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tour Mode ESC Visualization Display Value (TourModeESCVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TourModeEscVisualizationDisplayValue
     */
    TOUR_MODE_ESC_VISUALIZATION_DISPLAY_VALUE = 557846731 /* (((0x10CB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tour Mode Powertrain Visualization Display Value (TourModePwrtrnVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TourModePowertrainVisualizationDisplayValue
     */
    TOUR_MODE_POWERTRAIN_VISUALIZATION_DISPLAY_VALUE = 557846732 /* (((0x10CC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tour Mode Sound Visualization Display Value (TourModeSndVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TourModeSoundVisualizationDisplayValue
     */
    TOUR_MODE_SOUND_VISUALIZATION_DISPLAY_VALUE = 557846733 /* (((0x10CD | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tour Mode Steering Visualization Display Value (TourModeStrgVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TourModeSteeringVisualizationDisplayValue
     */
    TOUR_MODE_STEERING_VISUALIZATION_DISPLAY_VALUE = 557846734 /* (((0x10CE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tour Mode Suspension Visualization Display Value (TourModeSpnsnVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TourModeSuspensionVisualizationDisplayValue
     */
    TOUR_MODE_SUSPENSION_VISUALIZATION_DISPLAY_VALUE = 557846735 /* (((0x10CF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Hitching Point Length Extended (HtchPtLgthExtd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    HITCHING_POINT_LENGTH_EXTENDED = 557846736 /* (((0x10D0 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 22 Protected : Propulsion System Active Authenticated (PSP_PrplSysActvAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PROPULSION_SYSTEM_ACTIVE = 555749585 /* (((0x10D1 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 15 Protected : Service Trailer Braking System Indication On Authenticated (TBIP_ServTrlrBrkgSysIndOnAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SERVICE_TRAILER_BRAKING_SYSTEM_INDICATION_ON = 555749586 /* (((0x10D2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 15 Protected : Trailer Wiring Fault Indication On Authenticated (TBIP_TrlrWrgFltIndOnAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_WIRING_FAULT_INDICATION_ON = 555749587 /* (((0x10D3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 15 Protected : Trailer Brakes Disabled Indication On Authenticated (TBIP_TrlrBrkDsbldIndOnAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRAILER_BRAKES_DISABLED_INDICATION_ON = 555749588 /* (((0x10D4 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Mass Estimate Status (VehMassEstSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VehicleMassEstimateStatus
     */
    VEHICLE_MASS_ESTIMATE_STATUS = 557846741 /* (((0x10D5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Mass Estimate (VehMassEst)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VEHICLE_MASS_ESTIMATE = 557846742 /* (((0x10D6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Current Radio AM Frequency (CurrRadioAMFreq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    CURRENT_RADIO_AM_FREQUENCY = 557846743 /* (((0x10D7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 46 Protected : Lateral Acceleration Authenticated (LatAccelAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LATERAL_ACCELERATION = 559943896 /* (((0x10D8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 46 Protected : Longitudinal Acceleration Authenticated (LongAccelAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LONGITUDINAL_ACCELERATION = 559943897 /* (((0x10D9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Restore Customization Defaults Request (RstrCstDfltReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    RESTORE_CUSTOMIZATION_DEFAULTS_REQUEST = 555749594 /* (((0x10DA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 5 Protected : Driver Seat Memory Identifier Authenticated (TDAP_DrvrStMemIdfrAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum DriverSeatMemoryIdentifier
     */
    DRIVER_SEAT_MEMORY_IDENTIFIER = 557846747 /* (((0x10DB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Running Boards Manual Deployment Customization Setting Selectable (RnngBrdManDplyCstSetSelbl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    RUNNING_BOARDS_MANUAL_DEPLOYMENT_CUSTOMIZATION_SETTING_SELECTABLE = 555749596 /* (((0x10DC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Leveling System Service Mode Customization Setting Selectable (LvlgSysServMdCstSetSelable)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LEVELING_SYSTEM_SERVICE_MODE_CUSTOMIZATION_SETTING_SELECTABLE = 555749597 /* (((0x10DD | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Occupant Restraint Information Protected : Driver Seat Belt Status Authenticated (ORIP_DrvrStBltStsAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum DriverSeatBeltStatus
     */
    DRIVER_SEAT_BELT_STATUS = 557846750 /* (((0x10DE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Front Passenger Seat belt Status (FrntPsSeatbeltStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum FrontPassengerSeatBeltStatus
     */
    FRONT_PASSENGER_SEAT_BELT_STATUS = 557846751 /* (((0x10DF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Camera Video ICS Display Active (CamVidICS_DispAct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    CAMERA_VIDEO_ICS_DISPLAY_ACTIVE = 555749600 /* (((0x10E0 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Curb View Feature Active Request (CurbVwFtrActvReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum CurbViewFeatureActiveRequest
     */
    CURB_VIEW_FEATURE_ACTIVE_REQUEST = 557846753 /* (((0x10E1 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Display Smart Tow Video On (DispSmrtTowVidOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DISPLAY_SMART_TOW_VIDEO_ON = 555749602 /* (((0x10E2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Display Front 360 Camera ON (DspFrnt360CmrON)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DISPLAY_FRONT_360_CAMERA_ON = 555749603 /* (((0x10E3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Display Triggered Video On (DsplyTrgVdOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DISPLAY_TRIGGERED_VIDEO_ON = 555749604 /* (((0x10E4 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Front 360 Camera Switch Active (Frt360CamSwAct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    FRONT_360_CAMERA_SWITCH_ACTIVE = 555749605 /* (((0x10E5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Hitch View Autonomous Electric Park Brake Apply Requested (HtchVwAutoElecPrkBrkAppReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    HITCH_VIEW_AUTONOMOUS_ELECTRIC_PARK_BRAKE_APPLY_REQUESTED = 555749606 /* (((0x10E6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * No SD Card Present Indication On (NoSDCrdPrIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    NO_SD_CARD_PRESENT_INDICATION_ON = 555749607 /* (((0x10E7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * SD Card Error Indication On (SDCrdErrIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SD_CARD_ERROR_INDICATION_ON = 555749608 /* (((0x10E8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * SD Card Full Indication On (SDCrdFllIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SD_CARD_FULL_INDICATION_ON = 555749609 /* (((0x10E9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Steering Wheel Information Protected : Steering Wheel Angle Calibration Status Authenticated (SWIP_StrgWhlAngCalStsAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SteeringWheelAngleCalibrationStatus
     */
    STEERING_WHEEL_ANGLE_CALIBRATION_STATUS = 557846762 /* (((0x10EA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Triggered Video Recorder Switch Active (TrgdVidRecSwAct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRIGGERED_VIDEO_RECORDER_SWITCH_ACTIVE = 555749611 /* (((0x10EB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Battery Voltage Indication Request (BattVltIRq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum BatteryVoltageIndicationRequest
     */
    BATTERY_VOLTAGE_INDICATION_REQUEST = 557846764 /* (((0x10EC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Wireless Charging System Charging Status (WrlsChrgSysChrgStat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum WirelessChargingSystemChargingStatus
     */
    WIRELESS_CHARGING_SYSTEM_CHARGING_STATUS = 557846765 /* (((0x10ED | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Adaptive Cruise Control Engaged (AdptCrsCntrlEngd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ADAPTIVE_CRUISE_CONTROL_ENGAGED = 555749614 /* (((0x10EE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 34 Protected : Lane Centering Control Indication Request Authenticated (ASDRP_LnCntrCtlIndReqAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum LaneCenteringControlIndicationRequest
     */
    LANE_CENTERING_CONTROL_INDICATION_REQUEST = 557846767 /* (((0x10EF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Service Driver Assist System Visual Message Request On (SrvDvrAsstSystVslMsgRqstOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SERVICE_DRIVER_ASSIST_SYSTEM_VISUAL_MESSAGE_REQUEST_ON = 555749616 /* (((0x10F0 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Adaptive Cruise Control Temporary Unavailable Indication On (ACCTmpUnvIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ADAPTIVE_CRUISE_CONTROL_TEMPORARY_UNAVAILABLE_INDICATION_ON = 555749617 /* (((0x10F1 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 22 Protected : Remote Vehicle Start Engine Running Authenticated (PSP_RmtVehStrtEngRnngAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REMOTE_VEHICLE_START_ENGINE_RUNNING = 555749618 /* (((0x10F2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 22 Protected : Engine Running Authenticated (PSP_EngRnngAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ENGINE_RUNNING = 555749619 /* (((0x10F3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Remote Reflash Campaign Available (RmtRflshCmpgnAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REMOTE_REFLASH_CAMPAIGN_AVAILABLE = 555749620 /* (((0x10F4 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Remote ReFlash Electic Power Readiness (RmtReFlshElecPwrRdnes)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REMOTE_REFLASH_ELECTIC_POWER_READINESS = 559943925 /* (((0x10F5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Lane Centering Speech Prompt Request (LnCntrSpchPrmtReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum LaneCenteringSpeechPromptRequest
     */
    LANE_CENTERING_SPEECH_PROMPT_REQUEST = 557846774 /* (((0x10F6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Customer Usable State of Charge (CustUsblSOC)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CUSTOMER_USABLE_STATE_OF_CHARGE = 559943928 /* (((0x10F8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Charge Complete : Day of Week (HVBCC_DyOfWk)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HighVoltageBatteryChargeCompleteDayOfWeek
     */
    HIGH_VOLTAGE_BATTERY_CHARGE_COMPLETE_DAY_OF_WEEK = 557846777 /* (((0x10F9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Charge Complete : Hour of Day (HVBCC_HrOfDy)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_CHARGE_COMPLETE_HOUR_OF_DAY = 557846778 /* (((0x10FA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Charge Complete : Minute of Hour (HVBCC_MinOfHr)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_CHARGE_COMPLETE_MINUTE_OF_HOUR = 557846779 /* (((0x10FB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Charge Complete : Minutes Remaining (HVBCC_MinRmn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_CHARGE_COMPLETE_MINUTES_REMAINING = 557846780 /* (((0x10FC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Charge Complete : Time Display Format (HVBCC_TmDispFormat)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HighVoltageBatteryChargeCompleteTimeDisplayFormat
     */
    HIGH_VOLTAGE_BATTERY_CHARGE_COMPLETE_TIME_DISPLAY_FORMAT = 557846781 /* (((0x10FD | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Propulsion Range Projected (HiVltgBatPrplRngPrjtd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_PROPULSION_RANGE_PROJECTED = 559943934 /* (((0x10FE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Override Next Planned Charge : Request (ONPC_Req)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum OverrideNextPlannedChargeRequest
     */
    OVERRIDE_NEXT_PLANNED_CHARGE_REQUEST = 557846783 /* (((0x10FF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Override Next Planned Charge : Target Charge Level Request (ONPC_TgtChrgLvlReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    OVERRIDE_NEXT_PLANNED_CHARGE_TARGET_CHARGE_LEVEL_REQUEST = 557846784 /* (((0x1100 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Portable Charge Cord Limit Reduced Charge Current Level (PrtblChrgCordLimRdcdChrgCurrLvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PORTABLE_CHARGE_CORD_LIMIT_REDUCED_CHARGE_CURRENT_LEVEL = 557846785 /* (((0x1101 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Time of Day Charging Next Planned : Charge (TODCNP_Chrg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TimeOfDayChargingNextPlannedCharge
     */
    TIME_OF_DAY_CHARGING_NEXT_PLANNED_CHARGE = 557846786 /* (((0x1102 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Time of Day Charging Next Planned : Departure Day of Week (TODCNP_DprtrDyOfWk)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TimeOfDayChargingNextPlannedDepartureDayOfWeek
     */
    TIME_OF_DAY_CHARGING_NEXT_PLANNED_DEPARTURE_DAY_OF_WEEK = 557846787 /* (((0x1103 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Time of Day Charging Next Planned : Departure Hour of Day (TODCNP_DprtrHrOfDy)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIME_OF_DAY_CHARGING_NEXT_PLANNED_DEPARTURE_HOUR_OF_DAY = 557846788 /* (((0x1104 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Time of Day Charging Next Planned : Departure Minute of Hour (TODCNP_DprtrMinOfHr)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIME_OF_DAY_CHARGING_NEXT_PLANNED_DEPARTURE_MINUTE_OF_HOUR = 557846789 /* (((0x1105 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Time of Day Charging Next Planned : Portable Charge Cord Limit Customization Current Setting Value (TODCNP_PCCLCstCurrSetVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TimeOfDayChargingNextPlannedPortableChargeCordLimitCustomizationCurrentSettingValue
     */
    TIME_OF_DAY_CHARGING_NEXT_PLANNED_PORTABLE_CHARGE_CORD_LIMIT_CUSTOMIZATION_CURRENT_SETTING_VALUE = 557846790 /* (((0x1106 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Time of Day Charging Next Planned : Target Charge Level (TODCNP_TgtChrgLvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIME_OF_DAY_CHARGING_NEXT_PLANNED_TARGET_CHARGE_LEVEL = 557846791 /* (((0x1107 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Display High Voltage Battery Charging Complete Information (DispHiVltgBatChrgCmpltInfo)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DISPLAY_HIGH_VOLTAGE_BATTERY_CHARGING_COMPLETE_INFORMATION = 555749640 /* (((0x1108 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Charge Complete : Time Display Power Level (HVBCC_TmDispPwrLvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HighVoltageBatteryChargeCompleteTimeDisplayPowerLevel
     */
    HIGH_VOLTAGE_BATTERY_CHARGE_COMPLETE_TIME_DISPLAY_POWER_LEVEL = 557846793 /* (((0x1109 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Remaining Usable Energy (HiVltgBatRmnUsblEngy)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_REMAINING_USABLE_ENERGY = 559943946 /* (((0x110A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery State of Charge : Battery State of Charge (HVBSOC_BatSOC)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_STATE_OF_CHARGE_BATTERY_STATE_OF_CHARGE = 559943947 /* (((0x110B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Stop Charging Button Visible (HiVltgBatStopChrgBtnVsbl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_STOP_CHARGING_BUTTON_VISIBLE = 555749644 /* (((0x110C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Stop Charging Request (HiVltgBatStopChrgReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    HIGH_VOLTAGE_BATTERY_STOP_CHARGING_REQUEST = 555749645 /* (((0x110D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Total Usable Energy (HiVltgBatTotUsblEngy)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_TOTAL_USABLE_ENERGY = 559943950 /* (((0x110E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Charger System Status (HiVltgChrgrSysSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HighVoltageChargerSystemStatus
     */
    HIGH_VOLTAGE_CHARGER_SYSTEM_STATUS = 557846799 /* (((0x110F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Insufficient Time to Complete Charge Indication On (InsfcntTmtoCmpltChrgIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INSUFFICIENT_TIME_TO_COMPLETE_CHARGE_INDICATION_ON = 555749648 /* (((0x1110 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Override Next Planned Charge : Departure Day of Week Request (ONPC_DprtrDyOfWkReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum OverrideNextPlannedChargeDepartureDayOfWeekRequest
     */
    OVERRIDE_NEXT_PLANNED_CHARGE_DEPARTURE_DAY_OF_WEEK_REQUEST = 557846801 /* (((0x1111 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Override Next Planned Charge : Departure Hour of Day Request (ONPC_DprtrHrOfDyReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    OVERRIDE_NEXT_PLANNED_CHARGE_DEPARTURE_HOUR_OF_DAY_REQUEST = 557846802 /* (((0x1112 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Override Next Planned Charge : Departure Minute of Hour Request (ONPC_DprtrMinOfHrReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    OVERRIDE_NEXT_PLANNED_CHARGE_DEPARTURE_MINUTE_OF_HOUR_REQUEST = 557846803 /* (((0x1113 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Portable Charge Cord Limit Maximum Charge Current Level (PrtblChrgCordLimMaxChrgCurrLvl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PORTABLE_CHARGE_CORD_LIMIT_MAXIMUM_CHARGE_CURRENT_LEVEL = 557846804 /* (((0x1114 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Portable Charge Cord Limit Setting Expiration Indication On (PrtblChrgCordLimSetExpIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PORTABLE_CHARGE_CORD_LIMIT_SETTING_EXPIRATION_INDICATION_ON = 555749653 /* (((0x1115 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Range Gained This Charge (RngGaindThisChrg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    RANGE_GAINED_THIS_CHARGE = 557846806 /* (((0x1116 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Range Per Hour Gained This Charge (RngPerHrGaindThisChrg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    RANGE_PER_HOUR_GAINED_THIS_CHARGE = 557846807 /* (((0x1117 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Time of Day Charging Invalid HMI Entry Indication Requested (TmOfDyChrgInvHMIEntIndReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIME_OF_DAY_CHARGING_INVALID_HMI_ENTRY_INDICATION_REQUESTED = 555749656 /* (((0x1118 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Time of Day Charging Setting Request : Portable Charge Cord Limit Customization Setting Request (PrtblChrgCordLimCstSetReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum TimeOfDayChargingSettingRequestPortableChargeCordLimitCustomizationSettingRequest
     */
    TIME_OF_DAY_CHARGING_SETTING_REQUEST_PORTABLE_CHARGE_CORD_LIMIT_CUSTOMIZATION_SETTING_REQUEST = 557846809 /* (((0x1119 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Propulsion Range (HiVltgBatPrplRng)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_PROPULSION_RANGE = 559943962 /* (((0x111A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Compass Octant Heading (CmpsOctHding)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum CompassOctantHeading
     */
    COMPASS_OCTANT_HEADING = 557846775 /* (((0x10F7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Virtual Control Accessory Circuit Control Available (VirtCtlAccCktCtlAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VirtualControlAccessoryCircuitControlAvailable
     */
    VIRTUAL_CONTROL_ACCESSORY_CIRCUIT_CONTROL_AVAILABLE = 557846812 /* (((0x111C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tire Low Traction Information : Tire Left Front Low Traction Indication On (TireLFLoTracIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIRE_LEFT_FRONT_LOW_TRACTION_INDICATION_ON = 555749661 /* (((0x111D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Tire Low Traction Information : Tire Left Rear Low Traction Indication On (TireLRLoTracIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIRE_LEFT_REAR_LOW_TRACTION_INDICATION_ON = 555749662 /* (((0x111E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Tire Low Traction Information : Tire Right Front Low Traction Indication On (TireRFLoTracIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIRE_RIGHT_FRONT_LOW_TRACTION_INDICATION_ON = 555749663 /* (((0x111F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Tire Low Traction Information : Tire Right Rear Low Traction Indication On (TireRRLoTracIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIRE_RIGHT_REAR_LOW_TRACTION_INDICATION_ON = 555749664 /* (((0x1120 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Off Road Display Information : Vehicle Pitch Angle (VehPtchAng)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VEHICLE_PITCH_ANGLE = 559943969 /* (((0x1121 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Off Road Display Information : Vehicle Roll Angle (VehRollAng)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    VEHICLE_ROLL_ANGLE = 559943970 /* (((0x1122 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Off Road Display Information : Road Wheel Angle (RdWhlAng)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ROAD_WHEEL_ANGLE = 559943971 /* (((0x1123 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Front Axle Lock Indication On (FrntAxlLckIO)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FRONT_AXLE_LOCK_INDICATION_ON = 555749668 /* (((0x1124 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Rear Axle Lock Indication On (RrAxlLckIO)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_AXLE_LOCK_INDICATION_ON = 555749669 /* (((0x1125 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Location Based Charging Customization Setting Available (LocBsdChrgCstSetAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LOCATION_BASED_CHARGING_CUSTOMIZATION_SETTING_AVAILABLE = 555749670 /* (((0x1126 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Portable Charge Cord Limit Customization Setting Available (PrtblChrgCordLimCstSetAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PORTABLE_CHARGE_CORD_LIMIT_CUSTOMIZATION_SETTING_AVAILABLE = 555749671 /* (((0x1127 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cord Theft Alert Customization Setting Available (ChrgCordThftAlrtCstSetAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CORD_THEFT_ALERT_CUSTOMIZATION_SETTING_AVAILABLE = 555749672 /* (((0x1128 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cord Theft Alert Customization Current Setting Value (ChrgCordThftAlrtCstCurrSetVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum ChargeCordTheftAlertCustomizationCurrentSettingValue
     */
    CHARGE_CORD_THEFT_ALERT_CUSTOMIZATION_CURRENT_SETTING_VALUE = 557846825 /* (((0x1129 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Charge Power Loss Alert Customization Setting Available (ChrgPwrLossAlrtCstSetAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_POWER_LOSS_ALERT_CUSTOMIZATION_SETTING_AVAILABLE = 555749674 /* (((0x112A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Charge Power Loss Alert Customization Current Setting Value (ChrgPwrLossAlrtCstCurrSetVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum ChargePowerLossAlertCustomizationCurrentSettingValue
     */
    CHARGE_POWER_LOSS_ALERT_CUSTOMIZATION_CURRENT_SETTING_VALUE = 557846827 /* (((0x112B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Charger System Audible Indication Customization Setting Available (ChrgrSysAudblIndCstSetAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGER_SYSTEM_AUDIBLE_INDICATION_CUSTOMIZATION_SETTING_AVAILABLE = 555749676 /* (((0x112C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Charger System Audible Indication Customization Current Setting Value (ChrgrSysAudblIndCstCurrSetVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum ChargerSystemAudibleIndicationCustomizationCurrentSettingValue
     */
    CHARGER_SYSTEM_AUDIBLE_INDICATION_CUSTOMIZATION_CURRENT_SETTING_VALUE = 557846829 /* (((0x112D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Location Based Charging Customization Setting Request (LocBsdChrgCstSetReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum LocationBasedChargingCustomizationSettingRequest
     */
    LOCATION_BASED_CHARGING_CUSTOMIZATION_SETTING_REQUEST = 557846830 /* (((0x112E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cord Theft Alert Customization Setting Request (ChrgCordThftAlrtCstSetReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum ChargeCordTheftAlertCustomizationSettingRequest
     */
    CHARGE_CORD_THEFT_ALERT_CUSTOMIZATION_SETTING_REQUEST = 557846831 /* (((0x112F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Charge Power Loss Alert Customization Setting Request (ChrgPwrLossAlrtCstSetReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum ChargePowerLossAlertCustomizationSettingRequest
     */
    CHARGE_POWER_LOSS_ALERT_CUSTOMIZATION_SETTING_REQUEST = 557846832 /* (((0x1130 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Charge System Audible Indication Customization Setting Request (ChrgSysAudblIndCstSetReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum ChargeSystemAudibleIndicationCustomizationSettingRequest
     */
    CHARGE_SYSTEM_AUDIBLE_INDICATION_CUSTOMIZATION_SETTING_REQUEST = 557846833 /* (((0x1131 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Compass Declination Zone (CmpsDecZone)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum CompassDeclinationZone
     */
    COMPASS_DECLINATION_ZONE = 557846834 /* (((0x1132 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Compass Module Fault Present (CmpsModFltPrs)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum CompassModuleFaultPresent
     */
    COMPASS_MODULE_FAULT_PRESENT = 557846835 /* (((0x1133 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy Consumed : Energy Percent 1 (CCEEC_EngyPct1)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_ENERGY_PERCENT_1 = 559943988 /* (((0x1134 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy Consumed : Energy Percent 2 (CCEEC_EngyPct2)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_ENERGY_PERCENT_2 = 559943989 /* (((0x1135 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy Consumed : Energy Percent 3 (CCEEC_EngyPct3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_ENERGY_PERCENT_3 = 559943990 /* (((0x1136 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy Consumed : Energy Percent 4 (CCEEC_EngyPct4)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_ENERGY_PERCENT_4 = 559943991 /* (((0x1137 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Electrical Energy Consumed Range Impact 1 (DrvCycEleclEngyCnsmdRngImp1)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_RANGE_IMPACT_1 = 559943992 /* (((0x1138 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Electrical Energy Consumed Range Impact 2 (DrvCycEleclEngyCnsmdRngImp2)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_RANGE_IMPACT_2 = 559943993 /* (((0x1139 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Electrical Energy Consumed Range Impact 3 (DrvCycEleclEngyCnsmdRngImp3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_RANGE_IMPACT_3 = 559943994 /* (((0x113A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Electrical Energy Consumed Range Impact 4 (DrvCycEleclEngyCnsmdRngImp4)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_RANGE_IMPACT_4 = 559943995 /* (((0x113B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Electrical Energy Consumed Range Impact Total (DrvCycEleclEngyCnsmdRngImpTot)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_RANGE_IMPACT_TOTAL = 559943996 /* (((0x113C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy Consumed Range Impact 1 (ChrgCycEleclEngyCnsmdRngImp1)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_RANGE_IMPACT_1 = 559943997 /* (((0x113D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy Consumed Range Impact 2 (ChrgCycEleclEngyCnsmdRngImp2)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_RANGE_IMPACT_2 = 559943998 /* (((0x113E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy Consumed Range Impact 3 (ChrgCycEleclEngyCnsmdRngImp3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_RANGE_IMPACT_3 = 559943999 /* (((0x113F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy Consumed Range Impact 4 (ChrgCycEleclEngyCnsmdRngImp4)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_RANGE_IMPACT_4 = 559944000 /* (((0x1140 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy Consumed Range Impact Total (ChrgCycEleclEngyCnsmdRngImpTot)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_CONSUMED_RANGE_IMPACT_TOTAL = 559944001 /* (((0x1141 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Electrical Energy State 1 (DrvCycEleclEngyStat1)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_ELECTRICAL_ENERGY_STATE_1 = 559944002 /* (((0x1142 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Electrical Energy State 2 (DrvCycEleclEngyStat2)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_ELECTRICAL_ENERGY_STATE_2 = 559944003 /* (((0x1143 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Electrical Energy State 3 (DrvCycEleclEngyStat3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_ELECTRICAL_ENERGY_STATE_3 = 559944004 /* (((0x1144 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Electrical Energy State 4 (DrvCycEleclEngyStat4)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_ELECTRICAL_ENERGY_STATE_4 = 559944005 /* (((0x1145 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy State 1 (ChrgCycEleclEngyStat1)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_STATE_1 = 559944006 /* (((0x1146 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy State 2 (ChrgCycEleclEngyStat2)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_STATE_2 = 559944007 /* (((0x1147 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Electric Motor A Tachometer (ElecMtrATach)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ELECTRIC_MOTOR_A_TACHOMETER = 557846856 /* (((0x1148 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Average Temperature (HiVltgBatAvgTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_AVERAGE_TEMPERATURE = 557846857 /* (((0x1149 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Propulsion System Motor A Stator Temperature (ElecMtrASttrTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PROPULSION_SYSTEM_MOTOR_A_STATOR_TEMPERATURE = 557846858 /* (((0x114A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Propulsion System Motor A Rotor Temperature (ElecMtrARotrTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PROPULSION_SYSTEM_MOTOR_A_ROTOR_TEMPERATURE = 557846859 /* (((0x114B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Hybrid Trip Data 1 : Distance Traveled (HTD1_DistTrvld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HYBRID_TRIP_DATA_1_DISTANCE_TRAVELED = 559944012 /* (((0x114C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Hybrid Trip Data 1 : Fuel Avoided (HTD1_FuelAvdd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HYBRID_TRIP_DATA_1_FUEL_AVOIDED = 559944013 /* (((0x114D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Hybrid Trip Data 2 : Battery Energy Deployed (HTD2_BatEngyDplyd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HYBRID_TRIP_DATA_2_BATTERY_ENERGY_DEPLOYED = 559944014 /* (((0x114E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Hybrid Trip Data 2 : Battery Energy Regenerated (HTD2_BatEngyRegntd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HYBRID_TRIP_DATA_2_BATTERY_ENERGY_REGENERATED = 559944015 /* (((0x114F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Hybrid Trip Data Reset Requested (HybTripDatRstReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    HYBRID_TRIP_DATA_RESET_REQUESTED = 555749712 /* (((0x1150 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Propulsion Display Engine Torque (PrplDispEngTrq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PROPULSION_DISPLAY_ENGINE_TORQUE = 559944017 /* (((0x1151 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Propulsion Display Battery Torque (PrplDispBatTrq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PROPULSION_DISPLAY_BATTERY_TORQUE = 559944018 /* (((0x1152 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Propulsion Display Engine Power (PrplDispEngPwr)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PROPULSION_DISPLAY_ENGINE_POWER = 559944019 /* (((0x1153 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Propulsion Display Battery Power (PrplDispBatPwr)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PROPULSION_DISPLAY_BATTERY_POWER = 559944020 /* (((0x1154 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Indication Temperature Setting Level Front Left (IndTmpStngLvlFL)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_TEMPERATURE_SETTING_LEVEL_FRONT_LEFT = 557846869 /* (((0x1155 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Indication Temperature Units (IndTmpUnts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum IndicationTemperatureUnits
     */
    INDICATION_TEMPERATURE_UNITS = 557846870 /* (((0x1156 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Maximum Temperature (HiVltgBatMaxTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_MAXIMUM_TEMPERATURE = 559944023 /* (((0x1157 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Minimum Temperature (HiVltgBatMinTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_MINIMUM_TEMPERATURE = 559944024 /* (((0x1158 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Location Based Charging Position Modification Request (LocBsdChrgPstnMdfnReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum LocationBasedChargingPositionModificationRequest
     */
    LOCATION_BASED_CHARGING_POSITION_MODIFICATION_REQUEST = 557846873 /* (((0x1159 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Charging Data Calculated Checksum (ChrgDatCalcChksm)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGING_DATA_CALCULATED_CHECKSUM = 557846874 /* (((0x115A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Location Based Charging Customization Current Setting Value (LocBsdChrgCstCurrSetVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum LocationBasedChargingCustomizationCurrentSettingValue
     */
    LOCATION_BASED_CHARGING_CUSTOMIZATION_CURRENT_SETTING_VALUE = 557846875 /* (((0x115B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Location Status (VehLocSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VehicleLocationStatus
     */
    VEHICLE_LOCATION_STATUS = 557846876 /* (((0x115C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Charging Data Request (ChrgDatReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum ChargingDataRequest
     */
    CHARGING_DATA_REQUEST = 557846877 /* (((0x115D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Target Charge Level Minimum Setting Value (TgtChrgLvlMinSetVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TARGET_CHARGE_LEVEL_MINIMUM_SETTING_VALUE = 557846878 /* (((0x115E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Target Charge Level Stop Charging Setting Value (TgtChrgLvlStopChrgSetVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TARGET_CHARGE_LEVEL_STOP_CHARGING_SETTING_VALUE = 557846879 /* (((0x115F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy State 3 (ChrgCycEleclEngyStat3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_STATE_3 = 559944032 /* (((0x1160 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy State 4 (ChrgCycEleclEngyStat4)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_STATE_4 = 559944033 /* (((0x1161 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Lifetime Battery Propulsion Distance Traveled (LifetmBatPrplDistTrvld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LIFETIME_BATTERY_PROPULSION_DISTANCE_TRAVELED = 559944034 /* (((0x1162 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Lifetime Electrical Energy Used (LifetmEleclEngyUsd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LIFETIME_ELECTRICAL_ENERGY_USED = 559944035 /* (((0x1163 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Lifetime Wall Energy Used (LifetmWallEngyUsd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LIFETIME_WALL_ENERGY_USED = 559944036 /* (((0x1164 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Lifetime Electrical Energy Economy Reset Requested (LifetmEleclEngyEconRstReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    LIFETIME_ELECTRICAL_ENERGY_ECONOMY_RESET_REQUESTED = 555749733 /* (((0x1165 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Profile Lifetime Economy Reset Requested (TrlrProfLifetmEconRstReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILER_PROFILE_LIFETIME_ECONOMY_RESET_REQUESTED = 555749734 /* (((0x1166 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Active Trailer Profile Lifetime Economy (ActvTrlrProfLifetmEcon)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ACTIVE_TRAILER_PROFILE_LIFETIME_ECONOMY = 559944039 /* (((0x1167 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Energy Economy Measurement Unit (EngyEconMeasUnt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum EnergyEconomyMeasurementUnit
     */
    ENERGY_ECONOMY_MEASUREMENT_UNIT = 557846888 /* (((0x1168 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Engine Propulsion Display Torque Level Percent (EngPrplDispTrqLvlPct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ENGINE_PROPULSION_DISPLAY_TORQUE_LEVEL_PERCENT = 557846889 /* (((0x1169 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Engine Propulsion Display Power Level Percent (EngPrplDispPwrLvlPct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ENGINE_PROPULSION_DISPLAY_POWER_LEVEL_PERCENT = 557846890 /* (((0x116A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Battery Propulsion Display Power Level Percent (BatPrplDispPwrLvlPct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    BATTERY_PROPULSION_DISPLAY_POWER_LEVEL_PERCENT = 557846891 /* (((0x116B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Battery Propulsion Display Torque Level Percent (BatPrplDispTrqLvlPct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    BATTERY_PROPULSION_DISPLAY_TORQUE_LEVEL_PERCENT = 557846892 /* (((0x116C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Brake Regeneration Range (ChrgCycBrkRegnRng)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_BRAKE_REGENERATION_RANGE = 559944045 /* (((0x116D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Battery Propulsion Distance Traveled (ChrgCycBatPrplDistTrvld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_BATTERY_PROPULSION_DISTANCE_TRAVELED = 559944046 /* (((0x116E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Electrical Energy Economy (ChrgCycEleclEngyEcon)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_ELECTRICAL_ENERGY_ECONOMY = 559944047 /* (((0x116F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Brake Regeneration Range (DrvCycBrkRegnRng)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_BRAKE_REGENERATION_RANGE = 559944048 /* (((0x1170 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Battery Propulsion Distance Traveled (DrvCycBatPrplDistTrvld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_BATTERY_PROPULSION_DISTANCE_TRAVELED = 559944049 /* (((0x1171 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Electrical Energy Economy (DrvCycEleclEngyEcon)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_ELECTRICAL_ENERGY_ECONOMY = 559944050 /* (((0x1172 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Lifetime Electrical Energy Economy (LifetmEleclEngyEcon)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    LIFETIME_ELECTRICAL_ENERGY_ECONOMY = 559944051 /* (((0x1173 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Bulk State of Charge (HiVltgBatBulkSOC)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_BULK_STATE_OF_CHARGE = 557846900 /* (((0x1174 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Limitation Due to Temperature Indication (HiVltgBatLmtnDueToTempInd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HighVoltageBatteryLimitationDueToTemperatureIndication
     */
    HIGH_VOLTAGE_BATTERY_LIMITATION_DUE_TO_TEMPERATURE_INDICATION = 557846901 /* (((0x1175 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage DC Fast Charge Preparation Complete Indication On (HVDCFstChrgPrepCmpltIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_DC_FAST_CHARGE_PREPARATION_COMPLETE_INDICATION_ON = 555749750 /* (((0x1176 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage DC Fast Charge Performance Limited Indication On (HVDCFstChrgPerfLtdIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_DC_FAST_CHARGE_PERFORMANCE_LIMITED_INDICATION_ON = 555749751 /* (((0x1177 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Cabin Preconditioning Disabled State of Charge Limit (CbnPrcndtngDsbldSOCLim)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CABIN_PRECONDITIONING_DISABLED_STATE_OF_CHARGE_LIMIT = 557846904 /* (((0x1178 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Preconditioning Estimated Energy To Complete (HiVltgBatPrcndtngEstdEngyToCmpt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_PRECONDITIONING_ESTIMATED_ENERGY_TO_COMPLETE = 559944057 /* (((0x1179 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Preconditioning Estimated Time To Complete (HiVltgBatPrcndtngEstdTmToCmpt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_PRECONDITIONING_ESTIMATED_TIME_TO_COMPLETE = 557846906 /* (((0x117A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage DC Fast Charge Soon Request (HVDCFstChrgSoonReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum HighVoltageDcFastChargeSoonRequest
     */
    HIGH_VOLTAGE_DC_FAST_CHARGE_SOON_REQUEST = 557846907 /* (((0x117B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Cabin Preconditioning Schedule Temperature Customization Setting Value (CbnPrcndtngSchTempCstSetVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CABIN_PRECONDITIONING_SCHEDULE_TEMPERATURE_CUSTOMIZATION_SETTING_VALUE = 559944060 /* (((0x117C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Cabin Preconditioning Schedule Temperature Customization Setting Available (CbnPrcndtngSchTempCstSetAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CABIN_PRECONDITIONING_SCHEDULE_TEMPERATURE_CUSTOMIZATION_SETTING_AVAILABLE = 555749757 /* (((0x117D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Cabin Preconditioning Schedule Temperature Customization Setting Request (CbnPrcndtngSchTempCstSetReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    CABIN_PRECONDITIONING_SCHEDULE_TEMPERATURE_CUSTOMIZATION_SETTING_REQUEST = 559944062 /* (((0x117E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Cabin Preconditioning Schedule Temperature Customization Setting Request Active (CbnPrcndtngSchTempCstSetReqAtv)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    CABIN_PRECONDITIONING_SCHEDULE_TEMPERATURE_CUSTOMIZATION_SETTING_REQUEST_ACTIVE = 555749759 /* (((0x117F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Preconditioning Status (HiVltgBatPrcndtngSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HighVoltageBatteryPreconditioningStatus
     */
    HIGH_VOLTAGE_BATTERY_PRECONDITIONING_STATUS = 557846912 /* (((0x1180 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Energy Consumption History Graph : Current Economy (ECHG_CurrEcon)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ENERGY_CONSUMPTION_HISTORY_GRAPH_CURRENT_ECONOMY = 559944065 /* (((0x1181 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Energy Consumption History Graph : Current Economy Ready (ECHG_CurrEconRdy)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ENERGY_CONSUMPTION_HISTORY_GRAPH_CURRENT_ECONOMY_READY = 555749762 /* (((0x1182 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Ride Height State Indication Request (RdHgtStatIndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RideHeightStateIndicationRequest
     */
    RIDE_HEIGHT_STATE_INDICATION_REQUEST = 557846915 /* (((0x1183 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Ride Height Warning 1 Indication Request (RdHgtWrn1IndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RideHeightWarning1IndicationRequest
     */
    RIDE_HEIGHT_WARNING_1_INDICATION_REQUEST = 557846916 /* (((0x1184 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Ride Height Information : Ride Height Warning 2 Indication Request (RdHgtWrn2IndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RideHeightWarning2IndicationRequest
     */
    RIDE_HEIGHT_WARNING_2_INDICATION_REQUEST = 557846917 /* (((0x1185 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Ride Height Movement Indication Request (RdHgtMvmtIndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RideHeightMovementIndicationRequest
     */
    RIDE_HEIGHT_MOVEMENT_INDICATION_REQUEST = 557846918 /* (((0x1186 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Ride Height Activation Indication Request (RdHgtActvnIndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RideHeightActivationIndicationRequest
     */
    RIDE_HEIGHT_ACTIVATION_INDICATION_REQUEST = 557846919 /* (((0x1187 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Off Road Mode Electric Vehicle Pedal Map Visualization Display Value (OffRdMdElecVehPedMpVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum OffRoadModeElectricVehiclePedalMapVisualizationDisplayValue
     */
    OFF_ROAD_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_VISUALIZATION_DISPLAY_VALUE = 557846920 /* (((0x1188 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Sport Mode Electric Vehicle Pedal Map Visualization Display Value (SprtMdElecVehPedMpVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum SportModeElectricVehiclePedalMapVisualizationDisplayValue
     */
    SPORT_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_VISUALIZATION_DISPLAY_VALUE = 557846921 /* (((0x1189 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Terrain Mode Electric Vehicle Pedal Map Visualization Display Value (TrnMdElecVehPedMpVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TerrainModeElectricVehiclePedalMapVisualizationDisplayValue
     */
    TERRAIN_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_VISUALIZATION_DISPLAY_VALUE = 557846922 /* (((0x118A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tour Mode Electric Vehicle Pedal Map Visualization Display Value (TourMdElecVehPedMpVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TourModeElectricVehiclePedalMapVisualizationDisplayValue
     */
    TOUR_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_VISUALIZATION_DISPLAY_VALUE = 557846923 /* (((0x118B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Track Mode Electric Vehicle Pedal Map Visualization Display Value (TkMdElecVehPedMpVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TrackModeElectricVehiclePedalMapVisualizationDisplayValue
     */
    TRACK_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_VISUALIZATION_DISPLAY_VALUE = 557846924 /* (((0x118C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Weather Mode Electric Vehicle Pedal Map Visualization Display Value (WthrMdElecVehPedMpVisDispVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum WeatherModeElectricVehiclePedalMapVisualizationDisplayValue
     */
    WEATHER_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_VISUALIZATION_DISPLAY_VALUE = 557846925 /* (((0x118D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Virtual One Pedal Driving Control Available (VirtOnePedDrvCtlAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VirtualOnePedalDrivingControlAvailable
     */
    VIRTUAL_ONE_PEDAL_DRIVING_CONTROL_AVAILABLE = 557846926 /* (((0x118E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Virtual One Pedal Driving User Control Allowed (VirtOnePedDrvUserCtlAllwd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VirtualOnePedalDrivingUserControlAllowed
     */
    VIRTUAL_ONE_PEDAL_DRIVING_USER_CONTROL_ALLOWED = 557846927 /* (((0x118F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * One Pedal Driving Current Selection Value (OnePedDrvCurrSeltnVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum OnePedalDrivingCurrentSelectionValue
     */
    ONE_PEDAL_DRIVING_CURRENT_SELECTION_VALUE = 557846928 /* (((0x1190 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Virtual One Pedal Driving Request (VirtOnePedDrvReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum VirtualOnePedalDrivingRequest
     */
    VIRTUAL_ONE_PEDAL_DRIVING_REQUEST = 557846929 /* (((0x1191 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heater Setting (IndHtrSet)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum IndicationHeaterSetting
     */
    INDICATION_HEATER_SETTING = 557846930 /* (((0x1192 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 58 Protected : Rear Steering Road Wheel Angle Authenticated (RrStrgRdWhlAngAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    REAR_STEERING_ROAD_WHEEL_ANGLE = 559944083 /* (((0x1193 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Host Vehicle Path Parameters Protected : Host Vehicle Sideslip Angle Authenticated (HVPPP_HstVehSdslAngAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HOST_VEHICLE_SIDESLIP_ANGLE = 559944084 /* (((0x1194 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Plug And Charge Enabled Status (PnCEnbldSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum PlugAndChargeEnabledStatus
     */
    PLUG_AND_CHARGE_ENABLED_STATUS = 557846933 /* (((0x1195 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Plug And Charge Status Display (PnCStsDisp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum PlugAndChargeStatusDisplay
     */
    PLUG_AND_CHARGE_STATUS_DISPLAY = 557846934 /* (((0x1196 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 87 Protected : Plug And Charge Enable Request Authenticated (PnCEnblReqAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum PlugAndChargeEnableRequest
     */
    PLUG_AND_CHARGE_ENABLE_REQUEST = 557846935 /* (((0x1197 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Wheel Torque Total Delivered Percent (WhlTrqTotDlvdPct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    WHEEL_TORQUE_TOTAL_DELIVERED_PERCENT = 559944088 /* (((0x1198 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Wheel Torque Total Maximum Possible Value (WhlTrqTotMaxPsblVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    WHEEL_TORQUE_TOTAL_MAXIMUM_POSSIBLE_VALUE = 557846937 /* (((0x1199 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tire Pressure Front Placard (TirePrsFrntPlcrd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIRE_PRESSURE_FRONT_PLACARD = 559944090 /* (((0x119A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 80 : Rear Steering Mode Display Indication Request (RrStrgModeDispIndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum RearSteeringModeDisplayIndicationRequest
     */
    REAR_STEERING_MODE_DISPLAY_INDICATION_REQUEST = 557846939 /* (((0x119B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Customer Non Usable State of Charge (CustNonUsblSOC)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CUSTOMER_NON_USABLE_STATE_OF_CHARGE = 559944092 /* (((0x119C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Engine Air Filter Monitor Status (EngAirFiltMonSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum EngineAirFilterMonitorStatus
     */
    ENGINE_AIR_FILTER_MONITOR_STATUS = 557846941 /* (((0x119D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Fuel Filter Remaining Life (FuelFiltRmnLife)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FUEL_FILTER_REMAINING_LIFE = 557846942 /* (((0x119E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Engine Air Filter Life Remaining (EngAirFiltLifeRmn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ENGINE_AIR_FILTER_LIFE_REMAINING = 557846943 /* (((0x119F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Fuel Filter Change Now Indication On (FuelFiltChgNowIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    FUEL_FILTER_CHANGE_NOW_INDICATION_ON = 555749792 /* (((0x11A0 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Brake System Display Information Protected : Electric Park Brake System Status Indication Request Authenticated (BSDIP_EPBSysStsIndReqAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum ElectricParkBrakeSystemStatusIndicationRequest
     */
    ELECTRIC_PARK_BRAKE_SYSTEM_STATUS_INDICATION_REQUEST = 557846945 /* (((0x11A1 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * TPMS  Learn Mode Active Indication On (TirePrsLrnActIO)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TPMS_LEARN_MODE_ACTIVE_INDICATION_ON = 555749794 /* (((0x11A2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Tire Leak Detection Enable Status (TireLkDtnEnblSts)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum TireLeakDetectionEnableStatus
     */
    TIRE_LEAK_DETECTION_ENABLE_STATUS = 557846947 /* (((0x11A3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tire Pressure Rear Placard (TirePrsRrPlcrd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TIRE_PRESSURE_REAR_PLACARD = 559944101 /* (((0x11A5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Serial Data 19 Protected : Primary Axle Torque Actual Authenticated (PSATIP_PriATActlAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    PRIMARY_AXLE_TORQUE_ACTUAL = 557846954 /* (((0x11AA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Propulsion General Information 4 Protected : Actual Axle Torque Secondary Authenticated (PGI4P_ActlAxlTrqSecAuth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ACTUAL_AXLE_TORQUE_SECONDARY = 557846955 /* (((0x11AB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Intelligent Battery Sensor 12V Battery Information : IBS 12V Estimated Battery Temperature (IBS12VEstdBatTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    IBS_12V_ESTIMATED_BATTERY_TEMPERATURE = 557846956 /* (((0x11AC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Intelligent Battery Sensor 12V Battery Information : IBS 12V Battery State of Charge (IBSRwBatSOC)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    IBS_12V_BATTERY_STATE_OF_CHARGE = 559944109 /* (((0x11AD | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Intelligent Battery Sensor 12V Battery Information : IBS Raw Battery SOC  Error (IBSRwBatSOCErr)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    IBS_RAW_BATTERY_SOC_ERROR = 559944110 /* (((0x11AE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Logistic Mode Status (LogisticModeStatus)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum LogisticModeStatus
     */
    LOGISTIC_MODE_STATUS = 557846959 /* (((0x11AF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Indication Fog Protection Taking FreshAir Action Message (IndFogPrtcTkngFrshAirActMsg)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_FOG_PROTECTION_TAKING_FRESH_AIR_ACTION_MESSAGE = 555749811 /* (((0x11B3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * HVAC Infotainment Controls Request Blower Speed Reduction (HVACInfoCtlReqBlwSpdRdct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    HVAC_INFOTAINMENT_CONTROLS_REQUEST_BLOWER_SPEED_REDUCTION = 555749812 /* (((0x11B4 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Out Of Energy Indication Request (HiVltgBatOutOfEngyIndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HighVoltageBatteryOutOfEnergyIndicationRequest
     */
    HIGH_VOLTAGE_BATTERY_OUT_OF_ENERGY_INDICATION_REQUEST = 557846965 /* (((0x11B5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Charge Cycle Drive Time (ChrgCycDrvTm)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_CYCLE_DRIVE_TIME = 557846966 /* (((0x11B6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Drive Time (DrvCycDrvTm)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_DRIVE_TIME = 557846967 /* (((0x11B7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rated Electrical Energy Economy (RtdEleclEngyEcon)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    RATED_ELECTRICAL_ENERGY_ECONOMY = 559944120 /* (((0x11B8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Bulk Charge Complete (HiVltgBatBulkChrgCmplt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_BULK_CHARGE_COMPLETE = 555749817 /* (((0x11B9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Infotainment Off Road App Inflate Deflate Assist Enabled (InfoOffRdAppInfltDfltAsstEnbld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INFOTAINMENT_OFF_ROAD_APP_INFLATE_DEFLATE_ASSIST_ENABLED = 555749818 /* (((0x11BA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Climate Control Power To Maintain Cabin Comfort (ClmCtlPwrToMntCbnCmf)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CLIMATE_CONTROL_POWER_TO_MAINTAIN_CABIN_COMFORT = 559944123 /* (((0x11BB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Climate Control Power To Reach Cabin Comfort (ClmCtlPwrToRchCbnCmf)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CLIMATE_CONTROL_POWER_TO_REACH_CABIN_COMFORT = 559944124 /* (((0x11BC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Climate Control Time To Reach Cabin Comfort Estimated (ClmCtlTmToRchCbnCmfEstd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CLIMATE_CONTROL_TIME_TO_REACH_CABIN_COMFORT_ESTIMATED = 557846973 /* (((0x11BD | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Charge Abort Reason (HiVltgChrgAbrtRsn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HighVoltageChargeAbortReason
     */
    HIGH_VOLTAGE_CHARGE_ABORT_REASON = 557846991 /* (((0x11CF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Charge Inhibit Reason (HiVltgChrgInhbRsn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HighVoltageChargeInhibitReason
     */
    HIGH_VOLTAGE_CHARGE_INHIBIT_REASON = 557846992 /* (((0x11D0 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Charge Limited Reason (HiVltgChrgLtdRsn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum HighVoltageChargeLimitedReason
     */
    HIGH_VOLTAGE_CHARGE_LIMITED_REASON = 557846993 /* (((0x11D1 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Infotainment Off Road App Inflate Deflate Assist Target Pressure
     * (InfoOffRdAppInfltDfltAsstTgtPrs)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    INFOTAINMENT_OFF_ROAD_APP_INFLATE_DEFLATE_ASSIST_TARGET_PRESSURE = 557846994 /* (((0x11D2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Infotainment Off Road App Inflate Deflate Assist Requested (InfoOffRdAppInfltDfltAsstReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    INFOTAINMENT_OFF_ROAD_APP_INFLATE_DEFLATE_ASSIST_REQUESTED = 555749843 /* (((0x11D3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Drive Cycle Electrical Energy Used (DrvCycEleclEngyUsd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DRIVE_CYCLE_ELECTRICAL_ENERGY_USED = 559944148 /* (((0x11D4 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Full Hitching Point Length (TrlrFllHtchPtLgth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILER_FULL_HITCHING_POINT_LENGTH = 557847012 /* (((0x11E4 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer to Cab Length (TrlrToCabLgth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILER_TO_CAB_LENGTH = 557847013 /* (((0x11E5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Box Width (TrlrBoxWdth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILER_BOX_WIDTH = 557847014 /* (((0x11E6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Face Depth (TrlrFaceDpth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILER_FACE_DEPTH = 557847015 /* (((0x11E7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Forward Side Edge Height (TrlrFrwdSdEdgeHght)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILER_FORWARD_SIDE_EDGE_HEIGHT = 557847016 /* (((0x11E8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailer Front Bottom Corner Height (TrlrFrtBtmCrnrHght)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRAILER_FRONT_BOTTOM_CORNER_HEIGHT = 557847017 /* (((0x11E9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Bed Hitch to Cab Length (VehBedHtchToCabLgth)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    VEHICLE_BED_HITCH_TO_CAB_LENGTH = 557847018 /* (((0x11EA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Engine Oil Pressure (EngOilPrs)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ENGINE_OIL_PRESSURE = 557846997 /* (((0x11D5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Brake Pad Life Status Information : Brake Pad Life Status Indication Request (BrkPadLifeStsIndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum BrakePadLifeStatusInformationBrakePadLifeStatusIndicationRequest
     */
    BRAKE_PAD_LIFE_STATUS_INFORMATION_BRAKE_PAD_LIFE_STATUS_INDICATION_REQUEST = 557846998 /* (((0x11D6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Brake Pad Life Front (BrkPadLifeFrt)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    BRAKE_PAD_LIFE_FRONT = 557846999 /* (((0x11D7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Brake Pad Life Rear (BrkPadLifeRr)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    BRAKE_PAD_LIFE_REAR = 557847000 /* (((0x11D8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Brake Pad Life Front Reset Available (BrkPadLifeFrtRstAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    BRAKE_PAD_LIFE_FRONT_RESET_AVAILABLE = 555749849 /* (((0x11D9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Brake Pad Life Rear Reset Available (BrkPadLifeRrRstAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    BRAKE_PAD_LIFE_REAR_RESET_AVAILABLE = 555749850 /* (((0x11DA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Brake Pad Life Status Information : Brake Pad Life Front Distance Warning Indication Request (BrkPadLifeFrtDistWrnIndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum BrakePadLifeStatusInformationBrakePadLifeFrontDistanceWarningIndicationRequest
     */
    BRAKE_PAD_LIFE_STATUS_INFORMATION_BRAKE_PAD_LIFE_FRONT_DISTANCE_WARNING_INDICATION_REQUEST = 557847003 /* (((0x11DB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Brake Pad Life Status Information : Brake Pad Life Rear Distance Warning Indication Request (BrkPadLifeRrDistWrnIndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum BrakePadLifeStatusInformationBrakePadLifeRearDistanceWarningIndicationRequest
     */
    BRAKE_PAD_LIFE_STATUS_INFORMATION_BRAKE_PAD_LIFE_REAR_DISTANCE_WARNING_INDICATION_REQUEST = 557847004 /* (((0x11DC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Arbitrated Engine Temperature (ArbdEngTemp)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ARBITRATED_ENGINE_TEMPERATURE = 557847005 /* (((0x11DD | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Tire Leak Detection User Request (TireLkDtnUsrReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum TireLeakDetectionUserRequest
     */
    TIRE_LEAK_DETECTION_USER_REQUEST = 557847006 /* (((0x11DE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Virtual Control Drive Mode Request (VirtCtlDrvModeReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum VirtualControlDriveModeRequest
     */
    VIRTUAL_CONTROL_DRIVE_MODE_REQUEST = 557847007 /* (((0x11DF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Engine Oil Life Reset Request (EngOilLifeRstReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    ENGINE_OIL_LIFE_RESET_REQUEST = 555749856 /* (((0x11E0 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Engine Air Filter Monitor Driver Request (EngAirFiltMonDrvrReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum EngineAirFilterMonitorDriverRequest
     */
    ENGINE_AIR_FILTER_MONITOR_DRIVER_REQUEST = 557847009 /* (((0x11E1 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Fuel Filter Life Reset Requested (FuelFiltLifeRstReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    FUEL_FILTER_LIFE_RESET_REQUESTED = 555749858 /* (((0x11E2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Tire Pressure Sensor Programming Event Requested (TPSnsrProgEvReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TIRE_PRESSURE_SENSOR_PROGRAMMING_EVENT_REQUESTED = 555749859 /* (((0x11E3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Brake Pad Life Status Information : Brake Pad Life Front Distance Remaining (BrkPadLifeFrtDistRmn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    BRAKE_PAD_LIFE_FRONT_DISTANCE_REMAINING = 557847020 /* (((0x11EC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Brake Pad Life Status Information : Brake Pad Life Rear Distance Remaining (BrkPadLifeRrDistRmn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    BRAKE_PAD_LIFE_REAR_DISTANCE_REMAINING = 557847021 /* (((0x11ED | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Drive Mode Confirmation Indication Request (DrvModeConfIndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum DriveModeConfirmationIndicationRequest
     */
    DRIVE_MODE_CONFIRMATION_INDICATION_REQUEST = 557847022 /* (((0x11EE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Virtual Control Dome Light Status : Dome Defeat Available (VCDLS_DomeDftAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VirtualControlDomeLightStatusDomeDefeatAvailable
     */
    VIRTUAL_CONTROL_DOME_LIGHT_STATUS_DOME_DEFEAT_AVAILABLE = 557847024 /* (((0x11F0 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Virtual Control Dome Light Status : Dome Defeat Current Selection Value (VCDLS_DomeDftCurrSeltnVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VirtualControlDomeLightStatusDomeDefeatCurrentSelectionValue
     */
    VIRTUAL_CONTROL_DOME_LIGHT_STATUS_DOME_DEFEAT_CURRENT_SELECTION_VALUE = 557847025 /* (((0x11F1 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Virtual Control Dome Light Status : Dome Light Available (VCDLS_DomeLgtAval)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VirtualControlDomeLightStatusDomeLightAvailable
     */
    VIRTUAL_CONTROL_DOME_LIGHT_STATUS_DOME_LIGHT_AVAILABLE = 557847026 /* (((0x11F2 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Virtual Control Dome Light Status : Dome Light Current Selection Value (VCDLS_DomeLgtCurrSeltnVal)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum VirtualControlDomeLightStatusDomeLightCurrentSelectionValue
     */
    VIRTUAL_CONTROL_DOME_LIGHT_STATUS_DOME_LIGHT_CURRENT_SELECTION_VALUE = 557847027 /* (((0x11F3 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Heated Back Mode (IHVSLF_HtdBckMd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_HEATED_BACK_MODE = 555749876 /* (((0x11F4 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Heated Cushion and Back Mode (IHVSLF_HtdCushBckMd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_HEATED_CUSHION_AND_BACK_MODE = 555749877 /* (((0x11F5 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Vented Mode (IHVSLF_VntMd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_VENTED_MODE = 555749878 /* (((0x11F6 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Heated Back Auto (IHVSLF_HtdBckAuto)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_HEATED_BACK_AUTO = 555749879 /* (((0x11F7 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Heated Back Level 1 (IHVSLF_HtdBckLvl1)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_HEATED_BACK_LEVEL_1 = 555749880 /* (((0x11F8 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Heated Back Level 2 (IHVSLF_HtdBckLvl2)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_HEATED_BACK_LEVEL_2 = 555749881 /* (((0x11F9 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Heated Back Level 3 (IHVSLF_HtdBckLvl3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_HEATED_BACK_LEVEL_3 = 555749882 /* (((0x11FA | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Heated Cushion and Back Auto (IHVSLF_HtdCushBckAuto)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_HEATED_CUSHION_AND_BACK_AUTO = 555749883 /* (((0x11FB | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Heated Cushion and Back Level 1 (IHVSLF_HtdCushBckLvl1)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_HEATED_CUSHION_AND_BACK_LEVEL_1 = 555749884 /* (((0x11FC | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Heated Cushion and Back Level 2 (IHVSLF_HtdCushBckLvl2)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_HEATED_CUSHION_AND_BACK_LEVEL_2 = 555749885 /* (((0x11FD | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Heated Cushion and Back Level 3 (IHVSLF_HtdCushBckLvl3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_HEATED_CUSHION_AND_BACK_LEVEL_3 = 555749886 /* (((0x11FE | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Vented Auto (IHVSLF_VntAuto)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_VENTED_AUTO = 555749887 /* (((0x11FF | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Vented Level 1 (IHVSLF_VntLvl1)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_VENTED_LEVEL_1 = 555749888 /* (((0x1200 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Vented Level 2 (IHVSLF_VntLvl2)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_VENTED_LEVEL_2 = 555749889 /* (((0x1201 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Front : Vented Level 3 (IHVSLF_VntLvl3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_FRONT_VENTED_LEVEL_3 = 555749890 /* (((0x1202 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Heated Back Auto (IHVSLR_HtdBckAuto)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_HEATED_BACK_AUTO = 555749891 /* (((0x1203 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Heated Back Level 1 (IHVSLR_HtdBckLvl1)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_HEATED_BACK_LEVEL_1 = 555749892 /* (((0x1204 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Heated Back Level 2 (IHVSLR_HtdBckLvl2)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_HEATED_BACK_LEVEL_2 = 555749893 /* (((0x1205 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Heated Back Level 3 (IHVSLR_HtdBckLvl3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_HEATED_BACK_LEVEL_3 = 555749894 /* (((0x1206 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Heated Back Mode (IHVSLR_HtdBckMd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_HEATED_BACK_MODE = 555749895 /* (((0x1207 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Heated Cushion and Back Auto (IHVSLR_HtdCushBckAuto)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_HEATED_CUSHION_AND_BACK_AUTO = 555749896 /* (((0x1208 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Heated Cushion and Back Level 1 (IHVSLR_HtdCushBckLvl1)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_HEATED_CUSHION_AND_BACK_LEVEL_1 = 555749897 /* (((0x1209 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Heated Cushion and Back Level 2 (IHVSLR_HtdCushBckLvl2)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_HEATED_CUSHION_AND_BACK_LEVEL_2 = 555749898 /* (((0x120A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Heated Cushion and Back Level 3 (IHVSLR_HtdCushBckLvl3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_HEATED_CUSHION_AND_BACK_LEVEL_3 = 555749899 /* (((0x120B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Heated Cushion and Back Mode (IHVSLR_HtdCushBckMd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_HEATED_CUSHION_AND_BACK_MODE = 555749900 /* (((0x120C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Vented Auto (IHVSLR_VntAuto)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_VENTED_AUTO = 555749901 /* (((0x120D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Vented Level 1 (IHVSLR_VntLvl1)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_VENTED_LEVEL_1 = 555749902 /* (((0x120E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Vented Level 2 (IHVSLR_VntLvl2)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_VENTED_LEVEL_2 = 555749903 /* (((0x120F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Vented Level 3 (IHVSLR_VntLvl3)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_VENTED_LEVEL_3 = 555749904 /* (((0x1210 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Indication Heated Vented Seat Left Rear : Vented Mode (IHVSLR_VntMd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    INDICATION_HEATED_VENTED_SEAT_LEFT_REAR_VENTED_MODE = 555749905 /* (((0x1211 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Neutral Coastdown Certification Mode Active Indication On (NeutCstdwnCertModeActvIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    NEUTRAL_COASTDOWN_CERTIFICATION_MODE_ACTIVE_INDICATION_ON = 555749906 /* (((0x1212 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Contactors Open Under Temperature Indication On (CntctrsOpnUndrTempIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CONTACTORS_OPEN_UNDER_TEMPERATURE_INDICATION_ON = 555749907 /* (((0x1213 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Battery Charge Cord Connected Indication On (HiVltgBatChrgCordCnctdIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_BATTERY_CHARGE_CORD_CONNECTED_INDICATION_ON = 555749908 /* (((0x1214 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Charge Port Door Indication Request (ChrgPortDrIndReq)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum ChargePortDoorIndicationRequest
     */
    CHARGE_PORT_DOOR_INDICATION_REQUEST = 557847061 /* (((0x1215 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * High Voltage Charging System Supply Fault Indication On (HiVltgChrgSysSplyFltIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    HIGH_VOLTAGE_CHARGING_SYSTEM_SUPPLY_FAULT_INDICATION_ON = 555749910 /* (((0x1216 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Electric Propulsion Motor Over Speed Indication On (ElecPrplMtrOvrSpdIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    ELECTRIC_PROPULSION_MOTOR_OVER_SPEED_INDICATION_ON = 555749911 /* (((0x1217 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Utility Charging Interference Indication On (UtlChrgIntfrIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    UTILITY_CHARGING_INTERFERENCE_INDICATION_ON = 555749912 /* (((0x1218 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Off Board Charge Station Fault Detected (OffBrdChrgStnFltDtd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    OFF_BOARD_CHARGE_STATION_FAULT_DETECTED = 555749913 /* (((0x1219 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trip A Information : Distance Traveled (TAI_DistTrvld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRIP_A_INFORMATION_DISTANCE_TRAVELED = 559944218 /* (((0x121A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Trip A Information : Electrical Energy Economy (TAI_EleclEngyEcon)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRIP_A_INFORMATION_ELECTRICAL_ENERGY_ECONOMY = 559944219 /* (((0x121B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Trip A Information : Electrical Energy (TAI_EleclEngy)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRIP_A_INFORMATION_ELECTRICAL_ENERGY = 559944220 /* (((0x121C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Trip A Electrical Energy Economy Reset Requested (TripAEleclEngyEconRstReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRIP_A_ELECTRICAL_ENERGY_ECONOMY_RESET_REQUESTED = 555749917 /* (((0x121D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Charge Status Peek In Screen Active Indication On (ChrgStsPeekInScrnActvIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    CHARGE_STATUS_PEEK_IN_SCREEN_ACTIVE_INDICATION_ON = 555749918 /* (((0x121E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Discharge Power Limited Indication On (DischrgPwrLtdIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DISCHARGE_POWER_LIMITED_INDICATION_ON = 555749919 /* (((0x121F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Discharge Power Limited Display Percent Visible (DischrgPwrLtdDispPctVsbl)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DISCHARGE_POWER_LIMITED_DISPLAY_PERCENT_VISIBLE = 555749920 /* (((0x1220 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Diesel Exhaust Information : Diesel Exhaust Fluid Remaining Distance (DslExhFldRmnDist)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DIESEL_EXHAUST_INFORMATION_DIESEL_EXHAUST_FLUID_REMAINING_DISTANCE = 557847073 /* (((0x1221 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Diesel Exhaust Fluid Level Percent (DslExhFldLvlPct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DIESEL_EXHAUST_FLUID_LEVEL_PERCENT = 559944226 /* (((0x1222 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Service Hybrid Charging System Indication On (ServHybChrgSysIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    SERVICE_HYBRID_CHARGING_SYSTEM_INDICATION_ON = 555749923 /* (((0x1223 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Trip B Information : Distance Traveled (TBI_DistTrvld)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRIP_B_INFORMATION_DISTANCE_TRAVELED = 559944228 /* (((0x1224 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Trip B Information : Electrical Energy Economy (TBI_EleclEngyEcon)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRIP_B_INFORMATION_ELECTRICAL_ENERGY_ECONOMY = 559944229 /* (((0x1225 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Trip B Information : Electrical Energy (TBI_EleclEngy)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    TRIP_B_INFORMATION_ELECTRICAL_ENERGY = 559944230 /* (((0x1226 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL) */,
    /**
     * Trip B Electrical Energy Economy Reset Requested (TripBEleclEngyEconRstReqd)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     */
    TRIP_B_ELECTRICAL_ENERGY_ECONOMY_RESET_REQUESTED = 555749927 /* (((0x1227 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Discharge Power Limited Display Percent (DischrgPwrLtdDispPct)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    DISCHARGE_POWER_LIMITED_DISPLAY_PERCENT = 557847080 /* (((0x1228 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Advanced Park Assist Visual Message Requests : Advanced Park Assist Slow Down Indication On (APAVMR_SloDnIndOn)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     */
    APAVMR_ADVANCED_PARK_ASSIST_SLOW_DOWN_INDICATION_ON = 555749929 /* (((0x1229 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL) */,
    /**
     * Amplifier Call Audio Playback State of Health (AmpCallAudPlybkSOH)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ
     * @data_enum AmplifierCallAudioPlaybackStateOfHealth
     */
    AMPLIFIER_CALL_AUDIO_PLAYBACK_STATE_OF_HEALTH = 557847082 /* (((0x122A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Advanced Park Assist Soft Button Selected State Raw (APASftBtnSeltdStatRw)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum AdvancedParkAssistSoftButtonSelectedStateRaw
     */
    ADVANCED_PARK_ASSIST_SOFT_BUTTON_SELECTED_STATE_RAW = 557847083 /* (((0x122B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Park Assist Soft Button Selected State Raw (PASftBtnSeltdStatRw)
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:WRITE
     * @data_enum ParkAssistSoftButtonSelectedStateRaw
     */
    PARK_ASSIST_SOFT_BUTTON_SELECTED_STATE_RAW = 557847084 /* (((0x122C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Automatic Lane Change Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutomaticLaneChangeCustomization
     */
    AUTOMATIC_LANE_CHANGE_CUSTOMIZATION = 557850624 /* (((0x2000 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Automatic Transparent Hood Activation Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutomaticTransparentHoodActivationCustomization
     */
    AUTOMATIC_TRANSPARENT_HOOD_ACTIVATION_CUSTOMIZATION = 557850625 /* (((0x2001 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Cargo Bed View Auto Lighting Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CargoBedViewAutoLightingCustomization
     */
    CARGO_BED_VIEW_AUTO_LIGHTING_CUSTOMIZATION = 557850626 /* (((0x2002 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Driver Alert Type Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum DriverAlertTypeCustomization
     */
    DRIVER_ALERT_TYPE_CUSTOMIZATION = 557850627 /* (((0x2003 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Front Pcm Response Type Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum FrontPcmResponseTypeCustomization
     */
    FRONT_PCM_RESPONSE_TYPE_CUSTOMIZATION = 557850628 /* (((0x2004 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Forward Impact Mitigation Operation Select Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum ForwardImpactMitigationOperationSelectCustomization
     */
    FORWARD_IMPACT_MITIGATION_OPERATION_SELECT_CUSTOMIZATION = 557850629 /* (((0x2005 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Go Notifier Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum GoNotifierCustomization
     */
    GO_NOTIFIER_CUSTOMIZATION = 557850630 /* (((0x2006 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Jack Knife Detection Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum JackKnifeDetectionCustomization
     */
    JACK_KNIFE_DETECTION_CUSTOMIZATION = 557850631 /* (((0x2007 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Lane Change Alert Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum LaneChangeAlertCustomization
     */
    LANE_CHANGE_ALERT_CUSTOMIZATION = 557850632 /* (((0x2008 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Park Assist On Off Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum ParkAssistOnOffCustomization
     */
    PARK_ASSIST_ON_OFF_CUSTOMIZATION = 557850633 /* (((0x2009 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Park Assist Trailer Hitch Present Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum ParkAssistTrailerHitchPresentCustomization
     */
    PARK_ASSIST_TRAILER_HITCH_PRESENT_CUSTOMIZATION = 557850634 /* (((0x200A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Cross Traffic Alert Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RearCrossTrafficAlertCustomization
     */
    REAR_CROSS_TRAFFIC_ALERT_CUSTOMIZATION = 557850635 /* (((0x200B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Pcm Response Type Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RearPcmResponseTypeCustomization
     */
    REAR_PCM_RESPONSE_TYPE_CUSTOMIZATION = 557850636 /* (((0x200C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear View Park Assist Symbol Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RearViewParkAssistSymbolCustomization
     */
    REAR_VIEW_PARK_ASSIST_SYMBOL_CUSTOMIZATION = 557850637 /* (((0x200D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Side Blind Zone Alert Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum SideBlindZoneAlertCustomization
     */
    SIDE_BLIND_ZONE_ALERT_CUSTOMIZATION = 557850638 /* (((0x200E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Surround View Lighting Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum SurroundViewLightingCustomization
     */
    SURROUND_VIEW_LIGHTING_CUSTOMIZATION = 557850639 /* (((0x200F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Seat Belt Tightening Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum SeatBeltTighteningCustomization
     */
    SEAT_BELT_TIGHTENING_CUSTOMIZATION = 557850640 /* (((0x2010 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Traffic Light Assist Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum TrafficLightAssistCustomization
     */
    TRAFFIC_LIGHT_ASSIST_CUSTOMIZATION = 557850641 /* (((0x2011 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailering Mirror Video Enable Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum TraileringMirrorVideoEnableCustomization
     */
    TRAILERING_MIRROR_VIDEO_ENABLE_CUSTOMIZATION = 557850642 /* (((0x2012 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Trailering Mirror Video Guidelines Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum TraileringMirrorVideoGuidelinesCustomization
     */
    TRAILERING_MIRROR_VIDEO_GUIDELINES_CUSTOMIZATION = 557850643 /* (((0x2013 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Adaptive Lighting Response Type Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AdaptiveLightingResponseTypeCustomization
     */
    ADAPTIVE_LIGHTING_RESPONSE_TYPE_CUSTOMIZATION = 557850644 /* (((0x2014 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Automatic Drive Locking Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutomaticDriveLockingCustomization
     */
    AUTOMATIC_DRIVE_LOCKING_CUSTOMIZATION = 557850645 /* (((0x2015 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Auto Memory Recall Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutoMemoryRecallCustomization
     */
    AUTO_MEMORY_RECALL_CUSTOMIZATION = 557850646 /* (((0x2016 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Auto Mirror Fold Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutoMirrorFoldCustomization
     */
    AUTO_MIRROR_FOLD_CUSTOMIZATION = 557850647 /* (((0x2017 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Automatic Unlocking Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutomaticUnlockingCustomization
     */
    AUTOMATIC_UNLOCKING_CUSTOMIZATION = 557850648 /* (((0x2018 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Auto Rear Wipe Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutoRearWipeCustomization
     */
    AUTO_REAR_WIPE_CUSTOMIZATION = 557850649 /* (((0x2019 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Daytime Tail Lights Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum DaytimeTailLightsCustomization
     */
    DAYTIME_TAIL_LIGHTS_CUSTOMIZATION = 557850650 /* (((0x201A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Easy Exit Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum EasyExitCustomization
     */
    EASY_EXIT_CUSTOMIZATION = 557850651 /* (((0x201B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Exit Lighting Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum ExitLightingCustomization
     */
    EXIT_LIGHTING_CUSTOMIZATION = 557850652 /* (((0x201C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Glare Free High Beam Response Type Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum GlareFreeHighBeamResponseTypeCustomization
     */
    GLARE_FREE_HIGH_BEAM_RESPONSE_TYPE_CUSTOMIZATION = 557850653 /* (((0x201D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Hands Free Rear Closure Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum HandsFreeRearClosureCustomization
     */
    HANDS_FREE_REAR_CLOSURE_CUSTOMIZATION = 557850654 /* (((0x201E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Last Door Closed Locking Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum LastDoorClosedLockingCustomization
     */
    LAST_DOOR_CLOSED_LOCKING_CUSTOMIZATION = 557850655 /* (((0x201F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Left Right Hand Traffic Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum LeftRightHandTrafficCustomization
     */
    LEFT_RIGHT_HAND_TRAFFIC_CUSTOMIZATION = 557850656 /* (((0x2020 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Open Door Anti Lock Out Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum OpenDoorAntiLockOutCustomization
     */
    OPEN_DOOR_ANTI_LOCK_OUT_CUSTOMIZATION = 557850657 /* (((0x2021 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Pedestrian Friendly Alert Sound Selection Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PedestrianFriendlyAlertSoundSelectionCustomization
     */
    PEDESTRIAN_FRIENDLY_ALERT_SOUND_SELECTION_CUSTOMIZATION = 557850658 /* (((0x2022 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Phone Left In Vehicle Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PhoneLeftInVehicleCustomization
     */
    PHONE_LEFT_IN_VEHICLE_CUSTOMIZATION = 557850659 /* (((0x2023 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Passive Unlocking Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PassiveUnlockingCustomization
     */
    PASSIVE_UNLOCKING_CUSTOMIZATION = 557850660 /* (((0x2024 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Power Rear Closure Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PowerRearClosureCustomization
     */
    POWER_REAR_CLOSURE_CUSTOMIZATION = 557850661 /* (((0x2025 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Remote In Vehicle Reminder Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RemoteInVehicleReminderCustomization
     */
    REMOTE_IN_VEHICLE_REMINDER_CUSTOMIZATION = 557850662 /* (((0x2026 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Remote Left Vehicle Reminder Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RemoteLeftVehicleReminderCustomization
     */
    REMOTE_LEFT_VEHICLE_REMINDER_CUSTOMIZATION = 557850663 /* (((0x2027 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Reverse Tilt Mirror Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum ReverseTiltMirrorCustomization
     */
    REVERSE_TILT_MIRROR_CUSTOMIZATION = 557850664 /* (((0x2028 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Relock Remote Unlocked Door Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RelockRemoteUnlockedDoorCustomization
     */
    RELOCK_REMOTE_UNLOCKED_DOOR_CUSTOMIZATION = 557850665 /* (((0x2029 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Remote Sunroof Operation Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RemoteSunroofOperationCustomization
     */
    REMOTE_SUNROOF_OPERATION_CUSTOMIZATION = 557850666 /* (((0x202A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Remote Window Operation Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RemoteWindowOperationCustomization
     */
    REMOTE_WINDOW_OPERATION_CUSTOMIZATION = 557850667 /* (((0x202B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rain Sense Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RainSenseCustomization
     */
    RAIN_SENSE_CUSTOMIZATION = 557850668 /* (((0x202C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Running Boards Automatic Deployment Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RunningBoardsAutomaticDeploymentCustomization
     */
    RUNNING_BOARDS_AUTOMATIC_DEPLOYMENT_CUSTOMIZATION = 557850669 /* (((0x202D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Running Boards Manual Deployment Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RunningBoardsManualDeploymentCustomization
     */
    RUNNING_BOARDS_MANUAL_DEPLOYMENT_CUSTOMIZATION = 557850670 /* (((0x202E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Remote Locking Feedback Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RemoteLockingFeedbackCustomization
     */
    REMOTE_LOCKING_FEEDBACK_CUSTOMIZATION = 557850671 /* (((0x202F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Remote Unlock Lighting Feedback Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RemoteUnlockLightingFeedbackCustomization
     */
    REMOTE_UNLOCK_LIGHTING_FEEDBACK_CUSTOMIZATION = 557850672 /* (((0x2030 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Selective Unlocking Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum SelectiveUnlockingCustomization
     */
    SELECTIVE_UNLOCKING_CUSTOMIZATION = 557850673 /* (((0x2031 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Vehicle Locator Lights Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum VehicleLocatorLightsCustomization
     */
    VEHICLE_LOCATOR_LIGHTS_CUSTOMIZATION = 557850674 /* (((0x2032 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Walk Away Locking Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum WalkAwayLockingCustomization
     */
    WALK_AWAY_LOCKING_CUSTOMIZATION = 557850675 /* (((0x2033 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Custom Mode Active Aero Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CustomModeActiveAeroCustomization
     */
    CUSTOM_MODE_ACTIVE_AERO_CUSTOMIZATION = 557850676 /* (((0x2034 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Custom Mode Brake Pedal Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CustomModeBrakePedalCustomization
     */
    CUSTOM_MODE_BRAKE_PEDAL_CUSTOMIZATION = 557850677 /* (((0x2035 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Custom Mode Driveline Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CustomModeDrivelineCustomization
     */
    CUSTOM_MODE_DRIVELINE_CUSTOMIZATION = 557850678 /* (((0x2036 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Custom Mode Powertrain Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CustomModePowertrainCustomization
     */
    CUSTOM_MODE_POWERTRAIN_CUSTOMIZATION = 557850679 /* (((0x2037 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Custom Mode Ride Height Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CustomModeRideHeightCustomization
     */
    CUSTOM_MODE_RIDE_HEIGHT_CUSTOMIZATION = 557850680 /* (((0x2038 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Custom Mode Sound Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CustomModeSoundCustomization
     */
    CUSTOM_MODE_SOUND_CUSTOMIZATION = 557850681 /* (((0x2039 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Custom Mode Suspension Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CustomModeSuspensionCustomization
     */
    CUSTOM_MODE_SUSPENSION_CUSTOMIZATION = 557850682 /* (((0x203A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Custom Mode Steering Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CustomModeSteeringCustomization
     */
    CUSTOM_MODE_STEERING_CUSTOMIZATION = 557850683 /* (((0x203B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Custom Mode Traction Stability Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CustomModeTractionStabilityCustomization
     */
    CUSTOM_MODE_TRACTION_STABILITY_CUSTOMIZATION = 557850684 /* (((0x203C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Extended Hill Start Assist Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum ExtendedHillStartAssistCustomization
     */
    EXTENDED_HILL_START_ASSIST_CUSTOMIZATION = 557850685 /* (((0x203D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Front Ride Height Gps Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum FrontRideHeightGpsCustomization
     */
    FRONT_RIDE_HEIGHT_GPS_CUSTOMIZATION = 557850686 /* (((0x203E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Leveling System Alignment Mode Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum LevelingSystemAlignmentModeCustomization
     */
    LEVELING_SYSTEM_ALIGNMENT_MODE_CUSTOMIZATION = 557850687 /* (((0x203F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Leveling System Entry Egress Mode Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum LevelingSystemEntryEgressModeCustomization
     */
    LEVELING_SYSTEM_ENTRY_EGRESS_MODE_CUSTOMIZATION = 557850688 /* (((0x2040 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Leveling System Service Mode Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum LevelingSystemServiceModeCustomization
     */
    LEVELING_SYSTEM_SERVICE_MODE_CUSTOMIZATION = 557850689 /* (((0x2041 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Personal Mode Active Aero Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PersonalModeActiveAeroCustomization
     */
    PERSONAL_MODE_ACTIVE_AERO_CUSTOMIZATION = 557850690 /* (((0x2042 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Personal Mode Brake Pedal Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PersonalModeBrakePedalCustomization
     */
    PERSONAL_MODE_BRAKE_PEDAL_CUSTOMIZATION = 557850691 /* (((0x2043 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Personal Mode Driveline Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PersonalModeDrivelineCustomization
     */
    PERSONAL_MODE_DRIVELINE_CUSTOMIZATION = 557850692 /* (((0x2044 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Personal Mode Ride Height Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PersonalModeRideHeightCustomization
     */
    PERSONAL_MODE_RIDE_HEIGHT_CUSTOMIZATION = 557850693 /* (((0x2045 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Personal Mode Sound Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PersonalModeSoundCustomization
     */
    PERSONAL_MODE_SOUND_CUSTOMIZATION = 557850694 /* (((0x2046 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Personal Mode Suspension Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PersonalModeSuspensionCustomization
     */
    PERSONAL_MODE_SUSPENSION_CUSTOMIZATION = 557850695 /* (((0x2047 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Personal Mode Steering Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PersonalModeSteeringCustomization
     */
    PERSONAL_MODE_STEERING_CUSTOMIZATION = 557850696 /* (((0x2048 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Air Quality Sensor Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AirQualitySensorCustomization
     */
    AIR_QUALITY_SENSOR_CUSTOMIZATION = 557850700 /* (((0x204C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Automatic Air Distribution Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutomaticAirDistributionCustomization
     */
    AUTOMATIC_AIR_DISTRIBUTION_CUSTOMIZATION = 557850701 /* (((0x204D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Automatic Cooled Seat Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutomaticCooledSeatCustomization
     */
    AUTOMATIC_COOLED_SEAT_CUSTOMIZATION = 557850702 /* (((0x204E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Automatic Defog Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutomaticDefogCustomization
     */
    AUTOMATIC_DEFOG_CUSTOMIZATION = 557850703 /* (((0x204F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Automatic Fan Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutomaticFanCustomization
     */
    AUTOMATIC_FAN_CUSTOMIZATION = 557850704 /* (((0x2050 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Automatic Heated Seat Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum AutomaticHeatedSeatCustomization
     */
    AUTOMATIC_HEATED_SEAT_CUSTOMIZATION = 557850705 /* (((0x2051 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Ionizer Control Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum IonizerControlCustomization
     */
    IONIZER_CONTROL_CUSTOMIZATION = 557850707 /* (((0x2053 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Pollution Control Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PollutionControlCustomization
     */
    POLLUTION_CONTROL_CUSTOMIZATION = 557850708 /* (((0x2054 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Remote Start Cooled Seat Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RemoteStartCooledSeatCustomization
     */
    REMOTE_START_COOLED_SEAT_CUSTOMIZATION = 557850709 /* (((0x2055 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Remote Start Heated Seat Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RemoteStartHeatedSeatCustomization
     */
    REMOTE_START_HEATED_SEAT_CUSTOMIZATION = 557850710 /* (((0x2056 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Defog Startup Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RearDefogStartupCustomization
     */
    REAR_DEFOG_STARTUP_CUSTOMIZATION = 557850711 /* (((0x2057 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Seat Reminder Enable Disable Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RearSeatReminderEnableDisableCustomization
     */
    REAR_SEAT_REMINDER_ENABLE_DISABLE_CUSTOMIZATION = 557850712 /* (((0x2058 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Rear Zone Startup Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum RearZoneStartupCustomization
     */
    REAR_ZONE_STARTUP_CUSTOMIZATION = 557850713 /* (((0x2059 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Seat Belt Shift Interlock Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum SeatBeltShiftInterlockCustomization
     */
    SEAT_BELT_SHIFT_INTERLOCK_CUSTOMIZATION = 557850715 /* (((0x205B | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Overspeed Warning Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum TeenDriverOverspeedWarningCustomization
     */
    TEEN_DRIVER_OVERSPEED_WARNING_CUSTOMIZATION = 557850716 /* (((0x205C | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Speed Limit Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum TeenDriverSpeedLimitCustomization
     */
    TEEN_DRIVER_SPEED_LIMIT_CUSTOMIZATION = 557850717 /* (((0x205D | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Teen Driver Seat Belt Shift Interlock Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum TeenDriverSeatBeltShiftInterlockCustomization
     */
    TEEN_DRIVER_SEAT_BELT_SHIFT_INTERLOCK_CUSTOMIZATION = 557850718 /* (((0x205E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Interior Ambient Color Control Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum InteriorAmbientColorControlCustomization
     */
    INTERIOR_AMBIENT_COLOR_CONTROL_CUSTOMIZATION = 557850719 /* (((0x205F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Auxiliary 1 Ambient Animation Control Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum Auxiliary1AmbientAnimationControlCustomization
     */
    AUXILIARY_1_AMBIENT_ANIMATION_CONTROL_CUSTOMIZATION = 557850720 /* (((0x2060 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Auxiliary 1 Ambient Color Control Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum Auxiliary1AmbientColorControlCustomization
     */
    AUXILIARY_1_AMBIENT_COLOR_CONTROL_CUSTOMIZATION = 557850721 /* (((0x2061 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Interior Ambient Animation Control Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum InteriorAmbientAnimationControlCustomization
     */
    INTERIOR_AMBIENT_ANIMATION_CONTROL_CUSTOMIZATION = 557850722 /* (((0x2062 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Auxiliary 1 Ambient Brightness Control Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum Auxiliary1AmbientBrightnessControlCustomization
     */
    AUXILIARY_1_AMBIENT_BRIGHTNESS_CONTROL_CUSTOMIZATION = 557850723 /* (((0x2063 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Interior Ambient Brightness Control Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum InteriorAmbientBrightnessControlCustomization
     */
    INTERIOR_AMBIENT_BRIGHTNESS_CONTROL_CUSTOMIZATION = 557850724 /* (((0x2064 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Personal Mode Electric Vehicle Pedal Map Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PersonalModeElectricVehiclePedalMapCustomization
     */
    PERSONAL_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_CUSTOMIZATION = 557850725 /* (((0x2065 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * One Pedal Driving Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum OnePedalDrivingCustomization
     */
    ONE_PEDAL_DRIVING_CUSTOMIZATION = 557850726 /* (((0x2066 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Personal Mode Energy Regeneration Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PersonalModeEnergyRegenerationCustomization
     */
    PERSONAL_MODE_ENERGY_REGENERATION_CUSTOMIZATION = 557850727 /* (((0x2067 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Custom Mode Energy Regeneration Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CustomModeEnergyRegenerationCustomization
     */
    CUSTOM_MODE_ENERGY_REGENERATION_CUSTOMIZATION = 557850728 /* (((0x2068 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Power Front Storage Compartment Closure Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PowerFrontStorageCompartmentClosureCustomization
     */
    POWER_FRONT_STORAGE_COMPARTMENT_CLOSURE_CUSTOMIZATION = 557850729 /* (((0x2069 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Bicycle Detection Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum BicycleDetectionCustomization
     */
    BICYCLE_DETECTION_CUSTOMIZATION = 557850730 /* (((0x206A | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Custom Mode Electric Vehicle Pedal Map Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum CustomModeElectricVehiclePedalMapCustomization
     */
    CUSTOM_MODE_ELECTRIC_VEHICLE_PEDAL_MAP_CUSTOMIZATION = 557850736 /* (((0x2070 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Power Take Off Standby Speed Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PowerTakeOffStandbySpeedCustomization
     */
    POWER_TAKE_OFF_STANDBY_SPEED_CUSTOMIZATION = 557850750 /* (((0x207E | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Power Take Off Engine Speed Type Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PowerTakeOffEngineSpeedTypeCustomization
     */
    POWER_TAKE_OFF_ENGINE_SPEED_TYPE_CUSTOMIZATION = 557850751 /* (((0x207F | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Power Take Off Set 2 Speed Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PowerTakeOffSet2SpeedCustomization
     */
    POWER_TAKE_OFF_SET_2_SPEED_CUSTOMIZATION = 557850752 /* (((0x2080 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Power Take Off Engine Run Timer Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PowerTakeOffEngineRunTimerCustomization
     */
    POWER_TAKE_OFF_ENGINE_RUN_TIMER_CUSTOMIZATION = 557850753 /* (((0x2081 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Power Take Off Set 1 Speed Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PowerTakeOffSet1SpeedCustomization
     */
    POWER_TAKE_OFF_SET_1_SPEED_CUSTOMIZATION = 557850754 /* (((0x2082 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Power Take Off Mode Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PowerTakeOffModeCustomization
     */
    POWER_TAKE_OFF_MODE_CUSTOMIZATION = 557850755 /* (((0x2083 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
    /**
     * Power Take Off Tap Step Speed Customization
     *
     * @change_mode VehiclePropertyChangeMode:ON_CHANGE
     * @access VehiclePropertyAccess:READ_WRITE
     * @data_enum PowerTakeOffTapStepSpeedCustomization
     */
    POWER_TAKE_OFF_TAP_STEP_SPEED_CUSTOMIZATION = 557850756 /* (((0x2084 | VehiclePropertyGroup:VENDOR) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL) */,
};
