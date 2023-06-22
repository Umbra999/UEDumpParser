// Class NaturalDisasters.AshenLordAshCloudSetupDataAsset
// Size: 0xa0 (Inherited: 0x28)
struct UAshenLordAshCloudSetupDataAsset : UDataAsset {
	struct FWeightedProbabilityRangeOfRanges AshCloudRadiusInMetres; // 0x28(0x30)
	float AshCloudHeightCoefficient; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FWeightedProbabilityRangeOfRanges AshCloudLifetime; // 0x60(0x30)
	struct UCurveFloat* ScaleUpSpeedCurve; // 0x90(0x08)
	struct UCurveFloat* DissipationCurve; // 0x98(0x08)
};

// Class NaturalDisasters.AshenLordAshCloud
// Size: 0x450 (Inherited: 0x3c8)
struct AAshenLordAshCloud : AActor {
	struct UStaticMeshComponent* CloudMesh; // 0x3c8(0x08)
	struct UAshenLordAshCloudSetupDataAsset* SetupData; // 0x3d0(0x08)
	float InnerRangeStartOffset; // 0x3d8(0x04)
	float OuterRangeStart; // 0x3dc(0x04)
	struct FName NormalisedEngulfedRTPC; // 0x3e0(0x08)
	float RTPCSecondsBetweenUpdates; // 0x3e8(0x04)
	char UnknownData_3EC[0x4]; // 0x3ec(0x04)
	float LifeTime; // 0x3f0(0x04)
	float StartTime; // 0x3f4(0x04)
	float TimeOffset; // 0x3f8(0x04)
	char CloudState; // 0x3fc(0x01)
	char UnknownData_3FD[0x37]; // 0x3fd(0x37)
	float MaxRadiusMultiplier; // 0x434(0x04)
	char UnknownData_438[0x18]; // 0x438(0x18)

	void UpdatePostSettingsBP(); // Function NaturalDisasters.AshenLordAshCloud.UpdatePostSettingsBP // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void SetDissipationDensityBP(float CloudDensity); // Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnRep_StateChanged(); // Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged // Final|Native|Private // @ game+0x43844b0
};

// Class NaturalDisasters.AshenLordVolcano
// Size: 0x438 (Inherited: 0x3c8)
struct AAshenLordVolcano : AActor {
	struct UAshenLordVolcanoSetupDataAsset* VolcanoSetupData; // 0x3c8(0x08)
	char UnknownData_3D0[0x68]; // 0x3d0(0x68)

	void Multicast_FireProjectile(int32_t WeightedVolcanoProjectileIndex, struct FVector AuthoritySpawnLocation, struct FVector LaunchVelocity, struct FVector RotationRate); // Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile // Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults // @ game+0x4383c00
};

