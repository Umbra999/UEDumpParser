// Class Kraken.KrakenTentacle
// Size: 0x510 (Inherited: 0x3c8)
struct AKrakenTentacle : AActor {
	char UnknownData_3C8[0x20]; // 0x3c8(0x20)
	struct UHealthComponent* HealthComponent; // 0x3e8(0x08)
	struct UActorDamageableComponent* DamageableComponent; // 0x3f0(0x08)
	struct UVenomComponent* VenomComponent; // 0x3f8(0x08)
	float VenomChance; // 0x400(0x04)
	char UnknownData_404[0x10c]; // 0x404(0x10c)

	void OnDamageToTentacle(struct FImpactDamageEvent ImpactDamageEvent); // Function Kraken.KrakenTentacle.OnDamageToTentacle // Final|Native|Public|HasOutParms // @ game+0x4a40a70
};

// Class Kraken.Murk
// Size: 0x468 (Inherited: 0x3c8)
struct AMurk : AActor {
	struct UMurkWaterModifierZoneComponent* WaterModifierZone; // 0x3c8(0x08)
	struct USceneComponent* SceneRootComponent; // 0x3d0(0x08)
	struct UStaticMeshComponent* InnerSheet; // 0x3d8(0x08)
	struct UStaticMeshComponent* OuterSheet; // 0x3e0(0x08)
	float UnderwaterSheetHeightScale; // 0x3e8(0x04)
	char UnknownData_3EC[0x4]; // 0x3ec(0x04)
	struct UMaterialInstanceDynamic* InnerSheetMaterialInstance; // 0x3f0(0x08)
	struct UMaterialInstanceDynamic* OuterSheetMaterialInstance; // 0x3f8(0x08)
	char UnknownData_400[0x68]; // 0x400(0x68)

	void DeactivateMurkBP(); // Function Kraken.Murk.DeactivateMurkBP // Final|Native|Public|BlueprintCallable // @ game+0x4a40850
	void ActivateMurkBP(); // Function Kraken.Murk.ActivateMurkBP // Final|Native|Public|BlueprintCallable // @ game+0x4a407b0
};

// Class Kraken.CoordinatedKrakenInterface
// Size: 0x28 (Inherited: 0x28)
struct UCoordinatedKrakenInterface : UInterface {
};

// Class Kraken.CoordinatedKrakenPhaseActionsDataAsset
// Size: 0x50 (Inherited: 0x28)
struct UCoordinatedKrakenPhaseActionsDataAsset : UDataAsset {
	struct TArray<int32_t> TentaclesUsed; // 0x28(0x10)
	bool KrakenHeadUsed; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct TArray<struct FCoordinatedKrakenAction> Actions; // 0x40(0x10)
};

// Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_AllKrakenOccupiedLocations : UEnvQueryContext {
};

// Class Kraken.EnvQueryContext_AllocatedShip
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_AllocatedShip : UEnvQueryContext {
};

// Class Kraken.EnvQueryContext_AllShipsInWorld
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_AllShipsInWorld : UEnvQueryContext {
};

// Class Kraken.EnvQueryContext_AllWatercraftsInWorld
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_AllWatercraftsInWorld : UEnvQueryContext {
};

// Class Kraken.EnvQueryContext_PreviousLocation
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_PreviousLocation : UEnvQueryContext {
};

// Class Kraken.EnvQueryGenerator_KrakenSpawnLocations
// Size: 0x58 (Inherited: 0x58)
struct UEnvQueryGenerator_KrakenSpawnLocations : UEnvQueryGenerator {
};

// Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations
// Size: 0x58 (Inherited: 0x58)
struct UEnvQueryGenerator_KrakenTentacleSpawnLocations : UEnvQueryGenerator {
};

// Class Kraken.KillingTheKrakenConditionalStatTrigger
// Size: 0x30 (Inherited: 0x30)
struct UKillingTheKrakenConditionalStatTrigger : UConditionalStatsTriggerType {
};

