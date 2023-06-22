// Class AthenaAI.AthenaAIFormComponent
// Size: 0x148 (Inherited: 0xc8)
struct UAthenaAIFormComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct FAthenaAIFormComponentVfxCustomisation> VfxCustomisations; // 0xd0(0x10)
	struct UAthenaAIFormDataAsset* FormData; // 0xe0(0x08)
	struct UCharacterHitReactionDamagerTypeToAnimTypeLayer* HitReactionsLayer; // 0xe8(0x08)
	char UnknownData_F0[0x58]; // 0xf0(0x58)

	void OnRep_FormData(); // Function AthenaAI.AthenaAIFormComponent.OnRep_FormData // Final|Native|Private // @ game+0x3cc1a80
};

// Class AthenaAI.AthenaAIAbilityType
// Size: 0x28 (Inherited: 0x28)
struct UAthenaAIAbilityType : UObject {
};

// Class AthenaAI.AIStrategyId
// Size: 0x28 (Inherited: 0x28)
struct UAIStrategyId : UObject {
};

// Class AthenaAI.AISpawner
// Size: 0x438 (Inherited: 0x28)
struct UAISpawner : UDataAsset {
	char UnknownData_28[0x10]; // 0x28(0x10)
	bool HasSpawnerLevelEncounters; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct FAISpawnTypeParamsCollection SpawnTypeParamsCollection; // 0x40(0x48)
	struct UAIEncounterSettings* DefaultEncounterSettings; // 0x88(0x08)
	struct UAISpawnWaveSequenceRankProgression* DefaultSpawnWaveProgression; // 0x90(0x08)
	struct TArray<struct FAISpawnContextIdEncounterSettingsPair> SpawnContextSpecificEncounterSettings; // 0x98(0x10)
	bool ShouldSpawnFacingRegionCentre; // 0xa8(0x01)
	char DefaultSpawnType; // 0xa9(0x01)
	char UnknownData_AA[0x6]; // 0xaa(0x06)
	struct UEnvQuery* FindSpawnPosQuery; // 0xb0(0x08)
	char FindSpawnPosQueryRunMode; // 0xb8(0x01)
	char UnknownData_B9[0x3]; // 0xb9(0x03)
	struct FName SpawnLocationType; // 0xbc(0x08)
	int32_t MaxNumOfSpawnedPawns; // 0xc4(0x04)
	int32_t PriorityForSpawnedPawns; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FConditionalAISpawnOverride> SpawnOverrides; // 0xd0(0x10)
	struct TArray<struct FAdditionalSpawnerBehaviour> AdditionalBehaviours; // 0xe0(0x10)
	bool EnforceHomePosition; // 0xf0(0x01)
	bool SpawnEvenIfExcluded; // 0xf1(0x01)
	char UnknownData_F2[0x27e]; // 0xf2(0x27e)
	struct UAthenaAISettings* AthenaAISettings; // 0x370(0x08)
	char UnknownData_378[0xc0]; // 0x378(0xc0)

	int32_t GetNumOfSpawnRequests(); // Function AthenaAI.AISpawner.GetNumOfSpawnRequests // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3cc1690
};

// Class AthenaAI.AIPerCrewSpawner
// Size: 0x598 (Inherited: 0x438)
struct UAIPerCrewSpawner : UAISpawner {
	struct UAIWeightedProbabilityRangeOfRangesRankProgression* DefaultRespawnTimerRanges; // 0x438(0x08)
	int32_t MaxNumOfCrewsToSpawnFor; // 0x440(0x04)
	bool ActivateBySettingFootOnIsland; // 0x444(0x01)
	bool UseRespawnTimerForFirstSpawn; // 0x445(0x01)
	bool AssociateSpawnsWithSpecificCrews; // 0x446(0x01)
	bool PerceiveTriggerActorOnSpawn; // 0x447(0x01)
	bool EnforceRespawnTimeAfterCrewLeaves; // 0x448(0x01)
	bool IgnoreSpawningGracePeriodForNewCrew; // 0x449(0x01)
	char UnknownData_44A[0x6]; // 0x44a(0x06)
	struct UAIPerCrewSpawnerSettingsStoryOverrideAsset* StoryOverrideRespawnSettingsAsset; // 0x450(0x08)
	char UnknownData_458[0x140]; // 0x458(0x140)
};

// Class AthenaAI.AthenaAIFormDataAsset
// Size: 0x90 (Inherited: 0x28)
struct UAthenaAIFormDataAsset : UDataAsset {
	struct TArray<char> PreventHealthChangedReasons; // 0x28(0x10)
	struct TArray<struct FAIFormDamageResponse> DamageResponses; // 0x38(0x10)
	struct UStatusRecipientResponseList* OverrideStatusRecipientResponseList; // 0x48(0x08)
	struct UPhysicalMaterial* SurfaceMaterial; // 0x50(0x08)
	struct UObject* KilledVfxTemplate; // 0x58(0x08)
	struct UClass* AICharacterAudioComponent; // 0x60(0x08)
	struct UClass* AnimNotifyEmitterWithObservers; // 0x68(0x08)
	bool HighPriorityFootstepAudio; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	float MovementSpeedMultipler; // 0x74(0x04)
	struct FPlayerStat StatToFireOnDeath; // 0x78(0x04)
	struct FName FeatureName; // 0x7c(0x08)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct UClass* FormComponentClass; // 0x88(0x08)
};

// Class AthenaAI.AIPlayerTracker
// Size: 0x28 (Inherited: 0x28)
struct UAIPlayerTracker : UObject {
};

// Class AthenaAI.AISpawnerPlayerTracker
// Size: 0x48 (Inherited: 0x28)
struct UAISpawnerPlayerTracker : UAIPlayerTracker {
	char UnknownData_28[0x20]; // 0x28(0x20)
};

// Class AthenaAI.AIInteractableType
// Size: 0x28 (Inherited: 0x28)
struct UAIInteractableType : UObject {
};

// Class AthenaAI.AIWaveSpawner
// Size: 0x570 (Inherited: 0x438)
struct UAIWaveSpawner : UAISpawner {
	char UnknownData_438[0x8]; // 0x438(0x08)
	struct FAISpawnerWave SpawnedWave; // 0x440(0x100)
	float MinRespawnTime; // 0x540(0x04)
	float MaxRespawnTime; // 0x544(0x04)
	char UnknownData_548[0x28]; // 0x548(0x28)
};

// Class AthenaAI.AthenaAIAbilityStageParams
// Size: 0x40 (Inherited: 0x28)
struct UAthenaAIAbilityStageParams : UObject {
	float AbilityCooldownSpeedMultiplier; // 0x28(0x04)
	float DamageRequiredForNextIntervalMultiplier; // 0x2c(0x04)
	bool OverrideParams; // 0x30(0x01)
	bool AutoActivateOnStageTransition; // 0x31(0x01)
	char UnknownData_32[0x6]; // 0x32(0x06)
	struct UClass* TypeClass; // 0x38(0x08)
};

// Class AthenaAI.AthenaAIAbility
// Size: 0x78 (Inherited: 0x28)
struct UAthenaAIAbility : UObject {
	struct UAthenaAIAbilityParams* AbilityParams; // 0x28(0x08)
	struct APawn* Pawn; // 0x30(0x08)
	struct AAthenaAIController* Controller; // 0x38(0x08)
	TScriptInterface<struct UAIPawnInterface> AIPawnInterface; // 0x40(0x10)
	struct UAthenaAIAbilityStageParams* CurrentAbilityStageParams; // 0x50(0x08)
	char UnknownData_58[0x20]; // 0x58(0x20)
};

// Class AthenaAI.AthenaAIAbilityParams
// Size: 0xc8 (Inherited: 0x28)
struct UAthenaAIAbilityParams : UObject {
	struct TArray<struct FAthenaAIControllerParamValue> NamedControllerParams; // 0x28(0x10)
	char DamageIntervalCountingMode; // 0x38(0x01)
	bool UseTimeBetweenAbility; // 0x39(0x01)
	char UnknownData_3A[0x6]; // 0x3a(0x06)
	struct FAthenaAIAbilityPlayerBasedRanges ActivationTimerCooldown; // 0x40(0x10)
	struct FAthenaAIAbilityPlayerBasedRanges TimeBetweenAbility; // 0x50(0x10)
	bool UseDamageBetweenAbility; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct FAthenaAIAbilityPlayerBasedRanges DamageBetweenAbility; // 0x68(0x10)
	float AbilityRadius; // 0x78(0x04)
	bool UseMinMaxAttackRange; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
	struct FMinMaxAbilityRange MinMaxAttackRange; // 0x80(0x08)
	struct TArray<struct FAIAbilityFollowUp> FollowUpAbilities; // 0x88(0x10)
	float Weight; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct FAIAbilityContinuousCooldownParameterData ContinuousCooldownAbilityParameters; // 0xa0(0x20)
	struct UClass* AIAbilityTypeClass; // 0xc0(0x08)
};

// Class AthenaAI.AIInteractableComponent
// Size: 0x100 (Inherited: 0xc8)
struct UAIInteractableComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UClass* Type; // 0xd0(0x08)
	struct FVector DetachOffsetFromOwner; // 0xd8(0x0c)
	bool CanHaveTarget; // 0xe4(0x01)
	char UnknownData_E5[0x1b]; // 0xe5(0x1b)
};

// Class AthenaAI.BTDecorator_BaseConditional
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_BaseConditional : UBTDecorator {
};

// Class AthenaAI.BTDecorator_TargetOnShip
// Size: 0xa0 (Inherited: 0x68)
struct UBTDecorator_TargetOnShip : UBTDecorator_BaseConditional {
	bool Invert; // 0x68(0x01)
	char ShipOwnership; // 0x69(0x01)
	char UnknownData_6A[0x36]; // 0x6a(0x36)
};

// Class AthenaAI.BTService_QueryShipsForTarget
// Size: 0x310 (Inherited: 0x70)
struct UBTService_QueryShipsForTarget : UBTService {
	struct FAIDataProviderFloatValue MaxShipDistanceFromHomePosition; // 0x70(0x30)
	struct FAIDataProviderFloatValue MinDamageToSwitchTargets; // 0xa0(0x30)
	struct FAIDataProviderFloatValue MinSecondsBeforeSwitchTargets; // 0xd0(0x30)
	struct FAIDataProviderBoolValue SwitchTargetsAfterTimerExpires; // 0x100(0x30)
	struct FAIDataProviderFloatValue SecondsBeforeSwitchTargetsAfterTimerExpires; // 0x130(0x30)
	struct FAIDataProviderFloatValue TimeBetweenDiceRolls; // 0x160(0x30)
	struct FAIDataProviderFloatValue DiceRollForAggression; // 0x190(0x30)
	struct FAIDataProviderFloatValue MinTotalDamageToTurnDiceRollForAggression; // 0x1c0(0x30)
	struct FAIDataProviderFloatValue DiceRollForDamageAggression; // 0x1f0(0x30)
	struct FAIDataProviderFloatValue DiceRollForDamageDormancy; // 0x220(0x30)
	struct FAIDataProviderFloatValue PlayerDistanceThresholdToTurnAggressive; // 0x250(0x30)
	bool IgnoreAI; // 0x280(0x01)
	char UnknownData_281[0x8f]; // 0x281(0x8f)
};

// Class AthenaAI.BTTask_SwimAttackTargetActor
// Size: 0xe0 (Inherited: 0x88)
struct UBTTask_SwimAttackTargetActor : UBTTask_BlackboardBase {
	float DamageToApply; // 0x88(0x04)
	float MaxAngleToTargetToSuccessfullyAttack; // 0x8c(0x04)
	struct TArray<struct FAttackableTypeToAnimMapping> AttackAnimMapping; // 0x90(0x10)
	struct FName LoSTraceProfileName; // 0xa0(0x08)
	struct FAIDataProviderFloatValue LosTraceRadius; // 0xa8(0x30)
	float MaxDistanceToTargetToApplyDamage; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
};

// Class AthenaAI.BTTask_SwimAttackTargetShip
// Size: 0x240 (Inherited: 0x88)
struct UBTTask_SwimAttackTargetShip : UBTTask_BlackboardBase {
	float BiteRadiusOffsetToBeginAttackHeadOn; // 0x88(0x04)
	float BiteRadiusOffsetToBeginAttackPerpendicular; // 0x8c(0x04)
	float MaxTimeToStartAttack; // 0x90(0x04)
	char UnknownData_94[0x4]; // 0x94(0x04)
	struct UAnimSequence* AttackAnim; // 0x98(0x08)
	float AttackAnimLength; // 0xa0(0x04)
	float TimeToPerformAttack; // 0xa4(0x04)
	struct UObject* AttackVFX; // 0xa8(0x08)
	float AttackVFXZOffset; // 0xb0(0x04)
	struct FName LoSTraceProfileName; // 0xb4(0x08)
	char UnknownData_BC[0x4]; // 0xbc(0x04)
	struct FAIDataProviderFloatValue LosTraceRadius; // 0xc0(0x30)
	struct TArray<struct FSwimAttackTargetShipImpulseData> ImpulseData; // 0xf0(0x10)
	struct FAIDataProviderIntValue MinDamageHolesToApply; // 0x100(0x30)
	struct FAIDataProviderIntValue MaxDamageHolesToApply; // 0x130(0x30)
	int32_t LevelsOfHullDamage; // 0x160(0x04)
	char UnknownData_164[0x4]; // 0x164(0x04)
	struct UClass* DamageCauserType; // 0x168(0x08)
	float AreaOfEffectOfShipHitAttack; // 0x170(0x04)
	char CollisionChannelForGunpowderKegs; // 0x174(0x01)
	char UnknownData_175[0x3]; // 0x175(0x03)
	struct FAIDataProviderFloatValue PlayerBiteRadius; // 0x178(0x30)
	struct FKnockBackInfo KnockbackParams; // 0x1a8(0x50)
	struct FAIDataProviderFloatValue PlayerBiteDamage; // 0x1f8(0x30)
	char UnknownData_228[0x10]; // 0x228(0x10)
	struct AShip* TargetShip; // 0x238(0x08)
};

// Class AthenaAI.BurrowEruptBase
// Size: 0x3c8 (Inherited: 0x3c8)
struct ABurrowEruptBase : AActor {
};

// Class AthenaAI.AIAnimationStateId
// Size: 0x28 (Inherited: 0x28)
struct UAIAnimationStateId : UObject {
};

// Class AthenaAI.SpawnerBehaviourStrategy
// Size: 0x48 (Inherited: 0x28)
struct USpawnerBehaviourStrategy : UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
};

// Class AthenaAI.AICreatureCharacterMovementComponent
// Size: 0x660 (Inherited: 0x590)
struct UAICreatureCharacterMovementComponent : UCharacterMovementComponent {
	struct TArray<struct FAIStrategyMovementProperties> AIStrategyMovementProperties; // 0x588(0x10)
	float BlendSpeed; // 0x598(0x04)
	bool bCreateDisturbance; // 0x59c(0x01)
	float DisturbanceSize; // 0x5a0(0x04)
	float DisturbanceVelocityScale; // 0x5a4(0x04)
	float OrientationBlendSpeed; // 0x5a8(0x04)
	float OrientationMaxPitch; // 0x5ac(0x04)
	float UpdateOrientationFrequency; // 0x5b0(0x04)
	float MinStairAngle; // 0x5b4(0x04)
	float MinStairVelocityDampen; // 0x5b8(0x04)
	struct TArray<struct UClass*> SubscribedStairClimbStrategies; // 0x5c0(0x10)
	char UnknownData_5D1[0x8f]; // 0x5d1(0x8f)
};

// Class AthenaAI.AICreatureCharacter
// Size: 0x810 (Inherited: 0x5e0)
struct AAICreatureCharacter : ACharacter {
	char UnknownData_5E0[0x58]; // 0x5e0(0x58)
	float DelayBeforeDestroying; // 0x638(0x04)
	float TimeBeforeFadingOut; // 0x63c(0x04)
	float PickupTime; // 0x640(0x04)
	struct FVector TooltipDisplayOffset; // 0x644(0x0c)
	struct UActionStateMachineComponent* ActionStateMachineComponent; // 0x650(0x08)
	struct UActionStatePriorityTableData* ActionStatePriorityTableData; // 0x658(0x08)
	struct UClass* ActionStateCreatorDefinition; // 0x660(0x08)
	struct UAthenaAIControllerParamsDataAsset* AIControllerParams; // 0x668(0x08)
	struct UInteractableComponent* InteractableComponent; // 0x670(0x08)
	struct UWaterHeightProviderComponent* WaterHeightProviderComponent; // 0x678(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitterComponent; // 0x680(0x08)
	struct URewindComponent* RewindComponent; // 0x688(0x08)
	struct UActionRulesComponent* ActionRulesComponent; // 0x690(0x08)
	char UnknownData_698[0x100]; // 0x698(0x100)
	struct UAICreatureCharacterMovementComponent* AICreatureCharacterMovementComponent; // 0x798(0x08)
	char UnknownData_7A0[0x68]; // 0x7a0(0x68)
	struct UClass* CurrentAIStrategy; // 0x808(0x08)

	void SetAIStrategy(struct UClass* InStrategy); // Function AthenaAI.AICreatureCharacter.SetAIStrategy // Native|Public|BlueprintCallable // @ game+0x3a57040
	void OnRep_CurrentAIStrategy(struct UClass* OldAIStrategy); // Function AthenaAI.AICreatureCharacter.OnRep_CurrentAIStrategy // Final|Native|Protected // @ game+0x3a56fa0
	void Multicast_DespawnRPC(); // Function AthenaAI.AICreatureCharacter.Multicast_DespawnRPC // Net|NetReliableNative|Event|NetMulticast|Public // @ game+0x3a56f80
	struct UClass* GetAIStrategy(); // Function AthenaAI.AICreatureCharacter.GetAIStrategy // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3a56ec0
};

// Class AthenaAI.AthenaAICharacterPathFollowingComponent
// Size: 0x2f0 (Inherited: 0x2b8)
struct UAthenaAICharacterPathFollowingComponent : UPathFollowingComponent {
	float ProportionOfTurnToMove; // 0x2b8(0x04)
	float MinAngleToTurnOnSpot; // 0x2bc(0x04)
	float ReachedGoalMaxSpeedToSlowDistanceFactor; // 0x2c0(0x04)
	float AbortMoveMaxSpeedToSlowDistanceFactor; // 0x2c4(0x04)
	char UnknownData_2C8[0x4]; // 0x2c8(0x04)
	float MinSlowDownSpeed; // 0x2cc(0x04)
	char UnknownData_2D0[0x20]; // 0x2d0(0x20)
};

// Class AthenaAI.AICreatureCharacterPathFollowingComponent
// Size: 0x320 (Inherited: 0x2f0)
struct UAICreatureCharacterPathFollowingComponent : UAthenaAICharacterPathFollowingComponent {
	float LandingAngle; // 0x2f0(0x04)
	float HopDistanceScale; // 0x2f4(0x04)
	float MaximumLandTime; // 0x2f8(0x04)
	float MinStairAngle; // 0x2fc(0x04)
	float MinStairVelocityDampen; // 0x300(0x04)
	char UnknownData_304[0x4]; // 0x304(0x04)
	struct TArray<struct UClass*> SubscribedStairClimbStrategies; // 0x308(0x10)
	char UnknownData_318[0x8]; // 0x318(0x08)
};

// Class AthenaAI.AICreatureMovementModifierInterface
// Size: 0x28 (Inherited: 0x28)
struct UAICreatureMovementModifierInterface : UInterface {
};

// Class AthenaAI.AICreatureMovementModifierParamsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UAICreatureMovementModifierParamsDataAsset : UDataAsset {
	float TurnRateMultiplier; // 0x28(0x04)
	float FlyingTurnRateMultiplier; // 0x2c(0x04)
	bool UseTighterTurningCircle; // 0x30(0x01)
	bool UseHighResNavMesh; // 0x31(0x01)
	char UnknownData_32[0x6]; // 0x32(0x06)
};

// Class AthenaAI.AICreatureSpline
// Size: 0x4e8 (Inherited: 0x3c8)
struct AAICreatureSpline : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct USkeletalMeshComponent* AICreatureMesh; // 0x3d0(0x08)
	struct USplineComponent* SplineComponent; // 0x3d8(0x08)
	char UnknownData_3E0[0x8]; // 0x3e0(0x08)
	bool ShouldBeTickEnabled; // 0x3e8(0x01)
	bool RequireStartEventToStartMovement; // 0x3e9(0x01)
	char UnknownData_3EA[0x2]; // 0x3ea(0x02)
	float CreatureSpeed; // 0x3ec(0x04)
	float GroundHeightInterpSpeed; // 0x3f0(0x04)
	bool FollowGroundHeight; // 0x3f4(0x01)
	char LineTraceChannel; // 0x3f5(0x01)
	char UnknownData_3F6[0xb2]; // 0x3f6(0xb2)
	struct UWwiseEvent* CreatureAudioMovementStarted; // 0x4a8(0x08)
	struct UWwiseEvent* CreatureAudioMovementCompleted; // 0x4b0(0x08)
	struct UWwiseEvent* CreatureAudioOnMovementCompletedAdditional; // 0x4b8(0x08)
	struct UWwiseObjectPoolWrapper* WwiseEmitterPool; // 0x4c0(0x08)
	char UnknownData_4C8[0x20]; // 0x4c8(0x20)

	void OnRep_ShouldTickBeEnabled(); // Function AthenaAI.AICreatureSpline.OnRep_ShouldTickBeEnabled // Final|Native|Private // @ game+0x3a57020
	void OnCreatureMovementStarted(); // Function AthenaAI.AICreatureSpline.OnCreatureMovementStarted // Event|Protected|BlueprintEvent // @ game+0x1848130
	void OnCreatureMovementCompleted(); // Function AthenaAI.AICreatureSpline.OnCreatureMovementCompleted // Event|Protected|BlueprintEvent // @ game+0x1848130
	void BeginCreatureMovement(); // Function AthenaAI.AICreatureSpline.BeginCreatureMovement // Final|Native|Protected|BlueprintCallable // @ game+0x3a56ea0
};

// Class AthenaAI.LimitedInteractableAICreatureSpline
// Size: 0x568 (Inherited: 0x4e8)
struct ALimitedInteractableAICreatureSpline : AAICreatureSpline {
	char UnknownData_4E8[0x8]; // 0x4e8(0x08)
	struct UInteractableComponent* InteractableComponent; // 0x4f0(0x08)
	struct UActionRulesComponent* ActionRulesComponent; // 0x4f8(0x08)
	struct FLimitedInteractbaleAICreatureSplineInteractionParams InteractionParams; // 0x500(0x50)
	struct UClass* PromptCounterKey; // 0x550(0x08)
	int32_t MaxInteractCount; // 0x558(0x04)
	char UnknownData_55C[0x8]; // 0x55c(0x08)
	struct FPlayerStat StatToFireOnInteraction; // 0x564(0x04)

	void OnInteractionStartedClient(); // Function AthenaAI.LimitedInteractableAICreatureSpline.OnInteractionStartedClient // Event|Protected|BlueprintEvent // @ game+0x1848130
	void OnInteractionCompletedServer(struct AActor* PlayerCharacter); // Function AthenaAI.LimitedInteractableAICreatureSpline.OnInteractionCompletedServer // Event|Protected|BlueprintEvent // @ game+0x1848130
	void OnInteractionCompletedClient(); // Function AthenaAI.LimitedInteractableAICreatureSpline.OnInteractionCompletedClient // Event|Protected|BlueprintEvent // @ game+0x1848130
	void OnInteractionCancelledClient(); // Function AthenaAI.LimitedInteractableAICreatureSpline.OnInteractionCancelledClient // Event|Protected|BlueprintEvent // @ game+0x1848130
	void InteractCountRetrieved(int32_t InInteractedCount); // Function AthenaAI.LimitedInteractableAICreatureSpline.InteractCountRetrieved // Final|Native|Protected|BlueprintCallable // @ game+0x3a56f00
};

// Class AthenaAI.BehaviourTreeInterruptionInterface
// Size: 0x28 (Inherited: 0x28)
struct UBehaviourTreeInterruptionInterface : UInterface {
};

// Class AthenaAI.CreatureSplineAnimationInstance
// Size: 0x460 (Inherited: 0x440)
struct UCreatureSplineAnimationInstance : UAnimInstance {
	char UnknownData_440[0x18]; // 0x440(0x18)
	bool IsCreatureMoving; // 0x458(0x01)
	char UnknownData_459[0x3]; // 0x459(0x03)
	float CreatureSpeed; // 0x45c(0x04)
};

// Class AthenaAI.ForcedIdleBehaviourInterface
// Size: 0x28 (Inherited: 0x28)
struct UForcedIdleBehaviourInterface : UInterface {
};

// Class AthenaAI.AIItemParameterInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIItemParameterInterface : UInterface {
};

// Class AthenaAI.AthenaAIDamageModifierBase
// Size: 0x30 (Inherited: 0x28)
struct UAthenaAIDamageModifierBase : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class AthenaAI.AthenaAIControllerSharedParamValuesDataAsset
// Size: 0xa8 (Inherited: 0x28)
struct UAthenaAIControllerSharedParamValuesDataAsset : UDataAsset {
	bool OverrideMeshScale; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float MeshScale; // 0x2c(0x04)
	bool OverrideCurrentTargetPerceivedNotVisibleAge; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float CurrentTargetPerceivedNotVisibleAge; // 0x34(0x04)
	struct TArray<struct FAthenaAIControllerSenseSettingOverride> AIStrategySenseSettingOverrides; // 0x38(0x10)
	struct FAthenaAIControllerHealthCustomisation HealthCustomisationValues; // 0x48(0x0c)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct TArray<struct FAthenaAIControllerParamValue> InitialBlackboardValues; // 0x58(0x10)
	struct TArray<struct FAthenaAIControllerParamValue> NamedControllerParams; // 0x68(0x10)
	struct TArray<struct FAthenaAIControllerFeatureToggledParams> FeatureToggleNamedParamOverrides; // 0x78(0x10)
	struct TArray<struct FAthenaAIControllerWeightedRangesParamValue> NamedWeightedRangesControllerParams; // 0x88(0x10)
	struct TArray<struct UAthenaAIDamageModifierBase*> DamageModifiers; // 0x98(0x10)
};

