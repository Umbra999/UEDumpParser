// Class NetworkRegions.NetworkRegionServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UNetworkRegionServiceInterface : UInterface {
};

// Class NetworkRegions.NetworkRegionService
// Size: 0xc8 (Inherited: 0x28)
struct UNetworkRegionService : UObject {
	char UnknownData_28[0x90]; // 0x28(0x90)
	struct TArray<struct APlayerController*> PlayersThatNeedToBeTicked; // 0xb8(0x10)
};

// Class NetworkRegions.RegionAssetCacheActor
// Size: 0x408 (Inherited: 0x3c8)
struct ARegionAssetCacheActor : AActor {
	struct TArray<struct FRegionAssetsList> RegionData; // 0x3c8(0x10)
	struct TArray<struct UObject*> LoadedAssets; // 0x3d8(0x10)
	char UnknownData_3E8[0x20]; // 0x3e8(0x20)
};

