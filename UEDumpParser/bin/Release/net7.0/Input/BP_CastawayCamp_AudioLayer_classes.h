// BlueprintGeneratedClass BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C
// Size: 0x408 (Inherited: 0x3c8)
struct ABP_CastawayCamp_AudioLayer_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWwiseEmitterComponent* Flapping; // 0x3d0(0x08)
	struct UWwiseEmitterComponent* Campfire; // 0x3d8(0x08)
	struct UWwiseEmitterComponent* CastawayCamp_Audio; // 0x3e0(0x08)
	struct UWwiseEvent* Campfire_Play; // 0x3e8(0x08)
	struct UWwiseEvent* Campfire_Stop; // 0x3f0(0x08)
	struct UWwiseEvent* Flapping_Play; // 0x3f8(0x08)
	struct UWwiseEvent* Flapping_Stop; // 0x400(0x08)

	void UserConstructionScript(); // Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveEndPlay(char EndPlayReason); // Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_CastawayCamp_AudioLayer(int32_t EntryPoint); // Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ExecuteUbergraph_BP_CastawayCamp_AudioLayer //  // @ game+0x1848130
};

