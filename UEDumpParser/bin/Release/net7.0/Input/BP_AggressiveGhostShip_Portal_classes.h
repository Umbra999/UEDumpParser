// BlueprintGeneratedClass BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C
// Size: 0x450 (Inherited: 0x410)
struct ABP_AggressiveGhostShip_Portal_C : AAggressiveGhostShipPortal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UParticleSystemComponent* Portal VFX; // 0x418(0x08)
	struct UWwiseEmitterComponent* WwiseEmitter; // 0x420(0x08)
	struct UStaticMeshComponent* Portal; // 0x428(0x08)
	struct UStaticMeshComponent* shroud; // 0x430(0x08)
	struct USceneComponent* SharedRoot; // 0x438(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x440(0x10)

	void UserConstructionScript(); // Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void StartOpening(); // Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.StartOpening // Event|Protected|BlueprintEvent // @ game+0x1848130
	void StartClosing(); // Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.StartClosing // Event|Protected|BlueprintEvent // @ game+0x1848130
	void End(); // Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.End // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_AggressiveGhostShip_Portal(int32_t EntryPoint); // Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.ExecuteUbergraph_BP_AggressiveGhostShip_Portal //  // @ game+0x1848130
};

