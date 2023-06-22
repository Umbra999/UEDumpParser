// Enum Kraken.ECoordinatedKrakenSpecialEventTypes
enum class ECoordinatedKrakenSpecialEventTypes : uint8_t {
	None,
	OverrideTargetActor,
	ReleaseTargetActor,
	BiteAttackImpact,
	BreathingIn,
	RoarVisuals,
	RoarAttack,
	EnableHeadDamage,
	ECoordinatedKrakenSpecialEventTypes_MAX,
};

// Enum Kraken.ECoordinatedKrakenActionType
enum class ECoordinatedKrakenActionType : uint8_t {
	Normal,
	Appear,
	Disappear,
	ECoordinatedKrakenActionType_MAX,
};

// Enum Kraken.EKrakenBehaviourType
enum class EKrakenBehaviourType : uint8_t {
	Idle,
	ShipHitting,
	ShipWrapping,
	PlayerGrabbing,
	EKrakenBehaviourType_MAX,
};

// Enum Kraken.EKrakenShipWrappingTentacleState
enum class EKrakenShipWrappingTentacleState : uint8_t {
	Dormant,
	Wrapping,
	AmbientWobble,
	EnteringShakeAttack,
	ShakeAttack,
	ExitingShakeAttack,
	HeavyAttack,
	Unwrapping,
	EKrakenShipWrappingTentacleState_MAX,
};

// Enum Kraken.EKrakenDynamicsStateEvent
enum class EKrakenDynamicsStateEvent : uint8_t {
	Damage,
	Knockback,
	EKrakenDynamicsStateEvent_MAX,
};

// Enum Kraken.EKrakenEQSLockReason
enum class EKrakenEQSLockReason : uint8_t {
	Spawning,
	EKrakenEQSLockReason_MAX,
};

// Enum Kraken.EKrakenDespawnReason
enum class EKrakenDespawnReason : uint8_t {
	Invalid,
	Defeated,
	TimedOutWithNoTargets,
	TimedOutWithTarget,
	Dismissed,
	EKrakenDespawnReason_MAX,
};

// Enum Kraken.EKrakenState
enum class EKrakenState : uint8_t {
	Spawning,
	Active,
	Despawning,
	EKrakenState_MAX,
};

// Enum Kraken.EKrakenTentacleBehaviourDamageActions
enum class EKrakenTentacleBehaviourDamageActions : uint8_t {
	StayActive,
	MoveActive,
	FleeInactive,
	EKrakenTentacleBehaviourDamageActions_MAX,
};

// ScriptStruct Kraken.CoordinatedKrakenExplosionEvent
// Size: 0x0c (Inherited: 0x00)
struct FCoordinatedKrakenExplosionEvent {
	int32_t ExplosionPointIndex; // 0x00(0x04)
	float TimeOffset; // 0x04(0x04)
	char UnknownData_8[0x4]; // 0x08(0x04)
};

