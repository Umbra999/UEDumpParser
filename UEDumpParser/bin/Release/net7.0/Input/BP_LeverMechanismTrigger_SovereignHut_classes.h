// BlueprintGeneratedClass BP_LeverMechanismTrigger_SovereignHut.BP_LeverMechanismTrigger_SovereignHut_C
// Size: 0x610 (Inherited: 0x5f8)
struct ABP_LeverMechanismTrigger_SovereignHut_C : ASwitchMechanismTrigger {
	struct UInteractableComponent* Interactable; // 0x5f8(0x08)
	struct UStaticMeshComponent* LeverMesh; // 0x600(0x08)
	struct UStaticMeshComponent* BaseMesh; // 0x608(0x08)

	struct FVector GetClosestInteractionPoint(struct FVector ReferencePosition, float OutInteractionPointRadius); // Function BP_LeverMechanismTrigger_SovereignHut.BP_LeverMechanismTrigger_SovereignHut_C.GetClosestInteractionPoint // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_LeverMechanismTrigger_SovereignHut.BP_LeverMechanismTrigger_SovereignHut_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

