// Enum CoherentUIGTPlugin.ECoherentUIGTKeys
enum class ECoherentUIGTKeys : uint8_t {
	LeftMouseButton,
	RightMouseButton,
	MiddleMouseButton,
	ThumbMouseButton,
	ThumbMouseButton2,
	BackSpace,
	Tab,
	Enter,
	Pause,
	CapsLock,
	Escape,
	SpaceBar,
	PageUp,
	PageDown,
	End,
	Home,
	Left,
	Up,
	Right,
	Down,
	Insert,
	Delete,
	Zero,
	One,
	Two,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	A,
	B,
	C,
	D,
	E,
	F,
	G,
	H,
	I,
	J,
	K,
	L,
	M,
	N,
	O,
	P,
	Q,
	R,
	S,
	T,
	U,
	V,
	W,
	X,
	Y,
	Z,
	NumPadZero,
	NumPadOne,
	NumPadTwo,
	NumPadThree,
	NumPadFour,
	NumPadFive,
	NumPadSix,
	NumPadSeven,
	NumPadEight,
	NumPadNine,
	Multiply,
	Add,
	Subtract,
	Decimal,
	Divide,
	F1,
	F2,
	F3,
	F4,
	F5,
	F6,
	F7,
	F8,
	F9,
	F10,
	F11,
	F12,
	Gamepad_Special_Left,
	Gamepad_Special_Right,
	MouseScrollUp,
	MouseScrollDown,
	Gamepad_RightStick_Left,
	Gamepad_RightStick_Up,
	Gamepad_RightStick_Right,
	Gamepad_RightStick_Down,
	NumLock,
	ScrollLock,
	LeftShift,
	RightShift,
	LeftControl,
	RightControl,
	LeftAlt,
	RightAlt,
	LeftCommand,
	RightCommand,
	Semicolon,
	Equals,
	Comma,
	Underscore,
	Period,
	Slash,
	Tilde,
	LeftBracket,
	Backslash,
	RightBracket,
	Quote,
	Unknown,
	ECoherentUIGTKeys_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8_t {
	None,
	Keyboard,
	Joystick,
	KeyboardAndJoystick,
	ECoherentUIGTInputPropagationBehaviour_MAX,
};

// Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
enum class EGamepadBehaviourOnFocusLost : uint8_t {
	ResetState,
	UseCurrentState,
	UseStateBeforeReset,
	EGamepadBehaviourOnFocusLost_MAX,
};

// Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
enum class EGTInputWidgetLineTraceMode : uint8_t {
	GTInputLineTrace_Single,
	GTInputLineTrace_Multi,
	GTInputLineTrace_MAX,
};

// Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
enum class EGTInputWidgetRaycastQuality : uint8_t {
	RaycastQuality_Fast,
	RaycastQuality_Balanced,
	RaycastQuality_Accurate,
	RaycastQuality_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class ECoherentUIGTMSAA : uint8_t {
	MSAA_1x,
	MSAA_2x,
	MSAA_4x,
	MSAA_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8_t {
	Trace,
	Debug,
	Info,
	Warning,
	AssertFailure,
	Error,
	ECoherentUIGTSettingsSeverity_MAX,
};

// ScriptStruct CoherentUIGTPlugin.CoherentUIGTLoadingScreenSettings
// Size: 0x18 (Inherited: 0x00)
struct FCoherentUIGTLoadingScreenSettings {
	float MinimumLoadingScreenDisplayTime; // 0x00(0x04)
	bool bAutoCompleteWhenLoadingCompletes; // 0x04(0x01)
	bool bWaitForManualStop; // 0x05(0x01)
	char UnknownData_6[0x2]; // 0x06(0x02)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct CoherentUIGTPlugin.CoherentUIGTViewInfo
// Size: 0x14 (Inherited: 0x00)
struct FCoherentUIGTViewInfo {
	int32_t Width; // 0x00(0x04)
	int32_t Height; // 0x04(0x04)
	bool IsTransparent; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float ClickThroughAlphaThreshold; // 0x0c(0x04)
	float AnimationFrameDefer; // 0x10(0x04)
};

