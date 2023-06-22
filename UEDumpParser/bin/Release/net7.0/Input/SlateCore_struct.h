// Enum SlateCore.EFontLanguage
enum class EFontLanguage : uint8_t {
	German,
	English,
	Spanish,
	Mexican,
	French,
	Italian,
	Korean,
	Polish,
	Portuguese,
	Russian,
	SimplifiedChinese,
	TraditionalChinese,
	Japanese,
	Thai,
	Turkish,
	COUNT,
	EFontLanguage_MAX,
};

// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t {
	Default,
	Auto,
	AutoLight,
	Monochrome,
	None,
	EFontHinting_MAX,
};

// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t {
	OnKeyPress,
	OnNavigation,
	OnMouseClick,
	Direct,
	ESelectInfo_MAX,
};

// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t {
	Default,
	OnEnter,
	OnUserMovedFocus,
	OnCleared,
	ETextCommit_MAX,
};

// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t {
	Scroll_Down,
	Scroll_Up,
	Scroll_MAX,
};

// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t {
	Orient_Horizontal,
	Orient_Vertical,
	Orient_MAX,
};

// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t {
	MenuPlacement_BelowAnchor,
	MenuPlacement_CenteredBelowAnchor,
	MenuPlacement_ComboBox,
	MenuPlacement_ComboBoxRight,
	MenuPlacement_MenuRight,
	MenuPlacement_AboveAnchor,
	MenuPlacement_CenteredAboveAnchor,
	MenuPlacement_MenuLeft,
	MenuPlacement_MAX,
};

// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t {
	VAlign_Fill,
	VAlign_Top,
	VAlign_Center,
	VAlign_Bottom,
	VAlign_MAX,
};

// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t {
	HAlign_Fill,
	HAlign_Left,
	HAlign_Center,
	HAlign_Right,
	HAlign_MAX,
};

// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t {
	Left,
	Right,
	Up,
	Down,
	Next,
	Previous,
	Num,
	Invalid,
	EUINavigation_MAX,
};

// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t {
	DownAndUp,
	ButtonPress,
	ButtonRelease,
	EButtonPressMethod_MAX,
};

// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t {
	DownAndUp,
	PreciseTap,
	EButtonTouchMethod_MAX,
};

// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t {
	DownAndUp,
	MouseDown,
	MouseUp,
	PreciseClick,
	EButtonClickMethod_MAX,
};

// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t {
	UseColor_Specified,
	UseColor_Specified_Link,
	UseColor_Foreground,
	UseColor_Foreground_Subdued,
	UseColor_MAX,
};

// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t {
	NoImage,
	FullColor,
	Linear,
	ESlateBrushImageType_MAX,
};

// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t {
	NoMirror,
	Horizontal,
	Vertical,
	Both,
	ESlateBrushMirrorType_MAX,
};

// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t {
	NoTile,
	Horizontal,
	Vertical,
	Both,
	ESlateBrushTileType_MAX,
};

// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t {
	NoDrawType,
	Box,
	Border,
	Image,
	ESlateBrushDrawType_MAX,
};

// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t {
	Unchecked,
	Checked,
	Undetermined,
	ECheckBoxState_MAX,
};

// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t {
	CheckBox,
	ToggleButton,
	ESlateCheckBoxType_MAX,
};

// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t {
	WhenScrollingPossible,
	Always,
	EConsumeMouseWheel_MAX,
};

// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t {
	Mouse,
	Navigation,
	SetDirectly,
	Cleared,
	OtherWidgetLostFocus,
	WindowActivate,
	EFocusCause_MAX,
};

// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t {
	Escape,
	Explicit,
	Wrap,
	Stop,
	Custom,
	Invalid,
	EUINavigationRule_MAX,
};

// ScriptStruct SlateCore.SlateBrush
// Size: 0x90 (Inherited: 0x00)
struct FSlateBrush {
	struct FVector2D ImageSize; // 0x00(0x08)
	char DrawAs; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FMargin Margin; // 0x0c(0x10)
	struct FLinearColor Tint; // 0x1c(0x10)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FSlateColor TintColor; // 0x30(0x30)
	char Tiling; // 0x60(0x01)
	char Mirroring; // 0x61(0x01)
	char ImageType; // 0x62(0x01)
	char UnknownData_63[0x5]; // 0x63(0x05)
	struct UObject* ResourceObject; // 0x68(0x08)
	struct FName ResourceName; // 0x70(0x08)
	bool bIsDynamicallyLoaded; // 0x78(0x01)
	bool bHasUObject; // 0x79(0x01)
	char UnknownData_7A[0x2]; // 0x7a(0x02)
	struct FBox2D UVRegion; // 0x7c(0x14)
};

