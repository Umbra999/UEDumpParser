// BlueprintGeneratedClass BP_GeyserHole.BP_GeyserHole_C
// Size: 0x468 (Inherited: 0x438)
struct ABP_GeyserHole_C : AShovelHole {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UStaticMeshComponent* CrackMesh; // 0x440(0x08)
	struct UDecalComponent* CrackDecal; // 0x448(0x08)
	struct USceneComponent* SharedRoot; // 0x450(0x08)
	struct UMaterialInstanceDynamic* MeshDynamicMaterial; // 0x458(0x08)
	struct UMaterialInstanceDynamic* DecalDynamicMaterial; // 0x460(0x08)

	void SetFadeOutParameters(float FadeTime); // Function BP_GeyserHole.BP_GeyserHole_C.SetFadeOutParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void SetFadeInParameters(float FadeTime); // Function BP_GeyserHole.BP_GeyserHole_C.SetFadeInParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_GeyserHole.BP_GeyserHole_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_GeyserHole.BP_GeyserHole_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnStateChanged(char InState); // Function BP_GeyserHole.BP_GeyserHole_C.OnStateChanged // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_GeyserHole(int32_t EntryPoint); // Function BP_GeyserHole.BP_GeyserHole_C.ExecuteUbergraph_BP_GeyserHole //  // @ game+0x1848130
};

