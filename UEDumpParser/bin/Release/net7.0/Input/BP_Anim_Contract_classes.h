// AnimBlueprintGeneratedClass BP_Anim_Contract.BP_Anim_Contract_C
// Size: 0x761 (Inherited: 0x660)
struct UBP_Anim_Contract_C : UWieldableItemAnimationInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x660(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_73F950E44B1E95BA84B91BB03A11132A; // 0x668(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_16366ACD4549E27332E3A7914E57741F; // 0x6b0(0x60)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_CC5EC8B44857E42A21C742BEDAF53F84; // 0x710(0x50)
	char ObjectAnimationState; // 0x760(0x01)

	void OnUseStarted(struct UClass* InputID, struct FWieldableItemActionVisuals ActionVisuals); // Function BP_Anim_Contract.BP_Anim_Contract_C.OnUseStarted // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1848130
	void OnUseStopped(struct UClass* InputID); // Function BP_Anim_Contract.BP_Anim_Contract_C.OnUseStopped // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Anim_Contract(int32_t EntryPoint); // Function BP_Anim_Contract.BP_Anim_Contract_C.ExecuteUbergraph_BP_Anim_Contract // HasDefaults // @ game+0x1848130
};

