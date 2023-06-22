// Class EnemyAIOnShipFramework.EnemyAIOnShipEncounterDesc
// Size: 0x50 (Inherited: 0x28)
struct UEnemyAIOnShipEncounterDesc : UDataAsset {
	struct UAIFixedWavesSpawner* SpawnerCrewSize1; // 0x28(0x08)
	struct UAIFixedWavesSpawner* SpawnerCrewSize2; // 0x30(0x08)
	struct UAIFixedWavesSpawner* SpawnerCrewSize3; // 0x38(0x08)
	struct UAIFixedWavesSpawner* SpawnerCrewSize4; // 0x40(0x08)
	float MigrationPreventionRadius; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class EnemyAIOnShipFramework.EnemyAIOnShipServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UEnemyAIOnShipServiceInterface : UInterface {
};

// Class EnemyAIOnShipFramework.EnemyAIOnShipService
// Size: 0x470 (Inherited: 0x3c8)
struct AEnemyAIOnShipService : AActor {
	char UnknownData_3C8[0x20]; // 0x3c8(0x20)
	struct UEnemyAIOnShipServiceDataAsset* Params; // 0x3e8(0x08)
	struct TArray<struct FEnemyAIOnShipActiveEncounters> ReplicatedEncounters; // 0x3f0(0x10)
	char UnknownData_400[0x70]; // 0x400(0x70)
};

// Class EnemyAIOnShipFramework.EnemyAIOnShipServiceDataAsset
// Size: 0x30 (Inherited: 0x28)
struct UEnemyAIOnShipServiceDataAsset : UDataAsset {
	struct UEnemyAIOnShipEncounterDesc* OceanCrawlersOnShipEncounterParams; // 0x28(0x08)
};

