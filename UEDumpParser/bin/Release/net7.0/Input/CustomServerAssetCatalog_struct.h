// Enum CustomServerAssetCatalog.GameAssetType
enum class GameAssetType : uint8_t {
	ITEM,
	SKELETON,
	GameAssetType_MAX,
};

// ScriptStruct CustomServerAssetCatalog.GameAssetCatalogModel
// Size: 0xa0 (Inherited: 0x00)
struct FGameAssetCatalogModel {
	struct TMap<struct FString, struct FGameAssetModel> gameAssetItems; // 0x00(0x50)
	struct TMap<struct FString, struct FGameAssetModel> gameAssetSkeletons; // 0x50(0x50)
};

// ScriptStruct CustomServerAssetCatalog.GameAssetModel
// Size: 0x28 (Inherited: 0x00)
struct FGameAssetModel {
	struct FString fullPath; // 0x00(0x10)
	struct FString FriendlyName; // 0x10(0x10)
	int32_t performanceWeight; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

