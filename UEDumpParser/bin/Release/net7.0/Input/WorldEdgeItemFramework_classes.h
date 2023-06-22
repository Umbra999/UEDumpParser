// Class WorldEdgeItemFramework.WorldEdgeItemServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UWorldEdgeItemServiceInterface : UInterface {
};

// Class WorldEdgeItemFramework.WorldEdgeItemServiceParams
// Size: 0x40 (Inherited: 0x28)
struct UWorldEdgeItemServiceParams : UDataAsset {
	struct UEnvQuery* TeleportItemsEQSQuery; // 0x28(0x08)
	float ThrottledItemSpawnRate; // 0x30(0x04)
	float TimeToSinkFor; // 0x34(0x04)
	float AdditionalMoveDistance; // 0x38(0x04)
	int32_t MaxBatchItemsPerSlice; // 0x3c(0x04)
};

// Class WorldEdgeItemFramework.WorldEdgeItemService
// Size: 0x620 (Inherited: 0x3c8)
struct AWorldEdgeItemService : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct UWorldEdgeItemServiceParams* WorldEdgeItemParameters; // 0x3d0(0x08)
	struct FEnvQueryRequest SpawnItemEQSRequest; // 0x3d8(0x170)
	char UnknownData_548[0xd8]; // 0x548(0xd8)
};

