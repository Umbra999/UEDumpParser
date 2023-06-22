// Class TrinketFramework.TrinketLoadoutFinderPolicyBase
// Size: 0x28 (Inherited: 0x28)
struct UTrinketLoadoutFinderPolicyBase : UObject {
};

// Class TrinketFramework.TrinketAudioInterface
// Size: 0x28 (Inherited: 0x28)
struct UTrinketAudioInterface : UInterface {
};

// Class TrinketFramework.TrinketCategory
// Size: 0x78 (Inherited: 0x78)
struct UTrinketCategory : UCategoryBase {
};

// Class TrinketFramework.InvalidTrinketCategory
// Size: 0x78 (Inherited: 0x78)
struct UInvalidTrinketCategory : UTrinketCategory {
};

// Class TrinketFramework.TrinketDesc
// Size: 0xf8 (Inherited: 0xc8)
struct UTrinketDesc : UEntitlementDesc {
	struct FStringClassReference TrinketClass; // 0xc8(0x10)
	struct FStringClassReference PreviousItem; // 0xd8(0x10)
	struct FStringClassReference NextItem; // 0xe8(0x10)
};

// Class TrinketFramework.TrinketLoadoutControlInterface
// Size: 0x28 (Inherited: 0x28)
struct UTrinketLoadoutControlInterface : UInterface {
};

// Class TrinketFramework.SameActorTrinketLoadoutFinderPolicy
// Size: 0x38 (Inherited: 0x28)
struct USameActorTrinketLoadoutFinderPolicy : UTrinketLoadoutFinderPolicyBase {
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// Class TrinketFramework.TrinketLoadoutViewInterface
// Size: 0x28 (Inherited: 0x28)
struct UTrinketLoadoutViewInterface : UInterface {
};

// Class TrinketFramework.TrinketReplacementActor
// Size: 0x3d8 (Inherited: 0x3c8)
struct ATrinketReplacementActor : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)

	void RegisterTrinketReplacementMesh(struct AActor* ActorWithTrinkets, struct UStaticMeshComponent* ReplacementMesh); // Function TrinketFramework.TrinketReplacementActor.RegisterTrinketReplacementMesh // Final|Native|Public|BlueprintCallable // @ game+0x3643930
};

// Class TrinketFramework.TrinketSetControlInterface
// Size: 0x28 (Inherited: 0x28)
struct UTrinketSetControlInterface : UInterface {
};

// Class TrinketFramework.TrinketSfxDataAsset
// Size: 0x48 (Inherited: 0x28)
struct UTrinketSfxDataAsset : UDataAsset {
	struct UWwiseEvent* MountSfx; // 0x28(0x08)
	struct UWwiseEvent* RemoveSfx; // 0x30(0x08)
	struct UWwiseEvent* NudgeSfx; // 0x38(0x08)
	struct UWwiseEvent* StraightenSfx; // 0x40(0x08)
};

