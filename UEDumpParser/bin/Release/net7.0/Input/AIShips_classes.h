// Class AIShips.AIShipBattlesDataAsset
// Size: 0x80 (Inherited: 0x28)
struct UAIShipBattlesDataAsset : UDataAsset {
	struct TArray<struct FAIShipBattleParams> Battles; // 0x28(0x10)
	struct TArray<struct FText> SkellyCrewNames; // 0x38(0x10)
	struct FText EncounterCompleteText; // 0x48(0x38)
};

// Class AIShips.AIShipObstacleServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIShipObstacleServiceInterface : UInterface {
};

// Class AIShips.BTTask_SailShipBesideTarget
// Size: 0xd8 (Inherited: 0x88)
struct UBTTask_SailShipBesideTarget : UBTTask_BlackboardBase {
	char UnknownData_88[0x20]; // 0x88(0x20)
	struct FTrackingNoiseGenerator TrackingNoiseGenerator; // 0xa8(0x18)
	char UnknownData_C0[0x18]; // 0xc0(0x18)
};

// Class AIShips.AthenaAIShipControllerParamsDataAsset
// Size: 0x490 (Inherited: 0x138)
struct UAthenaAIShipControllerParamsDataAsset : UAthenaAIControllerParamsDataAsset {
	struct FShipMovementParams TrackingMovementParams; // 0x138(0x38)
	struct FWeightedProbabilityRangeOfRanges TimesToSailBesideTarget; // 0x170(0x30)
	struct FWeightedProbabilityRangeOfRanges PerpendicularDistanceOffsets; // 0x1a0(0x30)
	struct FWeightedProbabilityRangeOfRanges TimesBeforeDistanceChange; // 0x1d0(0x30)
	float MaxParallelDistanceOffset; // 0x200(0x04)
	float AlignDistanceThreshold; // 0x204(0x04)
	float TimeToProjectIntoFutureForTracking; // 0x208(0x04)
	float TargetSpeedThresholdToTrackShip; // 0x20c(0x04)
	struct FTrackingNoiseGenerator TrackingNoiseGenerator; // 0x210(0x18)
	float WheelAngleMonitorDuration; // 0x228(0x04)
	float WheelAngleChangeThresholdToBreakTracking; // 0x22c(0x04)
	float SpeedMonitorDuration; // 0x230(0x04)
	float SpeedChangeThresholdToBreakTrackingInMPS; // 0x234(0x04)
	float TargetSpeedToConsiderAnchorLoweredInMPS; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
	struct FWeightedProbabilityRangeOfRanges TrackingLatencyTimes; // 0x240(0x30)
	struct FWeightedProbabilityRangeOfRanges TrackingLatencyTimesWhenAnchorLowered; // 0x270(0x30)
	struct UCurveFloat* DistToTargetShipVSTrackingLatencyCurve; // 0x2a0(0x08)
	struct FShipMovementParams CirclingMovementParams; // 0x2a8(0x38)
	float TargetSpeedThresholdInKnots; // 0x2e0(0x04)
	float SecondsInFutureToProjectTargetLocation; // 0x2e4(0x04)
	struct FWeightedProbabilityRangeOfRanges CircleRadiuses; // 0x2e8(0x30)
	struct FWeightedProbabilityRangeOfRanges CirclingSpeedsInDegreesPerSecond; // 0x318(0x30)
	struct FWeightedProbabilityRangeOfRanges TimesToCircleBeforeChangingRadius; // 0x348(0x30)
	float MinDistanceFromTargetToStartRam; // 0x378(0x04)
	float MaxDistanceFromTargetToStartRam; // 0x37c(0x04)
	float MaxSpeedToRamTarget; // 0x380(0x04)
	float RammingMaxTurnSpeed; // 0x384(0x04)
	float RammingTimeDampingScalar; // 0x388(0x04)
	float MinAngleToTargetToAttemptRam; // 0x38c(0x04)
	struct FWeightedProbabilityRangeOfRanges RammingLocationOffsets; // 0x390(0x30)
	struct FShipMovementParams SailingForwardMovementParams; // 0x3c0(0x38)
	float MinAllowedDistanceToObstacle; // 0x3f8(0x04)
	float MaxPathAvoidanceDistance; // 0x3fc(0x04)
	struct FShipMovementParams PassiveSailingMovementParams; // 0x400(0x38)
	float ChanceToAnchor; // 0x438(0x04)
	char UnknownData_43C[0x4]; // 0x43c(0x04)
	struct FWeightedProbabilityRangeOfRanges TimesToStayAnchored; // 0x440(0x30)
	int32_t NumIslandsToVisitBeforeReturning; // 0x470(0x04)
	float DistanceFromIslandsToSailTo; // 0x474(0x04)
	float DistanceToTargetToDropAnchor; // 0x478(0x04)
	char UnknownData_47C[0x4]; // 0x47c(0x04)
	struct TArray<struct UClass*> AggressionOverrideImpactIDs; // 0x480(0x10)
};

