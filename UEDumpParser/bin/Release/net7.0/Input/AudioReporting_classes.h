// Class AudioReporting.AudioReportReaction
// Size: 0x30 (Inherited: 0x28)
struct UAudioReportReaction : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class AudioReporting.AudioReportingComponent
// Size: 0x240 (Inherited: 0xc8)
struct UAudioReportingComponent : UActorComponent {
	struct APlayerController* CachedOwningController; // 0xc8(0x08)
	char UnknownData_D0[0x170]; // 0xd0(0x170)
};

// Class AudioReporting.AudioReportingConfig
// Size: 0x48 (Inherited: 0x38)
struct UAudioReportingConfig : UDeveloperSettings {
	struct FStringAssetReference AudioReportingSettings; // 0x38(0x10)
};

// Class AudioReporting.AudioReportingDebugMenuGenerator
// Size: 0x28 (Inherited: 0x28)
struct UAudioReportingDebugMenuGenerator : UDebugMenuEntryGenerator {
};

// Class AudioReporting.EventReactionsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UEventReactionsDataAsset : UDataAsset {
	struct TArray<struct FEventReactionDesc> Reactions; // 0x28(0x10)
};

// Class AudioReporting.AudioReportingSettings
// Size: 0x48 (Inherited: 0x28)
struct UAudioReportingSettings : UDataAsset {
	int32_t MaxReactionCount; // 0x28(0x04)
	float AudioVeryCloseThresholdDistance; // 0x2c(0x04)
	float AttenuationFilterScaler; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TArray<struct UEventReactionsDataAsset*> EventReactionDataAssets; // 0x38(0x10)
};

