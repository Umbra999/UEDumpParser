// BlueprintGeneratedClass BP_DecalGlow_Longer.BP_DecalGlow_Longer_C
// Size: 0x40d (Inherited: 0x3d0)
struct ABP_DecalGlow_Longer_C : ALandmarkReactionActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UWwiseEmitterComponent* WwiseEmitter; // 0x3d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3e0(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DecalMaterials; // 0x3e8(0x10)
	float Reveal Duration; // 0x3f8(0x04)
	char UnknownData_3FC[0x4]; // 0x3fc(0x04)
	struct ABP_StepsTrigger_C* StepsTriggerActor; // 0x400(0x08)
	float StartTime; // 0x408(0x04)
	bool CollectedDecals; // 0x40c(0x01)

	void StartGlowEffect(); // Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.StartGlowEffect // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	bool StartReaction(); // Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.StartReaction // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	bool StopReaction(); // Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.StopReaction // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CollectDecalMaterials(); // Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.CollectDecalMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_DecalGlow_Longer(int32_t EntryPoint); // Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.ExecuteUbergraph_BP_DecalGlow_Longer //  // @ game+0x1848130
};

