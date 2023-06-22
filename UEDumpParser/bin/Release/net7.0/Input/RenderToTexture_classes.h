// Class RenderToTexture.RenderToTextureFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct URenderToTextureFunctionLibrary : UBlueprintFunctionLibrary {

	struct URenderToTextureSceneDetails* GetRenderToTexture(struct FName Identifier); // Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture // Final|Native|Static|Public|BlueprintCallable // @ game+0x32036c0
	struct URenderToTextureSceneDetails* CreateRenderToTexture(struct UObject* WorldContext, struct FName Identifier, struct UClass* ClassToSpawn, struct FIntPoint Resolution, bool bForceLinearGamma, bool bCaptureAlpha); // Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x32034c0
};

// Class RenderToTexture.RenderToTextureSceneDetails
// Size: 0xa8 (Inherited: 0x28)
struct URenderToTextureSceneDetails : UObject {
	struct UClass* ClassToSpawn; // 0x28(0x08)
	struct FIntPoint Resolution; // 0x30(0x08)
	struct UWorld* World; // 0x38(0x08)
	struct UWorld* ParentWorld; // 0x40(0x08)
	struct AActor* SpawnedActor; // 0x48(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x50(0x08)
	char UnknownData_58[0x50]; // 0x58(0x50)

	struct UTextureRenderTarget2D* GetTexture(); // Function RenderToTexture.RenderToTextureSceneDetails.GetTexture // Final|Native|Public|BlueprintCallable // @ game+0x3203740
	struct AActor* GetInstance(); // Function RenderToTexture.RenderToTextureSceneDetails.GetInstance // Final|Native|Public|BlueprintCallable // @ game+0x3203690
	void DestroyTexture(); // Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture // Final|Native|Public|BlueprintCallable // @ game+0x3203670
};

