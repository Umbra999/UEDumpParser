// AnimBlueprintGeneratedClass BP_Anim_Cannon.BP_Anim_Cannon_C
// Size: 0x8f8 (Inherited: 0x460)
struct UBP_Anim_Cannon_C : UCannonAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_37D500E142042AF27DD48D970FEB9969; // 0x468(0x48)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_B2519065482A2C6D2103138CBC70EFF5; // 0x4b0(0x70)
	struct FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_1955DCC24F53AFAFE226989AAE959203; // 0x520(0x118)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D8AE3CC240728DC448411C83C0524A3E; // 0x638(0x40)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2B6A57E44E8B7066652F00A00A0D8A32; // 0x678(0x40)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_BAED8644464D3F105EBF0CB3C252DA3D; // 0x6b8(0x60)
	struct FAnimNode_Root AnimGraphNode_StateResult_51FF784042C14410738C649A47CDFFB9; // 0x718(0x48)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_61FF7DC544AAE8D747E1B7B8E94CA9CE; // 0x760(0x50)
	struct FAnimNode_Root AnimGraphNode_StateResult_0AA0EE3C4F3FBFEC36970FAE8D9F81C7; // 0x7b0(0x48)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_F11BDD78417C84D075356DA9724CF142; // 0x7f8(0xa8)
	struct FObjectMessagingHandle FireEventHandle; // 0x8a0(0x58)

	void AnimNotify_FireEnd(); // Function BP_Anim_Cannon.BP_Anim_Cannon_C.AnimNotify_FireEnd // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Anim_Cannon(int32_t EntryPoint); // Function BP_Anim_Cannon.BP_Anim_Cannon_C.ExecuteUbergraph_BP_Anim_Cannon //  // @ game+0x1848130
};

