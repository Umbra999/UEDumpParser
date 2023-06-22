// Enum AthenaAI.EAIKnockbackStrengthType
enum class EAIKnockbackStrengthType : uint8_t {
	Low,
	Medium,
	High,
	EAIKnockbackStrengthType_MAX,
};

// Enum AthenaAI.EAIAbilityDamageIntervalCounterMode
enum class EAIAbilityDamageIntervalCounterMode : uint8_t {
	DontBlock,
	BlockWhenExecutingThisAbility,
	BlockWhenExecutingAnyAbility,
	EAIAbilityDamageIntervalCounterMode_MAX,
};

// Enum AthenaAI.EAIDebugColour
enum class EAIDebugColour : uint8_t {
	Red,
	Green,
	Blue,
	White,
	Yellow,
	Black,
	EAIDebugColour_MAX,
};

// Enum AthenaAI.AISpawnRequestResult
enum class AISpawnRequestResult : uint8_t {
	Incomplete,
	Success,
	FailedSpawnDenied,
	FailedNoQuery,
	FailedNoValidPos,
	FailedLoadingPawnClass,
	FailedLoadingItemDropComponentClass,
	Cancelled,
	AISpawnRequestResult_MAX,
};

// Enum AthenaAI.ClassLoadState
enum class ClassLoadState : uint8_t {
	Incomplete,
	Success,
	NoLoad,
	Failed,
	ClassLoadState_MAX,
};

// Enum AthenaAI.AISpawnLocationSearchResult
enum class AISpawnLocationSearchResult : uint8_t {
	Incomplete,
	Success,
	FailedNoQuery,
	FailedNoValidPos,
	Cancelled,
	AISpawnLocationSearchResult_MAX,
};

// Enum AthenaAI.AISpawnRequestState
enum class AISpawnRequestState : uint8_t {
	PreloadClasses,
	AwaitingBegin,
	DelayUntilNextCanSpawnCheck,
	WaitForClassLoadsAndLocationResult,
	DelayUntilNextLocationCheck,
	Complete,
	AISpawnRequestState_MAX,
};

// Enum AthenaAI.EAITargetWeaponFiringArcResult
enum class EAITargetWeaponFiringArcResult : uint8_t {
	LeftOfArc,
	RightOfArc,
	WithinArc,
	EAITargetWeaponFiringArcResult_MAX,
};

// Enum AthenaAI.ESirenEncounterState
enum class ESirenEncounterState : uint8_t {
	Active,
	Inactive,
	ESirenEncounterState_MAX,
};

// Enum AthenaAI.EBlackboardIntValueComparisonType
enum class EBlackboardIntValueComparisonType : uint8_t {
	Equal,
	NotEqual,
	GreaterThan,
	LessThan,
	GreaterThanEquals,
	LessThanEquals,
	EBlackboardIntValueComparisonType_MAX,
};

// Enum AthenaAI.EBlackboardValueCompositeType
enum class EBlackboardValueCompositeType : uint8_t {
	And,
	Or,
	EBlackboardValueCompositeType_MAX,
};

// Enum AthenaAI.EBlackboardValueComparisonType
enum class EBlackboardValueComparisonType : uint8_t {
	NearlyEqual,
	NotNearlyEqual,
	GreaterThan,
	LessThan,
	GreaterThanEquals,
	LessThanEquals,
	EBlackboardValueComparisonType_MAX,
};

// Enum AthenaAI.EFloatValueComparisonType
enum class EFloatValueComparisonType : uint8_t {
	NearlyEqual,
	NotNearlyEqual,
	GreaterThan,
	LessThan,
	GreaterThanEquals,
	LessThanEquals,
	EFloatValueComparisonType_MAX,
};

// Enum AthenaAI.ECoralShieldVFXRole
enum class ECoralShieldVFXRole : uint8_t {
	None,
	Caster,
	Receiver,
	ECoralShieldVFXRole_MAX,
};

// Enum AthenaAI.ECoralShieldVFXState
enum class ECoralShieldVFXState : uint8_t {
	Off,
	Starting,
	On,
	Ending,
	ECoralShieldVFXState_MAX,
};

// Enum AthenaAI.ETraceDirection
enum class ETraceDirection : uint8_t {
	ItemToContext,
	ContextToItem,
	ETraceDirection_MAX,
};

// Enum AthenaAI.EAIThreatLevel
enum class EAIThreatLevel : uint8_t {
	NoDanger,
	Nervous,
	Threatened,
	Calm,
	EAIThreatLevel_MAX,
};

// Enum AthenaAI.EOceanCrawlerAbilityAudioKey
enum class EOceanCrawlerAbilityAudioKey : uint8_t {
	NONE,
	Hermit_Start_BurrowingLoop,
	Hermit_Stop_BurrowingLoop,
	Hermit_Play_BurrowDown_OneShot,
	Hermit_Play_BurrowEmerge_OneShot,
	Hermit_Play_BurrowHealTarget_OneShot,
	Hermit_Play_SporeBreath_OneShot,
	Hermit_Play_BullRushChargeUp_OneShot,
	Hermit_Play_BullRushChargeGo_OneShot,
	Hermit_Play_BullRushStaticImpact_OneShot,
	Hermit_Play_BullRushCharacterImpact_OneShot,
	Crab_Play_PummelWindBack_OneShot,
	Crab_Play_PummelImpact_OneShot,
	Crab_Play_CoralShieldStart_OneShot,
	Crab_Play_CoralShieldEnd_OneShot,
	Crab_Play_CoralShieldInterrupted_OneShot,
	Crab_Play_CoralShieldApplied_OneShot,
	Crab_Play_CoralShieldStopApplying_OneShot,
	Eel_Play_EelelectricShieldStartCharge_OneShot,
	Eel_Play_EelelectricShieldCast_OneShot,
	Eel_Play_EelelectricShieldInterrupted_OneShot,
	Eel_Play_EelelectricShieldAppliedToTarget_OneShot,
	Eel_Play_EelelectricShieldHitToChain_OneShot,
	Eel_Play_EelelectricShieldFinishedOnTarget_OneShot,
	Eel_Play_EelElectricEelThrowCharge_OneShot,
	EOceanCrawlerAbilityAudioKey_MAX,
};

// Enum AthenaAI.EAIDialogueState
enum class EAIDialogueState : uint8_t {
	Inactive,
	Passive,
	Alerted,
	Dead,
	EAIDialogueState_MAX,
};

// Enum AthenaAI.EBountySpawnerAudioState
enum class EBountySpawnerAudioState : uint8_t {
	None,
	Action,
	Anticipation,
	EBountySpawnerAudioState_MAX,
};

// Enum AthenaAI.EBountySpawnerType
enum class EBountySpawnerType : uint8_t {
	Default,
	BountyQuest,
	BountyFort,
	SeaFort,
	EBountySpawnerType_MAX,
};

// Enum AthenaAI.EBountyTargetRank
enum class EBountyTargetRank : uint8_t {
	Captain,
	Crew,
	EBountyTargetRank_MAX,
};

// Enum AthenaAI.EBountyTargetGender
enum class EBountyTargetGender : uint8_t {
	Male,
	Female,
	EBountyTargetGender_MAX,
};

// Enum AthenaAI.EFaunaInWaterState
enum class EFaunaInWaterState : uint8_t {
	NotInWater,
	FloatingOnSurface,
	Underwater,
	EFaunaInWaterState_MAX,
};

// Enum AthenaAI.EFaunaCratedState
enum class EFaunaCratedState : uint8_t {
	NotInCrate,
	InProxyCrate,
	InWieldedCrate,
	EFaunaCratedState_MAX,
};

// Enum AthenaAI.ESwimRotationMode
enum class ESwimRotationMode : uint8_t {
	FaceMovement,
	UprightStrafe,
	LongwaysStrafe,
	ESwimRotationMode_MAX,
};

// Enum AthenaAI.EArcToTargetDirection
enum class EArcToTargetDirection : uint8_t {
	VelocityOrRotation,
	VelocityOrRotation2D,
	InversedVelocityOrRotation,
	InversedVelocityOrRotation2D,
	Up,
	Down,
	GoalDirection2D,
	EArcToTargetDirection_MAX,
};

// Enum AthenaAI.EArcFollowingMode
enum class EArcFollowingMode : uint8_t {
	SharkArc,
	Simple3DArc,
	EArcFollowingMode_MAX,
};

// Enum AthenaAI.ESwimmingLineOfSightTest
enum class ESwimmingLineOfSightTest : uint8_t {
	None,
	Lazy,
	Immediate,
	ESwimmingLineOfSightTest_MAX,
};

// Enum AthenaAI.ESwimmingSyncMode
enum class ESwimmingSyncMode : uint8_t {
	Synchronous,
	Asynchronous,
	ESwimmingSyncMode_MAX,
};

// Enum AthenaAI.ESwimmingArcMode
enum class ESwimmingArcMode : uint8_t {
	ArcToTarget,
	SwimDirectlyToTarget,
	SwimDirectlyDown,
	ESwimmingArcMode_MAX,
};

// Enum AthenaAI.ESwimmingGoalCheckMode
enum class ESwimmingGoalCheckMode : uint8_t {
	Goal2D,
	Goal3D,
	ESwimmingGoalCheckMode_MAX,
};

// Enum AthenaAI.ETaskReaction
enum class ETaskReaction : uint8_t {
	Ignore,
	SucceedTask,
	FailTask,
	ETaskReaction_MAX,
};

// Enum AthenaAI.ETinySharkDespawnReason
enum class ETinySharkDespawnReason : uint8_t {
	Invalid,
	Defeated,
	TimedOut,
	ETinySharkDespawnReason_MAX,
};

// Enum AthenaAI.ETinySharkActiveState
enum class ETinySharkActiveState : uint8_t {
	TrackingTarget,
	WaitingForTarget,
	RepositionToTarget,
	WaitingForRespawn,
	ETinySharkActiveState_MAX,
};

// Enum AthenaAI.ETinySharkState
enum class ETinySharkState : uint8_t {
	Inactive,
	Spawning,
	Active,
	Defeated,
	Despawning,
	WaitingForItemsToFinishSpawning,
	ETinySharkState_MAX,
};

