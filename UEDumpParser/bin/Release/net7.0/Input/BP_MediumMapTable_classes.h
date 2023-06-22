// BlueprintGeneratedClass BP_MediumMapTable.BP_MediumMapTable_C
// Size: 0x805 (Inherited: 0x7b0)
struct ABP_MediumMapTable_C : AMapTable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7b0(0x08)
	struct UHitRegSnapshotRedirectImpactToReplicatedMovementAttachParentComponent* HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent; // 0x7b8(0x08)
	struct UBoxComponent* NavBlocker; // 0x7c0(0x08)
	struct UChildActorComponent* ControlPoint_4; // 0x7c8(0x08)
	struct UChildActorComponent* ControlPoint_3; // 0x7d0(0x08)
	struct UChildActorComponent* ControlPoint_2; // 0x7d8(0x08)
	struct UChildActorComponent* ControlPoint_1; // 0x7e0(0x08)
	struct UTextureFeedbackComponent* TextureFeedback; // 0x7e8(0x08)
	struct UStaticMeshComponent* Cube; // 0x7f0(0x08)
	struct UStaticMeshComponent* Map; // 0x7f8(0x08)
	float ActiveRange; // 0x800(0x04)
	bool IsActive; // 0x804(0x01)

	void UpdateBlurEffect(); // Function BP_MediumMapTable.BP_MediumMapTable_C.UpdateBlurEffect // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	struct FVector GetClosestInteractionPoint(struct FVector ReferencePosition, float OutInteractionPointRadius); // Function BP_MediumMapTable.BP_MediumMapTable_C.GetClosestInteractionPoint // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_MediumMapTable.BP_MediumMapTable_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_MediumMapTable.BP_MediumMapTable_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void SetEffectActiveWhenClose(); // Function BP_MediumMapTable.BP_MediumMapTable_C.SetEffectActiveWhenClose // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnMapActivate(bool IsMapActive, struct UTextureRenderTarget2D* Texture); // Function BP_MediumMapTable.BP_MediumMapTable_C.OnMapActivate // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnMapMove(struct FVector2D CentreLocation, struct FVector2D ZoomLevel); // Function BP_MediumMapTable.BP_MediumMapTable_C.OnMapMove // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_MediumMapTable(int32_t EntryPoint); // Function BP_MediumMapTable.BP_MediumMapTable_C.ExecuteUbergraph_BP_MediumMapTable // HasDefaults // @ game+0x1848130
};

