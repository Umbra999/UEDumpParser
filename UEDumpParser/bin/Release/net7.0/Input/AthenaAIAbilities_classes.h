// Class AthenaAIAbilities.AreaOfEffectHealAIAbilityType
// Size: 0x28 (Inherited: 0x28)
struct UAreaOfEffectHealAIAbilityType : UAthenaAIAbilityType {
};

// Class AthenaAIAbilities.MeleeAIAbilityType
// Size: 0x28 (Inherited: 0x28)
struct UMeleeAIAbilityType : UAthenaAIAbilityType {
};

// Class AthenaAIAbilities.AreaOfEffectHealAIAbility
// Size: 0xa0 (Inherited: 0x78)
struct UAreaOfEffectHealAIAbility : UAthenaAIAbility {
	char UnknownData_78[0x10]; // 0x78(0x10)
	struct AActor* HealAreaOfEffectActor; // 0x88(0x08)
	char UnknownData_90[0x10]; // 0x90(0x10)
};

// Class AthenaAIAbilities.AreaOfEffectHealAIAbilityParams
// Size: 0xe0 (Inherited: 0xc8)
struct UAreaOfEffectHealAIAbilityParams : UAthenaAIAbilityParams {
	float ChanceToGoOnCooldownInsteadOfExecuting; // 0xc8(0x04)
	float HealthPercentageThresholdToHeal; // 0xcc(0x04)
	struct UClass* StatusEffectZone; // 0xd0(0x08)
	float MinimumTimeSpentHealing; // 0xd8(0x04)
	float MaximumTimeSpentHealing; // 0xdc(0x04)
};

// Class AthenaAIAbilities.AshenFireStatus
// Size: 0x30 (Inherited: 0x30)
struct UAshenFireStatus : UStatusBase {
};

// Class AthenaAIAbilities.BullRushAIAbilityType
// Size: 0x28 (Inherited: 0x28)
struct UBullRushAIAbilityType : UAthenaAIAbilityType {
};

// Class AthenaAIAbilities.BurrowEruptDamagerType
// Size: 0x28 (Inherited: 0x28)
struct UBurrowEruptDamagerType : UDamagerType {
};

// Class AthenaAIAbilities.BurrowHealVFXComponent
// Size: 0x118 (Inherited: 0xc8)
struct UBurrowHealVFXComponent : UActorComponent {
	struct UParticleSystem* VFXAsset; // 0xc8(0x08)
	struct FName VfxSocketName; // 0xd0(0x08)
	float VFXDuration; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
	struct UParticleSystemComponent* SpawnedVFXSystem; // 0xe0(0x08)
	bool IsVFXActive; // 0xe8(0x01)
	char UnknownData_E9[0x2f]; // 0xe9(0x2f)

	void OnRep_IsVFXActive(); // Function AthenaAIAbilities.BurrowHealVFXComponent.OnRep_IsVFXActive // Final|Native|Private // @ game+0x462e230
};

// Class AthenaAIAbilities.CoralShieldStatus
// Size: 0x30 (Inherited: 0x30)
struct UCoralShieldStatus : UStatusBase {
};

// Class AthenaAIAbilities.EelSlapAIAbilityType
// Size: 0x28 (Inherited: 0x28)
struct UEelSlapAIAbilityType : UAthenaAIAbilityType {
};

// Class AthenaAIAbilities.EelSlapStatus
// Size: 0x30 (Inherited: 0x30)
struct UEelSlapStatus : UStatusBase {
};

// Class AthenaAIAbilities.EelThrowAIAbility
// Size: 0x80 (Inherited: 0x78)
struct UEelThrowAIAbility : UAthenaAIAbility {
	struct UBlackboardComponent* CachedBlackboardComponent; // 0x78(0x08)
};

// Class AthenaAIAbilities.EelThrowAIAbilityParams
// Size: 0xe8 (Inherited: 0xc8)
struct UEelThrowAIAbilityParams : UAthenaAIAbilityParams {
	struct FWeightedProbabilityRange MinMaxNumberOfAttacksBeforeEnd; // 0xc8(0x20)
};

// Class AthenaAIAbilities.EelThrowAIAbilityType
// Size: 0x28 (Inherited: 0x28)
struct UEelThrowAIAbilityType : UAthenaAIAbilityType {
};

// Class AthenaAIAbilities.ElectricShieldBuffInterface
// Size: 0x28 (Inherited: 0x28)
struct UElectricShieldBuffInterface : UInterface {
};

// Class AthenaAIAbilities.ElectricShieldBuffComponent
// Size: 0x1d0 (Inherited: 0xc8)
struct UElectricShieldBuffComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UParticleSystem* ShieldVFXAsset; // 0xd0(0x08)
	struct FName VfxSocketName; // 0xd8(0x08)
	struct UWwiseEvent* StartAudioLoopEvent; // 0xe0(0x08)
	struct UWwiseEvent* StopAudioLoopEvent; // 0xe8(0x08)
	struct UParticleSystemComponent* ShieldEffectComponent; // 0xf0(0x08)
	bool IsShieldActive; // 0xf8(0x01)
	char UnknownData_F9[0xd7]; // 0xf9(0xd7)

	void OnRep_IsShieldActive(); // Function AthenaAIAbilities.ElectricShieldBuffComponent.OnRep_IsShieldActive // Final|Native|Public // @ game+0x462e210
	void DeactivateShield(); // Function AthenaAIAbilities.ElectricShieldBuffComponent.DeactivateShield // Native|Public // @ game+0x462e1e0
};

