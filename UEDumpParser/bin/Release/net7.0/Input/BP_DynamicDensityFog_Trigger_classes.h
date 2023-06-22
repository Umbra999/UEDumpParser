// BlueprintGeneratedClass BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C
// Size: 0x3e8 (Inherited: 0x3c8)
struct ABP_DynamicDensityFog_Trigger_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UCapsuleComponent* DynamicTrigger; // 0x3d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d8(0x08)
	struct ABP_DynamicDensityFogVolume_C* FogVolume; // 0x3e0(0x08)

	void UserConstructionScript(); // Function BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void BndEvt__DynamicTrigger_K2Node_ComponentBoundEvent_136_ComponentBeginOverlapSignature__DelegateSignature(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C.BndEvt__DynamicTrigger_K2Node_ComponentBoundEvent_136_ComponentBeginOverlapSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x1848130
	void BndEvt__DynamicTrigger_K2Node_ComponentBoundEvent_181_ComponentEndOverlapSignature__DelegateSignature(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C.BndEvt__DynamicTrigger_K2Node_ComponentBoundEvent_181_ComponentEndOverlapSignature__DelegateSignature // BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_DynamicDensityFog_Trigger(int32_t EntryPoint); // Function BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C.ExecuteUbergraph_BP_DynamicDensityFog_Trigger // HasDefaults // @ game+0x1848130
};