// Class AthenaAI.AthenaAIControllerParamsDataAsset
// Size: 0x138 (Inherited: 0x28)
struct UAthenaAIControllerParamsDataAsset : UDataAsset {
	struct FAthenaAIControllerSenseSettings DefaultSenseSettings; // 0x28(0x14)
	float AutoSuccessRangeFromLastSeenLocation; // 0x3c(0x04)
	float DefaultPerceivedNotVisibleAge; // 0x40(0x04)
	bool CanTargetNotSeenPerceivedActors; // 0x44(0x01)
	bool OverrideTeamID; // 0x45(0x01)
	char TeamID; // 0x46(0x01)
	char UnknownData_47[0x1]; // 0x47(0x01)
	float TargetSwitchScoreTolerance; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct TArray<float> TargetLoadWeightingBias; // 0x50(0x10)
	float DistanceToStartTargetPickingDecrease; // 0x60(0x04)
	float TargetPickingDistScoreAtMaxSightRange; // 0x64(0x04)
	float VisionAngleToStartTargetPickingDecrease; // 0x68(0x04)
	float TargetPickingFacingScoreAtMaxPeripheralVisionAngle; // 0x6c(0x04)
	bool UseDamageAsFactorInTargetScore; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	struct FAthenaAIControllerDamageTargetScoreFromPerceivedTarget DamageTargetScores; // 0x74(0x14)
	struct TArray<struct UAthenaAIControllerSharedParamValuesDataAsset*> SharedParamValues; // 0x88(0x10)
	struct TArray<struct FAthenaAISharedControllerParamToggledValues> AdditionalToggleableSharedParamValues; // 0x98(0x10)
	bool IndividualOverrideMeshScale; // 0xa8(0x01)
	char UnknownData_A9[0x3]; // 0xa9(0x03)
	float IndividualMeshScale; // 0xac(0x04)
	struct FAthenaAIControllerHealthCustomisation IndividualHealthCustomisationValues; // 0xb0(0x0c)
	char UnknownData_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FAthenaAIControllerParamValue> IndividualInitialBlackboardValues; // 0xc0(0x10)
	struct TArray<struct FAthenaAIControllerParamValue> IndividualNamedControllerParams; // 0xd0(0x10)
	struct TArray<struct FAthenaAIControllerFeatureToggledParams> FeatureToggleIndividualNamedParamOverrides; // 0xe0(0x10)
	struct TArray<struct FAthenaAIControllerWeightedRangesParamValue> IndividualNamedWeightedRangesControllerParams; // 0xf0(0x10)
	struct TArray<struct FAthenaAIControllerSenseSettingOverride> IndividualAIStrategySenseSettingOverrides; // 0x100(0x10)
	bool IndividualOverrideCurrentTargetPerceivedNotVisibleAge; // 0x110(0x01)
	char UnknownData_111[0x3]; // 0x111(0x03)
	float IndividualCurrentTargetPerceivedNotVisibleAge; // 0x114(0x04)
	struct TArray<struct UAthenaAIDamageModifierBase*> DamageModifiers; // 0x118(0x10)
	struct UAthenaAICrewStrengthDynamicParamsDataAsset* CrewStrengthDynamicParams; // 0x128(0x08)
	struct FName FeatureName; // 0x130(0x08)
};

// Class AthenaAI.AthenaAICharacterControllerSharedParamValuesDataAsset
// Size: 0x188 (Inherited: 0xa8)
struct UAthenaAICharacterControllerSharedParamValuesDataAsset : UAthenaAIControllerSharedParamValuesDataAsset {
	bool OverrideUseRVOAvoidance; // 0xa8(0x01)
	bool UseRVOAvoidance; // 0xa9(0x01)
	bool OverridePrioritiseInteractablesBeforeEnemies; // 0xaa(0x01)
	bool PrioritiseInteractablesBeforeEnemies; // 0xab(0x01)
	char UnknownData_AC[0x4]; // 0xac(0x04)
	struct UCurveFloat* DistanceInMToCannonShotHitChanceCurve; // 0xb0(0x08)
	struct TArray<struct FAIStrategyMovementProperties> AIStrategyMovementProperties; // 0xb8(0x10)
	struct TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> ItemCategoryAIStrategyMovementPropertiesOverrides; // 0xc8(0x10)
	struct FAthenaAICharacterCannonTargetingParams CannonTargetingParams; // 0xd8(0x10)
	struct TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> WieldedItemProjectileEffectivenessProperties; // 0xe8(0x10)
	struct TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> WieldedItemOverrideNamedControllerParams; // 0xf8(0x10)
	struct TArray<struct FAthenaAIItemParamValue> NamedItemParams; // 0x108(0x10)
	struct TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> SpawnItemDescForItemCategories; // 0x118(0x10)
	struct TArray<struct UAthenaAIAbilityParams*> AIAbilityParams; // 0x128(0x10)
	struct TArray<struct FAthenaAIAbilityDamageStage> IndividualDamageBasedAIAbilityStages; // 0x138(0x10)
	struct TArray<struct FAthenaAIEngageEnemyData> NonItemEngageOptions; // 0x148(0x10)
	struct FStringAssetReference AnimationDataOverrideAsset; // 0x158(0x10)
	struct FStringAssetReference CustomAnimationAsset; // 0x168(0x10)
	bool OverrideNoInitialItem; // 0x178(0x01)
	bool NoInitialItem; // 0x179(0x01)
	bool OverrideBeginFleeing; // 0x17a(0x01)
	bool BeginFleeing; // 0x17b(0x01)
	char UnknownData_17C[0x4]; // 0x17c(0x04)
	struct UEnvQuery* FleeingEQS; // 0x180(0x08)
};

// Class AthenaAI.AthenaAICharacterControllerParamsDataAsset
// Size: 0x230 (Inherited: 0x138)
struct UAthenaAICharacterControllerParamsDataAsset : UAthenaAIControllerParamsDataAsset {
	bool IndividualOverrideUseRVOAvoidance; // 0x138(0x01)
	bool IndividualUseRVOAvoidance; // 0x139(0x01)
	bool IndividualOverridePrioritiseInteractablesBeforeEnemies; // 0x13a(0x01)
	bool IndividualPrioritiseInteractablesBeforeEnemies; // 0x13b(0x01)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
	struct UCurveFloat* IndividualDistanceInMToCannonShotHitChanceCurve; // 0x140(0x08)
	struct TArray<struct FAIStrategyMovementProperties> IndividualAIStrategyMovementProperties; // 0x148(0x10)
	struct TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> IndividualItemCategoryAIStrategyMovementPropertiesOverrides; // 0x158(0x10)
	struct FAthenaAICharacterCannonTargetingParams IndividualCannonTargetingParams; // 0x168(0x10)
	struct TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> IndividualWieldedItemProjectileEffectivenessProperties; // 0x178(0x10)
	struct TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> IndividualWieldedItemOverrideNamedControllerParams; // 0x188(0x10)
	struct TArray<struct FAthenaAIItemParamValue> IndividualNamedItemParams; // 0x198(0x10)
	struct TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> IndividualSpawnItemDescForItemCategories; // 0x1a8(0x10)
	bool UseDamageBasedAbilityStages; // 0x1b8(0x01)
	char UnknownData_1B9[0x7]; // 0x1b9(0x07)
	struct TArray<float> HealthStages; // 0x1c0(0x10)
	struct TArray<struct FAthenaAIAbilityDamageStage> IndividualDamageBasedAIAbilityStages; // 0x1d0(0x10)
	struct TArray<struct UAthenaAIAbilityParams*> IndividualAIAbilityParams; // 0x1e0(0x10)
	struct TArray<struct FAthenaAIEngageEnemyData> IndividualNonItemEngageOptions; // 0x1f0(0x10)
	struct FStringAssetReference IndividualAnimationDataOverrideAsset; // 0x200(0x10)
	struct FStringAssetReference IndividualCustomAnimationAsset; // 0x210(0x10)
	bool IndividualOverrideNoInitialItem; // 0x220(0x01)
	bool IndividualNoInitialItem; // 0x221(0x01)
	bool IndividualOverrideBeginFleeing; // 0x222(0x01)
	bool IndividualBeginFleeing; // 0x223(0x01)
	char UnknownData_224[0x4]; // 0x224(0x04)
	struct UEnvQuery* IndividualFleeingEQS; // 0x228(0x08)
};

// Class AthenaAI.AthenaAIAmmoDataAsset
// Size: 0xd0 (Inherited: 0x28)
struct UAthenaAIAmmoDataAsset : UDataAsset {
	char UnknownData_28[0x90]; // 0x28(0x90)
	struct TArray<struct FAthenaAICharacterControllerWeightedAmmoType> AmmoWeights; // 0xb8(0x10)
	struct FName FeatureName; // 0xc8(0x08)
};

// Class AthenaAI.AIAmmoRankProgression
// Size: 0x40 (Inherited: 0x28)
struct UAIAmmoRankProgression : UDataAsset {
	struct TArray<struct FAIAmmoRankMapping> RankMappings; // 0x28(0x10)
	int32_t NumberOfRanks; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class AthenaAI.AIAmmoProgressionTypeList
// Size: 0x38 (Inherited: 0x28)
struct UAIAmmoProgressionTypeList : UDataAsset {
	struct TArray<struct UAIAmmoRankProgression*> AllProgressions; // 0x28(0x10)
};

// Class AthenaAI.AIAmmoTypeList
// Size: 0x40 (Inherited: 0x28)
struct UAIAmmoTypeList : UDataAsset {
	struct TArray<struct UAthenaAIAmmoDataAsset*> AllAmmo; // 0x28(0x10)
	struct UAthenaAIAmmoDataAsset* DefaultAmmo; // 0x38(0x08)
};

// Class AthenaAI.AIAnimationStateInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIAnimationStateInterface : UInterface {
};

// Class AthenaAI.AIChargeUpInterruptedStatus
// Size: 0x30 (Inherited: 0x30)
struct UAIChargeUpInterruptedStatus : UStatusBase {
};

// Class AthenaAI.AIClassId
// Size: 0x28 (Inherited: 0x28)
struct UAIClassId : UObject {
};

// Class AthenaAI.AIPartsDesc
// Size: 0x30 (Inherited: 0x28)
struct UAIPartsDesc : UDataAsset {
	struct FAIPartId AIPartId; // 0x28(0x08)
};

// Class AthenaAI.AIPartsCategory
// Size: 0x68 (Inherited: 0x28)
struct UAIPartsCategory : UDataAsset {
	struct TArray<struct UAIPartsDesc*> Parts; // 0x28(0x10)
	int32_t NextPartsIndex; // 0x38(0x04)
	bool UseWeightedArray; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	struct FName UseWeightedArrayFeatureName; // 0x40(0x08)
	struct FWeightedProbabilityRange WeightedArray; // 0x48(0x20)
};

// Class AthenaAI.AIPartsServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIPartsServiceInterface : UInterface {
};

// Class AthenaAI.AIEncounterServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIEncounterServiceInterface : UInterface {

	void RegisterLoadedSkillsetProgression(struct UAISkillsetRankProgression* Progression); // Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression // Native|Public|BlueprintCallable // @ game+0x3cc25b0
	void RegisterLoadedSkillset(struct UAthenaAIControllerParamsDataAsset* Skillset); // Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset // Native|Public|BlueprintCallable // @ game+0x3cc2390
	void RegisterLoadedLoadout(struct ULoadoutAsset* Loadout); // Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout // Native|Public|BlueprintCallable // @ game+0x3cc2170
	void RegisterLoadedForm(struct UAthenaAIFormDataAsset* Form); // Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm // Native|Public|BlueprintCallable // @ game+0x3cc1f50
	void RegisterLoadedEncounter(struct UAIEncounterSettings* Encounter); // Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter // Native|Public|BlueprintCallable // @ game+0x3cc1d30
};

// Class AthenaAI.AIClassIdTypeList
// Size: 0x38 (Inherited: 0x28)
struct UAIClassIdTypeList : UDataAsset {
	struct TArray<struct UClass*> AllClassIds; // 0x28(0x10)
};

// Class AthenaAI.AIColorVariantPool
// Size: 0x38 (Inherited: 0x28)
struct UAIColorVariantPool : UDataAsset {
	struct TArray<struct FStringAssetReference> AvailableColors; // 0x28(0x10)
};

// Class AthenaAI.AICombatEncounterInterface
// Size: 0x28 (Inherited: 0x28)
struct UAICombatEncounterInterface : UInterface {

	void OnVulnerabilityStateEntered(); // Function AthenaAI.AICombatEncounterInterface.OnVulnerabilityStateEntered // Native|Event|Public|BlueprintEvent // @ game+0x3cc1b00
};

// Class AthenaAI.AIDeathInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIDeathInterface : UInterface {
};

// Class AthenaAI.AIDebugVisualisationComponent
// Size: 0x118 (Inherited: 0xc8)
struct UAIDebugVisualisationComponent : UActorComponent {
	struct TArray<struct FAIDebugVisualisationLine> Lines; // 0xc8(0x10)
	struct TArray<struct FAIDebugVisualisationBox> Boxes; // 0xd8(0x10)
	struct TArray<struct FAIDebugVisualisationCylinder> Cylinders; // 0xe8(0x10)
	struct TArray<struct FAIDebugVisualisationSphere> Spheres; // 0xf8(0x10)
	struct TArray<struct FAIDebugVisualisationCone> Cones; // 0x108(0x10)
};

// Class AthenaAI.AIInteractableInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIInteractableInterface : UInterface {
};

// Class AthenaAI.AIElectricProjectileInterruptedStatus
// Size: 0x30 (Inherited: 0x30)
struct UAIElectricProjectileInterruptedStatus : UStatusBase {
};

// Class AthenaAI.AIEncounterGenerationRecipe
// Size: 0x98 (Inherited: 0x28)
struct UAIEncounterGenerationRecipe : UDataAsset {
	struct TArray<struct FAIFormVarietyEntry> Forms; // 0x28(0x10)
	struct FStringAssetReference SkillsetProgression; // 0x38(0x10)
	struct FStringAssetReference ItemDropProgression; // 0x48(0x10)
	struct FTargetSkillsetProgressionPair TargetSkillsetOverrides; // 0x58(0x20)
	struct FTargetItemDropProgressionPair TargetItemDropOverrides; // 0x78(0x20)
};

// Class AthenaAI.AIEncounterGenerationRecipeRankOrderList
// Size: 0x48 (Inherited: 0x28)
struct UAIEncounterGenerationRecipeRankOrderList : UDataAsset {
	struct TArray<struct UAIEncounterGenerationRecipe*> Recipes; // 0x28(0x10)
	struct TArray<struct FAIEncounterGenerationRecipeFeatureBasedRankOrderList> FeatureBasedRecipeLists; // 0x38(0x10)
};

// Class AthenaAI.AIEncounterGenerationRecipeTypeList
// Size: 0x38 (Inherited: 0x28)
struct UAIEncounterGenerationRecipeTypeList : UDataAsset {
	struct TArray<struct UAIEncounterGenerationRecipe*> AllRecipes; // 0x28(0x10)
};

// Class AthenaAI.AIEncounterGenerationServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIEncounterGenerationServiceInterface : UInterface {
};

// Class AthenaAI.AIEncounterGenerationService
// Size: 0x450 (Inherited: 0x3c8)
struct AAIEncounterGenerationService : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct UAIEncounterGenerationRecipeTypeList* GenerationRecipes; // 0x3d0(0x08)
	TScriptInterface<struct UAIEncounterServiceInterface> EncounterService; // 0x3d8(0x10)
	char UnknownData_3E8[0x68]; // 0x3e8(0x68)
};

// Class AthenaAI.AIFormRankProgression
// Size: 0x40 (Inherited: 0x28)
struct UAIFormRankProgression : UDataAsset {
	struct TArray<struct FAIFormRankMapping> RankMappings; // 0x28(0x10)
	int32_t NumberOfRanks; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class AthenaAI.AIFormProgressionTypeList
// Size: 0x38 (Inherited: 0x28)
struct UAIFormProgressionTypeList : UDataAsset {
	struct TArray<struct UAIFormRankProgression*> AllProgressions; // 0x28(0x10)
};

// Class AthenaAI.AIFormTypeList
// Size: 0x40 (Inherited: 0x28)
struct UAIFormTypeList : UDataAsset {
	struct TArray<struct UAthenaAIFormDataAsset*> AllForms; // 0x28(0x10)
	struct UAthenaAIFormDataAsset* DefaultForm; // 0x38(0x08)
};

// Class AthenaAI.AILoadoutProgressionTypeList
// Size: 0x38 (Inherited: 0x28)
struct UAILoadoutProgressionTypeList : UDataAsset {
	struct TArray<struct UAILoadoutRankProgression*> AllProgressions; // 0x28(0x10)
};

// Class AthenaAI.AILoadoutTypeList
// Size: 0x38 (Inherited: 0x28)
struct UAILoadoutTypeList : UDataAsset {
	struct TArray<struct ULoadoutAsset*> AllLoadouts; // 0x28(0x10)
};

// Class AthenaAI.AISkillsetProgressionTypeList
// Size: 0x38 (Inherited: 0x28)
struct UAISkillsetProgressionTypeList : UDataAsset {
	struct TArray<struct UAISkillsetRankProgression*> AllProgressions; // 0x28(0x10)
};

// Class AthenaAI.AISkillsetTypeList
// Size: 0x38 (Inherited: 0x28)
struct UAISkillsetTypeList : UDataAsset {
	struct TArray<struct UAthenaAIControllerParamsDataAsset*> AllSkillsets; // 0x28(0x10)
};

// Class AthenaAI.AIPartsCategoryTypeList
// Size: 0x38 (Inherited: 0x28)
struct UAIPartsCategoryTypeList : UDataAsset {
	struct TArray<struct UAIPartsCategory*> AllPartsCategories; // 0x28(0x10)
};

// Class AthenaAI.AIEncounterService
// Size: 0x798 (Inherited: 0x3c8)
struct AAIEncounterService : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct TArray<struct FAIPartsCategoryMapping> DefaultPartsCategories; // 0x3d0(0x10)
	struct TArray<struct FAIPartsCategoryFormMapping> FormPartsCategories; // 0x3e0(0x10)
	struct UAIAmmoTypeList* Ammo; // 0x3f0(0x08)
	struct UAIAmmoProgressionTypeList* AmmoProgressions; // 0x3f8(0x08)
	struct UAIFormTypeList* Forms; // 0x400(0x08)
	struct UAIFormProgressionTypeList* FormProgressions; // 0x408(0x08)
	struct UAILoadoutTypeList* Loadouts; // 0x410(0x08)
	struct UAILoadoutProgressionTypeList* LoadoutProgressions; // 0x418(0x08)
	struct UAISkillsetTypeList* Skillsets; // 0x420(0x08)
	struct UAISkillsetProgressionTypeList* SkillsetProgressions; // 0x428(0x08)
	struct UAIClassIdTypeList* ClassIds; // 0x430(0x08)
	struct UAIPartsCategoryTypeList* PartsCategories; // 0x438(0x08)
	struct UAIColorVariantPool* TeamColors; // 0x440(0x08)
	struct UAIItemDropComponentList* AIItemDropSpawners; // 0x448(0x08)
	struct UAIItemDropComponentRankProgressionList* AIItemDropSpawnerProgressions; // 0x450(0x08)
	struct TArray<struct UAIEncounterSettings*> DebugSpawnableEncounterSettings; // 0x458(0x10)
	char UnknownData_468[0x330]; // 0x468(0x330)

	void RegisterLoadedSkillsetProgression(struct UAISkillsetRankProgression* Progression); // Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression // Native|Public|BlueprintCallable // @ game+0x3cc24a0
	void RegisterLoadedSkillset(struct UAthenaAIControllerParamsDataAsset* Skillset); // Function AthenaAI.AIEncounterService.RegisterLoadedSkillset // Native|Public|BlueprintCallable // @ game+0x3cc2280
	void RegisterLoadedLoadout(struct ULoadoutAsset* Loadout); // Function AthenaAI.AIEncounterService.RegisterLoadedLoadout // Native|Public|BlueprintCallable // @ game+0x3cc2060
	void RegisterLoadedForm(struct UAthenaAIFormDataAsset* Form); // Function AthenaAI.AIEncounterService.RegisterLoadedForm // Native|Public|BlueprintCallable // @ game+0x3cc1e40
	void RegisterLoadedEncounter(struct UAIEncounterSettings* Encounter); // Function AthenaAI.AIEncounterService.RegisterLoadedEncounter // Native|Public|BlueprintCallable // @ game+0x3cc1c10
};

// Class AthenaAI.AISkillsetRankProgression
// Size: 0x40 (Inherited: 0x28)
struct UAISkillsetRankProgression : UDataAsset {
	struct TArray<struct FAISkillsetRankMapping> RankMappings; // 0x28(0x10)
	int32_t NumberOfRanks; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class AthenaAI.AIEncounterSettings
// Size: 0x60 (Inherited: 0x28)
struct UAIEncounterSettings : UDataAsset {
	struct UClass* PawnClass; // 0x28(0x20)
	struct UClass* AIClass; // 0x48(0x08)
	struct FStringAssetReference TeamColor; // 0x50(0x10)
};

// Class AthenaAI.AIEncounterSettingsFixed
// Size: 0x120 (Inherited: 0x60)
struct UAIEncounterSettingsFixed : UAIEncounterSettings {
	struct FStringAssetReference SpecificSkillset; // 0x60(0x10)
	struct FFeatureToggledAIEncounterSpecificSkillSetCollection ToggledSpecificSkillsetOverrides; // 0x70(0x10)
	struct FStringAssetReference Loadout; // 0x80(0x10)
	struct FStringAssetReference Form; // 0x90(0x10)
	struct FStringAssetReference Ammo; // 0xa0(0x10)
	struct FName DioramaRole; // 0xb0(0x08)
	struct FText LocalisableName; // 0xb8(0x38)
	struct FEncounterParams EncounterTrackingParams; // 0xf0(0x0c)
	char UnknownData_FC[0x4]; // 0xfc(0x04)
	struct UClass* ItemDropComponentClass; // 0x100(0x20)
};

// Class AthenaAI.AIEncounterSettingsRankProgression
// Size: 0xc0 (Inherited: 0x60)
struct UAIEncounterSettingsRankProgression : UAIEncounterSettings {
	struct FStringAssetReference SkillsetProgression; // 0x60(0x10)
	struct FStringAssetReference LoadoutProgression; // 0x70(0x10)
	struct FStringAssetReference FormProgression; // 0x80(0x10)
	struct FStringAssetReference AmmoProgression; // 0x90(0x10)
	struct FStringAssetReference ItemDropComponentProgression; // 0xa0(0x10)
	struct FEncounterParams EncounterTrackingParams; // 0xb0(0x0c)
	char UnknownData_BC[0x4]; // 0xbc(0x04)
};

// Class AthenaAI.AIFormItemSpawnRequirement
// Size: 0x60 (Inherited: 0x50)
struct UAIFormItemSpawnRequirement : USpawnRequirement {
	struct TArray<struct UAthenaAIFormDataAsset*> AllowedForms; // 0x50(0x10)
};

// Class AthenaAI.AIIdentifierOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIIdentifierOwnerInterface : UInterface {
};

// Class AthenaAI.AIInteractableOperatorInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIInteractableOperatorInterface : UInterface {
};

// Class AthenaAI.AIItemDropComponentList
// Size: 0x38 (Inherited: 0x28)
struct UAIItemDropComponentList : UDataAsset {
	struct TArray<struct UClass*> AllSpawners; // 0x28(0x10)
};

// Class AthenaAI.AIItemDropComponentRankProgressionList
// Size: 0x38 (Inherited: 0x28)
struct UAIItemDropComponentRankProgressionList : UDataAsset {
	struct TArray<struct UAIItemSpawnRankProgression*> AllProgressions; // 0x28(0x10)
};

// Class AthenaAI.AIItemSpawnDataSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIItemSpawnDataSourceInterface : UInterface {
};

// Class AthenaAI.AIItemSpawnDataSourceComponent
// Size: 0x2f0 (Inherited: 0x2e0)
struct UAIItemSpawnDataSourceComponent : USceneComponent {
	char UnknownData_2E0[0x8]; // 0x2e0(0x08)
	struct UItemSpawnTransformWithRandomQuantityDataAssset* ItemSpawnDataAsset; // 0x2e8(0x08)
};

// Class AthenaAI.AIItemSpawnRankProgression
// Size: 0x40 (Inherited: 0x28)
struct UAIItemSpawnRankProgression : UDataAsset {
	struct TArray<struct FAIDropSpawnerRankMapping> RankMappings; // 0x28(0x10)
	int32_t NumberOfRanks; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class AthenaAI.AILoadoutInterface
// Size: 0x28 (Inherited: 0x28)
struct UAILoadoutInterface : UInterface {
};

// Class AthenaAI.AILoadoutItemSpawnRequirement
// Size: 0x60 (Inherited: 0x50)
struct UAILoadoutItemSpawnRequirement : USpawnRequirement {
	struct TArray<struct ULoadoutAsset*> AllowedLoadouts; // 0x50(0x10)
};

// Class AthenaAI.AILoadoutRankProgression
// Size: 0x40 (Inherited: 0x28)
struct UAILoadoutRankProgression : UDataAsset {
	struct TArray<struct FAILoadoutRankMapping> RankMappings; // 0x28(0x10)
	int32_t NumberOfRanks; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class AthenaAI.AILoadoutWithNonStorableInterface
// Size: 0x28 (Inherited: 0x28)
struct UAILoadoutWithNonStorableInterface : UInterface {
};

// Class AthenaAI.AIManagerBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAIManagerBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	struct AItemInfo* SpawnItemFromAI(struct APawn* Pawn, struct UClass* ItemDesc); // Function AthenaAI.AIManagerBlueprintFunctionLibrary.SpawnItemFromAI // Final|Native|Static|Public|BlueprintCallable // @ game+0x3cc35b0
	int32_t GetFrameCounter(); // Function AthenaAI.AIManagerBlueprintFunctionLibrary.GetFrameCounter // Final|Native|Static|Public|BlueprintCallable // @ game+0x3cc1660
	void AddNameplateToAIWithLocalisedName(struct AActor* Actor, struct FText DisplayName); // Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAIWithLocalisedName // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3cc0c80
	void AddNameplateToAI(struct AActor* Actor, struct FString DisplayName); // Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAI // Final|Native|Static|Public|BlueprintCallable // @ game+0x3cc0bb0
};

// Class AthenaAI.AIManagerServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIManagerServiceInterface : UInterface {

