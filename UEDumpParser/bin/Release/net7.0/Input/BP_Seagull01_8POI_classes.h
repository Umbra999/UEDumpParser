// BlueprintGeneratedClass BP_Seagull01_8POI.BP_Seagull01_8POI_C
// Size: 0x488 (Inherited: 0x430)
struct ABP_Seagull01_8POI_C : ASeagulls {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	struct UWwiseEmitterComponent* WwiseEmitter1; // 0x438(0x08)
	struct UWwiseEmitterComponent* WwiseEmitter; // 0x440(0x08)
	struct UStaticMeshComponent* wil_seagull_01_ProcAnim8; // 0x448(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x450(0x08)
	struct UMaterialInterface* seagulls_MI; // 0x458(0x08)
	struct UMaterialInstanceDynamic* seagulls_MT; // 0x460(0x08)
	float FadeTime; // 0x468(0x04)
	char UnknownData_46C[0x4]; // 0x46c(0x04)
	struct UMaterialInterface* seagulls_MI_LOD; // 0x470(0x08)
	struct UMaterialInstanceDynamic* seagulls_MT_LOD; // 0x478(0x08)
	struct UWwiseEvent* WwiseEvent; // 0x480(0x08)

	void seagull_Fade(struct UMaterialInstance* Seagull_Material, struct UMaterialInstance* Seagull_MT_LOD); // Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.seagull_Fade // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void FadeIn(); // Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeIn // Event|Protected|BlueprintEvent // @ game+0x1848130
	void FadeOut(); // Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeOut // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Seagull01_8POI(int32_t EntryPoint); // Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ExecuteUbergraph_BP_Seagull01_8POI //  // @ game+0x1848130
};

