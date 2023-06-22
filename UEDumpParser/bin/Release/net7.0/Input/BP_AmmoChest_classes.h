// BlueprintGeneratedClass BP_AmmoChest.BP_AmmoChest_C
// Size: 0x4b0 (Inherited: 0x470)
struct ABP_AmmoChest_C : AAmmoChest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UBoxComponent* Hits; // 0x478(0x08)
	struct UInteractableComponent* Interactable; // 0x480(0x08)
	struct FWwiseEmitter Emitter; // 0x488(0x20)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x4a8(0x08)

	struct FText GetObjectDisplayName(); // Function BP_AmmoChest.BP_AmmoChest_C.GetObjectDisplayName // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x1848130
	struct FVector GetClosestInteractionPoint(struct FVector ReferencePosition, float OutInteractionPointRadius); // Function BP_AmmoChest.BP_AmmoChest_C.GetClosestInteractionPoint // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_AmmoChest.BP_AmmoChest_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_AmmoChest.BP_AmmoChest_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void Blueprint_OnInteract_Client(struct AActor* InInteractor); // Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Client // Event|Protected|BlueprintEvent // @ game+0x1848130
	void Blueprint_OnInteract_Server(struct AActor* InInteractor); // Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Server // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_AmmoChest(int32_t EntryPoint); // Function BP_AmmoChest.BP_AmmoChest_C.ExecuteUbergraph_BP_AmmoChest // HasDefaults // @ game+0x1848130
};

