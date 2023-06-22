// Class RareAudio.WwiseEmitterComponent
// Size: 0x310 (Inherited: 0x2e0)
struct UWwiseEmitterComponent : USceneComponent {
	char UnknownData_2E0[0x8]; // 0x2e0(0x08)
	struct FWwiseEmitter Emitter; // 0x2e8(0x20)
	struct UWwiseObjectPoolWrapper* WwiseObjectPoolWrapper; // 0x308(0x08)
};

// Class RareAudio.AnimNotifyWwiseEmitterComponent
// Size: 0x310 (Inherited: 0x310)
struct UAnimNotifyWwiseEmitterComponent : UWwiseEmitterComponent {
};

// Class RareAudio.AnimNotify_WwiseSound
// Size: 0x80 (Inherited: 0x38)
struct UAnimNotify_WwiseSound : UAnimNotify {
	struct UWwiseEvent* WwiseEvent; // 0x38(0x08)
	bool OwnedByWorld; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	struct FVector OwnedByWorldEmitterOffset; // 0x44(0x0c)
	char PerspectiveRestriction; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct UWwiseObjectPoolWrapper* OwnedByWorldWisePoolToUse; // 0x58(0x08)
	char UnknownData_60[0x20]; // 0x60(0x20)
};

// Class RareAudio.AnimNotify_WwiseSoundMeshSwitch
// Size: 0x98 (Inherited: 0x80)
struct UAnimNotify_WwiseSoundMeshSwitch : UAnimNotify_WwiseSound {
	struct FName SkeletalMeshSwitchGroup; // 0x80(0x08)
	struct TArray<struct FAnimNotify_SoundSwitch> MeshOverrides; // 0x88(0x10)
};

// Class RareAudio.AnimNotifyState_WwiseSound
// Size: 0x90 (Inherited: 0x30)
struct UAnimNotifyState_WwiseSound : UAnimNotifyState {
	struct UWwiseEvent* WwiseEvent; // 0x30(0x08)
	struct UWwiseEvent* WwiseEventEnd; // 0x38(0x08)
	char UnknownData_40[0x50]; // 0x40(0x50)
};

// Class RareAudio.AudioEventToComponentMap
// Size: 0x3d0 (Inherited: 0x3c8)
struct AAudioEventToComponentMap : AActor {
	struct UAudioEventToComponentMapComponent* AudioEventToComponentMapComponent; // 0x3c8(0x08)

	void ClearMappings(); // Function RareAudio.AudioEventToComponentMap.ClearMappings // Final|Native|Public|BlueprintCallable // @ game+0x528d930
	void AddMappingWithSingleEmitterComponent(struct UWwiseEvent* PlayEvent, struct UWwiseEvent* StopEvent, struct UWwiseEmitterComponent* WwiseEmitterComponent, struct UWwiseObjectPoolWrapper* WwiseEmitterPool); // Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x528d690
	void AddMapping(struct UWwiseEvent* PlayEvent, struct UWwiseEvent* StopEvent, struct TArray<struct UWwiseEmitterComponent*> WwiseEmitterComponents, struct UWwiseObjectPoolWrapper* WwiseEmitterPool); // Function RareAudio.AudioEventToComponentMap.AddMapping // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x528d350
};

// Class RareAudio.AudioEventToComponentMapComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UAudioEventToComponentMapComponent : UActorComponent {
	struct TArray<struct FEventToComponentMapping> LocalComponentMappings; // 0xc8(0x10)

	void ClearMappings(); // Function RareAudio.AudioEventToComponentMapComponent.ClearMappings // Final|Native|Public|BlueprintCallable // @ game+0x528d950
	void AddMappingWithSingleEmitterComponent(struct UWwiseEvent* PlayEvent, struct UWwiseEvent* StopEvent, struct UWwiseEmitterComponent* WwiseEmitterComponent, struct UWwiseObjectPoolWrapper* WwiseEmitterPool); // Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x528d7e0
	void AddMapping(struct UWwiseEvent* PlayEvent, struct UWwiseEvent* StopEvent, struct TArray<struct UWwiseEmitterComponent*> WwiseEmitterComponents, struct UWwiseObjectPoolWrapper* WwiseEmitterPool); // Function RareAudio.AudioEventToComponentMapComponent.AddMapping // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x528d4f0
};