// Class AIShips.AIShipContextDescDataAsset
// Size: 0xb8 (Inherited: 0x28)
struct UAIShipContextDescDataAsset : UDataAsset {
	char ShipType; // 0x28(0x01)
	char EncounterType; // 0x29(0x01)
	char UnknownData_2A[0x6]; // 0x2a(0x06)
	struct UShipDescAsset* ShipDesc; // 0x30(0x08)
	struct UAthenaAIShipControllerParamsDataAsset* ControllerParams; // 0x38(0x08)
	struct TArray<struct FAIShipEncounterParamsSpawnerData> Spawners; // 0x40(0x10)
	struct FAIShipContextDescDamageParams DamageParams; // 0x50(0x14)
	struct FAIShipSailData SailsCustomisation; // 0x64(0x10)
	struct FColor SailColour; // 0x74(0x04)
	struct FAIShipCrewFormType FormType; // 0x78(0x20)
	struct FAIShipCrewAmmoType AmmoType; // 0x98(0x18)
	struct UShortRangeMarkerDataAsset* RewardMarkerParams; // 0xb0(0x08)
};

// Class AIShips.AIShipContextParamsDataAsset
// Size: 0x90 (Inherited: 0x28)
struct UAIShipContextParamsDataAsset : UDataAsset {
	float TopDeckPlayerTrackerRadius; // 0x28(0x04)
	float TimeSpentEmotingOnInitialSpawn; // 0x2c(0x04)
	bool ForceAIToAlwaysSpawn; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float IntervalBetweenRepairDamageAssignments; // 0x34(0x04)
	float IntervalBetweenUseCannonAssignments; // 0x38(0x04)
	float DistForMinXYAIInteractableUtility; // 0x3c(0x04)
	float DistForMaxXYAIInteractableUtility; // 0x40(0x04)
	float MinXYAIInteractableUtility; // 0x44(0x04)
	float MaxXYAIInteractableUtility; // 0x48(0x04)
	float DistForMinZAIInteractableUtility; // 0x4c(0x04)
	float DistForMaxZAIInteractableUtility; // 0x50(0x04)
	float MinZAIInteractableUtility; // 0x54(0x04)
	float MaxZAIInteractableUtility; // 0x58(0x04)
	float MinInactiveRepairSpawnDelay; // 0x5c(0x04)
	float MaxInactiveRepairSpawnDelay; // 0x60(0x04)
	float SpawnSfxDistance; // 0x64(0x04)
	float SinkSfxDistance; // 0x68(0x04)
	int32_t MinCannonAttackersWhenBoarded; // 0x6c(0x04)
	float StuckCheckInterval; // 0x70(0x04)
	float StuckCheckDistance; // 0x74(0x04)
	float MaxDistanceFromEncounter; // 0x78(0x04)
	float ShipFlippedAngle; // 0x7c(0x04)
	float SecondsUntilKillAIAfterShipDefeated; // 0x80(0x04)
	float SecondsDelayForAIShipDefeatedNotification; // 0x84(0x04)
	bool EnableShipSurfacingMusic; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// Class AIShips.AIShipEncounterDynamicDesc
// Size: 0x98 (Inherited: 0x28)
struct UAIShipEncounterDynamicDesc : UObject {
	struct TArray<struct FAIShipSizeDynamicContexts> ShipPool; // 0x28(0x10)
	struct UAIShipContextDescDataAsset* FinalShip; // 0x38(0x08)
	struct FAIShipEncounterDynamicBalancingDesc DynamicBalancingDesc; // 0x40(0x58)
};

// Class AIShips.AIShipEncounterSpawnParamsDataAsset
// Size: 0xd8 (Inherited: 0x28)
struct UAIShipEncounterSpawnParamsDataAsset : UDataAsset {
	float SpawnDepth; // 0x28(0x04)
	float Radius; // 0x2c(0x04)
	float MinSafeSpawnDistanceFromOtherShips; // 0x30(0x04)
	float TimeDelayBetweenWaves; // 0x34(0x04)
	struct FRelativeSpawnLocationGeneratorParams RelativeSpawnLocationParams; // 0x38(0xa0)
};

// Class AIShips.ShipProxyPawn
// Size: 0x478 (Inherited: 0x440)
struct AShipProxyPawn : APawn {
	struct AShip* Ship; // 0x440(0x08)
	struct AShip* SpawnTargetShip; // 0x448(0x08)
	char UnknownData_450[0x28]; // 0x450(0x28)
};

// Class AIShips.AIShipEncounterParamsDataAsset
// Size: 0xb8 (Inherited: 0x28)
struct UAIShipEncounterParamsDataAsset : UDataAsset {
	struct UAIShipEncounterSpawnParamsDataAsset* SpawnParams; // 0x28(0x08)
	struct UAIShipContextParamsDataAsset* ContextParams; // 0x30(0x08)
	struct UAIShipContextDescDataAsset* DefaultContextDesc; // 0x38(0x08)
	struct UClass* ShipPawnClass; // 0x40(0x08)
	struct UBuoyantObjectSpawnProfileDataAsset* BuoyantObjectSpawnProfileAsset; // 0x48(0x08)
	struct UClass* EventSignalAssetClass; // 0x50(0x08)
	float EventSignalHeight; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FText EncounterCompleteText; // 0x60(0x38)
	float OuterRadiusMultiplier; // 0x98(0x04)
	float MigrationRadiusMultiplier; // 0x9c(0x04)
	float InitialEncounterEntryDelay; // 0xa0(0x04)
	float MinEngagedDistanceFromPlayers; // 0xa4(0x04)
	bool EnableMusicWhenShipsHaveNoTarget; // 0xa8(0x01)
	char UnknownData_A9[0x3]; // 0xa9(0x03)
	int32_t SecondsUntilEncounterEndsAfterLastCrewLeft; // 0xac(0x04)
	int32_t MaximumEncounterDuration; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
};

// Class AIShips.AIShipServiceDataAsset
// Size: 0x250 (Inherited: 0x28)
struct UAIShipServiceDataAsset : UDataAsset {
	struct UAIShipEncounterParamsDataAsset* BattleEncounterParams; // 0x28(0x08)
	struct FAIShipEncounterParams AggressiveEncounterParams; // 0x30(0x18)
	struct FAIShipEncounterParams PassiveEncounterParams; // 0x48(0x18)
	struct FIntPoint ObstacleBucketDimensions; // 0x60(0x08)
	float ShipwreckObstacleRadius; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct FAIShipContextDescGenerationParams ContextDescGenerationParams; // 0x70(0x80)
	struct FAIShipBattleEncounterDescGenerationParams EncounterGenerationParams; // 0xf0(0x80)
	struct FAIShipSingleWaveEncounterDescGenerationParams AggressiveEncounterGenerationParams; // 0x170(0x10)
	struct FAIShipSingleWaveEncounterDescGenerationParams PassiveEncounterGenerationParams; // 0x180(0x10)
	struct FWeightedProbabilityRangeOfRanges TimerBattleFirstRegenInterval; // 0x190(0x30)
	struct FWeightedProbabilityRangeOfRanges TimerBattleRegenInterval; // 0x1c0(0x30)
	float TimerBattleFinderThrottle; // 0x1f0(0x04)
	char UnknownData_1F4[0x4]; // 0x1f4(0x04)
	struct FWeightedProbabilityRangeOfRanges TimerBattleRetryRegenInterval; // 0x1f8(0x30)
	float TimerBattleMinActivationDistanceFromPlayers; // 0x228(0x04)
	char UnknownData_22C[0x4]; // 0x22c(0x04)
	struct UShortRangeMarkerDataAsset* RewardMarkerParams; // 0x230(0x08)
	struct TArray<struct FName> IslandsToAvoid; // 0x238(0x10)
	float AvoidanceRange; // 0x248(0x04)
	char UnknownData_24C[0x4]; // 0x24c(0x04)
};

// Class AIShips.AIShipDebugFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAIShipDebugFunctionLibrary : UBlueprintFunctionLibrary {

