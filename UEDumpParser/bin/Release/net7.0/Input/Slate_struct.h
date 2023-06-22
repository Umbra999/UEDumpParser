// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t {
	Auto,
	LeftToRight,
	RightToLeft,
	ETextFlowDirection_MAX,
};

// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t {
	DefaultWrapping,
	AllowPerCharacterWrapping,
	ETextWrappingPolicy_MAX,
};

// Enum Slate.ETextJustify
enum class ETextJustify : uint8_t {
	Left,
	Center,
	Right,
	ETextJustify_MAX,
};

// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t {
	List,
	Tile,
	Tree,
	ETableViewMode_MAX,
};

// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t {
	None,
	Single,
	SingleToggle,
	Multi,
	ESelectionMode_MAX,
};

// Enum Slate.EStretch
enum class EStretch : uint8_t {
	None,
	Fill,
	ScaleToFit,
	ScaleToFitX,
	ScaleToFitY,
	ScaleToFill,
	UserSpecified,
	EStretch_MAX,
};

// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t {
	Both,
	DownOnly,
	UpOnly,
	EStretchDirection_MAX,
};

// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t {
	LeftToRight,
	RightToLeft,
	FillFromCenter,
	TopToBottom,
	BottomToTop,
	EProgressBarFillType_MAX,
};

// ScriptStruct Slate.InputChord
// Size: 0x28 (Inherited: 0x00)
struct FInputChord {
	struct FKey Key; // 0x00(0x20)
	char bShift : 1; // 0x20(0x01)
	char bCtrl : 1; // 0x20(0x01)
	char bAlt : 1; // 0x20(0x01)
	char bCmd : 1; // 0x20(0x01)
	char UnknownData_20_4 : 4; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Slate.Anchors
// Size: 0x10 (Inherited: 0x00)
struct FAnchors {
	struct FVector2D Minimum; // 0x00(0x08)
	struct FVector2D Maximum; // 0x08(0x08)
};

