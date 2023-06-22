// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t {
	Visible,
	Collapsed,
	Hidden,
	HitTestInvisible,
	SelfHitTestInvisible,
	ESlateVisibility_MAX,
};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t {
	MouseDown,
	TopLeft,
	TopCenter,
	TopRight,
	CenterLeft,
	CenterCenter,
	CenterRight,
	BottomLeft,
	BottomCenter,
	BottomRight,
	EDragPivot_MAX,
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t {
	Automatic,
	Fill,
	ESlateSizeRule_MAX,
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t {
	None,
	Designing,
	ShowOutline,
	EWidgetDesignFlags_MAX,
};

// Enum UMG.EDesignPreviewSizeMode
enum class EDesignPreviewSizeMode : uint8_t {
	FillScreen,
	Custom,
	CustomOnScreen,
	Desired,
	DesiredOnScreen,
	EDesignPreviewSizeMode_MAX,
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t {
	Forward,
	Reverse,
	PingPong,
	EUMGSequencePlayMode_MAX,
};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t {
	Function,
	Property,
	EBindingKind_MAX,
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t {
	Opaque,
	Masked,
	Transparent,
	EWidgetBlendMode_MAX,
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t {
	World,
	Screen,
	EWidgetSpace_MAX,
};

// ScriptStruct UMG.EventReply
// Size: 0xe8 (Inherited: 0x00)
struct FEventReply {
	char UnknownData_0[0xe8]; // 0x00(0xe8)
};

// ScriptStruct UMG.WidgetTransform
// Size: 0x1c (Inherited: 0x00)
struct FWidgetTransform {
	struct FVector2D Translation; // 0x00(0x08)
	struct FVector2D Scale; // 0x08(0x08)
	struct FVector2D Shear; // 0x10(0x08)
	float Angle; // 0x18(0x04)
};

// ScriptStruct UMG.DynamicPropertyPath
// Size: 0x10 (Inherited: 0x00)
struct FDynamicPropertyPath {
	struct TArray<struct FPropertyPathSegment> Segments; // 0x00(0x10)
};

// ScriptStruct UMG.PropertyPathSegment
// Size: 0x20 (Inherited: 0x00)
struct FPropertyPathSegment {
	struct FName Name; // 0x00(0x08)
	int32_t ArrayIndex; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UStruct* Struct; // 0x10(0x08)
	struct UField* Field; // 0x18(0x08)
};

// ScriptStruct UMG.SlateChildSize
// Size: 0x08 (Inherited: 0x00)
struct FSlateChildSize {
	float Value; // 0x00(0x04)
	char SizeRule; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct UMG.NamedSlotBinding
// Size: 0x10 (Inherited: 0x00)
struct FNamedSlotBinding {
	struct FName Name; // 0x00(0x08)
	struct UWidget* Content; // 0x08(0x08)
};

// ScriptStruct UMG.PaintContext
// Size: 0x30 (Inherited: 0x00)
struct FPaintContext {
	char UnknownData_0[0x30]; // 0x00(0x30)
};

// ScriptStruct UMG.AnchorData
// Size: 0x28 (Inherited: 0x00)
struct FAnchorData {
	struct FMargin Offsets; // 0x00(0x10)
	struct FAnchors Anchors; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x08)
};

// ScriptStruct UMG.WidgetAnimationBinding
// Size: 0x24 (Inherited: 0x00)
struct FWidgetAnimationBinding {
	struct FName WidgetName; // 0x00(0x08)
	struct FName SlotWidgetName; // 0x08(0x08)
	struct FGuid AnimationGuid; // 0x10(0x10)
	bool bIsRootWidget; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
};

// ScriptStruct UMG.DelegateRuntimeBinding
// Size: 0x38 (Inherited: 0x00)
struct FDelegateRuntimeBinding {
	struct FString ObjectName; // 0x00(0x10)
	struct FName PropertyName; // 0x10(0x08)
	struct FName FunctionName; // 0x18(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x20(0x10)
	char Kind; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct UMG.WidgetNavigationData
// Size: 0x14 (Inherited: 0x00)
struct FWidgetNavigationData {
	char Rule; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FName WidgetToFocus; // 0x04(0x08)
	char UnknownData_C[0x8]; // 0x0c(0x08)
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// Size: 0x380 (Inherited: 0x18)
struct FMovieScene2DTransformSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x20)
	struct FRichCurve Translation[0x02]; // 0x38(0xf0)
	struct FRichCurve Rotation; // 0x128(0x78)
	struct FRichCurve Scale[0x02]; // 0x1a0(0xf0)
	struct FRichCurve Shear[0x02]; // 0x290(0xf0)
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// Size: 0x218 (Inherited: 0x18)
struct FMovieSceneMarginSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x20)
	struct FRichCurve TopCurve; // 0x38(0x78)
	struct FRichCurve LeftCurve; // 0xb0(0x78)
	struct FRichCurve RightCurve; // 0x128(0x78)
	struct FRichCurve BottomCurve; // 0x1a0(0x78)
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// Size: 0x58 (Inherited: 0x48)
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x48(0x10)
};

