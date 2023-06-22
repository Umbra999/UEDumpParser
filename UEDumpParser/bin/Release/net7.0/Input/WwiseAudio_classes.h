// Class WwiseAudio.WwiseCoreAssets
// Size: 0x58 (Inherited: 0x28)
struct UWwiseCoreAssets : UDataAsset {
	struct UWwiseEvent* PauseEventStart; // 0x28(0x08)
	struct UWwiseEvent* PauseEventRelease; // 0x30(0x08)
	struct UWwiseEvent* StopAllEvent; // 0x38(0x08)
	struct UWwiseEvent* WwiseMediaSoundComponentEvent; // 0x40(0x08)
	struct UWwiseNonShippingAudioRootAsset* NonShippingAudioRootAsset; // 0x48(0x08)
	struct UWwiseIDsDatabase* WwiseIDsDatabase; // 0x50(0x08)
};

// Class WwiseAudio.AnimNotifyWwiseEmitterComponentRetrievalInterface
// Size: 0x28 (Inherited: 0x28)
struct UAnimNotifyWwiseEmitterComponentRetrievalInterface : UInterface {
};

// Class WwiseAudio.AudioReporterSubSystem
// Size: 0x78 (Inherited: 0x28)
struct UAudioReporterSubSystem : UObject {
	char UnknownData_28[0x50]; // 0x28(0x50)
};

// Class WwiseAudio.MovieSceneAkAudioEventSection
// Size: 0xa0 (Inherited: 0x98)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	struct UWwiseEvent* Event; // 0x98(0x08)
};

// Class WwiseAudio.MovieSceneAkAudioRTPCSection
// Size: 0x128 (Inherited: 0x98)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct FString Name; // 0xa0(0x10)
	struct FRichCurve FloatCurve; // 0xb0(0x78)
};

// Class WwiseAudio.MovieSceneAkTrack
// Size: 0xa0 (Inherited: 0x88)
struct UMovieSceneAkTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x88(0x10)
	char bIsAMasterTrack : 1; // 0x98(0x01)
	char UnknownData_98_1 : 7; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// Class WwiseAudio.MovieSceneAkAudioEventTrack
// Size: 0xa0 (Inherited: 0xa0)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
};

// Class WwiseAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xa0 (Inherited: 0xa0)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
};

// Class WwiseAudio.MultiEmitterRootComponent
// Size: 0x300 (Inherited: 0x2e0)
struct UMultiEmitterRootComponent : USceneComponent {
	struct TArray<struct FMultiEmitterData> MultiEmitterDataArray; // 0x2e0(0x10)
	struct TArray<struct FWwiseEmitter> PlayingEmitters; // 0x2f0(0x10)
};

// Class WwiseAudio.WwiseDebugManager
// Size: 0x88 (Inherited: 0x28)
struct UWwiseDebugManager : UObject {
	char UnknownData_28[0x60]; // 0x28(0x60)
};

// Class WwiseAudio.WwiseEmitterInterface
// Size: 0x28 (Inherited: 0x28)
struct UWwiseEmitterInterface : UInterface {
};

// Class WwiseAudio.MergedMultiEmitterComponent
// Size: 0x320 (Inherited: 0x310)
struct UMergedMultiEmitterComponent : UWwiseEmitterComponent {
	struct UWwiseObjectPoolWrapper* EmitterPool; // 0x310(0x08)
	struct UWwiseEvent* PlayEvent; // 0x318(0x08)
};

// Class WwiseAudio.WwiseEmitterManager
// Size: 0x48 (Inherited: 0x28)
struct UWwiseEmitterManager : UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
};

// Class WwiseAudio.WwiseInputManagerInterface
// Size: 0x28 (Inherited: 0x28)
struct UWwiseInputManagerInterface : UInterface {
};

// Class WwiseAudio.WwiseInputManager
// Size: 0x50 (Inherited: 0x28)
struct UWwiseInputManager : UObject {
	char UnknownData_28[0x28]; // 0x28(0x28)
};

