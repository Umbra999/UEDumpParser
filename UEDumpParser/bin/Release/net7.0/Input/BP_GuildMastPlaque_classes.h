// BlueprintGeneratedClass BP_GuildMastPlaque.BP_GuildMastPlaque_C
// Size: 0x4ac (Inherited: 0x400)
struct ABP_GuildMastPlaque_C : AGuildPlaque {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* TextCanvasRenderTarget; // 0x408(0x08)
	struct FSlateFontInfo Font; // 0x410(0x40)
	struct UMaterialInstanceDynamic* guildPlaqueMesh_MID; // 0x450(0x08)
	struct UMaterial* BevelMaterial; // 0x458(0x08)
	struct UMaterialInstanceDynamic* bevelMat_MID; // 0x460(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* BevelCanvasRenderTarget; // 0x468(0x08)
	int32_t CanvasWidth; // 0x470(0x04)
	int32_t CanvasHeight; // 0x474(0x04)
	struct UCanvasWorldMapComponent* Canvas; // 0x478(0x08)
	struct TArray<struct FString> guildRank; // 0x480(0x10)
	float bevelIntensity; // 0x490(0x04)
	int32_t maxRank; // 0x494(0x04)
	struct UTexture* guildIconInput; // 0x498(0x08)
	struct FFeatureFlag FeatureToggle; // 0x4a0(0x0c)

	void UpdateBevelMaterials(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UpdateTextAndIcons(struct UCanvas* Canvas); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateTextAndIcons // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ApplyRenderTargetToMIDs(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ApplyRenderTargetToMIDs // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void GetMedallionColour(float Gold Threshold, float Silver Threshold, int32_t Rank Index, struct FLinearColor Medallion Colour); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.GetMedallionColour // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1848130
	void AssignMedallionColour(struct FLinearColor Medallion Colour); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.AssignMedallionColour // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CreateMIDs(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.CreateMIDs // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnCanvasUpdate_Text(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Text // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnCanvasUpdate_Bevel(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Bevel // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void RefreshGuildPlaqueRender(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.RefreshGuildPlaqueRender // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_GuildMastPlaque(int32_t EntryPoint); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ExecuteUbergraph_BP_GuildMastPlaque //  // @ game+0x1848130
};

