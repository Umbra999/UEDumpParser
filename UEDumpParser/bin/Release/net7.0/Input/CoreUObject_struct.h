// Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t {
	CIM_Linear,
	CIM_CurveAuto,
	CIM_Constant,
	CIM_CurveUser,
	CIM_CurveBreak,
	CIM_CurveAutoClamped,
	CIM_MAX,
};

// Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t {
	Exclusive,
	Inclusive,
	Open,
	ERangeBoundTypes_MAX,
};

// Enum CoreUObject.EUnit
enum class EUnit : uint8_t {
	Micrometers,
	Millimeters,
	Centimeters,
	Meters,
	Kilometers,
	Inches,
	Feet,
	Yards,
	Miles,
	Lightyears,
	Degrees,
	Radians,
	MetersPerSecond,
	KilometersPerHour,
	MilesPerHour,
	Celsius,
	Farenheit,
	Kelvin,
	Micrograms,
	Milligrams,
	Grams,
	Kilograms,
	MetricTons,
	Ounces,
	Pounds,
	Stones,
	Newtons,
	PoundsForce,
	KilogramsForce,
	Hertz,
	Kilohertz,
	Megahertz,
	Gigahertz,
	RevolutionsPerMinute,
	Bytes,
	Kilobytes,
	Megabytes,
	Gigabytes,
	Terabytes,
	Lumens,
	Milliseconds,
	Seconds,
	Minutes,
	Hours,
	Days,
	Months,
	Years,
	Unspecified,
	EUnit_MAX,
};

// Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t {
	None,
	Default,
	TextEditBeam,
	ResizeLeftRight,
	ResizeUpDown,
	ResizeSouthEast,
	ResizeSouthWest,
	CardinalCross,
	Crosshairs,
	Hand,
	GrabHand,
	GrabHandClosed,
	SlashedCircle,
	EyeDropper,
	EMouseCursor_MAX,
};

// Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t {
	PF_Unknown,
	PF_A32B32G32R32F,
	PF_B8G8R8A8,
	PF_G8,
	PF_G16,
	PF_DXT1,
	PF_DXT3,
	PF_DXT5,
	PF_UYVY,
	PF_FloatRGB,
	PF_FloatRGBA,
	PF_DepthStencil,
	PF_ShadowDepth,
	PF_R32_FLOAT,
	PF_G16R16,
	PF_G16R16F,
	PF_G16R16F_FILTER,
	PF_G32R32F,
	PF_A2B10G10R10,
	PF_A16B16G16R16,
	PF_D24,
	PF_R16F,
	PF_R16F_FILTER,
	PF_BC5,
	PF_V8U8,
	PF_A1,
	PF_FloatR11G11B10,
	PF_A8,
	PF_R32_UINT,
	PF_R32_SINT,
	PF_PVRTC2,
	PF_PVRTC4,
	PF_R16_UINT,
	PF_R16_SINT,
	PF_R16G16B16A16_UINT,
	PF_R16G16B16A16_SINT,
	PF_R5G6B5_UNORM,
	PF_R8G8B8A8,
	PF_A8R8G8B8,
	PF_BC4,
	PF_R8G8,
	PF_ATC_RGB,
	PF_ATC_RGBA_E,
	PF_ATC_RGBA_I,
	PF_X24_G8,
	PF_ETC1,
	PF_ETC2_RGB,
	PF_ETC2_RGBA,
	PF_R32G32B32A32_UINT,
	PF_R16G16_UINT,
	PF_ASTC_4x4,
	PF_ASTC_6x6,
	PF_ASTC_8x8,
	PF_ASTC_10x10,
	PF_ASTC_12x12,
	PF_BC6H,
	PF_BC7,
	PF_A16B16G16R16F_FILTER,
	PF_BC6H_SF16,
	PF_BC6H_UF16,
	PF_R32G32_SINT,
	PF_Stencil,
	PF_Depth,
	PF_R32G32_UINT,
	PF_NV12,
	PF_MAX,
};

// Enum CoreUObject.EAxis
enum class EAxis : uint8_t {
	None,
	X,
	Y,
	Z,
	EAxis_MAX,
};

// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8_t {
	None,
	UTC,
	SinceGStartTime,
	ELogTimes_MAX,
};

// Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8_t {
	FromStart,
	FromEnd,
	ESearchDir_MAX,
};

// Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8_t {
	CaseSensitive,
	IgnoreCase,
	ESearchCase_MAX,
};

