// BlueprintGeneratedClass BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C
// Size: 0x439 (Inherited: 0x3d8)
struct ABP_DynamicDensityFogVolume_C : AFogVolume {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	float StateBlend_BlendAmount_F79089CA4C773743F03F4C978EB7C986; // 0x3e0(0x04)
	char StateBlend__Direction_F79089CA4C773743F03F4C978EB7C986; // 0x3e4(0x01)
	char UnknownData_3E5[0x3]; // 0x3e5(0x03)
	struct UTimelineComponent* StateBlend; // 0x3e8(0x08)
	struct UMaterialInstanceDynamic* UpdateMaterial; // 0x3f0(0x08)
	struct UCanvasRenderTarget2D* Canvas; // 0x3f8(0x08)
	int32_t CurrentState; // 0x400(0x04)
	int32_t NextState; // 0x404(0x04)
	struct TArray<struct UTexture2D*> StateTextures; // 0x408(0x10)
	int32_t Width; // 0x418(0x04)
	int32_t Height; // 0x41c(0x04)
	bool UseStateParameters; // 0x420(0x01)
	char UnknownData_421[0x7]; // 0x421(0x07)
	struct TArray<struct FBP_Struct_DynamicFogVolumeParams> StateParams; // 0x428(0x10)
	bool AlignMaskToActor; // 0x438(0x01)

	void BlendParams(float BlendAmount); // Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.BlendParams // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnRep_NextState(); // Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.OnRep_NextState // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void StateBlend__FinishedFunc(); // Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__FinishedFunc // BlueprintEvent // @ game+0x1848130
	void StateBlend__UpdateFunc(); // Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__UpdateFunc // BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void UpdateCanvas(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UpdateCanvas // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ChangeState(int32_t State); // Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ChangeState // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void SetState(); // Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.SetState // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_DynamicDensityFogVolume(int32_t EntryPoint); // Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ExecuteUbergraph_BP_DynamicDensityFogVolume //  // @ game+0x1848130
};

