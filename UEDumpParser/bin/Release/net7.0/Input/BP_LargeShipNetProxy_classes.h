// BlueprintGeneratedClass BP_LargeShipNetProxy.BP_LargeShipNetProxy_C
// Size: 0x4d0 (Inherited: 0x4b0)
struct ABP_LargeShipNetProxy_C : AShipNetProxy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UStaticMeshComponent* EmissaryFlags; // 0x4b8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Dynamic Materials; // 0x4c0(0x10)

	void Set Colour on All Materials(struct FName Variable Name, struct FLinearColor Value); // Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Colour on All Materials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Set Value on All Materials(struct FName Variable Name, float Value); // Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Value on All Materials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Apply Bits to Lanterns(int32_t Lantern Bits); // Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Apply Bits to Lanterns // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Create Dynamic Materials(); // Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Create Dynamic Materials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnLanternStateChanged(int32_t LanternStateBits); // Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.OnLanternStateChanged // Event|Protected|BlueprintEvent // @ game+0x1848130
	void OnEmissaryActiveStateChanged(bool InNewEmissaryActiveState); // Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.OnEmissaryActiveStateChanged // Event|Protected|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_LargeShipNetProxy(int32_t EntryPoint); // Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.ExecuteUbergraph_BP_LargeShipNetProxy //  // @ game+0x1848130
};

