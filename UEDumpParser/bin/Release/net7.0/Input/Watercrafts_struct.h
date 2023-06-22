// Enum Watercrafts.EOarInputState
enum class EOarInputState : uint8_t {
	Inactive,
	Active,
	Braking,
	EOarInputState_MAX,
};

// Enum Watercrafts.EOarState
enum class EOarState : uint8_t {
	Idle,
	InStroke,
	ApexOfStroke,
	RecoveringFromStroke,
	Braking,
	EOarState_MAX,
};

// Enum Watercrafts.EOarIdentifier
enum class EOarIdentifier : uint8_t {
	Left,
	Right,
	EOarIdentifier_MAX,
};

// Enum Watercrafts.ERowboatActionTelemetry
enum class ERowboatActionTelemetry : uint8_t {
	None,
	Mount,
	Unmount,
	ERowboatActionTelemetry_MAX,
};

// Enum Watercrafts.EWatercraftDespawnReason
enum class EWatercraftDespawnReason : uint8_t {
	Unknown,
	Destroyed,
	ExternalRequest,
	Migration,
	WorldEnding,
	EWatercraftDespawnReason_MAX,
};

// ScriptStruct Watercrafts.RowboatLiveryPickerDataAssetConditions
// Size: 0x18 (Inherited: 0x00)
struct FRowboatLiveryPickerDataAssetConditions {
	struct URowboatLiveryPickerDataAsset* RowboatLiveryPickerDataAsset; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	struct FFeatureFlag Feature; // 0x0c(0x0c)
};

// ScriptStruct Watercrafts.RowboatLiveryByWeight
// Size: 0x28 (Inherited: 0x00)
struct FRowboatLiveryByWeight {
	struct UClass* LiveryEntitlement; // 0x00(0x20)
	float Weight; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Watercrafts.RowboatDamageEffectData
// Size: 0x18 (Inherited: 0x00)
struct FRowboatDamageEffectData {
	struct UMaterialInstanceDynamic* DynamicMaterialInstance; // 0x00(0x08)
	float FadeInDuration; // 0x08(0x04)
	char UnknownData_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct Watercrafts.RowboatStrainDamageData
// Size: 0x20 (Inherited: 0x00)
struct FRowboatStrainDamageData {
	float StormDamageScalar; // 0x00(0x04)
	float WaterStrengthToCountAsStorm; // 0x04(0x04)
	float StormStrengthThresholdForDamage; // 0x08(0x04)
	float MinStormDamageFrequencyInSeconds; // 0x0c(0x04)
	float MaxStormDamageFrequencyInSeconds; // 0x10(0x04)
	float WorldEdgeDamageScalar; // 0x14(0x04)
	float MinWorldEdgeDamageFrequencyInSeconds; // 0x18(0x04)
	float MaxWorldEdgeDamageFrequencyInSeconds; // 0x1c(0x04)
};

// ScriptStruct Watercrafts.ScrapeableDamageSpeedEntry
// Size: 0x18 (Inherited: 0x00)
struct FScrapeableDamageSpeedEntry {
	struct UClass* SpeedBand; // 0x00(0x08)
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x08(0x08)
	int32_t DamageAmount; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Watercrafts.WatercraftRolloverCorrector
// Size: 0x0c (Inherited: 0x00)
struct FWatercraftRolloverCorrector {
	float RollThresholdToConsiderRolledOver; // 0x00(0x04)
	float TorqueScalar; // 0x04(0x04)
	char UnknownData_8[0x4]; // 0x08(0x04)
};

// ScriptStruct Watercrafts.OarParams
// Size: 0x38 (Inherited: 0x00)
struct FOarParams {
	float RowingPower; // 0x00(0x04)
	float OarLength; // 0x04(0x04)
	struct FVector OarOffsetDirection; // 0x08(0x0c)
	struct FVector OarForwardForceDirection; // 0x14(0x0c)
	float TimeForCompleteStroke; // 0x20(0x04)
	float TimeForResetCompletion; // 0x24(0x04)
	struct UCurveFloat* RowingPowerCurve; // 0x28(0x08)
	float BrakeForcePerMetresPerSecond; // 0x30(0x04)
	float EndOfStrokeBrakeForcePerMetresPerSecond; // 0x34(0x04)
};

// ScriptStruct Watercrafts.Oar
// Size: 0x60 (Inherited: 0x00)
struct FOar {
	struct FOarParams OarParams; // 0x00(0x38)
	char UnknownData_38[0x28]; // 0x38(0x28)
};

// ScriptStruct Watercrafts.QuestVariableWatercraft
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableWatercraft : FQuestVariable {
};

// ScriptStruct Watercrafts.EventRowboatLoaded
// Size: 0x01 (Inherited: 0x00)
struct FEventRowboatLoaded {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Watercrafts.EventOarStrokeEnded
// Size: 0x01 (Inherited: 0x00)
struct FEventOarStrokeEnded {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Watercrafts.EventRowboatExitedWater
// Size: 0x01 (Inherited: 0x00)
struct FEventRowboatExitedWater {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Watercrafts.EventRowboatEnteredWater
// Size: 0x01 (Inherited: 0x00)
struct FEventRowboatEnteredWater {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Watercrafts.RowboatMountStateTelemetryEvent
// Size: 0x14 (Inherited: 0x00)
struct FRowboatMountStateTelemetryEvent {
	struct FGuid WatercraftId; // 0x00(0x10)
	char ActionName; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Watercrafts.WatercraftDespawnTelemetryEvent
// Size: 0x20 (Inherited: 0x00)
struct FWatercraftDespawnTelemetryEvent {
	struct FGuid WatercraftId; // 0x00(0x10)
	struct FVector Location; // 0x10(0x0c)
	char DespawnReason; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Watercrafts.WatercraftSpawnTelemetryEvent
// Size: 0x48 (Inherited: 0x00)
struct FWatercraftSpawnTelemetryEvent {
	struct FGuid WatercraftId; // 0x00(0x10)
	struct FString WatercraftType; // 0x10(0x10)
	struct FString OriginDescription; // 0x20(0x10)
	struct FVector Location; // 0x30(0x0c)
	struct FVector Forward; // 0x3c(0x0c)
};

// ScriptStruct Watercrafts.EventExitedWatercraft
// Size: 0x10 (Inherited: 0x00)
struct FEventExitedWatercraft {
	struct AActor* Watercraft; // 0x00(0x08)
	struct AActor* Actor; // 0x08(0x08)
};

// ScriptStruct Watercrafts.EventEnteredWatercraft
// Size: 0x10 (Inherited: 0x00)
struct FEventEnteredWatercraft {
	struct AActor* Watercraft; // 0x00(0x08)
	struct AActor* Actor; // 0x08(0x08)
};