	void RequestAIShipForCrew(struct UObject* WorldContextObject, struct FGuid CrewId); // Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x40c7790
	struct FAIShipEncounterBattleDesc GenerateAIShipBattleDesc(struct UObject* WorldContextObject, struct UAIShipServiceDataAsset* ServiceParams); // Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc // Final|Native|Static|Public|BlueprintCallable // @ game+0x40c7640
};

// Class AIShips.AIShipEncounterDesc
// Size: 0x60 (Inherited: 0x28)
struct UAIShipEncounterDesc : UDataAsset {
	struct FVector2D Location; // 0x28(0x08)
	float Radius; // 0x30(0x04)
	bool Moveable; // 0x34(0x01)
	bool ShowRevealBanner; // 0x35(0x01)
	bool ShowCompleteBanner; // 0x36(0x01)
	bool ShouldSpawnShipCloud; // 0x37(0x01)
	bool RequirePlayerShipInZoneToSpawnShips; // 0x38(0x01)
	bool EnableSecondsUntilEncounterEndsAfterLastCrewLeft; // 0x39(0x01)
	char UnknownData_3A[0x2]; // 0x3a(0x02)
	int32_t SecondsUntilEncounterEndsAfterLastCrewLeft; // 0x3c(0x04)
	bool EnableMaximumEncounterDuration; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	int32_t MaximumEncounterDuration; // 0x44(0x04)
	char EncounterType; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct TArray<struct FAIShipEncounterWave> Waves; // 0x50(0x10)
};

