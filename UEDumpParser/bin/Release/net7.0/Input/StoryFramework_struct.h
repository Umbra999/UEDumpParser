// ScriptStruct StoryFramework.StoryFlag
// Size: 0x08 (Inherited: 0x00)
struct FStoryFlag {
	struct FName StoryName; // 0x00(0x08)
};

// ScriptStruct StoryFramework.StoryClaimedResourcesChangedTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FStoryClaimedResourcesChangedTelemetryEvent {
	struct TArray<struct FStoryResourceStateChanged> StoryResourceStateChanges; // 0x00(0x10)
};

// ScriptStruct StoryFramework.StoryResourceStateChanged
// Size: 0x14 (Inherited: 0x00)
struct FStoryResourceStateChanged {
	struct FName StoryName; // 0x00(0x08)
	int32_t NumResourcesClaimed; // 0x08(0x04)
	int32_t NumResourcesReleased; // 0x0c(0x04)
	int32_t NumClaimsPending; // 0x10(0x04)
};

// ScriptStruct StoryFramework.StoryClaimableResourcesList
// Size: 0x20 (Inherited: 0x00)
struct FStoryClaimableResourcesList {
	struct FStoryFlag StoryFlag; // 0x00(0x08)
	bool AreResourcesClaimed; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct TArray<struct UStoryClaimableResourceComponent*> ClaimableResources; // 0x10(0x10)
};

// ScriptStruct StoryFramework.LightingZoneStoryRelatedSettings
// Size: 0x10 (Inherited: 0x00)
struct FLightingZoneStoryRelatedSettings {
	struct FStoryFlag Story; // 0x00(0x08)
	float TargetPointOnCurve; // 0x08(0x04)
	float FadeDuration; // 0x0c(0x04)
};

// ScriptStruct StoryFramework.NamedPointsGroupActorLocation
// Size: 0x28 (Inherited: 0x00)
struct FNamedPointsGroupActorLocation {
	struct FName NamedPointsGroup; // 0x00(0x08)
	struct UClass* ActorToSpawn; // 0x08(0x20)
};

// ScriptStruct StoryFramework.StorySpawnedActorsComponentList
// Size: 0x20 (Inherited: 0x00)
struct FStorySpawnedActorsComponentList {
	struct FStoryFlag Story; // 0x00(0x08)
	struct TArray<struct FNamedPointsGroupActorLocation> GroupLocations; // 0x08(0x10)
	struct ULayerActorsDataAsset* LayerToSpawn; // 0x18(0x08)
};

// ScriptStruct StoryFramework.StorySpawnedActorsList
// Size: 0x38 (Inherited: 0x00)
struct FStorySpawnedActorsList {
	struct FStoryFlag Story; // 0x00(0x08)
	struct TArray<struct FActorLocationPair> ActorLocations; // 0x08(0x10)
	struct TArray<struct FNamedPointsActorLocation> NamedPointsActorLocations; // 0x18(0x10)
	struct TArray<struct FInstancedLayerLocation> InstancedLayerLocations; // 0x28(0x10)
};

// ScriptStruct StoryFramework.InstancedLayerLocation
// Size: 0x18 (Inherited: 0x00)
struct FInstancedLayerLocation {
	struct FStringAssetReference ActorWithInstancedLayerComponent; // 0x00(0x10)
	struct ULayerActorsDataAsset* LayerToSpawn; // 0x10(0x08)
};

// ScriptStruct StoryFramework.NamedPointsActorLocation
// Size: 0x20 (Inherited: 0x00)
struct FNamedPointsActorLocation {
	struct FStringAssetReference ActorWithNamedPointsComponent; // 0x00(0x10)
	struct TArray<struct FNamedPointsGroupActorLocation> GroupLocations; // 0x10(0x10)
};

// ScriptStruct StoryFramework.ActorLocationPair
// Size: 0x30 (Inherited: 0x00)
struct FActorLocationPair {
	struct FStringAssetReference SpawnLocation; // 0x00(0x10)
	struct UClass* ActorToSpawn; // 0x10(0x20)
};

// ScriptStruct StoryFramework.StorySpawnedActorsChangeTelemetryEvent
// Size: 0x20 (Inherited: 0x00)
struct FStorySpawnedActorsChangeTelemetryEvent {
	struct TArray<struct FStorySpawnedActorsIndividualStoryInfo> StorySpawnedActors; // 0x00(0x10)
	struct TArray<struct FStorySpawnedActorsIndividualStoryInfo> StoryDespawnedActors; // 0x10(0x10)
};

// ScriptStruct StoryFramework.StorySpawnedActorsIndividualStoryInfo
// Size: 0x18 (Inherited: 0x00)
struct FStorySpawnedActorsIndividualStoryInfo {
	struct FString StoryName; // 0x00(0x10)
	int32_t NumActorsSpawned; // 0x10(0x04)
	int32_t NumActorsDespawned; // 0x14(0x04)
};

// ScriptStruct StoryFramework.IsStoryActiveConditionBase
// Size: 0x48 (Inherited: 0x28)
struct FIsStoryActiveConditionBase : FTargetedPayloadConditionBase {
	struct TArray<struct FStoryFlag> StoryFlags; // 0x28(0x10)
	char UnknownData_38[0x10]; // 0x38(0x10)
};

// ScriptStruct StoryFramework.IsAllStoryActiveCondition
// Size: 0x48 (Inherited: 0x48)
struct FIsAllStoryActiveCondition : FIsStoryActiveConditionBase {
};

// ScriptStruct StoryFramework.IsAnyStoryActiveCondition
// Size: 0x48 (Inherited: 0x48)
struct FIsAnyStoryActiveCondition : FIsStoryActiveConditionBase {
};

// ScriptStruct StoryFramework.StoryInfo
// Size: 0x18 (Inherited: 0x00)
struct FStoryInfo {
	struct FName Name; // 0x00(0x08)
	int64_t StartTimeTicks; // 0x08(0x08)
	int64_t EndTimeTicks; // 0x10(0x08)
};

// ScriptStruct StoryFramework.StoryNameInfo
// Size: 0x18 (Inherited: 0x00)
struct FStoryNameInfo {
	struct FName StoryName; // 0x00(0x08)
	struct FString StoryDesc; // 0x08(0x10)
};

// ScriptStruct StoryFramework.DuplicateStoriesReceivedTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FDuplicateStoriesReceivedTelemetryEvent {
	struct TArray<struct FString> DuplicateStoriesReceived; // 0x00(0x10)
};

// ScriptStruct StoryFramework.StoriesRefreshRequestedTelemetryEvent
// Size: 0x01 (Inherited: 0x00)
struct FStoriesRefreshRequestedTelemetryEvent {
	bool IsForcedRefresh; // 0x00(0x01)
};

// ScriptStruct StoryFramework.StoriesChangedTelemetryEvent
// Size: 0x28 (Inherited: 0x00)
struct FStoriesChangedTelemetryEvent {
	struct TArray<struct FString> AllStories; // 0x00(0x10)
	struct TArray<struct FString> ActiveStories; // 0x10(0x10)
	bool DidStoriesChange; // 0x20(0x01)
	bool WereStoriesRefreshed; // 0x21(0x01)
	char UnknownData_22[0x6]; // 0x22(0x06)
};

