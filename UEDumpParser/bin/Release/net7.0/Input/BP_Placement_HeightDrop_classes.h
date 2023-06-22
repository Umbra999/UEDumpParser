// BlueprintGeneratedClass BP_Placement_HeightDrop.BP_Placement_HeightDrop_C
// Size: 0x408 (Inherited: 0x3c8)
struct ABP_Placement_HeightDrop_C : AActor {
	struct USceneComponent* DefaultSceneRoot; // 0x3c8(0x08)
	bool Drop Components to Floor; // 0x3d0(0x01)
	char UnknownData_3D1[0x3]; // 0x3d1(0x03)
	float Vertical Displacement; // 0x3d4(0x04)
	bool Match Surface Orientation; // 0x3d8(0x01)
	char UnknownData_3D9[0x3]; // 0x3d9(0x03)
	float Maximum Deviation Angle; // 0x3dc(0x04)
	struct TArray<struct USceneComponent*> ComponentsToDrop; // 0x3e0(0x10)
	bool Check For Movable Components; // 0x3f0(0x01)
	bool CreateParentBoundsVolume; // 0x3f1(0x01)
	char UnknownData_3F2[0x2]; // 0x3f2(0x02)
	float ParentBoundsPadding; // 0x3f4(0x04)
	struct TArray<struct UPhysicalMaterial*> Physical Materials To Ignore; // 0x3f8(0x10)

	void CreateComponentList(); // Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateComponentList // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CreateParentBounds(); // Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CreateParentBounds // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void CheckMobilityState(); // Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.CheckMobilityState // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Get Valid Collision(struct TArray<struct FHitResult> Hit Results, bool Hit Success, struct USceneComponent* Current Component, bool Return Value, struct FVector Impact Position, struct FVector Impact Normal); // Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Get Valid Collision // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Drop Components(); // Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.Drop Components // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_Placement_HeightDrop.BP_Placement_HeightDrop_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
};

