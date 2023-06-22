// BlueprintGeneratedClass BP_ShipStorageBarrel_Wood.BP_ShipStorageBarrel_Wood_C
// Size: 0x4e8 (Inherited: 0x4c8)
struct ABP_ShipStorageBarrel_Wood_C : AStorageContainer {
	struct UHitRegSnapshotRedirectImpactToReplicatedMovementAttachParentComponent* HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent; // 0x4c8(0x08)
	struct UReplenishableComponent* Replenishable; // 0x4d0(0x08)
	struct UShipTelemetrySubjectComponent* ShipTelemetrySubject; // 0x4d8(0x08)
	struct UStorageContainerComponent* StorageContainer; // 0x4e0(0x08)

	bool ShouldDrawTooltipInWorldSpace(struct AActor* InInteractor, struct FVector DesiredTooltipWorldPosition); // Function BP_ShipStorageBarrel_Wood.BP_ShipStorageBarrel_Wood_C.ShouldDrawTooltipInWorldSpace // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_ShipStorageBarrel_Wood.BP_ShipStorageBarrel_Wood_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

