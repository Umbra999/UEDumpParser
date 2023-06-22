// BlueprintGeneratedClass BP_PiratePreview.BP_PiratePreview_C
// Size: 0x8f8 (Inherited: 0x810)
struct ABP_PiratePreview_C : APiratePreviewActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x810(0x08)
	struct UArrowComponent* Camera_Behind; // 0x818(0x08)
	struct UArrowComponent* Camera_SideViewLeft; // 0x820(0x08)
	struct UArrowComponent* Camera_SideView; // 0x828(0x08)
	struct UArrowComponent* Camera_ProfileImage; // 0x830(0x08)
	struct UArrowComponent* Head_old; // 0x838(0x08)
	struct UArrowComponent* Camera_Hat; // 0x840(0x08)
	struct UArrowComponent* Camera_Gloves; // 0x848(0x08)
	struct UArrowComponent* Camera_Boots; // 0x850(0x08)
	struct UArrowComponent* Camera_PegLeg; // 0x858(0x08)
	struct UArrowComponent* Camera_Hook; // 0x860(0x08)
	struct UArrowComponent* Camera_Glove; // 0x868(0x08)
	struct UArrowComponent* Camera_Torso; // 0x870(0x08)
	struct UArrowComponent* Camera_Mid; // 0x878(0x08)
	struct UArrowComponent* Camera_Legs; // 0x880(0x08)
	struct UArrowComponent* Camera_Feet; // 0x888(0x08)
	struct UArrowComponent* Camera_Head; // 0x890(0x08)
	struct UArrowComponent* Camera_Default; // 0x898(0x08)
	struct UChildActorComponent* ChildActor; // 0x8a0(0x08)
	struct USkeletalMeshComponent* HiddenDftMesh; // 0x8a8(0x08)
	struct USkeletalMeshComponent* PirateMesh; // 0x8b0(0x08)
	struct UCameraComponent* Camera; // 0x8b8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x8c0(0x08)
	struct FMulticastDelegate PreviewBusy; // 0x8c8(0x10)
	struct FMulticastDelegate PreviewReady; // 0x8d8(0x10)
	struct FMulticastDelegate PreviewShutdown; // 0x8e8(0x10)

	void UserConstructionScript(); // Function BP_PiratePreview.BP_PiratePreview_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_PiratePreview.BP_PiratePreview_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void PreviewBusy_Event(struct FPiratePreviewBusyEvent Data); // Function BP_PiratePreview.BP_PiratePreview_C.PreviewBusy_Event // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PreviewReady_Event(struct FPiratePreviewReadyEvent Data); // Function BP_PiratePreview.BP_PiratePreview_C.PreviewReady_Event // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveEndPlay(char EndPlayReason); // Function BP_PiratePreview.BP_PiratePreview_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_PiratePreview(int32_t EntryPoint); // Function BP_PiratePreview.BP_PiratePreview_C.ExecuteUbergraph_BP_PiratePreview // HasDefaults // @ game+0x1848130
	void PreviewShutdown__DelegateSignature(struct FPiratePreviewShutdownEvent Data); // Function BP_PiratePreview.BP_PiratePreview_C.PreviewShutdown__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PreviewReady__DelegateSignature(struct FPiratePreviewReadyEvent Data); // Function BP_PiratePreview.BP_PiratePreview_C.PreviewReady__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PreviewBusy__DelegateSignature(struct FPiratePreviewBusyEvent Data); // Function BP_PiratePreview.BP_PiratePreview_C.PreviewBusy__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

