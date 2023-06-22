// BlueprintGeneratedClass BP_Lantern.BP_Lantern_C
// Size: 0xa38 (Inherited: 0x9a0)
struct ABP_Lantern_C : ALantern {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9a0(0x08)
	struct UStaticMeshComponent* LanternTriggerGlow; // 0x9a8(0x08)
	struct UStaticMeshComponent* LanternGlow; // 0x9b0(0x08)
	struct UAmbientLightSourceComponent* AmbientLightSource; // 0x9b8(0x08)
	struct USpotLightComponent* SpotLight; // 0x9c0(0x08)
	struct UUsableWieldableComponent* UsableWieldable; // 0x9c8(0x08)
	struct UMaterialInstanceDynamic* LanternGlowDynamicMaterial; // 0x9d0(0x08)
	float EmissiveInt_threshold; // 0x9d8(0x04)
	char UnknownData_9DC[0x4]; // 0x9dc(0x04)
	struct UMaterialInstanceDynamic* LanternTriggerGlowDynamicMaterial; // 0x9e0(0x08)
	float TriggerGlowDuration; // 0x9e8(0x04)
	float TriggerGlowRampInDuration; // 0x9ec(0x04)
	float TriggerGlowRampOutDuration; // 0x9f0(0x04)
	struct FLinearColor DefaultSpotlightColour; // 0x9f4(0x10)
	struct FLinearColor DefaultAmbientLightColour; // 0xa04(0x10)
	struct FLinearColor DefaultGlowColour; // 0xa14(0x10)
	char UnknownData_A24[0x4]; // 0xa24(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0xa28(0x10)

	void CreateLanternDynamicMaterial(); // Function BP_Lantern.BP_Lantern_C.CreateLanternDynamicMaterial // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnAttachThirdPerson(); // Function BP_Lantern.BP_Lantern_C.OnAttachThirdPerson // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void OnAttachFirstPerson(); // Function BP_Lantern.BP_Lantern_C.OnAttachFirstPerson // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void TurnOff(); // Function BP_Lantern.BP_Lantern_C.TurnOff // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void TurnOn(); // Function BP_Lantern.BP_Lantern_C.TurnOn // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_Lantern.BP_Lantern_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveWieldFirstPerson(); // Function BP_Lantern.BP_Lantern_C.ReceiveWieldFirstPerson // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveWieldThirdPerson(); // Function BP_Lantern.BP_Lantern_C.ReceiveWieldThirdPerson // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_Lantern.BP_Lantern_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveLightChange(); // Function BP_Lantern.BP_Lantern_C.ReceiveLightChange // Event|Protected|BlueprintEvent // @ game+0x1848130
	void TriggerGlow(); // Function BP_Lantern.BP_Lantern_C.TriggerGlow // Event|Protected|BlueprintEvent // @ game+0x1848130
	void PostMeshChangedBPEvent(bool SkipFlameColourTransition); // Function BP_Lantern.BP_Lantern_C.PostMeshChangedBPEvent // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ReceiveFlameData(bool WantChangeAnimation); // Function BP_Lantern.BP_Lantern_C.ReceiveFlameData // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Lantern(int32_t EntryPoint); // Function BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern //  // @ game+0x1848130
};

