// BlueprintGeneratedClass BP_FogVolume_Undersea.BP_FogVolume_Undersea_C
// Size: 0x3ec (Inherited: 0x3d8)
struct ABP_FogVolume_Undersea_C : AFogVolume {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	float WorldFadeDistanceStart; // 0x3e0(0x04)
	float WorldFadeDistanceRange; // 0x3e4(0x04)
	float FogMaxDensity; // 0x3e8(0x04)

	void UserConstructionScript(); // Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveTick(float DeltaSeconds); // Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_FogVolume_Undersea(int32_t EntryPoint); // Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.ExecuteUbergraph_BP_FogVolume_Undersea //  // @ game+0x1848130
};

