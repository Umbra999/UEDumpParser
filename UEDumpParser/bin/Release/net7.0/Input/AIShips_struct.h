// Enum AIShips.EAIShipEncounterType
enum class EAIShipEncounterType : uint8_t {
	Battle,
	Passive,
	Aggressive,
	MAX,
	EAIShipEncounterType_MAX,
};

// Enum AIShips.ECannonballIconType
enum class ECannonballIconType : uint8_t {
	Normal,
	Anchor,
	Ballast,
	Barrel,
	Boogie,
	Grog,
	Limp,
	Passive,
	Rigging,
	Rudder,
	Silence,
	Snake,
	Snooze,
	None,
	Max,
	ECannonballIconType_MAX,
};

// Enum AIShips.ESkellyFormIconType
enum class ESkellyFormIconType : uint8_t {
	Normal,
	Metal,
	Plant,
	Shadow,
	None,
	Max,
	ESkellyFormIconType_MAX,
};

// Enum AIShips.EAIShipType
enum class EAIShipType : uint8_t {
	Normal,
	Hard,
	EAIShipType_MAX,
};

// Enum AIShips.EAIShipPlayerTrackerType
enum class EAIShipPlayerTrackerType : uint8_t {
	DefaultRadiusTracker,
	CannonRadiusTracker,
	OnShipTracker,
	BelowDeckOfShipTracker,
	EAIShipPlayerTrackerType_MAX,
};

// Enum AIShips.EAIShipDestructionReason
enum class EAIShipDestructionReason : uint8_t {
	Defeated,
	Despawn,
	EAIShipDestructionReason_MAX,
};

