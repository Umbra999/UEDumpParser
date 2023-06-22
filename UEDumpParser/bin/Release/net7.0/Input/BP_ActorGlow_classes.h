// BlueprintGeneratedClass BP_ActorGlow.BP_ActorGlow_C
// Size: 0x400 (Inherited: 0x3d0)
struct ABP_ActorGlow_C : ALandmarkReactionActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DecalMaterials; // 0x3e0(0x10)
	float Reveal Duration; // 0x3f0(0x04)
	char UnknownData_3F4[0x4]; // 0x3f4(0x04)
	struct ABP_StepsTrigger_C* StepsTriggerActor; // 0x3f8(0x08)

	void StartGlowEffect(); // Function BP_ActorGlow.BP_ActorGlow_C.StartGlowEffect // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	bool StartReaction(); // Function BP_ActorGlow.BP_ActorGlow_C.StartReaction // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	bool StopReaction(); // Function BP_ActorGlow.BP_ActorGlow_C.StopReaction // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CollectDecalMaterials(); // Function BP_ActorGlow.BP_ActorGlow_C.CollectDecalMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_ActorGlow.BP_ActorGlow_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_ActorGlow.BP_ActorGlow_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_ActorGlow(int32_t EntryPoint); // Function BP_ActorGlow.BP_ActorGlow_C.ExecuteUbergraph_BP_ActorGlow //  // @ game+0x1848130
};

