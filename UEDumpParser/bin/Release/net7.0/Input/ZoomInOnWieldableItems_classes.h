// Class ZoomInOnWieldableItems.ZoomedInOnWieldableItemActionStateId
// Size: 0x28 (Inherited: 0x28)
struct UZoomedInOnWieldableItemActionStateId : UActionStateId {
};

// Class ZoomInOnWieldableItems.ZoomInOnWieldableItemComponent
// Size: 0x128 (Inherited: 0xc8)
struct UZoomInOnWieldableItemComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct FName FeatureName; // 0xd0(0x08)
	float ZoomedInFov; // 0xd8(0x04)
	float FreelookPitch; // 0xdc(0x04)
	float FreelookYaw; // 0xe0(0x04)
	float FreelookOutInterpolationRate; // 0xe4(0x04)
	float LookSensitivityScaler; // 0xe8(0x04)
	char UnknownData_EC[0x3c]; // 0xec(0x3c)
};

