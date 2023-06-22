// Enum NaturalDisasters.EAshCloudState
enum class EAshCloudState : uint8_t {
	Spawning,
	Active,
	Dissipating,
	EAshCloudState_MAX,
};

// Enum NaturalDisasters.EVolcanoTargetHitType
enum class EVolcanoTargetHitType : uint8_t {
	OnTarget,
	NearMiss,
	Random,
	EVolcanoTargetHitType_MAX,
};

// Enum NaturalDisasters.EVolcanoTargetType
enum class EVolcanoTargetType : uint8_t {
	Player,
	Ship,
	Watercraft,
	EVolcanoTargetType_MAX,
};

// Enum NaturalDisasters.EAshenLordWorldEndCloudState
enum class EAshenLordWorldEndCloudState : uint8_t {
	Inactive,
	Active,
	EAshenLordWorldEndCloudState_MAX,
};

// Enum NaturalDisasters.EGeyserState
enum class EGeyserState : uint8_t {
	Dormant,
	Active,
	Disabled,
	EGeyserState_MAX,
};

// Enum NaturalDisasters.EEarthquakeState
enum class EEarthquakeState : uint8_t {
	Dormant,
	WarmingUp,
	Active,
	CoolingDown,
	EEarthquakeState_MAX,
};

// Enum NaturalDisasters.EGeyserManagerState
enum class EGeyserManagerState : uint8_t {
	Dormant,
	Active,
	EGeyserManagerState_MAX,
};

// Enum NaturalDisasters.EVolcanoState
enum class EVolcanoState : uint8_t {
	Dormant,
	WarmingUp,
	Erupting,
	EVolcanoState_MAX,
};

// ScriptStruct NaturalDisasters.WeightedVolcanoProjectile
// Size: 0xc0 (Inherited: 0x00)
struct FWeightedVolcanoProjectile {
	float Weight; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UClass* ProjectileClass; // 0x08(0x08)
	float ProjectileSpeedMinAtInnerRadius; // 0x10(0x04)
	float ProjectileSpeedMaxAtInnerRadius; // 0x14(0x04)
	float ProjectileSpeedMinAtOuterRadius; // 0x18(0x04)
	float ProjectileSpeedMaxAtOuterRadius; // 0x1c(0x04)
	float ProjectileGravityScale; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FWeightedProbabilityRangeOfRanges RotationRatePitch; // 0x28(0x30)
	struct FWeightedProbabilityRangeOfRanges RotationRateRoll; // 0x58(0x30)
	struct FWeightedProbabilityRangeOfRanges RotationRateYaw; // 0x88(0x30)
	struct UWwiseEvent* LaunchAudioPlayEvent; // 0xb8(0x08)
};

