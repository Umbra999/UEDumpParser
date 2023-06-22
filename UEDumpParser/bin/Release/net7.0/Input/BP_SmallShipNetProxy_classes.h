// BlueprintGeneratedClass BP_SmallShipNetProxy.BP_SmallShipNetProxy_C
// Size: 0x4d0 (Inherited: 0x4b0)
struct ABP_SmallShipNetProxy_C : AShipNetProxy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UStaticMeshComponent* EmissaryFlags; // 0x4b8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Dynamic Materials; // 0x4c0(0x10)

	void Set Colour on All Materials(struct FName ParameterName, struct FLinearColor Value); // Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Colour on All Materials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Set Value on All Materials(struct FName Variable Name, float Value); // Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Value on All Materials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Apply Bits to Lanterns(int32_t Bits); // Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Apply Bits to Lanterns // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Create Dynamic Materials(); // Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Create Dynamic Materials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnLanternStateChanged(int32_t LanternStateBits); // Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnLanternStateChanged // Event|Protected|BlueprintEvent // @ game+0x1848130
	void OnEmissaryActiveStateChanged(bool InNewEmissaryActiveState); // Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnEmissaryActiveStateChanged // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_SmallShipNetProxy(int32_t EntryPoint); // Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ExecuteUbergraph_BP_SmallShipNetProxy //  // @ game+0x1848130
};