// ScriptStruct SlateCore.SlateColor
// Size: 0x30 (Inherited: 0x00)
struct FSlateColor {
	struct FLinearColor SpecifiedColor; // 0x00(0x10)
	char ColorUseRule; // 0x10(0x01)
	char UnknownData_11[0x1f]; // 0x11(0x1f)
};

// ScriptStruct SlateCore.Margin
// Size: 0x10 (Inherited: 0x00)
struct FMargin {
	float Left; // 0x00(0x04)
	float Top; // 0x04(0x04)
	float Right; // 0x08(0x04)
	float Bottom; // 0x0c(0x04)
};

// ScriptStruct SlateCore.PointerEvent
// Size: 0x88 (Inherited: 0x28)
struct FPointerEvent : FInputEvent {
	char UnknownData_28[0x60]; // 0x28(0x60)
};

// ScriptStruct SlateCore.InputEvent
// Size: 0x28 (Inherited: 0x00)
struct FInputEvent {
	char UnknownData_0[0x28]; // 0x00(0x28)
};

// ScriptStruct SlateCore.Geometry
// Size: 0x34 (Inherited: 0x00)
struct FGeometry {
	char UnknownData_0[0x34]; // 0x00(0x34)
};

// ScriptStruct SlateCore.ComboBoxStyle
// Size: 0x428 (Inherited: 0x08)
struct FComboBoxStyle : FSlateWidgetStyle {
	struct FComboButtonStyle ComboButtonStyle; // 0x08(0x3e0)
	struct FSlateSound PressedSlateSound; // 0x3e8(0x18)
	struct FSlateSound SelectionChangeSlateSound; // 0x400(0x18)
	struct FName PressedSound; // 0x418(0x08)
	struct FName SelectionChangeSound; // 0x420(0x08)
};