	void StartDespawnAI(struct APawn* AIActor, char DeathType); // Function AthenaAI.AIManagerServiceInterface.StartDespawnAI // Native|Public|BlueprintCallable // @ game+0x3cc3740
	int32_t GetNumOfSpawnedPawns(); // Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3cc16c0
};

// Class AthenaAI.AthenaAITypeListDataAsset
// Size: 0x48 (Inherited: 0x28)
struct UAthenaAITypeListDataAsset : UDataAsset {
	struct TArray<struct FAITypeData> AITypes; // 0x28(0x10)
	struct TArray<struct FStringClassReference> AdditionalAIActors; // 0x38(0x10)
};

// Class AthenaAI.AISpawnWaveSequence
// Size: 0x40 (Inherited: 0x28)
struct UAISpawnWaveSequence : UDataAsset {
	struct TArray<struct FAISpawnerWave> Waves; // 0x28(0x10)
	struct FName FeatureName; // 0x38(0x08)
};

// Class AthenaAI.AISpawnWaveSequenceRankProgression
// Size: 0x40 (Inherited: 0x28)
struct UAISpawnWaveSequenceRankProgression : UDataAsset {
	struct TArray<struct FAISpawnWaveSequenceRankMapping> RankMappings; // 0x28(0x10)
	int32_t NumberOfRanks; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class AthenaAI.AIWeightedProbabilityRangeOfRangesAsset
// Size: 0x68 (Inherited: 0x28)
struct UAIWeightedProbabilityRangeOfRangesAsset : UDataAsset {
	float RespawnChance; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FWeightedProbabilityRangeOfRanges RespawnTimerRanges; // 0x30(0x30)
	struct FName FeatureName; // 0x60(0x08)
};

// Class AthenaAI.AIWeightedProbabilityRangeOfRangesRankProgression
// Size: 0x40 (Inherited: 0x28)
struct UAIWeightedProbabilityRangeOfRangesRankProgression : UDataAsset {
	struct TArray<struct FAIWeightedProbabilityRangeOfRangesRankMapping> RankMappings; // 0x28(0x10)
	int32_t NumberOfRanks; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class AthenaAI.AIPlayerTrackerObservedInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIPlayerTrackerObservedInterface : UInterface {
};

// Class AthenaAI.AIPlayerTrackerObserverInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIPlayerTrackerObserverInterface : UInterface {
};

// Class AthenaAI.AISpawnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAISpawnerInterface : UAIPlayerTrackerObserverInterface {
};

// Class AthenaAI.AISpawnRequestResultLoggerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAISpawnRequestResultLoggerInterface : UInterface {
};

// Class AthenaAI.AthenaAISettings
// Size: 0xe0 (Inherited: 0x38)
struct UAthenaAISettings : UDeveloperSettings {
	struct FStringAssetReference AITypesAsset; // 0x38(0x10)
	struct FStringAssetReference AISpawnContextListAsset; // 0x48(0x10)
	int32_t FallbackAIDifficultyRank; // 0x58(0x04)
	int32_t MaxNumOfSpawnedActors; // 0x5c(0x04)
	int32_t MaxPlayerEquivalentAIsPerRegion; // 0x60(0x04)
	int32_t MaxWorldAICostUnitsForWorld; // 0x64(0x04)
	int32_t AIRegionCostUnitsForPlayer; // 0x68(0x04)
	float CharacterNetRelevancy; // 0x6c(0x04)
	float CharacterRegionDensityCheckTimer; // 0x70(0x04)
	float CharacterWorldDensityCheckTimer; // 0x74(0x04)
	float DistanceToPlayerToRaiseSpawnPriority; // 0x78(0x04)
	float MinRetryingCanSpawnRequestTime; // 0x7c(0x04)
	float MaxRetryingCanSpawnRequestTime; // 0x80(0x04)
	float MinRetryingLocationCheckTime; // 0x84(0x04)
	float MaxRetryingLocationCheckTime; // 0x88(0x04)
	float CharacterAINoiseTickInterval; // 0x8c(0x04)
	float PeriodicAINoiseComponentTickInterval; // 0x90(0x04)
	float FaunaPlayerProximityDormancyRange; // 0x94(0x04)
	float FaunaPlayerProximityTickTime; // 0x98(0x04)
	float FaunaTimeOutOfPlayerProximityForDormancy; // 0x9c(0x04)
	float DefaultNavAgentCapsuleRadius; // 0xa0(0x04)
	float DefaultNavAgentCapsuleHalfHeight; // 0xa4(0x04)
	float MinDelayBeforeRetryingUnsuccessfulWave; // 0xa8(0x04)
	float MaxDelayBeforeRetryingUnsuccessfulWave; // 0xac(0x04)
	struct FStringAssetReference AIEncounterServiceAssetClassFileLocation; // 0xb0(0x10)
	struct FStringAssetReference AIEncounterGenerationServiceAssetClassFileLocation; // 0xc0(0x10)
	struct FName AICharacterWaterInteractionCollisionProfileName; // 0xd0(0x08)
	float AICountTelemetryEventFrequency; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
};

// Class AthenaAI.AISpawnContextId
// Size: 0x30 (Inherited: 0x28)
struct UAISpawnContextId : UObject {
	int32_t Weighting; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class AthenaAI.CustomizableAIManagerInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomizableAIManagerInterface : UInterface {
};

// Class AthenaAI.AIManagerService
// Size: 0xb50 (Inherited: 0x3c8)
struct AAIManagerService : AActor {
	char UnknownData_3C8[0x108]; // 0x3c8(0x108)
	struct TArray<struct UClass*> LoadedAIPawnClasses; // 0x4d0(0x10)
	struct TArray<struct UClass*> LoadedAIItemDropComponentClasses; // 0x4e0(0x10)
	char UnknownData_4F0[0x8]; // 0x4f0(0x08)
	struct AAmbientWaterSpawnerManager* AmbientWaterSpawnerManager; // 0x4f8(0x08)
	char UnknownData_500[0x430]; // 0x500(0x430)
	struct TArray<struct UAIPlayerTracker*> PlayerTrackers; // 0x930(0x10)
	struct TArray<struct FCustomPlayersAITrackerData> CustomPlayersTrackerDatas; // 0x940(0x10)
	char UnknownData_950[0x100]; // 0x950(0x100)
	struct TArray<TScriptInterface<struct UAISpawnerInterface>> SpawnersPendingShutdown; // 0xa50(0x10)
	char UnknownData_A60[0xa8]; // 0xa60(0xa8)
	struct UAthenaAITypeListDataAsset* AITypeList; // 0xb08(0x08)
	struct UAISpawnContextList* AISpawnContextList; // 0xb10(0x08)
	char UnknownData_B18[0x38]; // 0xb18(0x38)

	void TickService(float DeltaSeconds); // Function AthenaAI.AIManagerService.TickService // Final|Native|Public|BlueprintCallable // @ game+0x3cc3830
	void StartDespawnAI(struct APawn* AIActor, char DeathType); // Function AthenaAI.AIManagerService.StartDespawnAI // Native|Public|BlueprintCallable // @ game+0x3cc3670
};

// Class AthenaAI.DebugAIManagerServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UDebugAIManagerServiceInterface : UInterface {

	void SetMaxNumOfSpawnedActors(int32_t InMaxNumOfSpawnedActors); // Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors // Native|Public|BlueprintCallable // @ game+0x3cc32c0
	void SetMaxAICostUnitsPerRegion(int32_t InMaxAICostUnitsPerRegion); // Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion // Native|Public|BlueprintCallable // @ game+0x3cc31b0
	void SetMaxAICostUnitsForWorld(int32_t InMaxAICostUnitsForWorld); // Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld // Native|Public|BlueprintCallable // @ game+0x3cc30a0
	void SetIgnoreCharacterLimits(bool Ignore); // Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits // Native|Public|BlueprintCallable // @ game+0x3cc2e70
	void SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority); // Function AthenaAI.DebugAIManagerServiceInterface.SetDistanceToPlayerToRaiseSpawnPriority // Native|Public|BlueprintCallable // @ game+0x3cc2d60
	void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer); // Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer // Native|Public|BlueprintCallable // @ game+0x3cc2bd0
	void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer); // Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer // Native|Public|BlueprintCallable // @ game+0x3cc2ad0
	void SetCharacterNetRelevancy(float InCloseByCharactersRadius); // Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy // Native|Public|BlueprintCallable // @ game+0x3cc29d0
	bool BlockAIAbility(struct UClass* InExclusive, bool InBlockState); // Function AthenaAI.DebugAIManagerServiceInterface.BlockAIAbility // Native|Public|BlueprintCallable // @ game+0x3cc0fd0
};

// Class AthenaAI.DebugAIManagerService
// Size: 0xc70 (Inherited: 0xb50)
struct ADebugAIManagerService : AAIManagerService {
	char UnknownData_B50[0x110]; // 0xb50(0x110)
	struct TArray<struct UClass*> BlockedAIAbilities; // 0xc60(0x10)

	void SetMaxNumOfSpawnedActors(int32_t InMaxNumOfSpawnedActors); // Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors // Native|Public|BlueprintCallable // @ game+0x3cc3230
	void SetMaxAICostUnitsPerRegion(int32_t InMaxAICostUnitsPerRegion); // Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion // Native|Public|BlueprintCallable // @ game+0x3cc3120
	void SetMaxAICostUnitsForWorld(int32_t InMaxAICostUnitsForWorld); // Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld // Native|Public|BlueprintCallable // @ game+0x3cc3010
	void SetIgnoreCharacterLimits(bool Ignore); // Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits // Native|Public|BlueprintCallable // @ game+0x3cc2de0
	void SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority); // Function AthenaAI.DebugAIManagerService.SetDistanceToPlayerToRaiseSpawnPriority // Native|Public|BlueprintCallable // @ game+0x3cc2ce0
	void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer); // Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer // Native|Public|BlueprintCallable // @ game+0x3cc2b50
	void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer); // Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer // Native|Public|BlueprintCallable // @ game+0x3cc2a50
	void SetCharacterNetRelevancy(float InCloseByCharactersRadius); // Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy // Native|Public|BlueprintCallable // @ game+0x3cc2950
	bool BlockAIAbility(struct UClass* InExclusive, bool InBlockState); // Function AthenaAI.DebugAIManagerService.BlockAIAbility // Native|Public|BlueprintCallable // @ game+0x3cc0f00
};

// Class AthenaAI.AINameplateComponent
// Size: 0x4a0 (Inherited: 0x310)
struct UAINameplateComponent : UNameplateComponent {
	char UnknownData_310[0x8]; // 0x310(0x08)
	float VisibleFromWorldDistance; // 0x318(0x04)
	float VisibleUntilWorldDistance; // 0x31c(0x04)
	float VisibleAfterDeathDuration; // 0x320(0x04)
	char UnknownData_324[0x4]; // 0x324(0x04)
	struct FText Title; // 0x328(0x38)
	struct FText DisplayName; // 0x360(0x38)
	struct FString DisplayNameAsString; // 0x398(0x10)
	struct FString DebugDisplayText; // 0x3a8(0x10)
	bool VisibilityDisabled; // 0x3b8(0x01)
	char UnknownData_3B9[0xe7]; // 0x3b9(0xe7)

	void OnRep_Title(); // Function AthenaAI.AINameplateComponent.OnRep_Title // Final|Native|Private // @ game+0x3cc1ae0
	void OnRep_DisplayNameAsString(); // Function AthenaAI.AINameplateComponent.OnRep_DisplayNameAsString // Final|Native|Private // @ game+0x3cc1a60
	void OnRep_DisplayName(); // Function AthenaAI.AINameplateComponent.OnRep_DisplayName // Final|Native|Private // @ game+0x3cc1a40
	void OnRep_DebugDisplayText(); // Function AthenaAI.AINameplateComponent.OnRep_DebugDisplayText // Final|Native|Private // @ game+0x3cc1a20
};

// Class AthenaAI.AINoiseFireInstigator
// Size: 0x3d0 (Inherited: 0x3c8)
struct AAINoiseFireInstigator : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
};

// Class AthenaAI.AIOnShipManagerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIOnShipManagerInterface : UInterface {
};

// Class AthenaAI.AIPartsService
// Size: 0x40 (Inherited: 0x28)
struct UAIPartsService : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UAIPartsCategoryTypeList* PartsCategoriesList; // 0x30(0x08)
	struct UAIColorVariantPool* TeamColors; // 0x38(0x08)
};

// Class AthenaAI.AIPartCustomizationInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIPartCustomizationInterface : UInterface {
};

// Class AthenaAI.AIPartIdListingAsset
// Size: 0x38 (Inherited: 0x28)
struct UAIPartIdListingAsset : UDataAsset {
	struct TArray<struct FAIPartIdNumVariantInfo> AIPartIdsVariantInfo; // 0x28(0x10)
};

// Class AthenaAI.MeshMemoryConstraintsAIPartsDesc
// Size: 0x80 (Inherited: 0x30)
struct UMeshMemoryConstraintsAIPartsDesc : UAIPartsDesc {
	char UnknownData_30[0x8]; // 0x30(0x08)
	struct FStringAssetReference Mesh; // 0x38(0x10)
	int64_t CachedMeshResourceSize; // 0x48(0x08)
	struct UClass* MeshFallbackCategory; // 0x50(0x08)
	struct UClass* BudgetToCountMemoryAgainstIfNoFallback; // 0x58(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x60(0x10)
	struct TArray<struct FStringAssetReference> FallbackOverrideMaterials; // 0x70(0x10)
};

// Class AthenaAI.AIPartsRetrievalInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIPartsRetrievalInterface : UInterface {
};

// Class AthenaAI.AIPartsRetrievalComponent
// Size: 0x180 (Inherited: 0xc8)
struct UAIPartsRetrievalComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UAIPartsCategory* PartsCategory; // 0xd0(0x08)
	struct FReplicatedAIPartsData ReplicatedAIPartsData; // 0xd8(0x18)
	char UnknownData_F0[0x90]; // 0xf0(0x90)

	void RequestNewAIParts(struct UAIPartsCategory* AssignedPartsCategory, int32_t PartsIndexToUse, int32_t TeamColorIndex); // Function AthenaAI.AIPartsRetrievalComponent.RequestNewAIParts // Final|Native|Public|BlueprintCallable // @ game+0x3cc2850
	void OnRep_ReplicatedAIPartsData(); // Function AthenaAI.AIPartsRetrievalComponent.OnRep_ReplicatedAIPartsData // Final|Native|Private // @ game+0x3cc1aa0
};

// Class AthenaAI.AIPawnInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIPawnInterface : UInterface {
};

// Class AthenaAI.AIPawnTurnActiveInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIPawnTurnActiveInterface : UInterface {
};

// Class AthenaAI.AIPerCrewSpawnerSettingsStoryOverrideAsset
// Size: 0x58 (Inherited: 0x28)
struct UAIPerCrewSpawnerSettingsStoryOverrideAsset : UDataAsset {
	struct FFeatureFlag Feature; // 0x28(0x0c)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TArray<struct FAIPerCrewSpawnerStoryBasedRespawnSettings> StoryResponses; // 0x38(0x10)
	struct TArray<struct UAIPerCrewSpawnerSettingsStoryOverrideAsset*> AssetsList; // 0x48(0x10)
};

// Class AthenaAI.AIProximityPlayerTracker
// Size: 0x248 (Inherited: 0x48)
struct UAIProximityPlayerTracker : UAISpawnerPlayerTracker {
	char UnknownData_48[0x200]; // 0x48(0x200)
};

// Class AthenaAI.FilterFirstPlayerEnterPlayerTrackerDecorator
// Size: 0x80 (Inherited: 0x48)
struct UFilterFirstPlayerEnterPlayerTrackerDecorator : UAISpawnerPlayerTracker {
	char UnknownData_48[0x38]; // 0x48(0x38)
};

// Class AthenaAI.AIProjectileInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIProjectileInterface : UInterface {
};

// Class AthenaAI.AIRegionInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIRegionInterface : UInterface {
};

// Class AthenaAI.AIRegionComponent
// Size: 0x350 (Inherited: 0x2e0)
struct UAIRegionComponent : USceneComponent {
	char UnknownData_2E0[0x8]; // 0x2e0(0x08)
	bool UpdateRegionPosition; // 0x2e8(0x01)
	char UnknownData_2E9[0x3]; // 0x2e9(0x03)
	struct FName NavMeshAgentType; // 0x2ec(0x08)
	float RegionRadius; // 0x2f4(0x04)
	struct TArray<struct FSpawnLocationGroup> SpawnLocationGroups; // 0x2f8(0x10)
	char UnknownData_308[0x48]; // 0x308(0x48)
};

// Class AthenaAI.AIShipInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIShipInterface : UInterface {
};

// Class AthenaAI.AISkillsetItemSpawnRequirement
// Size: 0x60 (Inherited: 0x50)
struct UAISkillsetItemSpawnRequirement : USpawnRequirement {
	struct TArray<struct UAthenaAIControllerParamsDataAsset*> DisallowedSkillsets; // 0x50(0x10)
};

// Class AthenaAI.AISpawnContextContainerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAISpawnContextContainerInterface : UInterface {
};

// Class AthenaAI.AISpawnContextContainerComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UAISpawnContextContainerComponent : UActorComponent {
	char UnknownData_C8[0x18]; // 0xc8(0x18)
};

// Class AthenaAI.AISpawnContextList
// Size: 0x38 (Inherited: 0x28)
struct UAISpawnContextList : UDataAsset {
	struct TArray<struct FAISpawnContextData> SpawnContextList; // 0x28(0x10)
};

// Class AthenaAI.AISpawnContextProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UAISpawnContextProviderInterface : UInterface {
};

// Class AthenaAI.AIFixedWavesSpawner
// Size: 0x478 (Inherited: 0x438)
struct UAIFixedWavesSpawner : UAISpawner {
	struct TArray<struct FAIPersistentSpawnerWave> SpawnedWaves; // 0x438(0x10)
	int32_t NumWavesToSpawnOnSpottedNewTarget; // 0x448(0x04)
	char UnknownData_44C[0x2c]; // 0x44c(0x2c)
};

// Class AthenaAI.AIIncrementalWaveSpawner
// Size: 0x558 (Inherited: 0x438)
struct UAIIncrementalWaveSpawner : UAISpawner {
	struct FAISpawnerWave SpawnedWave; // 0x438(0x100)
	struct UNamedAIDataAsset* NamedAIDataAsset; // 0x538(0x08)
	char UnknownData_540[0x18]; // 0x540(0x18)
};

// Class AthenaAI.AIInteractableSpawner
// Size: 0x538 (Inherited: 0x438)
struct UAIInteractableSpawner : UAISpawner {
	struct UClass* AIInteractableType; // 0x438(0x08)
	float InhabitedChance; // 0x440(0x04)
	char UnknownData_444[0x4]; // 0x444(0x04)
	struct FWeightedProbabilityRangeOfRanges DelayAfterSuccessfulInhabitedCheck; // 0x448(0x30)
	struct FWeightedProbabilityRangeOfRanges DelayAfterFailedInhabitedCheck; // 0x478(0x30)
	bool BlockSubsequentSpawningAtInteractableOnceAiKilled; // 0x4a8(0x01)
	char UnknownData_4A9[0x3]; // 0x4a9(0x03)
	float SpawnForInteractableChance; // 0x4ac(0x04)
	struct FWeightedProbabilityRangeOfRanges DelayAfterSuccessfulSpawnOnInteractableCheck; // 0x4b0(0x30)
	struct FWeightedProbabilityRangeOfRanges DelayAfterFailedSpawnOnInteractableCheck; // 0x4e0(0x30)
	bool RunInhabitedSimulation; // 0x510(0x01)
	bool RunSpawnForInteractableSimulation; // 0x511(0x01)
	char UnknownData_512[0x2]; // 0x512(0x02)
	int32_t NumIterations; // 0x514(0x04)
	char UnknownData_518[0x19]; // 0x518(0x19)
	char CachedPlaymode; // 0x531(0x01)
	char UnknownData_532[0x6]; // 0x532(0x06)
};

// Class AthenaAI.AIOnDemandSpawner
// Size: 0x438 (Inherited: 0x438)
struct UAIOnDemandSpawner : UAISpawner {
};

// Class AthenaAI.AIPerPlayerSpawner
// Size: 0x650 (Inherited: 0x438)
struct UAIPerPlayerSpawner : UAISpawner {
	bool CheckSpawnedActorsInRadiusBeforeSpawning; // 0x438(0x01)
	char UnknownData_439[0x3]; // 0x439(0x03)
	float RadiusToCheckForExistingPopulation; // 0x43c(0x04)
	int32_t MaxExistingPopulationInRadius; // 0x440(0x04)
	bool DespawnAllPawnsWhenAllPlayersLeave; // 0x444(0x01)
	char UnknownData_445[0x3]; // 0x445(0x03)
	int32_t MaxActorsTotalPerPlayer; // 0x448(0x04)
	bool RunSimulation; // 0x44c(0x01)
	char UnknownData_44D[0x3]; // 0x44d(0x03)
	int32_t RankForSimulation; // 0x450(0x04)
	int32_t NumIterations; // 0x454(0x04)
	bool WantsToTemporarilyRememberPlayers; // 0x458(0x01)
	char UnknownData_459[0x7]; // 0x459(0x07)
	struct FWeightedProbabilityRangeOfRanges TemporaryPlayerMemoryTimeRange; // 0x460(0x30)
	char UnknownData_490[0x118]; // 0x490(0x118)
	struct TMap<struct AActor*, struct FAIPerPlayerSpawnerPlayerDetailsUnit> PlayerDetails; // 0x5a8(0x50)
	struct TMap<struct AController*, struct FTemporaryPlayerDetailsUnitEntry> TemporaryPlayerDetails; // 0x5f8(0x50)
	char UnknownData_648[0x8]; // 0x648(0x08)

	void PlayerDeath(struct AActor* Player); // Function AthenaAI.AIPerPlayerSpawner.PlayerDeath // Final|Native|Public // @ game+0x3cc1b20
};

// Class AthenaAI.NamedAIDataAsset
// Size: 0xb0 (Inherited: 0x28)
struct UNamedAIDataAsset : UDataAsset {
	struct TArray<struct FText> MaleCaptainNames; // 0x28(0x10)
	struct TArray<struct FText> FemaleCaptainNames; // 0x38(0x10)
	struct TArray<struct FText> MaleCrewNames; // 0x48(0x10)
	struct TArray<struct FText> FemaleCrewNames; // 0x58(0x10)
	struct TArray<struct FAICustomNameTitleMapping> CustomNameTitles; // 0x68(0x10)
	struct TArray<struct FAICustomClassIdNameOverrides> CustomNameOverrides; // 0x78(0x10)
	struct UClass* DefaultClassId; // 0x88(0x08)
	struct UClass* FemaleCaptainClassId; // 0x90(0x08)
	struct UClass* MaleCaptainClassId; // 0x98(0x08)
	struct UClass* FemaleCrewClassId; // 0xa0(0x08)
	struct UClass* MaleCrewClassId; // 0xa8(0x08)
};

// Class AthenaAI.AIBoobyTrapSpawner
// Size: 0x730 (Inherited: 0x650)
struct UAIBoobyTrapSpawner : UAIPerPlayerSpawner {
	int32_t NumberOfWavesToSpawn; // 0x650(0x04)
	char UnknownData_654[0x4]; // 0x654(0x04)
	struct UWwiseEvent* NewWaveSpawnSfx; // 0x658(0x08)
	float NewWaveSpawnSfxTriggerRadius; // 0x660(0x04)
	char UnknownData_664[0x4]; // 0x664(0x04)
	struct TArray<struct UClass*> ShowNameplatesFor; // 0x668(0x10)
	struct UNamedAIDataAsset* NamedAIDataAsset; // 0x678(0x08)
	struct AActor* ActorToTrack; // 0x680(0x08)
	char UnknownData_688[0xa8]; // 0x688(0xa8)
};

// Class AthenaAI.AIProgressiveWavesSpawner
// Size: 0x470 (Inherited: 0x438)
struct UAIProgressiveWavesSpawner : UAISpawner {
	bool ApplyLocalisableNamesToNameplates; // 0x438(0x01)
	char UnknownData_439[0x7]; // 0x439(0x07)
	struct TArray<struct FAIPersistentSpawnerWave> Waves; // 0x440(0x10)
	char UnknownData_450[0x18]; // 0x450(0x18)
	struct AActor* TriggerActor; // 0x468(0x08)
};

// Class AthenaAI.AISpawnerSpawnInteractableAssignmentInterface
// Size: 0x28 (Inherited: 0x28)
struct UAISpawnerSpawnInteractableAssignmentInterface : UInterface {
};

// Class AthenaAI.AIEscalatingWaveSpawner
// Size: 0x590 (Inherited: 0x570)
struct UAIEscalatingWaveSpawner : UAIWaveSpawner {
	struct TArray<struct FEscalatingWave> EscalatingWaves; // 0x570(0x10)
	char UnknownData_580[0x10]; // 0x580(0x10)
};

// Class AthenaAI.AISpawnerList
// Size: 0x38 (Inherited: 0x28)
struct UAISpawnerList : UDataAsset {
	struct TArray<struct UAISpawner*> Spawners; // 0x28(0x10)
};

