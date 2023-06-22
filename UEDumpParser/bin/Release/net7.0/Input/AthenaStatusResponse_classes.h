// Class AthenaStatusResponse.StatusResponseApplyOneShotStatus
// Size: 0x48 (Inherited: 0x30)
struct UStatusResponseApplyOneShotStatus : UStatusResponse {
	struct FStatus StatusToApply; // 0x30(0x18)
};

// Class AthenaStatusResponse.StatusResponseApplyPersistentStatus
// Size: 0x50 (Inherited: 0x30)
struct UStatusResponseApplyPersistentStatus : UStatusResponse {
	struct FStatus StatusToApply; // 0x30(0x18)
	float DurationMultiplier; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class AthenaStatusResponse.StatusResponseCancelStatus
// Size: 0x40 (Inherited: 0x30)
struct UStatusResponseCancelStatus : UStatusResponse {
	struct TArray<struct UClass*> Status; // 0x30(0x10)
};

// Class AthenaStatusResponse.StatusResponseCook
// Size: 0x30 (Inherited: 0x30)
struct UStatusResponseCook : UStatusResponse {
};

// Class AthenaStatusResponse.StatusResponseHealthRegenerationPoolChange
// Size: 0x38 (Inherited: 0x30)
struct UStatusResponseHealthRegenerationPoolChange : UStatusResponse {
	float HealthPoolChangeIntensityMultiplier; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// Class AthenaStatusResponse.StatusResponseReportNoiseEvent
// Size: 0x70 (Inherited: 0x30)
struct UStatusResponseReportNoiseEvent : UStatusResponse {
	struct UClass* NoiseInstigator; // 0x30(0x08)
	struct FName NoiseTag; // 0x38(0x08)
	float NoiseRange; // 0x40(0x04)
	float NoiseLoudness; // 0x44(0x04)
	bool NoiseMultipleTicks; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	float NoiseTimerTick; // 0x4c(0x04)
	char UnknownData_50[0x20]; // 0x50(0x20)
};

// Class AthenaStatusResponse.StatusResponseSetScalarParamOnCharacter
// Size: 0x40 (Inherited: 0x30)
struct UStatusResponseSetScalarParamOnCharacter : UStatusResponse {
	struct TArray<struct FScalarParamInfo> ParamsToChange; // 0x30(0x10)
};

// Class AthenaStatusResponse.StatusResponseSuspendStatus
// Size: 0x40 (Inherited: 0x30)
struct UStatusResponseSuspendStatus : UStatusResponse {
	struct TArray<struct UClass*> Status; // 0x30(0x10)
};