// Class AthenaAIAbilities.ElectricShieldStatus
// Size: 0x30 (Inherited: 0x30)
struct UElectricShieldStatus : UStatusBase {
};

// Class AthenaAIAbilities.ImpactMeleeAttackEelSlapId
// Size: 0x28 (Inherited: 0x28)
struct UImpactMeleeAttackEelSlapId : UImpactProjectileId {
};

// Class AthenaAIAbilities.MeleeAIAbility
// Size: 0x80 (Inherited: 0x78)
struct UMeleeAIAbility : UAthenaAIAbility {
	char UnknownData_78[0x8]; // 0x78(0x08)
};

// Class AthenaAIAbilities.MeleeAttackId
// Size: 0x28 (Inherited: 0x28)
struct UMeleeAttackId : UObject {
};

// Class AthenaAIAbilities.MeleeAIAbilityParams
// Size: 0xd8 (Inherited: 0xc8)
struct UMeleeAIAbilityParams : UAthenaAIAbilityParams {
	struct TArray<struct FMeleeAttackIdWeights> MeleeAttacks; // 0xc8(0x10)
};

// Class AthenaAIAbilities.EelSlapAIAbilityParams
// Size: 0xd8 (Inherited: 0xd8)
struct UEelSlapAIAbilityParams : UMeleeAIAbilityParams {
};

// Class AthenaAIAbilities.EelSlapAIAbility
// Size: 0x80 (Inherited: 0x80)
struct UEelSlapAIAbility : UMeleeAIAbility {
};

// Class AthenaAIAbilities.ComboMeleeAttackId
// Size: 0x28 (Inherited: 0x28)
struct UComboMeleeAttackId : UMeleeAttackId {
};

// Class AthenaAIAbilities.HeavyMeleeAttackId
// Size: 0x28 (Inherited: 0x28)
struct UHeavyMeleeAttackId : UMeleeAttackId {
};

// Class AthenaAIAbilities.LightMeleeAttackId
// Size: 0x28 (Inherited: 0x28)
struct ULightMeleeAttackId : UMeleeAttackId {
};

// Class AthenaAIAbilities.BullRushAIAbilityParams
// Size: 0x100 (Inherited: 0xe0)
struct UBullRushAIAbilityParams : UMeleeChargeAIAbilityParams {
	float StaticCollisionWarmup; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct UEnvQuery*> ValidatorEQSystems; // 0xe8(0x10)
	float TimeBetweenCanExecuteChecks; // 0xf8(0x04)
	char UnknownData_FC[0x4]; // 0xfc(0x04)
};

// Class AthenaAIAbilities.BullRushAIAbility
// Size: 0xb8 (Inherited: 0x98)
struct UBullRushAIAbility : UMeleeChargeAIAbility {
	struct UWorld* CachedWorld; // 0x98(0x08)
	char UnknownData_A0[0x18]; // 0xa0(0x18)
};

// Class AthenaAIAbilities.MeleeCollisionAwarenessInterface
// Size: 0x28 (Inherited: 0x28)
struct UMeleeCollisionAwarenessInterface : UInterface {
};

// Class AthenaAIAbilities.SporeCloudStatus
// Size: 0x30 (Inherited: 0x30)
struct USporeCloudStatus : UStatusBase {
};

// Class AthenaAIAbilities.SporeExposureInterface
// Size: 0x28 (Inherited: 0x28)
struct USporeExposureInterface : UInterface {
};

// Class AthenaAIAbilities.SporeExposureComponent
// Size: 0x100 (Inherited: 0xc8)
struct USporeExposureComponent : UActorComponent {
	char UnknownData_C8[0x38]; // 0xc8(0x38)
};

// Class AthenaAIAbilities.SporeExposureStatus
// Size: 0x30 (Inherited: 0x30)
struct USporeExposureStatus : UStatusBase {
};

// Class AthenaAIAbilities.StatusResponseActivateElectricShield
// Size: 0x38 (Inherited: 0x30)
struct UStatusResponseActivateElectricShield : UStatusResponse {
	float Duration; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// Class AthenaAIAbilities.StatusResponseShowBurrowHealVFX
// Size: 0x30 (Inherited: 0x30)
struct UStatusResponseShowBurrowHealVFX : UStatusResponse {
};

// Class AthenaAIAbilities.StatusResponseShowCoralShieldVFX
// Size: 0x30 (Inherited: 0x30)
struct UStatusResponseShowCoralShieldVFX : UStatusResponse {
};

// Class AthenaAIAbilities.StatusResponseSporeCloud
// Size: 0x30 (Inherited: 0x30)
struct UStatusResponseSporeCloud : UStatusResponse {
};