// Class NaturalDisasters.VolcanoSetupDataAsset
// Size: 0x448 (Inherited: 0x28)
struct UVolcanoSetupDataAsset : UDataAsset {
	bool IsEnabled; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FWeightedProbabilityRangeOfRanges WarmUpDuration; // 0x30(0x30)
	struct FWeightedProbabilityRangeOfRanges EruptionDuration; // 0x60(0x30)
	struct FWeightedProbabilityRangeOfRanges DormantDuration; // 0x90(0x30)
	float MinimumDurationForTheEffects; // 0xc0(0x04)
	char UnknownData_C4[0x4]; // 0xc4(0x04)
	struct FWeightedProbabilityRangeOfRanges GroundAndWaterStayHotDurationAfterVolcanoFinishesDuration; // 0xc8(0x30)
	struct FWeightedProbabilityRangeOfRanges ProjectileTriggerFrequency; // 0xf8(0x30)
	struct FWeightedProbabilityRangeOfRanges PercentageOfMaxTargetingRange; // 0x128(0x30)
	int32_t MinNumProjectilesToTrigger; // 0x158(0x04)
	int32_t MaxNumProjectilesToTrigger; // 0x15c(0x04)
	int32_t ExtraProjectilePoolNumProjectiles; // 0x160(0x04)
	char UnknownData_164[0x4]; // 0x164(0x04)
	struct FVolcanoTargetChances ChanceToTargetPlayers; // 0x168(0x58)
	struct FVolcanoTargetChances ChanceToTargetShips; // 0x1c0(0x58)
	struct FVolcanoTargetChances ChanceToTargetWatercraft; // 0x218(0x58)
	struct FWeightedProbabilityRangeOfRanges PlayerNearMissDistanceInMetres; // 0x270(0x30)
	float InnerShipNearMissRadiusInMetres; // 0x2a0(0x04)
	float OuterShipNearMissRadiusInMetres; // 0x2a4(0x04)
	float InnerWatercraftNearMissRadiusInMetres; // 0x2a8(0x04)
	float OuterWatercraftNearMissRadiusInMetres; // 0x2ac(0x04)
	struct TArray<struct FWeightedVolcanoProjectile> Projectiles; // 0x2b0(0x10)
	struct TArray<struct FLandmarkReactionEventPlayForceFeedbackEntry> ForceFeedbackIgnitionEffect; // 0x2c0(0x10)
	struct UClass* LocalMiniProjectilesClass; // 0x2d0(0x08)
	struct FWeightedProbabilityRangeOfRanges LocalMiniProjectilesSpawnHeightAbovePlayerInMetres; // 0x2d8(0x30)
	struct FWeightedProbabilityRangeOfRanges LocalMiniProjectilesSpawnDistanceFromPlayerInMetres; // 0x308(0x30)
	struct FWeightedProbabilityRangeOfRanges LocalMiniProjectilesTimeBetweenSpawns; // 0x338(0x30)
	struct FWeightedProbabilityRange NumLocalMiniProjectilesToTrigger; // 0x368(0x20)
	struct FWeightedProbabilityRangeOfRanges LocalMiniProjectilesSpeed; // 0x388(0x30)
	float LocalMiniProjectilesGravityScale; // 0x3b8(0x04)
	char UnknownData_3BC[0x4]; // 0x3bc(0x04)
	struct FWeightedProbabilityRangeOfRanges LocalMiniProjectilesSpawnAngleRange; // 0x3c0(0x30)
	struct FWeightedProbabilityRangeOfRanges LocalMiniProjectilesSpawnStartPositionOffsetInMetres; // 0x3f0(0x30)
	float LocalMiniProjectilesSpawnDistanceSpeedScalar; // 0x420(0x04)
	float LocalMiniProjectilesSpawnDistanceMaxPlayerSpeed; // 0x424(0x04)
	float TimeBetweenLocalEmbers; // 0x428(0x04)
	char UnknownData_42C[0x4]; // 0x42c(0x04)
	struct TArray<struct FVolcanoSetupDataEmbersEntry> LocalEmbers; // 0x430(0x10)
	float EmbersSpawnOffsetInMetres; // 0x440(0x04)
	float ServerMigrationDistanceAsMultipleOfOuterTargetRadius; // 0x444(0x04)
};

// Class NaturalDisasters.AshenLordVolcanoSetupDataAsset
// Size: 0x178 (Inherited: 0x28)
struct UAshenLordVolcanoSetupDataAsset : UDataAsset {
	struct FWeightedProbabilityRangeOfRanges ProjectileTriggerFrequency; // 0x28(0x30)
	struct FWeightedProbabilityRange NumProjectilesToTrigger; // 0x58(0x20)
	struct FWeightedProbabilityRangeOfRanges SpawnHeightInMetres; // 0x78(0x30)
	struct FWeightedProbabilityRangeOfRanges TargetDistanceFromCenterInMetres; // 0xa8(0x30)
	struct FWeightedProbabilityRangeOfRanges TimeBetweenSpawns; // 0xd8(0x30)
	struct FWeightedProbabilityRangeOfRanges StartPositionOffsetInMetres; // 0x108(0x30)
	struct TArray<struct FWeightedAshenLordVolcanoProjectile> Projectiles; // 0x138(0x10)
	struct FPoolableCollectionMapConfiguration PoolableProjectilesConfig; // 0x148(0x18)
	struct FVolcanoSetupDataEmbersEntry Embers; // 0x160(0x10)
	float EmberSpawnHeightInMeters; // 0x170(0x04)
	float TimeBetweenEmbers; // 0x174(0x04)
};

// Class NaturalDisasters.AshenLordWorldEndCloud
// Size: 0x3e0 (Inherited: 0x3c8)
struct AAshenLordWorldEndCloud : AActor {
	float SelfDestructDelayOnComplete; // 0x3c8(0x04)
	char CloudState; // 0x3cc(0x01)
	char UnknownData_3CD[0x3]; // 0x3cd(0x03)
	struct FAshenLordWorldEndCloudAnimation CurrentCloudAnimation; // 0x3d0(0x08)
	char UnknownData_3D8[0x8]; // 0x3d8(0x08)

