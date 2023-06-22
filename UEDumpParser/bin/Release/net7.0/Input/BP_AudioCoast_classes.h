// BlueprintGeneratedClass BP_AudioCoast.BP_AudioCoast_C
// Size: 0x3ec (Inherited: 0x3c8)
struct ABP_AudioCoast_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct USplineComponent* SplineInner; // 0x3d0(0x08)
	struct USplineComponent* SplineCoast; // 0x3d8(0x08)
	struct USceneComponent* Scene; // 0x3e0(0x08)
	struct FBlueprintableIntegerHandle Handle; // 0x3e8(0x04)

	void UserConstructionScript(); // Function BP_AudioCoast.BP_AudioCoast_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_AudioCoast.BP_AudioCoast_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveEndPlay(char EndPlayReason); // Function BP_AudioCoast.BP_AudioCoast_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_AudioCoast(int32_t EntryPoint); // Function BP_AudioCoast.BP_AudioCoast_C.ExecuteUbergraph_BP_AudioCoast // HasDefaults // @ game+0x1848130
};

