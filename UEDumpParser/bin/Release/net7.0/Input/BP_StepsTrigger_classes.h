// BlueprintGeneratedClass BP_StepsTrigger.BP_StepsTrigger_C
// Size: 0x548 (Inherited: 0x4b0)
struct ABP_StepsTrigger_C : ATavernStepsTrigger {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UStaticMeshComponent* bld_tavern_entrance_steps_lightshafts_01_a; // 0x4b8(0x08)
	struct UParticleSystemComponent* vfx_tavern_stairs_symbol_glow; // 0x4c0(0x08)
	struct UDecalComponent* Decal; // 0x4c8(0x08)
	struct UParticleSystemComponent* vfx_tavern_stairs_glow; // 0x4d0(0x08)
	struct UParticleSystemComponent* vfx_tavern_stairs_falling_dust_under_ground; // 0x4d8(0x08)
	struct UParticleSystemComponent* vfx_tavern_stairs_falling_dust2; // 0x4e0(0x08)
	struct UParticleSystemComponent* vfx_tavern_stairs_falling_dust1; // 0x4e8(0x08)
	struct UParticleSystemComponent* vfx_tavern_stairs_impact3; // 0x4f0(0x08)
	struct UParticleSystemComponent* vfx_tavern_stairs_impact2; // 0x4f8(0x08)
	struct UParticleSystemComponent* vfx_tavern_stairs_impact1; // 0x500(0x08)
	struct UParticleSystemComponent* vfx_tavern_stairs_impact; // 0x508(0x08)
	struct UParticleSystemComponent* vfx_tavern_stairs_falling_dust; // 0x510(0x08)
	struct UBP_AnimatedStepsComponent_C* AnimatedStepsComponent; // 0x518(0x08)
	struct UBoxComponent* Box1; // 0x520(0x08)
	struct UBoxComponent* Box3; // 0x528(0x08)
	struct UBoxComponent* Box2; // 0x530(0x08)
	struct UBoxComponent* Box0; // 0x538(0x08)
	struct UPoseableSkeletalMeshComponent* StepsMesh; // 0x540(0x08)

	void UserConstructionScript(); // Function BP_StepsTrigger.BP_StepsTrigger_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_StepsTrigger.BP_StepsTrigger_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_StepsTrigger(int32_t EntryPoint); // Function BP_StepsTrigger.BP_StepsTrigger_C.ExecuteUbergraph_BP_StepsTrigger //  // @ game+0x1848130
};

