// BlueprintGeneratedClass BP_DistantLightProxy.BP_DistantLightProxy_C
// Size: 0x3f0 (Inherited: 0x3c8)
struct ABP_DistantLightProxy_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh; // 0x3d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d8(0x08)
	struct TArray<struct FPointLightProxy> LightList; // 0x3e0(0x10)

	void FindExistingLight(struct FString Name, bool Result, int32_t Index); // Function BP_DistantLightProxy.BP_DistantLightProxy_C.FindExistingLight // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Create Lights(); // Function BP_DistantLightProxy.BP_DistantLightProxy_C.Create Lights // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_DistantLightProxy.BP_DistantLightProxy_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Add Light(struct FVector Location, float Size, struct UMaterialInterface* Material, struct FString Name); // Function BP_DistantLightProxy.BP_DistantLightProxy_C.Add Light // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_DistantLightProxy(int32_t EntryPoint); // Function BP_DistantLightProxy.BP_DistantLightProxy_C.ExecuteUbergraph_BP_DistantLightProxy // HasDefaults // @ game+0x1848130
};

