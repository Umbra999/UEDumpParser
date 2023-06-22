// BlueprintGeneratedClass BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C
// Size: 0x47c (Inherited: 0x448)
struct ABP_WaterVolume_Optimized_C : AWaterVolume {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UStaticMeshComponent* WaterPlaneActivatationVolume; // 0x450(0x08)
	struct UFlatWaterPlaneComponent* FlatWaterPlane; // 0x458(0x08)
	struct UFlatWaterMeshComponent* FlatWaterMesh; // 0x460(0x08)
	struct USceneComponent* Root; // 0x468(0x08)
	bool SunLit; // 0x470(0x01)
	char UnknownData_471[0x3]; // 0x471(0x03)
	struct FName RippleGeneratorTag; // 0x474(0x08)

	void CollectRippleGenerators(); // Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.CollectRippleGenerators // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveActorBeginOverlap // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveActorEndOverlap // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_WaterVolume_Optimized(int32_t EntryPoint); // Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ExecuteUbergraph_BP_WaterVolume_Optimized //  // @ game+0x1848130
};

