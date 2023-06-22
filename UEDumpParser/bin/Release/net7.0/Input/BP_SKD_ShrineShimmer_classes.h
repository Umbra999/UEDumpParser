// BlueprintGeneratedClass BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C
// Size: 0x4b9 (Inherited: 0x470)
struct ABP_SKD_ShrineShimmer_C : AShimmerActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UStaticMeshComponent* surface_bio_lum; // 0x478(0x08)
	struct UStaticMeshComponent* volume_glow; // 0x480(0x08)
	struct UStaticMeshComponent* shimmer_water_00; // 0x488(0x08)
	struct UStaticMeshComponent* shimmer_air_01; // 0x490(0x08)
	struct UStaticMeshComponent* shimmer_air_00; // 0x498(0x08)
	struct USceneComponent* SharedRoot; // 0x4a0(0x08)
	float FadeCurve_Opacity_D7ECDDBE4184BCE83B3BD58190CD98C7; // 0x4a8(0x04)
	char FadeCurve__Direction_D7ECDDBE4184BCE83B3BD58190CD98C7; // 0x4ac(0x01)
	char UnknownData_4AD[0x3]; // 0x4ad(0x03)
	struct UTimelineComponent* FadeCurve; // 0x4b0(0x08)
	bool ShimmerIsVisible; // 0x4b8(0x01)

	void OnRep_ShimmerIsVisible(); // Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.OnRep_ShimmerIsVisible // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void FadeCurve__FinishedFunc(); // Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.FadeCurve__FinishedFunc // BlueprintEvent // @ game+0x1848130
	void FadeCurve__UpdateFunc(); // Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.FadeCurve__UpdateFunc // BlueprintEvent // @ game+0x1848130
	void OnActivateShimmer(); // Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.OnActivateShimmer // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnDeactivateShimmer(); // Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.OnDeactivateShimmer // Event|Public|BlueprintEvent // @ game+0x1848130
	void Shimmer_FadeIn(); // Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.Shimmer_FadeIn // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void Shimmer_FadeOut(); // Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.Shimmer_FadeOut // BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_SKD_ShrineShimmer(int32_t EntryPoint); // Function BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C.ExecuteUbergraph_BP_SKD_ShrineShimmer //  // @ game+0x1848130
};

