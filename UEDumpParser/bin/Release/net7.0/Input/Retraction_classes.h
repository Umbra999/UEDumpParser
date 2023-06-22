// Class Retraction.RetractableComponent
// Size: 0x110 (Inherited: 0xc8)
struct URetractableComponent : UActorComponent {
	char UnknownData_C8[0x38]; // 0xc8(0x38)
	struct FName FeatureToggle; // 0x100(0x08)
	struct FRetractorOrientationAdjustmentFlags OrientationAdjustmentOnRetractFlags; // 0x108(0x03)
	char RetractorBoxAxis; // 0x10b(0x01)
	bool ShouldAutoReleaseOnSuccessfulRetract; // 0x10c(0x01)
	bool MigrateAttachedWithRetractor; // 0x10d(0x01)
	bool WasSimulatingPhysicsBeforeRetract; // 0x10e(0x01)
	char UnknownData_10F[0x1]; // 0x10f(0x01)
};

// Class Retraction.RetractorInterface
// Size: 0x28 (Inherited: 0x28)
struct URetractorInterface : UInterface {
};

// Class Retraction.RetractableInterface
// Size: 0x28 (Inherited: 0x28)
struct URetractableInterface : UInterface {
};

// Class Retraction.RetractableProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct URetractableProviderInterface : UInterface {
};

// Class Retraction.RetractableFloatingBarrelComponent
// Size: 0x120 (Inherited: 0x110)
struct URetractableFloatingBarrelComponent : URetractableComponent {
	TScriptInterface<struct UBuoyancyInterface> OwnerBuoyancyInterface; // 0x110(0x10)
};

// Class Retraction.RetractorComponent
// Size: 0x128 (Inherited: 0xc8)
struct URetractorComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	TScriptInterface<struct URetractableInterface> AttachedRetractable; // 0xd0(0x10)
	char UnknownData_E0[0x30]; // 0xe0(0x30)
	struct USceneComponent* RetractDestinationComponent; // 0x110(0x08)
	struct USceneComponent* RetractingComponent; // 0x118(0x08)
	char UnknownData_120[0x8]; // 0x120(0x08)
};