// Class RareAudio.WwiseEmitterBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWwiseEmitterBlueprintLibrary : UBlueprintFunctionLibrary {

	void WwiseStopGlobalEvent(struct UWwiseEvent* Event, float FadeTime); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopGlobalEvent // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5290750
	void WwiseSetState(struct FName StateGroup, struct FName StateValue); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x52906a0
	void WwiseSetGlobalRTPC(struct FName RTPCName, float RTPCValue); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x52905e0
	void WwisePostOneShotOnOwner(struct UObject* Owner, struct UWwiseObjectPoolWrapper* EmitterPool, struct FWwiseEmitterCreationParams CreationParams, struct FVector Offset, char Relationship); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostOneShotOnOwner // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5290410
	int32_t WwisePostGlobalEvent(struct UWwiseEvent* Event); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5290390
	int32_t WwisePostEventAtLocation(struct FWwiseEmitter Emitter, struct UWwiseEvent* Event, struct FVector Location, struct FVector Front, struct UWwiseObjectPoolWrapper* EmitterPool, char Relationship); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5290180
	bool WwiseIsGlobalEvent(struct UWwiseEvent* Event); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseIsGlobalEvent // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5290100
	bool WwiseGetListenerInfo(struct FWwiseListenerInfo InfoOut, int32_t Viewport); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x528ff90
	bool WwiseGetListenerEmitter(struct FWwiseEmitter Emitter, struct UObject* WorldContextObject, int32_t ListenerIndex, struct FName Name, struct FVector Offset, bool bFollowOrientaion, struct UWwiseObjectPoolWrapper* EmitterPool); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x528fd30
	bool WwiseGetGlobalRTPC(struct FName RTPCName, float RTPCValue); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetGlobalRTPC // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x528fc50
	bool WwiseEmitterWaitToComplete(struct FWwiseEmitter Emitter, int32_t PlayId, struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x528fab0
	bool WwiseEmitterStop(struct FWwiseEmitter Emitter, int32_t PlayId, float FadeTime); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x528f950
	bool WwiseEmitterSetSwitch(struct FWwiseEmitter Emitter, struct FName SwitchGroup, struct FName Value); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetSwitch // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x528f7f0
	bool WwiseEmitterSetRTPCOnAll(struct TArray<struct FWwiseEmitter> Emitters, struct FName Name, float Value); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x528f6c0
	bool WwiseEmitterSetRTPC(struct FWwiseEmitter Emitter, struct FName Name, float Value); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x528f560
	bool WwiseEmitterSetParams(struct FWwiseEmitter Emitter, struct FWwiseEmitterParams Params); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x528f440
	bool WwiseEmitterSetLocation(struct FWwiseEmitter Emitter, struct FVector Location); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x528f320
	struct TArray<int32_t> WwiseEmitterPostEventOnAll(struct TArray<struct FWwiseEmitter> Emitters, struct UWwiseEvent* WwiseEvent, char Relationship, struct FName SourcePath, struct FName SourceObj); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x528f130
	int32_t WwiseEmitterPostEvent(struct FWwiseEmitter Emitter, struct UWwiseEvent* WwiseEvent, char Relationship, struct FName SourcePath, struct FName SourceObj); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x528ef70
	bool WwiseEmitterIsValid(struct FWwiseEmitter Emitter); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x528eeb0
	bool WwiseEmitterIsPlaying(struct FWwiseEmitter Emitter, struct UWwiseEvent* Event); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x528eda0
	bool WwiseEmitterGetRTPC(struct FWwiseEmitter Emitter, struct FName Name, float Value); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x528ec30
	void WwiseEmitterDestroy(struct FWwiseEmitter Emitter); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x528eb80
	bool WwiseEmitterComponentSetRTPCOnAll(struct TArray<struct UWwiseEmitterComponent*> EmitterComponents, struct FName Name, float Value); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x528ea20
	bool WwiseEmitterComponentSetRTPC(struct UWwiseEmitterComponent* EmitterComponent, struct FName Name, float Value); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x528e920
	struct TArray<int32_t> WwiseEmitterComponentPostEventOnAll(struct TArray<struct UWwiseEmitterComponent*> EmitterComponents, struct UWwiseEvent* WwiseEvent, char Relationship, struct FName SourcePath, struct FName SourceObj); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x528e6f0
	int32_t WwiseEmitterComponentPostEvent(struct UWwiseEmitterComponent* EmitterComponent, struct UWwiseEvent* WwiseEvent, char Relationship, struct FName SourcePath, struct FName SourceObj); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x528e570
	bool WwiseCreateEmitter(struct FWwiseEmitter Emitter, struct FName Name, struct UObject* Owner, struct UWwiseObjectPoolWrapper* EmitterPool, struct FVector Offset); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateEmitter // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x528e3b0
	int32_t WwiseCreateDetachedEmitter(struct FWwiseEmitter Emitter, struct FName Name, struct UWwiseObjectPoolWrapper* EmitterPool, struct FVector Location, struct FWwiseEmitterCreationParams CreationParams, char Relationship, struct FVector Forward); // Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x528e110
	bool SeekOnEvent(struct FWwiseEmitter WwiseEmitter, struct UWwiseEvent* in_eventID, int32_t in_iPosition, bool in_bSeekToNearestMarker, int32_t in_PlayingID); // Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x528df40
	bool GetPlaybackPosition(struct FWwiseEmitter WwiseEmitter, int32_t in_PlayingID, int32_t PlaybackPositionInMs); // Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x528ddd0
};