// ScriptStruct CoreUObject.Guid
// Size: 0x10 (Inherited: 0x00)
struct FGuid {
	int32_t A; // 0x00(0x04)
	int32_t B; // 0x04(0x04)
	int32_t C; // 0x08(0x04)
	int32_t D; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Vector
// Size: 0x0c (Inherited: 0x00)
struct FVector {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct CoreUObject.Vector4
// Size: 0x10 (Inherited: 0x00)
struct FVector4 {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
	float W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Vector2D
// Size: 0x08 (Inherited: 0x00)
struct FVector2D {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.TwoVectors
// Size: 0x18 (Inherited: 0x00)
struct FTwoVectors {
	struct FVector v1; // 0x00(0x0c)
	struct FVector v2; // 0x0c(0x0c)
};

// ScriptStruct CoreUObject.Plane
// Size: 0x10 (Inherited: 0x0c)
struct FPlane : FVector {
	float W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Rotator
// Size: 0x0c (Inherited: 0x00)
struct FRotator {
	float Pitch; // 0x00(0x04)
	float Yaw; // 0x04(0x04)
	float Roll; // 0x08(0x04)
};

// ScriptStruct CoreUObject.Quat
// Size: 0x10 (Inherited: 0x00)
struct FQuat {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
	float W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.PackedNormal
// Size: 0x04 (Inherited: 0x00)
struct FPackedNormal {
	char X; // 0x00(0x01)
	char Y; // 0x01(0x01)
	char Z; // 0x02(0x01)
	char W; // 0x03(0x01)
};

// ScriptStruct CoreUObject.IntPoint
// Size: 0x08 (Inherited: 0x00)
struct FIntPoint {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.IntVector
// Size: 0x0c (Inherited: 0x00)
struct FIntVector {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
	int32_t Z; // 0x08(0x04)
};

// ScriptStruct CoreUObject.Color
// Size: 0x04 (Inherited: 0x00)
struct FColor {
	char B; // 0x00(0x01)
	char G; // 0x01(0x01)
	char R; // 0x02(0x01)
	char A; // 0x03(0x01)
};

// ScriptStruct CoreUObject.LinearColor
// Size: 0x10 (Inherited: 0x00)
struct FLinearColor {
	float R; // 0x00(0x04)
	float G; // 0x04(0x04)
	float B; // 0x08(0x04)
	float A; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Box
// Size: 0x1c (Inherited: 0x00)
struct FBox {
	struct FVector Min; // 0x00(0x0c)
	struct FVector Max; // 0x0c(0x0c)
	char IsValid; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct CoreUObject.Box2D
// Size: 0x14 (Inherited: 0x00)
struct FBox2D {
	struct FVector2D Min; // 0x00(0x08)
	struct FVector2D Max; // 0x08(0x08)
	char IsValid; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct CoreUObject.BoxSphereBounds
// Size: 0x1c (Inherited: 0x00)
struct FBoxSphereBounds {
	struct FVector Origin; // 0x00(0x0c)
	struct FVector BoxExtent; // 0x0c(0x0c)
	float SphereRadius; // 0x18(0x04)
};

// ScriptStruct CoreUObject.OrientedBox
// Size: 0x3c (Inherited: 0x00)
struct FOrientedBox {
	struct FVector Center; // 0x00(0x0c)
	struct FVector AxisX; // 0x0c(0x0c)
	struct FVector AxisY; // 0x18(0x0c)
	struct FVector AxisZ; // 0x24(0x0c)
	float ExtentX; // 0x30(0x04)
	float ExtentY; // 0x34(0x04)
	float ExtentZ; // 0x38(0x04)
};

// ScriptStruct CoreUObject.Matrix
// Size: 0x40 (Inherited: 0x00)
struct FMatrix {
	struct FPlane XPlane; // 0x00(0x10)
	struct FPlane YPlane; // 0x10(0x10)
	struct FPlane ZPlane; // 0x20(0x10)
	struct FPlane WPlane; // 0x30(0x10)
};

// ScriptStruct CoreUObject.InterpCurvePointFloat
// Size: 0x14 (Inherited: 0x00)
struct FInterpCurvePointFloat {
	float InVal; // 0x00(0x04)
	float OutVal; // 0x04(0x04)
	float ArriveTangent; // 0x08(0x04)
	float LeaveTangent; // 0x0c(0x04)
	char InterpMode; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct CoreUObject.InterpCurveFloat
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveFloat {
	struct TArray<struct FInterpCurvePointFloat> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointVector2D
// Size: 0x20 (Inherited: 0x00)
struct FInterpCurvePointVector2D {
	float InVal; // 0x00(0x04)
	struct FVector2D OutVal; // 0x04(0x08)
	struct FVector2D ArriveTangent; // 0x0c(0x08)
	struct FVector2D LeaveTangent; // 0x14(0x08)
	char InterpMode; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct CoreUObject.InterpCurveVector2D
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveVector2D {
	struct TArray<struct FInterpCurvePointVector2D> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointVector
// Size: 0x2c (Inherited: 0x00)
struct FInterpCurvePointVector {
	float InVal; // 0x00(0x04)
	struct FVector OutVal; // 0x04(0x0c)
	struct FVector ArriveTangent; // 0x10(0x0c)
	struct FVector LeaveTangent; // 0x1c(0x0c)
	char InterpMode; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
};

// ScriptStruct CoreUObject.InterpCurveVector
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveVector {
	struct TArray<struct FInterpCurvePointVector> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointQuat
// Size: 0x50 (Inherited: 0x00)
struct FInterpCurvePointQuat {
	float InVal; // 0x00(0x04)
	char UnknownData_4[0xc]; // 0x04(0x0c)
	struct FQuat OutVal; // 0x10(0x10)
	struct FQuat ArriveTangent; // 0x20(0x10)
	struct FQuat LeaveTangent; // 0x30(0x10)
	char InterpMode; // 0x40(0x01)
	char UnknownData_41[0xf]; // 0x41(0x0f)
};

// ScriptStruct CoreUObject.InterpCurveQuat
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveQuat {
	struct TArray<struct FInterpCurvePointQuat> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// Size: 0x50 (Inherited: 0x00)
struct FInterpCurvePointTwoVectors {
	float InVal; // 0x00(0x04)
	struct FTwoVectors OutVal; // 0x04(0x18)
	struct FTwoVectors ArriveTangent; // 0x1c(0x18)
	struct FTwoVectors LeaveTangent; // 0x34(0x18)
	char InterpMode; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveTwoVectors {
	struct TArray<struct FInterpCurvePointTwoVectors> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointLinearColor
// Size: 0x38 (Inherited: 0x00)
struct FInterpCurvePointLinearColor {
	float InVal; // 0x00(0x04)
	struct FLinearColor OutVal; // 0x04(0x10)
	struct FLinearColor ArriveTangent; // 0x14(0x10)
	struct FLinearColor LeaveTangent; // 0x24(0x10)
	char InterpMode; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
};

// ScriptStruct CoreUObject.InterpCurveLinearColor
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveLinearColor {
	struct TArray<struct FInterpCurvePointLinearColor> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.Transform
// Size: 0x30 (Inherited: 0x00)
struct FTransform {
	struct FQuat Rotation; // 0x00(0x10)
	struct FVector Translation; // 0x10(0x0c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FVector Scale3D; // 0x20(0x0c)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct CoreUObject.RandomStream
// Size: 0x08 (Inherited: 0x00)
struct FRandomStream {
	int32_t InitialSeed; // 0x00(0x04)
	int32_t Seed; // 0x04(0x04)
};

// ScriptStruct CoreUObject.DateTime
// Size: 0x08 (Inherited: 0x00)
struct FDateTime {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct CoreUObject.Timespan
// Size: 0x08 (Inherited: 0x00)
struct FTimespan {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct CoreUObject.StringAssetReference
// Size: 0x10 (Inherited: 0x00)
struct FStringAssetReference {
	struct FString AssetLongPathname; // 0x00(0x10)
};

// ScriptStruct CoreUObject.StringClassReference
// Size: 0x10 (Inherited: 0x10)
struct FStringClassReference : FStringAssetReference {
};

// ScriptStruct CoreUObject.FallbackStruct
// Size: 0x01 (Inherited: 0x00)
struct FFallbackStruct {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CoreUObject.FloatRangeBound
// Size: 0x08 (Inherited: 0x00)
struct FFloatRangeBound {
	char Type; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct CoreUObject.FloatRange
// Size: 0x10 (Inherited: 0x00)
struct FFloatRange {
	struct FFloatRangeBound LowerBound; // 0x00(0x08)
	struct FFloatRangeBound UpperBound; // 0x08(0x08)
};

// ScriptStruct CoreUObject.Int32RangeBound
// Size: 0x08 (Inherited: 0x00)
struct FInt32RangeBound {
	char Type; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct CoreUObject.Int32Range
// Size: 0x10 (Inherited: 0x00)
struct FInt32Range {
	struct FInt32RangeBound LowerBound; // 0x00(0x08)
	struct FInt32RangeBound UpperBound; // 0x08(0x08)
};

// ScriptStruct CoreUObject.FloatInterval
// Size: 0x08 (Inherited: 0x00)
struct FFloatInterval {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct CoreUObject.Int32Interval
// Size: 0x08 (Inherited: 0x00)
struct FInt32Interval {
	int32_t Min; // 0x00(0x04)
	int32_t Max; // 0x04(0x04)
};

