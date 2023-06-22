// BlueprintGeneratedClass BP_WaterVolume.BP_WaterVolume_C
// Size: 0x484 (Inherited: 0x448)
struct ABP_WaterVolume_C : AWaterVolume {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UStaticMeshComponent* WaterPlaneActivatationVolume; // 0x450(0x08)
	struct UDynamicFlowComponent* DynamicFlow; // 0x458(0x08)
	struct UFlatWaterPlaneComponent* FlatWaterPlane; // 0x460(0x08)
	struct UFlatWaterMeshComponent* FlatWaterMesh; // 0x468(0x08)
	struct USceneComponent* Root; // 0x470(0x08)
	bool SunLit; // 0x478(0x01)
	char UnknownData_479[0x3]; // 0x479(0x03)
	struct FName RippleGeneratorTag; // 0x47c(0x08)

	void CollectRippleGenerators(); // Function BP_WaterVolume.BP_WaterVolume_C.CollectRippleGenerators // Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void UserConstructionScript(); // Function BP_WaterVolume.BP_WaterVolume_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void ReceiveBeginPlay(); // Function BP_WaterVolume.BP_WaterVolume_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_WaterVolume.BP_WaterVolume_C.ReceiveActorBeginOverlap // Event|Public|BlueprintEvent // @ game+0x1848130
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_WaterVolume.BP_WaterVolume_C.ReceiveActorEndOverlap // Event|Public|BlueprintEvent // @ game+0x1848130
	void ExecuteUbergraph_BP_WaterVolume(int32_t EntryPoint); // Function BP_WaterVolume.BP_WaterVolume_C.ExecuteUbergraph_BP_WaterVolume //  // @ game+0x1848130
};