// Class RareAudio.WwiseEmitterComponentBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWwiseEmitterComponentBlueprintLibrary : UBlueprintFunctionLibrary {

	bool GetNamedEmitter(struct FWwiseEmitter OutEmitter, struct FName InNameOfEmitterToRetrieve, struct AActor* InActorToFindEmitterOn); // Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x528dc70
	bool GetClosestNEmitters(struct TArray<struct FWwiseEmitter> OutEmitters, struct FVector InFromPosition, int32_t InNumEmittersToFind, struct AActor* InActorToFindClosestEmitterOn); // Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x528dae0
	bool GetClosestEmitter(struct FWwiseEmitter OutEmitter, struct FVector InFromPosition, struct AActor* InActorToFindClosestEmitterOn); // Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x528d970
};

// Class RareAudio.WwiseObjectPoolWrapper
// Size: 0x78 (Inherited: 0x28)
struct UWwiseObjectPoolWrapper : UObject {
	struct FName PoolName; // 0x28(0x08)
	int32_t MaxResources; // 0x30(0x04)
	bool DisableOcclusion; // 0x34(0x01)
	bool DisableReverb; // 0x35(0x01)
	char UnknownData_36[0x2]; // 0x36(0x02)
	struct FWwiseNativeEmitterPoolDensityParams PoolDensityParams; // 0x38(0x28)
	char UnknownData_60[0x18]; // 0x60(0x18)
};

// Class RareAudio.AudioIslandStaticMeshAssociatorBase
// Size: 0x3c8 (Inherited: 0x3c8)
struct AAudioIslandStaticMeshAssociatorBase : AActor {
};

// Class RareAudio.AudioSpaceDataAsset
// Size: 0x40 (Inherited: 0x28)
struct UAudioSpaceDataAsset : UDataAsset {
	struct FName RtpcToUpdate; // 0x28(0x08)
	struct UWwiseEvent* AmbienceToStart; // 0x30(0x08)
	struct UWwiseEvent* AmbienceToStop; // 0x38(0x08)

	struct FName GetRtpcName(); // Function RareAudio.AudioSpaceDataAsset.GetRtpcName // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x52a72b0
};

// Class RareAudio.RareAudioHardwareDeviceService
// Size: 0x50 (Inherited: 0x40)
struct URareAudioHardwareDeviceService : UAudioHardwareDeviceService {
	char UnknownData_40[0x10]; // 0x40(0x10)
};

// Class RareAudio.StaticMeshAudioDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UStaticMeshAudioDataAsset : UDataAsset {
	struct TArray<struct FStaticMeshAudioAssociation> MeshToAudioAssociations; // 0x28(0x10)
};

// Class RareAudio.StaticMeshAudioEmittersComponent
// Size: 0x2f0 (Inherited: 0x2e0)
struct UStaticMeshAudioEmittersComponent : USceneComponent {
	struct TArray<struct FStaticMeshComponentAudioAssociation> InstanceAssociations; // 0x2e0(0x10)

	void PopulateInstanceAssociations(); // Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations // Final|Native|Public|BlueprintCallable // @ game+0x52a72d0
};

// Class RareAudio.TritonAcousticMap
// Size: 0x68 (Inherited: 0x28)
struct UTritonAcousticMap : UObject {
	struct FString TritonMapFilename; // 0x28(0x10)
	float CustomCacheRatio; // 0x38(0x04)
	char UnknownData_3C[0x2c]; // 0x3c(0x2c)
};

// Class RareAudio.TritonComponent
// Size: 0x2f0 (Inherited: 0x2e0)
struct UTritonComponent : USceneComponent {
	struct UTritonAcousticMap* TritonMapAsset; // 0x2e0(0x08)
	float TritonEffectRadius; // 0x2e8(0x04)
	char UnknownData_2EC[0x4]; // 0x2ec(0x04)
};

// Class RareAudio.TritonService
// Size: 0x150 (Inherited: 0x28)
struct UTritonService : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct TArray<struct UTritonComponent*> RegisteredTritonComponents; // 0x38(0x10)
	char UnknownData_48[0xa8]; // 0x48(0xa8)
	struct UTritonComponent* CachedListenerInfo; // 0xf0(0x08)
	char UnknownData_F8[0x58]; // 0xf8(0x58)
};

