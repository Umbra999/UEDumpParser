// Class WwiseAudioCore.WwiseAudioSettings
// Size: 0x260 (Inherited: 0x28)
struct UWwiseAudioSettings : UObject {
	char UnknownData_28[0xc0]; // 0x28(0xc0)
	struct FWwisePlatformMappings PlatformMappings; // 0xe8(0x20)
	struct FWwiseAudioReverbPresets ReverbPresetSettings; // 0x108(0x64)
	char UnknownData_16C[0x4]; // 0x16c(0x04)
	struct FStringAssetReference WwiseCoreAssetsPath; // 0x170(0x10)
	struct FDirectoryPath WwiseSoundbanksRoot; // 0x180(0x10)
	struct FDirectoryPath WwiseStreamedFilesRoot; // 0x190(0x10)
	struct TArray<struct FWwiseIOPriorityMappingConfig> AsyncIOPriorityMappings; // 0x1a0(0x10)
	struct FDirectoryPath TritonAcousticMapsDirectory; // 0x1b0(0x10)
	struct FString DefaultLanguage; // 0x1c0(0x10)
	struct FString SinkSharesetName; // 0x1d0(0x10)
	struct FWwiseNetworkRelationship NetworkRelationship; // 0x1e0(0x18)
	uint32_t WaapiInterpreterPort; // 0x1f8(0x04)
	char UnknownData_1FC[0x4]; // 0x1fc(0x04)
	struct UWwiseCoreAssets* WwiseCoreAssets; // 0x200(0x08)
	char UnknownData_208[0x58]; // 0x208(0x58)
};

// Class WwiseAudioCore.WwiseSubSystemInterface
// Size: 0x28 (Inherited: 0x28)
struct UWwiseSubSystemInterface : UInterface {
};

