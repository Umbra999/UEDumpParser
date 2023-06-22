// BlueprintGeneratedClass BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C
// Size: 0x3fc (Inherited: 0x3c8)
struct ABP_ship_surface_wet_decal_C : AShipResurfaceWetnessActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UDecalComponent* WetDecalStarboard; // 0x3d0(0x08)
	struct UDecalComponent* WetDecalPort; // 0x3d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3e0(0x08)
	float WetEffectDuration; // 0x3e8(0x04)
	char UnknownData_3EC[0x4]; // 0x3ec(0x04)
	struct UMaterialInstanceDynamic* WetDynamicMaterial; // 0x3f0(0x08)
	struct FTimerHandle WetTimerHandle; // 0x3f8(0x04)

	void UserConstructionScript(); // Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void HideWetDecals(); // Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.HideWetDecals // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void StartResurfaceEffect(float InServerStartTime); // Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.StartResurfaceEffect // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_ship_surface_wet_decal(int32_t EntryPoint); // Function BP_ship_surface_wet_decal.BP_ship_surface_wet_decal_C.ExecuteUbergraph_BP_ship_surface_wet_decal // HasDefaults // @ game+0x1848130
};