// ScriptStruct Kraken.CoordinatedKrakenHeadAction
// Size: 0x10 (Inherited: 0x00)
struct FCoordinatedKrakenHeadAction {
	struct UClass* State; // 0x00(0x08)
	float TimeOffset; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Kraken.CoordinatedKrakenSpecialEvent
// Size: 0x0c (Inherited: 0x00)
struct FCoordinatedKrakenSpecialEvent {
	char Type; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float TimeOffset; // 0x04(0x04)
	char UnknownData_8[0x4]; // 0x08(0x04)
};

// ScriptStruct Kraken.CoordinatedKrakenTentacleAction
// Size: 0x18 (Inherited: 0x00)
struct FCoordinatedKrakenTentacleAction {
	struct UClass* State; // 0x00(0x08)
	int32_t TentacleIndex; // 0x08(0x04)
	float TimeOffset; // 0x0c(0x04)
	char UnknownData_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Kraken.CoordinatedKrakenAction
// Size: 0x330 (Inherited: 0x00)
struct FCoordinatedKrakenAction {
	struct FName ActionName; // 0x00(0x08)
	float ActionLength; // 0x08(0x04)
	char ActionType; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FCoordinatedKrakenSpecialEvent> SpecialEvents; // 0x10(0x10)
	struct TArray<struct FCoordinatedKrakenTentacleAction> TentacleActions; // 0x20(0x10)
	struct TArray<struct FCoordinatedKrakenHeadAction> HeadActions; // 0x30(0x10)
	struct TArray<struct FCoordinatedKrakenExplosionEvent> ExplosionEvents; // 0x40(0x10)
	struct FRuntimeVectorCurve TargetActorLocationAnimation; // 0x50(0x170)
	struct FRuntimeVectorCurve TargetActorRotationAnimation; // 0x1c0(0x170)
};

// ScriptStruct Kraken.KrakenShipHittingBehaviourParamsCollection
// Size: 0x10 (Inherited: 0x00)
struct FKrakenShipHittingBehaviourParamsCollection {
	struct TArray<struct UKrakenShipHittingBehaviourParamsDataAsset*> Params; // 0x00(0x10)
};

// ScriptStruct Kraken.KrakenShipHittingBehaviourParams
// Size: 0x60 (Inherited: 0x00)
struct FKrakenShipHittingBehaviourParams {
	struct UClass* ShipSize; // 0x00(0x08)
	struct UClass* TentacleType; // 0x08(0x08)
	struct FWeightedProbabilityRangeOfRanges DamageRequiredToCancelImpact; // 0x10(0x30)
	float CancellationThreshold; // 0x40(0x04)
	float ImpactTime; // 0x44(0x04)
	int32_t LevelsOfDamage; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FKrakenShipHittingBehaviourImpactParams> Configurations; // 0x50(0x10)
};

// ScriptStruct Kraken.KrakenShipHittingBehaviourImpactParams
// Size: 0xa0 (Inherited: 0x00)
struct FKrakenShipHittingBehaviourImpactParams {
	int32_t Weight; // 0x00(0x04)
	char UnknownData_4[0xc]; // 0x04(0x0c)
	struct FTransform TentacleTransform; // 0x10(0x30)
	struct FVector ImpactLocation; // 0x40(0x0c)
	struct FVector ImpactForce; // 0x4c(0x0c)
	struct FVector DamageLocation; // 0x58(0x0c)
	char UnknownData_64[0x4]; // 0x64(0x04)
	struct FWeightedProbabilityRangeOfRanges NumZonesToDamage; // 0x68(0x30)
	char UnknownData_98[0x8]; // 0x98(0x08)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleParams
// Size: 0xf0 (Inherited: 0x00)
struct FKrakenShipWrappingTentacleParams {
	struct FKrakenShipWrappingTentacleAnimationPhaseCollection AnimationStates; // 0x00(0x80)
	float TimeIntoWrappingToDisableInteractables; // 0x80(0x04)
	float TimeIntoUnwrappingToEnableInteractables; // 0x84(0x04)
	float TimeIntoWrappingToEnableCollisions; // 0x88(0x04)
	float TimeIntoUnwrappingToDisableCollisions; // 0x8c(0x04)
	float TimeIntoEnteringShakeAttackToEnableCollisions; // 0x90(0x04)
	float TimeIntoExitingShakeAttackToDisableCollisions; // 0x94(0x04)
	float HighDetailAnimationStreamingDistance; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct FKrakenShipWrappingTentacleVFXParams WrappingOutOfWaterSplashVFX; // 0xa0(0x28)
	struct FKrakenShipWrappingTentacleVFXParams WrappingIntoWaterSplashVFX; // 0xc8(0x28)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleVFXParams
// Size: 0x28 (Inherited: 0x00)
struct FKrakenShipWrappingTentacleVFXParams {
	struct UParticleSystem* VFX; // 0x00(0x08)
	float TriggerTime; // 0x08(0x04)
	struct FVector Location; // 0x0c(0x0c)
	struct FRotator Rotation; // 0x18(0x0c)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationPhaseCollection
// Size: 0x80 (Inherited: 0x00)
struct FKrakenShipWrappingTentacleAnimationPhaseCollection {
	struct FKrakenShipWrappingTentacleAnimationStateParams Dormant; // 0x00(0x10)
	struct FKrakenShipWrappingTentacleAnimationStateParams Wrapping; // 0x10(0x10)
	struct FKrakenShipWrappingTentacleAnimationStateParams AmbientWobble; // 0x20(0x10)
	struct FKrakenShipWrappingTentacleAnimationStateParams EnteringShakeAttack; // 0x30(0x10)
	struct FKrakenShipWrappingTentacleAnimationStateParams ShakeAttack; // 0x40(0x10)
	struct FKrakenShipWrappingTentacleAnimationStateParams ExitingShakeAttack; // 0x50(0x10)
	struct FKrakenShipWrappingTentacleAnimationStateParams HeavyAttack; // 0x60(0x10)
	struct FKrakenShipWrappingTentacleAnimationStateParams Unwrapping; // 0x70(0x10)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationStateParams
// Size: 0x10 (Inherited: 0x00)
struct FKrakenShipWrappingTentacleAnimationStateParams {
	bool Visible; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t StartFrame; // 0x04(0x04)
	int32_t EndFrame; // 0x08(0x04)
	float Duration; // 0x0c(0x04)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationState
// Size: 0x10 (Inherited: 0x00)
struct FKrakenShipWrappingTentacleAnimationState {
	uint32_t EpochId; // 0x00(0x04)
	char State; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	double EndTime; // 0x08(0x08)
};

// ScriptStruct Kraken.KrakenAnchorDynamicsParams
// Size: 0x28 (Inherited: 0x28)
struct FKrakenAnchorDynamicsParams : FStandardAnchorDynamicsParameters {
};

// ScriptStruct Kraken.KrakenDynamicsParams
// Size: 0x50 (Inherited: 0x00)
struct FKrakenDynamicsParams {
	struct FKrakenDynamicsStateParams AmbientWobble; // 0x00(0x10)
	struct FKrakenDynamicsStateParams EnteringShakeAttack; // 0x10(0x10)
	struct FKrakenDynamicsStateParams ShakeAttack; // 0x20(0x10)
	struct FKrakenDynamicsStateParams ExitingShakeAttack; // 0x30(0x10)
	struct FKrakenDynamicsStateParams HeavyAttack; // 0x40(0x10)
};

// ScriptStruct Kraken.KrakenDynamicsStateParams
// Size: 0x10 (Inherited: 0x00)
struct FKrakenDynamicsStateParams {
	struct TArray<struct FKrakenDynamicsStateFragmentParams> FragmentParams; // 0x00(0x10)
};

// ScriptStruct Kraken.KrakenDynamicsStateFragmentParams
// Size: 0x20 (Inherited: 0x00)
struct FKrakenDynamicsStateFragmentParams {
	struct UCurveVector* TorqueCurve; // 0x00(0x08)
	float BaselineTorque; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FKrakenDynamicsStateEvent> Events; // 0x10(0x10)
};

// ScriptStruct Kraken.KrakenDynamicsStateEvent
// Size: 0x0c (Inherited: 0x00)
struct FKrakenDynamicsStateEvent {
	char Event; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float Time; // 0x04(0x04)
	float Value; // 0x08(0x04)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourParamsCollection
// Size: 0x10 (Inherited: 0x00)
struct FKrakenShipWrappingBehaviourParamsCollection {
	struct TArray<struct UKrakenShipWrappingBehaviourParamsDataAsset*> Params; // 0x00(0x10)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourParams
// Size: 0x420 (Inherited: 0x00)
struct FKrakenShipWrappingBehaviourParams {
	struct UClass* ShipSize; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FKrakenShipWrappingBehaviourWarningParams WarningParams; // 0x10(0xa0)
	struct FKrakenShipWrappingBehaviourWrapParams WrapParams; // 0xb0(0x140)
	struct FKrakenShipWrappingBehaviourTentacleHeadParams TentacleHeadParams; // 0x1f0(0x48)
	struct FKrakenShipWrappingBehaviourShakeAttackParams ShakeAttackParams; // 0x238(0x68)
	struct FKrakenShipWrappingBehaviourHeavyAttackParams HeavyAttackParams; // 0x2a0(0xd8)
	struct FKrakenShipWrappingBehaviourDamageParams DamageParams; // 0x378(0x70)
	struct FKrakenShipWrappingBehaviourHealthParams HealthParams; // 0x3e8(0x38)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourHealthParams
// Size: 0x38 (Inherited: 0x00)
struct FKrakenShipWrappingBehaviourHealthParams {
	struct FWeightedProbabilityRangeOfRanges HealthReductionRequiredToUnwrapTheShipRange; // 0x00(0x30)
	char UnknownData_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourDamageParams
// Size: 0x70 (Inherited: 0x00)
struct FKrakenShipWrappingBehaviourDamageParams {
	float ChanceOfDamagingBottomDeckDamageHoles; // 0x00(0x04)
	float ChanceThatExistingHolesWillBeDamaged; // 0x04(0x04)
	int32_t LevelsOfDamage; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FWeightedProbabilityRangeOfRanges NumHolesToDamageRange; // 0x10(0x30)
	struct FWeightedProbabilityRangeOfRanges DamageIntervalRange; // 0x40(0x30)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourHeavyAttackParams
// Size: 0xd8 (Inherited: 0x00)
struct FKrakenShipWrappingBehaviourHeavyAttackParams {
	struct FWeightedProbabilityRangeOfRanges AttackDuration; // 0x00(0x30)
	float ChanceOfEnteringHeavyAttack; // 0x30(0x04)
	struct FKnockBackInfo ExteriorKnockbackParams; // 0x34(0x50)
	struct FKnockBackInfo InteriorKnockbackParams; // 0x84(0x50)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourShakeAttackParams
// Size: 0x68 (Inherited: 0x00)
struct FKrakenShipWrappingBehaviourShakeAttackParams {
	struct FWeightedProbabilityRangeOfRanges TimeBetweenShakeAttackAttempts; // 0x00(0x30)
	struct FWeightedProbabilityRangeOfRanges AttackDuration; // 0x30(0x30)
	uint32_t MaxFailedShakeAttackAttempts; // 0x60(0x04)
	float ChanceOfShake; // 0x64(0x04)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourTentacleHeadParams
// Size: 0x48 (Inherited: 0x00)
struct FKrakenShipWrappingBehaviourTentacleHeadParams {
	struct UClass* TentacleType; // 0x00(0x08)
	struct FWeightedProbabilityRangeOfRanges DamageRequiredToRelocate; // 0x08(0x30)
	float RelocationThreshold; // 0x38(0x04)
	float ChanceOfSwitchingSides; // 0x3c(0x04)
	float ChanceOfSelectingNearLocationAfterSwitchingSides; // 0x40(0x04)
	float ChanceOfSelectingSelectingDifferentDistanceFromShipWhenRemaningOnSameSide; // 0x44(0x04)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapParams
// Size: 0x140 (Inherited: 0x00)
struct FKrakenShipWrappingBehaviourWrapParams {
	struct FFloatRange WrapTimeBeforeGivingUpRange; // 0x00(0x10)
	float ShipInternalWaterLevelToTriggerUnwrap; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FKrakenAnchorDynamicsParams AnchorDynamicsParams; // 0x18(0x28)
	struct TArray<struct FKrakenShipWrappingBehaviourWrapLocationWeightedParams> WrapLocations; // 0x40(0x10)
	float WrapTimeBeforeGivingUp; // 0x50(0x04)
	char UnknownData_54[0xc]; // 0x54(0x0c)
	struct FKrakenShipWrappingBehaviourWrapLocationParams WrapLocation; // 0x60(0xe0)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapLocationParams
// Size: 0xe0 (Inherited: 0x00)
struct FKrakenShipWrappingBehaviourWrapLocationParams {
	struct UClass* TentacleType; // 0x00(0x08)
	struct FVector WrapLocationAnchorPoint; // 0x08(0x0c)
	char UnknownData_14[0xc]; // 0x14(0x0c)
	struct FTransform TentacleHeadHoldShipLocation; // 0x20(0x30)
	struct FKrakenShipWrappingBehaviourTentacleHeadLocations PortTentacleHeadLocations; // 0x50(0x20)
	struct FKrakenShipWrappingBehaviourTentacleHeadLocations StarboardTentacleHeadLocations; // 0x70(0x20)
	struct FKrakenDynamicsParams DynamicsParams; // 0x90(0x50)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourTentacleHeadLocations
// Size: 0x20 (Inherited: 0x00)
struct FKrakenShipWrappingBehaviourTentacleHeadLocations {
	struct TArray<struct FKrakenShipWrappingBehaviourNamedTransform> Near; // 0x00(0x10)
	struct TArray<struct FKrakenShipWrappingBehaviourNamedTransform> Far; // 0x10(0x10)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourNamedTransform
// Size: 0x40 (Inherited: 0x00)
struct FKrakenShipWrappingBehaviourNamedTransform {
	struct FName Name; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapLocationWeightedParams
// Size: 0xf0 (Inherited: 0x00)
struct FKrakenShipWrappingBehaviourWrapLocationWeightedParams {
	float Weight; // 0x00(0x04)
	char UnknownData_4[0xc]; // 0x04(0x0c)
	struct FKrakenShipWrappingBehaviourWrapLocationParams Params; // 0x10(0xe0)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWarningParams
// Size: 0xa0 (Inherited: 0x00)
struct FKrakenShipWrappingBehaviourWarningParams {
	struct UClass* TentacleType; // 0x00(0x08)
	float TickDuration; // 0x08(0x04)
	struct FFloatRange TentacleTimeoutRange; // 0x0c(0x10)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FWeightedProbabilityRangeOfRanges TentacleHealthRange; // 0x20(0x30)
	struct TArray<struct FKrakenShipWrappingBehaviourNamedTransform> TentacleLocations; // 0x50(0x10)
	float TentacleTimeout; // 0x60(0x04)
	float TentacleHealth; // 0x64(0x04)
	char UnknownData_68[0x8]; // 0x68(0x08)
	struct FTransform TentacleLocation; // 0x70(0x30)
};

// ScriptStruct Kraken.KrakenBehaviourParams
// Size: 0x68 (Inherited: 0x00)
struct FKrakenBehaviourParams {
	char Type; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	uint32_t MaxInstancesOfBehaviourAllowed; // 0x04(0x04)
	struct FWeightedProbabilityRangeOfRanges TargetTimeout; // 0x08(0x30)
	struct UKrakenIdleBehaviourParamsDataAsset* IdleParams; // 0x38(0x08)
	struct FKrakenShipWrappingBehaviourParamsCollection ShipWrappingParams; // 0x40(0x10)
	struct FKrakenShipHittingBehaviourParamsCollection ShipHittingParams; // 0x50(0x10)
	struct UKrakenPlayerGrabbingBehaviourParamsDataAsset* PlayerGrabbingParams; // 0x60(0x08)
};

// ScriptStruct Kraken.KrakenParams
// Size: 0x160 (Inherited: 0x00)
struct FKrakenParams {
	struct UClass* MurkClass; // 0x00(0x08)
	struct UGeneratedLocationsDataAsset* PotentialTentacleSpawnLocations; // 0x08(0x08)
	struct FWeightedProbabilityRange NumberOfTentaclesToSpawn; // 0x10(0x20)
	struct TArray<struct FKrakenTentaclesChanceParams> TentaclesRequiredToDismissKraken; // 0x30(0x10)
	float TickFrequencyToLookForNewBehaviours; // 0x40(0x04)
	float OperatingAreaRadius; // 0x44(0x04)
	float MinimumOperatingAreaMovementDeltaToInvalidateLocations; // 0x48(0x04)
	float RadiusToleranceBeforeOperatingAreaDespawn; // 0x4c(0x04)
	struct TArray<struct FKrakenTentaclesChanceParams> NumTentacleInstancesToAssignToShip; // 0x50(0x10)
	float GlobalPlayRateScale; // 0x60(0x04)
	struct FFloatRange NewTargetTimeout; // 0x64(0x10)
	struct FFloatRange UnavailableTargetTimeout; // 0x74(0x10)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct FKrakenTentacleParams TentacleParams; // 0x88(0x50)
	struct FWeightedProbabilityRangeOfRanges DismissTimeoutWhenNoTargets; // 0xd8(0x30)
	struct FWeightedProbabilityRangeOfRanges DismissTimeoutWithNewTarget; // 0x108(0x30)
	struct TArray<struct FKrakenWeightedBehaviour> ShipInteractingBehaviourWeights; // 0x138(0x10)
	struct TArray<struct FKrakenBehaviourParams> Behaviours; // 0x148(0x10)
	float DamageAmountToTriggerAudioComponentNotification; // 0x158(0x04)
	char UnknownData_15C[0x4]; // 0x15c(0x04)
};

// ScriptStruct Kraken.KrakenWeightedBehaviour
// Size: 0x08 (Inherited: 0x00)
struct FKrakenWeightedBehaviour {
	int32_t Weight; // 0x00(0x04)
	char BehaviourType; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Kraken.KrakenTentacleParams
// Size: 0x50 (Inherited: 0x00)
struct FKrakenTentacleParams {
	struct FWeightedProbabilityRangeOfRanges TentacleHealth; // 0x00(0x30)
	struct FFloatRange InactiveToActiveTentacleTimeout; // 0x30(0x10)
	float InactiveToActiveTentacleTimeoutThresholdInSeconds; // 0x40(0x04)
	float ChanceOfInactiveToActiveTentacle; // 0x44(0x04)
	float ChanceOfInactiveToActiveTentacleOnDeathOrFlee; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Kraken.KrakenTentaclesChanceParams
// Size: 0x28 (Inherited: 0x00)
struct FKrakenTentaclesChanceParams {
	int32_t NumberOfTentaclesSpawned; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FWeightedProbabilityRange ProbabilityRange; // 0x08(0x20)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationBoneTrack
// Size: 0x10 (Inherited: 0x00)
struct FKrakenAnimatedTentacleAnimationBoneTrack {
	struct TArray<struct FKrakenAnimatedTentacleAnimationBoneFrame> Frames; // 0x00(0x10)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationBoneFrame
// Size: 0x0c (Inherited: 0x00)
struct FKrakenAnimatedTentacleAnimationBoneFrame {
	struct FVector BoneLocation; // 0x00(0x0c)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleMappedAnimation
// Size: 0x10 (Inherited: 0x00)
struct FKrakenAnimatedTentacleMappedAnimation {
	struct UAnimSequence* ClientAnimation; // 0x00(0x08)
	struct UKrakenAnimatedTentacleAnimationDataAsset* AnimationAsset; // 0x08(0x08)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleAnimationSpecBone
// Size: 0x08 (Inherited: 0x00)
struct FKrakenAnimatedTentacleAnimationSpecBone {
	struct FName BoneName; // 0x00(0x08)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleStateAnimationMapping
// Size: 0x28 (Inherited: 0x00)
struct FKrakenAnimatedTentacleStateAnimationMapping {
	struct UClass* State; // 0x00(0x08)
	struct UAnimSequence* Animation; // 0x08(0x08)
	bool Loop; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct TArray<struct FKrakenAnimatedTentacleTransitionAnimation> Transitions; // 0x18(0x10)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleTransitionAnimation
// Size: 0x20 (Inherited: 0x00)
struct FKrakenAnimatedTentacleTransitionAnimation {
	struct UClass* FromState; // 0x00(0x08)
	float BranchAnimationTimeRemaining; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UAnimSequence*> TransitionAnimations; // 0x10(0x10)
};

// ScriptStruct Kraken.HeadStateChangeRequest
// Size: 0x18 (Inherited: 0x00)
struct FHeadStateChangeRequest {
	struct UClass* RequestedState; // 0x00(0x08)
	struct FGuid StateChangeID; // 0x08(0x10)
};

// ScriptStruct Kraken.KrakenHeadStateAnimationMapping
// Size: 0x28 (Inherited: 0x00)
struct FKrakenHeadStateAnimationMapping {
	struct UClass* State; // 0x00(0x08)
	struct UAnimSequence* Animation; // 0x08(0x08)
	bool Loop; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct TArray<struct FKrakenHeadTransitionAnimation> Transitions; // 0x18(0x10)
};

// ScriptStruct Kraken.KrakenHeadTransitionAnimation
// Size: 0x10 (Inherited: 0x00)
struct FKrakenHeadTransitionAnimation {
	struct UClass* FromState; // 0x00(0x08)
	struct UAnimSequence* TransitionAnimation; // 0x08(0x08)
};

// ScriptStruct Kraken.KrakenHeadHealthPair
// Size: 0x08 (Inherited: 0x00)
struct FKrakenHeadHealthPair {
	int32_t PlayerCount; // 0x00(0x04)
	float KrakenHeadHealth; // 0x04(0x04)
};

// ScriptStruct Kraken.KrakenHeadHitReactAnimations
// Size: 0x10 (Inherited: 0x00)
struct FKrakenHeadHitReactAnimations {
	float Weight; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* HitReactAnimation; // 0x08(0x08)
};

// ScriptStruct Kraken.KrakenTentacleBehaviourParams
// Size: 0xc0 (Inherited: 0x00)
struct FKrakenTentacleBehaviourParams {
	struct UEnvQuery* InactiveSpawnQueryTemplate; // 0x00(0x08)
	float ChanceOfCannonSideSpawn; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UEnvQuery* ActiveCannonSideSpawnQueryTemplate; // 0x10(0x08)
	struct UEnvQuery* ActiveNonCannonSideSpawnQueryTemplate; // 0x18(0x08)
	struct UClass* TentacleClass; // 0x20(0x08)
	float MinScale; // 0x28(0x04)
	float MaxScale; // 0x2c(0x04)
	float MinPlayRateScale; // 0x30(0x04)
	float MaxPlayRateScale; // 0x34(0x04)
	float PanicDespawnShipRangeRadius; // 0x38(0x04)
	float PanicDespawnWatercraftRangeRadius; // 0x3c(0x04)
	float PanicDespawnTentacleRadius; // 0x40(0x04)
	float PanicDespawnAnimationPlayRateScale; // 0x44(0x04)
	float PreDeathAnimationPlayRateScale; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FKrakenTentacleBehaviourActionChances> OnDamageActionChances; // 0x50(0x10)
	struct FWeightedProbabilityRangeOfRanges TimeToSpendInInactiveState; // 0x60(0x30)
	struct FWeightedProbabilityRangeOfRanges TimeToSpendInActiveState; // 0x90(0x30)
};

// ScriptStruct Kraken.KrakenTentacleBehaviourActionChances
// Size: 0x08 (Inherited: 0x00)
struct FKrakenTentacleBehaviourActionChances {
	char ActionToTransitionTo; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float WeightedChance; // 0x04(0x04)
};

// ScriptStruct Kraken.KrakenIdleBehaviourParams
// Size: 0xc0 (Inherited: 0xc0)
struct FKrakenIdleBehaviourParams : FKrakenTentacleBehaviourParams {
};

// ScriptStruct Kraken.KrakenPlayerGrabbingBehaviourParams
// Size: 0xe8 (Inherited: 0xc0)
struct FKrakenPlayerGrabbingBehaviourParams : FKrakenTentacleBehaviourParams {
	float MinUnsuccessfulTargetTimeout; // 0xc0(0x04)
	float MaxUnsuccessfulTargetTimeout; // 0xc4(0x04)
	struct TArray<struct FKrakenPlayerGrabbingHoldingStateTransitionChance> HoldingTransitionChances; // 0xc8(0x10)
	float MinTargetHoldingTime; // 0xd8(0x04)
	float MaxTargetHoldingTime; // 0xdc(0x04)
	float TargetThrowingSpeed; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct Kraken.KrakenPlayerGrabbingHoldingStateTransitionChance
// Size: 0x10 (Inherited: 0x00)
struct FKrakenPlayerGrabbingHoldingStateTransitionChance {
	float WeightedChance; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UClass* StateToTransitionTo; // 0x08(0x08)
};

// ScriptStruct Kraken.KrakenServiceParams
// Size: 0x38 (Inherited: 0x00)
struct FKrakenServiceParams {
	struct UClass* KrakenType; // 0x00(0x08)
	struct FKrakenServiceSpawnParams SpawnParams; // 0x08(0x18)
	struct UKrakenParamsDataAsset* DefaultKrakenParams; // 0x20(0x08)
	struct TArray<struct FKrakenServiceShipParams> KrakenParams; // 0x28(0x10)
};

// ScriptStruct Kraken.KrakenServiceShipParams
// Size: 0x20 (Inherited: 0x00)
struct FKrakenServiceShipParams {
	struct FName Feature; // 0x00(0x08)
	struct TArray<struct UClass*> ValidShipTypes; // 0x08(0x10)
	struct UKrakenParamsDataAsset* KrakenParams; // 0x18(0x08)
};

// ScriptStruct Kraken.KrakenServiceSpawnParams
// Size: 0x18 (Inherited: 0x00)
struct FKrakenServiceSpawnParams {
	float SpawnLocationDistributionRadius; // 0x00(0x04)
	float SpawnLocationDistributionMinDistanceBetweenPoints; // 0x04(0x04)
	float SpawnDistanceInFrontOfShip; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UEnvQuery* SpawnLocationQuery; // 0x10(0x08)
};

// ScriptStruct Kraken.KrakenWorldSettingsParams
// Size: 0x01 (Inherited: 0x00)
struct FKrakenWorldSettingsParams {
	bool KrakenEnabled; // 0x00(0x01)
};

// ScriptStruct Kraken.CoordinatedKrakenPhaseAssetEntry
// Size: 0x40 (Inherited: 0x00)
struct FCoordinatedKrakenPhaseAssetEntry {
	struct FTransform RelativeAnimationOrigin; // 0x00(0x30)
	struct UCoordinatedKrakenPhaseActionsDataAsset* Asset; // 0x30(0x08)
	char UnknownData_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleTriggerHitReaction
// Size: 0x04 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleTriggerHitReaction {
	int32_t CollisionBoneIndex; // 0x00(0x04)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleTentacleDead
// Size: 0x04 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleTentacleDead {
	int32_t TentacleIndex; // 0x00(0x04)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleTakenDamage
// Size: 0x04 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleTakenDamage {
	int32_t TentacleIndex; // 0x00(0x04)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleTargetVomit
// Size: 0x04 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleTargetVomit {
	char UnknownData_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentaclePlayerInMouthEnd
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenAnimatedTentaclePlayerInMouthEnd {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentaclePlayerInMouthBegin
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenAnimatedTentaclePlayerInMouthBegin {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingEnd
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleSuckingEnd {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingStart
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleSuckingStart {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenWrappingTentacleTellEnd
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenWrappingTentacleTellEnd {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenWrappingTentacleTellBegin
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenWrappingTentacleTellBegin {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingTellEnd
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleSuckingTellEnd {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingTellBegin
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleSuckingTellBegin {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSuckingTell
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleSuckingTell {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleSubmerge
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleSubmerge {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleEmerge
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleEmerge {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenTentacleEndPlay
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenTentacleEndPlay {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleAnimationStopped
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleAnimationStopped {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleAnimationStarted
// Size: 0x10 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleAnimationStarted {
	struct UAnimSequence* Animation; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleAuthoritativeAnimationTime
// Size: 0x04 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleAuthoritativeAnimationTime {
	char UnknownData_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Kraken.EventKrakenAnimatedTentacleStateEntered
// Size: 0x18 (Inherited: 0x00)
struct FEventKrakenAnimatedTentacleStateEntered {
	struct UClass* State; // 0x00(0x08)
	struct UClass* PreviousState; // 0x08(0x08)
	bool SkipTransitions; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Kraken.EventKrakenHeadHit
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenHeadHit {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventCoordinatedKrakenPhaseEnded
// Size: 0x01 (Inherited: 0x00)
struct FEventCoordinatedKrakenPhaseEnded {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenTentacleDestroyed
// Size: 0x08 (Inherited: 0x00)
struct FEventKrakenTentacleDestroyed {
	struct AActor* KillingBlowInstigator; // 0x00(0x08)
};

// ScriptStruct Kraken.EventKrakenDespawned
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenDespawned {
	char DespawnReason; // 0x00(0x01)
};

// ScriptStruct Kraken.EventKrakenSpawned
// Size: 0x18 (Inherited: 0x00)
struct FEventKrakenSpawned {
	struct AShip* PrimaryShipTarget; // 0x00(0x08)
	struct FGuid ConfigSpawnId; // 0x08(0x10)
};

// ScriptStruct Kraken.EventKrakenShipWrappingTentacleStateChanged
// Size: 0x02 (Inherited: 0x00)
struct FEventKrakenShipWrappingTentacleStateChanged {
	char PreviousState; // 0x00(0x01)
	char NewState; // 0x01(0x01)
};

// ScriptStruct Kraken.EventKrakenTentaclePreUninitializeComponents
// Size: 0x01 (Inherited: 0x00)
struct FEventKrakenTentaclePreUninitializeComponents {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kraken.KrakenTentacleDestroyedTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FKrakenTentacleDestroyedTelemetryEvent {
	struct FString KrakenId; // 0x00(0x10)
};

// ScriptStruct Kraken.KrakenDespawnTelemetryEvent
// Size: 0x18 (Inherited: 0x00)
struct FKrakenDespawnTelemetryEvent {
	struct FString KrakenId; // 0x00(0x10)
	char KrakenDespawnReason; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Kraken.KrakenSpawnTelemetryEvent
// Size: 0x30 (Inherited: 0x00)
struct FKrakenSpawnTelemetryEvent {
	struct FString KrakenId; // 0x00(0x10)
	struct FVector SpawnLocation; // 0x10(0x0c)
	struct FGuid ConfigSpawnId; // 0x1c(0x10)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