// Enum AthenaAI.ETinySharkTypes
enum class ETinySharkTypes : uint8_t {
	None,
	TheHuneringOne,
	TheCrestedQueen,
	TheShadowmaw,
	TheAncientTerror,
	TheShroudedGhost,
	ETinySharkTypes_MAX,
};

// Enum AthenaAI.EDebugPetStateDescriptor
enum class EDebugPetStateDescriptor : uint8_t {
	NoState,
	Hangout_Attached,
	Hangout_MoveToLocation,
	Reacting,
	Pursuit,
	Idle,
	Follow,
	Eating,
	Scared,
	ForcedIdle,
	EDebugPetStateDescriptor_MAX,
};

// Enum AthenaAI.EPetSize
enum class EPetSize : uint8_t {
	Small,
	Medium,
	Large,
	EPetSize_MAX,
};

// Enum AthenaAI.EAthenaAISpawnType
enum class EAthenaAISpawnType : uint8_t {
	SpawnOnLand,
	SpawnOnShip,
	SpawnSummoned,
	SpawnBoarding,
	Num,
	EAthenaAISpawnType_MAX,
};

// ScriptStruct AthenaAI.AIAbilityDebugReplicatedIntervals
// Size: 0x0c (Inherited: 0x00)
struct FAIAbilityDebugReplicatedIntervals {
	float ActivationTimerCooldown; // 0x00(0x04)
	float TimeBeforeNextExecution; // 0x04(0x04)
	float DamageBeforeNextExecution; // 0x08(0x04)
};

// ScriptStruct AthenaAI.AttackableTypeToAnimMapping
// Size: 0x28 (Inherited: 0x00)
struct FAttackableTypeToAnimMapping {
	char AttackType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UObject* AnimMontage; // 0x08(0x08)
	bool PlayAsDynamicMontage; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float AnimLength; // 0x14(0x04)
	float TimeIntoAnimOfAttack; // 0x18(0x04)
	float TargetKnockBackStrength; // 0x1c(0x04)
	struct FName RumbleTag; // 0x20(0x08)
};

// ScriptStruct AthenaAI.SwimAttackTargetShipImpulseData
// Size: 0x38 (Inherited: 0x00)
struct FSwimAttackTargetShipImpulseData {
	struct UClass* ShipSize; // 0x00(0x08)
	float PushImpulseForce; // 0x08(0x04)
	struct FVector PushImpulseLocation; // 0x0c(0x0c)
	float PushForceScalingFactorForeAndAftOfShipLowerBound; // 0x18(0x04)
	float PushForceScalingFactorForeAndAftOfShipUpperBound; // 0x1c(0x04)
	float RollImpulseForce; // 0x20(0x04)
	struct FVector RollImpulseLocation; // 0x24(0x0c)
	float RollForceScalingFactorForeAndAftOfShipLowerBound; // 0x30(0x04)
	float RollForceScalingFactorForeAndAftOfShipUpperBound; // 0x34(0x04)
};

// ScriptStruct AthenaAI.WeightedAISpawnTypeParams
// Size: 0xf0 (Inherited: 0x00)
struct FWeightedAISpawnTypeParams {
	float Weight; // 0x00(0x04)
	int32_t MaxTimesCanBeSelected; // 0x04(0x04)
	struct FAISpawnTypeParams Params; // 0x08(0xe8)
};

// ScriptStruct AthenaAI.AISpawnTypeParams
// Size: 0xe8 (Inherited: 0x00)
struct FAISpawnTypeParams {
	struct UClass* AIClass; // 0x00(0x20)
	struct FStringAssetReference SkillsetOverride; // 0x20(0x10)
	struct FStringAssetReference LoadoutOverride; // 0x30(0x10)
	struct FStringAssetReference FormOverride; // 0x40(0x10)
	struct FStringAssetReference AmmoOverride; // 0x50(0x10)
	struct UClass* ItemDropComponentClassOverride; // 0x60(0x20)
	struct UClass* AIClassIdOverride; // 0x80(0x08)
	struct FStringAssetReference TeamColorOverride; // 0x88(0x10)
	struct FEncounterParams EncounterTrackingParams; // 0x98(0x0c)
	struct FName DioramaRole; // 0xa4(0x08)
	char UnknownData_AC[0x4]; // 0xac(0x04)
	struct FText LocalisableName; // 0xb0(0x38)
};

// ScriptStruct AthenaAI.AIPartId
// Size: 0x08 (Inherited: 0x00)
struct FAIPartId {
	struct FName PartId; // 0x00(0x08)
};

// ScriptStruct AthenaAI.AIBountySpawnerParams
// Size: 0xc8 (Inherited: 0x00)
struct FAIBountySpawnerParams {
	struct TArray<struct FAIEncounterWave> AISpawnerCreationDesc; // 0x00(0x10)
	struct FStringAssetReference TeamColor; // 0x10(0x10)
	struct TArray<int32_t> NumTargetsInWave; // 0x20(0x10)
	struct TArray<int32_t> NumCaptainsInWave; // 0x30(0x10)
	float MinTimeBetweenSpawns; // 0x40(0x04)
	float MaxTimeBetweenSpawns; // 0x44(0x04)
	float MinTimeBetweenWaves; // 0x48(0x04)
	float MaxTimeBetweenWaves; // 0x4c(0x04)
	struct FWeightedProbabilityRange WavesPerRelocate; // 0x50(0x20)
	struct FWeightedProbabilityRange WaveSplitChance; // 0x70(0x20)
	struct TArray<float> WaveSuicideTime; // 0x90(0x10)
	float WaveSuicideMinDist; // 0xa0(0x04)
	int32_t NumWavesPerGroup; // 0xa4(0x04)
	int32_t NumWaveGroups; // 0xa8(0x04)
	int32_t NumTotalWaves; // 0xac(0x04)
	int32_t NumTargetsPerWaveGroup; // 0xb0(0x04)
	int32_t NumCaptainsPerWaveGroup; // 0xb4(0x04)
	struct TArray<struct UClass*> AICombatDialogue; // 0xb8(0x10)
};

// ScriptStruct AthenaAI.AIEncounterWave
// Size: 0x20 (Inherited: 0x00)
struct FAIEncounterWave {
	struct TArray<struct FAIEncounterSpecification> Specifications; // 0x00(0x10)
	struct TArray<int32_t> SpecificationSpawnOrder; // 0x10(0x10)
};

// ScriptStruct AthenaAI.AIEncounterSpecification
// Size: 0xd0 (Inherited: 0x00)
struct FAIEncounterSpecification {
	struct UClass* PawnClass; // 0x00(0x20)
	struct UAthenaAIControllerParamsDataAsset* Skillset; // 0x20(0x08)
	struct ULoadoutAsset* Loadout; // 0x28(0x08)
	struct UAthenaAIFormDataAsset* Form; // 0x30(0x08)
	struct UAthenaAIAmmoDataAsset* Ammo; // 0x38(0x08)
	struct UClass* AIClass; // 0x40(0x08)
	struct UAIPartsCategory* PartsCategory; // 0x48(0x08)
	struct UClass* ItemDropComponentClass; // 0x50(0x20)
	int32_t TeamColorIndex; // 0x70(0x04)
	struct FName DioramaRole; // 0x74(0x08)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
	struct FText LocalisableName; // 0x80(0x38)
	struct FEncounterParams EncounterTrackingParams; // 0xb8(0x0c)
	int32_t MinPlayersToEnable; // 0xc4(0x04)
	bool ShowNameplate; // 0xc8(0x01)
	bool IsUsingDialogue; // 0xc9(0x01)
	char UnknownData_CA[0x6]; // 0xca(0x06)
};

// ScriptStruct AthenaAI.EventAIStartedDeadActionState
// Size: 0x10 (Inherited: 0x00)
struct FEventAIStartedDeadActionState {
	char DeathReason; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct AActor* Killer; // 0x08(0x08)
};