// ScriptStruct SlateCore.SlateWidgetStyle
// Size: 0x08 (Inherited: 0x00)
struct FSlateWidgetStyle {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.SlateSound
// Size: 0x18 (Inherited: 0x00)
struct FSlateSound {
	struct UObject* ResourceObject; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct SlateCore.ComboButtonStyle
// Size: 0x3e0 (Inherited: 0x08)
struct FComboButtonStyle : FSlateWidgetStyle {
	struct FButtonStyle ButtonStyle; // 0x08(0x2a8)
	struct FSlateBrush DownArrowImage; // 0x2b0(0x90)
	struct FSlateBrush MenuBorderBrush; // 0x340(0x90)
	struct FMargin MenuBorderPadding; // 0x3d0(0x10)
};

// ScriptStruct SlateCore.ButtonStyle
// Size: 0x2a8 (Inherited: 0x08)
struct FButtonStyle : FSlateWidgetStyle {
	struct FSlateBrush Normal; // 0x08(0x90)
	struct FSlateBrush Hovered; // 0x98(0x90)
	struct FSlateBrush Pressed; // 0x128(0x90)
	struct FSlateBrush Disabled; // 0x1b8(0x90)
	struct FMargin NormalPadding; // 0x248(0x10)
	struct FMargin PressedPadding; // 0x258(0x10)
	struct FSlateSound PressedSlateSound; // 0x268(0x18)
	struct FSlateSound HoveredSlateSound; // 0x280(0x18)
	struct FName PressedSound; // 0x298(0x08)
	struct FName HoveredSound; // 0x2a0(0x08)
};

// ScriptStruct SlateCore.SlateFontInfo
// Size: 0x40 (Inherited: 0x00)
struct FSlateFontInfo {
	struct UObject* FontObject; // 0x00(0x08)
	struct UObject* FontMaterial; // 0x08(0x08)
	char UnknownData_10[0x18]; // 0x10(0x18)
	struct FName TypefaceFontName; // 0x28(0x08)
	int32_t Size; // 0x30(0x04)
	struct FName FontName; // 0x34(0x08)
	char Hinting; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct SlateCore.EditableTextStyle
// Size: 0x228 (Inherited: 0x08)
struct FEditableTextStyle : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x40)
	struct FSlateColor ColorAndOpacity; // 0x48(0x30)
	struct FSlateBrush BackgroundImageSelected; // 0x78(0x90)
	struct FSlateBrush BackgroundImageComposing; // 0x108(0x90)
	struct FSlateBrush CaretImage; // 0x198(0x90)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// Size: 0x860 (Inherited: 0x08)
struct FEditableTextBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImageNormal; // 0x08(0x90)
	struct FSlateBrush BackgroundImageHovered; // 0x98(0x90)
	struct FSlateBrush BackgroundImageFocused; // 0x128(0x90)
	struct FSlateBrush BackgroundImageReadOnly; // 0x1b8(0x90)
	struct FMargin Padding; // 0x248(0x10)
	struct FSlateFontInfo Font; // 0x258(0x40)
	struct FSlateColor ForegroundColor; // 0x298(0x30)
	struct FSlateColor BackgroundColor; // 0x2c8(0x30)
	struct FSlateColor ReadOnlyForegroundColor; // 0x2f8(0x30)
	struct FMargin HScrollBarPadding; // 0x328(0x10)
	struct FMargin VScrollBarPadding; // 0x338(0x10)
	struct FScrollBarStyle ScrollBarStyle; // 0x348(0x518)
};

// ScriptStruct SlateCore.ScrollBarStyle
// Size: 0x518 (Inherited: 0x08)
struct FScrollBarStyle : FSlateWidgetStyle {
	struct FSlateBrush HorizontalBackgroundImage; // 0x08(0x90)
	struct FSlateBrush VerticalBackgroundImage; // 0x98(0x90)
	struct FSlateBrush VerticalTopSlotImage; // 0x128(0x90)
	struct FSlateBrush HorizontalTopSlotImage; // 0x1b8(0x90)
	struct FSlateBrush VerticalBottomSlotImage; // 0x248(0x90)
	struct FSlateBrush HorizontalBottomSlotImage; // 0x2d8(0x90)
	struct FSlateBrush NormalThumbImage; // 0x368(0x90)
	struct FSlateBrush HoveredThumbImage; // 0x3f8(0x90)
	struct FSlateBrush DraggedThumbImage; // 0x488(0x90)
};

// ScriptStruct SlateCore.TextBlockStyle
// Size: 0x160 (Inherited: 0x08)
struct FTextBlockStyle : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x40)
	struct FSlateColor ColorAndOpacity; // 0x48(0x30)
	struct FVector2D ShadowOffset; // 0x78(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x80(0x10)
	struct FSlateColor SelectedBackgroundColor; // 0x90(0x30)
	struct FLinearColor HighlightColor; // 0xc0(0x10)
	struct FSlateBrush HighlightShape; // 0xd0(0x90)
};

// ScriptStruct SlateCore.SpinBoxStyle
// Size: 0x318 (Inherited: 0x08)
struct FSpinBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; // 0x08(0x90)
	struct FSlateBrush HoveredBackgroundBrush; // 0x98(0x90)
	struct FSlateBrush ActiveFillBrush; // 0x128(0x90)
	struct FSlateBrush InactiveFillBrush; // 0x1b8(0x90)
	struct FSlateBrush ArrowsImage; // 0x248(0x90)
	struct FSlateColor ForegroundColor; // 0x2d8(0x30)
	struct FMargin TextPadding; // 0x308(0x10)
};

// ScriptStruct SlateCore.CompositeFont
// Size: 0x28 (Inherited: 0x00)
struct FCompositeFont {
	struct FTypeface DefaultTypeface; // 0x00(0x10)
	struct TArray<struct FCompositeSubFont> SubTypefaces; // 0x10(0x10)
	char UnknownData_20[0x8]; // 0x20(0x08)
};

