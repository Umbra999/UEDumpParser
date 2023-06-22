// BlueprintGeneratedClass wsp_torch_b_b.wsp_torch_b_b_C
// Size: 0x3f0 (Inherited: 0x3d8)
struct Awsp_torch_b_b_C : AStaticMeshActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UParticleSystemComponent* vfx_fire_torch; // 0x3e0(0x08)
	struct UPointLightComponent* PointLight; // 0x3e8(0x08)

	void UserConstructionScript(); // Function wsp_torch_b_b.wsp_torch_b_b_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function wsp_torch_b_b.wsp_torch_b_b_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_wsp_torch_b_b(int32_t EntryPoint); // Function wsp_torch_b_b.wsp_torch_b_b_C.ExecuteUbergraph_wsp_torch_b_b //  // @ game+0x1848130
};

