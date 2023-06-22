// ScriptStruct CrewSkillRating.ReportMatchConclusionResponse
// Size: 0x08 (Inherited: 0x00)
struct FReportMatchConclusionResponse {
	int32_t WinningCrewNewSkillValue; // 0x00(0x04)
	int32_t LosingCrewNewSkillValue; // 0x04(0x04)
};

// ScriptStruct CrewSkillRating.ReportMatchConclusionRequest
// Size: 0x20 (Inherited: 0x00)
struct FReportMatchConclusionRequest {
	struct TArray<struct FString> WinningUserIds; // 0x00(0x10)
	struct TArray<struct FString> LosingUserIds; // 0x10(0x10)
};

// ScriptStruct CrewSkillRating.GetPvPSkillForCrewResponseModel
// Size: 0x04 (Inherited: 0x00)
struct FGetPvPSkillForCrewResponseModel {
	int32_t CrewSkillRating; // 0x00(0x04)
};

// ScriptStruct CrewSkillRating.GetPvPSkillForCrewRequestModel
// Size: 0x10 (Inherited: 0x00)
struct FGetPvPSkillForCrewRequestModel {
	struct TArray<struct FString> CrewMemberIds; // 0x00(0x10)
};

