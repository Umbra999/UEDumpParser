// Class LevelAssetCaching.RegionalAssetCacheInterface
// Size: 0x28 (Inherited: 0x28)
struct URegionalAssetCacheInterface : UInterface {
};

// Class LevelAssetCaching.RegionLookupInterface
// Size: 0x28 (Inherited: 0x28)
struct URegionLookupInterface : UInterface {
};

// Class LevelAssetCaching.LevelAssetCachingService
// Size: 0x70 (Inherited: 0x28)
struct ULevelAssetCachingService : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)
	struct FName CurrentRegion; // 0x40(0x08)
	TScriptInterface<struct URegionalAssetCacheInterface> AssetCache; // 0x48(0x10)
	TScriptInterface<struct URegionLookupInterface> RegionLookup; // 0x58(0x10)
	struct APawn* CachedPawn; // 0x68(0x08)
};

// Class LevelAssetCaching.RegionalAssetListDataAsset
// Size: 0x38 (Inherited: 0x28)
struct URegionalAssetListDataAsset : UDataAsset {
	struct TArray<struct FStringAssetReference> RegionAssets; // 0x28(0x10)
};

// Class LevelAssetCaching.RegionalAssetCache
// Size: 0xd8 (Inherited: 0x28)
struct URegionalAssetCache : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct URegionalAssetListDataAsset* CurrentListAsset; // 0x38(0x08)
	char UnknownData_40[0x98]; // 0x40(0x98)
};

// Class LevelAssetCaching.RegionalAssetListSetupDataAsset
// Size: 0x78 (Inherited: 0x28)
struct URegionalAssetListSetupDataAsset : UDataAsset {
	struct TMap<struct FName, struct FStringAssetReference> ListMapping; // 0x28(0x50)
};

// Class LevelAssetCaching.RegionalAssetListWorldSetupDataAsset
// Size: 0x78 (Inherited: 0x28)
struct URegionalAssetListWorldSetupDataAsset : UDataAsset {
	struct TMap<struct FString, struct FWorldRegionSetup> WorldSetups; // 0x28(0x50)
};

// Class LevelAssetCaching.RegionLookupGeneratedGrid
// Size: 0xb0 (Inherited: 0x28)
struct URegionLookupGeneratedGrid : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FWorldRegionSetup WorldSetup; // 0x30(0x28)
	char UnknownData_58[0x58]; // 0x58(0x58)
};

// Class LevelAssetCaching.RegionLookupSeaId
// Size: 0x48 (Inherited: 0x28)
struct URegionLookupSeaId : UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
};

