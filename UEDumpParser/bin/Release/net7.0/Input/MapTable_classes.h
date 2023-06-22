// BlueprintGeneratedClass MapTable.MapTable_C
// Size: 0x815 (Inherited: 0x7b0)
struct AMapTable_C : AMapTable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7b0(0x08)
	struct UHitRegSnapshotRedirectImpactToReplicatedMovementAttachParentComponent* HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent; // 0x7b8(0x08)
	struct UBoxComponent* NavBlocker; // 0x7c0(0x08)
	struct UChildActorComponent* ControlPoint_6; // 0x7c8(0x08)
	struct UChildActorComponent* ControlPoint_5; // 0x7d0(0x08)
	struct UChildActorComponent* ControlPoint_4; // 0x7d8(0x08)
	struct UChildActorComponent* ControlPoint_3; // 0x7e0(0x08)
	struct UChildActorComponent* ControlPoint_2; // 0x7e8(0x08)
	struct UChildActorComponent* ControlPoint_1; // 0x7f0(0x08)
	struct UTextureFeedbackComponent* TextureFeedback; // 0x7f8(0x08)
	struct UStaticMeshComponent* Cube; // 0x800(0x08)
	struct UStaticMeshComponent* Map; // 0x808(0x08)
	float ActiveRange; // 0x810(0x04)
	bool IsActive; // 0x814(0x01)

	void UpdateBlurEffect(); // Function MapTable.MapTable_C.UpdateBlurEffect // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	struct FVector GetClosestInteractionPoint(struct FVector ReferencePosition, float OutInteractionPointRadius); // Function MapTable.MapTable_C.GetClosestInteractionPoint // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function MapTable.MapTable_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function MapTable.MapTable_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void SetEffectActiveWhenClose(); // Function MapTable.MapTable_C.SetEffectActiveWhenClose // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnMapActivate(bool IsMapActive, struct UTextureRenderTarget2D* Texture); // Function MapTable.MapTable_C.OnMapActivate // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnMapMove(struct FVector2D CentreLocation, struct FVector2D ZoomLevel); // Function MapTable.MapTable_C.OnMapMove // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_MapTable(int32_t EntryPoint); // Function MapTable.MapTable_C.ExecuteUbergraph_MapTable // HasDefaults // @ game+0x1848130
};