	void OnRep_CloudStateChange(); // Function NaturalDisasters.AshenLordWorldEndCloud.OnRep_CloudStateChange // Final|Native|Public // @ game+0x43843d0
	void AnimateCloud(float AdjustedLifetime); // Function NaturalDisasters.AshenLordWorldEndCloud.AnimateCloud // Event|Public|BlueprintEvent // @ game+0x1848130
};

// Class NaturalDisasters.Geyser
// Size: 0x4b8 (Inherited: 0x3c8)
struct AGeyser : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct UGeyserSetupDataAsset* SetupData; // 0x3d8(0x08)
	struct UGeyserSetupDataAsset* GeyserSetupDataOverride; // 0x3e0(0x08)
	struct UGeyserSetupDataAsset* SelectedGeyserForNextActivation; // 0x3e8(0x08)
	struct TArray<struct FGeyserStoryCustomisationData> StoryCustomisationData; // 0x3f0(0x10)
	char UnknownData_400[0x18]; // 0x400(0x18)
	char GeyserState; // 0x418(0x01)
	char UnknownData_419[0x7]; // 0x419(0x07)
	struct UWwiseObjectPoolWrapper* GeyserBuildUpPool; // 0x420(0x08)
	struct UWwiseObjectPoolWrapper* GeyserBlowPool; // 0x428(0x08)
	struct UWwiseEvent* StartActiveAudioLoopEvent; // 0x430(0x08)
	struct UWwiseEvent* StopActiveAudioLoopEvent; // 0x438(0x08)
	struct UWwiseEvent* PlayEruptingAudioEvent; // 0x440(0x08)
	struct UExplosionComponent* ExplosionComponent; // 0x448(0x08)
	struct UParticleSystemComponent* ActiveParticlesComponent; // 0x450(0x08)
	struct UParticleSystemComponent* EruptingParticlesComponent; // 0x458(0x08)
	char HitTestTraceChannel; // 0x460(0x01)
	char UnknownData_461[0x7]; // 0x461(0x07)
	struct UClass* GeyserHoleClass; // 0x468(0x08)
	struct AHole* GeyserHole; // 0x470(0x08)
	char UnknownData_478[0x40]; // 0x478(0x40)

	void OnRep_GeyserState(); // Function NaturalDisasters.Geyser.OnRep_GeyserState // Final|Native|Private // @ game+0x4384470
	void Multicast_TriggerExplosion(); // Function NaturalDisasters.Geyser.Multicast_TriggerExplosion // Final|Net|NetReliableNative|Event|NetMulticast|Private // @ game+0x4383e20
};

// Class NaturalDisasters.DisableGeyserMechanismAction
// Size: 0x3e0 (Inherited: 0x3c8)
struct ADisableGeyserMechanismAction : AActor {
	struct UMechanismActionComponent* MechanismActionComponent; // 0x3c8(0x08)
	struct TArray<struct AGeyser*> GeysersToDisable; // 0x3d0(0x10)

	void OnActionStateChanged(TScriptInterface<struct UMechanismActionInterface> Action, char PreviousState, char NewState, struct AActor* InInstigator); // Function NaturalDisasters.DisableGeyserMechanismAction.OnActionStateChanged // Native|Public // @ game+0x4383ee0
	void OnActionReset(TScriptInterface<struct UMechanismResetInterface> Mechanism); // Function NaturalDisasters.DisableGeyserMechanismAction.OnActionReset // Native|Public // @ game+0x4383e40
};

