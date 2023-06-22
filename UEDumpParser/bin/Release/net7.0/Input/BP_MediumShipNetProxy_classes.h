// BlueprintGeneratedClass BP_MediumShipNetProxy.BP_MediumShipNetProxy_C
// Size: 0x4d0 (Inherited: 0x4b0)
struct ABP_MediumShipNetProxy_C : AShipNetProxy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UStaticMeshComponent* EmissaryFlags; // 0x4b8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Dynamic Materials; // 0x4c0(0x10)

	void Set Colour on All Materials(struct FName ParameterName, struct FLinearColor Value); // Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Set Colour on All Materials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Set Value on All Materials(struct FName Variable Name, float Value); // Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Set Value on All Materials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Apply Bits to Lanterns(int32_t Bits); // Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Apply Bits to Lanterns // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Create Dynamic Materials(); // Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.Create Dynamic Materials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnLanternStateChanged(int32_t LanternStateBits); // Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.OnLanternStateChanged // Event|Protected|BlueprintEvent // @ game+0x1848130
	void OnEmissaryActiveStateChanged(bool InNewEmissaryActiveState); // Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.OnEmissaryActiveStateChanged // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_MediumShipNetProxy(int32_t EntryPoint); // Function BP_MediumShipNetProxy.BP_MediumShipNetProxy_C.ExecuteUbergraph_BP_MediumShipNetProxy //  // @ game+0x1848130
};

