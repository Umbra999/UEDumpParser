// Class ActorLayers.ActorLayerInterface
// Size: 0x28 (Inherited: 0x28)
struct UActorLayerInterface : UInterface {
};

// Class ActorLayers.InstancedLayerComponent
// Size: 0x310 (Inherited: 0x2e0)
struct UInstancedLayerComponent : USceneComponent {
	char UnknownData_2E0[0x8]; // 0x2e0(0x08)
	struct TArray<struct FInstancedLayer> InstancedLayers; // 0x2e8(0x10)
	char UnknownData_2F8[0x18]; // 0x2f8(0x18)
};

// Class ActorLayers.LayerActorsDataAsset
// Size: 0x48 (Inherited: 0x28)
struct ULayerActorsDataAsset : UDataAsset {
	struct TArray<struct UClass*> Actors; // 0x28(0x10)
	struct TArray<struct UClass*> Items; // 0x38(0x10)
};

