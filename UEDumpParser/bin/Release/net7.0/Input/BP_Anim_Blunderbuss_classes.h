// AnimBlueprintGeneratedClass BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C
// Size: 0x7c0 (Inherited: 0x660)
struct UBP_Anim_Blunderbuss_C : UWieldableItemAnimationInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x660(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_9FBA9E2B4FB6DEB587FBDEB3B3124193; // 0x668(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_AE2920654CCB7E5DD9AEB9AC04611F9F; // 0x6b0(0x60)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_0B1EB6664361B3F1CD71A3B760F24D5B; // 0x710(0x50)
	char ObjectAnimationState; // 0x760(0x01)
	bool bReloadWanted; // 0x761(0x01)
	char UnknownData_762[0x6]; // 0x762(0x06)
	struct FObjectMessagingHandle ReloadEventHandle; // 0x768(0x58)

	void AnimNotify_ExitedFire(); // Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.AnimNotify_ExitedFire // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnOneShotUseTriggered(struct UClass* InputID, struct FWieldableItemActionVisuals ActionVisuals); // Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.OnOneShotUseTriggered // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1848130
	void OnUseStarted(struct UClass* InputID, struct FWieldableItemActionVisuals ActionVisuals); // Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.OnUseStarted // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1848130
	void BlueprintInitializeAnimation(); // Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReloadEventDelegate(struct FEventProjectileWeaponReload Event); // Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.ReloadEventDelegate // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void BlueprintUninitializeAnimation(); // Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.BlueprintUninitializeAnimation // Event|Public|BlueprintEvent // @ game+0x1848130
	void AnimNotify_ResetReload(); // Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.AnimNotify_ResetReload // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Anim_Blunderbuss(int32_t EntryPoint); // Function BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C.ExecuteUbergraph_BP_Anim_Blunderbuss // HasDefaults // @ game+0x1848130
};

