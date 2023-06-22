// Class PlayerLootMarkerFramework.PlayerLootMarkerServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UPlayerLootMarkerServiceInterface : UInterface {
};

// Class PlayerLootMarkerFramework.PlayerLootMarkerService
// Size: 0x540 (Inherited: 0x3c8)
struct APlayerLootMarkerService : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct UPlayerLootMarkerServiceParams* Params; // 0x3d0(0x08)
	char UnknownData_3D8[0x20]; // 0x3d8(0x20)
	struct TArray<struct AShortRangeMarker*> ShortRangeMarkers; // 0x3f8(0x10)
	char UnknownData_408[0x118]; // 0x408(0x118)
	struct TArray<struct FPlayerLootMarkerWorldEdgeBatchData> BatchData; // 0x520(0x10)
	char UnknownData_530[0x10]; // 0x530(0x10)
};

// Class PlayerLootMarkerFramework.PlayerLootMarkerServiceParams
// Size: 0x38 (Inherited: 0x28)
struct UPlayerLootMarkerServiceParams : UDataAsset {
	struct UShortRangeMarkerDataAsset* MarkerDataAsset; // 0x28(0x08)
	float JettisonMaxMarkerDistance; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

