// BlueprintGeneratedClass BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C
// Size: 0x408 (Inherited: 0x3c8)
struct ABP_Sea_Fort_WindowGlows_C : ASeaFortDistantLights {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UStaticMeshComponent* glows; // 0x3d0(0x08)
	struct UStaticMeshComponent* window_planes; // 0x3d8(0x08)
	struct USceneComponent* SharedRoot; // 0x3e0(0x08)
	float FadeCurve_Fade_F995538E47EE9A6B32A4C3A8CF00537A; // 0x3e8(0x04)
	char FadeCurve__Direction_F995538E47EE9A6B32A4C3A8CF00537A; // 0x3ec(0x01)
	char UnknownData_3ED[0x3]; // 0x3ed(0x03)
	struct UTimelineComponent* FadeCurve; // 0x3f0(0x08)
	struct UMaterialInstanceDynamic* WindowDynamicMaterial; // 0x3f8(0x08)
	struct UMaterialInstanceDynamic* GlowDynamicMaterial; // 0x400(0x08)

	void UserConstructionScript(); // Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void FadeCurve__FinishedFunc(); // Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.FadeCurve__FinishedFunc // BlueprintEvent // @ game+0x1848130
	void FadeCurve__UpdateFunc(); // Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.FadeCurve__UpdateFunc // BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void Activate(); // Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.Activate // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Deactivate(); // Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.Deactivate // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void SetSeaFortDistantLightsEnabled(bool InLightsEnabled); // Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.SetSeaFortDistantLightsEnabled // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_Sea_Fort_WindowGlows(int32_t EntryPoint); // Function BP_Sea_Fort_WindowGlows.BP_Sea_Fort_WindowGlows_C.ExecuteUbergraph_BP_Sea_Fort_WindowGlows //  // @ game+0x1848130
};

