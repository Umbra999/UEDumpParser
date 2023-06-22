// BlueprintGeneratedClass BP_Figurehead.BP_Figurehead_C
// Size: 0x3f8 (Inherited: 0x3e8)
struct ABP_Figurehead_C : AGenericPartWithVFX {
	struct UParticleSystemComponent* ParticleSystem; // 0x3e8(0x08)
	struct UStaticMeshComponent* Figurehead; // 0x3f0(0x08)

	struct UParticleSystemComponent* GetVFXComponent(); // Function BP_Figurehead.BP_Figurehead_C.GetVFXComponent // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x1848130
	struct UStaticMeshComponent* GetMeshComponent(); // Function BP_Figurehead.BP_Figurehead_C.GetMeshComponent // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x1848130
	void UserConstructionScript(); // Function BP_Figurehead.BP_Figurehead_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

