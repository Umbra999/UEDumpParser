// BlueprintGeneratedClass BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C
// Size: 0x410 (Inherited: 0x3c8)
struct ABP_Tavern_B_AudioLayer_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UTritonComponent* Triton; // 0x3d0(0x08)
	struct UWwiseEmitterComponent* Fire; // 0x3d8(0x08)
	struct UAudioSpaceComponent* Tavern_AudioSpace_EdgeSection; // 0x3e0(0x08)
	struct UAudioSpaceComponent* Tavern_AudioSpace_LargeSection; // 0x3e8(0x08)
	struct UAudioPortalComponent* Tavern_AudioPortal; // 0x3f0(0x08)
	struct USceneComponent* Scene; // 0x3f8(0x08)
	struct UWwiseEvent* TavernFire_Play; // 0x400(0x08)
	struct UWwiseEvent* TavernFire_Stop; // 0x408(0x08)

	void UserConstructionScript(); // Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveEndPlay(char EndPlayReason); // Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Tavern_B_AudioLayer(int32_t EntryPoint); // Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ExecuteUbergraph_BP_Tavern_B_AudioLayer //  // @ game+0x1848130
};

