// BlueprintGeneratedClass bsp_campfire_a.bsp_campfire_a_C
// Size: 0x3f0 (Inherited: 0x3d8)
struct Absp_campfire_a_C : AStaticMeshActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x3e0(0x08)
	struct UPointLightComponent* PointLight; // 0x3e8(0x08)

	void UserConstructionScript(); // Function bsp_campfire_a.bsp_campfire_a_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function bsp_campfire_a.bsp_campfire_a_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_bsp_campfire_a(int32_t EntryPoint); // Function bsp_campfire_a.bsp_campfire_a_C.ExecuteUbergraph_bsp_campfire_a //  // @ game+0x1848130
};

