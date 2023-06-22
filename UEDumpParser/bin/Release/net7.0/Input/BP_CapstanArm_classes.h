// BlueprintGeneratedClass BP_CapstanArm.BP_CapstanArm_C
// Size: 0x570 (Inherited: 0x560)
struct ABP_CapstanArm_C : ACapstanArm {
	struct UInteractableComponent* Interactable; // 0x560(0x08)
	struct USceneComponent* LookAtPos; // 0x568(0x08)

	struct FVector GetLookAtPosBasisSpace(); // Function BP_CapstanArm.BP_CapstanArm_C.GetLookAtPosBasisSpace // Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const // @ game+0x1848130
	struct FVector GetFrontFacingVector(); // Function BP_CapstanArm.BP_CapstanArm_C.GetFrontFacingVector // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x1848130
	bool DoesRequireFacingFront(); // Function BP_CapstanArm.BP_CapstanArm_C.DoesRequireFacingFront // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x1848130
	struct FDockableInfo GetDockableInfo(); // Function BP_CapstanArm.BP_CapstanArm_C.GetDockableInfo // Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	struct FVector GetClosestInteractionPoint(struct FVector ReferencePosition, float OutInteractionPointRadius); // Function BP_CapstanArm.BP_CapstanArm_C.GetClosestInteractionPoint // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	struct FVector GetLookAtPos(); // Function BP_CapstanArm.BP_CapstanArm_C.GetLookAtPos // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x1848130
	void UserConstructionScript(); // Function BP_CapstanArm.BP_CapstanArm_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

