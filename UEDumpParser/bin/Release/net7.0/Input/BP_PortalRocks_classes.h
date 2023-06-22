// BlueprintGeneratedClass BP_PortalRocks.BP_PortalRocks_C
// Size: 0x3e8 (Inherited: 0x3c8)
struct ABP_PortalRocks_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWwiseEmitterComponent* WwiseEmitter1; // 0x3d0(0x08)
	struct UWwiseEmitterComponent* WwiseEmitter; // 0x3d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3e0(0x08)

	void UserConstructionScript(); // Function BP_PortalRocks.BP_PortalRocks_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_PortalRocks.BP_PortalRocks_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveEndPlay(char EndPlayReason); // Function BP_PortalRocks.BP_PortalRocks_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_PortalRocks(int32_t EntryPoint); // Function BP_PortalRocks.BP_PortalRocks_C.ExecuteUbergraph_BP_PortalRocks //  // @ game+0x1848130
};

