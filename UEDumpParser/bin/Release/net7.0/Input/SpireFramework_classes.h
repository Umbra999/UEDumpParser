// Class SpireFramework.HeightTriggerableAudioComponentParams
// Size: 0x58 (Inherited: 0x28)
struct UHeightTriggerableAudioComponentParams : UDataAsset {
	struct UWwiseObjectPoolWrapper* Pool; // 0x28(0x08)
	struct UWwiseEvent* RisingOneShot; // 0x30(0x08)
	struct UWwiseEvent* RisingStart; // 0x38(0x08)
	struct UWwiseEvent* RisingStop; // 0x40(0x08)
	struct UWwiseEvent* LoweringStart; // 0x48(0x08)
	struct UWwiseEvent* LoweringStop; // 0x50(0x08)
};

// Class SpireFramework.HeightTriggerableEffectsComponent
// Size: 0x158 (Inherited: 0xc8)
struct UHeightTriggerableEffectsComponent : UActorComponent {
	struct UHeightTriggerableAudioComponentParams* AudioParams; // 0xc8(0x08)
	struct FActorComponentSelector EmitterOwner; // 0xd0(0x10)
	struct FVector EmitterOffset; // 0xe0(0x0c)
	bool UseParentEmitter; // 0xec(0x01)
	char UnknownData_ED[0x3]; // 0xed(0x03)
	float RisingAudioTriggerValue; // 0xf0(0x04)
	char UnknownData_F4[0x4]; // 0xf4(0x04)
	struct UClass* CameraShake; // 0xf8(0x08)
	float ShakeInnerRadius; // 0x100(0x04)
	float ShakeOuterRadius; // 0x104(0x04)
	char UnknownData_108[0x50]; // 0x108(0x50)

	void SetMovementDirection(char InMovement); // Function SpireFramework.HeightTriggerableEffectsComponent.SetMovementDirection // Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x44e6780
};

// Class SpireFramework.SpireResource
// Size: 0x3d8 (Inherited: 0x3c8)
struct ASpireResource : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
};

// Class SpireFramework.SpireServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct USpireServiceInterface : UInterface {
};

// Class SpireFramework.SpireServiceParams
// Size: 0x30 (Inherited: 0x28)
struct USpireServiceParams : UDataAsset {
	struct UActorSpawnData* OnCancelFakeSpire; // 0x28(0x08)
};

// Class SpireFramework.SpireService
// Size: 0x460 (Inherited: 0x3c8)
struct ASpireService : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct USpireServiceParams* Params; // 0x3d0(0x08)
	struct TArray<struct FServerSpireInfo> ServerOnlySpireInfo; // 0x3d8(0x10)
	struct TArray<struct FSpireInfo> SpireLevels; // 0x3e8(0x10)
	char UnknownData_3F8[0x68]; // 0x3f8(0x68)

	void OnRep_SpireLevels(struct TArray<struct FSpireInfo> InPreviousSpireLevels); // Function SpireFramework.SpireService.OnRep_SpireLevels // Final|Native|Private|HasOutParms // @ game+0x44e6650
};

// Class SpireFramework.SpireStreamedLevelDataAsset
// Size: 0x48 (Inherited: 0x28)
struct USpireStreamedLevelDataAsset : UDataAsset {
	struct UAthenaStreamedLevelDataAsset* StreamedLevel; // 0x28(0x08)
	struct TArray<struct FSpireEntry> Entries; // 0x30(0x10)
	struct FName FeatureToggle; // 0x40(0x08)
};

// Class SpireFramework.SpireSettingsInterface
// Size: 0x28 (Inherited: 0x28)
struct USpireSettingsInterface : UInterface {
};

// Class SpireFramework.SpireShippingDrawDebugActorSphereCollection
// Size: 0x3e8 (Inherited: 0x3d8)
struct ASpireShippingDrawDebugActorSphereCollection : AShippingDebugActorSphereCollection {
	struct TArray<struct ASpireResource*> SpireList; // 0x3d8(0x10)
};

// Class SpireFramework.TaleLoadSpireStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleLoadSpireStep : UTaleQuestStep {
};

// Class SpireFramework.TaleSpireService
// Size: 0xa8 (Inherited: 0x60)
struct UTaleSpireService : UTaleQuestService {
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FMulticastDelegate SpireMadeVisible; // 0x68(0x10)
	char UnknownData_78[0x30]; // 0x78(0x30)

	void RegisterResetMechanismInterface(struct AActor* InMechanismResetInterface); // Function SpireFramework.TaleSpireService.RegisterResetMechanismInterface // Final|Native|Public|BlueprintCallable // @ game+0x44e6700
	bool IsSpireVisible(); // Function SpireFramework.TaleSpireService.IsSpireVisible // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x44e6620
};

// Class SpireFramework.TaleSpireServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleSpireServiceDesc : UTaleQuestServiceDesc {
};

// Class SpireFramework.TaleLoadSpireStepDesc
// Size: 0x80 (Inherited: 0x80)
struct UTaleLoadSpireStepDesc : UTaleQuestStepDesc {
};

// Class SpireFramework.TaleMakeSpireVisibleStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleMakeSpireVisibleStep : UTaleQuestStep {
};

// Class SpireFramework.TaleMakeSpireVisibleStepDesc
// Size: 0x80 (Inherited: 0x80)
struct UTaleMakeSpireVisibleStepDesc : UTaleQuestStepDesc {
};

// Class SpireFramework.TaleRegisterSpireStep
// Size: 0xa8 (Inherited: 0x98)
struct UTaleRegisterSpireStep : UTaleQuestStep {
	struct UTaleRegisterSpireStepDesc* StepDesc; // 0x98(0x08)
	char UnknownData_A0[0x8]; // 0xa0(0x08)
};

// Class SpireFramework.TaleRegisterSpireStepDesc
// Size: 0x140 (Inherited: 0x80)
struct UTaleRegisterSpireStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableVector SelectionOriginPoint; // 0x80(0x30)
	struct FQuestVariableFloat PlayerExclusionSelectionRadius; // 0xb0(0x30)
	struct FQuestVariableTaleResourceHandle AllocatedSpireHandle; // 0xe0(0x30)
	struct FQuestVariableVector AllocatedSpireLocation; // 0x110(0x30)
};

// Class SpireFramework.TaleReleaseSpireStep
// Size: 0xa0 (Inherited: 0x98)
struct UTaleReleaseSpireStep : UTaleQuestStep {
	char UnknownData_98[0x8]; // 0x98(0x08)
};

// Class SpireFramework.TaleReleaseSpireStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTaleReleaseSpireStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableTaleResourceHandle SpireHandle; // 0x80(0x30)
};

// Class SpireFramework.TaleUnloadSpireStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleUnloadSpireStep : UTaleQuestStep {
};

// Class SpireFramework.TaleUnloadSpireStepDesc
// Size: 0x80 (Inherited: 0x80)
struct UTaleUnloadSpireStepDesc : UTaleQuestStepDesc {
};

// Class SpireFramework.TaleWaitForSpireToLoadStep
// Size: 0xe8 (Inherited: 0x98)
struct UTaleWaitForSpireToLoadStep : UTaleQuestStep {
	char UnknownData_98[0x50]; // 0x98(0x50)
};

// Class SpireFramework.TaleWaitForSpireToLoadStepDesc
// Size: 0x80 (Inherited: 0x80)
struct UTaleWaitForSpireToLoadStepDesc : UTaleQuestStepDesc {
};

