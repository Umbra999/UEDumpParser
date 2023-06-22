// BlueprintGeneratedClass BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C
// Size: 0x638 (Inherited: 0x620)
struct ABP_SmallShip_StandardHull_InternalShipWater_C : AShipInternalWater {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UDynamicFlowComponent* DynamicFlow; // 0x628(0x08)
	struct UCurveFloat* Foaminess; // 0x630(0x08)

	void GetLineIntersectionFromPlane(struct FVector LineStart, struct FVector LineEnd, bool Intersect, struct FVector IntersectionPoint); // Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetLineIntersectionFromPlane // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void GetWaterLevel(float WaterLevel); // Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetWaterLevel // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void GetDistanceFromPlane(struct FVector Location, float Distance); // Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetDistanceFromPlane // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void AddWater(float Water Amount); // Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.AddWater // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_SmallShip_StandardHull_InternalShipWater(int32_t EntryPoint); // Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.ExecuteUbergraph_BP_SmallShip_StandardHull_InternalShipWater //  // @ game+0x1848130
};

