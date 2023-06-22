// Class AssetExclusion.AssetExclusionCanaryAsset
// Size: 0x68 (Inherited: 0x28)
struct UAssetExclusionCanaryAsset : UDataAsset {
	struct FText TextMustNotBeEmpty; // 0x28(0x38)
	int32_t ValueMustBeSetTo10; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// Class AssetExclusion.AssetExclusionCanaryContainerList
// Size: 0x38 (Inherited: 0x28)
struct UAssetExclusionCanaryContainerList : UDataAsset {
	struct TArray<struct UAssetExclusionCanaryAsset*> CanaryAssets; // 0x28(0x10)
};

