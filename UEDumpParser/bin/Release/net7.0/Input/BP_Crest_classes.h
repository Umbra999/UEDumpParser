// BlueprintGeneratedClass BP_Crest.BP_Crest_C
// Size: 0x548 (Inherited: 0x448)
struct ABP_Crest_C : ACrest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UParticleSystemComponent* VFX_Back; // 0x450(0x08)
	struct UParticleSystemComponent* VFX_Front; // 0x458(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* TextCanvasRenderTarget; // 0x460(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* BlurCanvasRenderTarget; // 0x468(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* BevelCanvasRenderTarget; // 0x470(0x08)
	struct UMaterial* BlurCanvasMaterial; // 0x478(0x08)
	struct UMaterial* BevelCanvasMaterial; // 0x480(0x08)
	struct UMaterialInstanceDynamic* DynamicBlurCanvasMaterial; // 0x488(0x08)
	struct UMaterialInstanceDynamic* DynamicBevelCanvasMaterial; // 0x490(0x08)
	struct UMaterialInstanceDynamic* CrestDynamicMaterial; // 0x498(0x08)
	int32_t CanvasWidth; // 0x4a0(0x04)
	int32_t CanvasHeight; // 0x4a4(0x04)
	struct UFont* Font; // 0x4a8(0x08)
	struct UWwiseObjectPoolWrapper* NameplatePool; // 0x4b0(0x08)
	struct FWwiseEmitterCreationParams EmitterCreationParams; // 0x4b8(0x28)
	float Cooldown; // 0x4e0(0x04)
	char UnknownData_4E4[0x4]; // 0x4e4(0x04)
	struct FSlateFontInfo FontInfo; // 0x4e8(0x40)
	struct TArray<struct UParticleSystem*> VFXSizeVariants; // 0x528(0x10)
	int32_t NameSizeIndex; // 0x538(0x04)
	struct FFeatureFlag FeatureName; // 0x53c(0x0c)

	void SetupCrestMaterials(); // Function BP_Crest.BP_Crest_C.SetupCrestMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void GetTextScale(struct FVector2D TextSize, float Scale); // Function BP_Crest.BP_Crest_C.GetTextScale // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_Crest.BP_Crest_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_Crest.BP_Crest_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void UpdateTextCanvas(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_Crest.BP_Crest_C.UpdateTextCanvas // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UpdateBlurredCanvas(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_Crest.BP_Crest_C.UpdateBlurredCanvas // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UpdateBevelCanvas(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_Crest.BP_Crest_C.UpdateBevelCanvas // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveMeshLoaded(); // Function BP_Crest.BP_Crest_C.ReceiveMeshLoaded // Event|Public|BlueprintEvent // @ game+0x1848130
	void RefreshShipNameRender(); // Function BP_Crest.BP_Crest_C.RefreshShipNameRender // Event|Public|BlueprintEvent // @ game+0x1848130
	void HideShipName(); // Function BP_Crest.BP_Crest_C.HideShipName // Event|Public|BlueprintEvent // @ game+0x1848130
	void InscribeShipName(); // Function BP_Crest.BP_Crest_C.InscribeShipName // Event|Public|BlueprintEvent // @ game+0x1848130
	void UpdateShipNameRender(float FadeInTime); // Function BP_Crest.BP_Crest_C.UpdateShipNameRender // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Crest(int32_t EntryPoint); // Function BP_Crest.BP_Crest_C.ExecuteUbergraph_BP_Crest // HasDefaults // @ game+0x1848130
};

