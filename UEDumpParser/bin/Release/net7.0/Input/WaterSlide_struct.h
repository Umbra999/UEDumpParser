// Enum WaterSlide.ERideDirection
enum class ERideDirection : uint8_t {
	Forwards,
	Backwards,
	ERideDirection_MAX,
};

// Enum WaterSlide.EZiplineAttachPointConfig
enum class EZiplineAttachPointConfig : uint8_t {
	NoAttachPoints,
	AttachPointAtStart,
	AttachPointAtEnd,
	AttachPointAtStartAndEnd,
	EZiplineAttachPointConfig_MAX,
};

// ScriptStruct WaterSlide.WaterSlideParams
// Size: 0x28 (Inherited: 0x00)
struct FWaterSlideParams {
	float ForwardSpeed; // 0x00(0x04)
	float IncreaseForwardSpeedMultiplier; // 0x04(0x04)
	float DecreaseForwardSpeedMultiplier; // 0x08(0x04)
	float VeeringSpeed; // 0x0c(0x04)
	float LeftVeeringDistance; // 0x10(0x04)
	float RightVeeringDistance; // 0x14(0x04)
	struct FPlayerStat StatToFireForRouteChange; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct UParticleSystem* PlayerSplashingVFXOverride; // 0x20(0x08)
};

// ScriptStruct WaterSlide.ZiplineFeelParameters
// Size: 0x310 (Inherited: 0x00)
struct FZiplineFeelParameters {
	float MaxSpeed; // 0x00(0x04)
	float StartingSpeed; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float AccelerationMultiplier; // 0x0c(0x04)
	float DecelerationMultiplier; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FRuntimeVectorCurve SwingAngleControlDegrees; // 0x18(0x170)
	struct FRuntimeVectorCurve SwingSpeedControlRPM; // 0x188(0x170)
	struct FVector2D WindResistanceMinMaxAngleDegrees; // 0x2f8(0x08)
	struct FVector2D FOVMinMaxSpeed; // 0x300(0x08)
	struct FVector2D FOVMinMaxAngleDegrees; // 0x308(0x08)
};

// ScriptStruct WaterSlide.OnUpdateZiplineActionStateEvent
// Size: 0x1c (Inherited: 0x00)
struct FOnUpdateZiplineActionStateEvent {
	char UnknownData_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct WaterSlide.OnEndZiplineActionStateEvent
// Size: 0x10 (Inherited: 0x00)
struct FOnEndZiplineActionStateEvent {
	struct UWwiseEvent* ZiplineEnd; // 0x00(0x08)
	struct UWwiseEvent* ZiplineEndLoop; // 0x08(0x08)
};

// ScriptStruct WaterSlide.OnStartZiplineActionStateEvent
// Size: 0x28 (Inherited: 0x00)
struct FOnStartZiplineActionStateEvent {
	struct UWwiseEvent* ZiplineStart; // 0x00(0x08)
	struct UWwiseEvent* ZiplineAdditiveOneShot; // 0x08(0x08)
	struct UWwiseEvent* ZiplineLoopStart; // 0x10(0x08)
	struct UParticleSystem* ZiplineWindVFX; // 0x18(0x08)
	struct UParticleSystem* ZiplineTrailVFX; // 0x20(0x08)
};

// ScriptStruct WaterSlide.OnExitedRideEvent
// Size: 0x01 (Inherited: 0x00)
struct FOnExitedRideEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct WaterSlide.RideTransitionActionStateConstructionInfo
// Size: 0x58 (Inherited: 0x30)
struct FRideTransitionActionStateConstructionInfo : FActorActionStateConstructionInfo {
	struct ARide* Ride; // 0x30(0x08)
	char Direction; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	float Offset; // 0x3c(0x04)
	char UnknownData_40[0x18]; // 0x40(0x18)
};

// ScriptStruct WaterSlide.RideTransitionActionStateParams
// Size: 0x14 (Inherited: 0x10)
struct FRideTransitionActionStateParams : FDockToObjectActionStateParams {
	float Duration; // 0x10(0x04)
};

// ScriptStruct WaterSlide.WaterSlideActionStateConstructionInfo
// Size: 0x38 (Inherited: 0x30)
struct FWaterSlideActionStateConstructionInfo : FActorActionStateConstructionInfo {
	struct USceneComponent* SceneComponent; // 0x30(0x08)
};

// ScriptStruct WaterSlide.WaterSlideActionStateParams
// Size: 0x24 (Inherited: 0x00)
struct FWaterSlideActionStateParams {
	float ForcedFieldOfView; // 0x00(0x04)
	bool ForceStash; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct FLookAtOffsetParams LookAtOffsetParams; // 0x08(0x1c)
};

// ScriptStruct WaterSlide.OnPlayerSpeedOnWaterSlideChangedActionStateEvent
// Size: 0x0c (Inherited: 0x00)
struct FOnPlayerSpeedOnWaterSlideChangedActionStateEvent {
	char UnknownData_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct WaterSlide.OnPlayerChangedWaterSlideRouteActionStateEvent
// Size: 0x10 (Inherited: 0x00)
struct FOnPlayerChangedWaterSlideRouteActionStateEvent {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UWwiseEvent* WaterSlideChangeForkOneShot; // 0x08(0x08)
};

// ScriptStruct WaterSlide.OnEndWaterSlideActionStateEvent
// Size: 0x18 (Inherited: 0x00)
struct FOnEndWaterSlideActionStateEvent {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UWwiseEvent* WaterSlideEnd; // 0x08(0x08)
	struct UWwiseEvent* WaterSlideIsEndOneShot; // 0x10(0x08)
};

// ScriptStruct WaterSlide.OnStartWaterSlideActionStateEvent
// Size: 0x10 (Inherited: 0x00)
struct FOnStartWaterSlideActionStateEvent {
	struct UWwiseEvent* WaterSlideStart; // 0x00(0x08)
	struct UParticleSystem* WaterSlideVfxOverride; // 0x08(0x08)
};

// ScriptStruct WaterSlide.ZiplineActionStateConstructionInfo
// Size: 0x40 (Inherited: 0x30)
struct FZiplineActionStateConstructionInfo : FActorActionStateConstructionInfo {
	struct USceneComponent* SceneComponent; // 0x30(0x08)
	char MovementDirection; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct WaterSlide.ZipLineActionStateParams
// Size: 0x1c (Inherited: 0x00)
struct FZipLineActionStateParams {
	struct FLookAtOffsetParams LookAtOffsetParams; // 0x00(0x1c)
};