// Class AthenaAI.AISpawnOverrideCondition
// Size: 0x30 (Inherited: 0x28)
struct UAISpawnOverrideCondition : UObject {
	bool InvertResult; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// Class AthenaAI.AISpawnCampaignCondition
// Size: 0x50 (Inherited: 0x30)
struct UAISpawnCampaignCondition : UAISpawnOverrideCondition {
	struct FName CampaignName; // 0x30(0x08)
	char UnknownData_38[0x18]; // 0x38(0x18)
};

// Class AthenaAI.AISpawnComplexCondition
// Size: 0x40 (Inherited: 0x30)
struct UAISpawnComplexCondition : UAISpawnOverrideCondition {
	struct TArray<struct UAISpawnOverrideCondition*> Conditions; // 0x30(0x10)
};

// Class AthenaAI.AISpawnAndCondition
// Size: 0x40 (Inherited: 0x40)
struct UAISpawnAndCondition : UAISpawnComplexCondition {
};

// Class AthenaAI.AISpawnOrCondition
// Size: 0x40 (Inherited: 0x40)
struct UAISpawnOrCondition : UAISpawnComplexCondition {
};

// Class AthenaAI.AISpawnMatchesAllContextsCondition
// Size: 0x40 (Inherited: 0x30)
struct UAISpawnMatchesAllContextsCondition : UAISpawnOverrideCondition {
	struct TArray<struct UClass*> Contexts; // 0x30(0x10)
};

// Class AthenaAI.AISpawnMatchesAnyContextCondition
// Size: 0x40 (Inherited: 0x30)
struct UAISpawnMatchesAnyContextCondition : UAISpawnOverrideCondition {
	struct TArray<struct UClass*> Contexts; // 0x30(0x10)
};

// Class AthenaAI.AISpawnStoryCondition
// Size: 0x50 (Inherited: 0x30)
struct UAISpawnStoryCondition : UAISpawnOverrideCondition {
	struct FStoryFlag StoryFlag; // 0x30(0x08)
	char UnknownData_38[0x18]; // 0x38(0x18)
};

// Class AthenaAI.StaticAISpawnCondition
// Size: 0x38 (Inherited: 0x30)
struct UStaticAISpawnCondition : UAISpawnOverrideCondition {
	bool ShouldApplyOverride; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class AthenaAI.AISpawnPointSeedComponent
// Size: 0x2e0 (Inherited: 0x2e0)
struct UAISpawnPointSeedComponent : USceneComponent {
};

// Class AthenaAI.AISpawnRegionInterface
// Size: 0x28 (Inherited: 0x28)
struct UAISpawnRegionInterface : UInterface {
};

// Class AthenaAI.AITargetServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAITargetServiceInterface : UInterface {
};

// Class AthenaAI.AITargetInterface
// Size: 0x28 (Inherited: 0x28)
struct UAITargetInterface : UInterface {
};

// Class AthenaAI.AITargetActor
// Size: 0x3e0 (Inherited: 0x3c8)
struct AAITargetActor : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct USceneComponent* Root; // 0x3d0(0x08)
	char Team; // 0x3d8(0x01)
	char UnknownData_3D9[0x7]; // 0x3d9(0x07)
};

// Class AthenaAI.AITargetService
// Size: 0x3e0 (Inherited: 0x3c8)
struct AAITargetService : AActor {
	char UnknownData_3C8[0x18]; // 0x3c8(0x18)
};

// Class AthenaAI.AITargetWeaponInterface
// Size: 0x28 (Inherited: 0x28)
struct UAITargetWeaponInterface : UInterface {

	bool FindAimConfigToHitTarget(struct FVector Target, bool CheckYaw, struct FRotator OutAimConfig); // Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3cc1220
};

// Class AthenaAI.AIWithFormInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIWithFormInterface : UInterface {
};

// Class AthenaAI.AmbientWaterSpawnerManager
// Size: 0x638 (Inherited: 0x3c8)
struct AAmbientWaterSpawnerManager : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct USceneComponent* Root; // 0x3d8(0x08)
	struct UAthenaAISettings* AthenaAISettings; // 0x3e0(0x08)
	struct TArray<struct FName> AISpawnBlockingContextNames; // 0x3e8(0x10)
	struct UAIPerPlayerSpawner* SharkPerPlayerSpawnerTemplate; // 0x3f8(0x08)
	struct UAIPerPlayerSpawner* SirenPerPlayerSpawnerTemplate; // 0x400(0x08)
	float SirenEncounterRegionRadius; // 0x408(0x04)
	float SirenEncounterShutdownTime; // 0x40c(0x04)
	struct FWeightedProbabilityRangeOfRanges InitialSirenSpawningWeightedTimeRange; // 0x410(0x30)
	struct FWeightedProbabilityRangeOfRanges UnsuccessfulSirenSpawningWeightedTimeRange; // 0x440(0x30)
	struct FWeightedProbabilityRangeOfRanges SuccessfulSirenSpawningWeightedTimeRange; // 0x470(0x30)
	struct FChanceForSharksToBlockSirenEncounterData SharkEncounterSpawnBlockingData; // 0x4a0(0x0c)
	char UnknownData_4AC[0x4]; // 0x4ac(0x04)
	struct TArray<struct FPerDepthSpawnChance> PerDepthSpawnChances; // 0x4b0(0x10)
	struct UAIPerPlayerSpawner* SharkPerPlayerSpawner; // 0x4c0(0x08)
	char UnknownData_4C8[0x150]; // 0x4c8(0x150)
	struct TArray<struct FPlayerInWaterData> PlayersInWater; // 0x618(0x10)
	struct TArray<struct FSirenEncounterData> SirenEncounters; // 0x628(0x10)

	void OnPlayerDeath(struct AActor* InActorDying); // Function AthenaAI.AmbientWaterSpawnerManager.OnPlayerDeath // Final|Native|Private // @ game+0x3cc1980
};

// Class AthenaAI.AmmunitionItemClassProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UAmmunitionItemClassProviderInterface : UInterface {
};

// Class AthenaAI.AppliedStatusToMultipleAIWithFormsStatCondition
// Size: 0x70 (Inherited: 0x28)
struct UAppliedStatusToMultipleAIWithFormsStatCondition : UStatCondition {
	struct TArray<struct UClass*> Status; // 0x28(0x10)
	int32_t AICountMinimum; // 0x38(0x04)
	bool AllowAllForms; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	struct TArray<struct UClass*> AllowedAIForms; // 0x40(0x10)
	struct TArray<struct UClass*> AIClassesToIgnore; // 0x50(0x10)
	struct TArray<struct UClass*> AllowedSources; // 0x60(0x10)
};

// Class AthenaAI.AquaticAITargetInterface
// Size: 0x28 (Inherited: 0x28)
struct UAquaticAITargetInterface : UInterface {
};

// Class AthenaAI.BurrowAIAbility
// Size: 0x140 (Inherited: 0x78)
struct UBurrowAIAbility : UAthenaAIAbility {
	struct TArray<struct FVector> LocationsToSpawnCrack; // 0x78(0x10)
	struct FTimerHandle TimerHandleStartNextSpawnWave; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
	struct AActor* CachedTarget; // 0x90(0x08)
	char UnknownData_98[0x8c]; // 0x98(0x8c)
	bool bExecuting; // 0x124(0x01)
	bool bProcessingSpawnLocations; // 0x125(0x01)
	char UnknownData_126[0x1a]; // 0x126(0x1a)
};

// Class AthenaAI.BurrowCrack
// Size: 0x408 (Inherited: 0x3c8)
struct ABurrowCrack : AActor {
	struct USceneComponent* DefaultSceneComponent; // 0x3c8(0x08)
	struct UDecalComponent* DecalComponent; // 0x3d0(0x08)
	float FadeOutTimeSeconds; // 0x3d8(0x04)
	bool HasFadeStarted; // 0x3dc(0x01)
	char UnknownData_3DD[0x2b]; // 0x3dd(0x2b)

	void OnRep_StartFadeAndLifeSpan(); // Function AthenaAI.BurrowCrack.OnRep_StartFadeAndLifeSpan // Final|Native|Public // @ game+0x3cc1ac0
	void OnLifeSpanPercentLeft(float PercentLeft); // Function AthenaAI.BurrowCrack.OnLifeSpanPercentLeft // Event|Public|BlueprintEvent // @ game+0x1848130
};

// Class AthenaAI.BurrowAIAbilityParams
// Size: 0x140 (Inherited: 0xc8)
struct UBurrowAIAbilityParams : UAthenaAIAbilityParams {
	struct TArray<char> ValidBurrowSurfaceTypes; // 0xc8(0x10)
	struct UClass* BurrowCrackToSpawn; // 0xd8(0x08)
	struct UClass* BurrowEruptArea; // 0xe0(0x08)
	struct UEnvQuery* EnvQueryLinesToTarget; // 0xe8(0x08)
	struct UEnvQuery* EnvQueryAroundTarget; // 0xf0(0x08)
	struct FVector OffsetPositionForStartTrace; // 0xf8(0x0c)
	float SurfaceDetectRaycastLength; // 0x104(0x04)
	float BurrowAroundTargetRange; // 0x108(0x04)
	float MaxSurfaceAngleForBurrow; // 0x10c(0x04)
	bool bEruptFromClosestSpawn; // 0x110(0x01)
	char UnknownData_111[0x3]; // 0x111(0x03)
	struct FMinMaxBurrowAbility EruptionDelayRndBetweenMinMaxSeconds; // 0x114(0x08)
	struct FMinMaxBurrowAbility NumberOfCrackWavesMinMax; // 0x11c(0x08)
	struct FMinMaxBurrowAbility RndSecondsBetweenCrackWaves; // 0x124(0x08)
	struct FMinMaxBurrowAbility NumberOfCracksPerWaveMinMax; // 0x12c(0x08)
	struct FMinMaxBurrowAbility RndSecondsBetweenEachCrackSpawn; // 0x134(0x08)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
};

// Class AthenaAI.BurrowHealAIAbilityParams
// Size: 0x170 (Inherited: 0x140)
struct UBurrowHealAIAbilityParams : UBurrowAIAbilityParams {
	struct UClass* AllyTypeToHeal; // 0x140(0x08)
	float HealDuration; // 0x148(0x04)
	float RadiusForValidTargets; // 0x14c(0x04)
	int32_t NumberOfTargetsToHeal; // 0x150(0x04)
	char UnknownData_154[0x4]; // 0x154(0x04)
	struct FStatus StatusToApplyOnHeal; // 0x158(0x18)
};

// Class AthenaAI.BurrowHealAIAbility
// Size: 0x150 (Inherited: 0x140)
struct UBurrowHealAIAbility : UBurrowAIAbility {
	char UnknownData_140[0x10]; // 0x140(0x10)
};

// Class AthenaAI.AthenaAIBuffAbilityInterface
// Size: 0x28 (Inherited: 0x28)
struct UAthenaAIBuffAbilityInterface : UInterface {
};

// Class AthenaAI.CoralShieldAbility
// Size: 0x138 (Inherited: 0x78)
struct UCoralShieldAbility : UAthenaAIAbility {
	struct TArray<struct APawn*> PotentialTargets; // 0x78(0x10)
	TScriptInterface<struct UAIManagerServiceInterface> CachedAIManager; // 0x88(0x10)
	TScriptInterface<struct UBuffReceiverInterface> CachedBuffReceiver; // 0x98(0x10)
	struct TArray<struct FBuffedTargetData> BuffedTargets; // 0xa8(0x10)
	char UnknownData_B8[0x80]; // 0xb8(0x80)
};

// Class AthenaAI.ElectricShieldAbility
// Size: 0x120 (Inherited: 0x78)
struct UElectricShieldAbility : UAthenaAIAbility {
	char UnknownData_78[0x8]; // 0x78(0x08)
	struct TArray<TScriptInterface<struct UStatusEffectRecipientInterface>> SelectedTargets; // 0x80(0x10)
	TScriptInterface<struct UAIManagerServiceInterface> CachedAIManager; // 0x90(0x10)
	TScriptInterface<struct UChainLightningSourceInterface> OwnerChainLightningSourceInterface; // 0xa0(0x10)
	char UnknownData_B0[0x70]; // 0xb0(0x70)
};

// Class AthenaAI.SporeBreathAIAbility
// Size: 0xb0 (Inherited: 0x78)
struct USporeBreathAIAbility : UAthenaAIAbility {
	struct AStatusEffectOverlapZone* BreathActor; // 0x78(0x08)
	struct UVFXSpawnerComponent* BreathVFX; // 0x80(0x08)
	char UnknownData_88[0x28]; // 0x88(0x28)
};

// Class AthenaAI.TeleportAIAbility
// Size: 0x80 (Inherited: 0x78)
struct UTeleportAIAbility : UAthenaAIAbility {
	char UnknownData_78[0x8]; // 0x78(0x08)
};

// Class AthenaAI.AthenaAIAbilityHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAthenaAIAbilityHandlerInterface : UInterface {
};

// Class AthenaAI.AthenaAIAbilityComponent
// Size: 0x1f0 (Inherited: 0xc8)
struct UAthenaAIAbilityComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct UAthenaAIAbility*> AIAbilities; // 0xd0(0x10)
	struct TArray<struct UAthenaAIAbility*> ActivatableAbilitiesInCurrentStage; // 0xe0(0x10)
	struct UAthenaAIAbility* CurrentAIAbility; // 0xf0(0x08)
	struct UClass* QueuedAbilityType; // 0xf8(0x08)
	struct UClass* DebugAlwaysOnAbility; // 0x100(0x08)
	struct TArray<struct FAthenaAIAbilityDamageStage> AbilityDamageStages; // 0x108(0x10)
	char UnknownData_118[0xd8]; // 0x118(0xd8)
};

// Class AthenaAI.AthenaAIAbilityHandlerComponent
// Size: 0x200 (Inherited: 0xc8)
struct UAthenaAIAbilityHandlerComponent : UActorComponent {
	char UnknownData_C8[0xd0]; // 0xc8(0xd0)
	struct TArray<struct FAthenaAIAbilityDamageStage> AbilityStages; // 0x198(0x10)
	struct TArray<struct UAthenaAIAbility*> AIAbilities; // 0x1a8(0x10)
	struct TArray<struct UClass*> ReadyAbilitiesPool; // 0x1b8(0x10)
	char UnknownData_1C8[0x20]; // 0x1c8(0x20)
	struct UClass* DebugAlwaysOnAbility; // 0x1e8(0x08)
	struct UClass* RequiresActivation; // 0x1f0(0x08)
	char UnknownData_1F8[0x8]; // 0x1f8(0x08)
};

// Class AthenaAI.CoralShieldAbilityParams
// Size: 0x100 (Inherited: 0xc8)
struct UCoralShieldAbilityParams : UAthenaAIAbilityParams {
	float ShieldEffectRadius; // 0xc8(0x04)
	float DamageNeededToBreakShield; // 0xcc(0x04)
	float ShieldLifeTime; // 0xd0(0x04)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
	struct FStatus CoralShieldStatusEffect; // 0xd8(0x18)
	struct UDamageableVulnerabilityLayer* VulnerabilityToApplyToSelf; // 0xf0(0x08)
	float DelayBeforeSFXPlays; // 0xf8(0x04)
	char UnknownData_FC[0x4]; // 0xfc(0x04)
};

// Class AthenaAI.ElectricShieldAbilityParams
// Size: 0x100 (Inherited: 0xc8)
struct UElectricShieldAbilityParams : UAthenaAIAbilityParams {
	float ChargeUpTime; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct FStatus BuffInterruptedStatusEffect; // 0xd0(0x18)
	struct FStatus ElectricShieldStatusEffect; // 0xe8(0x18)
};

// Class AthenaAI.SporeBreathAIAbilityParams
// Size: 0x148 (Inherited: 0xc8)
struct USporeBreathAIAbilityParams : UAthenaAIAbilityParams {
	struct FAthenaAIAbilityPlayerBasedRanges BreathMaxDuration; // 0xc8(0x10)
	float BreathContinueThresholdDistance; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
	struct UClass* BreathActor; // 0xe0(0x08)
	struct FVFXHandlerComponentParams BreathVFXParams; // 0xe8(0x40)
	struct FVector BreathCollisionVolumeSize; // 0x128(0x0c)
	float BreathCollisionForwardOffset; // 0x134(0x04)
	float BreathStartDelay; // 0x138(0x04)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
	struct UClass* VfxSpawner; // 0x140(0x08)
};

// Class AthenaAI.BurrowAIAbilityType
// Size: 0x28 (Inherited: 0x28)
struct UBurrowAIAbilityType : UAthenaAIAbilityType {
};

// Class AthenaAI.BurrowHealAIAbilityType
// Size: 0x28 (Inherited: 0x28)
struct UBurrowHealAIAbilityType : UAthenaAIAbilityType {
};

// Class AthenaAI.CoralShieldAbilityType
// Size: 0x28 (Inherited: 0x28)
struct UCoralShieldAbilityType : UAthenaAIAbilityType {
};

// Class AthenaAI.ElectricShieldAbilityType
// Size: 0x28 (Inherited: 0x28)
struct UElectricShieldAbilityType : UAthenaAIAbilityType {
};

// Class AthenaAI.SporeBreathAIAbilityType
// Size: 0x28 (Inherited: 0x28)
struct USporeBreathAIAbilityType : UAthenaAIAbilityType {
};

// Class AthenaAI.AthenaAIRangeBasedAmmoDataAsset
// Size: 0xe0 (Inherited: 0xd0)
struct UAthenaAIRangeBasedAmmoDataAsset : UAthenaAIAmmoDataAsset {
	struct TArray<struct FWeightedAmmoTypeRange> AmmoTypeRanges; // 0xd0(0x10)
};

// Class AthenaAI.AthenaAICharacterStatsInterface
// Size: 0x28 (Inherited: 0x28)
struct UAthenaAICharacterStatsInterface : UInterface {
};

// Class AthenaAI.AthenaAIControllerBase
// Size: 0x610 (Inherited: 0x4b8)
struct AAthenaAIControllerBase : AAIController {
	char UnknownData_4B8[0x158]; // 0x4b8(0x158)

	void SetNamedControllerParam(struct FName ParamName, float Value); // Function AthenaAI.AthenaAIControllerBase.SetNamedControllerParam // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x3cc3340
	struct FWeightedProbabilityRangeOfRanges FindNamedWeightedRangesControllerParam(struct FName ParamName); // Function AthenaAI.AthenaAIControllerBase.FindNamedWeightedRangesControllerParam // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x3cc1410
	float FindNamedControllerParam(struct FName ParamName); // Function AthenaAI.AthenaAIControllerBase.FindNamedControllerParam // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x3cc1360
	void ApplyControllerParams(struct UAthenaAIControllerParamsDataAsset* ParamsAsset, struct APawn* InPawn); // Function AthenaAI.AthenaAIControllerBase.ApplyControllerParams // Native|Public|BlueprintCallable // @ game+0x3cc0e30
};

// Class AthenaAI.AthenaAIController
// Size: 0x960 (Inherited: 0x610)
struct AAthenaAIController : AAthenaAIControllerBase {
	char UnknownData_610[0x24]; // 0x610(0x24)
	float CurrentTargetPerceivedNotVisibleAge; // 0x634(0x04)
	char UnknownData_638[0x40]; // 0x638(0x40)
	struct UAISenseConfig_Sight* SightConfig; // 0x678(0x08)
	struct UAISenseConfig_Hearing* HearingConfig; // 0x680(0x08)
	struct UAISenseConfig_Damage* DamageSenseConfig; // 0x688(0x08)
	char UnknownData_690[0x48]; // 0x690(0x48)
	struct TArray<struct FAthenaAIControllerSenseSettingOverride> AIStrategySenseSettingOverrides; // 0x6d8(0x10)
	char UnknownData_6E8[0x248]; // 0x6e8(0x248)
	struct AActor* CurrentNotSeenPerceivedActor; // 0x930(0x08)
	struct AActor* PendingSpawnTriggerActor; // 0x938(0x08)
	char UnknownData_940[0x20]; // 0x940(0x20)

	void StopBehaviourLogic(); // Function AthenaAI.AthenaAIController.StopBehaviourLogic // Native|Public|BlueprintCallable // @ game+0x3cc3810
	void SetPerceptionExpirationAgeForActor(struct AActor* Actor, float ExpirationAge, struct UClass* Sense); // Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor // Final|Native|Public|BlueprintCallable // @ game+0x3cc34a0
	void RegisterSpawnTriggerActorAsStimulus(struct AActor* TriggerActor); // Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus // Native|Public|BlueprintCallable // @ game+0x3cc26c0
	void OnPerceptionUpdated(struct TArray<struct AActor*> ChangedPerceivedActors); // Function AthenaAI.AthenaAIController.OnPerceptionUpdated // Native|Public // @ game+0x3cc1880
	void OnNewlySpawned(); // Function AthenaAI.AthenaAIController.OnNewlySpawned // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnFinishDespawn(); // Function AthenaAI.AthenaAIController.OnFinishDespawn // Event|Public|BlueprintEvent // @ game+0x1848130
	bool IsActorPerceived(struct AActor* TargetActor); // Function AthenaAI.AthenaAIController.IsActorPerceived // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3cc1720
	struct AActor* GetTargetActor(); // Function AthenaAI.AthenaAIController.GetTargetActor // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3cc16f0
	struct UAthenaAIPerceptionComponent* GetAthenaAIPerceptionComponent(); // Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x3cc1630
	void GetAllSeenActors(struct TArray<struct AActor*> SeenActors); // Function AthenaAI.AthenaAIController.GetAllSeenActors // Native|Public|HasOutParms|BlueprintCallable // @ game+0x3cc1570
	void ApplyControllerParams(struct UAthenaAIControllerParamsDataAsset* ParamsAsset, struct APawn* InPawn); // Function AthenaAI.AthenaAIController.ApplyControllerParams // Native|Public|BlueprintCallable // @ game+0x3cc0d60
};

// Class AthenaAI.SpawnItemDescProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct USpawnItemDescProviderInterface : UInterface {
};

// Class AthenaAI.AthenaAICharacterController
// Size: 0xbc0 (Inherited: 0x960)
struct AAthenaAICharacterController : AAthenaAIController {
	char UnknownData_960[0x8]; // 0x960(0x08)
	struct UAthenaAIItemParamsDataAsset* ItemParamsDataAsset; // 0x968(0x08)
	struct ULoadoutAsset* FallbackLoadoutIfAllEngageItemsDropped; // 0x970(0x08)
	float ControlRotationInterpSpeed; // 0x978(0x04)
	bool ControlRotationUseConstantInterp; // 0x97c(0x01)
	bool FaceTargetDisabled; // 0x97d(0x01)
	char UnknownData_97E[0x2]; // 0x97e(0x02)
	float MinTurnAngleToPlayTurnAnim; // 0x980(0x04)
	char UnknownData_984[0x14]; // 0x984(0x14)
	struct UAthenaAICharacterControllerParamsDataAsset* CharacterParamsDataAsset; // 0x998(0x08)
	char UnknownData_9A0[0x90]; // 0x9a0(0x90)
	struct TArray<struct FAthenaAICharacterControllerSpawnItemDescForItemCategory> SpawnItemDescForItemCategories; // 0xa30(0x10)
	struct TArray<struct UAthenaAIAbilityParams*> AIAbilityParams; // 0xa40(0x10)
	struct TArray<struct FAthenaAIAbilityDamageStage> AIAbilityStageParams; // 0xa50(0x10)
	struct TArray<struct FAthenaAIEngageEnemyData> NonItemEngageOptions; // 0xa60(0x10)
	struct UCurveFloat* DistanceInMToCannonShotHitChanceCurve; // 0xa70(0x08)
	char UnknownData_A78[0x148]; // 0xa78(0x148)

	void SetOverridePrioritiseInteractablesBeforeEnemies(bool InPrioritiseInteractablesBeforeEnemies); // Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies // Final|Native|Public|BlueprintCallable // @ game+0x3cc3410
	void SetItemSpecificNamedControllerParam(struct UClass* InItemCategory, struct FName ParamName, float Value); // Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x3cc2f00
	void SetDisableTurningForTest(bool InDisableTurningForTest); // Function AthenaAI.AthenaAICharacterController.SetDisableTurningForTest // Final|Native|Public|BlueprintCallable // @ game+0x3cc2c50
	void ClearOverridePrioritiseInteractablesBeforeEnemies(); // Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies // Final|Native|Public|BlueprintCallable // @ game+0x3cc10a0
};

// Class AthenaAI.AthenaAIControllerNavMeshTogglesInterface
// Size: 0x28 (Inherited: 0x28)
struct UAthenaAIControllerNavMeshTogglesInterface : UInterface {
};

// Class AthenaAI.FaunaAIContollerParamsDataAsset
// Size: 0x1c0 (Inherited: 0x138)
struct UFaunaAIContollerParamsDataAsset : UAthenaAIControllerParamsDataAsset {
	struct FWeightedProbabilityRange Courage; // 0x138(0x20)
	struct TArray<struct FCarriedItemThreatOverride> CarriedItemThreatOverrides; // 0x158(0x10)
	bool ThreatenedBySightOfCarrier; // 0x168(0x01)
	char UnknownData_169[0x7]; // 0x169(0x07)
	struct TArray<struct FHearingThreat> KnownHearingDangers; // 0x170(0x10)
	float CarrierHearingThreatSpeedThreshold; // 0x180(0x04)
	float DamageThreat; // 0x184(0x04)
	struct UCurveFloat* CharacterDistanceToDangerRatingCurve; // 0x188(0x08)
	struct UCurveFloat* DangerRatingToAgitationDurationCurve; // 0x190(0x08)
	float TimeToBecomeAgitatedMin; // 0x198(0x04)
	float TimeToBecomeAgitatedMax; // 0x19c(0x04)
	float AgitationDurationVariance; // 0x1a0(0x04)
	int32_t AlertThreshold; // 0x1a4(0x04)
	int32_t FleeThreshold; // 0x1a8(0x04)
	float TimeToBecomeCalm; // 0x1ac(0x04)
	float CalmCooldownTime; // 0x1b0(0x04)
	float MaxDistanceFromLeaderForIdle; // 0x1b4(0x04)
	struct UCurveFloat* DistanceToLeaderPatrolChanceCurve; // 0x1b8(0x08)
};

