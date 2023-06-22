// BlueprintGeneratedClass BP_InteractableShipLantern.BP_InteractableShipLantern_C
// Size: 0x77d (Inherited: 0x708)
struct ABP_InteractableShipLantern_C : AShipInteractableLight {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x708(0x08)
	struct UInteractableComponent* Interactable; // 0x710(0x08)
	struct UStaticMeshComponent* LanternGlow; // 0x718(0x08)
	struct UStaticMeshComponent* Lantern; // 0x720(0x08)
	struct UStaticMeshComponent* Hook; // 0x728(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x730(0x08)
	struct UMaterialInstanceDynamic* DynamicGlowMaterial; // 0x738(0x08)
	struct FName FlameParameterName; // 0x740(0x08)
	struct FName GlowBrightnessParameterName; // 0x748(0x08)
	struct FName GlowRandomSeedParameterName; // 0x750(0x08)
	float FlameIntensityOn; // 0x758(0x04)
	float FlameIntensityOff; // 0x75c(0x04)
	float GlowIntensityOn; // 0x760(0x04)
	float GlowIntensityOff; // 0x764(0x04)
	bool Uses Glow; // 0x768(0x01)
	char UnknownData_769[0x3]; // 0x769(0x03)
	struct FLinearColor DefaultGlowColour; // 0x76c(0x10)
	char CurrentFlameOFateType; // 0x77c(0x01)

	void UserConstructionScript(); // Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void LightStateChanged(); // Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.LightStateChanged // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_InteractableShipLantern(int32_t EntryPoint); // Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.ExecuteUbergraph_BP_InteractableShipLantern //  // @ game+0x1848130
};

