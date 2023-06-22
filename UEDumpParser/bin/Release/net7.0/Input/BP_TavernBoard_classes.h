// BlueprintGeneratedClass BP_TavernBoard.BP_TavernBoard_C
// Size: 0x5a0 (Inherited: 0x558)
struct ABP_TavernBoard_C : ATavernBoard {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UParticleSystemComponent* ParticleSystem2; // 0x560(0x08)
	struct UParticleSystemComponent* ParticleSystem1; // 0x568(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x570(0x08)
	struct UPointLightComponent* PointLight1; // 0x578(0x08)
	struct UPointLightComponent* PointLight; // 0x580(0x08)
	struct UStaticMeshComponent* bld_jetty_support_b; // 0x588(0x08)
	struct UStaticMeshComponent* gmp_messageboard_01_a; // 0x590(0x08)
	struct UPlayerGeneratedMapsContainerComponent* PlayerGeneratedMapsContainer; // 0x598(0x08)

	void UserConstructionScript(); // Function BP_TavernBoard.BP_TavernBoard_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_TavernBoard.BP_TavernBoard_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_TavernBoard(int32_t EntryPoint); // Function BP_TavernBoard.BP_TavernBoard_C.ExecuteUbergraph_BP_TavernBoard //  // @ game+0x1848130
};