// Class AthenaAI.AthenaAIControllerParamsDataProvider
// Size: 0x40 (Inherited: 0x28)
struct UAthenaAIControllerParamsDataProvider : UAIDataProvider {
	struct FName ParamName; // 0x28(0x08)
	float FloatValue; // 0x30(0x04)
	int32_t IntValue; // 0x34(0x04)
	bool BoolValue; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class AthenaAI.AthenaAIControllerParamsTargetInterface
// Size: 0x28 (Inherited: 0x28)
struct UAthenaAIControllerParamsTargetInterface : UInterface {
};

// Class AthenaAI.AthenaAIDamageModifierCrewProximity
// Size: 0x90 (Inherited: 0x30)
struct UAthenaAIDamageModifierCrewProximity : UAthenaAIDamageModifierBase {
	float Radius; // 0x30(0x04)
	bool UseSeparateRadiusForShips; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
	float ShipRadius; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FDamageModifierCrewProximityVulnerabilityPairs> VulnerabilityData; // 0x40(0x10)
	char UnknownData_50[0x40]; // 0x50(0x40)
};

// Class AthenaAI.AthenaAIFormComponentContainerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAthenaAIFormComponentContainerInterface : UInterface {
};

// Class AthenaAI.AthenaAIInteractableInterface
// Size: 0x28 (Inherited: 0x28)
struct UAthenaAIInteractableInterface : UInterface {
};

// Class AthenaAI.AthenaAIPerceptionComponent
// Size: 0x1c8 (Inherited: 0x1c8)
struct UAthenaAIPerceptionComponent : UAIPerceptionComponent {

	bool IsPerceptionSenseEnabled(struct UClass* Sense); // Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3cc17f0
	bool IsAnyPerceptionEnabled(); // Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3cc17c0
	void EnablePerceptionSense(struct UClass* Sense, bool Enable); // Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense // Final|Native|Public|BlueprintCallable // @ game+0x3cc1150
	void EnableAllPerception(bool Enable); // Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception // Final|Native|Public|BlueprintCallable // @ game+0x3cc10c0
};

// Class AthenaAI.AthenaAISightTargetInterface
// Size: 0x28 (Inherited: 0x28)
struct UAthenaAISightTargetInterface : UAISightTargetInterface {
};

// Class AthenaAI.AthenaAIWeightedRangesDataProvider
// Size: 0x60 (Inherited: 0x28)
struct UAthenaAIWeightedRangesDataProvider : UAIDataProvider {
	struct FName ParamName; // 0x28(0x08)
	struct FWeightedProbabilityRangeOfRanges WeightedRangesValue; // 0x30(0x30)
};

