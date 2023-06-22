// Class AthenaAudio.AthenaAudioConfig
// Size: 0x108 (Inherited: 0x58)
struct UAthenaAudioConfig : UWwiseCoreAssets {
	struct UWwiseObjectPoolWrapper* ItemProxyPool; // 0x58(0x08)
	struct UWwiseObjectPoolWrapper* AnimNotifyPool; // 0x60(0x08)
	struct FAthenaAudioGameStateSettings GameStateSettings; // 0x68(0x20)
	struct FAthenaAudioBootflowEvents BootflowEvents; // 0x88(0x80)
};

// Class AthenaAudio.AthenaAudioModuleSettings
// Size: 0x48 (Inherited: 0x38)
struct UAthenaAudioModuleSettings : UDeveloperSettings {
	struct FStringAssetReference AudioConfigAsset; // 0x38(0x10)
};

// Class AthenaAudio.AudioPortalComponent
// Size: 0x340 (Inherited: 0x2e0)
struct UAudioPortalComponent : USceneComponent {
	float PortalTriggerDistance; // 0x2e0(0x04)
	float InsideRtpcUpdateDistance; // 0x2e4(0x04)
	float OutsideRtpcUpdateDistance; // 0x2e8(0x04)
	bool TrackAttachmentToActor; // 0x2ec(0x01)
	char UnknownData_2ED[0x3]; // 0x2ed(0x03)
	struct UAudioSpaceDataAsset* AudioInsideSpace; // 0x2f0(0x08)
	struct UAudioSpaceDataAsset* AudioOutsideSpace; // 0x2f8(0x08)
	struct UAudioSpaceDataAsset* ActiveAudioInsideSpace; // 0x300(0x08)
	struct UAudioSpaceDataAsset* ActiveAudioOutsideSpace; // 0x308(0x08)
	struct UStoryDrivenAudioPortalDataAsset* CollectionAsset; // 0x310(0x08)
	char UnknownData_318[0x28]; // 0x318(0x28)

	void SetParentShip(struct AActor* ParentShip); // Function AthenaAudio.AudioPortalComponent.SetParentShip // Native|Public|BlueprintCallable // @ game+0x374eeb0
};

// Class AthenaAudio.AudioPortalInterface
// Size: 0x28 (Inherited: 0x28)
struct UAudioPortalInterface : UInterface {

	void UnregisterPortal(struct UAudioPortalComponent* AudioPortal); // Function AthenaAudio.AudioPortalInterface.UnregisterPortal // Native|Public|BlueprintCallable // @ game+0x374ef40
	void RegisterPortal(struct UAudioPortalComponent* AudioPortal, struct AActor* OwningActor); // Function AthenaAudio.AudioPortalInterface.RegisterPortal // Native|Public|BlueprintCallable // @ game+0x374edd0
	struct TArray<struct UAudioPortalComponent*> GetAllRegisteredPortalsInSpecificSpace(struct UAudioSpaceDataAsset* AudioSpace, struct AActor* OwningActor); // Function AthenaAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace // Native|Public // @ game+0x374e9e0
	struct TArray<struct UAudioPortalComponent*> GetAllRegisteredPortals(); // Function AthenaAudio.AudioPortalInterface.GetAllRegisteredPortals // Native|Public|Const // @ game+0x374e980
};

// Class AthenaAudio.AudioPortalService
// Size: 0xd8 (Inherited: 0x28)
struct UAudioPortalService : UObject {
	char UnknownData_28[0xb0]; // 0x28(0xb0)
};

// Class AthenaAudio.AudioSpaceComponent
// Size: 0x650 (Inherited: 0x620)
struct UAudioSpaceComponent : UStaticMeshComponent {
	struct UAudioSpaceDataAsset* AudioSpace; // 0x620(0x08)
	struct UAudioSpaceDataAsset* ActiveAudioSpace; // 0x628(0x08)
	struct UStoryDrivenAudioPortalDataAsset* CollectionAsset; // 0x630(0x08)
	char UnknownData_638[0x18]; // 0x638(0x18)

	void OnOverlapEnd(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function AthenaAudio.AudioSpaceComponent.OnOverlapEnd // Final|Native|Private // @ game+0x374ecd0
	void OnOverlapBegin(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool FromSweep, struct FHitResult SweepResult); // Function AthenaAudio.AudioSpaceComponent.OnOverlapBegin // Final|Native|Private|HasOutParms // @ game+0x374eb00
};

// Class AthenaAudio.AudioSpaceTrackerComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UAudioSpaceTrackerComponent : UActorComponent {
	struct TArray<struct UAudioSpaceComponent*> CurrentSpaces; // 0xc8(0x10)

	struct UAudioSpaceDataAsset* GetCurrentSpace(); // Function AthenaAudio.AudioSpaceTrackerComponent.GetCurrentSpace // Final|Native|Public|BlueprintCallable // @ game+0x374ead0
};

// Class AthenaAudio.MultiEmitter
// Size: 0x3d8 (Inherited: 0x3c8)
struct AMultiEmitter : AActor {
	struct UMultiEmitterRootComponent* MultiEmitterRootComponent; // 0x3c8(0x08)
	char UnknownData_3D0[0x8]; // 0x3d0(0x08)

	void ResetNamingCount(); // Function AthenaAudio.MultiEmitter.ResetNamingCount // Final|Native|Public|BlueprintCallable // @ game+0x374ee90
	void CreateAndAddMergedEmitterComponentToRoot(struct FName InName, struct FVector InOffset, struct UWwiseEvent* InWwiseEvent, struct UWwiseObjectPoolWrapper* InPool); // Function AthenaAudio.MultiEmitter.CreateAndAddMergedEmitterComponentToRoot // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x374e820
};

// Class AthenaAudio.StoryDrivenAudioPortalDataAsset
// Size: 0x58 (Inherited: 0x28)
struct UStoryDrivenAudioPortalDataAsset : UDataAsset {
	struct FFeatureFlag Feature; // 0x28(0x0c)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TArray<struct FStoryDrivenAudioPortalSetting> StoryResponses; // 0x38(0x10)
	struct TArray<struct UStoryDrivenAudioPortalDataAsset*> AssetsList; // 0x48(0x10)
};

// Class AthenaAudio.WwiseEventsTriggerRegionComponent
// Size: 0x370 (Inherited: 0x2e0)
struct UWwiseEventsTriggerRegionComponent : USceneComponent {
	struct UWwiseObjectPoolWrapper* TriggerRegionPool; // 0x2e0(0x08)
	struct TArray<struct UWwiseEvent*> TriggerRegionPlayEvents; // 0x2e8(0x10)
	struct TArray<struct UWwiseEvent*> TriggerRegionStopEvents; // 0x2f8(0x10)
	float TriggerEnterRadiusInCms; // 0x308(0x04)
	float TriggerExitRadiusInCms; // 0x30c(0x04)
	struct FVector EmitterOffset; // 0x310(0x0c)
	char UnknownData_31C[0x14]; // 0x31c(0x14)
	struct ACharacter* LocalPlayer; // 0x330(0x08)
	char UnknownData_338[0x38]; // 0x338(0x38)
};