// ScriptStruct NaturalDisasters.VolcanoTarget
// Size: 0x18 (Inherited: 0x00)
struct FVolcanoTarget {
	char Type; // 0x00(0x01)
	char HitType; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct AActor* Target; // 0x08(0x08)
	int32_t NumExtraShots; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct NaturalDisasters.VolcanoTargetChances
// Size: 0x58 (Inherited: 0x00)
struct FVolcanoTargetChances {
	float OnTarget; // 0x00(0x04)
	float NearMiss; // 0x04(0x04)
	float Random; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FWeightedProbabilityRange OnTargetNumExtraShots; // 0x10(0x20)
	struct FWeightedProbabilityRange NearMissNumExtraShots; // 0x30(0x20)
	float CoolDownDuration; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// ScriptStruct NaturalDisasters.VolcanoSetupDataEmbersEntry
// Size: 0x10 (Inherited: 0x00)
struct FVolcanoSetupDataEmbersEntry {
	float MaxDistanceInMetres; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UObject* Effect; // 0x08(0x08)
};

// ScriptStruct NaturalDisasters.WeightedAshenLordVolcanoProjectile
// Size: 0xd0 (Inherited: 0x00)
struct FWeightedAshenLordVolcanoProjectile {
	float Weight; // 0x00(0x04)
	float GravityMultiplier; // 0x04(0x04)
	struct FWeightedProbabilityRangeOfRanges Speed; // 0x08(0x30)
	struct FWeightedProbabilityRangeOfRanges RotationRatePitch; // 0x38(0x30)
	struct FWeightedProbabilityRangeOfRanges RotationRateRoll; // 0x68(0x30)
	struct FWeightedProbabilityRangeOfRanges RotationRateYaw; // 0x98(0x30)
	struct UClass* ProjectileClass; // 0xc8(0x08)
};

// ScriptStruct NaturalDisasters.AshenLordWorldEndCloudAnimation
// Size: 0x08 (Inherited: 0x00)
struct FAshenLordWorldEndCloudAnimation {
	float ServerStartTime; // 0x00(0x04)
	float ServerLifeTime; // 0x04(0x04)
};

// ScriptStruct NaturalDisasters.GeyserStoryCustomisationData
// Size: 0x10 (Inherited: 0x00)
struct FGeyserStoryCustomisationData {
	struct FStoryFlag StoryFlag; // 0x00(0x08)
	struct UGeyserSetupDataAsset* GeyserSetupData; // 0x08(0x08)
};

// ScriptStruct NaturalDisasters.PlayerFeedback
// Size: 0x80 (Inherited: 0x00)
struct FPlayerFeedback {
	struct FEarthquakeForceFeedback ForceFeedback; // 0x00(0x40)
	struct TArray<struct UClass*> CameraShakes; // 0x40(0x10)
	struct FWeightedProbabilityRangeOfRanges StaggerStrength; // 0x50(0x30)
};

// ScriptStruct NaturalDisasters.EarthquakeForceFeedback
// Size: 0x40 (Inherited: 0x00)
struct FEarthquakeForceFeedback {
	struct TArray<struct FEarthquakeForceFeedbackOption> ForceFeedbackOptions; // 0x00(0x10)
	struct FWeightedProbabilityRangeOfRanges TimeBetweenRumbles; // 0x10(0x30)
};

// ScriptStruct NaturalDisasters.EarthquakeForceFeedbackOption
// Size: 0x10 (Inherited: 0x00)
struct FEarthquakeForceFeedbackOption {
	struct TArray<struct FLandmarkReactionEventPlayForceFeedbackEntry> ForceFeedback; // 0x00(0x10)
};

// ScriptStruct NaturalDisasters.EarthquakeStoryCustomisationData
// Size: 0x10 (Inherited: 0x00)
struct FEarthquakeStoryCustomisationData {
	struct FStoryFlag StoryFlag; // 0x00(0x08)
	struct UEarthquakeSetupDataAsset* EarthquakeSetupData; // 0x08(0x08)
};

// ScriptStruct NaturalDisasters.GeyserSpawnAngleOption
// Size: 0x0c (Inherited: 0x00)
struct FGeyserSpawnAngleOption {
	float Weight; // 0x00(0x04)
	float Direction; // 0x04(0x04)
	float Range; // 0x08(0x04)
};

// ScriptStruct NaturalDisasters.GeyserManagerStoryCustomisationData
// Size: 0x10 (Inherited: 0x00)
struct FGeyserManagerStoryCustomisationData {
	struct FStoryFlag StoryFlag; // 0x00(0x08)
	struct UGeyserManagerSetupDataAsset* GeyserManagerSetupData; // 0x08(0x08)
};

// ScriptStruct NaturalDisasters.VolcanoTargetCoolDown
// Size: 0x10 (Inherited: 0x00)
struct FVolcanoTargetCoolDown {
	struct AActor* Target; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct NaturalDisasters.VolcanoProjectileData
// Size: 0x1c (Inherited: 0x00)
struct FVolcanoProjectileData {
	int32_t WeightedVolcanoProjectileIndex; // 0x00(0x04)
	struct FVector LaunchVelocity; // 0x04(0x0c)
	struct FVector RotationRate; // 0x10(0x0c)
};

// ScriptStruct NaturalDisasters.VolcanoStateData
// Size: 0x0c (Inherited: 0x00)
struct FVolcanoStateData {
	char State; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float StateDuration; // 0x04(0x04)
	float PercentageOfMaxTargetingRange; // 0x08(0x04)
};

// ScriptStruct NaturalDisasters.VolcanoStoryCustomisationData
// Size: 0x10 (Inherited: 0x00)
struct FVolcanoStoryCustomisationData {
	struct FStoryFlag StoryFlag; // 0x00(0x08)
	struct UVolcanoSetupDataAsset* VolcanoSetupData; // 0x08(0x08)
};

// ScriptStruct NaturalDisasters.EventVolcanoStateChanged
// Size: 0x01 (Inherited: 0x00)
struct FEventVolcanoStateChanged {
	char State; // 0x00(0x01)
};

