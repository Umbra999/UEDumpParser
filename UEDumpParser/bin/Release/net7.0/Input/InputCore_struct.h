// Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8_t {
	Touch1,
	Touch2,
	Touch3,
	Touch4,
	Touch5,
	Touch6,
	Touch7,
	Touch8,
	Touch9,
	Touch10,
	ETouchIndex_MAX,
};

// Enum InputCore.ETouchType
enum class ETouchType : uint8_t {
	Began,
	Moved,
	Stationary,
	Ended,
	NumTypes,
	ETouchType_MAX,
};

// Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t {
	None,
	XBoxOne,
	PS4,
	EConsoleForGamepadLabels_MAX,
};

// Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t {
	Left,
	Right,
	EControllerHand_MAX,
};

// ScriptStruct InputCore.Key
// Size: 0x20 (Inherited: 0x00)
struct FKey {
	struct FName KeyName; // 0x00(0x08)
	char UnknownData_8[0x18]; // 0x08(0x18)
};

