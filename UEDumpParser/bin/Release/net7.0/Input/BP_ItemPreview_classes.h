// BlueprintGeneratedClass BP_ItemPreview.BP_ItemPreview_C
// Size: 0x638 (Inherited: 0x5a8)
struct ABP_ItemPreview_C : AItemPreviewActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a8(0x08)
	struct UArrowComponent* Camera_Dog; // 0x5b0(0x08)
	struct UArrowComponent* Camera_Far; // 0x5b8(0x08)
	struct UArrowComponent* Camera_Mid; // 0x5c0(0x08)
	struct UArrowComponent* Camera_Near; // 0x5c8(0x08)
	struct UBillboardComponent* IconBillboard; // 0x5d0(0x08)
	struct UArrowComponent* Camera_Default; // 0x5d8(0x08)
	struct UChildActorComponent* ChildActor; // 0x5e0(0x08)
	struct USkeletalMeshComponent* HiddenDftMesh; // 0x5e8(0x08)
	struct USkeletalMeshComponent* ItemMesh; // 0x5f0(0x08)
	struct UCameraComponent* Camera; // 0x5f8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x600(0x08)
	struct FMulticastDelegate PreviewBusy; // 0x608(0x10)
	struct FMulticastDelegate PreviewReady; // 0x618(0x10)
	struct FMulticastDelegate PreviewShutdown; // 0x628(0x10)

	void UserConstructionScript(); // Function BP_ItemPreview.BP_ItemPreview_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveEndPlay(char EndPlayReason); // Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_ItemPreview(int32_t EntryPoint); // Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview //  // @ game+0x1848130
	void PreviewShutdown__DelegateSignature(struct FPiratePreviewShutdownEvent Data); // Function BP_ItemPreview.BP_ItemPreview_C.PreviewShutdown__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PreviewReady__DelegateSignature(struct FPiratePreviewReadyEvent Data); // Function BP_ItemPreview.BP_ItemPreview_C.PreviewReady__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PreviewBusy__DelegateSignature(struct FPiratePreviewBusyEvent Data); // Function BP_ItemPreview.BP_ItemPreview_C.PreviewBusy__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

