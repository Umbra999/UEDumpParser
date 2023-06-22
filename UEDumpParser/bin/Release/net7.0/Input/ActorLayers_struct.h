// Enum ActorLayers.EActorLayerOwnership
enum class EActorLayerOwnership : uint8_t {
	Internal,
	External,
	EActorLayerOwnership_MAX,
};

// Enum ActorLayers.EActorLayerState
enum class EActorLayerState : uint8_t {
	Inactive,
	Active,
	Loading,
	EActorLayerState_MAX,
};

// ScriptStruct ActorLayers.InstancedLayer
// Size: 0x48 (Inherited: 0x00)
struct FInstancedLayer {
	struct ULayerActorsDataAsset* LayerActors; // 0x00(0x08)
	struct TArray<struct FTransform> ActorTransforms; // 0x08(0x10)
	struct TArray<struct AActor*> SpawnedActors; // 0x18(0x10)
	char UnknownData_28[0x20]; // 0x28(0x20)
};

