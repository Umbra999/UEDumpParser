// AnimBlueprintGeneratedClass BP_Anim_Concertina.BP_Anim_Concertina_C
// Size: 0x771 (Inherited: 0x660)
struct UBP_Anim_Concertina_C : UWieldableItemAnimationInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x660(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_1DEFFA064699D8E6099882A07E015CFC; // 0x668(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_8FB8B3AD41DDBE46E9AA00B94F72B643; // 0x6b0(0x60)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4FA004554F3D39839ABDF59B7BAB6781; // 0x710(0x60)
	char ObjectAnimationState; // 0x770(0x01)

	void OnUseStarted(struct UClass* InputID, struct FWieldableItemActionVisuals ActionVisuals); // Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStarted // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1848130
	void OnUseStopped(struct UClass* InputID); // Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStopped // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Anim_Concertina(int32_t EntryPoint); // Function BP_Anim_Concertina.BP_Anim_Concertina_C.ExecuteUbergraph_BP_Anim_Concertina // HasDefaults // @ game+0x1848130
};