// Class NaturalDisasters.EarthquakeSetupDataAsset
// Size: 0x328 (Inherited: 0x28)
struct UEarthquakeSetupDataAsset : UDataAsset {
	bool IsEnabled; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FWeightedProbabilityRangeOfRanges WarmUpDuration; // 0x30(0x30)
	struct FWeightedProbabilityRangeOfRanges EarthquakeDuration; // 0x60(0x30)
	struct FWeightedProbabilityRangeOfRanges CoolDownDuration; // 0x90(0x30)
	struct FWeightedProbabilityRangeOfRanges DormantDuration; // 0xc0(0x30)
	float ChanceOfTriggeringAVolcano; // 0xf0(0x04)
	struct FFloatRange PercentageThroughEarthquakeToStartVolcano; // 0xf4(0x10)
	char UnknownData_104[0x4]; // 0x104(0x04)
	struct FPlayerFeedback WarmupPlayerFeedback; // 0x108(0x80)
	struct FPlayerFeedback ActivePlayerFeedback; // 0x188(0x80)
	struct FWeightedProbabilityRangeOfRanges StaggerStrengthDuration; // 0x208(0x30)
	float StaggerStrengthModifierWhenOnAShip; // 0x238(0x04)
	struct FFloatRange PercentageThroughCameraShakeToStartNextOne; // 0x23c(0x10)
	struct FFloatRange TimeToShipPush; // 0x24c(0x10)
	char UnknownData_25C[0x4]; // 0x25c(0x04)
	struct FWeightedProbabilityRangeOfRanges ForceToApplyToShip; // 0x260(0x30)
	float MaximumShipSpeedToBePushed; // 0x290(0x04)
	float ChanceEarthquakeTriggersGeysers; // 0x294(0x04)
	struct FWeightedProbabilityRangeOfRanges TimeBetweenLocalEffects; // 0x298(0x30)
	struct FWeightedProbabilityRange NumberOfLocalEffectsToTrigger; // 0x2c8(0x20)
	float EffectConeAngle; // 0x2e8(0x04)
	float EffectRaycastDistanceInMetres; // 0x2ec(0x04)
	struct FDistanceThrottledRandomParticleSystemPicker EarthquakeEffects; // 0x2f0(0x10)
	float WarmupWindTurbulence; // 0x300(0x04)
	struct FFloatRange WarmupGustPower; // 0x304(0x10)
	float ActiveWindTurbulence; // 0x314(0x04)
	struct FFloatRange ActiveGustPower; // 0x318(0x10)
};

// Class NaturalDisasters.Earthquake
// Size: 0x5b8 (Inherited: 0x3c8)
struct AEarthquake : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct UEarthquakeSetupDataAsset* EarthquakeSetupData; // 0x3d8(0x08)
	struct UEarthquakeSetupDataAsset* EarthquakeSetupDataOverride; // 0x3e0(0x08)
	struct UEarthquakeSetupDataAsset* SelectedEarthquakeDataForNextQuake; // 0x3e8(0x08)
	struct TArray<struct FEarthquakeStoryCustomisationData> StoryCustomisationData; // 0x3f0(0x10)
	struct AVolcano* AssociatedVolcano; // 0x400(0x08)
	struct AGeyserManager* AssociatedGeyserManager; // 0x408(0x08)
	float EarthquakeEffectInnerRadiusOffsetInMetres; // 0x410(0x04)
	char UnknownData_414[0x4]; // 0x414(0x04)
	struct UWwiseObjectPoolWrapper* AudioPool; // 0x418(0x08)
	struct UWwiseEvent* PlayEarthquakeLarge; // 0x420(0x08)
	struct UWwiseEvent* StopEarthquakeLarge; // 0x428(0x08)
	struct UWwiseEvent* PlayEarthquakeSmall; // 0x430(0x08)
	struct UWwiseEvent* StopEarthquakeSmall; // 0x438(0x08)
	struct FName EarthquakeRtpcName; // 0x440(0x08)
	float EarthquakeRtpcMin; // 0x448(0x04)
	float EarthquakeRtpcMax; // 0x44c(0x04)
	float EarthquakeSizeToUseLargeAttenuation; // 0x450(0x04)
	char UnknownData_454[0x4]; // 0x454(0x04)
	struct UCapsuleComponent* HitDetectionVolume; // 0x458(0x08)
	struct UWindZoneComponent* WindZone; // 0x460(0x08)
	char EarthquakeState; // 0x468(0x01)
	char UnknownData_469[0x14f]; // 0x469(0x14f)

	void OnRep_EarthquakeState(char OldEarthquakeState); // Function NaturalDisasters.Earthquake.OnRep_EarthquakeState // Final|Native|Private // @ game+0x43843f0
};

// Class NaturalDisasters.MechanismGeyser
// Size: 0x4c8 (Inherited: 0x4b8)
struct AMechanismGeyser : AGeyser {
	char GeyserStateWhenMechanismIsInactive; // 0x4b8(0x01)
	char UnknownData_4B9[0x7]; // 0x4b9(0x07)
	struct UMechanismActionComponent* MechanismActionComponent; // 0x4c0(0x08)