// Class Kraken.KrakenShipWrappingTentacle
// Size: 0x700 (Inherited: 0x510)
struct AKrakenShipWrappingTentacle : AKrakenTentacle {
	struct USceneComponent* SceneRoot; // 0x510(0x08)
	struct UStaticMeshComponent* TentacleCollisions; // 0x518(0x08)
	struct UStaticMeshComponent* TentacleMesh; // 0x520(0x08)
	struct UBoxComponent* DamageZone; // 0x528(0x08)
	struct USceneComponent* InteractableBlockingRegions; // 0x530(0x08)
	struct USceneComponent* KnockbackRegions; // 0x538(0x08)
	struct UBoxComponent* TentacleHeadCollisions; // 0x540(0x08)
	struct USceneComponent* TentacleHeadKnockbackRegions; // 0x548(0x08)
	struct UKrakenShipWrappingTentacleAIAudioComponent* AudioComponent; // 0x550(0x08)
	struct UStaticMesh* LowDetailTentacleMesh; // 0x558(0x08)
	struct FStringAssetReference HighDetailTentacleMeshAsset; // 0x560(0x10)
	struct FKrakenShipWrappingTentacleParams Params; // 0x570(0xf0)
	struct UMaterialInstanceDynamic* TentacleDynamicMaterialInstance; // 0x660(0x08)
	struct UStaticMesh* HighDetailTentacleMesh; // 0x668(0x08)
	struct FKrakenShipWrappingTentacleAnimationState CurrentServerAnimationState; // 0x670(0x10)
	struct FKrakenShipWrappingTentacleAnimationState PendingServerAnimationState; // 0x680(0x10)
	char UnknownData_690[0x70]; // 0x690(0x70)

	void OnRep_CurrentServerAnimationState(); // Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState // Final|Native|Private // @ game+0x4a40b70
};

// Class Kraken.KrakenTelemetryComponent
// Size: 0x200 (Inherited: 0xc8)
struct UKrakenTelemetryComponent : UActorComponent {
	char UnknownData_C8[0x138]; // 0xc8(0x138)
};

// Class Kraken.Kraken
// Size: 0x940 (Inherited: 0x3c8)
struct AKraken : AActor {
	char UnknownData_3C8[0x18]; // 0x3c8(0x18)
	float RelevancyDistance; // 0x3e0(0x04)
	char UnknownData_3E4[0x14]; // 0x3e4(0x14)
	float InnerRadius; // 0x3f8(0x04)
	float OuterRadius; // 0x3fc(0x04)
	float AreaOfEffectOfShipHitAttack; // 0x400(0x04)
	char CollisionChannelForGunpowderKegs; // 0x404(0x01)
	char CurrentState; // 0x405(0x01)
	char UnknownData_406[0x1b2]; // 0x406(0x1b2)
	struct AMurk* MurkActor; // 0x5b8(0x08)
	char UnknownData_5C0[0xb8]; // 0x5c0(0xb8)
	struct UKrakenAICharacterAudioComponent* KrakenAudioComponent; // 0x678(0x08)
	struct UKrakenTelemetryComponent* KrakenTelemetryComponent; // 0x680(0x08)
	struct FEncounterParams SightingEncounterParams; // 0x688(0x0c)
	struct FEncounterParams CloseEncounterParams; // 0x694(0x0c)
	char UnknownData_6A0[0x10]; // 0x6a0(0x10)
	struct FKrakenParams Params; // 0x6b0(0x160)
	int32_t NumTentaclesRemaining; // 0x810(0x04)
	char UnknownData_814[0x12c]; // 0x814(0x12c)

	void Multicast_OnTentacleTakenDamage(); // Function Kraken.Kraken.Multicast_OnTentacleTakenDamage // Final|Net|Native|Event|NetMulticast|Private // @ game+0x4a409d0
	void AddActorToKnownTargets(struct AActor* Target); // Function Kraken.Kraken.AddActorToKnownTargets // Final|Native|Public|BlueprintCallable // @ game+0x4a407d0
};

// Class Kraken.KrakenAnimatedTentacleAnimationDataAsset
// Size: 0x58 (Inherited: 0x28)
struct UKrakenAnimatedTentacleAnimationDataAsset : UDataAsset {
	struct UKrakenAnimatedTentacleAnimationSpecDataAsset* AnimationSpec; // 0x28(0x08)
	float FrameTimeDelta; // 0x30(0x04)
	float AnimationLength; // 0x34(0x04)
	int32_t NumFrames; // 0x38(0x04)
	bool AllowLookAround; // 0x3c(0x01)
	bool RequiresWaterHeightQuery; // 0x3d(0x01)
	char UnknownData_3E[0x2]; // 0x3e(0x02)
	float AnimationPlayRateScale; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct TArray<struct FKrakenAnimatedTentacleAnimationBoneTrack> Bones; // 0x48(0x10)
};

// Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UKrakenAnimatedTentacleAnimationMappingDataAsset : UDataAsset {
	struct TArray<struct FKrakenAnimatedTentacleMappedAnimation> Animations; // 0x28(0x10)
};

// Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UKrakenAnimatedTentacleAnimationSpecDataAsset : UDataAsset {
	struct TArray<struct FKrakenAnimatedTentacleAnimationSpecBone> Bones; // 0x28(0x10)
};

// Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset
// Size: 0x58 (Inherited: 0x28)
struct UKrakenAnimatedTentacleStateAnimationsDataAsset : UDataAsset {
	struct UKrakenAnimatedTentacleAnimationMappingDataAsset* MappingAssetReference; // 0x28(0x20)
	struct TArray<struct FKrakenAnimatedTentacleStateAnimationMapping> States; // 0x48(0x10)
};

// Class Kraken.KrakenHeadStateAnimationsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UKrakenHeadStateAnimationsDataAsset : UDataAsset {
	struct TArray<struct FKrakenHeadStateAnimationMapping> States; // 0x28(0x10)
};

// Class Kraken.KrakenHead
// Size: 0x5d0 (Inherited: 0x3c8)
struct AKrakenHead : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x3d8(0x08)
	struct UHealthComponent* HealthComponent; // 0x3e0(0x08)
	struct UActorDamageableComponent* ActorDamageableComponent; // 0x3e8(0x08)
	struct USphereComponent* SphereComponent; // 0x3f0(0x08)
	struct UVenomComponent* VenomComponent; // 0x3f8(0x08)
	struct UExplosionComponent* ExplosionComponent; // 0x400(0x08)
	struct UParticleSystem* BiteAttackVFX; // 0x408(0x08)
	struct TArray<struct FStatus> BreathingInContinuousStatusesToApply; // 0x410(0x10)
	float BreatheInStatusDuration; // 0x420(0x04)
	char UnknownData_424[0x4]; // 0x424(0x04)
	struct TArray<struct FStatus> RoarContinuousStatusesToApply; // 0x428(0x10)
	float RoarStatusDuration; // 0x438(0x04)
	char UnknownData_43C[0x4]; // 0x43c(0x04)
	struct UEnvQuery* RoarEQSQuery; // 0x440(0x08)
	struct UClass* KnockbackDamagerType; // 0x448(0x08)
	struct FKnockBackInfo RoarKnockbackInfo; // 0x450(0x50)
	struct UKrakenHeadAnimationInstance* HeadAnimInstance; // 0x4a0(0x08)
	struct FVector EQSQuerierLocation; // 0x4a8(0x0c)
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct UKrakenHeadHealthParamsDataAsset* KrakenHeadHealthParams; // 0x4b8(0x08)
	struct FHeadStateChangeRequest HeadStateRequest; // 0x4c0(0x18)
	bool IsDamageEnabled; // 0x4d8(0x01)
	char UnknownData_4D9[0x7]; // 0x4d9(0x07)
	struct USceneComponent* Root; // 0x4e0(0x08)
	char UnknownData_4E8[0xc0]; // 0x4e8(0xc0)
	struct FName BiteAttackImpactNamedPointsGroupName; // 0x5a8(0x08)
	char UnknownData_5B0[0x20]; // 0x5b0(0x20)

	void TestSetDamageEnabled(bool InEnabled); // Function Kraken.KrakenHead.TestSetDamageEnabled // Final|Native|Public|BlueprintCallable // @ game+0x4a40d80
	void RequestState(struct UClass* NewState); // Function Kraken.KrakenHead.RequestState // Native|Public|HasOutParms|BlueprintCallable // @ game+0x4a40ce0
	void OnRep_IsDamageEnabled(); // Function Kraken.KrakenHead.OnRep_IsDamageEnabled // Final|Native|Protected // @ game+0x4a40bb0
	void OnRep_HeadStateRequest(); // Function Kraken.KrakenHead.OnRep_HeadStateRequest // Final|Native|Protected // @ game+0x4a40b90
	void OnCoordinatedKrakenSpecialEvent(char InEventType); // Function Kraken.KrakenHead.OnCoordinatedKrakenSpecialEvent // Final|Native|Private // @ game+0x4a409f0
};

// Class Kraken.KrakenHeadAnimationInstance
// Size: 0x4a0 (Inherited: 0x440)
struct UKrakenHeadAnimationInstance : UAnimInstance {
	struct UClass* CurrentState; // 0x440(0x08)
	struct UClass* PreviousState; // 0x448(0x08)
	struct UKrakenHeadStateAnimationsDataAsset* MappingAsset; // 0x450(0x08)
	float SpawnBlendTime; // 0x458(0x04)
	float DefaultBlendTime; // 0x45c(0x04)
	bool IsInIntro; // 0x460(0x01)
	char UnknownData_461[0x7]; // 0x461(0x07)
	struct UAnimMontage* PlayingMontage; // 0x468(0x08)
	char UnknownData_470[0x10]; // 0x470(0x10)
	struct UKrakenHeadHitReactAnimationsDataAsset* KrakenHeadHitReactionAsset; // 0x480(0x08)
	char UnknownData_488[0x18]; // 0x488(0x18)
};

// Class Kraken.KrakenHeadBreathingInStatus
// Size: 0x30 (Inherited: 0x30)
struct UKrakenHeadBreathingInStatus : UStatusBase {
};

// Class Kraken.KrakenHeadHealthParamsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UKrakenHeadHealthParamsDataAsset : UDataAsset {
	struct TArray<struct FKrakenHeadHealthPair> KrakenHeadHealthPairs; // 0x28(0x10)
};

// Class Kraken.KrakenHeadHitReactAnimationsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UKrakenHeadHitReactAnimationsDataAsset : UDataAsset {
	struct TArray<struct FKrakenHeadHitReactAnimations> HitReactionAnimations; // 0x28(0x10)
};

// Class Kraken.KrakenHeadRoaringStatus
// Size: 0x30 (Inherited: 0x30)
struct UKrakenHeadRoaringStatus : UStatusBase {
};

// Class Kraken.KrakenIdleBehaviourParamsDataAsset
// Size: 0xe8 (Inherited: 0x28)
struct UKrakenIdleBehaviourParamsDataAsset : UDataAsset {
	struct FKrakenIdleBehaviourParams Params; // 0x28(0xc0)
};

// Class Kraken.KrakenParamsDataAsset
// Size: 0x188 (Inherited: 0x28)
struct UKrakenParamsDataAsset : UDataAsset {
	struct FKrakenParams Params; // 0x28(0x160)
};

// Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset
// Size: 0x110 (Inherited: 0x28)
struct UKrakenPlayerGrabbingBehaviourParamsDataAsset : UDataAsset {
	struct FKrakenPlayerGrabbingBehaviourParams Params; // 0x28(0xe8)
};

// Class Kraken.KrakenService
// Size: 0x5c0 (Inherited: 0x3c8)
struct AKrakenService : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct FKrakenServiceParams KrakenServiceParams; // 0x3d8(0x38)
	char UnknownData_410[0xa0]; // 0x410(0xa0)
	struct AKraken* Kraken; // 0x4b0(0x08)
	char UnknownData_4B8[0x100]; // 0x4b8(0x100)
	struct UGameEventOnDemandAvailabilityStateTracker* AvailabilityStateTracker; // 0x5b8(0x08)

	void Test_TrySpawningKraken(); // Function Kraken.KrakenService.Test_TrySpawningKraken // Final|Native|Public|BlueprintCallable // @ game+0x4a40e60
	bool Test_IsCurrentStateInactive(); // Function Kraken.KrakenService.Test_IsCurrentStateInactive // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4a40e30
	bool Test_IsCurrentStateActive(); // Function Kraken.KrakenService.Test_IsCurrentStateActive // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4a40e00
	void RequestKrakenWithLocation(struct FVector SpawnLocation, struct AActor* SpawnedForActor, bool IsRequestedOnDemand); // Function Kraken.KrakenService.RequestKrakenWithLocation // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x4a40bd0
	bool IsServiceInitialized(); // Function Kraken.KrakenService.IsServiceInitialized // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4a409a0
	bool IsKrakenActive(); // Function Kraken.KrakenService.IsKrakenActive // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4a40960
	bool DismissOrRemoveCrewFromKraken(struct FGuid InCrewId); // Function Kraken.KrakenService.DismissOrRemoveCrewFromKraken // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x4a408b0
	bool DismissKraken(); // Function Kraken.KrakenService.DismissKraken // Native|Public|BlueprintCallable // @ game+0x4a40870
};

// Class Kraken.KrakenServiceParamsDataAsset
// Size: 0x60 (Inherited: 0x28)
struct UKrakenServiceParamsDataAsset : UDataAsset {
	struct FKrakenServiceParams Params; // 0x28(0x38)
};

// Class Kraken.KrakenShipHittingBehaviourParamsDataAsset
// Size: 0x88 (Inherited: 0x28)
struct UKrakenShipHittingBehaviourParamsDataAsset : UDataAsset {
	struct FKrakenShipHittingBehaviourParams Params; // 0x28(0x60)
};

// Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset
// Size: 0x450 (Inherited: 0x28)
struct UKrakenShipWrappingBehaviourParamsDataAsset : UDataAsset {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FKrakenShipWrappingBehaviourParams Params; // 0x30(0x420)
};

// Class Kraken.KrakenShipWrappingKnockbackRegionComponent
// Size: 0x380 (Inherited: 0x2e0)
struct UKrakenShipWrappingKnockbackRegionComponent : USceneComponent {
	struct UBoxComponent* KnockbackRegion; // 0x2e0(0x08)
	struct FVector KnockbackDirection; // 0x2e8(0x0c)
	float KnockbackTime; // 0x2f4(0x04)
	struct FKnockBackInfo KnockbackParams; // 0x2f8(0x50)
	char UnknownData_348[0x38]; // 0x348(0x38)
};

