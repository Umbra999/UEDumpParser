// Class AsymmetricClientServerObjectsFramework.AsymmetricClientObject
// Size: 0x418 (Inherited: 0x3c8)
struct AAsymmetricClientObject : AActor {
	char UnknownData_3C8[0x18]; // 0x3c8(0x18)
	struct UBoxComponent* BaseComponent; // 0x3e0(0x08)
	struct UStaticMeshMemoryConstraintComponent* ThirdPersonMesh; // 0x3e8(0x08)
	struct UWaterInteractionComponent* WaterInteractionComponent; // 0x3f0(0x08)
	struct UBuoyancyComponent* BuoyancyComponent; // 0x3f8(0x08)
	struct USpawnDependentTrackedOwnerComponent* SpawnDependentTrackedOwnerComponent; // 0x400(0x08)
	struct FRotator RotationWhenPlacingWorldProxy; // 0x408(0x0c)
	float ZOffsetWhenPlacingWorldProxy; // 0x414(0x04)
};

// Class AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager
// Size: 0x420 (Inherited: 0x3c8)
struct AAsymmetricObjectServerManager : AActor {
	char UnknownData_3C8[0x18]; // 0x3c8(0x18)
	struct AAsymmetricClientObject* SpawnedObject; // 0x3e0(0x08)
	struct USceneComponent* SceneComponent; // 0x3e8(0x08)
	struct FStringAssetReference AsymmetricObjectAsset; // 0x3f0(0x10)
	struct UClass* ForcedAsymmetricObjectAsset; // 0x400(0x20)

	void OnRep_AsymmetricObjectAsset(); // Function AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager.OnRep_AsymmetricObjectAsset // Final|RequiredAPI|Native|Private // @ game+0x2af030
};