	void OnMechanismActionStateChanged(TScriptInterface<struct UMechanismActionInterface> Action, char PreviousState, char NewState, struct AActor* InInstigator); // Function NaturalDisasters.MechanismGeyser.OnMechanismActionStateChanged // Final|Native|Public // @ game+0x4384180
	void OnMechanismActionReset(TScriptInterface<struct UMechanismResetInterface> Action); // Function NaturalDisasters.MechanismGeyser.OnMechanismActionReset // Final|Native|Private // @ game+0x43840e0
};

// Class NaturalDisasters.GeyserManagerSetupDataAsset
// Size: 0x1c0 (Inherited: 0x28)
struct UGeyserManagerSetupDataAsset : UDataAsset {
	bool IsEnabled; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FWeightedProbabilityRangeOfRanges DormantDuration; // 0x30(0x30)
	struct FWeightedProbabilityRangeOfRanges ActiveDuration; // 0x60(0x30)
	struct FWeightedProbabilityRangeOfRanges DelayBetweenGeyserGroupsDuringGeyserEvent; // 0x90(0x30)
	bool StartInactive; // 0xc0(0x01)
	bool NoRestartAfterGeyserSpurtComplete; // 0xc1(0x01)
	bool UseUniqueLocationsForEachGeyser; // 0xc2(0x01)
	char UnknownData_C3[0x1]; // 0xc3(0x01)
	float MinDistanceFromPlayerInMetres; // 0xc4(0x04)
	float MinGeyserSequenceSpacing; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct UClass* GeyserToSpawn; // 0xd0(0x08)
	struct FWeightedProbabilityRange NumGeyserGroupsToSpawn; // 0xd8(0x20)
	struct FWeightedProbabilityRange NumGeysersToSpawnPerGroup; // 0xf8(0x20)
	struct FWeightedProbabilityRangeOfRanges SpawnDistanceFromPlayerInMetres; // 0x118(0x30)
	struct FWeightedProbabilityRangeOfRanges SpawnRadiusInMetres; // 0x148(0x30)
	struct TArray<struct FGeyserSpawnAngleOption> SpawnAngleRelativeToPlayerDirection; // 0x178(0x10)
	struct FWeightedProbabilityRangeOfRanges DelayBetweenEachGeyserSpawningInAGroup; // 0x188(0x30)
	float MaximumDensityRadiusInMetres; // 0x1b8(0x04)
	int32_t MaximumDensityMaxNumGeysersWithinRadius; // 0x1bc(0x04)
};

// Class NaturalDisasters.NaturalDisasterRegistryInterface
// Size: 0x28 (Inherited: 0x28)
struct UNaturalDisasterRegistryInterface : UInterface {
};

// Class NaturalDisasters.GeyserManager
// Size: 0x448 (Inherited: 0x3c8)
struct AGeyserManager : AActor {
	struct UGeyserManagerSetupDataAsset* GeyserManagerSetupData; // 0x3c8(0x08)
	struct UGeyserManagerSetupDataAsset* GeyserManagerSetupDataOverride; // 0x3d0(0x08)
	struct UGeyserManagerSetupDataAsset* SelectedGeyserManagerForNextActivation; // 0x3d8(0x08)
	struct TArray<struct FGeyserManagerStoryCustomisationData> StoryCustomisationData; // 0x3e0(0x10)
	struct USceneComponent* Root; // 0x3f0(0x08)
	char State; // 0x3f8(0x01)
	char UnknownData_3F9[0x4f]; // 0x3f9(0x4f)
};

// Class NaturalDisasters.GeyserItemSpawnComponent
// Size: 0x460 (Inherited: 0x440)
struct UGeyserItemSpawnComponent : UItemSpawnComponent {
	char UnknownData_440[0x20]; // 0x440(0x20)

	void OnGeyserSpawned(struct FVector GeyserSpawnLocation); // Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned // Final|Native|Private|HasOutParms|HasDefaults // @ game+0x4384050
};

