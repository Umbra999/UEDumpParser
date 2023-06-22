// ScriptStruct AthenaAudio.AnimNotify_SoundSwitch
// Size: 0x18 (Inherited: 0x00)
struct FAnimNotify_SoundSwitch {
	struct FStringAssetReference SkeletalMeshReference; // 0x00(0x10)
	struct FName SkeletalMeshCategoryName; // 0x10(0x08)
};

// ScriptStruct AthenaAudio.AthenaAudioBootflowEvents
// Size: 0x80 (Inherited: 0x00)
struct FAthenaAudioBootflowEvents {
	struct TArray<struct UWwiseEvent*> EventsToPlayOnLobbyStart; // 0x00(0x10)
	struct TArray<struct UWwiseEvent*> EventsToPlayOnLobbyEnd; // 0x10(0x10)
	struct TArray<struct UWwiseEvent*> EventsToPlayOnEngageStart; // 0x20(0x10)
	struct TArray<struct UWwiseEvent*> EventsToPlayOnEngageEnd; // 0x30(0x10)
	struct TArray<struct UWwiseEvent*> EventsToPlayOnLoadingStart; // 0x40(0x10)
	struct TArray<struct UWwiseEvent*> EventsToPlayOnLoadingEnd; // 0x50(0x10)
	struct TArray<struct UWwiseEvent*> EventsToPlayOnFrontEndOrLoadingStart; // 0x60(0x10)
	struct TArray<struct UWwiseEvent*> EventsToPlayOnFrontEndOrLoadingEnd; // 0x70(0x10)
};

// ScriptStruct AthenaAudio.AthenaAudioGameStateSettings
// Size: 0x20 (Inherited: 0x00)
struct FAthenaAudioGameStateSettings {
	struct FName AudioGameStateGroupName; // 0x00(0x08)
	struct FName AudioGameStateFrontend; // 0x08(0x08)
	struct FName AudioGameStateLoading; // 0x10(0x08)
	struct FName AudioGameStateIngame; // 0x18(0x08)
};

// ScriptStruct AthenaAudio.StoryDrivenAudioPortalSetting
// Size: 0x18 (Inherited: 0x00)
struct FStoryDrivenAudioPortalSetting {
	struct FStoryFlag Story; // 0x00(0x08)
	struct UAudioSpaceDataAsset* AudioInsideSpace; // 0x08(0x08)
	struct UAudioSpaceDataAsset* AudioOutsideSpace; // 0x10(0x08)
};

