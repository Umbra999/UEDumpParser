// ScriptStruct AthenaLoadingScreen.SlateLoadingScreenImageParams
// Size: 0x30 (Inherited: 0x00)
struct FSlateLoadingScreenImageParams {
	struct FStringAssetReference ImageAsset; // 0x00(0x10)
	struct TArray<struct FText> ImageTips; // 0x10(0x10)
	struct FSlateLoadingScreenAdvancedTipsParams AdvancedTips; // 0x20(0x10)
};

// ScriptStruct AthenaLoadingScreen.SlateLoadingScreenAdvancedTipsParams
// Size: 0x10 (Inherited: 0x00)
struct FSlateLoadingScreenAdvancedTipsParams {
	struct TArray<struct FSlateLoadingScreenAdvancedTipDescription> TipDescriptions; // 0x00(0x10)
};

// ScriptStruct AthenaLoadingScreen.SlateLoadingScreenAdvancedTipDescription
// Size: 0xc0 (Inherited: 0x00)
struct FSlateLoadingScreenAdvancedTipDescription {
	struct FText Text; // 0x00(0x38)
	float Centre; // 0x38(0x04)
	float TopEdge; // 0x3c(0x04)
	float Width; // 0x40(0x04)
	float Footer; // 0x44(0x04)
	struct FSlateFontInfo Font; // 0x48(0x40)
	struct FSlateColor Colour; // 0x88(0x30)
	float LineHeightPercentage; // 0xb8(0x04)
	char UnknownData_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenStateResponse
// Size: 0x01 (Inherited: 0x00)
struct FEventAthenaLoadingScreenStateResponse {
	bool IsVisible; // 0x00(0x01)
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenStateRequest
// Size: 0x01 (Inherited: 0x00)
struct FEventAthenaLoadingScreenStateRequest {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenBlockUntilUIIntialisedClear
// Size: 0x10 (Inherited: 0x00)
struct FEventAthenaLoadingScreenBlockUntilUIIntialisedClear {
	struct FString Description; // 0x00(0x10)
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenBlockUntilUIIntialised
// Size: 0x10 (Inherited: 0x00)
struct FEventAthenaLoadingScreenBlockUntilUIIntialised {
	struct FString Description; // 0x00(0x10)
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenClose
// Size: 0x01 (Inherited: 0x00)
struct FEventAthenaLoadingScreenClose {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaLoadingScreen.EventAthenaLoadingScreenOpen
// Size: 0x01 (Inherited: 0x00)
struct FEventAthenaLoadingScreenOpen {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

