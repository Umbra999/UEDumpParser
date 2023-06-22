// Class Tethering.CordRenderInterface
// Size: 0x28 (Inherited: 0x28)
struct UCordRenderInterface : UInterface {
};

// Class Tethering.CordRenderComponent
// Size: 0x660 (Inherited: 0x620)
struct UCordRenderComponent : UStaticMeshComponent {
	char UnknownData_620[0x8]; // 0x620(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> CordMaterials; // 0x628(0x10)
	float ThicknessCm; // 0x638(0x04)
	char UnknownData_63C[0x24]; // 0x63c(0x24)
};

// Class Tethering.DynamicCordRenderComponent
// Size: 0x6c0 (Inherited: 0x660)
struct UDynamicCordRenderComponent : UCordRenderComponent {
	float BoundsPadding; // 0x658(0x04)
	struct USceneComponent* EndPointA; // 0x660(0x08)
	struct USceneComponent* EndPointB; // 0x668(0x08)
	char UnknownData_674[0x4c]; // 0x674(0x4c)

	void SetCordEndPointB(struct USceneComponent* EndPointB); // Function Tethering.DynamicCordRenderComponent.SetCordEndPointB // Final|Native|Public|BlueprintCallable // @ game+0x37ef720
	void SetCordEndPointA(struct USceneComponent* EndPointA); // Function Tethering.DynamicCordRenderComponent.SetCordEndPointA // Final|Native|Public|BlueprintCallable // @ game+0x37ef6a0
};

// Class Tethering.HarpoonRenderComponent
// Size: 0x680 (Inherited: 0x660)
struct UHarpoonRenderComponent : UCordRenderComponent {
	struct TArray<struct UMaterialInstanceDynamic*> HarpoonMaterials; // 0x658(0x10)
	float LaunchAnimationDurationSecs; // 0x668(0x04)
	float HitAnimationDurationSecs; // 0x66c(0x04)
	float QuickRetractAnimationSpeed; // 0x670(0x04)
	char UnknownData_67C[0x4]; // 0x67c(0x04)
};

// Class Tethering.TetherConstraintInterface
// Size: 0x28 (Inherited: 0x28)
struct UTetherConstraintInterface : UInterface {
};

// Class Tethering.DistanceJointComponent
// Size: 0x150 (Inherited: 0xc8)
struct UDistanceJointComponent : UActorComponent {
	char UnknownData_C8[0x70]; // 0xc8(0x70)
	float MinDistance; // 0x138(0x04)
	float MaxDistance; // 0x13c(0x04)
	float SpringStiffness; // 0x140(0x04)
	float SpringDamping; // 0x144(0x04)
	bool ApplyAsSpring; // 0x148(0x01)
	bool EnforceMinDistance; // 0x149(0x01)
	bool EnforceMaxDistance; // 0x14a(0x01)
	char UnknownData_14B[0x5]; // 0x14b(0x05)
};

// Class Tethering.ShouldTetherInWorldSpaceInterface
// Size: 0x28 (Inherited: 0x28)
struct UShouldTetherInWorldSpaceInterface : UInterface {
};

// Class Tethering.TetherQueriableInterface
// Size: 0x28 (Inherited: 0x28)
struct UTetherQueriableInterface : UInterface {
};

// Class Tethering.TetherCustomisationInterface
// Size: 0x28 (Inherited: 0x28)
struct UTetherCustomisationInterface : UTetherQueriableInterface {
};

// Class Tethering.TetherInterface
// Size: 0x28 (Inherited: 0x28)
struct UTetherInterface : UInterface {
};

// Class Tethering.Tether
// Size: 0x508 (Inherited: 0x3c8)
struct ATether : AActor {
	char UnknownData_3C8[0xf8]; // 0x3c8(0xf8)
	struct USceneComponent* TetherPositionAnchorComponent; // 0x4c0(0x08)
	struct USphereComponent* SourcePhysicsHandle; // 0x4c8(0x08)
	struct USphereComponent* TargetPhysicsHandle; // 0x4d0(0x08)
	struct UDistanceJointComponent* JointComponent; // 0x4d8(0x08)
	struct AActor* SourceActor; // 0x4e0(0x08)
	struct AActor* TargetActor; // 0x4e8(0x08)
	float SlackCm; // 0x4f0(0x04)
	float MaxLengthWhenGrowing; // 0x4f4(0x04)
	char UnknownData_4F8[0x8]; // 0x4f8(0x08)
	bool HasAttached; // 0x500(0x01)
	bool HasSourceActor; // 0x501(0x01)
	bool HasTargetActor; // 0x502(0x01)
	bool IsSlackEnabled; // 0x503(0x01)
	char CurrentTetherMode; // 0x504(0x01)
	char UnknownData_505[0x3]; // 0x505(0x03)
};

// Class Tethering.TetherCustomisationComponent
// Size: 0x128 (Inherited: 0xc8)
struct UTetherCustomisationComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct USceneComponent* ComponentToTetherTo; // 0xd0(0x08)
	char UnknownData_D8[0x48]; // 0xd8(0x48)
	float MassIntertiaScale; // 0x120(0x04)
	bool CanBeTethered; // 0x124(0x01)
	bool IsMassInertiaScalingEnabled; // 0x125(0x01)
	char UnknownData_126[0x2]; // 0x126(0x02)
};

// Class Tethering.TetherInWorldSpaceComponent
// Size: 0xd0 (Inherited: 0xc8)
struct UTetherInWorldSpaceComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
};

