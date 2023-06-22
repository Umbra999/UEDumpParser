// BlueprintGeneratedClass bld_beacon_01_a_fire.bld_beacon_01_a_fire_C
// Size: 0x3f0 (Inherited: 0x3d8)
struct Abld_beacon_01_a_fire_C : AStaticMeshActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UPointLightComponent* PointLight; // 0x3e0(0x08)
	struct UParticleSystemComponent* vfx_fire_beacon; // 0x3e8(0x08)

	void UserConstructionScript(); // Function bld_beacon_01_a_fire.bld_beacon_01_a_fire_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function bld_beacon_01_a_fire.bld_beacon_01_a_fire_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_bld_beacon_01_a_fire(int32_t EntryPoint); // Function bld_beacon_01_a_fire.bld_beacon_01_a_fire_C.ExecuteUbergraph_bld_beacon_01_a_fire //  // @ game+0x1848130
};

