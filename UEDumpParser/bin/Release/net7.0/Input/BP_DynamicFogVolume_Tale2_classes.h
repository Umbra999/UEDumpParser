// BlueprintGeneratedClass BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C
// Size: 0x454 (Inherited: 0x439)
struct ABP_DynamicFogVolume_Tale2_C : ABP_DynamicDensityFogVolume_C {
	char UnknownData_439[0x7]; // 0x439(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	float WorldFadeDistanceStart; // 0x448(0x04)
	float WorldFadeDistanceRange; // 0x44c(0x04)
	float FogMaxDensity; // 0x450(0x04)

	void UserConstructionScript(); // Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveTick(float DeltaSeconds); // Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_DynamicFogVolume_Tale2(int32_t EntryPoint); // Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.ExecuteUbergraph_BP_DynamicFogVolume_Tale2 //  // @ game+0x1848130
};