// Class AIShips.AIShipObstacleComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UAIShipObstacleComponent : UActorComponent {
	char ObstacleType; // 0xc8(0x01)
	char UnknownData_C9[0x3]; // 0xc9(0x03)
	float Radius; // 0xcc(0x04)
	char UnknownData_D0[0x20]; // 0xd0(0x20)
};

// Class AIShips.AIShipObstacleService
// Size: 0x450 (Inherited: 0x3c8)
struct AAIShipObstacleService : AActor {
	char UnknownData_3C8[0x88]; // 0x3c8(0x88)
};

// Class AIShips.AIShipServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIShipServiceInterface : UInterface {
};

// Class AIShips.AIShipService
// Size: 0x718 (Inherited: 0x3c8)
struct AAIShipService : AActor {
	char UnknownData_3C8[0x20]; // 0x3c8(0x20)
	struct UAIShipServiceDataAsset* Params; // 0x3e8(0x08)
	char UnknownData_3F0[0x328]; // 0x3f0(0x328)
};

// Class AIShips.AIShipTelemetryComponent
// Size: 0x108 (Inherited: 0xc8)
struct UAIShipTelemetryComponent : UActorComponent {
	char UnknownData_C8[0x40]; // 0xc8(0x40)
};

// Class AIShips.AthenaAIShipController
// Size: 0x780 (Inherited: 0x610)
struct AAthenaAIShipController : AAthenaAIControllerBase {
	struct UBehaviorTree* BTAsset; // 0x610(0x08)
	char UnknownData_618[0x18]; // 0x618(0x18)
	struct UAthenaAIShipControllerParamsDataAsset* ShipParamsDataAsset; // 0x630(0x08)
	struct UStatusEffectManagerComponent* StatusEffectManagerComponent; // 0x638(0x08)
	struct FStandardAnchorDynamicsParameters AnchorDynamicsParams; // 0x640(0x28)
	char UnknownData_668[0x118]; // 0x668(0x118)

	void ApplyControllerParams(struct UAthenaAIControllerParamsDataAsset* ParamsAsset, struct APawn* InPawn); // Function AIShips.AthenaAIShipController.ApplyControllerParams // Native|Public|BlueprintCallable // @ game+0x40c7570
};