// ScriptStruct SlateCore.CompositeSubFont
// Size: 0x38 (Inherited: 0x00)
struct FCompositeSubFont {
	struct FTypeface Typeface; // 0x00(0x10)
	struct TArray<struct FInt32Range> CharacterRanges; // 0x10(0x10)
	struct TArray<char> Languages; // 0x20(0x10)
	float ScalingFactor; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct SlateCore.Typeface
// Size: 0x10 (Inherited: 0x00)
struct FTypeface {
	struct TArray<struct FTypefaceEntry> Fonts; // 0x00(0x10)
};

// ScriptStruct SlateCore.TypefaceEntry
// Size: 0x38 (Inherited: 0x00)
struct FTypefaceEntry {
	struct FName Name; // 0x00(0x08)
	struct FFontData Font; // 0x08(0x30)
};

// ScriptStruct SlateCore.FontData
// Size: 0x30 (Inherited: 0x00)
struct FFontData {
	struct FString FontFilename; // 0x00(0x10)
	struct UFontBulkData* BulkDataPtr; // 0x10(0x08)
	char Hinting; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct TArray<char> FontData; // 0x20(0x10)
};

// ScriptStruct SlateCore.WindowStyle
// Size: 0x1028 (Inherited: 0x08)
struct FWindowStyle : FSlateWidgetStyle {
	struct FButtonStyle MinimizeButtonStyle; // 0x08(0x2a8)
	struct FButtonStyle MaximizeButtonStyle; // 0x2b0(0x2a8)
	struct FButtonStyle RestoreButtonStyle; // 0x558(0x2a8)
	struct FButtonStyle CloseButtonStyle; // 0x800(0x2a8)
	struct FTextBlockStyle TitleTextStyle; // 0xaa8(0x160)
	struct FSlateBrush ActiveTitleBrush; // 0xc08(0x90)
	struct FSlateBrush InactiveTitleBrush; // 0xc98(0x90)
	struct FSlateBrush FlashTitleBrush; // 0xd28(0x90)
	struct FSlateBrush OutlineBrush; // 0xdb8(0x90)
	struct FSlateColor OutlineColor; // 0xe48(0x30)
	struct FSlateBrush BorderBrush; // 0xe78(0x90)
	struct FSlateBrush BackgroundBrush; // 0xf08(0x90)
	struct FSlateBrush ChildBackgroundBrush; // 0xf98(0x90)
};

// ScriptStruct SlateCore.ScrollBorderStyle
// Size: 0x128 (Inherited: 0x08)
struct FScrollBorderStyle : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
};

// ScriptStruct SlateCore.ScrollBoxStyle
// Size: 0x248 (Inherited: 0x08)
struct FScrollBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
	struct FSlateBrush LeftShadowBrush; // 0x128(0x90)
	struct FSlateBrush RightShadowBrush; // 0x1b8(0x90)
};

// ScriptStruct SlateCore.DockTabStyle
// Size: 0x6e8 (Inherited: 0x08)
struct FDockTabStyle : FSlateWidgetStyle {
	struct FButtonStyle CloseButtonStyle; // 0x08(0x2a8)
	struct FSlateBrush NormalBrush; // 0x2b0(0x90)
	struct FSlateBrush ActiveBrush; // 0x340(0x90)
	struct FSlateBrush ColorOverlayBrush; // 0x3d0(0x90)
	struct FSlateBrush ForegroundBrush; // 0x460(0x90)
	struct FSlateBrush HoveredBrush; // 0x4f0(0x90)
	struct FSlateBrush ContentAreaBrush; // 0x580(0x90)
	struct FSlateBrush TabWellBrush; // 0x610(0x90)
	struct FMargin TabPadding; // 0x6a0(0x10)
	float OverlapWidth; // 0x6b0(0x04)
	char UnknownData_6B4[0x4]; // 0x6b4(0x04)
	struct FSlateColor FlashColor; // 0x6b8(0x30)
};

// ScriptStruct SlateCore.HeaderRowStyle
// Size: 0xc20 (Inherited: 0x08)
struct FHeaderRowStyle : FSlateWidgetStyle {
	struct FTableColumnHeaderStyle ColumnStyle; // 0x08(0x518)
	struct FTableColumnHeaderStyle LastColumnStyle; // 0x520(0x518)
	struct FSplitterStyle ColumnSplitterStyle; // 0xa38(0x128)
	struct FSlateBrush BackgroundBrush; // 0xb60(0x90)
	struct FSlateColor ForegroundColor; // 0xbf0(0x30)
};

