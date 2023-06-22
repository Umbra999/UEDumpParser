// BlueprintGeneratedClass BP_Mast.BP_Mast_C
// Size: 0xa68 (Inherited: 0x9c8)
struct ABP_Mast_C : AMast {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9c8(0x08)
	struct UStaticMeshComponent* MastTopComponent; // 0x9d0(0x08)
	struct UChildActorComponent* TopgallantActor; // 0x9d8(0x08)
	struct UChildActorComponent* MainsailActor; // 0x9e0(0x08)
	struct UChildActorComponent* TopsailActor; // 0x9e8(0x08)
	struct UStaticMeshComponent* Main Yard; // 0x9f0(0x08)
	struct UStaticMeshComponent* Topgallant Yard; // 0x9f8(0x08)
	struct UStaticMeshComponent* Top Yard; // 0xa00(0x08)
	struct UStaticMeshComponent* MastBaseComponent; // 0xa08(0x08)
	struct TArray<struct FBP_SailStructure> Sail Parameters; // 0xa10(0x10)
	struct TArray<struct UStaticMeshComponent*> Yards; // 0xa20(0x10)
	struct TArray<struct UChildActorComponent*> Sails; // 0xa30(0x10)
	struct UMaterialInstance* Sail Material; // 0xa40(0x08)
	struct TArray<struct ABP_Sail_C*> SailActors; // 0xa48(0x10)
	struct UDecalComponent* DamageDecalRight; // 0xa58(0x08)
	struct UDecalComponent* DamageDecalLeft; // 0xa60(0x08)

	void SetupMastMesh(); // Function BP_Mast.BP_Mast_C.SetupMastMesh // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void AttemptToAddDamageDecal(char RepairableState, struct UDecalComponent* DecalComponent, struct FTransform RelativeTransform, struct UMaterialInterface* NewDecalMaterial); // Function BP_Mast.BP_Mast_C.AttemptToAddDamageDecal // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	bool IsMastVisuallyFractured(); // Function BP_Mast.BP_Mast_C.IsMastVisuallyFractured // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x1848130
	void Customise Static Mesh(struct UStaticMesh* New Static Mesh, struct UStaticMeshComponent* Static Mesh Component); // Function BP_Mast.BP_Mast_C.Customise Static Mesh // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Trim Array Func(struct TArray<struct UObject*> TargetArray, int32_t Size); // Function BP_Mast.BP_Mast_C.Trim Array Func // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Initialise Sail Parameters(); // Function BP_Mast.BP_Mast_C.Initialise Sail Parameters // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Populate Lists of Yards and Sails(); // Function BP_Mast.BP_Mast_C.Populate Lists of Yards and Sails // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Cull Excess Components(struct TArray<struct UActorComponent*> TargetArray); // Function BP_Mast.BP_Mast_C.Cull Excess Components // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Initialise Sails(); // Function BP_Mast.BP_Mast_C.Initialise Sails // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_Mast.BP_Mast_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnMastDescLoaded(struct UMastDescAsset* MastDesc); // Function BP_Mast.BP_Mast_C.OnMastDescLoaded // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnMastMeshSwapRequested(struct UStaticMesh* NewMeshBottom, struct UStaticMesh* NewMeshTop); // Function BP_Mast.BP_Mast_C.OnMastMeshSwapRequested // Event|Protected|BlueprintEvent // @ game+0x1848130
	void BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature(char State, char PreviousState, struct URepairableComponent* RepairableComponent); // Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature // BlueprintEvent // @ game+0x1848130
	void BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature(char State, char PreviousState, struct URepairableComponent* RepairableComponent); // Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature // BlueprintEvent // @ game+0x1848130
	void BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature(char State, char PreviousState, struct URepairableComponent* RepairableComponent); // Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature // BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Mast(int32_t EntryPoint); // Function BP_Mast.BP_Mast_C.ExecuteUbergraph_BP_Mast // HasDefaults // @ game+0x1848130
};

