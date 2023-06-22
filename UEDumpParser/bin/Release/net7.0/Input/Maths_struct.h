// Enum Maths.EBuoyancyBlend
enum class EBuoyancyBlend : uint8_t {
	PrimaryToSecondary,
	SecondaryToTertiary,
	EBuoyancyBlend_MAX,
};

// Enum Maths.EPlaneLineIntersectionType
enum class EPlaneLineIntersectionType : uint8_t {
	IntersectionWithinLineSegment,
	IntersectionOutsideOfLineSegment,
	PlaneAndLineParallel,
	EPlaneLineIntersectionType_MAX,
};

// Enum Maths.ESpatialOffsetMethod
enum class ESpatialOffsetMethod : uint8_t {
	ThreeDimensional,
	Horizontal,
	Vertical,
	ESpatialOffsetMethod_MAX,
};

// ScriptStruct Maths.WeightedProbabilityRange
// Size: 0x20 (Inherited: 0x00)
struct FWeightedProbabilityRange {
	char UnknownData_0[0x8]; // 0x00(0x08)
	uint32_t Min; // 0x08(0x04)
	uint32_t Max; // 0x0c(0x04)
	struct TArray<float> Weights; // 0x10(0x10)
};

// ScriptStruct Maths.WeightedProbabilityRangeOfRanges
// Size: 0x30 (Inherited: 0x20)
struct FWeightedProbabilityRangeOfRanges : FWeightedProbabilityRange {
	struct TArray<struct FWeightedProbabilityRangeOfRangesFloatPair> SubRanges; // 0x20(0x10)
};

// ScriptStruct Maths.WeightedProbabilityRangeOfRangesFloatPair
// Size: 0x08 (Inherited: 0x00)
struct FWeightedProbabilityRangeOfRangesFloatPair {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct Maths.OrientedPoint
// Size: 0x18 (Inherited: 0x00)
struct FOrientedPoint {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct Maths.Pendulum
// Size: 0x60 (Inherited: 0x00)
struct FPendulum {
	float Increment; // 0x00(0x04)
	float IncrementDirectionMultiplier; // 0x04(0x04)
	bool IsSwinging; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float RPM; // 0x0c(0x04)
	float MinAngleDegrees; // 0x10(0x04)
	float MaxAngleDegrees; // 0x14(0x04)
	float Length; // 0x18(0x04)
	float CurrentSwingProgress; // 0x1c(0x04)
	float CurrentRotationAngleDegrees; // 0x20(0x04)
	char UnknownData_24[0xc]; // 0x24(0x0c)
	struct FTransform InterpolationAsTransform; // 0x30(0x30)
};

// ScriptStruct Maths.RotationUpdateResult
// Size: 0x18 (Inherited: 0x00)
struct FRotationUpdateResult {
	struct FRotator UpdatedRotation; // 0x00(0x0c)
	float SpinAngle; // 0x0c(0x04)
	float TiltAngle; // 0x10(0x04)
	float TiltDirection; // 0x14(0x04)
};

// ScriptStruct Maths.TimedBuffer
// Size: 0x18 (Inherited: 0x00)
struct FTimedBuffer {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Maths.FixedStepInterpCurveVector2D
// Size: 0x18 (Inherited: 0x00)
struct FFixedStepInterpCurveVector2D {
	struct TArray<struct FFixedStepInterpCurvePointVector2D> Points; // 0x00(0x10)
	float StepTime; // 0x10(0x04)
	bool IsLooped; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Maths.FixedStepInterpCurvePointVector2D
// Size: 0x10 (Inherited: 0x00)
struct FFixedStepInterpCurvePointVector2D {
	struct FVector2D OutVal; // 0x00(0x08)
	struct FVector2D Tangent; // 0x08(0x08)
};

// ScriptStruct Maths.InertialSmoothedFloat
// Size: 0x10 (Inherited: 0x00)
struct FInertialSmoothedFloat {
	float AccelerationMagnitude; // 0x00(0x04)
	float MaxSpeed; // 0x04(0x04)
	float CurrentVelocity; // 0x08(0x04)
	float CurrentValue; // 0x0c(0x04)
};

// ScriptStruct Maths.SpatialOffset
// Size: 0x08 (Inherited: 0x00)
struct FSpatialOffset {
	float OffsetValue; // 0x00(0x04)
	char OffsetMethod; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

