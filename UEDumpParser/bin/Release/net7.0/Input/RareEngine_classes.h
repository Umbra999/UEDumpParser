// Class RareEngine.RareGameEngine
// Size: 0xa88 (Inherited: 0xa30)
struct URareGameEngine : UGameEngine {
	char UnknownData_A30[0x58]; // 0xa30(0x58)
};

// Class RareEngine.AssetReferencer
// Size: 0x38 (Inherited: 0x28)
struct UAssetReferencer : UDataAsset {
	struct TArray<struct UObject*> AssetsToReference; // 0x28(0x10)
};

// Class RareEngine.AudioHardwareDeviceService
// Size: 0x40 (Inherited: 0x28)
struct UAudioHardwareDeviceService : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)
};

// Class RareEngine.HitchDiagnosisBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHitchDiagnosisBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void SetHitchThreshold(int32_t InThreshold); // Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold // Final|Native|Static|Public|BlueprintCallable // @ game+0x31d6fe0
	struct FString GetMaxHitchNameThisFrame(); // Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x31d6f40
	int32_t GetMaxHitchLengthThisFrameMs(); // Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x31d6f10
	void DumpThisFramesHitchesToLog(); // Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog // Final|Native|Static|Public|BlueprintCallable // @ game+0x31d6af0
	bool DidHitchOccurThisFrame(); // Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x31d6ac0
};

// Class RareEngine.MemoryUsageVisualiserSettings
// Size: 0x38 (Inherited: 0x28)
struct UMemoryUsageVisualiserSettings : UObject {
	struct TArray<struct FMemoryVisualiserCategory> VisualiserCategories; // 0x28(0x10)
};

// Class RareEngine.RareHUD
// Size: 0x4c0 (Inherited: 0x4c0)
struct ARareHUD : AHUD {
};

// Class RareEngine.StallDetector
// Size: 0x50 (Inherited: 0x28)
struct UStallDetector : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FMulticastDelegate Callback; // 0x30(0x10)
	char UnknownData_40[0x10]; // 0x40(0x10)

	void Deactivate(); // Function RareEngine.StallDetector.Deactivate // Final|Native|Public|BlueprintCallable // @ game+0x31d6aa0
	struct UStallDetector* CreateStallDetector(float Delay, bool CreateActive); // Function RareEngine.StallDetector.CreateStallDetector // Final|Native|Static|Public|BlueprintCallable // @ game+0x31d69d0
	void Activate(); // Function RareEngine.StallDetector.Activate // Final|Native|Public|BlueprintCallable // @ game+0x31d69b0
};

// Class RareEngine.StaticMeshActorBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UStaticMeshActorBlueprintLibrary : UBlueprintFunctionLibrary {

	void FindAllStaticMeshComponents(struct UObject* WorldContextObject, struct TArray<struct UStaticMesh*> MeshFilter, struct TArray<struct FStaticMeshComponentList> OutComponentLists, struct ULevel* RestrictToLevel); // Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x31d6d10
	void FindAllStaticMeshActors(struct UObject* WorldContextObject, struct TArray<struct UStaticMesh*> MeshFilter, struct TArray<struct FStaticMeshActorList> OutActorLists, struct ULevel* RestrictToLevel); // Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x31d6b10
};

