// ScriptStruct NudgeFramework.NudgeInterpolationParams
// Size: 0x20 (Inherited: 0x00)
struct FNudgeInterpolationParams {
	float MinAngle; // 0x00(0x04)
	float MaxAngle; // 0x04(0x04)
	struct UCurveFloat* AngleCurveOut; // 0x08(0x08)
	struct UCurveFloat* AngleCurveIn; // 0x10(0x08)
	char Axis; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct NudgeFramework.TrinketNudgeProgress
// Size: 0x30 (Inherited: 0x00)
struct FTrinketNudgeProgress {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct USceneComponent* TrinketRoot; // 0x08(0x08)
	char UnknownData_10[0x10]; // 0x10(0x10)
	struct UCurveFloat* Curve; // 0x20(0x08)
	char UnknownData_28[0x8]; // 0x28(0x08)
};

