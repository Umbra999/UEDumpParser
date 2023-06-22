// BlueprintGeneratedClass BP_TotD_PortalController.BP_TotD_PortalController_C
// Size: 0x430 (Inherited: 0x3c8)
struct ABP_TotD_PortalController_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0x3d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d8(0x08)
	float Timeline_0_CloudVisibility_E720F06846CDD3DCC686A1B40E94C68C; // 0x3e0(0x04)
	float Timeline_0_PortalSwirlVisibility_E720F06846CDD3DCC686A1B40E94C68C; // 0x3e4(0x04)
	float Timeline_0_CrackVisibility_E720F06846CDD3DCC686A1B40E94C68C; // 0x3e8(0x04)
	float Timeline_0_LightScale_E720F06846CDD3DCC686A1B40E94C68C; // 0x3ec(0x04)
	float Timeline_0_PortalOpen_E720F06846CDD3DCC686A1B40E94C68C; // 0x3f0(0x04)
	char Timeline_0__Direction_E720F06846CDD3DCC686A1B40E94C68C; // 0x3f4(0x01)
	char UnknownData_3F5[0x3]; // 0x3f5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x3f8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x400(0x10)
	struct TArray<struct UPointLightComponent*> Lights; // 0x410(0x10)
	float LightMaxScale; // 0x420(0x04)
	float GlowMaxScale; // 0x424(0x04)
	struct UTexture2D* PortalMask; // 0x428(0x08)

	void SetParameters(float PortalOpen, float LightScale, float CrackVisibility, float PortalSwirlVisibility, float CloudVisibility); // Function BP_TotD_PortalController.BP_TotD_PortalController_C.SetParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void SetPortalPositionAndOrientation(); // Function BP_TotD_PortalController.BP_TotD_PortalController_C.SetPortalPositionAndOrientation // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CollectMaterialsAndLights(); // Function BP_TotD_PortalController.BP_TotD_PortalController_C.CollectMaterialsAndLights // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_TotD_PortalController.BP_TotD_PortalController_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Timeline_0__FinishedFunc(); // Function BP_TotD_PortalController.BP_TotD_PortalController_C.Timeline_0__FinishedFunc // BlueprintEvent // @ game+0x1848130
	void Timeline_0__UpdateFunc(); // Function BP_TotD_PortalController.BP_TotD_PortalController_C.Timeline_0__UpdateFunc // BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_TotD_PortalController.BP_TotD_PortalController_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveTick(float DeltaSeconds); // Function BP_TotD_PortalController.BP_TotD_PortalController_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1848130
	void OpenPortal(); // Function BP_TotD_PortalController.BP_TotD_PortalController_C.OpenPortal // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_TotD_PortalController(int32_t EntryPoint); // Function BP_TotD_PortalController.BP_TotD_PortalController_C.ExecuteUbergraph_BP_TotD_PortalController //  // @ game+0x1848130
};

