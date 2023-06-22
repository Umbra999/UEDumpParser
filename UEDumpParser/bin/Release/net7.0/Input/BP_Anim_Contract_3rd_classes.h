// AnimBlueprintGeneratedClass BP_Anim_Contract_3rd.BP_Anim_Contract_3rd_C
// Size: 0x761 (Inherited: 0x660)
struct UBP_Anim_Contract_3rd_C : UWieldableItemAnimationInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x660(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_36198F564211C9DF22D9E3BA855A0136; // 0x668(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_47D4FF824E791C777B72BBA3A330516D; // 0x6b0(0x60)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_CF1859694B295D3418EFB18A5F3FF981; // 0x710(0x50)
	char ObjectAnimationState; // 0x760(0x01)

	void OnUseStarted(struct UClass* InputID, struct FWieldableItemActionVisuals ActionVisuals); // Function BP_Anim_Contract_3rd.BP_Anim_Contract_3rd_C.OnUseStarted // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1848130
	void OnUseStopped(struct UClass* InputID); // Function BP_Anim_Contract_3rd.BP_Anim_Contract_3rd_C.OnUseStopped // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Anim_Contract_3rd(int32_t EntryPoint); // Function BP_Anim_Contract_3rd.BP_Anim_Contract_3rd_C.ExecuteUbergraph_BP_Anim_Contract_3rd // HasDefaults // @ game+0x1848130
};

