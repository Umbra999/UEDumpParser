// BlueprintGeneratedClass BP_LightingZone.BP_LightingZone_C
// Size: 0x405 (Inherited: 0x3c8)
struct ABP_LightingZone_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct USphereComponent* InnerSphere; // 0x3d0(0x08)
	struct USphereComponent* OuterSphere; // 0x3d8(0x08)
	struct ULightingZoneComponent* LightingZone; // 0x3e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3e8(0x08)
	float Outer Radius; // 0x3f0(0x04)
	float Inner Radius; // 0x3f4(0x04)
	float Weight; // 0x3f8(0x04)
	int32_t Priority Layer; // 0x3fc(0x04)
	int32_t Lighting Set; // 0x400(0x04)
	bool IsUnderwaterZone; // 0x404(0x01)

	void Update Lighting Zone(); // Function BP_LightingZone.BP_LightingZone_C.Update Lighting Zone // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_LightingZone.BP_LightingZone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_LightingZone.BP_LightingZone_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_LightingZone(int32_t EntryPoint); // Function BP_LightingZone.BP_LightingZone_C.ExecuteUbergraph_BP_LightingZone //  // @ game+0x1848130
};

