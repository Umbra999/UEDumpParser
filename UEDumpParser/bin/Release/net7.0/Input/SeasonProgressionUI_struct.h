// Enum SeasonProgressionUI.EMoreButtonSource
enum class EMoreButtonSource : uint8_t {
	Popup,
	TextNotification,
	EMoreButtonSource_MAX,
};

// Enum SeasonProgressionUI.ENavigationAction
enum class ENavigationAction : uint8_t {
	ShowDeed,
	ShowTrial,
	ShowReward,
	ShowProgress,
	None,
	ENavigationAction_MAX,
};

// Enum SeasonProgressionUI.ESeasonStyleModifiers
enum class ESeasonStyleModifiers : uint8_t {
	Owned,
	SeasonMark,
	PirateLegend,
	ESeasonStyleModifiers_MAX,
};

// ScriptStruct SeasonProgressionUI.SeasonIconPopupAsset
// Size: 0x68 (Inherited: 0x00)
struct FSeasonIconPopupAsset {
	struct FStringAssetReference GlowIcon; // 0x00(0x10)
	struct FStringAssetReference Icon; // 0x10(0x10)
	struct FString ToastSfxEventName; // 0x20(0x10)
	struct FString ToastEventName; // 0x30(0x10)
	struct FString ToastSwitchName; // 0x40(0x10)
	struct FString ToastSwitchValue; // 0x50(0x10)
	float ToastHoldDuration; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// ScriptStruct SeasonProgressionUI.SeasonGoalPopupAsset
// Size: 0x80 (Inherited: 0x00)
struct FSeasonGoalPopupAsset {
	struct FName Category; // 0x00(0x08)
	struct FStringAssetReference GlowIcon; // 0x08(0x10)
	struct FStringAssetReference Icon; // 0x18(0x10)
	struct FStringAssetReference ChatIcon; // 0x28(0x10)
	struct FString ToastSfxEventName; // 0x38(0x10)
	struct FString ToastEventName; // 0x48(0x10)
	struct FString ToastSwitchName; // 0x58(0x10)
	struct FString ToastSwitchValue; // 0x68(0x10)
	float ToastHoldDuration; // 0x78(0x04)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct SeasonProgressionUI.SeasonNotificationContent
// Size: 0x68 (Inherited: 0x00)
struct FSeasonNotificationContent {
	struct FStringAssetReference GlowIcon; // 0x00(0x10)
	struct FStringAssetReference Icon; // 0x10(0x10)
	struct FString SfxEventName; // 0x20(0x10)
	struct FString EventName; // 0x30(0x10)
	struct FString SwitchName; // 0x40(0x10)
	struct FString SwitchValue; // 0x50(0x10)
	float ToastHoldDuration; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// ScriptStruct SeasonProgressionUI.DeedProgressDesc
// Size: 0x80 (Inherited: 0x00)
struct FDeedProgressDesc {
	struct FString Description; // 0x00(0x10)
	struct FString Icon; // 0x10(0x10)
	struct FNavigationDesc NavigationDesc; // 0x20(0x14)
	int32_t ProgressValue; // 0x34(0x04)
	int32_t Threshold; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FGenericPopupAudioDescriptor Audio; // 0x40(0x40)
};

// ScriptStruct SeasonProgressionUI.NavigationDesc
// Size: 0x14 (Inherited: 0x00)
struct FNavigationDesc {
	char Action; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FGuid Id; // 0x04(0x10)
};

// ScriptStruct SeasonProgressionUI.SeasonsChatNotification
// Size: 0x60 (Inherited: 0x00)
struct FSeasonsChatNotification {
	struct FString IconUrl; // 0x00(0x10)
	struct FString Message; // 0x10(0x10)
	struct FGenericPopupAudioDescriptor Audio; // 0x20(0x40)
};

// ScriptStruct SeasonProgressionUI.SeasonsDataRefreshEvent
// Size: 0x01 (Inherited: 0x00)
struct FSeasonsDataRefreshEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SeasonProgressionUI.OpenSeasonsMenuEvent
// Size: 0x14 (Inherited: 0x00)
struct FOpenSeasonsMenuEvent {
	char NavigationAction; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FGuid Id; // 0x04(0x10)
};

// ScriptStruct SeasonProgressionUI.DisableMoreButtonEvent
// Size: 0x01 (Inherited: 0x00)
struct FDisableMoreButtonEvent {
	char MoreButtonSource; // 0x00(0x01)
};

// ScriptStruct SeasonProgressionUI.EnableMoreButtonEvent
// Size: 0x18 (Inherited: 0x00)
struct FEnableMoreButtonEvent {
	char MoreButtonSource; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FNavigationDesc Navigation; // 0x04(0x14)
};

// ScriptStruct SeasonProgressionUI.ShowDeedProgressEvent
// Size: 0x80 (Inherited: 0x00)
struct FShowDeedProgressEvent {
	struct FDeedProgressDesc DeedProgressDesc; // 0x00(0x80)
};

// ScriptStruct SeasonProgressionUI.SeasonsChatNotificationEvent
// Size: 0x60 (Inherited: 0x00)
struct FSeasonsChatNotificationEvent {
	struct FSeasonsChatNotification SeasonsChatNotification; // 0x00(0x60)
};

// ScriptStruct SeasonProgressionUI.SeasonProgressionUITelemetryFragmentInput
// Size: 0x08 (Inherited: 0x01)
struct FSeasonProgressionUITelemetryFragmentInput : FTelemetryFragmentInput {
	struct APlayerController* PlayerController; // 0x00(0x08)
};

// ScriptStruct SeasonProgressionUI.SeasonProgressionUITelemetryFragment
// Size: 0x18 (Inherited: 0x00)
struct FSeasonProgressionUITelemetryFragment {
	struct TArray<struct FSeasonProgressionUIEventTypeTelemetryFragment> ReceivedEventsData; // 0x00(0x10)
	int32_t TotalNumReceivedEvents; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct SeasonProgressionUI.SeasonProgressionUIEventTypeTelemetryFragment
// Size: 0x18 (Inherited: 0x00)
struct FSeasonProgressionUIEventTypeTelemetryFragment {
	struct FString EventName; // 0x00(0x10)
	int32_t NumReceivedEvents; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct SeasonProgressionUI.SeasonsPopupEvent
// Size: 0xa0 (Inherited: 0x00)
struct FSeasonsPopupEvent {
	struct TArray<struct FText> Text; // 0x00(0x10)
	struct TArray<struct FString> Images; // 0x10(0x10)
	struct FString Background; // 0x20(0x10)
	struct FGenericPopupAudioDescriptor Audio; // 0x30(0x40)
	struct TArray<char> StyleModifiers; // 0x70(0x10)
	int32_t Rank; // 0x80(0x04)
	struct FNavigationDesc NavigationDesc; // 0x84(0x14)
	float HoldDuration; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

