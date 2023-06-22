// BlueprintGeneratedClass BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C
// Size: 0x779 (Inherited: 0x708)
struct ABP_InteractableShipRailingLight_C : AShipInteractableLight {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x708(0x08)
	struct UInteractableComponent* Interactable; // 0x710(0x08)
	struct UStaticMeshComponent* LanternGlow; // 0x718(0x08)
	struct UStaticMeshComponent* Light; // 0x720(0x08)
	struct UMaterialInstanceDynamic* DynamicGlowMaterial; // 0x728(0x08)
	struct FName GlowBrightnessParameterName; // 0x730(0x08)
	struct FName GlowRandomSeedParameterName; // 0x738(0x08)
	float GlowIntensityOn; // 0x740(0x04)
	float GlowIntensityOff; // 0x744(0x04)
	bool UsesGlow; // 0x748(0x01)
	char UnknownData_749[0x7]; // 0x749(0x07)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x750(0x08)
	struct FName FlameParameterName; // 0x758(0x08)
	float FlameIntensityOn; // 0x760(0x04)
	float FlameIntensityOff; // 0x764(0x04)
	struct FLinearColor DefaultGlowColour; // 0x768(0x10)
	char CurrentFlameOfFateType; // 0x778(0x01)

	void UserConstructionScript(); // Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void LightStateChanged(); // Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.LightStateChanged // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_InteractableShipRailingLight(int32_t EntryPoint); // Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.ExecuteUbergraph_BP_InteractableShipRailingLight //  // @ game+0x1848130
};

