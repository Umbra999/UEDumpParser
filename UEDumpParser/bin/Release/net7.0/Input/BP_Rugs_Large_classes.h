// BlueprintGeneratedClass BP_Rugs_Large.BP_Rugs_Large_C
// Size: 0x3e8 (Inherited: 0x3d8)
struct ABP_Rugs_Large_C : ABP_Rugs_C {
	struct UStaticMeshComponent* CircularRugMeshComponent; // 0x3d8(0x08)
	struct UStaticMeshComponent* RectangularRugMeshComponent; // 0x3e0(0x08)

	struct TArray<struct UStaticMeshComponent*> GetRugMeshComponents(); // Function BP_Rugs_Large.BP_Rugs_Large_C.GetRugMeshComponents // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x1848130
	void UserConstructionScript(); // Function BP_Rugs_Large.BP_Rugs_Large_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

