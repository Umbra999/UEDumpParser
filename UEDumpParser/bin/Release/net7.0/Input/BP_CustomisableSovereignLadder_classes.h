// BlueprintGeneratedClass BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C
// Size: 0x668 (Inherited: 0x5e0)
struct ABP_CustomisableSovereignLadder_C : ALadder {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e0(0x08)
	struct UInteractableComponent* InteractableComponent; // 0x5e8(0x08)
	struct UStaticMeshComponent* Ladder Cap; // 0x5f0(0x08)
	struct FCustomisableLadderDefinitionStruct LadderCustomisationDefinition; // 0x5f8(0x20)
	struct TArray<struct FVector> OffTopSplineComponentPositions; // 0x618(0x10)
	struct TArray<struct FVector> OnTopSplineComponentPositions; // 0x628(0x10)
	int32_t Steps; // 0x638(0x04)
	char UnknownData_63C[0x4]; // 0x63c(0x04)
	struct UMaterialInterface* Material Override; // 0x640(0x08)
	float StepHeight; // 0x648(0x04)
	struct FVector Interactable Position; // 0x64c(0x0c)
	struct FVector Interactable Scale; // 0x658(0x0c)
	int32_t Minimum Steps; // 0x664(0x04)

	struct FDockableInfo GetDockableInfo(); // Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.GetDockableInfo // Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Construct Ladder(); // Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.Construct Ladder // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Get Total Height Before Cap(float Height); // Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.Get Total Height Before Cap // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void Get Steps(int32_t Num Steps); // Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.Get Steps // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	struct FTransform GetBottomLadderRungTransform(); // Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.GetBottomLadderRungTransform // Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	struct FTransform GetTopLadderRungTransform(); // Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.GetTopLadderRungTransform // Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Get World Loc at Height Along Z(float Relative Z, struct FVector Return Value); // Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.Get World Loc at Height Along Z // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void SetupSpline(struct USplineComponent* Spline Component, struct TArray<struct FVector> Positions); // Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.SetupSpline // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_CustomisableSovereignLadder(int32_t EntryPoint); // Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.ExecuteUbergraph_BP_CustomisableSovereignLadder //  // @ game+0x1848130
};

