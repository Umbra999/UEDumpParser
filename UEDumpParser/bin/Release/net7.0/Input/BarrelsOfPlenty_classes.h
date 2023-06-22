// Class BarrelsOfPlenty.BarrelsOfPlentyDebugSpawnLocation
// Size: 0x3e8 (Inherited: 0x3c8)
struct ABarrelsOfPlentyDebugSpawnLocation : AActor {
	struct TArray<struct FBarrelsOfPlentyDebugLocationEntry> Objects; // 0x3c8(0x10)
	struct FVector SpawnCentre; // 0x3d8(0x0c)
	float Radius; // 0x3e4(0x04)
};

// Class BarrelsOfPlenty.BarrelsOfPlentySpawnProxy
// Size: 0x3f0 (Inherited: 0x3c8)
struct ABarrelsOfPlentySpawnProxy : AActor {
	struct AShip* Ship; // 0x3c8(0x08)
	char UnknownData_3D0[0x18]; // 0x3d0(0x18)
	struct USceneComponent* SceneComponent; // 0x3e8(0x08)
};

// Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStep
// Size: 0x98 (Inherited: 0x98)
struct USpawnBarrelsOfPlentyStep : UTaleQuestStep {
};

// Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct USpawnBarrelsOfPlentyStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableVector LocatorVar; // 0x80(0x30)
};

