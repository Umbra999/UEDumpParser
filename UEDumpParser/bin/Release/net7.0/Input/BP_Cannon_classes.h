// BlueprintGeneratedClass BP_Cannon.BP_Cannon_C
// Size: 0xdc0 (Inherited: 0xda8)
struct ABP_Cannon_C : ACannon {
	struct UGroupedInteractableAreaComponent* GroupedInteractableArea; // 0xda8(0x08)
	struct UInteractableComponent* Interactable; // 0xdb0(0x08)
	struct UStaticMeshComponent* Collision; // 0xdb8(0x08)

	struct FDockableInfo GetDockableInfo(); // Function BP_Cannon.BP_Cannon_C.GetDockableInfo // Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_Cannon.BP_Cannon_C.UserConstructionScript // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

