// BlueprintGeneratedClass BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C
// Size: 0x630 (Inherited: 0x618)
struct ABP_LargeShip_CageLatch_03_a_C : APetCageSwitchMechanismTrigger {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x618(0x08)
	struct UStaticMeshComponent* cap_cage_door_03_a; // 0x620(0x08)
	struct UInteractableComponent* Interactable; // 0x628(0x08)

	struct FVector GetClosestInteractionPoint(struct FVector ReferencePosition, float OutInteractionPointRadius); // Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.GetClosestInteractionPoint // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnAnimationStarted(); // Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.OnAnimationStarted // Event|Protected|BlueprintEvent // @ game+0x1848130
	void OnAnimationCompleted(); // Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.OnAnimationCompleted // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_LargeShip_CageLatch_03_a(int32_t EntryPoint); // Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.ExecuteUbergraph_BP_LargeShip_CageLatch_03_a //  // @ game+0x1848130
};

