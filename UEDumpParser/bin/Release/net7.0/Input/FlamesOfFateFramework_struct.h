// ScriptStruct FlamesOfFateFramework.CycleFlameOfFateSequence
// Size: 0x18 (Inherited: 0x00)
struct FCycleFlameOfFateSequence {
	struct TArray<char> FlameTypeSequence; // 0x00(0x10)
	char UnknownData_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FlamesOfFateFramework.FlameData
// Size: 0x02 (Inherited: 0x00)
struct FFlameData {
	char FlameOfFateType; // 0x00(0x01)
	bool SkipChangeAnimation; // 0x01(0x01)
};

// ScriptStruct FlamesOfFateFramework.PlayerTookFlameOfFateEvent
// Size: 0x18 (Inherited: 0x00)
struct FPlayerTookFlameOfFateEvent {
	struct ACharacter* PlayerCharacter; // 0x00(0x08)
	struct UObject* Source; // 0x08(0x08)
	char FlameOfFateType; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FlamesOfFateFramework.PlayerSetFlameOfFateEvent
// Size: 0x18 (Inherited: 0x00)
struct FPlayerSetFlameOfFateEvent {
	struct ACharacter* PlayerCharacter; // 0x00(0x08)
	struct UObject* Target; // 0x08(0x08)
	char FlameOfFateType; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FlamesOfFateFramework.SetShipFlameOfFateEvent
// Size: 0x18 (Inherited: 0x00)
struct FSetShipFlameOfFateEvent {
	char FlameOfFateType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UObject* Source; // 0x08(0x08)
	struct UObject* Ship; // 0x10(0x08)
};

// ScriptStruct FlamesOfFateFramework.SetFlameOfFateEvent
// Size: 0x10 (Inherited: 0x00)
struct FSetFlameOfFateEvent {
	char FlameOfFateType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UObject* Source; // 0x08(0x08)
};

