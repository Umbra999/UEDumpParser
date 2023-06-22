// BlueprintGeneratedClass BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C
// Size: 0x618 (Inherited: 0x5f8)
struct ABP_SmallShip_WindowHatch_C : ASwitchMechanismTrigger {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f8(0x08)
	struct UHitRegSnapshotRedirectImpactToReplicatedMovementAttachParentComponent* HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent; // 0x600(0x08)
	struct UStaticMeshComponent* shp_mid_serving_hatch_R_01_a; // 0x608(0x08)
	struct UInteractableComponent* Interactable; // 0x610(0x08)

	struct FVector GetClosestInteractionPoint(struct FVector ReferencePosition, float OutInteractionPointRadius); // Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.GetClosestInteractionPoint // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnAnimationStarted(); // Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationStarted // Event|Protected|BlueprintEvent // @ game+0x1848130
	void OnAnimationCompleted(); // Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationCompleted // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_SmallShip_WindowHatch(int32_t EntryPoint); // Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.ExecuteUbergraph_BP_SmallShip_WindowHatch //  // @ game+0x1848130
};

