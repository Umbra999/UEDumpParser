// BlueprintGeneratedClass BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C
// Size: 0x610 (Inherited: 0x5f8)
struct ABP_MediumShip_ServingHatch_Left_C : ASwitchMechanismTrigger {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f8(0x08)
	struct UStaticMeshComponent* shp_mid_serving_hatch_L_01_a; // 0x600(0x08)
	struct UInteractableComponent* Interactable; // 0x608(0x08)

	struct FVector GetClosestInteractionPoint(struct FVector ReferencePosition, float OutInteractionPointRadius); // Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.GetClosestInteractionPoint // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnAnimationStarted(); // Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.OnAnimationStarted // Event|Protected|BlueprintEvent // @ game+0x1848130
	void OnAnimationCompleted(); // Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.OnAnimationCompleted // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_MediumShip_ServingHatch_Left(int32_t EntryPoint); // Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.ExecuteUbergraph_BP_MediumShip_ServingHatch_Left //  // @ game+0x1848130
};

