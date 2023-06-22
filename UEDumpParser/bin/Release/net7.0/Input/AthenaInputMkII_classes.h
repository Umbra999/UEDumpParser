// Class AthenaInputMkII.AutoMoveInputComponent
// Size: 0x170 (Inherited: 0x150)
struct UAutoMoveInputComponent : UInputComponent {
	char UnknownData_150[0x20]; // 0x150(0x20)
};

// Class AthenaInputMkII.AthenaCharacterBaseInputComponent
// Size: 0x298 (Inherited: 0x170)
struct UAthenaCharacterBaseInputComponent : UAutoMoveInputComponent {
	char UnknownData_170[0x128]; // 0x170(0x128)
};

// Class AthenaInputMkII.AthenaCharacterBaseInputComponentWithInterference
// Size: 0x2a0 (Inherited: 0x298)
struct UAthenaCharacterBaseInputComponentWithInterference : UAthenaCharacterBaseInputComponent {
	char UnknownData_298[0x8]; // 0x298(0x08)
};

// Class AthenaInputMkII.LookingAtWieldableInputComponent
// Size: 0x2a0 (Inherited: 0x298)
struct ULookingAtWieldableInputComponent : UAthenaCharacterBaseInputComponent {
	struct AActor* TargetWieldable; // 0x298(0x08)
};

// Class AthenaInputMkII.MovementInterferenceComponent
// Size: 0x1e0 (Inherited: 0x170)
struct UMovementInterferenceComponent : UAutoMoveInputComponent {
	char UnknownData_170[0x70]; // 0x170(0x70)
};

// Class AthenaInputMkII.ClampedFreelookXAnalogInputId
// Size: 0x38 (Inherited: 0x38)
struct UClampedFreelookXAnalogInputId : UAnalogInputId {
};

// Class AthenaInputMkII.ClampedFreelookYAnalogInputId
// Size: 0x38 (Inherited: 0x38)
struct UClampedFreelookYAnalogInputId : UAnalogInputId {
};

// Class AthenaInputMkII.ClampedFreelookMouseXInputId
// Size: 0x38 (Inherited: 0x38)
struct UClampedFreelookMouseXInputId : UAnalogInputId {
};

// Class AthenaInputMkII.ClampedFreelookMouseYInputId
// Size: 0x38 (Inherited: 0x38)
struct UClampedFreelookMouseYInputId : UAnalogInputId {
};