// Class NaturalDisasters.GeyserSetupDataAsset
// Size: 0xe8 (Inherited: 0x28)
struct UGeyserSetupDataAsset : UDataAsset {
	bool IsEnabled; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FWeightedProbabilityRangeOfRanges DormantDuration; // 0x30(0x30)
	struct FWeightedProbabilityRangeOfRanges InitialWarningDuration; // 0x60(0x30)
	struct FWeightedProbabilityRange NumSpurtsPerActivation; // 0x90(0x20)
	struct FWeightedProbabilityRangeOfRanges TimeBetweenSpurts; // 0xb0(0x30)
	bool ShouldDestroyOnDeactivation; // 0xe0(0x01)
	char UnknownData_E1[0x3]; // 0xe1(0x03)
	float DestroyAfterDeactivationDelay; // 0xe4(0x04)
};

// Class NaturalDisasters.LavaStatus
// Size: 0x30 (Inherited: 0x30)
struct ULavaStatus : UStatusBase {
};

// Class NaturalDisasters.LavaZone
// Size: 0x470 (Inherited: 0x3c8)
struct ALavaZone : AActor {
	struct FWeightedProbabilityRangeOfRanges TimeBetweenActivations; // 0x3c8(0x30)
	struct FWeightedProbabilityRangeOfRanges ActiveDuration; // 0x3f8(0x30)
	struct FStoryFlag StoryFlag; // 0x428(0x08)
	struct UPhysicalMaterial* LavaMaterial; // 0x430(0x08)
	struct TArray<struct AActor*> ActorsInZone; // 0x438(0x10)
	bool Active; // 0x448(0x01)
	bool InitializeFromGlobalState; // 0x449(0x01)
	bool SelfActivating; // 0x44a(0x01)
	char UnknownData_44B[0x5]; // 0x44b(0x05)
	TScriptInterface<struct UActivateableSurfaceMaterialStatusZoneInterface> MaterialZone; // 0x450(0x10)
	TScriptInterface<struct UObjectMessagingDispatcherInterface> LocalPlayerDispatcher; // 0x460(0x10)

	void OnRep_ActorsInZone(struct TArray<struct AActor*> PreviousActors); // Function NaturalDisasters.LavaZone.OnRep_ActorsInZone // Final|Native|Private|HasOutParms // @ game+0x4384320
	void OnRep_Active(); // Function NaturalDisasters.LavaZone.OnRep_Active // Final|Native|Private // @ game+0x4384300
};

// Class NaturalDisasters.VolcanoInterface
// Size: 0x28 (Inherited: 0x28)
struct UVolcanoInterface : UInterface {
};

// Class NaturalDisasters.VolcanoServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UVolcanoServiceInterface : UInterface {
};

// Class NaturalDisasters.SeatStat_IslandVolcanoActive
// Size: 0xc0 (Inherited: 0x48)
struct USeatStat_IslandVolcanoActive : USeatStat {
	struct FName VolcanoIslandName; // 0x48(0x08)
	char UnknownData_50[0x70]; // 0x50(0x70)
};

// Class NaturalDisasters.SuperheatedWaterSetupDataAsset
// Size: 0xe8 (Inherited: 0x28)
struct USuperheatedWaterSetupDataAsset : UDataAsset {
	float TimeBetweenHealthReduction; // 0x28(0x04)
	float MinimumWaterDepthToCauseDamage; // 0x2c(0x04)
	struct FWeightedProbabilityRangeOfRanges TimeBetweenLargeSurfaceEffects; // 0x30(0x30)
	float LargeSurfaceEffectMinimumDistanceInMetres; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
	struct FRandomParticleSystemPicker LargeSurfaceEffects; // 0x68(0x10)
	float EffectSpawnHeight; // 0x78(0x04)
	float MurkStrengthToStartEffects; // 0x7c(0x04)
	struct FWeightedProbabilityRangeOfRanges TimeBetweenSmallSurfaceEffects; // 0x80(0x30)
	struct FWeightedProbabilityRange NumSmallSurfaceEffects; // 0xb0(0x20)
	struct FDistanceThrottledRandomParticleSystemPicker SmallSurfaceEffects; // 0xd0(0x10)
	float SmallSurfaceEffectNearbyPlayerRadiusInMetres; // 0xe0(0x04)
	float SmallSurfaceEffectOffsetRadiusInMetres; // 0xe4(0x04)
};

