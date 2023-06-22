// Class StoryFramework.ActiveStorySpawnRequirement
// Size: 0x80 (Inherited: 0x50)
struct UActiveStorySpawnRequirement : USpawnRequirement {
	struct TArray<struct FName> StoryNames; // 0x50(0x10)
	bool AllStoriesRequired; // 0x60(0x01)
	char UnknownData_61[0x1f]; // 0x61(0x1f)
};

// Class StoryFramework.IsStoryActiveNPCDialogConditional
// Size: 0x48 (Inherited: 0x30)
struct UIsStoryActiveNPCDialogConditional : UNPCDialogConditional {
	struct FStoryFlag StoryFlag; // 0x30(0x08)
	char UnknownData_38[0x10]; // 0x38(0x10)
};

// Class StoryFramework.StoryClaimableResourceComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UStoryClaimableResourceComponent : UActorComponent {
	struct FStoryFlag ClaimedStoryFlag; // 0xc8(0x08)
	char UnknownData_D0[0x20]; // 0xd0(0x20)
};

// Class StoryFramework.StoryClaimedResourcesServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UStoryClaimedResourcesServiceInterface : UInterface {
};

// Class StoryFramework.StoryClaimedResourcesService
// Size: 0x488 (Inherited: 0x3c8)
struct AStoryClaimedResourcesService : AActor {
	char UnknownData_3C8[0x60]; // 0x3c8(0x60)
	struct TArray<struct UStoryClaimableResourceComponent*> PendingClaims; // 0x428(0x10)
	struct TMap<struct FName, struct FStoryClaimableResourcesList> StoriesToClaimableResourcesMap; // 0x438(0x50)
};

// Class StoryFramework.StoryDrivenBlendedLightingZoneComponent
// Size: 0x360 (Inherited: 0x330)
struct UStoryDrivenBlendedLightingZoneComponent : UBlendedLightingZoneComponent {
	struct UStoryDrivenBlendedLightingZoneComponentDataAsset* StoryDrivenLightingAssetsCollection; // 0x328(0x08)
	struct FLightingZoneStoryRelatedSettings CurrentStoryResponse; // 0x330(0x10)
	char UnknownData_348[0x18]; // 0x348(0x18)

	void OnRep_CurrentStoryResponse(); // Function StoryFramework.StoryDrivenBlendedLightingZoneComponent.OnRep_CurrentStoryResponse // Final|Native|Private // @ game+0x166e230
};

// Class StoryFramework.StoryDrivenBlendedLightingZoneComponentDataAsset
// Size: 0x58 (Inherited: 0x28)
struct UStoryDrivenBlendedLightingZoneComponentDataAsset : UDataAsset {
	struct FFeatureFlag Feature; // 0x28(0x0c)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TArray<struct FLightingZoneStoryRelatedSettings> StoryResponses; // 0x38(0x10)
	struct TArray<struct UStoryDrivenBlendedLightingZoneComponentDataAsset*> AssetsList; // 0x48(0x10)
};

// Class StoryFramework.StoryDrivenSalvageItemSpawnComponent
// Size: 0x5b0 (Inherited: 0x580)
struct UStoryDrivenSalvageItemSpawnComponent : USalvageItemSpawnComponent {
	struct FStoryFlag Story; // 0x580(0x08)
	char UnknownData_588[0x28]; // 0x588(0x28)
};

// Class StoryFramework.StorySpawnedActorsComponent
// Size: 0x108 (Inherited: 0xc8)
struct UStorySpawnedActorsComponent : UActorComponent {
	struct UStorySpawnedActorsComponentDataAsset* AssetsCollection; // 0xc8(0x08)
	char UnknownData_D0[0x38]; // 0xd0(0x38)
};

// Class StoryFramework.StorySpawnedActorsComponentDataAsset
// Size: 0x58 (Inherited: 0x28)
struct UStorySpawnedActorsComponentDataAsset : UDataAsset {
	struct FFeatureFlag Feature; // 0x28(0x0c)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TArray<struct FStorySpawnedActorsComponentList> StoryResponses; // 0x38(0x10)
	struct TArray<struct UStorySpawnedActorsComponentDataAsset*> AssetsList; // 0x48(0x10)
};

// Class StoryFramework.StorySpawnedActorsDataAsset
// Size: 0x58 (Inherited: 0x28)
struct UStorySpawnedActorsDataAsset : UDataAsset {
	struct FFeatureFlag Feature; // 0x28(0x0c)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TArray<struct FStorySpawnedActorsList> StoryResponses; // 0x38(0x10)
	struct TArray<struct UStorySpawnedActorsDataAsset*> AssetsList; // 0x48(0x10)
};

// Class StoryFramework.StorySpawnedActorsServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UStorySpawnedActorsServiceInterface : UInterface {
};

// Class StoryFramework.StorySpawnedActorsService
// Size: 0x500 (Inherited: 0x3c8)
struct AStorySpawnedActorsService : AActor {
	char UnknownData_3C8[0x18]; // 0x3c8(0x18)
	struct TArray<struct UStorySpawnedActorsComponent*> EarlyRegisteredComponents; // 0x3e0(0x10)
	struct UStorySpawnedActorsDataAsset* Asset; // 0x3f0(0x08)
	char UnknownData_3F8[0x108]; // 0x3f8(0x108)
};

// Class StoryFramework.StorySpawnedActorsSettings
// Size: 0x48 (Inherited: 0x38)
struct UStorySpawnedActorsSettings : UDeveloperSettings {
	struct FStringAssetReference StorySpawnActorsDataAssetLocation; // 0x38(0x10)
};

// Class StoryFramework.DebugStoryServiceCheatInterface
// Size: 0x28 (Inherited: 0x28)
struct UDebugStoryServiceCheatInterface : UInterface {
};

// Class StoryFramework.DebugStoryServiceCheat
// Size: 0x420 (Inherited: 0x3c8)
struct ADebugStoryServiceCheat : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct TArray<struct FStoryInfo> AllStories; // 0x3d0(0x10)
	struct TArray<struct FString> AllIncludeFilters; // 0x3e0(0x10)
	struct TArray<struct FString> AllExcludeFilters; // 0x3f0(0x10)
	char UnknownData_400[0x20]; // 0x400(0x20)
};

// Class StoryFramework.StorySettings
// Size: 0x48 (Inherited: 0x38)
struct UStorySettings : UDeveloperSettings {
	struct FStringAssetReference StoryNamesCollectionDataAssetLocation; // 0x38(0x10)
};

// Class StoryFramework.StoryNamesCollectionDataAsset
// Size: 0x48 (Inherited: 0x28)
struct UStoryNamesCollectionDataAsset : UDataAsset {
	struct TArray<struct FStoryNameInfo> Stories; // 0x28(0x10)
	struct TArray<struct UStoryNamesCollectionDataAsset*> StoriesAssets; // 0x38(0x10)
};

// Class StoryFramework.StoryServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UStoryServiceInterface : UInterface {
};

// Class StoryFramework.StoryService
// Size: 0x4a0 (Inherited: 0x3c8)
struct AStoryService : AActor {
	char UnknownData_3C8[0x28]; // 0x3c8(0x28)
	struct TArray<struct FStoryInfo> Stories; // 0x3f0(0x10)
	struct TArray<struct FStoryInfo> ActiveStories; // 0x400(0x10)
	char UnknownData_410[0x90]; // 0x410(0x90)

	void OnRep_ActiveStories(); // Function StoryFramework.StoryService.OnRep_ActiveStories // Final|Native|Private // @ game+0x37406a0
};

