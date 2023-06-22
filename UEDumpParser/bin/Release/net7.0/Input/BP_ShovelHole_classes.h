// BlueprintGeneratedClass BP_ShovelHole.BP_ShovelHole_C
// Size: 0x468 (Inherited: 0x438)
struct ABP_ShovelHole_C : AShovelHole {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UDecalComponent* DirtDecal; // 0x440(0x08)
	struct UStaticMeshComponent* DirtPile; // 0x448(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x450(0x08)
	struct UMaterialInstanceDynamic* MeshDynamicMaterial; // 0x458(0x08)
	struct UMaterialInstanceDynamic* DecalDynamicMaterial; // 0x460(0x08)

	void SetFadeInParameters(float FadeTime); // Function BP_ShovelHole.BP_ShovelHole_C.SetFadeInParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void SetFadeOutParameters(float FadeTime); // Function BP_ShovelHole.BP_ShovelHole_C.SetFadeOutParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_ShovelHole.BP_ShovelHole_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnStateChanged(char InState); // Function BP_ShovelHole.BP_ShovelHole_C.OnStateChanged // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_ShovelHole.BP_ShovelHole_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_ShovelHole(int32_t EntryPoint); // Function BP_ShovelHole.BP_ShovelHole_C.ExecuteUbergraph_BP_ShovelHole //  // @ game+0x1848130
};