// Class NaturalDisasters.SuperheatedWater
// Size: 0x570 (Inherited: 0x468)
struct ASuperheatedWater : AMurk {
	char UnknownData_468[0x10]; // 0x468(0x10)
	struct USuperheatedWaterSetupDataAsset* SetupData; // 0x478(0x08)
	struct UCapsuleComponent* HitDetectionVolume; // 0x480(0x08)
	float FakeUnderwaterLocationsMinDistanceInMetres; // 0x488(0x04)
	float FakeUnderwaterLocationsDistanceBetweenPointsInMetres; // 0x48c(0x04)
	struct TArray<struct AAthenaPlayerCharacter*> PlayersInZone; // 0x490(0x10)
	char UnknownData_4A0[0xd0]; // 0x4a0(0xd0)

	void OnRep_PlayersInZone(); // Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone // Final|Native|Private // @ game+0x4384490
};

// Class NaturalDisasters.Volcano
// Size: 0x5f0 (Inherited: 0x3c8)
struct AVolcano : AActor {
	char UnknownData_3C8[0x18]; // 0x3c8(0x18)
	struct UVolcanoSetupDataAsset* VolcanoSetupDataOverride; // 0x3e0(0x08)
	struct UVolcanoSetupDataAsset* SelectedVolcanoDataForNextEruption; // 0x3e8(0x08)
	struct TArray<struct FVolcanoStoryCustomisationData> StoryCustomisationData; // 0x3f0(0x10)
	struct UCapsuleComponent* HitDetectionVolume; // 0x400(0x08)
	bool UseDormantDuration; // 0x408(0x01)
	char UnknownData_409[0x7]; // 0x409(0x07)
	struct UVolcanoSetupDataAsset* VolcanoSetupData; // 0x410(0x08)
	struct AMurk* AssociatedSuperheatedWater; // 0x418(0x08)
	struct ALavaZone* AssociatedLavaZone; // 0x420(0x08)
	float InnerTargetRadiusInMetres; // 0x428(0x04)
	float OuterTargetRadiusInMetres; // 0x42c(0x04)
	float NearbyPlayerRangeToFireProjectilesInMetres; // 0x430(0x04)
	float RandomShipPositionScale; // 0x434(0x04)
	struct UParticleSystemComponent* WarmingUpEmitter; // 0x438(0x08)
	struct UParticleSystemComponent* EruptingEmitter; // 0x440(0x08)
	struct UBlendedLightingZoneComponent* BlendedLightingZoneComponent; // 0x448(0x08)
	struct UBlendedAtmosphericPressureZoneComponent* BlendedAtmosphericPressureZoneComponent; // 0x450(0x08)
	struct UBlendedPostProcessingRainZoneComponent* BlendedPostProcessingRainZoneComponent; // 0x458(0x08)
	struct FVector ProjectileLaunchOffset; // 0x460(0x0c)
	char UnknownData_46C[0x4]; // 0x46c(0x04)
	struct UWwiseObjectPoolWrapper* AudioPool; // 0x470(0x08)
	struct UWwiseEvent* WarmupAudioPlayEvent; // 0x478(0x08)
	struct UWwiseEvent* WarmupAudioStopEvent; // 0x480(0x08)
	struct UWwiseEvent* EruptingAudioPlayEvent; // 0x488(0x08)
	struct UWwiseEvent* EruptingAudioStopEvent; // 0x490(0x08)
	struct UCapsuleComponent* InstantKillZone; // 0x498(0x08)
	float InstantKillZoneTestInterval; // 0x4a0(0x04)
	struct FVolcanoStateData StateData; // 0x4a4(0x0c)
	struct FName AssociatedIslandName; // 0x4b0(0x08)
	char UnknownData_4B8[0x138]; // 0x4b8(0x138)

	void OnRep_VolcanoState(struct FVolcanoStateData OldVolcanoState); // Function NaturalDisasters.Volcano.OnRep_VolcanoState // Final|Native|Private // @ game+0x43844d0
	void Multicast_FireProjectile(struct FVector AuthoritySpawnLocation, struct TArray<struct FVolcanoProjectileData> VolcanoProjectileDataArray); // Function NaturalDisasters.Volcano.Multicast_FireProjectile // Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults // @ game+0x4383d40
};

// Class NaturalDisasters.VolcanoService
// Size: 0x80 (Inherited: 0x28)
struct UVolcanoService : UObject {
	char UnknownData_28[0x58]; // 0x28(0x58)
};

