// BlueprintGeneratedClass BP_audio_prem_shop_wld.BP_audio_prem_shop_wld_C
// Size: 0x3f8 (Inherited: 0x3c8)
struct ABP_audio_prem_shop_wld_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWwiseEmitterComponent* WwiseEmitter; // 0x3d0(0x08)
	struct UTritonComponent* Triton; // 0x3d8(0x08)
	struct UAudioPortalComponent* AudioPortal; // 0x3e0(0x08)
	struct UAudioSpaceComponent* AudioSpace; // 0x3e8(0x08)
	struct USceneComponent* Scene; // 0x3f0(0x08)

	void UserConstructionScript(); // Function BP_audio_prem_shop_wld.BP_audio_prem_shop_wld_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_audio_prem_shop_wld.BP_audio_prem_shop_wld_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_audio_prem_shop_wld.BP_audio_prem_shop_wld_C.BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_audio_prem_shop_wld(int32_t EntryPoint); // Function BP_audio_prem_shop_wld.BP_audio_prem_shop_wld_C.ExecuteUbergraph_BP_audio_prem_shop_wld // HasDefaults // @ game+0x1848130
};