// ScriptStruct AthenaAI.EventPawnFinishedDying
// Size: 0x10 (Inherited: 0x00)
struct FEventPawnFinishedDying {
	struct APawn* AIPawn; // 0x00(0x08)
	char DeathType; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct AthenaAI.EventPawnStartedDying
// Size: 0x18 (Inherited: 0x00)
struct FEventPawnStartedDying {
	struct APawn* AIPawn; // 0x00(0x08)
	char DeathType; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct AActor* Instigator; // 0x10(0x08)
};

// ScriptStruct AthenaAI.EventOwnedPawnFinishedDying
// Size: 0x01 (Inherited: 0x00)
struct FEventOwnedPawnFinishedDying {
	char DeathType; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventOwnedPawnStartedDying
// Size: 0x10 (Inherited: 0x00)
struct FEventOwnedPawnStartedDying {
	char DeathType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct AActor* Instigator; // 0x08(0x08)
};

// ScriptStruct AthenaAI.LimitedInteractbaleAICreatureSplineInteractionParams
// Size: 0x50 (Inherited: 0x00)
struct FLimitedInteractbaleAICreatureSplineInteractionParams {
	struct UClass* PressedNotificationInputId; // 0x00(0x08)
	struct UClass* ReleasedNotificationInputId; // 0x08(0x08)
	struct FText DescriptorVerb; // 0x10(0x38)
	float HoldTime; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct AthenaAI.StartCreatureSplineMovementEvent
// Size: 0x01 (Inherited: 0x00)
struct FStartCreatureSplineMovementEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.AthenaAIItemParamValue
// Size: 0x30 (Inherited: 0x00)
struct FAthenaAIItemParamValue {
	struct UClass* ItemClass; // 0x00(0x20)
	struct FName ParamName; // 0x20(0x08)
	float Value; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AthenaAI.AthenaAIAbilityPlayerBasedRanges
// Size: 0x10 (Inherited: 0x00)
struct FAthenaAIAbilityPlayerBasedRanges {
	struct TArray<struct FAthenaAIAbilityPlayerBasedRange> AbilityRanges; // 0x00(0x10)
};

// ScriptStruct AthenaAI.AthenaAIAbilityPlayerBasedRange
// Size: 0x38 (Inherited: 0x00)
struct FAthenaAIAbilityPlayerBasedRange {
	int32_t MaxPlayers; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FWeightedProbabilityRangeOfRanges WeightedArray; // 0x08(0x30)
};

// ScriptStruct AthenaAI.AIAbilityContinuousCooldownParameterData
// Size: 0x20 (Inherited: 0x00)
struct FAIAbilityContinuousCooldownParameterData {
	struct FAthenaAIAbilityPlayerBasedRanges InitialCooldown; // 0x00(0x10)
	struct FAthenaAIAbilityPlayerBasedRanges CooldownBetweenActivations; // 0x10(0x10)
};

// ScriptStruct AthenaAI.AthenaAIControllerSenseSettings
// Size: 0x14 (Inherited: 0x00)
struct FAthenaAIControllerSenseSettings {
	bool EnableSight; // 0x00(0x01)
	bool EnableHearing; // 0x01(0x01)
	bool EnableDamage; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	float SightRadius; // 0x04(0x04)
	float LoseSightRadius; // 0x08(0x04)
	float PeripheralVisionAngleDegrees; // 0x0c(0x04)
	float MaxHearingRange; // 0x10(0x04)
};

// ScriptStruct AthenaAI.AthenaAIControllerDamageTargetScoreFromPerceivedTarget
// Size: 0x14 (Inherited: 0x00)
struct FAthenaAIControllerDamageTargetScoreFromPerceivedTarget {
	float MinDamageTargetScore; // 0x00(0x04)
	float MaxDamageTargetScore; // 0x04(0x04)
	float DamageForMinDamageTargetScore; // 0x08(0x04)
	float DamageForMaxDamageTargetScore; // 0x0c(0x04)
	float RateToDecayDamagedFromTarget; // 0x10(0x04)
};

// ScriptStruct AthenaAI.AthenaAIControllerHealthCustomisation
// Size: 0x0c (Inherited: 0x00)
struct FAthenaAIControllerHealthCustomisation {
	bool OverrideMaxHealth; // 0x00(0x01)
	bool OverrideMaxHealthWithMinMax; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float MinHealth; // 0x04(0x04)
	float MaxHealth; // 0x08(0x04)
};

// ScriptStruct AthenaAI.AthenaAIControllerSenseSettingOverride
// Size: 0x20 (Inherited: 0x00)
struct FAthenaAIControllerSenseSettingOverride {
	struct UClass* AIStrategy; // 0x00(0x08)
	struct FAthenaAIControllerSenseSettings SenseSettings; // 0x08(0x14)
	bool ClearPerceivedData; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct AthenaAI.AthenaAIControllerWeightedRangesParamValue
// Size: 0x38 (Inherited: 0x00)
struct FAthenaAIControllerWeightedRangesParamValue {
	struct FName ParamName; // 0x00(0x08)
	struct FWeightedProbabilityRangeOfRanges Value; // 0x08(0x30)
};

// ScriptStruct AthenaAI.AthenaAIControllerFeatureToggledParams
// Size: 0x20 (Inherited: 0x00)
struct FAthenaAIControllerFeatureToggledParams {
	struct FFeatureFlag Feature; // 0x00(0x0c)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FAthenaAIControllerParamValue> Params; // 0x10(0x10)
};

// ScriptStruct AthenaAI.AthenaAIControllerParamValue
// Size: 0x0c (Inherited: 0x00)
struct FAthenaAIControllerParamValue {
	struct FName ParamName; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct AthenaAI.AthenaAISharedControllerParamToggledValues
// Size: 0x20 (Inherited: 0x00)
struct FAthenaAISharedControllerParamToggledValues {
	struct TArray<struct UAthenaAIControllerSharedParamValuesDataAsset*> Assets; // 0x00(0x10)
	struct FFeatureFlag FeatureName; // 0x10(0x0c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct AthenaAI.AIAbilityFollowUp
// Size: 0x10 (Inherited: 0x00)
struct FAIAbilityFollowUp {
	struct UClass* AbilityType; // 0x00(0x08)
	float Chance; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AthenaAI.MinMaxAbilityRange
// Size: 0x08 (Inherited: 0x00)
struct FMinMaxAbilityRange {
	float MinDistanceToTarget; // 0x00(0x04)
	float MaxDistanceToTarget; // 0x04(0x04)
};

// ScriptStruct AthenaAI.AIStrategyMovementProperties
// Size: 0x18 (Inherited: 0x00)
struct FAIStrategyMovementProperties {
	struct UClass* AIStrategy; // 0x00(0x08)
	float MaxSpeedAmp; // 0x08(0x04)
	float MaxAccelAmp; // 0x0c(0x04)
	float OverrideRVOAvoidanceRadius; // 0x10(0x04)
	float OverrideBlendSpeed; // 0x14(0x04)
};

// ScriptStruct AthenaAI.AthenaAIAbilityDamageStage
// Size: 0x10 (Inherited: 0x00)
struct FAthenaAIAbilityDamageStage {
	struct TArray<struct UAthenaAIAbilityStageParams*> AbilitiesInStage; // 0x00(0x10)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerSpawnItemDescForItemCategory
// Size: 0x10 (Inherited: 0x00)
struct FAthenaAICharacterControllerSpawnItemDescForItemCategory {
	struct UClass* ItemCategory; // 0x00(0x08)
	struct UClass* ItemDesc; // 0x08(0x08)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerWeightedAmmoType
// Size: 0x10 (Inherited: 0x00)
struct FAthenaAICharacterControllerWeightedAmmoType {
	struct UClass* AmmoType; // 0x00(0x08)
	float Weighting; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AthenaAI.AthenaAICharacterCannonTargetingParams
// Size: 0x10 (Inherited: 0x00)
struct FAthenaAICharacterCannonTargetingParams {
	struct TArray<struct FAthenaAICharacterCannonTarget> Params; // 0x00(0x10)
};

// ScriptStruct AthenaAI.AthenaAICharacterCannonTarget
// Size: 0x0c (Inherited: 0x00)
struct FAthenaAICharacterCannonTarget {
	float Weight; // 0x00(0x04)
	struct FName TargetLocation; // 0x04(0x08)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
// Size: 0x10 (Inherited: 0x00)
struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties {
	struct UClass* ItemCategory; // 0x00(0x08)
	struct UCurveFloat* DistanceInMToProjectileHitChanceCurve; // 0x08(0x08)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryNamedParams
// Size: 0x18 (Inherited: 0x00)
struct FAthenaAICharacterControllerItemCategoryNamedParams {
	struct UClass* ItemCategory; // 0x00(0x08)
	struct TArray<struct FAthenaAIControllerParamValue> NamedControllerParams; // 0x08(0x10)
};

// ScriptStruct AthenaAI.AIAmmoRankMapping
// Size: 0x18 (Inherited: 0x00)
struct FAIAmmoRankMapping {
	struct UAthenaAIAmmoDataAsset* Ammo; // 0x00(0x08)
	struct TArray<float> Weights; // 0x08(0x10)
};

// ScriptStruct AthenaAI.AIDebugVisualisationCone
// Size: 0x2c (Inherited: 0x00)
struct FAIDebugVisualisationCone {
	struct FVector Origin; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	float Length; // 0x18(0x04)
	float AngleWidthRadians; // 0x1c(0x04)
	float AngleHeightRadians; // 0x20(0x04)
	float LifeTime; // 0x24(0x04)
	char Colour; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
};

// ScriptStruct AthenaAI.AIDebugVisualisationSphere
// Size: 0x18 (Inherited: 0x00)
struct FAIDebugVisualisationSphere {
	struct FVector Centre; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	float LifeTime; // 0x10(0x04)
	char Colour; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct AthenaAI.AIDebugVisualisationCylinder
// Size: 0x24 (Inherited: 0x00)
struct FAIDebugVisualisationCylinder {
	struct FVector To; // 0x00(0x0c)
	struct FVector From; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float LifeTime; // 0x1c(0x04)
	char Colour; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
};

// ScriptStruct AthenaAI.AIDebugVisualisationBox
// Size: 0x40 (Inherited: 0x00)
struct FAIDebugVisualisationBox {
	struct FVector Centre; // 0x00(0x0c)
	struct FVector Extents; // 0x0c(0x0c)
	char UnknownData_18[0x8]; // 0x18(0x08)
	struct FQuat Rotation; // 0x20(0x10)
	float LifeTime; // 0x30(0x04)
	char Colour; // 0x34(0x01)
	char UnknownData_35[0xb]; // 0x35(0x0b)
};

// ScriptStruct AthenaAI.AIDebugVisualisationLine
// Size: 0x20 (Inherited: 0x00)
struct FAIDebugVisualisationLine {
	struct FVector From; // 0x00(0x0c)
	struct FVector To; // 0x0c(0x0c)
	float LifeTime; // 0x18(0x04)
	char Colour; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct AthenaAI.TargetItemDropProgressionPair
// Size: 0x20 (Inherited: 0x00)
struct FTargetItemDropProgressionPair {
	struct FStringAssetReference CrewItemSpawn; // 0x00(0x10)
	struct FStringAssetReference CaptainItemSpawn; // 0x10(0x10)
};

// ScriptStruct AthenaAI.TargetSkillsetProgressionPair
// Size: 0x20 (Inherited: 0x00)
struct FTargetSkillsetProgressionPair {
	struct FStringAssetReference CrewSkillset; // 0x00(0x10)
	struct FStringAssetReference CaptainSkillset; // 0x10(0x10)
};

// ScriptStruct AthenaAI.AIFormVarietyEntry
// Size: 0x28 (Inherited: 0x00)
struct FAIFormVarietyEntry {
	struct FStringAssetReference Form; // 0x00(0x10)
	float Weight; // 0x10(0x04)
	int32_t MaxPerEncounter; // 0x14(0x04)
	struct TArray<struct FAIIndividualVarietyEntry> Individuals; // 0x18(0x10)
};

// ScriptStruct AthenaAI.AIIndividualVarietyEntry
// Size: 0x20 (Inherited: 0x00)
struct FAIIndividualVarietyEntry {
	struct TArray<struct FStringAssetReference> Loadouts; // 0x00(0x10)
	int32_t RankOffset; // 0x10(0x04)
	float Weight; // 0x14(0x04)
	int32_t MaxPerEncounter; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct AthenaAI.AIEncounterGenerationRecipeFeatureBasedRankOrderList
// Size: 0x18 (Inherited: 0x00)
struct FAIEncounterGenerationRecipeFeatureBasedRankOrderList {
	struct FName FeatureName; // 0x00(0x08)
	struct TArray<struct UAIEncounterGenerationRecipe*> Recipes; // 0x08(0x10)
};

// ScriptStruct AthenaAI.AthenaAIFormComponentVfxCustomisation
// Size: 0x18 (Inherited: 0x00)
struct FAthenaAIFormComponentVfxCustomisation {
	struct UClass* VfxCustomisationType; // 0x00(0x08)
	bool VfxEnabled; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct UObject* VfxTemplate; // 0x10(0x08)
};

// ScriptStruct AthenaAI.AIFormDamageResponse
// Size: 0x10 (Inherited: 0x00)
struct FAIFormDamageResponse {
	struct UClass* DamagerType; // 0x00(0x08)
	float DamageMultiplier; // 0x08(0x04)
	char HitReaction; // 0x0c(0x01)
	bool IsKnockbackDisabled; // 0x0d(0x01)
	bool IsStunDisabled; // 0x0e(0x01)
	char UnknownData_F[0x1]; // 0x0f(0x01)
};

// ScriptStruct AthenaAI.AIFormRankMapping
// Size: 0x18 (Inherited: 0x00)
struct FAIFormRankMapping {
	struct UAthenaAIFormDataAsset* Form; // 0x00(0x08)
	struct TArray<float> Weights; // 0x08(0x10)
};

// ScriptStruct AthenaAI.AIPartsCategoryFormMapping
// Size: 0x18 (Inherited: 0x00)
struct FAIPartsCategoryFormMapping {
	struct UAthenaAIFormDataAsset* Form; // 0x00(0x08)
	struct TArray<struct FAIPartsCategoryMapping> CategoryMappings; // 0x08(0x10)
};

// ScriptStruct AthenaAI.AIPartsCategoryMapping
// Size: 0x10 (Inherited: 0x00)
struct FAIPartsCategoryMapping {
	struct UClass* ClassId; // 0x00(0x08)
	struct UAIPartsCategory* PartsCategory; // 0x08(0x08)
};

// ScriptStruct AthenaAI.AISkillsetRankMapping
// Size: 0x18 (Inherited: 0x00)
struct FAISkillsetRankMapping {
	struct UAthenaAIControllerParamsDataAsset* Skillset; // 0x00(0x08)
	struct TArray<float> Weights; // 0x08(0x10)
};

// ScriptStruct AthenaAI.FeatureToggledAIEncounterSpecificSkillSetCollection
// Size: 0x10 (Inherited: 0x00)
struct FFeatureToggledAIEncounterSpecificSkillSetCollection {
	struct TArray<struct FFeatureToggledAIEncounterSpecificSkillSet> ToggledSkillsets; // 0x00(0x10)
};

// ScriptStruct AthenaAI.FeatureToggledAIEncounterSpecificSkillSet
// Size: 0x20 (Inherited: 0x00)
struct FFeatureToggledAIEncounterSpecificSkillSet {
	struct FStringAssetReference ToggledSpecificSkillset; // 0x00(0x10)
	struct FFeatureFlag Feature; // 0x10(0x0c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct AthenaAI.AIDropSpawnerRankMapping
// Size: 0x30 (Inherited: 0x00)
struct FAIDropSpawnerRankMapping {
	struct UClass* SpawnerClass; // 0x00(0x20)
	struct TArray<float> Weights; // 0x20(0x10)
};

// ScriptStruct AthenaAI.AILoadoutRankMapping
// Size: 0x18 (Inherited: 0x00)
struct FAILoadoutRankMapping {
	struct ULoadoutAsset* Loadout; // 0x00(0x08)
	struct TArray<float> Weights; // 0x08(0x10)
};

// ScriptStruct AthenaAI.CustomPlayersAITrackerData
// Size: 0x20 (Inherited: 0x00)
struct FCustomPlayersAITrackerData {
	struct UAIPlayerTracker* Tracker; // 0x00(0x08)
	char UnknownData_8[0x18]; // 0x08(0x18)
};

// ScriptStruct AthenaAI.AITypeData
// Size: 0x58 (Inherited: 0x00)
struct FAITypeData {
	struct FName AITypeName; // 0x00(0x08)
	struct FStringClassReference AIPawnClass; // 0x08(0x10)
	struct FStringAssetReference DefaultDebugSkillset; // 0x18(0x10)
	struct FStringAssetReference DefaultDebugLoadout; // 0x28(0x10)
	struct UClass* DefaultDebugAIClassId; // 0x38(0x08)
	bool RequireNavMesh; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	int32_t AIRegionCostUnits; // 0x44(0x04)
	int32_t AIWorldCostUnits; // 0x48(0x04)
	struct FName FeatureToggle; // 0x4c(0x08)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// ScriptStruct AthenaAI.AISpawnTypeParamsCollection
// Size: 0x48 (Inherited: 0x00)
struct FAISpawnTypeParamsCollection {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct TArray<struct FWeightedAISpawnTypeParams> SpawnParams; // 0x08(0x10)
	char UnknownData_18[0x30]; // 0x18(0x30)
};

// ScriptStruct AthenaAI.AIPersistentSpawnerWave
// Size: 0x128 (Inherited: 0x100)
struct FAIPersistentSpawnerWave : FAISpawnerWave {
	bool CacheHealthOnDespawn; // 0x100(0x01)
	char UnknownData_101[0x7]; // 0x101(0x07)
	struct UClass* AITypeToCache; // 0x108(0x08)
	char UnknownData_110[0x18]; // 0x110(0x18)
};

// ScriptStruct AthenaAI.AISpawnerWave
// Size: 0x100 (Inherited: 0x00)
struct FAISpawnerWave {
	float SpawnChance; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FWeightedProbabilityRange NumOfSpawnsInWave; // 0x08(0x20)
	struct FAISpawnTypeParamsCollection SpawnTypeParamsOverride; // 0x28(0x48)
	struct FWeightedProbabilityRangeOfRanges DelayBeforeWave; // 0x70(0x30)
	struct FWeightedProbabilityRangeOfRanges DelayBetweenSpawns; // 0xa0(0x30)
	struct FWeightedProbabilityRangeOfRanges DelayBeforeNextWaveIfSuccessful; // 0xd0(0x30)
};

// ScriptStruct AthenaAI.AISpawnWaveSequenceRankMapping
// Size: 0x18 (Inherited: 0x00)
struct FAISpawnWaveSequenceRankMapping {
	struct UAISpawnWaveSequence* SpawnWaveSequence; // 0x00(0x08)
	struct TArray<float> Weights; // 0x08(0x10)
};

// ScriptStruct AthenaAI.AIWeightedProbabilityRangeOfRangesRankMapping
// Size: 0x18 (Inherited: 0x00)
struct FAIWeightedProbabilityRangeOfRangesRankMapping {
	struct UAIWeightedProbabilityRangeOfRangesAsset* RangeOfRanges; // 0x00(0x08)
	struct TArray<float> Weights; // 0x08(0x10)
};

// ScriptStruct AthenaAI.AIEncounterAndWaveSettingsOverride
// Size: 0x28 (Inherited: 0x00)
struct FAIEncounterAndWaveSettingsOverride {
	struct UAIEncounterSettings* EncounterSettings; // 0x00(0x08)
	struct UAISpawnWaveSequenceRankProgression* SpawnWaveProgression; // 0x08(0x08)
	float Chance; // 0x10(0x04)
	struct FName FeatureToggle; // 0x14(0x08)
	struct FStoryFlag RequiredStory; // 0x1c(0x08)
	bool UseStoryAndNotFeatureToggle; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
};

// ScriptStruct AthenaAI.AdditionalSpawnerBehaviour
// Size: 0x10 (Inherited: 0x00)
struct FAdditionalSpawnerBehaviour {
	struct USpawnerBehaviourStrategy* BehaviourStrategy; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct AthenaAI.AISpawnOverride
// Size: 0x10 (Inherited: 0x00)
struct FAISpawnOverride {
	struct FStringAssetReference FormOverride; // 0x00(0x10)
};

// ScriptStruct AthenaAI.ConditionalAISpawnOverride
// Size: 0x18 (Inherited: 0x00)
struct FConditionalAISpawnOverride {
	struct UAISpawnOverrideCondition* Condition; // 0x00(0x08)
	struct FAISpawnOverride Override; // 0x08(0x10)
};

// ScriptStruct AthenaAI.AISpawnerArchive
// Size: 0x08 (Inherited: 0x00)
struct FAISpawnerArchive {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct AthenaAI.AISpawnContextIdEncounterSettingsPair
// Size: 0x38 (Inherited: 0x00)
struct FAISpawnContextIdEncounterSettingsPair {
	struct TArray<struct UClass*> SpawnContexts; // 0x00(0x10)
	bool DisableSpawning; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct UAIEncounterSettings* EncounterSettings; // 0x18(0x08)
	struct UAISpawnWaveSequenceRankProgression* SpawnWaveProgression; // 0x20(0x08)
	struct TArray<struct FAIEncounterAndWaveSettingsOverride> EncounterAndWaveSettingsOverride; // 0x28(0x10)
};

// ScriptStruct AthenaAI.AIExclusionZone
// Size: 0x28 (Inherited: 0x00)
struct FAIExclusionZone {
	struct FGuid Id; // 0x00(0x10)
	struct FVector Location; // 0x10(0x0c)
	float RadiusSquared; // 0x1c(0x04)
	float Radius; // 0x20(0x04)
	float Height; // 0x24(0x04)
};

// ScriptStruct AthenaAI.AICountTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FAICountTelemetryEvent {
	int32_t NumTotalSpawns; // 0x00(0x04)
	int32_t CurrentTotalWorldAICostUnits; // 0x04(0x04)
	int32_t NumActiveRegions; // 0x08(0x04)
	int32_t NumPlayers; // 0x0c(0x04)
};

// ScriptStruct AthenaAI.AIPartIdNumVariantInfo
// Size: 0x0c (Inherited: 0x00)
struct FAIPartIdNumVariantInfo {
	struct FName AIPartId; // 0x00(0x08)
	int32_t NumVariants; // 0x08(0x04)
};

// ScriptStruct AthenaAI.EventAIPartsRetrievalComponentBeforeBeginLoad
// Size: 0x01 (Inherited: 0x00)
struct FEventAIPartsRetrievalComponentBeforeBeginLoad {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.ReplicatedAIPartsData
// Size: 0x18 (Inherited: 0x00)
struct FReplicatedAIPartsData {
	struct UAIPartsCategory* PartsCategory; // 0x00(0x08)
	struct FAIPartId AIPartId; // 0x08(0x08)
	int32_t MeshIndex; // 0x10(0x04)
	int32_t TeamColorIndex; // 0x14(0x04)
};

// ScriptStruct AthenaAI.AIPerCrewSpawnerStoryBasedRespawnSettings
// Size: 0x14 (Inherited: 0x00)
struct FAIPerCrewSpawnerStoryBasedRespawnSettings {
	struct FAIPerCrewSpawnerRespawnSettings RespawnSettings; // 0x00(0x0c)
	struct FStoryFlag Story; // 0x0c(0x08)
};

// ScriptStruct AthenaAI.AIPerCrewSpawnerRespawnSettings
// Size: 0x0c (Inherited: 0x00)
struct FAIPerCrewSpawnerRespawnSettings {
	float MinRespawnTimeInterval; // 0x00(0x04)
	float MaxRespawnTimeInterval; // 0x04(0x04)
	float RespawnChance; // 0x08(0x04)
};

// ScriptStruct AthenaAI.SpawnLocationGroup
// Size: 0x20 (Inherited: 0x00)
struct FSpawnLocationGroup {
	struct TArray<struct FName> AllowedSpawnTypes; // 0x00(0x10)
	struct TArray<struct FVector> SpawnLocations; // 0x10(0x10)
};

// ScriptStruct AthenaAI.AISpawnContextData
// Size: 0x10 (Inherited: 0x00)
struct FAISpawnContextData {
	struct FName Name; // 0x00(0x08)
	struct UClass* Id; // 0x08(0x08)
};

// ScriptStruct AthenaAI.AIFixedWavesSpawnerArchive
// Size: 0x20 (Inherited: 0x08)
struct FAIFixedWavesSpawnerArchive : FAISpawnerArchive {
	struct TArray<int32_t> NumSpawnedPawnsInWaves; // 0x08(0x10)
	bool WavesSpawnedOnSpottedNewTarget; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AthenaAI.AIIncrementalWaveSpawnerArchive
// Size: 0x18 (Inherited: 0x08)
struct FAIIncrementalWaveSpawnerArchive : FAISpawnerArchive {
	struct FVector LastTargetPosition; // 0x08(0x0c)
	int32_t CurrentNumSpawnedPawns; // 0x14(0x04)
};

// ScriptStruct AthenaAI.AIPerCrewSpawnerRespawnUnit
// Size: 0x18 (Inherited: 0x00)
struct FAIPerCrewSpawnerRespawnUnit {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct AthenaAI.AIPerCrewSpawnerCrewUnit
// Size: 0x30 (Inherited: 0x00)
struct FAIPerCrewSpawnerCrewUnit {
	char UnknownData_0[0x20]; // 0x00(0x20)
	struct TArray<struct FAISpawnerWave> SelectedWaves; // 0x20(0x10)
};

// ScriptStruct AthenaAI.TemporaryPlayerDetailsUnitEntry
// Size: 0x38 (Inherited: 0x00)
struct FTemporaryPlayerDetailsUnitEntry {
	char UnknownData_0[0x38]; // 0x00(0x38)
};

// ScriptStruct AthenaAI.AIPerPlayerSpawnerPlayerDetailsUnit
// Size: 0x30 (Inherited: 0x00)
struct FAIPerPlayerSpawnerPlayerDetailsUnit {
	char UnknownData_0[0x30]; // 0x00(0x30)
};

// ScriptStruct AthenaAI.AICustomClassIdNameOverrides
// Size: 0x20 (Inherited: 0x00)
struct FAICustomClassIdNameOverrides {
	struct TArray<struct UClass*> ClassIds; // 0x00(0x10)
	struct TArray<struct FText> Names; // 0x10(0x10)
};

// ScriptStruct AthenaAI.AICustomNameTitleMapping
// Size: 0x40 (Inherited: 0x00)
struct FAICustomNameTitleMapping {
	struct UClass* AIClassId; // 0x00(0x08)
	struct FText Title; // 0x08(0x38)
};

// ScriptStruct AthenaAI.AIProgressiveWavesSpawnerArchive
// Size: 0x10 (Inherited: 0x08)
struct FAIProgressiveWavesSpawnerArchive : FAISpawnerArchive {
	int32_t CurrentWaveIndex; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AthenaAI.EscalatingWave
// Size: 0x108 (Inherited: 0x00)
struct FEscalatingWave {
	int32_t WaveNumber; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FAISpawnerWave SpawnedWave; // 0x08(0x100)
};

// ScriptStruct AthenaAI.AITargetInfo
// Size: 0x34 (Inherited: 0x00)
struct FAITargetInfo {
	struct FAITargetBounds Bounds; // 0x00(0x18)
	struct FVector TargetPos; // 0x18(0x0c)
	struct FVector TargetVelocity; // 0x24(0x0c)
	float TargetYaw; // 0x30(0x04)
};

// ScriptStruct AthenaAI.AITargetBounds
// Size: 0x18 (Inherited: 0x00)
struct FAITargetBounds {
	struct FVector Offset; // 0x00(0x0c)
	struct FVector Extents; // 0x0c(0x0c)
};

// ScriptStruct AthenaAI.PerDepthSpawnChance
// Size: 0x0c (Inherited: 0x00)
struct FPerDepthSpawnChance {
	float DepthUpperBound; // 0x00(0x04)
	float DepthLowerBound; // 0x04(0x04)
	float ChanceToSpawn; // 0x08(0x04)
};

// ScriptStruct AthenaAI.PlayerInWaterData
// Size: 0x20 (Inherited: 0x00)
struct FPlayerInWaterData {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct AthenaAI.SirenEncounterData
// Size: 0x28 (Inherited: 0x00)
struct FSirenEncounterData {
	struct UWorld* GameWorld; // 0x00(0x08)
	struct UAIPerPlayerSpawner* SirenSpawner; // 0x08(0x08)
	struct USimpleAIRegion* AIRegion; // 0x10(0x08)
	struct UAIProximityPlayerTracker* ProximityPlayerTracker; // 0x18(0x08)
	float ShutdownTime; // 0x20(0x04)
	char SirenEncounterState; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
};

// ScriptStruct AthenaAI.ChanceForSharksToBlockSirenEncounterData
// Size: 0x0c (Inherited: 0x00)
struct FChanceForSharksToBlockSirenEncounterData {
	int32_t NumberOfSharks; // 0x00(0x04)
	float ChanceToSpawn; // 0x04(0x04)
	float RadiusToCheck; // 0x08(0x04)
};

// ScriptStruct AthenaAI.MinMaxBurrowAbility
// Size: 0x08 (Inherited: 0x00)
struct FMinMaxBurrowAbility {
	float MinValue; // 0x00(0x04)
	float MaxValue; // 0x04(0x04)
};

// ScriptStruct AthenaAI.WeightedAmmoTypeRange
// Size: 0x18 (Inherited: 0x00)
struct FWeightedAmmoTypeRange {
	float MinRange; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FWeightedAmmoType> AmmoTypeProbabilities; // 0x08(0x10)
};

// ScriptStruct AthenaAI.WeightedAmmoType
// Size: 0x10 (Inherited: 0x00)
struct FWeightedAmmoType {
	float ProbabilityAtRange; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UClass* AmmoType; // 0x08(0x08)
};

// ScriptStruct AthenaAI.AthenaAIControllerTargetPickingData
// Size: 0x38 (Inherited: 0x00)
struct FAthenaAIControllerTargetPickingData {
	struct FString TargetName; // 0x00(0x10)
	bool BestTargetByScore; // 0x10(0x01)
	bool IsCurrentTargetActor; // 0x11(0x01)
	char UnknownData_12[0x2]; // 0x12(0x02)
	float TargetScore; // 0x14(0x04)
	float DistScore; // 0x18(0x04)
	float FacingScore; // 0x1c(0x04)
	float TargetWeightScore; // 0x20(0x04)
	float DamageScore; // 0x24(0x04)
	float TargetDistance; // 0x28(0x04)
	float TargetAngle; // 0x2c(0x04)
	int32_t NumTargeting; // 0x30(0x04)
	float RecentDamage; // 0x34(0x04)
};

// ScriptStruct AthenaAI.AIStategyControllerMovementMod
// Size: 0x10 (Inherited: 0x00)
struct FAIStategyControllerMovementMod {
	struct UClass* AIStrategy; // 0x00(0x08)
	float OverrideControlRotationInterpSpeed; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AthenaAI.CarriedItemThreatOverride
// Size: 0x10 (Inherited: 0x00)
struct FCarriedItemThreatOverride {
	struct UClass* ItemDesc; // 0x00(0x08)
	float Threat; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AthenaAI.HearingThreat
// Size: 0x10 (Inherited: 0x00)
struct FHearingThreat {
	struct FName SoundTag; // 0x00(0x08)
	float Threat; // 0x08(0x04)
	float CarrierSpeedThreshold; // 0x0c(0x04)
};

// ScriptStruct AthenaAI.AIControllerDynamicBalancingNamedParamMapping
// Size: 0x18 (Inherited: 0x00)
struct FAIControllerDynamicBalancingNamedParamMapping {
	int32_t MaxCrewStrength; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FAthenaAIControllerParamValue> CrewStrengthDynamicNamedParamOverrides; // 0x08(0x10)
};

// ScriptStruct AthenaAI.AIControllerDynamicBalancingPlayerShipValueDesc
// Size: 0x10 (Inherited: 0x00)
struct FAIControllerDynamicBalancingPlayerShipValueDesc {
	struct UClass* ShipSize; // 0x00(0x08)
	int32_t ShipValue; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AthenaAI.DamageModifierCrewProximityVulnerabilityPairs
// Size: 0x18 (Inherited: 0x00)
struct FDamageModifierCrewProximityVulnerabilityPairs {
	int32_t NumPlayersInRange; // 0x00(0x04)
	float GlobalDamageMultiplier; // 0x04(0x04)
	struct TArray<struct FDamageableVulnerabilityPair> DamageMultipliers; // 0x08(0x10)
};

// ScriptStruct AthenaAI.BlackboardValueCondition
// Size: 0x38 (Inherited: 0x00)
struct FBlackboardValueCondition {
	struct FBlackboardKeySelector BlackboardKey; // 0x00(0x28)
	char Comparison; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float Value; // 0x2c(0x04)
	bool OnEntry; // 0x30(0x01)
	bool OnExit; // 0x31(0x01)
	char UnknownData_32[0x6]; // 0x32(0x06)
};

// ScriptStruct AthenaAI.ChanceAndBlackboardKeyPair
// Size: 0x58 (Inherited: 0x00)
struct FChanceAndBlackboardKeyPair {
	struct FAIDataProviderFloatValue Chance; // 0x00(0x30)
	struct FBlackboardKeySelector BlackboardKey; // 0x30(0x28)
};

// ScriptStruct AthenaAI.ConditionalBasedOnBlackboardKey
// Size: 0x38 (Inherited: 0x00)
struct FConditionalBasedOnBlackboardKey {
	bool UseCondition; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FBlackboardKeySelector BlackboardKey; // 0x08(0x28)
	bool NegateCondition; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct AthenaAI.WeightedAIStrategyChance
// Size: 0x38 (Inherited: 0x00)
struct FWeightedAIStrategyChance {
	struct UClass* Strategy; // 0x00(0x08)
	struct FAIDataProviderFloatValue WeightedChance; // 0x08(0x30)
};

// ScriptStruct AthenaAI.AIStrategyVulnerabilityData
// Size: 0x18 (Inherited: 0x00)
struct FAIStrategyVulnerabilityData {
	struct UClass* Strategy; // 0x00(0x08)
	struct TArray<char> PreventedHealthChanges; // 0x08(0x10)
};

// ScriptStruct AthenaAI.EventSporeBreathAIAbilityFinished
// Size: 0x01 (Inherited: 0x00)
struct FEventSporeBreathAIAbilityFinished {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventSporeBreathAIAbilityStarted
// Size: 0x01 (Inherited: 0x00)
struct FEventSporeBreathAIAbilityStarted {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventAIAbilityStarted
// Size: 0x08 (Inherited: 0x00)
struct FEventAIAbilityStarted {
	struct UClass* AbilityTypeCategory; // 0x00(0x08)
};

// ScriptStruct AthenaAI.EventAIVulnerabilityAbilityEnded
// Size: 0x01 (Inherited: 0x00)
struct FEventAIVulnerabilityAbilityEnded {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventAIVulnerabilityAbilityStarted
// Size: 0x01 (Inherited: 0x00)
struct FEventAIVulnerabilityAbilityStarted {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventAIPawnCarrierChange
// Size: 0x08 (Inherited: 0x00)
struct FEventAIPawnCarrierChange {
	struct AActor* Carrier; // 0x00(0x08)
};

// ScriptStruct AthenaAI.EventAIDebugTextUpdated
// Size: 0x01 (Inherited: 0x00)
struct FEventAIDebugTextUpdated {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventAIControllerUnPossess
// Size: 0x01 (Inherited: 0x00)
struct FEventAIControllerUnPossess {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventAIKnockbackEnded
// Size: 0x01 (Inherited: 0x00)
struct FEventAIKnockbackEnded {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventAIKnockbackStarted
// Size: 0x18 (Inherited: 0x00)
struct FEventAIKnockbackStarted {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct AthenaAI.EventNewAIStrategyBPReadable
// Size: 0x08 (Inherited: 0x00)
struct FEventNewAIStrategyBPReadable {
	struct UClass* NewAIStrategy; // 0x00(0x08)
};

// ScriptStruct AthenaAI.EventNewAIStrategy
// Size: 0x08 (Inherited: 0x00)
struct FEventNewAIStrategy {
	struct UClass* NewAIStrategy; // 0x00(0x08)
};

// ScriptStruct AthenaAI.EventPawnRequestDespawn
// Size: 0x01 (Inherited: 0x00)
struct FEventPawnRequestDespawn {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventPawnRemoveOwnership
// Size: 0x08 (Inherited: 0x00)
struct FEventPawnRemoveOwnership {
	struct APawn* AIPawn; // 0x00(0x08)
};

// ScriptStruct AthenaAI.EventOwnedPawnRemoveOwnership
// Size: 0x01 (Inherited: 0x00)
struct FEventOwnedPawnRemoveOwnership {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventAIPartRetrievalRequestFailed
// Size: 0x01 (Inherited: 0x00)
struct FEventAIPartRetrievalRequestFailed {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventVisualAppearanceSelected
// Size: 0x18 (Inherited: 0x00)
struct FEventVisualAppearanceSelected {
	struct UAIPartsCategory* PartsCategory; // 0x00(0x08)
	struct FAIPartId AIPartId; // 0x08(0x08)
	int32_t PartsIndexToUse; // 0x10(0x04)
	int32_t ColorTextureIndex; // 0x14(0x04)
};

// ScriptStruct AthenaAI.EventAILoadoutSelected
// Size: 0x30 (Inherited: 0x00)
struct FEventAILoadoutSelected {
	struct FItemLoadout Loadout; // 0x00(0x20)
	struct UClass* NonStorableItem; // 0x20(0x08)
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct AthenaAI.EventAIAmmoSelected
// Size: 0x08 (Inherited: 0x00)
struct FEventAIAmmoSelected {
	struct UAthenaAIAmmoDataAsset* Ammo; // 0x00(0x08)
};

// ScriptStruct AthenaAI.EventAIFormSelected
// Size: 0x08 (Inherited: 0x00)
struct FEventAIFormSelected {
	struct UAthenaAIFormDataAsset* Form; // 0x00(0x08)
};

// ScriptStruct AthenaAI.EventAIPawnReadyToConstructDebugText
// Size: 0x01 (Inherited: 0x00)
struct FEventAIPawnReadyToConstructDebugText {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventOwnedPawnFinishedSpawning
// Size: 0x50 (Inherited: 0x00)
struct FEventOwnedPawnFinishedSpawning {
	struct UObject* AICoordinator; // 0x00(0x08)
	struct FName Region; // 0x08(0x08)
	struct FVector SpawnPos; // 0x10(0x0c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct AActor* ActorToPerceiveOnSpawn; // 0x20(0x08)
	float MaximumDistanceToPerceiveOnSpawn; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct UAthenaAIControllerParamsDataAsset* Skillset; // 0x30(0x08)
	struct FName HomeRegionZone; // 0x38(0x08)
	struct UObject* TargetInteractableOnSpawn; // 0x40(0x08)
	struct UAISpawner* OwnerAISpawner; // 0x48(0x08)
};

// ScriptStruct AthenaAI.EventPlayerLeftAISpawnableWater
// Size: 0x08 (Inherited: 0x00)
struct FEventPlayerLeftAISpawnableWater {
	struct AActor* Player; // 0x00(0x08)
};

// ScriptStruct AthenaAI.EventPlayerEnterAISpawnableWater
// Size: 0x18 (Inherited: 0x00)
struct FEventPlayerEnterAISpawnableWater {
	struct AActor* Player; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct AthenaAI.EventPlayerSetFootUponAISpawnRegion
// Size: 0x20 (Inherited: 0x00)
struct FEventPlayerSetFootUponAISpawnRegion {
	struct AActor* Player; // 0x00(0x08)
	char UnknownData_8[0x18]; // 0x08(0x18)
};

// ScriptStruct AthenaAI.EventCrewedShipLeftAISpawnRegion
// Size: 0x20 (Inherited: 0x00)
struct FEventCrewedShipLeftAISpawnRegion {
	struct AActor* Ship; // 0x00(0x08)
	char UnknownData_8[0x18]; // 0x08(0x18)
};

// ScriptStruct AthenaAI.EventCrewedShipEnteredAISpawnRegion
// Size: 0x20 (Inherited: 0x00)
struct FEventCrewedShipEnteredAISpawnRegion {
	struct AActor* Ship; // 0x00(0x08)
	char UnknownData_8[0x18]; // 0x08(0x18)
};

// ScriptStruct AthenaAI.EventPlayerLeftAISpawnRegion
// Size: 0x18 (Inherited: 0x00)
struct FEventPlayerLeftAISpawnRegion {
	struct AActor* Player; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct AthenaAI.EventPlayerEnteredAISpawnRegion
// Size: 0x20 (Inherited: 0x00)
struct FEventPlayerEnteredAISpawnRegion {
	struct AActor* Player; // 0x00(0x08)
	char UnknownData_8[0x18]; // 0x08(0x18)
};

// ScriptStruct AthenaAI.EventAllAIProgressiveWavesCompleted
// Size: 0x01 (Inherited: 0x00)
struct FEventAllAIProgressiveWavesCompleted {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventAIPawnRemovedFromAIRegion
// Size: 0x10 (Inherited: 0x00)
struct FEventAIPawnRemovedFromAIRegion {
	struct APawn* AIPawn; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct AthenaAI.EventAIPawnAddedToAIRegion
// Size: 0x10 (Inherited: 0x00)
struct FEventAIPawnAddedToAIRegion {
	struct APawn* AIPawn; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct AthenaAI.EventOceanCrawlerAIBuffAudioRequest
// Size: 0x01 (Inherited: 0x00)
struct FEventOceanCrawlerAIBuffAudioRequest {
	bool IsBuffGiver; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventOceanCrawlerAIAbilityAudioRequest
// Size: 0x08 (Inherited: 0x00)
struct FEventOceanCrawlerAIAbilityAudioRequest {
	char RequestAudioKey; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float AudioDelay; // 0x04(0x04)
};

// ScriptStruct AthenaAI.AthenaAICharacterParams
// Size: 0x14 (Inherited: 0x00)
struct FAthenaAICharacterParams {
	float MissFiringHeightOffset; // 0x00(0x04)
	float MissFiringTargetInFrontOffset; // 0x04(0x04)
	float MinMissFiringTargetInFrontOffset; // 0x08(0x04)
	float MaxMissFiringTargetInFrontOffset; // 0x0c(0x04)
	float BufferTimeWhenChangingItems; // 0x10(0x04)
};

// ScriptStruct AthenaAI.EventAthenaAISpawnBeginAnim
// Size: 0x01 (Inherited: 0x00)
struct FEventAthenaAISpawnBeginAnim {
	char SpawnType; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventAthenaAISpawnActive
// Size: 0x02 (Inherited: 0x00)
struct FEventAthenaAISpawnActive {
	char SpawnType; // 0x00(0x01)
	bool SpawnActive; // 0x01(0x01)
};

// ScriptStruct AthenaAI.AISpawnerTelemetryEvent
// Size: 0x40 (Inherited: 0x00)
struct FAISpawnerTelemetryEvent {
	struct FString AISpawnerType; // 0x00(0x10)
	struct FString AISpawnerRegion; // 0x10(0x10)
	struct TArray<struct FString> AISpawnerContexts; // 0x20(0x10)
	int32_t AISpawnerWaveSpawnNumber; // 0x30(0x04)
	float AISpawnerWaveDelayBefore; // 0x34(0x04)
	float AISpawnerWaveDelayAfter; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct AthenaAI.AITelemetryFragmentInput
// Size: 0xd8 (Inherited: 0x01)
struct FAITelemetryFragmentInput : FTelemetryFragmentInput {
	struct APawn* AIPawn; // 0x00(0x08)
	struct FAIEncounterSpecification AIEncounterSpecification; // 0x08(0xd0)
};

// ScriptStruct AthenaAI.AITelemetryFragment
// Size: 0x70 (Inherited: 0x00)
struct FAITelemetryFragment {
	struct FString AIType; // 0x00(0x10)
	struct FString AIId; // 0x10(0x10)
	struct TArray<struct FString> AILoadOut; // 0x20(0x10)
	struct FString AIPawnType; // 0x30(0x10)
	struct FString AISkillset; // 0x40(0x10)
	struct FString AIForm; // 0x50(0x10)
	struct FString AIClass; // 0x60(0x10)
};

// ScriptStruct AthenaAI.AIHealthChangeTelemetryEvent
// Size: 0x2c (Inherited: 0x00)
struct FAIHealthChangeTelemetryEvent {
	struct FGuid AttackId; // 0x00(0x10)
	float CurrentHealth; // 0x10(0x04)
	float PreviousHealth; // 0x14(0x04)
	float HealthDelta; // 0x18(0x04)
	struct FVector Position; // 0x1c(0x0c)
	char Reason; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
};

// ScriptStruct AthenaAI.PlayerKillAITelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FPlayerKillAITelemetryEvent {
	struct FGuid AttackId; // 0x00(0x10)
};

// ScriptStruct AthenaAI.AISpawnTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FAISpawnTelemetryEvent {
	struct FString LocationName; // 0x00(0x10)
};

// ScriptStruct AthenaAI.AIActorTimeout
// Size: 0x10 (Inherited: 0x00)
struct FAIActorTimeout {
	struct AActor* AIActor; // 0x00(0x08)
	float Timer; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AthenaAI.BountySpawnerTargetDesc
// Size: 0x20 (Inherited: 0x00)
struct FBountySpawnerTargetDesc {
	char Gender; // 0x00(0x01)
	char Rank; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct UClass* AIClassIdOverride; // 0x08(0x08)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct AthenaAI.AIBountySpawnerWaveGroup
// Size: 0x70 (Inherited: 0x00)
struct FAIBountySpawnerWaveGroup {
	struct TArray<struct FAIBountySpawnerWave> Waves; // 0x00(0x10)
	struct TArray<struct FAIBountySpawnerWave> AdditionalCaptainWaves; // 0x10(0x10)
	int32_t NumNonTargetAIToKillToMoveToNextWaveGroup; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct UClass* CombatDialogueForWaveGroup; // 0x28(0x08)
	float DynamicDelayBeforeStart; // 0x30(0x04)
	bool WantsAdditionalWaveAI; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
	struct TArray<int32_t> AdditionalWaveAIPerPlayer; // 0x38(0x10)
	struct TArray<int32_t> AdditionalWaveCaptainAIPerPlayer; // 0x48(0x10)
	float WaveMusicIntensity; // 0x58(0x04)
	char UnknownData_5C[0x14]; // 0x5c(0x14)
};

// ScriptStruct AthenaAI.AIBountySpawnerWave
// Size: 0x188 (Inherited: 0x128)
struct FAIBountySpawnerWave : FAIPersistentSpawnerWave {
	bool IsTarget; // 0x128(0x01)
	bool IsUsingDialogue; // 0x129(0x01)
	char UnknownData_12A[0x2]; // 0x12a(0x02)
	int32_t MinPlayersToEnable; // 0x12c(0x04)
	char Gender; // 0x130(0x01)
	char Rank; // 0x131(0x01)
	char UnknownData_132[0x6]; // 0x132(0x06)
	struct UPostBountyAIPawnSpawnedAction* PostSpawnAction; // 0x138(0x08)
	char UnknownData_140[0x38]; // 0x140(0x38)
	struct UClass* BountyReward; // 0x178(0x08)
	struct UItemSpawnData* BountyRewardSpawnData; // 0x180(0x08)
};

// ScriptStruct AthenaAI.AIBountySpawnerWaveLocation
// Size: 0x14 (Inherited: 0x00)
struct FAIBountySpawnerWaveLocation {
	struct FVector Location; // 0x00(0x0c)
	float SelectionWeight; // 0x0c(0x04)
	bool AllowForTarget; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct AthenaAI.AIBountySpawnerArchive
// Size: 0x28 (Inherited: 0x08)
struct FAIBountySpawnerArchive : FAISpawnerArchive {
	int32_t CurrentWaveIndex; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FAIBountySpawnerArchiveWaveGroupEntry> WaveGroupEntries; // 0x10(0x10)
	float BountyAudioIntensity; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct AthenaAI.AIBountySpawnerArchiveWaveGroupEntry
// Size: 0x18 (Inherited: 0x00)
struct FAIBountySpawnerArchiveWaveGroupEntry {
	int32_t NumNonTargetAIKills; // 0x00(0x04)
	int32_t NumTargetAIKills; // 0x04(0x04)
	struct TArray<struct FAIBountySpawnerArchiveWaveEntry> WaveEntries; // 0x08(0x10)
};

// ScriptStruct AthenaAI.AIBountySpawnerArchiveWaveEntry
// Size: 0x04 (Inherited: 0x00)
struct FAIBountySpawnerArchiveWaveEntry {
	int32_t NumPawnsToSpawn; // 0x00(0x04)
};

// ScriptStruct AthenaAI.BountySpawnerIntensityUpdateNetworkEvent
// Size: 0x18 (Inherited: 0x10)
struct FBountySpawnerIntensityUpdateNetworkEvent : FNetworkEventStruct {
	bool IsFinalWave; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float Intensity; // 0x14(0x04)
};

// ScriptStruct AthenaAI.BountySpawnerNewWaveGroupSpawnedEvent
// Size: 0x30 (Inherited: 0x00)
struct FBountySpawnerNewWaveGroupSpawnedEvent {
	bool IsFinalWave; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FName IslandName; // 0x04(0x08)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FGuid> ParticipatingCrewIds; // 0x10(0x10)
	int32_t WaveIndex; // 0x20(0x04)
	int32_t TotalWaves; // 0x24(0x04)
	struct AActor* Instigator; // 0x28(0x08)
};

// ScriptStruct AthenaAI.BountySpawnerAudioChangedNetworkEvent
// Size: 0x28 (Inherited: 0x10)
struct FBountySpawnerAudioChangedNetworkEvent : FNetworkEventStruct {
	char AudioState; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float Intensity; // 0x14(0x04)
	char BountyType; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	struct FVector BountyPosition; // 0x1c(0x0c)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerTargetKilled
// Size: 0x68 (Inherited: 0x00)
struct FEventAIBountySpawnerTargetKilled {
	struct FText TargetName; // 0x00(0x38)
	struct AActor* TargetActor; // 0x38(0x08)
	struct FName RewardId; // 0x40(0x08)
	struct AItemInfo* ItemDropped; // 0x48(0x08)
	char Rank; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	struct FVector DeathLocation; // 0x54(0x0c)
	struct AActor* Instigator; // 0x60(0x08)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerWaveCompleted
// Size: 0x28 (Inherited: 0x00)
struct FEventAIBountySpawnerWaveCompleted {
	struct FName IslandName; // 0x00(0x08)
	struct TArray<struct FGuid> ParticipatingCrewIds; // 0x08(0x10)
	int32_t WaveIndex; // 0x18(0x04)
	int32_t TotalWaves; // 0x1c(0x04)
	struct AActor* InstigatorOfFinalAIPawnDeath; // 0x20(0x08)
};

// ScriptStruct AthenaAI.AIFaunaSpawnerWave
// Size: 0x110 (Inherited: 0x100)
struct FAIFaunaSpawnerWave : FAISpawnerWave {
	char UnknownData_100[0x10]; // 0x100(0x10)
};

// ScriptStruct AthenaAI.MerchantCrateMetaWrapper
// Size: 0x48 (Inherited: 0x18)
struct FMerchantCrateMetaWrapper : FItemMetaBase {
	float Health; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FStringAssetReference FaunaType; // 0x20(0x10)
	float TimeSpentStarving; // 0x30(0x04)
	float TimeToStarveInSeconds; // 0x34(0x04)
	struct FVector TempSpawnLocationForActor; // 0x38(0x0c)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// ScriptStruct AthenaAI.EventFaunaThreatLevelChanged
// Size: 0x01 (Inherited: 0x00)
struct FEventFaunaThreatLevelChanged {
	char ThreatLevel; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventFaunaAgitationEnded
// Size: 0x01 (Inherited: 0x00)
struct FEventFaunaAgitationEnded {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventFaunaAgitationBegun
// Size: 0x08 (Inherited: 0x00)
struct FEventFaunaAgitationBegun {
	struct AActor* SourceActor; // 0x00(0x08)
};

// ScriptStruct AthenaAI.EventFaunaPickedup
// Size: 0x10 (Inherited: 0x00)
struct FEventFaunaPickedup {
	struct AActor* Interactor; // 0x00(0x08)
	struct AActor* PickedUpFauna; // 0x08(0x08)
};

// ScriptStruct AthenaAI.EventSwimRotationModeChanged
// Size: 0x08 (Inherited: 0x00)
struct FEventSwimRotationModeChanged {
	char NewSwimRotationMode; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float NewRotationRate; // 0x04(0x04)
};

// ScriptStruct AthenaAI.QuestVariableSharkPawn
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableSharkPawn : FQuestVariable {
};

// ScriptStruct AthenaAI.TinySharkParams
// Size: 0xc8 (Inherited: 0x00)
struct FTinySharkParams {
	struct UClass* TinySharkType; // 0x00(0x08)
	float TargetRadius; // 0x08(0x04)
	struct FVector SpawnOffset; // 0x0c(0x0c)
	struct UClass* TinySharkAIType; // 0x18(0x20)
	struct UAthenaAIControllerParamsDataAsset* TinySharkSkillset; // 0x38(0x20)
	struct ULoadoutAsset* TinySharkLoadout; // 0x58(0x20)
	struct UClass* TinySharkClassID; // 0x78(0x08)
	struct FWeightedProbabilityRangeOfRanges LifetimeTimeout; // 0x80(0x30)
	struct TArray<struct FTinySharkTrackedShipDistanceThresholdByFeature> TrackedShipDistanceThresholdByFeatureInPriorityOrder; // 0xb0(0x10)
	float RepositionTime; // 0xc0(0x04)
	char UnknownData_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct AthenaAI.TinySharkTrackedShipDistanceThresholdByFeature
// Size: 0x10 (Inherited: 0x00)
struct FTinySharkTrackedShipDistanceThresholdByFeature {
	struct FFeatureFlag Feature; // 0x00(0x0c)
	float TrackedShipDistanceThreshold; // 0x0c(0x04)
};

// ScriptStruct AthenaAI.ExperienceTracker
// Size: 0x10 (Inherited: 0x00)
struct FExperienceTracker {
	struct UTaleQuestTinySharkExperienceTracker* Tracker; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct AthenaAI.QuestVariableTinySharkExperience
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableTinySharkExperience : FQuestVariable {
};

// ScriptStruct AthenaAI.TinySharkWorldSettingsParams
// Size: 0x01 (Inherited: 0x00)
struct FTinySharkWorldSettingsParams {
	bool TinySharkEnabled; // 0x00(0x01)
};

// ScriptStruct AthenaAI.TinySharkEQSRequest
// Size: 0x48 (Inherited: 0x00)
struct FTinySharkEQSRequest {
	char UnknownData_0[0x48]; // 0x00(0x48)
};

// ScriptStruct AthenaAI.TinySharkServiceParams
// Size: 0x28 (Inherited: 0x00)
struct FTinySharkServiceParams {
	struct UTinySharkParamsDataAsset* TinySharkParams; // 0x00(0x08)
	struct TArray<struct FTinySharkShipSpawnData> SpawnForShipData; // 0x08(0x10)
	struct UEnvQuery* SpawnForShipQuery; // 0x18(0x08)
	float SpawnFailureTimer; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct AthenaAI.TinySharkShipSpawnData
// Size: 0x68 (Inherited: 0x00)
struct FTinySharkShipSpawnData {
	struct UClass* ShipSize; // 0x00(0x08)
	struct FWeightedProbabilityRangeOfRanges Timer; // 0x08(0x30)
	struct TArray<struct UAthenaAIControllerParamsDataAsset*> ControllerParams; // 0x38(0x10)
	struct FWeightedProbabilityRange ControllerParamsToUse; // 0x48(0x20)
};

// ScriptStruct AthenaAI.TinySharkSpawnedNetworkEvent
// Size: 0x10 (Inherited: 0x10)
struct FTinySharkSpawnedNetworkEvent : FNetworkEventStruct {
};

// ScriptStruct AthenaAI.TinySharkKilledNetworkEvent
// Size: 0x10 (Inherited: 0x10)
struct FTinySharkKilledNetworkEvent : FNetworkEventStruct {
};

// ScriptStruct AthenaAI.EventTinySharkKilled
// Size: 0x01 (Inherited: 0x00)
struct FEventTinySharkKilled {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventTinySharkDamaged
// Size: 0x58 (Inherited: 0x00)
struct FEventTinySharkDamaged {
	struct FImpactDamageEvent ImpactDamageEvent; // 0x00(0x58)
};

// ScriptStruct AthenaAI.EventTinySharkDespawned
// Size: 0x01 (Inherited: 0x00)
struct FEventTinySharkDespawned {
	char DespawnReason; // 0x00(0x01)
};

// ScriptStruct AthenaAI.EventTinySharkSpawned
// Size: 0x30 (Inherited: 0x00)
struct FEventTinySharkSpawned {
	struct FString TinySharkPartTag; // 0x00(0x10)
	struct FGuid SpawnConfigId; // 0x10(0x10)
	struct FVector SpawnLocation; // 0x20(0x0c)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AthenaAI.TinySharkCollidedTelemetryEvent
// Size: 0x68 (Inherited: 0x00)
struct FTinySharkCollidedTelemetryEvent {
	struct FString TinySharkId; // 0x00(0x10)
	struct FString TinySharkName; // 0x10(0x10)
	struct FString ObstacleName; // 0x20(0x10)
	struct FVector CollisionLocation; // 0x30(0x0c)
	struct FVector HomeLocation; // 0x3c(0x0c)
	struct FString BehaviourTreeInfo; // 0x48(0x10)
	struct FString BlackboardInfo; // 0x58(0x10)
};

// ScriptStruct AthenaAI.TinySharkDespawnTelemetryEvent
// Size: 0x18 (Inherited: 0x00)
struct FTinySharkDespawnTelemetryEvent {
	struct FString TinySharkId; // 0x00(0x10)
	char TinySharkDespawnReason; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AthenaAI.TinySharkSpawnTelemetryEvent
// Size: 0x40 (Inherited: 0x00)
struct FTinySharkSpawnTelemetryEvent {
	struct FString TinySharkId; // 0x00(0x10)
	struct FString TinySharkType; // 0x10(0x10)
	struct FGuid ConfigSpawnId; // 0x20(0x10)
	struct FVector SpawnLocation; // 0x30(0x0c)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct AthenaAI.AthenaAIDebugCostDisplay
// Size: 0x01 (Inherited: 0x00)
struct FAthenaAIDebugCostDisplay {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.AthenaAIDebugCostData
// Size: 0x01 (Inherited: 0x00)
struct FAthenaAIDebugCostData {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaAI.AIDebugSpawnConfiguration
// Size: 0x28 (Inherited: 0x00)
struct FAIDebugSpawnConfiguration {
	int32_t NumIslandsToSpawnOn; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> SpecificRegionsToSpawnOn; // 0x08(0x10)
	struct TArray<struct FAIDebugSpawnAmount> WhatToSpawn; // 0x18(0x10)
};

// ScriptStruct AthenaAI.AIDebugSpawnAmount
// Size: 0x10 (Inherited: 0x00)
struct FAIDebugSpawnAmount {
	struct UAIEncounterSettings* EncounterSettings; // 0x00(0x08)
	int32_t NumToSpawn; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AthenaAI.AIDioramaPawn
// Size: 0x48 (Inherited: 0x00)
struct FAIDioramaPawn {
	struct APawn* Pawn; // 0x00(0x08)
	char UnknownData_8[0x40]; // 0x08(0x40)
};

// ScriptStruct AthenaAI.AIDioramaRoleDesc
// Size: 0x28 (Inherited: 0x00)
struct FAIDioramaRoleDesc {
	struct FName RoleName; // 0x00(0x08)
	struct FStringAssetReference CustomAnimationAsset; // 0x08(0x10)
	struct FName CustomAnimationToRunOnSpawn; // 0x18(0x08)
	struct UClass* StartingItemCategory; // 0x20(0x08)
};

// ScriptStruct AthenaAI.AIDioramaLocationSourceComponentData
// Size: 0x40 (Inherited: 0x00)
struct FAIDioramaLocationSourceComponentData {
	struct FTransform RelativeTransform; // 0x00(0x30)
	struct AActor* Interactable; // 0x30(0x08)
	char UnknownData_38[0x8]; // 0x38(0x08)
};

// ScriptStruct AthenaAI.DioramaCategoryEntries
// Size: 0xa0 (Inherited: 0x00)
struct FDioramaCategoryEntries {
	struct TMap<struct FName, struct FIslandDioramas> EntriesByIslandName; // 0x00(0x50)
	char UnknownData_50[0x50]; // 0x50(0x50)
};

// ScriptStruct AthenaAI.IslandDioramas
// Size: 0x10 (Inherited: 0x00)
struct FIslandDioramas {
	struct TArray<TScriptInterface<struct UAIDioramaLocationSourceInterface>> Entries; // 0x00(0x10)
};

// ScriptStruct AthenaAI.PetTurnRateModifier
// Size: 0x10 (Inherited: 0x00)
struct FPetTurnRateModifier {
	struct UClass* Strategy; // 0x00(0x08)
	float TurnRateModifier; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AthenaAI.PetFlyingStrategyProperties
// Size: 0x18 (Inherited: 0x00)
struct FPetFlyingStrategyProperties {
	struct UClass* Strategy; // 0x00(0x08)
	float ChanceOfFlying; // 0x08(0x04)
	float MinFlyingMeshZOffset; // 0x0c(0x04)
	float MaxFlyingMeshZOffset; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct AthenaAI.PetMovementRequest
// Size: 0x0c (Inherited: 0x00)
struct FPetMovementRequest {
	char State; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float TargetMeshZOffset; // 0x04(0x04)
	bool AdjustingFlight; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct AthenaAI.PetLoadedMaterial
// Size: 0x10 (Inherited: 0x00)
struct FPetLoadedMaterial {
	struct UMaterialInstance* MaterialInstance; // 0x00(0x08)
	bool CastShadows; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct AthenaAI.PetPartSizeMapping
// Size: 0x08 (Inherited: 0x00)
struct FPetPartSizeMapping {
	char PetSize; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float PetScale; // 0x04(0x04)
};

// ScriptStruct AthenaAI.PetMaterialEntry
// Size: 0x18 (Inherited: 0x00)
struct FPetMaterialEntry {
	struct FStringAssetReference MaterialReference; // 0x00(0x10)
	bool CastShadows; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AthenaAI.PetWieldableReactMapping
// Size: 0x10 (Inherited: 0x00)
struct FPetWieldableReactMapping {
	struct UClass* WieldableType; // 0x00(0x08)
	struct FName ReactId; // 0x08(0x08)
};

