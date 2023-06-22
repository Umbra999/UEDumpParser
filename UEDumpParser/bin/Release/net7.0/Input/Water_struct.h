// Enum Water.EWaterQueryResult
enum class EWaterQueryResult : uint8_t {
	Success,
	Failed,
	NoWater,
	Count,
	EWaterQueryResult_MAX,
};

// Enum Water.EBuoyancyDragSampleType
enum class EBuoyancyDragSampleType : uint8_t {
	Spherical,
	Planar,
	EBuoyancyDragSampleType_MAX,
};

// Enum Water.EBuoyancySampleType
enum class EBuoyancySampleType : uint8_t {
	Spherical,
	Cuboidal,
	ProbeCurve,
	EBuoyancySampleType_MAX,
};

// Enum Water.EWaterHeightType
enum class EWaterHeightType : uint8_t {
	Dynamic,
	Static,
	EWaterHeightType_MAX,
};

// Enum Water.EWaterSplashProbeType
enum class EWaterSplashProbeType : uint8_t {
	ThresholdedRateOfChange,
	StateChangeWaterToAir,
	StateChangeAirToWater,
	StateChangeAny,
	Continuous,
	EWaterSplashProbeType_MAX,
};

// ScriptStruct Water.WaterInformation
// Size: 0x10 (Inherited: 0x00)
struct FWaterInformation {
	struct UClass* WaterType; // 0x00(0x08)
	bool CanSwim; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Water.WaterBuoyancy
// Size: 0x130 (Inherited: 0x00)
struct FWaterBuoyancy {
	struct UPrimitiveComponent* PrimitiveComponent; // 0x00(0x08)
	float OverallBuyoancyScalar; // 0x08(0x04)
	float DampingPerSample; // 0x0c(0x04)
	float AdditionalAngularDampingWhenSubmerged; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct FBuoyancyVolumeSample> VolumeSamples; // 0x18(0x10)
	struct TArray<struct FBuoyancyDragSample> DragSamples; // 0x28(0x10)
	struct UCurveFloat* BuyoancySampleZSpeedVSDampeningScalar; // 0x38(0x08)
	float QuadSubmersionTestSampleResolution; // 0x40(0x04)
	char UnknownData_44[0xec]; // 0x44(0xec)
};

// ScriptStruct Water.BuoyancyDragSample
// Size: 0x90 (Inherited: 0x00)
struct FBuoyancyDragSample {
	struct FVector Offset; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
	struct FVector Tangent; // 0x18(0x0c)
	float Radius; // 0x24(0x04)
	float DragCoefficient; // 0x28(0x04)
	char Type; // 0x2c(0x01)
	char UnknownData_2D[0x63]; // 0x2d(0x63)
};

// ScriptStruct Water.BuoyancyVolumeSample
// Size: 0x58 (Inherited: 0x00)
struct FBuoyancyVolumeSample {
	struct FVector Offset; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	char Type; // 0x10(0x01)
	bool bRelevantForSubmersionVolumeCalculation; // 0x11(0x01)
	char UnknownData_12[0x2]; // 0x12(0x02)
	float Scalar; // 0x14(0x04)
	float DampingScalar; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* DistUnderwaterVSBuoyancyForce; // 0x20(0x08)
	struct UCurveFloat* DistUnderwaterVSBuoyancyForceSecondary; // 0x28(0x08)
	struct UCurveFloat* DistUnderwaterVSBuoyancyForceTertiary; // 0x30(0x08)
	struct UCurveFloat* FakeZOffsetGeneratorCurve; // 0x38(0x08)
	float FakeZOffsetAmp; // 0x40(0x04)
	float FakeZOffsetGeneratorTimeScale; // 0x44(0x04)
	char UnknownData_48[0x10]; // 0x48(0x10)
};

// ScriptStruct Water.BuoyancySampleMovement
// Size: 0x68 (Inherited: 0x00)
struct FBuoyancySampleMovement {
	struct TArray<struct FBuoyancySampleMovementConfiguration> Configurations; // 0x00(0x10)
	char UnknownData_10[0x40]; // 0x10(0x40)
	struct UCurveFloat* BuoyancyScalarCurve; // 0x50(0x08)
	struct UCurveFloat* ProbeMovementCurve; // 0x58(0x08)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// ScriptStruct Water.BuoyancySampleMovementConfiguration
// Size: 0x38 (Inherited: 0x00)
struct FBuoyancySampleMovementConfiguration {
	struct UCurveVector* CenterOfMassOffsetCurve; // 0x00(0x08)
	struct TArray<struct FBuoyancySampleMovementConfigurationEntry> SampleMoveData; // 0x08(0x10)
	float OverallBuoyancyScalar; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* OverallBuoyancyScalarBlendCurve; // 0x20(0x08)
	struct UCurveFloat* ProbeMovementBlendCurve; // 0x28(0x08)
	float Duration; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Water.BuoyancySampleMovementConfigurationEntry
// Size: 0x18 (Inherited: 0x00)
struct FBuoyancySampleMovementConfigurationEntry {
	struct FVector SampleOffset; // 0x00(0x0c)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* BuoyancyScaleCurve; // 0x10(0x08)
};

// ScriptStruct Water.EventCurrentWaterPlaneChange
// Size: 0x10 (Inherited: 0x00)
struct FEventCurrentWaterPlaneChange {
	struct UBaseWaterComponent* FormerWaterPlane; // 0x00(0x08)
	struct UBaseWaterComponent* NewWaterPlane; // 0x08(0x08)
};

// ScriptStruct Water.EventLeftWaterExclusionZone
// Size: 0x01 (Inherited: 0x00)
struct FEventLeftWaterExclusionZone {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Water.EventEnteredWaterExclusionZone
// Size: 0x01 (Inherited: 0x00)
struct FEventEnteredWaterExclusionZone {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Water.FFTWaterQueryResult
// Size: 0x1c (Inherited: 0x00)
struct FFFTWaterQueryResult {
	float Height; // 0x00(0x04)
	struct FVector2D Choppiness; // 0x04(0x08)
	struct FVector Normal; // 0x0c(0x0c)
	char WaterQueryResult; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Water.WaterSplashProbesContainer
// Size: 0x18 (Inherited: 0x00)
struct FWaterSplashProbesContainer {
	struct TArray<struct FWaterSplashProbe> Probes; // 0x00(0x10)
	float ProbeSamplingTime; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Water.WaterSplashProbe
// Size: 0xd8 (Inherited: 0x00)
struct FWaterSplashProbe {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FString ProbeDebugName; // 0x08(0x10)
	struct FVector LocalOffset; // 0x18(0x0c)
	float Height; // 0x24(0x04)
	float Pitch; // 0x28(0x04)
	float Yaw; // 0x2c(0x04)
	float Roll; // 0x30(0x04)
	float RateOfChangeThreshold; // 0x34(0x04)
	struct FVector LocalOffsetAdjustment; // 0x38(0x0c)
	float LocalOffsetAdjustmentDuration; // 0x44(0x04)
	char Type; // 0x48(0x01)
	char WaterHeightType; // 0x49(0x01)
	char UnknownData_4A[0x2]; // 0x4a(0x02)
	float StaticWaterHeightValue; // 0x4c(0x04)
	char UnknownData_50[0x88]; // 0x50(0x88)
};

// ScriptStruct Water.SplashProbe
// Size: 0x128 (Inherited: 0x00)
struct FSplashProbe {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FWaterSplashProbe Probe; // 0x08(0xd8)
	float ProbeSamplingTime; // 0xe0(0x04)
	float TimeBetweenProbeVfx; // 0xe4(0x04)
	struct UObject* ParticleSystem; // 0xe8(0x08)
	char UnderwaterUsage; // 0xf0(0x01)
	bool SpawnAttached; // 0xf1(0x01)
	bool AttachToWaterSurface; // 0xf2(0x01)
	char SplashAttachType; // 0xf3(0x01)
	struct FVector VfxSpawnOffset; // 0xf4(0x0c)
	bool Enabled; // 0x100(0x01)
	char UnknownData_101[0x7]; // 0x101(0x07)
	struct UParticleSystemComponent* CurrentlyPlayingVFX; // 0x108(0x08)
	char UnknownData_110[0x18]; // 0x110(0x18)
};

// ScriptStruct Water.WaterSpout
// Size: 0x70 (Inherited: 0x00)
struct FWaterSpout {
	struct FTransform SpoutLocatorTransform; // 0x00(0x30)
	struct UParticleSystemComponent* SpoutParticleSystem; // 0x30(0x08)
	struct UParticleSystemComponent* SplashParticleSystem; // 0x38(0x08)
	char UnknownData_40[0x30]; // 0x40(0x30)
};

