// BlueprintGeneratedClass BP_bsp_totd_portal_effects.BP_bsp_totd_portal_effects_C
// Size: 0x4a0 (Inherited: 0x430)
struct ABP_bsp_totd_portal_effects_C : ABP_TotD_PortalController_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	struct UPointLightComponent* PointLight; // 0x438(0x08)
	struct UParticleSystemComponent* vfx_PortalAmbience_02; // 0x440(0x08)
	struct UParticleSystemComponent* vfx_PortalAmbience_01; // 0x448(0x08)
	struct UStaticMeshComponent* vfx_cloud; // 0x450(0x08)
	struct UStaticMeshComponent* Portal; // 0x458(0x08)
	struct UStaticMeshComponent* vfx_cloud_depth; // 0x460(0x08)
	struct UStaticMeshComponent* vfx_big_cloud; // 0x468(0x08)
	struct UStaticMeshComponent* roundedcube_invertednormals; // 0x470(0x08)
	struct UDecalComponent* crack_decal2; // 0x478(0x08)
	struct UDecalComponent* crack_decal; // 0x480(0x08)
	struct UStaticMeshComponent* volume_glow; // 0x488(0x08)
	struct UPointLightComponent* LightComponent0; // 0x490(0x08)
	struct USceneComponent* SharedRoot; // 0x498(0x08)

	void UserConstructionScript(); // Function BP_bsp_totd_portal_effects.BP_bsp_totd_portal_effects_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_bsp_totd_portal_effects.BP_bsp_totd_portal_effects_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_bsp_totd_portal_effects(int32_t EntryPoint); // Function BP_bsp_totd_portal_effects.BP_bsp_totd_portal_effects_C.ExecuteUbergraph_BP_bsp_totd_portal_effects //  // @ game+0x1848130
};

