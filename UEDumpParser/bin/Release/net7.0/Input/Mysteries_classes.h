// Class Mysteries.AbandonedNoteWeightedTextDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UAbandonedNoteWeightedTextDataAsset : UDataAsset {
	struct TArray<struct FAbandonedNoteWeightedTextEntry> Entries; // 0x28(0x10)
};

// Class Mysteries.AbandonedNoteWeightedTextSourceComponent
// Size: 0x1a8 (Inherited: 0xc8)
struct UAbandonedNoteWeightedTextSourceComponent : UActorComponent {
	char UnknownData_C8[0x20]; // 0xc8(0x20)
	struct UAbandonedNoteWeightedTextDataAsset* WeightedText; // 0xe8(0x20)
	struct FText ClueText; // 0x108(0x38)
	struct FText TitleText; // 0x140(0x38)
	char UnknownData_178[0x30]; // 0x178(0x30)

	void OnRep_TitleText(); // Function Mysteries.AbandonedNoteWeightedTextSourceComponent.OnRep_TitleText // Final|Native|Private // @ game+0x4338f50
	void OnRep_ClueText(); // Function Mysteries.AbandonedNoteWeightedTextSourceComponent.OnRep_ClueText // Final|Native|Private // @ game+0x4338e80
};

// Class Mysteries.OneShotRewardableObjectBase
// Size: 0x4e8 (Inherited: 0x468)
struct AOneShotRewardableObjectBase : AInteractableObject {
	struct UInteractableComponent* InteractableComponent; // 0x468(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x470(0x08)
	struct FRewardId Reward; // 0x478(0x08)
	struct UClass* RewardEntitlement; // 0x480(0x08)
	float InteractionHoldTime; // 0x488(0x04)
	float InteractionRadius; // 0x48c(0x04)
	struct FText DisplayName; // 0x490(0x38)
	char UnknownData_4C8[0x20]; // 0x4c8(0x20)
};

// Class Mysteries.PopUpNotificationOnItemWieldedComponent
// Size: 0x168 (Inherited: 0x148)
struct UPopUpNotificationOnItemWieldedComponent : UOnItemWieldedComponent {
	struct UPopUpMessageDesc* PopUpDesc; // 0x148(0x08)
	char UnknownData_150[0x18]; // 0x150(0x18)
};

// Class Mysteries.SirenPuzzleContext
// Size: 0x4b8 (Inherited: 0x3c8)
struct ASirenPuzzleContext : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct USceneComponent* Root; // 0x3d0(0x08)
	struct TArray<struct FSirenPuzzleLockState> PuzzleLocks; // 0x3d8(0x10)
	struct TArray<struct FLandmarkReactionKeyFrame> UnlockCompleteReactions; // 0x3e8(0x10)
	struct TArray<struct FLandmarkReactionKeyFrame> ResetLocksReactions; // 0x3f8(0x10)
	struct TArray<char> LockStates; // 0x408(0x10)
	char UnknownData_418[0xa0]; // 0x418(0xa0)

	void Unlock(struct FGuid LockId, struct FGuid CrewId); // Function Mysteries.SirenPuzzleContext.Unlock // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x4338f90
	void ResetUnlock(); // Function Mysteries.SirenPuzzleContext.ResetUnlock // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x4338f70
	void OnRep_LockStates(struct TArray<char> OldStates); // Function Mysteries.SirenPuzzleContext.OnRep_LockStates // Final|RequiredAPI|Native|Private|HasOutParms // @ game+0x4338ea0
	void DeactivateLock(struct FGuid LockId); // Function Mysteries.SirenPuzzleContext.DeactivateLock // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x4338de0
	void ActivateLock(struct FGuid LockId); // Function Mysteries.SirenPuzzleContext.ActivateLock // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x4338d40
};

