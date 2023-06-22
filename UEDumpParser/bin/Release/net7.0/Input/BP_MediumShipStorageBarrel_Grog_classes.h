// BlueprintGeneratedClass BP_MediumShipStorageBarrel_Grog.BP_MediumShipStorageBarrel_Grog_C
// Size: 0x418 (Inherited: 0x400)
struct ABP_MediumShipStorageBarrel_Grog_C : AInteractableBase {
	struct UTankardRefillerComponent* TankardRefiller; // 0x400(0x08)
	struct UInteractableComponent* Interactable; // 0x408(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x410(0x08)

	struct FVector GetClosestInteractionPoint(struct FVector ReferencePosition, float OutInteractionPointRadius); // Function BP_MediumShipStorageBarrel_Grog.BP_MediumShipStorageBarrel_Grog_C.GetClosestInteractionPoint // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	bool ShouldDrawTooltipInWorldSpace(struct AActor* InInteractor, struct FVector DesiredTooltipWorldPosition); // Function BP_MediumShipStorageBarrel_Grog.BP_MediumShipStorageBarrel_Grog_C.ShouldDrawTooltipInWorldSpace // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_MediumShipStorageBarrel_Grog.BP_MediumShipStorageBarrel_Grog_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