// Class AthenaAI.BlackboardAIDataProvider
// Size: 0x40 (Inherited: 0x28)
struct UBlackboardAIDataProvider : UAIDataProvider {
	struct FName ParamName; // 0x28(0x08)
	float FloatValue; // 0x30(0x04)
	int32_t IntValue; // 0x34(0x04)
	bool BoolValue; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class AthenaAI.BTDecorator_ActionState
// Size: 0x88 (Inherited: 0x68)
struct UBTDecorator_ActionState : UBTDecorator {
	char TrackId; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct UClass* StateId; // 0x70(0x08)
	char UnknownData_78[0x10]; // 0x78(0x10)
};

// Class AthenaAI.BTDecorator_ActorInWater
// Size: 0x98 (Inherited: 0x90)
struct UBTDecorator_ActorInWater : UBTDecorator_BlackboardBase {
	bool ReverseLogic; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
};

// Class AthenaAI.BTDecorator_CurrentAIStrategy
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_CurrentAIStrategy : UBTDecorator_BaseConditional {
	struct TArray<struct UClass*> Strategies; // 0x68(0x10)
};

// Class AthenaAI.BTDecorator_IsActorInExpectedActionState
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_IsActorInExpectedActionState : UBTDecorator_BaseConditional {
	struct UClass* ExpectedActionState; // 0x68(0x08)
	char ExpectedTrackId; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// Class AthenaAI.BTDecorator_ItemReadyToUse
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_ItemReadyToUse : UBTDecorator_BaseConditional {
	struct UClass* NotificationId; // 0x68(0x08)
};

// Class AthenaAI.BTDecorator_LeftOfAIPawn
// Size: 0x98 (Inherited: 0x68)
struct UBTDecorator_LeftOfAIPawn : UBTDecorator_BaseConditional {
	struct FBlackboardKeySelector TargetKey; // 0x68(0x28)
	bool ReverseLogic; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
};

// Class AthenaAI.BTDecorator_LineOfSightToTarget
// Size: 0xf0 (Inherited: 0x68)
struct UBTDecorator_LineOfSightToTarget : UBTDecorator_BaseConditional {
	float Interval; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct FBlackboardKeySelector TargetActorKey; // 0x70(0x28)
	bool UseTargetPosition; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
	struct FBlackboardKeySelector TargetPositionKey; // 0xa0(0x28)
	struct FVector OffsetToApplyToTargetPosition; // 0xc8(0x0c)
	char UnknownData_D4[0x1c]; // 0xd4(0x1c)
};

// Class AthenaAI.BTDecorator_CompareBlackboardClassValue
// Size: 0xb8 (Inherited: 0x90)
struct UBTDecorator_CompareBlackboardClassValue : UBTDecorator_BlackboardBase {
	struct UClass* Class; // 0x90(0x08)
	bool Invert; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
	struct FString CachedDescription; // 0xa0(0x10)
	char NotifyObserver; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
};

// Class AthenaAI.BTDecorator_CompareBlackboardIntValue
// Size: 0x98 (Inherited: 0x68)
struct UBTDecorator_CompareBlackboardIntValue : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKey; // 0x68(0x28)
	int32_t Value; // 0x90(0x04)
	char ComparisonType; // 0x94(0x01)
	char UnknownData_95[0x3]; // 0x95(0x03)
};

// Class AthenaAI.BTDecorator_CompareBlackboardValues
// Size: 0x80 (Inherited: 0x68)
struct UBTDecorator_CompareBlackboardValues : UBTDecorator {
	struct TArray<struct FBlackboardValueCondition> FloatConditions; // 0x68(0x10)
	char FloatConditionComposite; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
};

// Class AthenaAI.BTDecorator_CompareFloatValueBase
// Size: 0xb8 (Inherited: 0x80)
struct UBTDecorator_CompareFloatValueBase : UBTDecorator_CompareBlackboardValues {
	char Comparison; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
	struct FAIDataProviderFloatValue Value; // 0x88(0x30)
};

// Class AthenaAI.BTDecorator_CompareBlackboardActorSpeed
// Size: 0xe0 (Inherited: 0xb8)
struct UBTDecorator_CompareBlackboardActorSpeed : UBTDecorator_CompareFloatValueBase {
	struct FBlackboardKeySelector BlackboardKey; // 0xb8(0x28)
};

// Class AthenaAI.BTDecorator_CompareBlackboardFloatValue
// Size: 0xe0 (Inherited: 0xb8)
struct UBTDecorator_CompareBlackboardFloatValue : UBTDecorator_CompareFloatValueBase {
	struct FBlackboardKeySelector BlackboardKey; // 0xb8(0x28)
};

// Class AthenaAI.BTDecorator_CompareCurrentHealth
// Size: 0xb8 (Inherited: 0xb8)
struct UBTDecorator_CompareCurrentHealth : UBTDecorator_CompareFloatValueBase {
};

// Class AthenaAI.BTDecorator_TargetInRange
// Size: 0x108 (Inherited: 0x80)
struct UBTDecorator_TargetInRange : UBTDecorator_CompareBlackboardValues {
	struct FAIDataProviderFloatValue EnterRange; // 0x80(0x30)
	struct FAIDataProviderFloatValue ExitRange; // 0xb0(0x30)
	struct FBlackboardKeySelector TargetKey; // 0xe0(0x28)
};

// Class AthenaAI.BTDecorator_TargetInRangeOfPoint
// Size: 0x130 (Inherited: 0x108)
struct UBTDecorator_TargetInRangeOfPoint : UBTDecorator_TargetInRange {
	struct FBlackboardKeySelector ReferencePointKey; // 0x108(0x28)
};

// Class AthenaAI.BTDecorator_TestRange
// Size: 0xe8 (Inherited: 0x80)
struct UBTDecorator_TestRange : UBTDecorator_CompareBlackboardValues {
	struct FAIDataProviderFloatValue EnterRange; // 0x80(0x30)
	struct FAIDataProviderFloatValue ExitRange; // 0xb0(0x30)
	bool TestForOutsideRange; // 0xe0(0x01)
	char UnknownData_E1[0x7]; // 0xe1(0x07)
};

// Class AthenaAI.BTDecorator_TestRangeOfSeenActors
// Size: 0xf8 (Inherited: 0xe8)
struct UBTDecorator_TestRangeOfSeenActors : UBTDecorator_TestRange {
	char UnknownData_E8[0x10]; // 0xe8(0x10)
};

// Class AthenaAI.BTDecorator_ConeCheck3D
// Size: 0xc0 (Inherited: 0x68)
struct UBTDecorator_ConeCheck3D : UBTDecorator {
	float ConeHalfAngle; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct FBlackboardKeySelector ConeOrigin; // 0x70(0x28)
	struct FBlackboardKeySelector Observed; // 0x98(0x28)
};

// Class AthenaAI.BTDecorator_DockedToInteractable
// Size: 0x90 (Inherited: 0x90)
struct UBTDecorator_DockedToInteractable : UBTDecorator_BlackboardBase {
};

// Class AthenaAI.BTDecorator_FeatureToggle
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_FeatureToggle : UBTDecorator {
	struct FFeatureFlag Feature; // 0x68(0x0c)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// Class AthenaAI.BTDecorator_IsAbilityAvailable
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_IsAbilityAvailable : UBTDecorator {
	struct UClass* AIAbilityType; // 0x68(0x08)
};

// Class AthenaAI.BTDecorator_IsLocationInWater
// Size: 0xe8 (Inherited: 0x90)
struct UBTDecorator_IsLocationInWater : UBTDecorator_BlackboardBase {
	struct FBlackboardKeySelector WaterVolumeActor; // 0x90(0x28)
	struct FBlackboardKeySelector TargetLocation; // 0xb8(0x28)
	bool OnlyConsidersSwimmableWater; // 0xe0(0x01)
	char UnknownData_E1[0x7]; // 0xe1(0x07)
};

// Class AthenaAI.BTDecorator_MultipleRandomDiceRolls
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_MultipleRandomDiceRolls : UBTDecorator {
	struct TArray<struct FChanceAndBlackboardKeyPair> ChanceKeyPairs; // 0x68(0x10)
};

// Class AthenaAI.BTDecorator_RandomDiceRoll
// Size: 0x98 (Inherited: 0x68)
struct UBTDecorator_RandomDiceRoll : UBTDecorator {
	struct FAIDataProviderFloatValue Chance; // 0x68(0x30)
};

// Class AthenaAI.BTDecorator_RandomLoop
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_RandomLoop : UBTDecorator {
	int32_t MinNumLoops; // 0x68(0x04)
	int32_t MaxNumLoops; // 0x6c(0x04)
	struct UCurveFloat* RandomNumLoopCurve; // 0x70(0x08)
};

// Class AthenaAI.BTDecorator_RollAgainstPatrolChance
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_RollAgainstPatrolChance : UBTDecorator {
};

// Class AthenaAI.BTDecorator_TestAIInteractableType
// Size: 0x98 (Inherited: 0x90)
struct UBTDecorator_TestAIInteractableType : UBTDecorator_BlackboardBase {
	struct UClass* Type; // 0x90(0x08)
};

// Class AthenaAI.BTService_AimAIInteractable
// Size: 0xe8 (Inherited: 0x70)
struct UBTService_AimAIInteractable : UBTService {
	struct FBlackboardKeySelector Interactable; // 0x70(0x28)
	struct FBlackboardKeySelector TargetForInteractable; // 0x98(0x28)
	struct FBlackboardKeySelector TargetRelativeAimVector; // 0xc0(0x28)
};

// Class AthenaAI.BTService_DefaultFocusToPosAtRelativeAngleToObject
// Size: 0xa8 (Inherited: 0xa0)
struct UBTService_DefaultFocusToPosAtRelativeAngleToObject : UBTService_DefaultFocus {
	float RelativeYawAngleOffset; // 0xa0(0x04)
	float RelativeDistance; // 0xa4(0x04)
};

// Class AthenaAI.BTService_DetermineAIAbility
// Size: 0x98 (Inherited: 0x70)
struct UBTService_DetermineAIAbility : UBTService {
	struct FBlackboardKeySelector BlockChangeAIAbilitiesKey; // 0x70(0x28)
};

// Class AthenaAI.BTService_DisableCollisions
// Size: 0x80 (Inherited: 0x70)
struct UBTService_DisableCollisions : UBTService {
	struct TArray<char> ChannelsToLeaveUnaffected; // 0x70(0x10)
};

// Class AthenaAI.BTService_DisableDamageResponses
// Size: 0x70 (Inherited: 0x70)
struct UBTService_DisableDamageResponses : UBTService {
};

// Class AthenaAI.BTService_DisableStun
// Size: 0x70 (Inherited: 0x70)
struct UBTService_DisableStun : UBTService {
};

// Class AthenaAI.BTService_EnableFaceFocusActor
// Size: 0xd8 (Inherited: 0x98)
struct UBTService_EnableFaceFocusActor : UBTService_BlackboardBase {
	bool DisableUpdateMoveFocusForCurrentPathOnExit; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
	struct FConditionalBasedOnBlackboardKey Conditional; // 0xa0(0x38)
};

// Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch
// Size: 0xa0 (Inherited: 0x98)
struct UBTService_IncrementFloatValueWithTimeSpentInBranch : UBTService_BlackboardBase {
	float TimeMultiplier; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

// Class AthenaAI.BTService_OverrideTurnSpeed
// Size: 0xa0 (Inherited: 0x70)
struct UBTService_OverrideTurnSpeed : UBTService {
	struct FAIDataProviderFloatValue TurnSpeed; // 0x70(0x30)
};

// Class AthenaAI.BTService_PlayCustomMontageId
// Size: 0x78 (Inherited: 0x70)
struct UBTService_PlayCustomMontageId : UBTService {
	struct FCustomAnimationMontageId CustomAnimationMontageId; // 0x70(0x08)
};

// Class AthenaAI.BTService_QueryPerceptionForTarget
// Size: 0x70 (Inherited: 0x70)
struct UBTService_QueryPerceptionForTarget : UBTService {
};

// Class AthenaAI.BTService_RunEQSQuery
// Size: 0xe8 (Inherited: 0x98)
struct UBTService_RunEQSQuery : UBTService_BlackboardBase {
	bool OverrideQueryTemplateWithBlackboardValue; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
	struct FBlackboardKeySelector OverrideEQSKey; // 0xa0(0x28)
	struct UEnvQuery* QueryTemplate; // 0xc8(0x08)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0xd0(0x10)
	char RunMode; // 0xe0(0x01)
	bool ThrottleQueryTimePerFrame; // 0xe1(0x01)
	char UnknownData_E2[0x2]; // 0xe2(0x02)
	float MaxSecondsToSpendOnQueryPerFrame; // 0xe4(0x04)
};

// Class AthenaAI.BTService_DoesEQSQuerySucceed
// Size: 0xe8 (Inherited: 0xe8)
struct UBTService_DoesEQSQuerySucceed : UBTService_RunEQSQuery {
};

// Class AthenaAI.BTService_RunEQSQueryOnActorMovement
// Size: 0x128 (Inherited: 0xe8)
struct UBTService_RunEQSQueryOnActorMovement : UBTService_RunEQSQuery {
	struct FBlackboardKeySelector MovingActorKey; // 0xe8(0x28)
	float MinimumActorMovementToRunEQS; // 0x110(0x04)
	float MinimumActorVelocityChangeToRunEQS; // 0x114(0x04)
	bool RunEQSForYawChanges; // 0x118(0x01)
	char UnknownData_119[0x3]; // 0x119(0x03)
	float MinimumActorYawChangeToRunEQS; // 0x11c(0x04)
	char UnknownData_120[0x8]; // 0x120(0x08)
};

// Class AthenaAI.BTService_SetAIAnimationState
// Size: 0x98 (Inherited: 0x98)
struct UBTService_SetAIAnimationState : UBTService_BlackboardBase {
};

// Class AthenaAI.BTService_SetAIStrategy
// Size: 0x78 (Inherited: 0x70)
struct UBTService_SetAIStrategy : UBTService {
	struct UClass* NewStrategy; // 0x70(0x08)
};

// Class AthenaAI.BTService_SetBoolBlackboardValueToTrueOnCeaseRelevant
// Size: 0x98 (Inherited: 0x70)
struct UBTService_SetBoolBlackboardValueToTrueOnCeaseRelevant : UBTService {
	struct FBlackboardKeySelector BoolValueKey; // 0x70(0x28)
};

// Class AthenaAI.BTService_SetBoolBlackboardValueTrueWhileRelevant
// Size: 0x98 (Inherited: 0x70)
struct UBTService_SetBoolBlackboardValueTrueWhileRelevant : UBTService {
	struct FBlackboardKeySelector BoolValueKey; // 0x70(0x28)
};

// Class AthenaAI.BTService_SetNameBlackboardValueWhileRelevant
// Size: 0xa0 (Inherited: 0x70)
struct UBTService_SetNameBlackboardValueWhileRelevant : UBTService {
	struct FBlackboardKeySelector NameValueKey; // 0x70(0x28)
	struct FName Value; // 0x98(0x08)
};

// Class AthenaAI.BTService_TriggerNotifications
// Size: 0x98 (Inherited: 0x70)
struct UBTService_TriggerNotifications : UBTService {
	struct UClass* EnterBranchNotificationId; // 0x70(0x08)
	struct UClass* LeaveBranchNotificationId; // 0x78(0x08)
	char UnknownData_80[0x18]; // 0x80(0x18)
};

// Class AthenaAI.BTService_UpdateFocusOnBBChange
// Size: 0xe0 (Inherited: 0xa0)
struct UBTService_UpdateFocusOnBBChange : UBTService_DefaultFocus {
	bool DisableUpdateMoveFocusForCurrentPathOnExit; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
	struct FConditionalBasedOnBlackboardKey Conditional; // 0xa8(0x38)
};

// Class AthenaAI.BTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile
// Size: 0xe0 (Inherited: 0xe0)
struct UBTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile : UBTService_UpdateFocusOnBBChange {
};

// Class AthenaAI.BTService_UpdateTargetForInteractable
// Size: 0xc0 (Inherited: 0x70)
struct UBTService_UpdateTargetForInteractable : UBTService {
	struct FBlackboardKeySelector Interactable; // 0x70(0x28)
	struct FBlackboardKeySelector TargetForInteractable; // 0x98(0x28)
};

// Class AthenaAI.BTService_UpdateViewPitchForWieldedProjectileToHitTarget
// Size: 0x98 (Inherited: 0x98)
struct UBTService_UpdateViewPitchForWieldedProjectileToHitTarget : UBTService_BlackboardBase {
};

// Class AthenaAI.BTTask_ApplyStatusComposite
// Size: 0xb0 (Inherited: 0x60)
struct UBTTask_ApplyStatusComposite : UBTTaskNode {
	bool bOneShot; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct FAIDataProviderFloatValue ContinuousStatusDuration; // 0x68(0x30)
	struct FStatus StatusToApply; // 0x98(0x18)
};

// Class AthenaAI.BTTask_AthenaMoveTo
// Size: 0xb8 (Inherited: 0xa0)
struct UBTTask_AthenaMoveTo : UBTTask_MoveTo {
	bool ShouldFailBeforeSlowDown; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	float ExitBeforeSlowDownDistanceTolerance; // 0xa4(0x04)
	bool ShouldOverrideMaxSpeedToSlow; // 0xa8(0x01)
	char UnknownData_A9[0x3]; // 0xa9(0x03)
	float OverrideMaxSpeedToSlowDistanceFactor; // 0xac(0x04)
	bool MaintainFacingBeforeMove; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
};

// Class AthenaAI.BTTask_MoveToFailOnDistanceChange
// Size: 0xc0 (Inherited: 0xb8)
struct UBTTask_MoveToFailOnDistanceChange : UBTTask_AthenaMoveTo {
	bool FailOnDistanceBeingLess; // 0xb8(0x01)
	char UnknownData_B9[0x3]; // 0xb9(0x03)
	float FailDistance; // 0xbc(0x04)
};

// Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors
// Size: 0xd0 (Inherited: 0xc0)
struct UBTTask_MoveToFailOnDistanceToSeenActors : UBTTask_MoveToFailOnDistanceChange {
	char UnknownData_C0[0x10]; // 0xc0(0x10)
};

// Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged
// Size: 0xe8 (Inherited: 0xc0)
struct UBTTask_MoveToFailOnDistanceToTargetChanged : UBTTask_MoveToFailOnDistanceChange {
	struct FBlackboardKeySelector TargetBlackboardKey; // 0xc0(0x28)
};

// Class AthenaAI.BTTask_MoveToMovingLocation
// Size: 0xc8 (Inherited: 0xb8)
struct UBTTask_MoveToMovingLocation : UBTTask_AthenaMoveTo {
	float MinimumLocationMovementForRePath; // 0xb8(0x04)
	float MinimumTimeBeforeRePath; // 0xbc(0x04)
	bool IsContinuous; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
};

// Class AthenaAI.BTTask_AthenaWait
// Size: 0xf8 (Inherited: 0x60)
struct UBTTask_AthenaWait : UBTTaskNode {
	bool UseMinMax; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct FAIDataProviderFloatValue Min; // 0x68(0x30)
	struct FAIDataProviderFloatValue Max; // 0x98(0x30)
	struct FAIDataProviderFloatValue FixedWaitTime; // 0xc8(0x30)
};

// Class AthenaAI.BTTask_AthenaWaitWithFloor
// Size: 0x128 (Inherited: 0xf8)
struct UBTTask_AthenaWaitWithFloor : UBTTask_AthenaWait {
	struct FAIDataProviderFloatValue Floor; // 0xf8(0x30)
};

// Class AthenaAI.BTTask_BurrowAbilityTriggerEruptAreaFromBlackboard
// Size: 0x60 (Inherited: 0x60)
struct UBTTask_BurrowAbilityTriggerEruptAreaFromBlackboard : UBTTaskNode {
};

// Class AthenaAI.BTTask_BurrowIntoGround
// Size: 0x60 (Inherited: 0x60)
struct UBTTask_BurrowIntoGround : UBTTaskNode {
};

// Class AthenaAI.BTTask_ClearBlackboardValue
// Size: 0x88 (Inherited: 0x88)
struct UBTTask_ClearBlackboardValue : UBTTask_BlackboardBase {
};

// Class AthenaAI.BTTask_ClearPerceptualData
// Size: 0x60 (Inherited: 0x60)
struct UBTTask_ClearPerceptualData : UBTTaskNode {
};

// Class AthenaAI.BTTask_CopyAIInteractionPointAndFocusToBlackboard
// Size: 0xd8 (Inherited: 0x60)
struct UBTTask_CopyAIInteractionPointAndFocusToBlackboard : UBTTaskNode {
	struct FBlackboardKeySelector SourceInteractable; // 0x60(0x28)
	struct FBlackboardKeySelector InteractionPosition; // 0x88(0x28)
	struct FBlackboardKeySelector InteractionFocusPosition; // 0xb0(0x28)
};

// Class AthenaAI.BTTask_CopyBlackboardActor
// Size: 0xb0 (Inherited: 0x60)
struct UBTTask_CopyBlackboardActor : UBTTaskNode {
	struct FBlackboardKeySelector SrcBlackboardKey; // 0x60(0x28)
	struct FBlackboardKeySelector TargetBlackboardKey; // 0x88(0x28)
};

// Class AthenaAI.BTTask_CopyBlackboardVector
// Size: 0xb0 (Inherited: 0x60)
struct UBTTask_CopyBlackboardVector : UBTTaskNode {
	struct FBlackboardKeySelector SrcBlackboardKey; // 0x60(0x28)
	struct FBlackboardKeySelector TargetBlackboardKey; // 0x88(0x28)
};

// Class AthenaAI.BTTask_DetermineFollowUpAIAbility
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_DetermineFollowUpAIAbility : UBTTaskNode {
	struct UClass* AIAbilityTypeToFollowUp; // 0x60(0x08)
};

// Class AthenaAI.BTTask_ExecuteAIAbility
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_ExecuteAIAbility : UBTTaskNode {
	struct UClass* AIAbilityType; // 0x60(0x08)
};

// Class AthenaAI.BTTask_GetCurrentHealth
// Size: 0x88 (Inherited: 0x88)
struct UBTTask_GetCurrentHealth : UBTTask_BlackboardBase {
};

// Class AthenaAI.BTTask_IgnoreActorTemporarily
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_IgnoreActorTemporarily : UBTTask_BlackboardBase {
	float TimeToForget; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class AthenaAI.BTTask_IncrementBlackboardFloatValue
// Size: 0xb8 (Inherited: 0x88)
struct UBTTask_IncrementBlackboardFloatValue : UBTTask_BlackboardBase {
	struct FAIDataProviderFloatValue FloatValueDelta; // 0x88(0x30)
};

// Class AthenaAI.BTTask_IncrementBlackboardIntValue
// Size: 0xb8 (Inherited: 0x88)
struct UBTTask_IncrementBlackboardIntValue : UBTTask_BlackboardBase {
	struct FAIDataProviderIntValue IntegerValueDelta; // 0x88(0x30)
};

// Class AthenaAI.BTTask_InteractWith
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_InteractWith : UBTTask_BlackboardBase {
	struct UClass* NotificationId; // 0x88(0x08)
};

// Class AthenaAI.BTTask_MoveToTarget
// Size: 0xd0 (Inherited: 0xa0)
struct UBTTask_MoveToTarget : UBTTask_MoveTo {
	float MaxDistFromDestinationPosToTargetPos; // 0xa0(0x04)
	float OverrideMaxSpeedToSlowDistanceFactor; // 0xa4(0x04)
	struct FBlackboardKeySelector TargetBlackboardKey; // 0xa8(0x28)
};

// Class AthenaAI.BTTask_NetworkTriggerAnim
// Size: 0x70 (Inherited: 0x60)
struct UBTTask_NetworkTriggerAnim : UBTTaskNode {
	struct UAnimSequence* Anim; // 0x60(0x08)
	float AnimLength; // 0x68(0x04)
	float AnimPlayRate; // 0x6c(0x04)
};

// Class AthenaAI.BTTask_NOP
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_NOP : UBTTaskNode {
	int32_t Id; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// Class AthenaAI.BTTask_PlayCustomMontageId
// Size: 0x70 (Inherited: 0x60)
struct UBTTask_PlayCustomMontageId : UBTTaskNode {
	struct FCustomAnimationMontageId CustomAnimationMontageId; // 0x60(0x08)
	float TimeToWaitOnServer; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// Class AthenaAI.BTTask_PlayMontage
// Size: 0x70 (Inherited: 0x60)
struct UBTTask_PlayMontage : UBTTaskNode {
	struct UObject* MontageToPlay; // 0x60(0x08)
	bool PlayAsDynamicMontage; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class AthenaAI.BTTask_RequestDespawn
// Size: 0x60 (Inherited: 0x60)
struct UBTTask_RequestDespawn : UBTTaskNode {
};

// Class AthenaAI.BTTask_SetAIStrategy
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_SetAIStrategy : UBTTaskNode {
	struct UClass* NewStrategy; // 0x60(0x08)
};

// Class AthenaAI.BTTask_SetAIStrategyFromWeightedArray
// Size: 0x70 (Inherited: 0x60)
struct UBTTask_SetAIStrategyFromWeightedArray : UBTTaskNode {
	struct TArray<struct FWeightedAIStrategyChance> WeightedStrategies; // 0x60(0x10)
};

// Class AthenaAI.BTTask_SetBlackboardActor
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_SetBlackboardActor : UBTTask_BlackboardBase {
	struct AActor* Actor; // 0x88(0x08)
};

// Class AthenaAI.BTTask_SetBlackboardBoolValue
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_SetBlackboardBoolValue : UBTTask_BlackboardBase {
	bool NewValue; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// Class AthenaAI.BTTask_SetBlackboardClassValue
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_SetBlackboardClassValue : UBTTask_BlackboardBase {
	struct UClass* ClassValue; // 0x88(0x08)
};

// Class AthenaAI.BTTask_SetBlackboardEQSValue
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_SetBlackboardEQSValue : UBTTask_BlackboardBase {
	struct UEnvQuery* EQS; // 0x88(0x08)
};

// Class AthenaAI.BTTask_SetBlackboardFloatValue
// Size: 0xb8 (Inherited: 0x88)
struct UBTTask_SetBlackboardFloatValue : UBTTask_BlackboardBase {
	struct FAIDataProviderFloatValue FloatValue; // 0x88(0x30)
};

// Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax
// Size: 0xe8 (Inherited: 0x88)
struct UBTTask_SetBlackboardFloatValueFromMinMax : UBTTask_BlackboardBase {
	struct FAIDataProviderFloatValue MinValue; // 0x88(0x30)
	struct FAIDataProviderFloatValue MaxValue; // 0xb8(0x30)
};

// Class AthenaAI.BTTask_SetBlackboardFloatValueFromWeightedArray
// Size: 0xb8 (Inherited: 0x88)
struct UBTTask_SetBlackboardFloatValueFromWeightedArray : UBTTask_BlackboardBase {
	struct FAIDataProviderStructValue WeightedArrayFromParams; // 0x88(0x30)
};

// Class AthenaAI.BTTask_SetBlackboardIntValue
// Size: 0xb8 (Inherited: 0x88)
struct UBTTask_SetBlackboardIntValue : UBTTask_BlackboardBase {
	struct FAIDataProviderIntValue IntValue; // 0x88(0x30)
};

// Class AthenaAI.BTTask_SetBlackboardVectorValue
// Size: 0xc0 (Inherited: 0x88)
struct UBTTask_SetBlackboardVectorValue : UBTTask_BlackboardBase {
	bool UseVectorFromBlackboard; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	struct FVector StaticValue; // 0x8c(0x0c)
	struct FBlackboardKeySelector BlackboardKeyToUseForVector; // 0x98(0x28)
};

// Class AthenaAI.BTTask_SetFollowUpAbility
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_SetFollowUpAbility : UBTTaskNode {
	struct UClass* AIAbilityType; // 0x60(0x08)
};

// Class AthenaAI.BTTask_SetInHiddenActionState
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_SetInHiddenActionState : UBTTaskNode {
	bool EnableHiddenActionState; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// Class AthenaAI.BTTask_SetIsHeadingOffNavMeshCheck
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_SetIsHeadingOffNavMeshCheck : UBTTaskNode {
	bool DisableIsHeadingOffNavMeshCheck; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot
// Size: 0xd8 (Inherited: 0x60)
struct UBTTask_SetupAITargetWeaponForNextShot : UBTTaskNode {
	struct FBlackboardKeySelector Interactable; // 0x60(0x28)
	struct FBlackboardKeySelector TargetForInteractable; // 0x88(0x28)
	struct FBlackboardKeySelector TargetRelativeAimVector; // 0xb0(0x28)
};

// Class AthenaAI.BTTask_SetVelocity
// Size: 0x98 (Inherited: 0x88)
struct UBTTask_SetVelocity : UBTTask_BlackboardBase {
	bool UseBlackboardKey; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	struct FVector NewVelocity; // 0x8c(0x0c)
};

// Class AthenaAI.BTTask_SpawnActorAndStore
// Size: 0xa0 (Inherited: 0x60)
struct UBTTask_SpawnActorAndStore : UBTTaskNode {
	struct FBlackboardKeySelector BlackBoardKeyNameToStoreActor; // 0x60(0x28)
	struct UClass* ActorToSpawn; // 0x88(0x08)
	struct FVector SpawnOffset; // 0x90(0x0c)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

// Class AthenaAI.BTTask_StopMovementImmediately
// Size: 0x60 (Inherited: 0x60)
struct UBTTask_StopMovementImmediately : UBTTaskNode {
};

// Class AthenaAI.BTTask_StorePawnLocationInBlackboard
// Size: 0x88 (Inherited: 0x88)
struct UBTTask_StorePawnLocationInBlackboard : UBTTask_BlackboardBase {
};

// Class AthenaAI.BTTask_TeleportTo
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_TeleportTo : UBTTask_BlackboardBase {
	bool UseNavMesh; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// Class AthenaAI.BTTask_TriggerNotification
// Size: 0x70 (Inherited: 0x60)
struct UBTTask_TriggerNotification : UBTTaskNode {
	struct UClass* NotificationId; // 0x60(0x08)
	char UnknownData_68[0x8]; // 0x68(0x08)
};

// Class AthenaAI.BTTask_UnwieldCurrentWeapon
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_UnwieldCurrentWeapon : UBTTaskNode {
	bool WaitForSuccessfulUnwield; // 0x60(0x01)
	bool ShouldUnwieldFast; // 0x61(0x01)
	char UnknownData_62[0x6]; // 0x62(0x06)
};

// Class AthenaAI.BurrowInterface
// Size: 0x28 (Inherited: 0x28)
struct UBurrowInterface : UInterface {
};

// Class AthenaAI.BurrowComponent
// Size: 0x108 (Inherited: 0xc8)
struct UBurrowComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UClass* BurrowCrackClass; // 0xd0(0x08)
	struct UClass* BurrowEruptClass; // 0xd8(0x08)
	float BurrowFadeoutTime; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct ABurrowCrack*> BurrowCracks; // 0xe8(0x10)
	struct ABurrowEruptBase* BurrowErupt; // 0xf8(0x08)
	char UnknownData_100[0x8]; // 0x100(0x08)
};

// Class AthenaAI.ControllableAIActionSpot
// Size: 0x520 (Inherited: 0x510)
struct AControllableAIActionSpot : AControllableObject {
	struct UAIActionSpotComponent* AIActionSpotComponent; // 0x510(0x08)
	struct USceneComponent* SceneComponent; // 0x518(0x08)
};

// Class AthenaAI.CoralShieldVFXComponent
// Size: 0x1a8 (Inherited: 0xc8)
struct UCoralShieldVFXComponent : UActorComponent {
	struct UParticleSystem* VFXAsset; // 0xc8(0x08)
	struct FName VfxSocketName; // 0xd0(0x08)
	struct UParticleSystemComponent* SpawnedVFXSystem; // 0xd8(0x08)
	char CurrentCoralShieldRole; // 0xe0(0x01)
	char UnknownData_E1[0x7]; // 0xe1(0x07)
	struct UCurveFloat* OffToOnCurve; // 0xe8(0x08)
	float OffToOnDuration; // 0xf0(0x04)
	char UnknownData_F4[0x4]; // 0xf4(0x04)
	struct UCurveFloat* OnToOffCurve; // 0xf8(0x08)
	float OnToOffDuration; // 0x100(0x04)
	struct FName OffToOnParamOverrideName; // 0x104(0x08)
	struct FName OnToOffParamOverrideName; // 0x10c(0x08)
	struct FName ReceiverMeshComponentName; // 0x114(0x08)
	struct FName CasterMeshComponentName; // 0x11c(0x08)
	char UnknownData_124[0x4]; // 0x124(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> OverriddenMaterialsForReceive; // 0x128(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> OverriddenMaterialsForCast; // 0x138(0x10)
	char UnknownData_148[0x60]; // 0x148(0x60)

	void OnRep_CurrentCoralShieldRole(); // Function AthenaAI.CoralShieldVFXComponent.OnRep_CurrentCoralShieldRole // Final|Native|Private // @ game+0x3cc1a00
};

// Class AthenaAI.CustomAttitudeInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomAttitudeInterface : UInterface {
};

// Class AthenaAI.CustomSkeletonAnimationDataList
// Size: 0x38 (Inherited: 0x28)
struct UCustomSkeletonAnimationDataList : UDataAsset {
	struct TArray<struct FStringAssetReference> CustomAnimationAssets; // 0x28(0x10)
};

// Class AthenaAI.EnvQueryContext_PositionFromBlackboard
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryContext_PositionFromBlackboard : UEnvQueryContext {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_ContextLocationFromBlackboard : UEnvQueryContext_PositionFromBlackboard {
};

// Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_HomePositionFromBlackboard : UEnvQueryContext_PositionFromBlackboard {
};

// Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_KnockbackPosFromBlackboard : UEnvQueryContext_PositionFromBlackboard {
};

// Class AthenaAI.EnvQueryContext_ThrowableTargetPositionFromBlackboard
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_ThrowableTargetPositionFromBlackboard : UEnvQueryContext_PositionFromBlackboard {
};

// Class AthenaAI.EnvQueryContext_SeenActors
// Size: 0x38 (Inherited: 0x28)
struct UEnvQueryContext_SeenActors : UEnvQueryContext {
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// Class AthenaAI.EnvQueryContext_SeenActorsProjectedToGround
// Size: 0x58 (Inherited: 0x28)
struct UEnvQueryContext_SeenActorsProjectedToGround : UEnvQueryContext {
	struct TArray<struct AActor*> SeenActors; // 0x28(0x10)
	char UnknownData_38[0x20]; // 0x38(0x20)
};

// Class AthenaAI.EnvQueryContext_SpawnedForActorFromBlackboard
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_SpawnedForActorFromBlackboard : UEnvQueryContext {
};

// Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_TargetActorFromBlackboard : UEnvQueryContext {
};

// Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_TargetActorFromBlackboardPredictedLocation : UEnvQueryContext_TargetActorFromBlackboard {
};

// Class AthenaAI.EnvQueryContext_TargetActorFromParams
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_TargetActorFromParams : UEnvQueryContext {
};

// Class AthenaAI.EnvQueryGenerator_AIRegionLocations
// Size: 0x68 (Inherited: 0x58)
struct UEnvQueryGenerator_AIRegionLocations : UEnvQueryGenerator {
	bool UseOverrideSpawnType; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	struct FName OverrideSpawnType; // 0x5c(0x08)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// Class AthenaAI.EnvQueryGenerator_FromContext
// Size: 0x60 (Inherited: 0x58)
struct UEnvQueryGenerator_FromContext : UEnvQueryGenerator {
	struct UClass* Context; // 0x58(0x08)
};

// Class AthenaAI.EnvQueryGenerator_Line
// Size: 0x140 (Inherited: 0x98)
struct UEnvQueryGenerator_Line : UEnvQueryGenerator_ProjectedPoints {
	struct UClass* FromContext; // 0x98(0x08)
	struct UClass* ToContext; // 0xa0(0x08)
	struct FAIDataProviderFloatValue PointSpacing; // 0xa8(0x30)
	struct FAIDataProviderIntValue NumExtraPairsOfParallelLines; // 0xd8(0x30)
	struct FAIDataProviderFloatValue ParallelLineSpacing; // 0x108(0x30)
	float MaxValidLineLength; // 0x138(0x04)
	bool ForceIncludeEndPoint; // 0x13c(0x01)
	bool ProjectPointsToWaterSurface; // 0x13d(0x01)
	char UnknownData_13E[0x2]; // 0x13e(0x02)
};

// Class AthenaAI.EnvQueryGenerator_PointsAtContext
// Size: 0xa0 (Inherited: 0x98)
struct UEnvQueryGenerator_PointsAtContext : UEnvQueryGenerator_ProjectedPoints {
	struct UClass* Context; // 0x98(0x08)
};

// Class AthenaAI.EnvQueryGenerator_Sphere
// Size: 0x168 (Inherited: 0x98)
struct UEnvQueryGenerator_Sphere : UEnvQueryGenerator_ProjectedPoints {
	struct TArray<struct FAIDataProviderFloatValue> Radiuses; // 0x98(0x10)
	struct FAIDataProviderIntValue NumberOfVerticalCircles; // 0xa8(0x30)
	struct FAIDataProviderIntValue NumberOfHorizontalCircles; // 0xd8(0x30)
	char DefineFirstPointDirection : 1; // 0x108(0x01)
	char UnknownData_108_1 : 7; // 0x108(0x01)
	char UnknownData_109[0x7]; // 0x109(0x07)
	struct FEnvDirection FirstPointDirection; // 0x110(0x20)
	struct UClass* Centre; // 0x130(0x08)
	struct FAIDataProviderFloatValue ZOffsetFromCentre; // 0x138(0x30)
};

// Class AthenaAI.EnvQueryGenerator_WaterArc
// Size: 0x218 (Inherited: 0x98)
struct UEnvQueryGenerator_WaterArc : UEnvQueryGenerator_ProjectedPoints {
	struct UClass* Origin; // 0x98(0x08)
	struct FAIDataProviderIntValue NumberOfArcsToGenerate; // 0xa0(0x30)
	struct FAIDataProviderFloatValue MinArcRadius; // 0xd0(0x30)
	struct FAIDataProviderFloatValue MaxArcRadius; // 0x100(0x30)
	struct FAIDataProviderFloatValue MinArcTiltDegrees; // 0x130(0x30)
	struct FAIDataProviderFloatValue MaxArcTiltDegrees; // 0x160(0x30)
	struct FAIDataProviderFloatValue MinArcPercentage; // 0x190(0x30)
	struct FAIDataProviderFloatValue MaxArcPercentage; // 0x1c0(0x30)
	bool IncludeDirectArcToTarget; // 0x1f0(0x01)
	char UnknownData_1F1[0x7]; // 0x1f1(0x07)
	struct UClass* DirectArcTarget; // 0x1f8(0x08)
	char UnknownData_200[0x18]; // 0x200(0x18)
};

// Class AthenaAI.EnvQueryGenerator_WaterDonut
// Size: 0x1f8 (Inherited: 0x98)
struct UEnvQueryGenerator_WaterDonut : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; // 0x98(0x30)
	struct FAIDataProviderFloatValue OuterRadius; // 0xc8(0x30)
	struct FAIDataProviderIntValue NumberOfRings; // 0xf8(0x30)
	struct FAIDataProviderIntValue PointsPerRing; // 0x128(0x30)
	struct FEnvDirection ArcDirection; // 0x158(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x178(0x30)
	struct FAIDataProviderFloatValue ZOffsetFromCentre; // 0x1a8(0x30)
	struct UClass* Center; // 0x1d8(0x08)
	char bDefineArc : 1; // 0x1e0(0x01)
	char ProjectPointsToWaterSurface : 1; // 0x1e0(0x01)
	char UnknownData_1E0_2 : 6; // 0x1e0(0x01)
	char UnknownData_1E1[0x7]; // 0x1e1(0x07)
	struct UClass* WaterPlaneSourceContext; // 0x1e8(0x08)
	char ApplyZOffsetToProjectPoints : 1; // 0x1f0(0x01)
	char UnknownData_1F0_1 : 7; // 0x1f0(0x01)
	char UnknownData_1F1[0x7]; // 0x1f1(0x07)
};

// Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing
// Size: 0x110 (Inherited: 0x98)
struct UEnvQueryGenerator_WaterMultiDeckerRing : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue Radius; // 0x98(0x30)
	struct TArray<struct FAIDataProviderFloatValue> ZOffsetOfRingsFromContext; // 0xc8(0x10)
	struct FAIDataProviderIntValue PointsPerRing; // 0xd8(0x30)
	struct UClass* Center; // 0x108(0x08)
};

// Class AthenaAI.EnvQueryProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryProviderInterface : UInterface {
};

// Class AthenaAI.EnvQueryTest_HasLineOfSight
// Size: 0x1b0 (Inherited: 0x170)
struct UEnvQueryTest_HasLineOfSight : UEnvQueryTest {
	char TraceDirection; // 0x170(0x01)
	char UnknownData_171[0x7]; // 0x171(0x07)
	struct UClass* Context; // 0x178(0x08)
	struct FAIDataProviderFloatValue RadialOffsetFromLOSEndTest; // 0x180(0x30)
};

// Class AthenaAI.EnvQueryTest_InGameEventExclusionZone
// Size: 0x178 (Inherited: 0x170)
struct UEnvQueryTest_InGameEventExclusionZone : UEnvQueryTest {
	float Radius; // 0x170(0x04)
	char UnknownData_174[0x4]; // 0x174(0x04)
};

// Class AthenaAI.EnvQueryTest_IsAngleInRange2D
// Size: 0x210 (Inherited: 0x170)
struct UEnvQueryTest_IsAngleInRange2D : UEnvQueryTest {
	struct FEnvDirection LineA; // 0x170(0x20)
	struct FEnvDirection LineB; // 0x190(0x20)
	struct FAIDataProviderFloatValue MinAngleDegrees; // 0x1b0(0x30)
	struct FAIDataProviderFloatValue MaxAngleDegrees; // 0x1e0(0x30)
};

// Class AthenaAI.EnvQueryTest_WaterHeight
// Size: 0x180 (Inherited: 0x170)
struct UEnvQueryTest_WaterHeight : UEnvQueryTest {
	float WaterHeightCheckOffset; // 0x170(0x04)
	char UnknownData_174[0x4]; // 0x174(0x04)
	struct UClass* ActorWithWaterPlaneContext; // 0x178(0x08)
};

// Class AthenaAI.HealthGemComponent
// Size: 0x220 (Inherited: 0xc8)
struct UHealthGemComponent : UActorComponent {
	char UnknownData_C8[0x138]; // 0xc8(0x138)
	struct TArray<struct UMaterialInstanceDynamic*> OverridenMaterials; // 0x200(0x10)
	struct FName EmissiveMaterialParameterName; // 0x210(0x08)
	bool BuildMaterialMapOnBeginPlay; // 0x218(0x01)
	char UnknownData_219[0x7]; // 0x219(0x07)
};

// Class AthenaAI.IsAIOfClassStatCondition
// Size: 0x40 (Inherited: 0x30)
struct UIsAIOfClassStatCondition : UTargetedStatCondition {
	struct TArray<struct UClass*> AIClasses; // 0x30(0x10)
};

// Class AthenaAI.IsAIOfFormStatCondition
// Size: 0x40 (Inherited: 0x30)
struct UIsAIOfFormStatCondition : UTargetedStatCondition {
	struct TArray<struct UClass*> AllowedAIForms; // 0x30(0x10)
};

// Class AthenaAI.IsAIOfSkillsetStatCondition
// Size: 0x40 (Inherited: 0x30)
struct UIsAIOfSkillsetStatCondition : UTargetedStatCondition {
	struct TArray<struct UAthenaAIControllerParamsDataAsset*> AISkillsets; // 0x30(0x10)
};

// Class AthenaAI.IsAIUsingFormDataAssetStatCondition
// Size: 0x40 (Inherited: 0x30)
struct UIsAIUsingFormDataAssetStatCondition : UTargetedStatCondition {
	struct TArray<struct UAthenaAIFormDataAsset*> AllowedAIDataAssetForms; // 0x30(0x10)
};

// Class AthenaAI.PeriodicAINoiseEventComponent
// Size: 0x110 (Inherited: 0xc8)
struct UPeriodicAINoiseEventComponent : UActorComponent {
	struct FName NoiseTag; // 0xc8(0x08)
	bool NoiseRangeBasedOnMovementSpeed; // 0xd0(0x01)
	char UnknownData_D1[0x3]; // 0xd1(0x03)
	float ConstantNoiseRange; // 0xd4(0x04)
	struct UCurveFloat* MovementSpeedToNoiseRange; // 0xd8(0x08)
	struct AActor* OwnerActor; // 0xe0(0x08)
	char UnknownData_E8[0x28]; // 0xe8(0x28)
};

// Class AthenaAI.PlayerEntitlementCustomAttitudeComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UPlayerEntitlementCustomAttitudeComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UClass* Entitlement; // 0xd0(0x08)
	char HasEntitlementAttitude; // 0xd8(0x01)
	char LacksEntitlementAttitude; // 0xd9(0x01)
	char UnknownData_DA[0x6]; // 0xda(0x06)
};

// Class AthenaAI.PlayerProximityObservedSpawnContextProvider
// Size: 0x48 (Inherited: 0x28)
struct UPlayerProximityObservedSpawnContextProvider : UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
};

// Class AthenaAI.SimpleAIRegion
// Size: 0x60 (Inherited: 0x28)
struct USimpleAIRegion : UObject {
	char UnknownData_28[0x38]; // 0x28(0x38)
};

// Class AthenaAI.SpawnContextProviderZone
// Size: 0x3e0 (Inherited: 0x3c8)
struct ASpawnContextProviderZone : AActor {
	struct TArray<struct FName> SpawnContextIDs; // 0x3c8(0x10)
	struct UBoxComponent* BoundingBox; // 0x3d8(0x08)

	void RemoveContextsFromTarget(struct AActor* InActor, struct UPrimitiveComponent* InComponent, int32_t InOtherBodyIndex); // Function AthenaAI.SpawnContextProviderZone.RemoveContextsFromTarget // Final|Native|Private // @ game+0x3cc2750
	void AddContextsToTarget(struct AActor* InActor, struct UPrimitiveComponent* InComponent, int32_t InOtherBodyIndex, bool InFromSweep, struct FHitResult InSweepResult); // Function AthenaAI.SpawnContextProviderZone.AddContextsToTarget // Final|Native|Private|HasOutParms // @ game+0x3cc09e0
};

// Class AthenaAI.BaseSpawnBlockingBehaviourStrategy
// Size: 0x48 (Inherited: 0x48)
struct UBaseSpawnBlockingBehaviourStrategy : USpawnerBehaviourStrategy {
};

// Class AthenaAI.SirenEncounterSpawnBlockingBehaviourStrategy
// Size: 0x58 (Inherited: 0x48)
struct USirenEncounterSpawnBlockingBehaviourStrategy : UBaseSpawnBlockingBehaviourStrategy {
	float ChanceToSpawn; // 0x48(0x04)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class AthenaAI.StatusResponseSetBlackboardBoolKey
// Size: 0x40 (Inherited: 0x30)
struct UStatusResponseSetBlackboardBoolKey : UStatusResponse {
	struct FName BlackboardBoolKeyName; // 0x30(0x08)
	bool bValueWhenActive; // 0x38(0x01)
	bool ShouldClearKeyOnEnd; // 0x39(0x01)
	char UnknownData_3A[0x6]; // 0x3a(0x06)
};

// Class AthenaAI.StatusResponseSetBlackboardClassKey
// Size: 0x50 (Inherited: 0x30)
struct UStatusResponseSetBlackboardClassKey : UStatusResponse {
	struct FName BlackboardClassKeyName; // 0x30(0x08)
	struct UClass* ValueWhenActive; // 0x38(0x08)
	bool SetValueOnDeactivate; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
	struct UClass* ValueWhenDeactivated; // 0x48(0x08)
};

// Class AthenaAI.StatusResponseSetBlackboardFloatKey
// Size: 0x48 (Inherited: 0x30)
struct UStatusResponseSetBlackboardFloatKey : UStatusResponse {
	struct FName BlackboardFloatKeyName; // 0x30(0x08)
	float ValueWhenActive; // 0x38(0x04)
	bool ShouldClearKeyOnEnd; // 0x3c(0x01)
	char UnknownData_3D[0xb]; // 0x3d(0x0b)
};

// Class AthenaAI.TinySharkLootSpawnParamsDataAsset
// Size: 0xb0 (Inherited: 0x28)
struct UTinySharkLootSpawnParamsDataAsset : UDataAsset {
	float SpawnDelayAfterDeath; // 0x28(0x04)
	float PercentageChanceToDrop; // 0x2c(0x04)
	struct TArray<struct FCauseOfDeathItemSpawnDistribution> DeathItemSpawnDistributionOverrides; // 0x30(0x10)
	struct UShortRangeMarkerDataAsset* RewardMarkerDataAsset; // 0x40(0x08)
	bool SpawnOnStart; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct FItemSpawnParams SpawnParams; // 0x50(0x28)
	struct UWeightedItemDescSpawnDataAsset* ReferencedSpawnDistributionAsset; // 0x78(0x08)
	struct TArray<struct FItemSpawnTransform> SpawnTransforms; // 0x80(0x10)
	struct TArray<struct FItemSpawnTransformWithRandomQuantity> SpawnTransformsWithRandomQuantities; // 0x90(0x10)
	char SpawnSource; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	float SpawnRate; // 0xa4(0x04)
	bool DestroyProxiesOnEndPlay; // 0xa8(0x01)
	bool SpawnWithPhysicsEnabled; // 0xa9(0x01)
	bool DoNotAttachToOwnerWhenSpawned; // 0xaa(0x01)
	bool DropItemsOnSpawn; // 0xab(0x01)
	bool DropItemsUsingPriorityAIDropParams; // 0xac(0x01)
	char UnknownData_AD[0x3]; // 0xad(0x03)
};

// Class AthenaAI.VulnerabilityDuringAIStrategyComponent
// Size: 0x160 (Inherited: 0xc8)
struct UVulnerabilityDuringAIStrategyComponent : UActorComponent {
	struct TArray<struct FAIStrategyVulnerabilityData> StrategyVulnerabilities; // 0xc8(0x10)
	struct UHealthComponent* HealthComponent; // 0xd8(0x08)
	char UnknownData_E0[0x80]; // 0xe0(0x80)
};

// Class AthenaAI.WaterbasedAISupplier
// Size: 0x3d0 (Inherited: 0x3c8)
struct AWaterbasedAISupplier : AActor {
	struct UAISpawnerList* Spawners; // 0x3c8(0x08)
};

// Class AthenaAI.AIDialogueStateProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIDialogueStateProviderInterface : UInterface {
};

// Class AthenaAI.SimpleDialogueStateProvider
// Size: 0x38 (Inherited: 0x28)
struct USimpleDialogueStateProvider : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// Class AthenaAI.BountySpawnerAudioZonesInterface
// Size: 0x28 (Inherited: 0x28)
struct UBountySpawnerAudioZonesInterface : UInterface {
};

// Class AthenaAI.AIBountySpawner
// Size: 0x5f8 (Inherited: 0x438)
struct UAIBountySpawner : UAISpawner {
	float MaximumDistanceToPerceiveOnSpawnsAfterFirstGroup; // 0x438(0x04)
	char UnknownData_43C[0x4]; // 0x43c(0x04)
	struct TArray<struct FAIBountySpawnerWaveGroup> WaveGroups; // 0x440(0x10)
	struct FStringAssetReference TeamColor; // 0x450(0x10)
	struct FWeightedProbabilityRange WavesPerRelocate; // 0x460(0x20)
	struct FWeightedProbabilityRange WaveSplitChance; // 0x480(0x20)
	struct TArray<float> WaveSuicideTime; // 0x4a0(0x10)
	float WaveSuicideMinDist; // 0x4b0(0x04)
	bool ImmediatelyPerceiveTargets; // 0x4b4(0x01)
	bool DynamicallyCreateWaveDelays; // 0x4b5(0x01)
	char UnknownData_4B6[0x2]; // 0x4b6(0x02)
	float DynamicMinTimeBetweenSpawns; // 0x4b8(0x04)
	float DynamicMaxTimeBetweenSpawns; // 0x4bc(0x04)
	struct UAICombatDialogue* ActiveCombatDialogue; // 0x4c0(0x08)
	char UnknownData_4C8[0x28]; // 0x4c8(0x28)
	struct TArray<struct AActor*> CrewMembers; // 0x4f0(0x10)
	struct TArray<struct AActor*> NonCrewMembersInRegion; // 0x500(0x10)
	struct TArray<struct APlayerController*> AllPlayersThatParticipated; // 0x510(0x10)
	struct TArray<struct AActor*> AllCurrentlyParticipatingPlayers; // 0x520(0x10)
	struct TArray<struct AActor*> AllCurrentlyParticipatingShips; // 0x530(0x10)
	struct UOverlapTriggerComponent* AudioZoneTriggerComponent; // 0x540(0x08)
	char UnknownData_548[0xb0]; // 0x548(0xb0)
};

// Class AthenaAI.PostBountyAIPawnSpawnedAction
// Size: 0x28 (Inherited: 0x28)
struct UPostBountyAIPawnSpawnedAction : UDataAsset {
};

// Class AthenaAI.ApplyNameplateToBountyWaveSpawnedAction
// Size: 0x60 (Inherited: 0x28)
struct UApplyNameplateToBountyWaveSpawnedAction : UPostBountyAIPawnSpawnedAction {
	struct FText AIName; // 0x28(0x38)
};

// Class AthenaAI.AIFaunaSpawner
// Size: 0x580 (Inherited: 0x438)
struct UAIFaunaSpawner : UAISpawner {
	struct FAIFaunaSpawnerWave FaunaWave; // 0x438(0x110)
	char UnknownData_548[0x10]; // 0x548(0x10)
	struct AActor* FaunaLeader; // 0x558(0x08)
	char UnknownData_560[0x10]; // 0x560(0x10)
	struct TArray<struct AActor*> PlayersInSpawnArea; // 0x570(0x10)

	void SpawnFaunaGroup(); // Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup // Final|Native|Public|BlueprintCallable // @ game+0x3e16c60
};

// Class AthenaAI.AthenaFaunaAIController
// Size: 0xb28 (Inherited: 0x960)
struct AAthenaFaunaAIController : AAthenaAIController {
	float MaxTimeBetweenThreatDetermination; // 0x960(0x04)
	float DefaultControlRotationInterpSpeed; // 0x964(0x04)
	struct TArray<struct FAIStategyControllerMovementMod> StrategyControllerMovementMods; // 0x968(0x10)
	float MinAgentHalfHeightPctOverride; // 0x978(0x04)
	char UnknownData_97C[0x4]; // 0x97c(0x04)
	struct UFaunaAIContollerParamsDataAsset* FaunaDataAsset; // 0x980(0x08)
	struct AActor* CarrierActor; // 0x988(0x08)
	char UnknownData_990[0xc8]; // 0x990(0xc8)
	struct AActor* HighestDangerActor; // 0xa58(0x08)
	char UnknownData_A60[0x98]; // 0xa60(0x98)
	struct UFaunaAIPlayerTracker* PlayerTracker; // 0xaf8(0x08)
	char UnknownData_B00[0x28]; // 0xb00(0x28)

	void SetDormancyCheckingEnabled(bool InDormancyCheckingEnabledInAutomation); // Function AthenaAI.AthenaFaunaAIController.SetDormancyCheckingEnabled // Final|Native|Public|BlueprintCallable // @ game+0x3e16bd0
	void LeaderDestroyed(struct AActor* Actor); // Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed // Final|Native|Private // @ game+0x3e16870
	struct AActor* GetLeader(); // Function AthenaAI.AthenaFaunaAIController.GetLeader // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3e16090
	float GetCourage(); // Function AthenaAI.AthenaFaunaAIController.GetCourage // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3e15d90
	struct UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp(); // Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3e15d60
};

// Class AthenaAI.CatchFaunaConditionalStatTrigger
// Size: 0x30 (Inherited: 0x30)
struct UCatchFaunaConditionalStatTrigger : UConditionalStatsTriggerType {
};

// Class AthenaAI.EnvQueryContext_LeaderFromBlackboard
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_LeaderFromBlackboard : UEnvQueryContext {
};

// Class AthenaAI.EnvQueryContext_Threat
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Threat : UEnvQueryContext {
};

// Class AthenaAI.Fauna
// Size: 0xbe0 (Inherited: 0x810)
struct AFauna : AAICreatureCharacter {
	char UnknownData_810[0x8]; // 0x810(0x08)
	struct FText DisplayName; // 0x818(0x38)
	struct UClass* FaunaSpecies; // 0x850(0x08)
	struct UClass* FaunaBreed; // 0x858(0x08)
	struct FVector HeadOffset; // 0x860(0x0c)
	struct FVector MountedScale; // 0x86c(0x0c)
	float NearToSurfaceDistance; // 0x878(0x04)
	float StartDrowningTimePercentage; // 0x87c(0x04)
	float DrowningDeathTimeMin; // 0x880(0x04)
	float DrowningDeathTimeMax; // 0x884(0x04)
	float PercentageStarvedToChangeAnimation; // 0x888(0x04)
	float FadeOutTime; // 0x88c(0x04)
	struct UObject* HitImpactParticleSystem; // 0x890(0x08)
	struct UObject* DeathParticleSystem; // 0x898(0x08)
	struct UObject* PutInCrateParticleSystem; // 0x8a0(0x08)
	struct UWwiseEvent* PutInCrateSoundCue; // 0x8a8(0x08)
	struct UWwiseEvent* TookDamageSoundCue; // 0x8b0(0x08)
	struct UWwiseEvent* AgitationStartedSoundCue; // 0x8b8(0x08)
	struct UWwiseEvent* AgitationStoppedSoundCue; // 0x8c0(0x08)
	struct UWwiseEvent* CalmStartedSoundCue; // 0x8c8(0x08)
	struct UWwiseEvent* CalmStoppedSoundCue; // 0x8d0(0x08)
	struct UObject* BreathBubblesParticleSystem; // 0x8d8(0x08)
	struct FName BreathBubblesSocketName; // 0x8e0(0x08)
	struct FName UnderwaterRTPCName; // 0x8e8(0x08)
	struct UForceFeedbackEffect* OnFeedingForceFeedbackEffect; // 0x8f0(0x08)
	struct UMountableComponent* MountableComponent; // 0x8f8(0x08)
	struct UHealthComponent* HealthComponent; // 0x900(0x08)
	struct UDamageableComponent* DamageableComponent; // 0x908(0x08)
	struct UPrimitiveComponent* AttackHitVolume; // 0x910(0x08)
	struct UFaunaAnimationData* Animations; // 0x918(0x08)
	struct UDitherComponent* DitherComponent; // 0x920(0x08)
	struct ULightWeightStatusEffectManagerComponent* StatusEffectManagerComponent; // 0x928(0x08)
	struct UAthenaAIControllerParamsDataAsset* AIControllerParamsWhenInCrate; // 0x930(0x08)
	struct UPeriodicAINoiseEventComponent* PeriodicAINoiseEventComponent; // 0x938(0x08)
	struct FMulticastDelegate FaunaAgitationResponseDelegate; // 0x940(0x10)
	struct FMulticastDelegate FaunaDirectedAgitationResponseDelegate; // 0x950(0x10)
	int32_t AgitationResponseChance; // 0x960(0x04)
	int32_t AgitationResponseTestFrequencyMin; // 0x964(0x04)
	int32_t AgitationResponseTestFrequencyMax; // 0x968(0x04)
	int32_t MaxNumFailedAgitationResponseTests; // 0x96c(0x04)
	float AgitationResponseVFXDelay; // 0x970(0x04)
	float AgitationResponseRange; // 0x974(0x04)
	struct UObject* AgitationResponseParticleSystem; // 0x978(0x08)
	float AgitationResponseRangeParticleSystemAngle; // 0x980(0x04)
	char AgitationCollisionChannel; // 0x984(0x01)
	bool StopMovementWhenAgitated; // 0x985(0x01)
	char UnknownData_986[0x2]; // 0x986(0x02)
	float ApproximateSpitTravelTime; // 0x988(0x04)
	bool StopMovementWhenCalm; // 0x98c(0x01)
	char UnknownData_98D[0x3]; // 0x98d(0x03)
	float TurningSpringAcceleration; // 0x990(0x04)
	float TurningSpringMaxVelocity; // 0x994(0x04)
	float TurnResetDelay; // 0x998(0x04)
	struct FVector PivotPointOffset; // 0x99c(0x0c)
	bool ShouldTurn; // 0x9a8(0x01)
	char UnknownData_9A9[0x7]; // 0x9a9(0x07)
	struct UFeedingComponent* FeedingComponent; // 0x9b0(0x08)
	struct UFaunaMovementComponent* FaunaMovementComponent; // 0x9b8(0x08)
	float TimeUntilDrowned; // 0x9c0(0x04)
	int32_t RandomAnimationSeed; // 0x9c4(0x04)
	char UnknownData_9C8[0xc]; // 0x9c8(0x0c)
	bool Drowned; // 0x9d4(0x01)
	char UnknownData_9D5[0x2]; // 0x9d5(0x02)
	char CratedState; // 0x9d7(0x01)
	char InWaterState; // 0x9d8(0x01)
	char UnknownData_9D9[0x7]; // 0x9d9(0x07)
	struct AActor* Crate; // 0x9e0(0x08)
	struct UParticleSystemComponent* BreathBubblesParticleSystemComponent; // 0x9e8(0x08)
	float DrowningDeathTime; // 0x9f0(0x04)
	bool IsPlayingStarvingAnim; // 0x9f4(0x01)
	bool IsAgitated; // 0x9f5(0x01)
	bool IsCalm; // 0x9f6(0x01)
	char UnknownData_9F7[0x1]; // 0x9f7(0x01)
	float TargetTurnAngle; // 0x9f8(0x04)
	char UnknownData_9FC[0x14c]; // 0x9fc(0x14c)
	struct UVenomComponent* VenomComponent; // 0xb48(0x08)
	struct UAthenaAICharacterPathFollowingComponent* PathFollowingComponent; // 0xb50(0x08)
	struct AActor* CurrentShip; // 0xb58(0x08)
	char UnknownData_B60[0x80]; // 0xb60(0x80)

	void TestingSetWaterState(char NewInState); // Function AthenaAI.Fauna.TestingSetWaterState // Final|Native|Public|BlueprintCallable // @ game+0x3e16c80
	void OnRep_TargetTurnAngle(); // Function AthenaAI.Fauna.OnRep_TargetTurnAngle // Final|Native|Private // @ game+0x3e16bb0
	void OnRep_IsPlayingStarvingAnim(); // Function AthenaAI.Fauna.OnRep_IsPlayingStarvingAnim // Final|Native|Private // @ game+0x3e16b90
	void OnRep_IsCalm(); // Function AthenaAI.Fauna.OnRep_IsCalm // Final|Native|Private // @ game+0x3e16b70
	void OnRep_IsAgitated(); // Function AthenaAI.Fauna.OnRep_IsAgitated // Final|Native|Private // @ game+0x3e16b50
	void OnRep_InWaterState(); // Function AthenaAI.Fauna.OnRep_InWaterState // Final|Native|Private // @ game+0x3e16b30
	void OnRep_CratedState(char PreviousCratedState); // Function AthenaAI.Fauna.OnRep_CratedState // Final|Native|Private|HasOutParms // @ game+0x3e16aa0
	void Multicast_PlayPutInCrateEffectsRPC(struct AActor* Crate); // Function AthenaAI.Fauna.Multicast_PlayPutInCrateEffectsRPC // Net|NetReliableNative|Event|NetMulticast|Public // @ game+0x3e16a10
	void Multicast_JustBeenFedRPC(struct AActor* FedBy); // Function AthenaAI.Fauna.Multicast_JustBeenFedRPC // Net|NetReliableNative|Event|NetMulticast|Public // @ game+0x3e16980
	void Multicast_HightlightLeader(bool bIsLeader); // Function AthenaAI.Fauna.Multicast_HightlightLeader // Net|NetReliableNative|Event|NetMulticast|Public // @ game+0x3e168f0
	void GenerateNewRandomAnimationSeed(); // Function AthenaAI.Fauna.GenerateNewRandomAnimationSeed // Final|Native|Public|BlueprintCallable // @ game+0x3e15bf0
	void ActivateResponseRPC(float InTargetTurnAngle); // Function AthenaAI.Fauna.ActivateResponseRPC // Final|Net|NetReliableNative|Event|NetMulticast|Private // @ game+0x3e15b40
};

// Class AthenaAI.FaunaAIPlayerTracker
// Size: 0x48 (Inherited: 0x28)
struct UFaunaAIPlayerTracker : UAIPlayerTracker {
	char UnknownData_28[0x20]; // 0x28(0x20)
};

// Class AthenaAI.FaunaAnimationInterface
// Size: 0x28 (Inherited: 0x28)
struct UFaunaAnimationInterface : UInterface {
};

// Class AthenaAI.FaunaMovementComponent
// Size: 0x660 (Inherited: 0x660)
struct UFaunaMovementComponent : UAICreatureCharacterMovementComponent {
};

// Class AthenaAI.MerchantCrateMetaGenerator
// Size: 0x30 (Inherited: 0x30)
struct UMerchantCrateMetaGenerator : UItemSnapshotMetaGenerator {
};

// Class AthenaAI.AthenaSwimmingAIController
// Size: 0xa60 (Inherited: 0x960)
struct AAthenaSwimmingAIController : AAthenaAIController {
	struct USwimmingPathFollowingComponent* SwimmingPathFollowingComponent; // 0x960(0x08)
	bool IgnoreTargetsOutOfWater; // 0x968(0x01)
	char UnknownData_969[0x7]; // 0x969(0x07)
	struct UCurveFloat* DistOfAttackerVsChanceToPursue; // 0x970(0x08)
	struct TArray<struct FName> TimersToZeroIfStartingRevengeAttack; // 0x978(0x10)
	struct FName DespawnRequiredBlackboardKey; // 0x988(0x08)
	struct FName DespawnRequiredReasonBlackboardKey; // 0x990(0x08)
	float PathingFailedWeight; // 0x998(0x04)
	float PathingFailedThresholdToDespawn; // 0x99c(0x04)
	char UnknownData_9A0[0xc0]; // 0x9a0(0xc0)

	void ApplyControllerParams(struct UAthenaAIControllerParamsDataAsset* InControllerParametersAsset, struct APawn* InPawn); // Function AthenaAI.AthenaSwimmingAIController.ApplyControllerParams // Final|Native|Public|BlueprintCallable // @ game+0x40e3570
};

// Class AthenaAI.BTDecorator_NearSurfaceOfWater
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_NearSurfaceOfWater : UBTDecorator {
	float DistanceFromSurface; // 0x68(0x04)
	bool ReverseLogic; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
};

// Class AthenaAI.BTService_SetFloatToTheSurfaceWhileInBranch
// Size: 0x78 (Inherited: 0x70)
struct UBTService_SetFloatToTheSurfaceWhileInBranch : UBTService {
	bool FloatToTheSurfaceWhileInBranch; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// Class AthenaAI.BTTask_SetFloatToTheSurface
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_SetFloatToTheSurface : UBTTaskNode {
	bool ShouldFloatToTheSurface; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// Class AthenaAI.SwimmingCreatureMovementAnimationInterface
// Size: 0x28 (Inherited: 0x28)
struct USwimmingCreatureMovementAnimationInterface : UInterface {
};

// Class AthenaAI.SwimmingPathFollowingComponent
// Size: 0x200 (Inherited: 0xc8)
struct USwimmingPathFollowingComponent : UActorComponent {
	float DirectSwimmingDotToTarget; // 0xc8(0x04)
	float ArcToTargetDotToTarget; // 0xcc(0x04)
	float MaxTargetPitchFactor; // 0xd0(0x04)
	float MinPosDeltaSqToRepathToMovingTarget; // 0xd4(0x04)
	float MinPosDeltaSqToInvalidateFixedLocation; // 0xd8(0x04)
	float PitchBezierControlPointsLengthFactor; // 0xdc(0x04)
	float TimeMovingAwayFromTargetPosToFlagFailure; // 0xe0(0x04)
	struct FName LineOfSightCollisionProfile; // 0xe4(0x08)
	float LineOfSightSphereCastRadius; // 0xec(0x04)
	float LineOfSightCheckInterval; // 0xf0(0x04)
	float FirstLoSTriggerTimeInNewPath; // 0xf4(0x04)
	float FirstLoSTriggerTimeInRePath; // 0xf8(0x04)
	bool DrawDebugOnServer; // 0xfc(0x01)
	char UnknownData_FD[0x3]; // 0xfd(0x03)
	struct TArray<char> CollisionTypesToDoPathUpdate; // 0x100(0x10)
	struct USwimmingCreatureMovementComponent* MovementComponent; // 0x110(0x08)
	struct AAthenaSwimmingAIController* SwimmingAIController; // 0x118(0x08)
	char ArcFollowingMode; // 0x120(0x01)
	char UnknownData_121[0x57]; // 0x121(0x57)
	struct AActor* TargetActor; // 0x178(0x08)
	char UnknownData_180[0x80]; // 0x180(0x80)
};

// Class AthenaAI.BTTask_SwimTo
// Size: 0x100 (Inherited: 0x88)
struct UBTTask_SwimTo : UBTTask_BlackboardBase {
	bool WantsToReportPathFailure; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
	struct FBlackboardKeySelector PathFailureCounter; // 0x90(0x28)
	float AcceptableRadius; // 0xb8(0x04)
	char GoalCheckMode; // 0xbc(0x01)
	char ArcMode; // 0xbd(0x01)
	char ArcToTargetDirection; // 0xbe(0x01)
	char Swim3DCrestingReaction; // 0xbf(0x01)
	struct FSpatialOffset OffsetFromTargetActor; // 0xc0(0x08)
	char SwimSyncMode; // 0xc8(0x01)
	bool TrackTargetActor; // 0xc9(0x01)
	char UnknownData_CA[0x6]; // 0xca(0x06)
	struct FBlackboardKeySelector TrackedTargetActorKey; // 0xd0(0x28)
	float TimeToSlowDownAndStop; // 0xf8(0x04)
	char LineOfSightTestMode; // 0xfc(0x01)
	char UnknownData_FD[0x3]; // 0xfd(0x03)
};

// Class AthenaAI.BTTask_SwimTurnOnTheSpot
// Size: 0x98 (Inherited: 0x88)
struct UBTTask_SwimTurnOnTheSpot : UBTTask_BlackboardBase {
	float MaxTurnSpringAccel; // 0x88(0x04)
	float TimeUntilMaxTurnSpringAccel; // 0x8c(0x04)
	float AngleDeltaToAcceptFinalRotation; // 0x90(0x04)
	float Timeout; // 0x94(0x04)
};

// Class AthenaAI.TaleQuestGetTinySharkExperienceParticipatingCrews
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestGetTinySharkExperienceParticipatingCrews : UTaleQuestStep {
};

// Class AthenaAI.TaleQuestGetTinySharkExperienceParticipatingCrewsDesc
// Size: 0xb8 (Inherited: 0x80)
struct UTaleQuestGetTinySharkExperienceParticipatingCrewsDesc : UTaleQuestStepDesc {
	struct ATinySharkExperience* TinySharkExperience; // 0x80(0x08)
	struct FQuestVariableGuidArray ParticipatingCrews; // 0x88(0x30)
};

// Class AthenaAI.TaleQuestGetTinySharkPawn
// Size: 0x118 (Inherited: 0x98)
struct UTaleQuestGetTinySharkPawn : UTaleQuestStep {
	char UnknownData_98[0x80]; // 0x98(0x80)
};

// Class AthenaAI.TaleQuestGetTinySharkPawnDesc
// Size: 0xb8 (Inherited: 0x80)
struct UTaleQuestGetTinySharkPawnDesc : UTaleQuestStepDesc {
	struct ATinySharkExperience* TinySharkExperience; // 0x80(0x08)
	struct FQuestVariableSharkPawn TinySharkPawn; // 0x88(0x30)
};

// Class AthenaAI.TaleQuestStartTinySharkExperienceStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestStartTinySharkExperienceStep : UTaleQuestStep {
};

// Class AthenaAI.TaleQuestTinySharkService
// Size: 0xd8 (Inherited: 0x60)
struct UTaleQuestTinySharkService : UTaleQuestService {
	struct TArray<struct ATinySharkExperience*> ActiveExperiences; // 0x60(0x10)
	struct TMap<struct ATinySharkExperience*, struct FExperienceTracker> ExperienceTrackers; // 0x70(0x50)
	char UnknownData_C0[0x18]; // 0xc0(0x18)
};

// Class AthenaAI.TaleQuestTinySharkServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestTinySharkServiceDesc : UTaleQuestServiceDesc {
};

// Class AthenaAI.TaleQuestStartTinySharkExperienceStepDesc
// Size: 0x1c0 (Inherited: 0x80)
struct UTaleQuestStartTinySharkExperienceStepDesc : UTaleQuestStepDesc {
	struct FVector SpawnLocation; // 0x80(0x0c)
	int32_t PartIndex; // 0x8c(0x04)
	struct FTinySharkParams TinySharkParams; // 0x90(0xc8)
	struct UAthenaAIControllerParamsDataAsset* ControllerParams; // 0x158(0x20)
	struct AShip* TargetShip; // 0x178(0x08)
	struct UTaleQuestTinySharkExperienceTracker* ExperienceTracker; // 0x180(0x08)
	bool FireTinySharkVariantDefeatedStats; // 0x188(0x01)
	char UnknownData_189[0x7]; // 0x189(0x07)
	struct FQuestVariableTinySharkExperience TinySharkExperience; // 0x190(0x30)
};

// Class AthenaAI.TaleQuestTinySharkExperienceTracker
// Size: 0x70 (Inherited: 0x28)
struct UTaleQuestTinySharkExperienceTracker : UObject {
	char UnknownData_28[0x38]; // 0x28(0x38)
	float UpdateFrequency; // 0x60(0x04)
	char UnknownData_64[0xc]; // 0x64(0x0c)
};

// Class AthenaAI.TaleQuestShroudedDeepSGExperienceTracker
// Size: 0x130 (Inherited: 0x70)
struct UTaleQuestShroudedDeepSGExperienceTracker : UTaleQuestTinySharkExperienceTracker {
	struct FVector2D TrackingLocation; // 0x70(0x08)
	float InnerSafezoneRadius; // 0x78(0x04)
	float TargetWeightSloop; // 0x7c(0x04)
	float TargetWeightBrig; // 0x80(0x04)
	float TargetWeightGaleon; // 0x84(0x04)
	float ExperienceRadiusConsiderationRatio; // 0x88(0x04)
	float ShipInsideExperiencePreference; // 0x8c(0x04)
	float ShipNearExperiencePreference; // 0x90(0x04)
	float ShipNearKillerWhalePreference; // 0x94(0x04)
	struct FWeightedProbabilityRangeOfRanges ForceRetargetFrequency; // 0x98(0x30)
	struct AActor* ExperienceCenterActor; // 0xc8(0x20)
	char UnknownData_E8[0x48]; // 0xe8(0x48)
};

// Class AthenaAI.TinySharkTelemetryComponent
// Size: 0x208 (Inherited: 0xc8)
struct UTinySharkTelemetryComponent : UActorComponent {
	char UnknownData_C8[0x140]; // 0xc8(0x140)
};

// Class AthenaAI.TinySharkExperience
// Size: 0x900 (Inherited: 0x3c8)
struct ATinySharkExperience : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	float RelevancyDistance; // 0x3d8(0x04)
	float TrackingMovementCheckInterval; // 0x3dc(0x04)
	struct UEnvQuery* TrackingMovementValidQuery; // 0x3e0(0x08)
	bool ShouldBlockMigrationForAllAttackingCrewsFromAnyDistance; // 0x3e8(0x01)
	char UnknownData_3E9[0xa7]; // 0x3e9(0xa7)
	struct UAIOnDemandSpawner* TinySharkSpawner; // 0x490(0x08)
	struct ASharkPawn* TinySharkPawn; // 0x498(0x08)
	struct FName HealthRTPC; // 0x4a0(0x08)
	char UnknownData_4A8[0x8]; // 0x4a8(0x08)
	struct FTinySharkParams Params; // 0x4b0(0xc8)
	struct UTinySharkTelemetryComponent* TinySharkTelemetryComponent; // 0x578(0x08)
	struct UAIItemSpawnComponent* LootItemSpawnComponent; // 0x580(0x08)
	struct UAIItemSpawnComponent* FoodItemSpawnComponent; // 0x588(0x08)
	struct AShip* TrackedShip; // 0x590(0x08)
	char UnknownData_598[0x90]; // 0x598(0x90)
	struct FEncounterParams SightingEncounterParams; // 0x628(0x0c)
	struct FEncounterParams CloseEncounterParams; // 0x634(0x0c)
	char UnknownData_640[0x168]; // 0x640(0x168)
	struct TArray<struct UAIItemSpawnComponent*> ItemSpawnComps; // 0x7a8(0x10)
	char UnknownData_7B8[0x108]; // 0x7b8(0x108)
	struct UAthenaAIControllerParamsDataAsset* CachedControllerParamsAsset; // 0x8c0(0x20)
	char UnknownData_8E0[0x20]; // 0x8e0(0x20)

	void TinySharkPawnDestroyed(struct AActor* InDestroyedActor); // Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed // Final|Native|Private // @ game+0x4107170
	void OnRep_TinySharkPawn(struct ASharkPawn* LastTinySharkPawn); // Function AthenaAI.TinySharkExperience.OnRep_TinySharkPawn // Native|Protected // @ game+0x4106f00
	struct AShip* GetTrackedShip(); // Function AthenaAI.TinySharkExperience.GetTrackedShip // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4106ee0
	char GetCurrentState(); // Function AthenaAI.TinySharkExperience.GetCurrentState // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4106ec0
	char GetActiveState(); // Function AthenaAI.TinySharkExperience.GetActiveState // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4106ea0
};

// Class AthenaAI.TinySharkLootSpawnParamsInterface
// Size: 0x28 (Inherited: 0x28)
struct UTinySharkLootSpawnParamsInterface : UInterface {
};

// Class AthenaAI.TinySharkParamsDataAsset
// Size: 0xf0 (Inherited: 0x28)
struct UTinySharkParamsDataAsset : UDataAsset {
	struct FTinySharkParams Params; // 0x28(0xc8)
};

// Class AthenaAI.TinySharkServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UTinySharkServiceInterface : UInterface {
};

// Class AthenaAI.TinySharkService
// Size: 0x590 (Inherited: 0x3c8)
struct ATinySharkService : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct UTinySharkServiceParamsDataAsset* TinySharkServiceParams; // 0x3d8(0x08)
	char UnknownData_3E0[0x170]; // 0x3e0(0x170)
	struct TArray<struct ATinySharkExperience*> TinySharkExperiences; // 0x550(0x10)
	struct TArray<struct ATinySharkExperience*> ExternallyManagedTinySharkExperiences; // 0x560(0x10)
	char UnknownData_570[0x20]; // 0x570(0x20)

	bool RequestTinySharkWithShip(struct AShip* InTrackedShip, int32_t OverrideControllerParamIndex, int32_t PartIndex); // Function AthenaAI.TinySharkService.RequestTinySharkWithShip // Native|Public|BlueprintCallable // @ game+0x4107070
	bool RequestTinySharkWithLocation(struct FVector SpawnLocation, int32_t PartIndex); // Function AthenaAI.TinySharkService.RequestTinySharkWithLocation // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x4106f90
	void DismissAllTinySharks(); // Function AthenaAI.TinySharkService.DismissAllTinySharks // Native|Public|BlueprintCallable // @ game+0x4106e70
	bool CanSpawnTinySharkExperience(); // Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4106e30
};

// Class AthenaAI.TinySharkServiceParamsDataAsset
// Size: 0x58 (Inherited: 0x28)
struct UTinySharkServiceParamsDataAsset : UDataAsset {
	struct FTinySharkServiceParams Params; // 0x28(0x28)
	int32_t MaxNumTinySharkExperiences; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// Class AthenaAI.AIDebugSpawnActor
// Size: 0x3f8 (Inherited: 0x3c8)
struct AAIDebugSpawnActor : AActor {
	struct FAthenaAIDebugCostDisplay DebugCostDisplay; // 0x3c8(0x01)
	char UnknownData_3C9[0x7]; // 0x3c9(0x07)
	struct TArray<struct FAIDebugSpawnConfiguration> SpawnConfigList; // 0x3d0(0x10)
	int32_t Seed; // 0x3e0(0x04)
	char UnknownData_3E4[0x4]; // 0x3e4(0x04)
	struct TArray<struct APawn*> SpawnedAIList; // 0x3e8(0x10)

