// BlueprintGeneratedClass BP_CylinderLightingZone.BP_CylinderLightingZone_C
// Size: 0x40d (Inherited: 0x3c8)
struct ABP_CylinderLightingZone_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UCapsuleComponent* InnerCapsule; // 0x3d0(0x08)
	struct UCapsuleComponent* OuterCapsule; // 0x3d8(0x08)
	struct ULightingZoneComponent* LightingZone; // 0x3e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3e8(0x08)
	float Outer Radius; // 0x3f0(0x04)
	float Outer Half Height; // 0x3f4(0x04)
	float Inner Radius; // 0x3f8(0x04)
	float Inner Half Height; // 0x3fc(0x04)
	float Weight; // 0x400(0x04)
	int32_t Priority Layer; // 0x404(0x04)
	int32_t Lighting Set; // 0x408(0x04)
	bool IsUnderwaterZone; // 0x40c(0x01)

	void DrawCylinder(); // Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.DrawCylinder // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Update 3D Lighting Zone(); // Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.Update 3D Lighting Zone // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void DrawDebugCylinder(); // Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.DrawDebugCylinder // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ClearDebugCylinder(); // Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ClearDebugCylinder // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_CylinderLightingZone(int32_t EntryPoint); // Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ExecuteUbergraph_BP_CylinderLightingZone //  // @ game+0x1848130
};