// Class WwiseAudio.WwiseMediaManager
// Size: 0x78 (Inherited: 0x28)
struct UWwiseMediaManager : UObject {
	char UnknownData_28[0x50]; // 0x28(0x50)
};

// Class WwiseAudio.WwisePoolManager
// Size: 0x100 (Inherited: 0x28)
struct UWwisePoolManager : UObject {
	char UnknownData_28[0xd8]; // 0x28(0xd8)
};

// Class WwiseAudio.WwiseSoundFrameManager
// Size: 0x48 (Inherited: 0x28)
struct UWwiseSoundFrameManager : UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
};

// Class WwiseAudio.WwiseEvent
// Size: 0x50 (Inherited: 0x28)
struct UWwiseEvent : UObject {
	struct UWwiseBank* RequiredBank; // 0x28(0x08)
	bool WaitForBankToLoad; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	uint32_t WwiseId; // 0x34(0x04)
	float DurationMin; // 0x38(0x04)
	float DurationMax; // 0x3c(0x04)
	float MaxAttenuation; // 0x40(0x04)
	char DurationType; // 0x44(0x01)
	bool CookedIsStopEvent; // 0x45(0x01)
	char UnknownData_46[0xa]; // 0x46(0x0a)

	bool IsAudible(struct FVector SoundPosition, struct FVector ListenerPos, float AttenuationScaler); // Function WwiseAudio.WwiseEvent.IsAudible // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x529e140
	float GetMaxAttenuation(); // Function WwiseAudio.WwiseEvent.GetMaxAttenuation // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x529e110
	char GetDurationType(); // Function WwiseAudio.WwiseEvent.GetDurationType // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x529e0d0
	float GetDurationMin(); // Function WwiseAudio.WwiseEvent.GetDurationMin // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x529e0a0
	float GetDurationMax(); // Function WwiseAudio.WwiseEvent.GetDurationMax // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x529e070
};

// Class WwiseAudio.WwiseIDsDatabase
// Size: 0xa8 (Inherited: 0x28)
struct UWwiseIDsDatabase : UDataAsset {
	struct TArray<uint32_t> StateGroupIDs; // 0x28(0x10)
	struct TArray<struct FName> StateGroupNames; // 0x38(0x10)
	struct TArray<uint32_t> StateValueIDs; // 0x48(0x10)
	struct TArray<struct FName> StateValueNames; // 0x58(0x10)
	struct TArray<uint32_t> SwitchGroupIDs; // 0x68(0x10)
	struct TArray<struct FName> SwitchGroupNames; // 0x78(0x10)
	struct TArray<uint32_t> SwitchStateIDs; // 0x88(0x10)
	struct TArray<struct FName> SwitchStateNames; // 0x98(0x10)
};

// Class WwiseAudio.WwiseNonShippingAudioAsset
// Size: 0x58 (Inherited: 0x28)
struct UWwiseNonShippingAudioAsset : UDataAsset {
	struct FString CodeName; // 0x28(0x10)
	struct FString UAssetRelativePath; // 0x38(0x10)
	struct FString StreamRelativePath; // 0x48(0x10)
};

// Class WwiseAudio.WwiseNonShippingAudioRootAsset
// Size: 0x48 (Inherited: 0x28)
struct UWwiseNonShippingAudioRootAsset : UDataAsset {
	struct TArray<struct UWwiseNonShippingAudioAsset*> NonShippingAudioAssets; // 0x28(0x10)
	char UnknownData_38[0x10]; // 0x38(0x10)
};

// Class WwiseAudio.WwiseBank
// Size: 0x70 (Inherited: 0x28)
struct UWwiseBank : UObject {
	struct FString path; // 0x28(0x10)
	uint32_t WwiseId; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct UWwiseBank* InitBank; // 0x40(0x08)
	char UnknownData_48[0x28]; // 0x48(0x28)
};

// Class WwiseAudio.WwiseDDSEvent
// Size: 0x60 (Inherited: 0x50)
struct UWwiseDDSEvent : UWwiseEvent {
	struct TArray<uint32_t> DDSArgumentsGroupsIDs; // 0x50(0x10)
};