// ScriptStruct AIShips.AIShipBattleParams
// Size: 0x50 (Inherited: 0x00)
struct FAIShipBattleParams {
	struct FText Name; // 0x00(0x38)
	struct UClass* SeaId; // 0x38(0x08)
	struct FVector2D Location; // 0x40(0x08)
	float Radius; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct AIShips.ShipMovementParams
// Size: 0x38 (Inherited: 0x00)
struct FShipMovementParams {
	float MinTargetDistanceForMovement; // 0x00(0x04)
	float MaxTurnAngle; // 0x04(0x04)
	float MaxTurnAngleForObstacleAvoidance; // 0x08(0x04)
	float MaxTurnAngleForPlayerShipObstacleAvoidance; // 0x0c(0x04)
	float MinTurnSpeedScaler; // 0x10(0x04)
	float MaxSpeed; // 0x14(0x04)
	float MinSpeed; // 0x18(0x04)
	float TimeToAccelerateFromZeroToMaxSpeed; // 0x1c(0x04)
	float TimeToAccelerateFromZeroToMaxTurnSpeed; // 0x20(0x04)
	float MoveBackwardsAngleThreshold; // 0x24(0x04)
	float MoveBackwardsDistanceThreshold; // 0x28(0x04)
	float MoveBackwardsShipSpeedThreshold; // 0x2c(0x04)
	float MaxObstacleAvoidanceOverrideDistance; // 0x30(0x04)
	float ShipHalfLength; // 0x34(0x04)
};

// ScriptStruct AIShips.TrackingNoiseGenerator
// Size: 0x18 (Inherited: 0x00)
struct FTrackingNoiseGenerator {
	struct UCurveFloat* ParallelOffsetCurve; // 0x00(0x08)
	float OscillationTime; // 0x08(0x04)
	char UnknownData_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct AIShips.WeightedAIShipCrewAmmoType
// Size: 0x20 (Inherited: 0x00)
struct FWeightedAIShipCrewAmmoType {
	int32_t Weight; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FAIShipCrewAmmoType Params; // 0x08(0x18)
};

// ScriptStruct AIShips.AIShipCrewAmmoType
// Size: 0x18 (Inherited: 0x00)
struct FAIShipCrewAmmoType {
	char IconType; // 0x00(0x01)
	int8_t IconIndex; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct FStringAssetReference AmmoType; // 0x08(0x10)
};

// ScriptStruct AIShips.WeightedAIShipCrewFormType
// Size: 0x28 (Inherited: 0x00)
struct FWeightedAIShipCrewFormType {
	int32_t Weight; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FAIShipCrewFormType Params; // 0x08(0x20)
};

// ScriptStruct AIShips.AIShipCrewFormType
// Size: 0x20 (Inherited: 0x00)
struct FAIShipCrewFormType {
	char IconType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FColor IconColour; // 0x04(0x04)
	int8_t IconIndex; // 0x08(0x01)
	int8_t CaptainIconIndex; // 0x09(0x01)
	char UnknownData_A[0x6]; // 0x0a(0x06)
	struct FStringAssetReference Form; // 0x10(0x10)
};

// ScriptStruct AIShips.AIShipContextDescDamageParams
// Size: 0x14 (Inherited: 0x00)
struct FAIShipContextDescDamageParams {
	float OverrideRainFillRate; // 0x00(0x04)
	bool OverrideRepairTime; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	float RepairTimeMultiplier; // 0x08(0x04)
	bool OverrideLeakAmounts; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	float LeakAmountMultiplier; // 0x10(0x04)
};

// ScriptStruct AIShips.AIShipSailData
// Size: 0x10 (Inherited: 0x00)
struct FAIShipSailData {
	struct FColor SailRGB; // 0x00(0x04)
	struct FColor IconRGB; // 0x04(0x04)
	int32_t CrewIndex; // 0x08(0x04)
	int32_t CursedCannonballIndex; // 0x0c(0x04)
};

// ScriptStruct AIShips.AIShipEncounterParamsSpawnerData
// Size: 0x20 (Inherited: 0x00)
struct FAIShipEncounterParamsSpawnerData {
	struct UAISpawner* Spawner; // 0x00(0x08)
	struct FName SpawnLocationType; // 0x08(0x08)
	char ShipPlayerTrackerType; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	struct FName CaptainName; // 0x14(0x08)
	bool CanRepairDamage; // 0x1c(0x01)
	bool CanUseCannons; // 0x1d(0x01)
	bool IsCaptain; // 0x1e(0x01)
	bool BelowDeck; // 0x1f(0x01)
};

// ScriptStruct AIShips.AIShipContextDescGenerationParams
// Size: 0x80 (Inherited: 0x00)
struct FAIShipContextDescGenerationParams {
	struct FAIShipContextDescGenerationSharedParams SharedParams; // 0x00(0x60)
	struct TArray<struct FAIShipContextDescGenerationSharedParams> EncounterSpecificParams; // 0x60(0x10)
	struct TArray<struct FAIShipContextDescGenerationShipSpecificParams> ShipSpecificParams; // 0x70(0x10)
};

// ScriptStruct AIShips.AIShipContextDescGenerationShipSpecificParams
// Size: 0x30 (Inherited: 0x00)
struct FAIShipContextDescGenerationShipSpecificParams {
	struct UClass* ShipSize; // 0x00(0x08)
	struct UShipDescAsset* ShipDesc; // 0x08(0x08)
	struct TArray<struct FAIShipGenerationParams> ShipGenerationParams; // 0x10(0x10)
	struct TArray<struct FAIShipEncounterParamsSpawnerData> SpawnerTemplates; // 0x20(0x10)
};

// ScriptStruct AIShips.AIShipGenerationParams
// Size: 0x48 (Inherited: 0x00)
struct FAIShipGenerationParams {
	char EncounterType; // 0x00(0x01)
	char ShipType; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct UAthenaAIShipControllerParamsDataAsset* ShipControllerParams; // 0x08(0x08)
	struct TArray<struct FAIShipSkeletonSkillsetOverride> SkillsetOverrides; // 0x10(0x10)
	struct TArray<struct FWeightedAIShipCrewAmmoType> SkeletonAmmoTypeOverrides; // 0x20(0x10)
	struct FAIShipContextDescDamageParams DamageParams; // 0x30(0x14)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// ScriptStruct AIShips.AIShipSkeletonSkillsetOverride
// Size: 0x18 (Inherited: 0x00)
struct FAIShipSkeletonSkillsetOverride {
	struct FName SpawnLocationType; // 0x00(0x08)
	struct FStringAssetReference Skillset; // 0x08(0x10)
};

// ScriptStruct AIShips.AIShipContextDescGenerationSharedParams
// Size: 0x60 (Inherited: 0x00)
struct FAIShipContextDescGenerationSharedParams {
	struct TArray<char> EncounterTypes; // 0x00(0x10)
	struct TArray<struct FWeightedAIShipCrewFormType> SkeletonForms; // 0x10(0x10)
	struct TArray<struct FWeightedAIShipCrewAmmoType> SkeletonAmmoTypes; // 0x20(0x10)
	struct TArray<struct FColor> SailColours; // 0x30(0x10)
	struct TArray<struct FAIShipCaptainParams> Captains; // 0x40(0x10)
	struct TArray<struct UClass*> CaptainGenders; // 0x50(0x10)
};

// ScriptStruct AIShips.AIShipCaptainParams
// Size: 0x10 (Inherited: 0x00)
struct FAIShipCaptainParams {
	struct UClass* AIClassId; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct AIShips.AIShipSizeDynamicContexts
// Size: 0x18 (Inherited: 0x00)
struct FAIShipSizeDynamicContexts {
	struct UClass* ShipSize; // 0x00(0x08)
	struct TArray<struct UAIShipContextDescDataAsset*> AIShipsInPool; // 0x08(0x10)
};

// ScriptStruct AIShips.AIShipSingleWaveEncounterDescGenerationParams
// Size: 0x10 (Inherited: 0x00)
struct FAIShipSingleWaveEncounterDescGenerationParams {
	struct TArray<struct FAIShipClassWeightedSizes> ShipClassWeightedSizes; // 0x00(0x10)
};

// ScriptStruct AIShips.AIShipClassWeightedSizes
// Size: 0x18 (Inherited: 0x00)
struct FAIShipClassWeightedSizes {
	struct UClass* TargetShipSize; // 0x00(0x08)
	struct TArray<struct FAIShipWeightedSize> ShipSizes; // 0x08(0x10)
};

// ScriptStruct AIShips.AIShipWeightedSize
// Size: 0x18 (Inherited: 0x00)
struct FAIShipWeightedSize {
	struct FName Feature; // 0x00(0x08)
	int32_t Weight; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UClass* ShipSize; // 0x10(0x08)
};

// ScriptStruct AIShips.AIShipBattleEncounterDescGenerationParams
// Size: 0x80 (Inherited: 0x00)
struct FAIShipBattleEncounterDescGenerationParams {
	bool EnableHardShip; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct FFeatureLockedAIShipEncounterBattleGenerationParams> BattleGenerationParams; // 0x08(0x10)
	struct TArray<struct FAIShipEncounterBattleDesc> BattleDescs; // 0x18(0x10)
	struct FAIShipEncounterDynamicBalancingDesc DynamicBalancingDesc; // 0x28(0x58)
};

// ScriptStruct AIShips.AIShipEncounterDynamicBalancingDesc
// Size: 0x58 (Inherited: 0x00)
struct FAIShipEncounterDynamicBalancingDesc {
	bool UseDynamicBalancing; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float InitialWaveGenEncounterRadiusMultiplier; // 0x04(0x04)
	struct UClass* HardShipType; // 0x08(0x08)
	struct TArray<struct FAIShipEncounterDynamicBalancingPlayerShipValueDesc> PlayerShipSizeValues; // 0x10(0x10)
	int32_t PlayerValue; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct TArray<struct FAIShipEncounterDynamicBalancingWaveConfigCostDesc> DynamicWaveCostConfigurations; // 0x28(0x10)
	struct TArray<struct FAIShipEncounterDynamicBalancingCrewStrengthToTargetWaveDesc> PlayerCrewStrengthTargetWaveMapping; // 0x38(0x10)
	struct TArray<struct FAIShipEncounterDynamicBalancingPoolSizeDesc> DynamicShipSizePools; // 0x48(0x10)
};

// ScriptStruct AIShips.AIShipEncounterDynamicBalancingPoolSizeDesc
// Size: 0x10 (Inherited: 0x00)
struct FAIShipEncounterDynamicBalancingPoolSizeDesc {
	struct UClass* ShipSize; // 0x00(0x08)
	int32_t PoolSize; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AIShips.AIShipEncounterDynamicBalancingCrewStrengthToTargetWaveDesc
// Size: 0x10 (Inherited: 0x00)
struct FAIShipEncounterDynamicBalancingCrewStrengthToTargetWaveDesc {
	int32_t MinCrewStrength; // 0x00(0x04)
	int32_t MinWaveStrength; // 0x04(0x04)
	int32_t MaxWaveStrength; // 0x08(0x04)
	int32_t WaveCountIncrement; // 0x0c(0x04)
};

// ScriptStruct AIShips.AIShipEncounterDynamicBalancingWaveConfigCostDesc
// Size: 0x18 (Inherited: 0x00)
struct FAIShipEncounterDynamicBalancingWaveConfigCostDesc {
	struct TArray<struct UClass*> ShipSizes; // 0x00(0x10)
	int32_t WaveCost; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct AIShips.AIShipEncounterDynamicBalancingPlayerShipValueDesc
// Size: 0x10 (Inherited: 0x00)
struct FAIShipEncounterDynamicBalancingPlayerShipValueDesc {
	struct UClass* ShipSize; // 0x00(0x08)
	int32_t ShipValue; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AIShips.AIShipEncounterBattleDesc
// Size: 0x10 (Inherited: 0x00)
struct FAIShipEncounterBattleDesc {
	struct TArray<struct FAIShipEncounterWaveDesc> WaveDescs; // 0x00(0x10)
};

// ScriptStruct AIShips.AIShipEncounterWaveDesc
// Size: 0x10 (Inherited: 0x00)
struct FAIShipEncounterWaveDesc {
	struct TArray<struct UClass*> ShipSizes; // 0x00(0x10)
};

// ScriptStruct AIShips.FeatureLockedAIShipEncounterBattleGenerationParams
// Size: 0x78 (Inherited: 0x00)
struct FFeatureLockedAIShipEncounterBattleGenerationParams {
	struct FName Feature; // 0x00(0x08)
	struct FAIShipEncounterBattleGenerationParams Params; // 0x08(0x60)
	char UnknownData_68[0x10]; // 0x68(0x10)
};

// ScriptStruct AIShips.AIShipEncounterBattleGenerationParams
// Size: 0x60 (Inherited: 0x00)
struct FAIShipEncounterBattleGenerationParams {
	struct UClass* HardShipType; // 0x00(0x08)
	struct FWeightedProbabilityRange NumberOfWaves; // 0x08(0x20)
	struct FInt32Range MinMaxNumberOfShips; // 0x28(0x10)
	int32_t MinNumberOfShipsInFinalWave; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FAIShipSizeLimit> ShipSizeLimits; // 0x40(0x10)
	struct TArray<struct FAIShipEncounterWaveDesc> WaveConfigurations; // 0x50(0x10)
};

// ScriptStruct AIShips.AIShipSizeLimit
// Size: 0x10 (Inherited: 0x00)
struct FAIShipSizeLimit {
	struct UClass* ShipSize; // 0x00(0x08)
	int32_t MaxInstances; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct AIShips.RelativeSpawnLocationGeneratorParams
// Size: 0xa0 (Inherited: 0x00)
struct FRelativeSpawnLocationGeneratorParams {
	struct TArray<struct FWeightedSpawnDirection> SpawnDirections; // 0x00(0x10)
	char UnknownData_10[0x90]; // 0x10(0x90)
};

// ScriptStruct AIShips.WeightedSpawnDirection
// Size: 0xb0 (Inherited: 0x00)
struct FWeightedSpawnDirection {
	float DirectionAngle; // 0x00(0x04)
	float DirectionWidth; // 0x04(0x04)
	float Weight; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FWeightedSpawnOffset> SpawnOffsets; // 0x10(0x10)
	char UnknownData_20[0x90]; // 0x20(0x90)
};

// ScriptStruct AIShips.WeightedSpawnOffset
// Size: 0x40 (Inherited: 0x00)
struct FWeightedSpawnOffset {
	float MinSpawnDistance; // 0x00(0x04)
	float MaxSpawnDistance; // 0x04(0x04)
	float Weight; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FWeightedProbabilityRangeOfRanges SpawnRotations; // 0x10(0x30)
};

// ScriptStruct AIShips.AIShipEncounterParams
// Size: 0x18 (Inherited: 0x00)
struct FAIShipEncounterParams {
	float MinEngagedDistanceFromPlayers; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FShipTypeAIShipEncounterParams> ShipTypeParams; // 0x08(0x10)
};

// ScriptStruct AIShips.ShipTypeAIShipEncounterParams
// Size: 0x10 (Inherited: 0x00)
struct FShipTypeAIShipEncounterParams {
	struct UClass* ShipSize; // 0x00(0x08)
	struct UAIShipEncounterParamsDataAsset* Params; // 0x08(0x08)
};

// ScriptStruct AIShips.AIShipEncounterWave
// Size: 0x10 (Inherited: 0x00)
struct FAIShipEncounterWave {
	struct TArray<struct UAIShipContextDescDataAsset*> AIShipsInWave; // 0x00(0x10)
};

// ScriptStruct AIShips.CursedSailsBattleParams
// Size: 0x80 (Inherited: 0x00)
struct FCursedSailsBattleParams {
	struct FText Name; // 0x00(0x38)
	struct FText SkellyCrewName; // 0x38(0x38)
	char CannonBallType; // 0x70(0x01)
	char SkellyType; // 0x71(0x01)
	char UnknownData_72[0x6]; // 0x72(0x06)
	struct UAIShipEncounterDesc* EncounterDescription; // 0x78(0x08)
};

// ScriptStruct AIShips.AIShipEncounterDynamicWaveNetworkEvent
// Size: 0x20 (Inherited: 0x10)
struct FAIShipEncounterDynamicWaveNetworkEvent : FNetworkEventStruct {
	uint32_t RemainingAIShips; // 0x10(0x04)
	uint32_t TotalAIShips; // 0x14(0x04)
	uint32_t TotalAIShipsInFinalWave; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct AIShips.AIShipDespawnedEvent
// Size: 0x10 (Inherited: 0x00)
struct FAIShipDespawnedEvent {
	struct AActor* Ship; // 0x00(0x08)
	char ShipDestructionReason; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct AIShips.AIShipSpawnedEvent
// Size: 0x40 (Inherited: 0x00)
struct FAIShipSpawnedEvent {
	struct AShip* Ship; // 0x00(0x08)
	struct FGuid SpawningCrew; // 0x08(0x10)
	struct FGuid SpawningEventId; // 0x18(0x10)
	struct FGuid SpawnConfigId; // 0x28(0x10)
	int32_t Wave; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct AIShips.AIShipSinkNetworkEvent
// Size: 0x10 (Inherited: 0x10)
struct FAIShipSinkNetworkEvent : FNetworkEventStruct {
};

// ScriptStruct AIShips.AIShipSpawnedNetworkEvent
// Size: 0x10 (Inherited: 0x10)
struct FAIShipSpawnedNetworkEvent : FNetworkEventStruct {
};

// ScriptStruct AIShips.AIShipEncounterCompleteNetEvent
// Size: 0x18 (Inherited: 0x10)
struct FAIShipEncounterCompleteNetEvent : FBoxedRpc {
	int32_t BattleIdx; // 0x10(0x04)
	char CannonballIconType; // 0x14(0x01)
	char SkellyFormIconType; // 0x15(0x01)
	char UnknownData_16[0x2]; // 0x16(0x02)
};

// ScriptStruct AIShips.AIShipEncounterRevealNetEvent
// Size: 0x20 (Inherited: 0x10)
struct FAIShipEncounterRevealNetEvent : FBoxedRpc {
	int32_t BattleIdx; // 0x10(0x04)
	int32_t SkellyCrewIdx; // 0x14(0x04)
	char CannonballIconType; // 0x18(0x01)
	char SkellyFormIconType; // 0x19(0x01)
	char UnknownData_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct AIShips.AIShipEncounterNotification
// Size: 0x80 (Inherited: 0x00)
struct FAIShipEncounterNotification {
	struct FText BattleName; // 0x00(0x38)
	struct FName SeaName; // 0x38(0x08)
	struct FText SkellyCrewName; // 0x40(0x38)
	char CannonBallType; // 0x78(0x01)
	char SkellyType; // 0x79(0x01)
	char UnknownData_7A[0x6]; // 0x7a(0x06)
};

// ScriptStruct AIShips.AIShipEncounterZoneExitedNetworkEvent
// Size: 0x10 (Inherited: 0x10)
struct FAIShipEncounterZoneExitedNetworkEvent : FNetworkEventStruct {
};

// ScriptStruct AIShips.AIShipEncounterZoneEnteredNetworkEvent
// Size: 0x20 (Inherited: 0x10)
struct FAIShipEncounterZoneEnteredNetworkEvent : FNetworkEventStruct {
	int32_t RemainingAIShips; // 0x10(0x04)
	int32_t TotalAIShips; // 0x14(0x04)
	int32_t TotalAIShipsInFinalWave; // 0x18(0x04)
	int32_t CurrentSpawnedAIShips; // 0x1c(0x04)
};

// ScriptStruct AIShips.AIShipWorldSettings
// Size: 0x18 (Inherited: 0x00)
struct FAIShipWorldSettings {
	struct TArray<struct FFeatureLockedAIShipBattles> FeatureToggledBattlesData; // 0x00(0x10)
	struct UAIShipBattlesDataAsset* DefaultBattlesData; // 0x10(0x08)
};

// ScriptStruct AIShips.FeatureLockedAIShipBattles
// Size: 0x18 (Inherited: 0x00)
struct FFeatureLockedAIShipBattles {
	struct FFeatureFlag Feature; // 0x00(0x0c)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UAIShipBattlesDataAsset* BattlesData; // 0x10(0x08)
};

// ScriptStruct AIShips.AIShipEncounterDynamicWaveShipSpawnedTelemetryEvent
// Size: 0x18 (Inherited: 0x00)
struct FAIShipEncounterDynamicWaveShipSpawnedTelemetryEvent {
	struct FGuid EncounterId; // 0x00(0x10)
	int32_t WaveIndex; // 0x10(0x04)
	float TimeToSpawn; // 0x14(0x04)
};

// ScriptStruct AIShips.AIShipEncounterDynamicWaveTelemetryEvent
// Size: 0x1c (Inherited: 0x00)
struct FAIShipEncounterDynamicWaveTelemetryEvent {
	struct FGuid EncounterId; // 0x00(0x10)
	int32_t WaveIndex; // 0x10(0x04)
	int32_t CrewStrength; // 0x14(0x04)
	int32_t WaveCost; // 0x18(0x04)
};

// ScriptStruct AIShips.AIShipDamagedTelemetryEvent
// Size: 0x48 (Inherited: 0x00)
struct FAIShipDamagedTelemetryEvent {
	struct FString DamageType; // 0x00(0x10)
	struct FVector DamageLocation; // 0x10(0x0c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString DamagedShipPart; // 0x20(0x10)
	int32_t DamageLevel; // 0x30(0x04)
	struct FGuid AttackId; // 0x34(0x10)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// ScriptStruct AIShips.AIShipDespawnTelemetryEvent
// Size: 0x18 (Inherited: 0x00)
struct FAIShipDespawnTelemetryEvent {
	struct FString AIShipId; // 0x00(0x10)
	char AIShipDestructionReason; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AIShips.AIShipSpawnTelemetryEvent
// Size: 0x70 (Inherited: 0x00)
struct FAIShipSpawnTelemetryEvent {
	struct FString AIShipId; // 0x00(0x10)
	struct FString SpawningCrewId; // 0x10(0x10)
	struct FString AIShipBattleId; // 0x20(0x10)
	struct FString AIShipType; // 0x30(0x10)
	struct FGuid SpawnConfigId; // 0x40(0x10)
	struct FString AIShipSize; // 0x50(0x10)
	struct FVector SpawnLocation; // 0x60(0x0c)
	int32_t AIShipWaveIndex; // 0x6c(0x04)
};