// ScriptStruct SlateCore.SplitterStyle
// Size: 0x128 (Inherited: 0x08)
struct FSplitterStyle : FSlateWidgetStyle {
	struct FSlateBrush HandleNormalBrush; // 0x08(0x90)
	struct FSlateBrush HandleHighlightBrush; // 0x98(0x90)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// Size: 0x518 (Inherited: 0x08)
struct FTableColumnHeaderStyle : FSlateWidgetStyle {
	struct FSlateBrush SortPrimaryAscendingImage; // 0x08(0x90)
	struct FSlateBrush SortPrimaryDescendingImage; // 0x98(0x90)
	struct FSlateBrush SortSecondaryAscendingImage; // 0x128(0x90)
	struct FSlateBrush SortSecondaryDescendingImage; // 0x1b8(0x90)
	struct FSlateBrush NormalBrush; // 0x248(0x90)
	struct FSlateBrush HoveredBrush; // 0x2d8(0x90)
	struct FSlateBrush MenuDropdownImage; // 0x368(0x90)
	struct FSlateBrush MenuDropdownNormalBorderBrush; // 0x3f8(0x90)
	struct FSlateBrush MenuDropdownHoveredBorderBrush; // 0x488(0x90)
};

// ScriptStruct SlateCore.TableRowStyle
// Size: 0x728 (Inherited: 0x08)
struct FTableRowStyle : FSlateWidgetStyle {
	struct FSlateBrush SelectorFocusedBrush; // 0x08(0x90)
	struct FSlateBrush ActiveHoveredBrush; // 0x98(0x90)
	struct FSlateBrush ActiveBrush; // 0x128(0x90)
	struct FSlateBrush InactiveHoveredBrush; // 0x1b8(0x90)
	struct FSlateBrush InactiveBrush; // 0x248(0x90)
	struct FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2d8(0x90)
	struct FSlateBrush EvenRowBackgroundBrush; // 0x368(0x90)
	struct FSlateBrush OddRowBackgroundHoveredBrush; // 0x3f8(0x90)
	struct FSlateBrush OddRowBackgroundBrush; // 0x488(0x90)
	struct FSlateColor TextColor; // 0x518(0x30)
	struct FSlateColor SelectedTextColor; // 0x548(0x30)
	struct FSlateBrush DropIndicator_Above; // 0x578(0x90)
	struct FSlateBrush DropIndicator_Onto; // 0x608(0x90)
	struct FSlateBrush DropIndicator_Below; // 0x698(0x90)
};

// ScriptStruct SlateCore.InlineTextImageStyle
// Size: 0xa0 (Inherited: 0x08)
struct FInlineTextImageStyle : FSlateWidgetStyle {
	struct FSlateBrush Image; // 0x08(0x90)
	int16_t Baseline; // 0x98(0x02)
	char UnknownData_9A[0x6]; // 0x9a(0x06)
};

// ScriptStruct SlateCore.VolumeControlStyle
// Size: 0x520 (Inherited: 0x08)
struct FVolumeControlStyle : FSlateWidgetStyle {
	struct FSliderStyle SliderStyle; // 0x08(0x248)
	struct FSlateBrush HighVolumeImage; // 0x250(0x90)
	struct FSlateBrush MidVolumeImage; // 0x2e0(0x90)
	struct FSlateBrush LowVolumeImage; // 0x370(0x90)
	struct FSlateBrush NoVolumeImage; // 0x400(0x90)
	struct FSlateBrush MutedImage; // 0x490(0x90)
};

// ScriptStruct SlateCore.SliderStyle
// Size: 0x248 (Inherited: 0x08)
struct FSliderStyle : FSlateWidgetStyle {
	struct FSlateBrush NormalBarImage; // 0x08(0x90)
	struct FSlateBrush DisabledBarImage; // 0x98(0x90)
	struct FSlateBrush NormalThumbImage; // 0x128(0x90)
	struct FSlateBrush DisabledThumbImage; // 0x1b8(0x90)
};

// ScriptStruct SlateCore.SearchBoxStyle
// Size: 0xb00 (Inherited: 0x08)
struct FSearchBoxStyle : FSlateWidgetStyle {
	struct FEditableTextBoxStyle TextBoxStyle; // 0x08(0x860)
	struct FSlateFontInfo ActiveFontInfo; // 0x868(0x40)
	struct FSlateBrush UpArrowImage; // 0x8a8(0x90)
	struct FSlateBrush DownArrowImage; // 0x938(0x90)
	struct FSlateBrush GlassImage; // 0x9c8(0x90)
	struct FSlateBrush ClearImage; // 0xa58(0x90)
	struct FMargin ImagePadding; // 0xae8(0x10)
	bool bLeftAlignButtons; // 0xaf8(0x01)
	char UnknownData_AF9[0x7]; // 0xaf9(0x07)
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// Size: 0x128 (Inherited: 0x08)
struct FExpandableAreaStyle : FSlateWidgetStyle {
	struct FSlateBrush CollapsedImage; // 0x08(0x90)
	struct FSlateBrush ExpandedImage; // 0x98(0x90)
};

// ScriptStruct SlateCore.ProgressBarStyle
// Size: 0x1b8 (Inherited: 0x08)
struct FProgressBarStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImage; // 0x08(0x90)
	struct FSlateBrush FillImage; // 0x98(0x90)
	struct FSlateBrush MarqueeImage; // 0x128(0x90)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0x9c8 (Inherited: 0x08)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	struct FEditableTextBoxStyle EditableTextBoxStyle; // 0x08(0x860)
	struct FTextBlockStyle TextStyle; // 0x868(0x160)
};

// ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x420 (Inherited: 0x08)
struct FHyperlinkStyle : FSlateWidgetStyle {
	struct FButtonStyle UnderlineStyle; // 0x08(0x2a8)
	struct FTextBlockStyle TextStyle; // 0x2b0(0x160)
	struct FMargin Padding; // 0x410(0x10)
};

// ScriptStruct SlateCore.CheckBoxStyle
// Size: 0x5f0 (Inherited: 0x08)
struct FCheckBoxStyle : FSlateWidgetStyle {
	char CheckBoxType; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FSlateBrush UncheckedImage; // 0x10(0x90)
	struct FSlateBrush UncheckedHoveredImage; // 0xa0(0x90)
	struct FSlateBrush UncheckedPressedImage; // 0x130(0x90)
	struct FSlateBrush CheckedImage; // 0x1c0(0x90)
	struct FSlateBrush CheckedHoveredImage; // 0x250(0x90)
	struct FSlateBrush CheckedPressedImage; // 0x2e0(0x90)
	struct FSlateBrush UndeterminedImage; // 0x370(0x90)
	struct FSlateBrush UndeterminedHoveredImage; // 0x400(0x90)
	struct FSlateBrush UndeterminedPressedImage; // 0x490(0x90)
	struct FMargin Padding; // 0x520(0x10)
	struct FSlateColor ForegroundColor; // 0x530(0x30)
	struct FSlateColor BorderBackgroundColor; // 0x560(0x30)
	struct FSlateSound CheckedSlateSound; // 0x590(0x18)
	struct FSlateSound UncheckedSlateSound; // 0x5a8(0x18)
	struct FSlateSound HoveredSlateSound; // 0x5c0(0x18)
	struct FName CheckedSound; // 0x5d8(0x08)
	struct FName UncheckedSound; // 0x5e0(0x08)
	struct FName HoveredSound; // 0x5e8(0x08)
};

// ScriptStruct SlateCore.NavigationEvent
// Size: 0x30 (Inherited: 0x28)
struct FNavigationEvent : FInputEvent {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct SlateCore.MotionEvent
// Size: 0x58 (Inherited: 0x28)
struct FMotionEvent : FInputEvent {
	char UnknownData_28[0x30]; // 0x28(0x30)
};

// ScriptStruct SlateCore.ControllerEvent
// Size: 0x50 (Inherited: 0x28)
struct FControllerEvent : FInputEvent {
	char UnknownData_28[0x28]; // 0x28(0x28)
};

// ScriptStruct SlateCore.CharacterEvent
// Size: 0x30 (Inherited: 0x28)
struct FCharacterEvent : FInputEvent {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct SlateCore.AnalogInputEvent
// Size: 0x58 (Inherited: 0x50)
struct FAnalogInputEvent : FKeyEvent {
	char UnknownData_50[0x8]; // 0x50(0x08)
};

// ScriptStruct SlateCore.KeyEvent
// Size: 0x50 (Inherited: 0x28)
struct FKeyEvent : FInputEvent {
	char UnknownData_28[0x28]; // 0x28(0x28)
};

// ScriptStruct SlateCore.FocusEvent
// Size: 0x08 (Inherited: 0x00)
struct FFocusEvent {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