// Class AIShips.BTService_UpdateIfShipShouldBreakTracking
// Size: 0x150 (Inherited: 0x70)
struct UBTService_UpdateIfShipShouldBreakTracking : UBTService {
	struct FBlackboardKeySelector TargetActorKey; // 0x70(0x28)
	struct FBlackboardKeySelector DisableTrackingKey; // 0x98(0x28)
	struct FBlackboardKeySelector ShouldSailForwardKey; // 0xc0(0x28)
	struct FBlackboardKeySelector TimeToSailForwardKey; // 0xe8(0x28)
	struct FBlackboardKeySelector CaptainIsPresentKey; // 0x110(0x28)
	char UnknownData_138[0x18]; // 0x138(0x18)
};

// Class AIShips.BTService_UpdateLocationWithActorLocation
// Size: 0xc0 (Inherited: 0x70)
struct UBTService_UpdateLocationWithActorLocation : UBTService {
	struct FBlackboardKeySelector LocationKey; // 0x70(0x28)
	struct FBlackboardKeySelector ActorKey; // 0x98(0x28)
};

// Class AIShips.BTService_UpdateTargetLocationForPassiveShip
// Size: 0xc8 (Inherited: 0x70)
struct UBTService_UpdateTargetLocationForPassiveShip : UBTService {
	struct FBlackboardKeySelector TargetLocationKey; // 0x70(0x28)
	char UnknownData_98[0x30]; // 0x98(0x30)
};

// Class AIShips.BTTask_AIShipSurface
// Size: 0x98 (Inherited: 0x88)
struct UBTTask_AIShipSurface : UBTTask_BlackboardBase {
	float MaxSpeed; // 0x88(0x04)
	float PreSurfaceDelay; // 0x8c(0x04)
	char UnknownData_90[0x8]; // 0x90(0x08)
};

// Class AIShips.BTTask_RamTargetShip
// Size: 0x168 (Inherited: 0x88)
struct UBTTask_RamTargetShip : UBTTask_BlackboardBase {
	char UnknownData_88[0xe0]; // 0x88(0xe0)
};

// Class AIShips.BTTask_SailShipCircleTarget
// Size: 0xc0 (Inherited: 0x88)
struct UBTTask_SailShipCircleTarget : UBTTask_BlackboardBase {
	char UnknownData_88[0x38]; // 0x88(0x38)
};

// Class AIShips.BTTask_SailShipForward
// Size: 0x130 (Inherited: 0x88)
struct UBTTask_SailShipForward : UBTTask_BlackboardBase {
	struct FBlackboardKeySelector ShouldSailForwardKey; // 0x88(0x28)
	struct FBlackboardKeySelector TimeToSailForwardKey; // 0xb0(0x28)
	struct FBlackboardKeySelector IsCaptainPresentKey; // 0xd8(0x28)
	char UnknownData_100[0x30]; // 0x100(0x30)
};

// Class AIShips.BTTask_SailShipToLocation
// Size: 0xd0 (Inherited: 0x88)
struct UBTTask_SailShipToLocation : UBTTask_BlackboardBase {
	struct FBlackboardKeySelector TargetLocationKey; // 0x88(0x28)
	float DistanceThresholdToConsiderTargetReached; // 0xb0(0x04)
	char UnknownData_B4[0x1c]; // 0xb4(0x1c)
};

// Class AIShips.CursedCrewCustomisationInterface
// Size: 0x28 (Inherited: 0x28)
struct UCursedCrewCustomisationInterface : UInterface {

	void SetCursedCrewCustomisationProperties(struct FAIShipSailData SailData); // Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x40c7850
};

// Class AIShips.CursedSailsCampaignDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UCursedSailsCampaignDataAsset : UDataAsset {
	struct TArray<struct FCursedSailsBattleParams> Battles; // 0x28(0x10)
};

// Class AIShips.DefeatAIShipEncounterConditionalStatTrigger
// Size: 0x30 (Inherited: 0x30)
struct UDefeatAIShipEncounterConditionalStatTrigger : UConditionalStatsTriggerType {
};

// Class AIShips.IsAIShipEncounterTypeStatCondition
// Size: 0x30 (Inherited: 0x28)
struct UIsAIShipEncounterTypeStatCondition : UStatCondition {
	char EncounterType; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