	void StartSpawning(); // Function AthenaAI.AIDebugSpawnActor.StartSpawning // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x41ba3b0
};

// Class AthenaAI.AthenaAIDebugFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAthenaAIDebugFunctionLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FAIEncounterSpecification> SpawnMultipleAI(int32_t Count, struct UAIEncounterSettings* EncounterSettings, struct FVector Pos, struct FRotator Rot, float Delay, bool MakeAIPermanentlyNetRelevant, struct AActor* InstancedNavMesh); // Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnMultipleAI // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x41ba090
	void SpawnAIWithSettings(struct UClass* AIType, struct UAthenaAIControllerParamsDataAsset* Skillset, struct ULoadoutAsset* Loadout, struct UAthenaAIFormDataAsset* Form, struct UClass* AIItemSpawnComponent, struct UClass* ClassId, struct UAthenaAIAmmoDataAsset* Ammo, struct FVector Pos, struct FRotator Rot, struct FName Region, struct AActor* TriggerActor, struct FName NavMeshOverride, float Delay); // Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x41b98d0
	struct FAIEncounterSpecification SpawnAI(struct UAIEncounterSettings* EncounterSettings, struct FVector Pos, struct FRotator Rot, float Delay, bool MakeAIPermanentlyNetRelevant, struct AActor* InstancedNavMesh); // Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x41b95a0
	void SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, struct UObject* QueryOwner); // Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds // Final|Native|Static|Public|BlueprintCallable // @ game+0x41b94e0
	void KillAllDebugAISpawners(); // Function AthenaAI.AthenaAIDebugFunctionLibrary.KillAllDebugAISpawners // Final|Native|Static|Public|BlueprintCallable // @ game+0x41b94c0
	int32_t GetEnvQueryManagerNumRunningQueries(struct UObject* QueryOwner); // Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries // Final|Native|Static|Public|BlueprintCallable // @ game+0x41b9440
	void EnableMaximumSightSettings(struct AAthenaAIController* AIController); // Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings // Final|Native|Static|Public|BlueprintCallable // @ game+0x41b93d0
	void EnableBehaviorTreeLogging(struct UObject* WorldContext); // Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging // Final|Native|Static|Public|BlueprintCallable // @ game+0x41b9360
	void DespawnAIPawn(struct APawn* Pawn); // Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn // Final|Native|Static|Public|BlueprintCallable // @ game+0x41b92f0
	void CreateAISpawnerAtPosition(struct UObject* WorldContext, struct UAISpawner* SpawnerAsset, struct FVector Pos); // Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtPosition // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x41b91f0
	void CreateAISpawnerAtActor(struct UObject* WorldContext, struct UAISpawner* SpawnerAsset, struct AActor* SpawnLocationActor); // Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x41b9100
	struct FVector CanProjectPointToNavigation(struct UObject* WorldContext, struct FVector Point, struct ANavigationData* NavData, struct UClass* FilterClass, struct FVector QueryExtent); // Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x41b8f30
};

