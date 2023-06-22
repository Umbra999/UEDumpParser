// BlueprintGeneratedClass BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C
// Size: 0x420 (Inherited: 0x3c8)
struct ABP_ItemPreview_Lighting_C : AActor {
	struct UExponentialHeightFogComponent* ExponentialHeightFog; // 0x3c8(0x08)
	struct USkyLightComponent* SkyLight; // 0x3d0(0x08)
	struct USpotLightComponent* SpotLight2; // 0x3d8(0x08)
	struct USpotLightComponent* SpotLight1; // 0x3e0(0x08)
	struct USpotLightComponent* SpotLight; // 0x3e8(0x08)
	struct UPostProcessComponent* PostProcess; // 0x3f0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3f8(0x08)
	struct FMulticastDelegate PreviewBusy; // 0x400(0x10)
	struct FMulticastDelegate PreviewReady; // 0x410(0x10)

	void UserConstructionScript(); // Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PreviewReady__DelegateSignature(struct FPiratePreviewReadyEvent Data); // Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.PreviewReady__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void PreviewBusy__DelegateSignature(struct FPiratePreviewBusyEvent Data); // Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.PreviewBusy__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