// Class AthenaAI.DebugAISpawnerCreator
// Size: 0x420 (Inherited: 0x3c8)
struct ADebugAISpawnerCreator : AActor {
	struct UAISpawner* SpawnerTemplate; // 0x3c8(0x08)
	float TriggerRadius; // 0x3d0(0x04)
	char UnknownData_3D4[0x4]; // 0x3d4(0x04)
	struct UAISpawner* Spawner; // 0x3d8(0x08)
	struct UAIProximityPlayerTracker* ProximityPlayerTracker; // 0x3e0(0x08)
	struct USimpleAIRegion* Region; // 0x3e8(0x08)
	char UnknownData_3F0[0x30]; // 0x3f0(0x30)
};

// Class AthenaAI.AIDioramaLocationSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIDioramaLocationSourceInterface : UInterface {
};

// Class AthenaAI.AIDiorama
// Size: 0x610 (Inherited: 0x3c8)
struct AAIDiorama : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct USceneComponent* SceneComponent; // 0x3d0(0x08)
	struct ASceneDialogueCoordinator* SpawnedDialogueCoordinator; // 0x3d8(0x08)
	struct USceneDialogueData* DialogueData; // 0x3e0(0x08)
	struct TArray<struct FAIDioramaPawn> LinkedActors; // 0x3e8(0x10)
	char UnknownData_3F8[0x218]; // 0x3f8(0x218)
};

// Class AthenaAI.AIDioramaCategory
// Size: 0x28 (Inherited: 0x28)
struct UAIDioramaCategory : UObject {
};

// Class AthenaAI.AIDioramaController
// Size: 0xa8 (Inherited: 0x28)
struct UAIDioramaController : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UAIDioramaDesc* AIDioramaDesc; // 0x30(0x08)
	struct USceneDialogueData* DialogueData; // 0x38(0x08)
	struct TArray<struct FAIDioramaPawn> SpawnedDioramaPawns; // 0x40(0x10)
	struct AAIDiorama* AIDiorama; // 0x50(0x08)
	struct UAISpawner* Spawner; // 0x58(0x08)
	char UnknownData_60[0x48]; // 0x60(0x48)
};

// Class AthenaAI.AIDioramaDesc
// Size: 0x40 (Inherited: 0x28)
struct UAIDioramaDesc : UDataAsset {
	struct TArray<struct FAIDioramaRoleDesc> RoleList; // 0x28(0x10)
	struct USceneDialogueData* DialogueData; // 0x38(0x08)
};

// Class AthenaAI.AIDioramaLocationSourceComponent
// Size: 0x370 (Inherited: 0x2e0)
struct UAIDioramaLocationSourceComponent : USceneComponent {
	char UnknownData_2E0[0x10]; // 0x2e0(0x10)
	struct TArray<struct FAIDioramaLocationSourceComponentData> DioramaRelativeLocations; // 0x2f0(0x10)
	float DialogueTriggerRadius; // 0x300(0x04)
	float DialogueSubtitleBuffer; // 0x304(0x04)
	float AISenseRadiusForDebugDisplay; // 0x308(0x04)
	char UnknownData_30C[0x4]; // 0x30c(0x04)
	struct TArray<struct UClass*> Categories; // 0x310(0x10)
	struct FName FeatureToggle; // 0x320(0x08)
	struct FColor DebugTriggerRadiusColor; // 0x328(0x04)
	struct FColor DebugSubtitleRadiusColor; // 0x32c(0x04)
	struct FColor AISenseRadiusColor; // 0x330(0x04)
	char UnknownData_334[0x4]; // 0x334(0x04)
	struct USphereComponent* DialogueTriggerRadiusSphere; // 0x338(0x08)
	struct USphereComponent* DialogueSubtitleRadiusSphere; // 0x340(0x08)
	struct USphereComponent* AISenseRadiusSphere; // 0x348(0x08)
	char UnknownData_350[0x20]; // 0x350(0x20)
};

// Class AthenaAI.AIDioramaServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIDioramaServiceInterface : UInterface {
};

// Class AthenaAI.AIDioramaService
// Size: 0x430 (Inherited: 0x3c8)
struct AAIDioramaService : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct TMap<struct UClass*, struct FDioramaCategoryEntries> AllDioramasLocationsByCategory; // 0x3d0(0x50)
	char UnknownData_420[0x10]; // 0x420(0x10)
};

// Class AthenaAI.DebugDioramaCreator
// Size: 0x438 (Inherited: 0x420)
struct ADebugDioramaCreator : ADebugAISpawnerCreator {
	struct UAIDioramaDesc* AIDioramaDesc; // 0x420(0x08)
	struct UAIDioramaLocationSourceComponent* Location; // 0x428(0x08)
	struct UAIDioramaController* AIDioramaController; // 0x430(0x08)
};

// Class AthenaAI.InDioramaAIStrategyId
// Size: 0x28 (Inherited: 0x28)
struct UInDioramaAIStrategyId : UAIStrategyId {
};

// Class AthenaAI.PetNameplateComponent
// Size: 0x4c0 (Inherited: 0x4a0)
struct UPetNameplateComponent : UAINameplateComponent {
	char UnknownData_4A0[0x8]; // 0x4a0(0x08)
	struct FString DefaultPetName; // 0x4a8(0x10)
	char UnknownData_4B8[0x8]; // 0x4b8(0x08)
};

// Class AthenaAI.Pet
// Size: 0xcd0 (Inherited: 0x810)
struct APet : AAICreatureCharacter {
	char UnknownData_810[0xb0]; // 0x810(0xb0)
	struct UPetWieldableReactMappingsDataAsset* WieldableReactMappingsAsset; // 0x8c0(0x08)
	float MaxVelocityForLocomotionAnimation; // 0x8c8(0x04)
	bool CanFly; // 0x8cc(0x01)
	char UnknownData_8CD[0x3]; // 0x8cd(0x03)
	struct TArray<struct FPetFlyingStrategyProperties> FlyingStrategyProperties; // 0x8d0(0x10)
	float FlyingLandTime; // 0x8e0(0x04)
	char UnknownData_8E4[0x4]; // 0x8e4(0x04)
	struct UCurveFloat* FlyingLandCurve; // 0x8e8(0x08)
	float FlyingTakeOffTime; // 0x8f0(0x04)
	char UnknownData_8F4[0x4]; // 0x8f4(0x04)
	struct UCurveFloat* FlyingTakeOffCurve; // 0x8f8(0x08)
	struct FFloatRange MidFlightAdjustmentTimerRange; // 0x900(0x10)
	struct UCurveFloat* MidFlightAdjustmentCurve; // 0x910(0x08)
	struct UCurveFloat* MidFlightTimeToDistanceAdjustmentCurve; // 0x918(0x08)
	struct FName FiredFromActorCollision; // 0x920(0x08)
	struct UWwiseEvent* FiredFromActorSFX; // 0x928(0x08)
	struct UPetDitherComponent* DitherComponent; // 0x930(0x08)
	float MinimumDamageForHealthReact; // 0x938(0x04)
	float MaxDistForWaterBucketToClean; // 0x93c(0x04)
	float MinimumDurationUntilPetCanDespawnConcealed; // 0x940(0x04)
	float DefaultNamePlateHeight; // 0x944(0x04)
	float AlternateNamePlateHeight; // 0x948(0x04)
	char UnknownData_94C[0x4]; // 0x94c(0x04)
	struct TArray<char> StatesToUseAlternateNamePlatePos; // 0x950(0x10)
	struct FFloatRange PetTimeSpentSad; // 0x960(0x10)
	char DebugStateDescriptor; // 0x970(0x01)
	char UnknownData_971[0x7]; // 0x971(0x07)
	struct UPetNameplateComponent* AINameplateComponent; // 0x978(0x08)
	struct UFeedingComponent* FeedingComponent; // 0x980(0x08)
	struct UStarvingComponent* StarvingComponent; // 0x988(0x08)
	struct UCleanlinessComponent* CleanlinessComponent; // 0x990(0x08)
	struct UCannonSquashComponent* CannonSquashComponent; // 0x998(0x08)
	struct FPetMovementRequest ReplicatedMovementRequest; // 0x9a0(0x0c)
	float TargetMeshRoll; // 0x9ac(0x04)
	char UnknownData_9B0[0x10]; // 0x9b0(0x10)
	float DefaultShipTurnRateModifier; // 0x9c0(0x04)
	char UnknownData_9C4[0x4]; // 0x9c4(0x04)
	struct TArray<struct FPetTurnRateModifier> TurnRateModifierList; // 0x9c8(0x10)
	struct TArray<char> LocomotingMovementStates; // 0x9d8(0x10)
	struct TArray<char> RequestIdleOrMovementValidMovementStates; // 0x9e8(0x10)
	float MaxRollAngle; // 0x9f8(0x04)
	float DelayForDisablingMovementOnIdle; // 0x9fc(0x04)
	float IslandDustRatePerSecond; // 0xa00(0x04)
	struct FGuid CrewId; // 0xa04(0x10)
	bool InHangout; // 0xa14(0x01)
	bool PerchedInHangout; // 0xa15(0x01)
	bool ResetRollAndZOffset; // 0xa16(0x01)
	bool ShouldIgnoreTooltipDisplayOffset; // 0xa17(0x01)
	char UnknownData_A18[0x8]; // 0xa18(0x08)
	struct FPetTurnToFaceData PetTurnToFaceData; // 0xa20(0x20)
	float MaximumSubmergedWaterDepthBeforeDespawn; // 0xa40(0x04)
	char UnknownData_A44[0x24]; // 0xa44(0x24)
	struct UAIPartsRetrievalComponent* AIPartsRetrievalComponent; // 0xa68(0x08)
	struct UPetPartCustomisationComponent* PetPartCustomisationComponent; // 0xa70(0x08)
	struct ULightWeightStatusEffectManagerComponent* LightWeightStatusEffectManagerComponent; // 0xa78(0x08)
	struct UPetTelemetryComponent* TelemetryComponent; // 0xa80(0x08)
	struct UPetSicknessComponent* SicknessComponent; // 0xa88(0x08)
	struct UWaterExposureComponent* WaterExposureComponent; // 0xa90(0x08)
	struct UAnimationDataStoreComponent* AnimationDataStoreComponent; // 0xa98(0x08)
	struct AActor* SpawnedForShip; // 0xaa0(0x08)
	struct AActor* PetOwner; // 0xaa8(0x08)
	struct AItemInfo* PetInfo; // 0xab0(0x08)
	char UnknownData_AB8[0x8]; // 0xab8(0x08)
	struct FDocker Docker; // 0xac0(0x90)
	struct FStartPickupObjectActionRuleParams StartPickupObjectActionRuleParams; // 0xb50(0x10)
	char UnknownData_B60[0x10]; // 0xb60(0x10)
	struct UParticleSystemComponent* CurrentlyPlayingParticleSystem; // 0xb70(0x08)
	struct UClass* LandingStrategy; // 0xb78(0x08)
	struct UClass* PursuitStrategy; // 0xb80(0x08)
	float DefaultRollLerpTime; // 0xb88(0x04)
	float LandingRollLerpTime; // 0xb8c(0x04)
	bool IsBeingDismissed; // 0xb90(0x01)
	char UnknownData_B91[0xfb]; // 0xb91(0xfb)
	bool IsInDisabledPetPerchHangout; // 0xc8c(0x01)
	bool PetIsSad; // 0xc8d(0x01)
	char UnknownData_C8E[0x42]; // 0xc8e(0x42)

	void SetExitTakeOffFlag(bool InExitTakeOffFlag); // Function AthenaAI.Pet.SetExitTakeOffFlag // Final|Native|Public|BlueprintCallable // @ game+0x44105d0
	void OnShipDestroyed(struct AActor* InShip); // Function AthenaAI.Pet.OnShipDestroyed // Final|Native|Public // @ game+0x4410470
	void OnRep_RollRequest(); // Function AthenaAI.Pet.OnRep_RollRequest // Final|Native|Private // @ game+0x4410450
	void OnRep_ResetRollAndZOffset(); // Function AthenaAI.Pet.OnRep_ResetRollAndZOffset // Final|Native|Private // @ game+0x4410430
	void OnRep_PetTurnToFaceData(); // Function AthenaAI.Pet.OnRep_PetTurnToFaceData // Final|Native|Public // @ game+0x4410410
	void OnRep_PetOwner(); // Function AthenaAI.Pet.OnRep_PetOwner // Final|Native|Private // @ game+0x44103d0
	void OnRep_PetIsSad(); // Function AthenaAI.Pet.OnRep_PetIsSad // Final|Native|Private // @ game+0x44103b0
	void OnRep_PetInfo(); // Function AthenaAI.Pet.OnRep_PetInfo // Final|Native|Private // @ game+0x4410390
	void OnRep_PerchedInHangout(); // Function AthenaAI.Pet.OnRep_PerchedInHangout // Final|Native|Private // @ game+0x4410370
	void OnRep_MovementRequest(); // Function AthenaAI.Pet.OnRep_MovementRequest // Final|Native|Private // @ game+0x4410350
	void OnRep_InHangout(); // Function AthenaAI.Pet.OnRep_InHangout // Final|Native|Private // @ game+0x4410310
	void OnOwnerDestroyed(struct AActor* InOwner); // Function AthenaAI.Pet.OnOwnerDestroyed // Final|Native|Public // @ game+0x44100f0
	void Multicast_DitherOut(); // Function AthenaAI.Pet.Multicast_DitherOut // Final|Net|NetReliableNative|Event|NetMulticast|Private // @ game+0x44100d0
	void Multicast_DitherIn(); // Function AthenaAI.Pet.Multicast_DitherIn // Final|Net|NetReliableNative|Event|NetMulticast|Private // @ game+0x44100b0
	float GetFloorMeshOffsetZ(); // Function AthenaAI.Pet.GetFloorMeshOffsetZ // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4410090
};

// Class AthenaAI.BTTask_SetRoamingPetAnimationState
// Size: 0x130 (Inherited: 0x88)
struct UBTTask_SetRoamingPetAnimationState : UBTTask_BlackboardBase {
	struct FWeightedPetAnimationSelector WeightedAnimationSelection; // 0x88(0xa0)
	char UnknownData_128[0x8]; // 0x128(0x08)
};

// Class AthenaAI.PetDitherComponent
// Size: 0x250 (Inherited: 0x1d0)
struct UPetDitherComponent : UDitherComponent {
	char UnknownData_1D0[0x80]; // 0x1d0(0x80)
};

// Class AthenaAI.PetPartCustomisationComponent
// Size: 0x180 (Inherited: 0xc8)
struct UPetPartCustomisationComponent : UActorComponent {
	char UnknownData_C8[0x10]; // 0xc8(0x10)
	struct UClass* AnimationDataStoreId; // 0xd8(0x08)
	struct UPetPartSizeMappingsDataAsset* SizeMappingsAsset; // 0xe0(0x08)
	struct TArray<struct FPetLoadedMaterial> CurrentlyLoadedMaterials; // 0xe8(0x10)
	struct FStringAssetReference DefaultMeshRef; // 0xf8(0x10)
	struct FStringAssetReference HighResMeshRef; // 0x108(0x10)
	struct USkeletalMesh* CurrentlyLoadedMesh; // 0x118(0x08)
	char CurrentPetSize; // 0x120(0x01)
	char UnknownData_121[0x7]; // 0x121(0x07)
	struct UPetCustomisationOverrideDataAsset* CurrentlyLoadedOverrideAsset; // 0x128(0x08)
	char UnknownData_130[0x50]; // 0x130(0x50)
};

// Class AthenaAI.PetPartSizeMappingsDataAsset
// Size: 0x48 (Inherited: 0x28)
struct UPetPartSizeMappingsDataAsset : UDataAsset {
	struct TArray<struct FPetPartSizeMapping> Mappings; // 0x28(0x10)
	struct FFloatRange ConcealedScaleBounds; // 0x38(0x10)
};

// Class AthenaAI.PetSicknessComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UPetSicknessComponent : UActorComponent {
	char UnknownData_C8[0x10]; // 0xc8(0x10)
};

// Class AthenaAI.PetsPartsDesc
// Size: 0x70 (Inherited: 0x30)
struct UPetsPartsDesc : UAIPartsDesc {
	struct FStringAssetReference Mesh; // 0x30(0x10)
	struct FStringAssetReference HighResMesh; // 0x40(0x10)
	struct TArray<struct FPetMaterialEntry> PetMaterials; // 0x50(0x10)
	char PetSize; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct UPetCustomisationOverrideDataAsset* PetOverrideAsset; // 0x68(0x08)
};

// Class AthenaAI.PetTelemetryComponent
// Size: 0x100 (Inherited: 0xc8)
struct UPetTelemetryComponent : UActorComponent {
	char UnknownData_C8[0x38]; // 0xc8(0x38)
};

// Class AthenaAI.PetWieldableReactMappingsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UPetWieldableReactMappingsDataAsset : UDataAsset {
	struct TArray<struct FPetWieldableReactMapping> WieldableReactMappings; // 0x28(0x10)
};

// Class AthenaAI.PreviewPet
// Size: 0x4b0 (Inherited: 0x3c8)
struct APreviewPet : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	char InitialAnimState; // 0x3d0(0x01)
	char UnknownData_3D1[0x3]; // 0x3d1(0x03)
	struct FAIPartId InitialPartIdToLoad; // 0x3d4(0x08)
	char UnknownData_3DC[0x4]; // 0x3dc(0x04)
	struct UAIPartsCategory* PreviewPetPartsCategory; // 0x3e0(0x08)
	struct USkeletalMeshComponent* PreviewPetMesh; // 0x3e8(0x08)
	struct FPetAnimationDataPreview PreviewPetAnimationData; // 0x3f0(0x10)
	struct UAIPartsRetrievalComponent* AIPartsRetrievalComponent; // 0x400(0x08)
	struct UPetPartCustomisationComponent* PetPartCustomisationComponent; // 0x408(0x08)
	char UnknownData_410[0xa0]; // 0x410(0xa0)
};

