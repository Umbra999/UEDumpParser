// Class SeasonProgressionUI.SeasonPopupAsset
// Size: 0x2a0 (Inherited: 0x28)
struct USeasonPopupAsset : UDataAsset {
	struct FName ThemeId; // 0x28(0x08)
	struct TArray<struct FSeasonIconPopupAsset> TierInfos; // 0x30(0x10)
	struct TArray<struct FSeasonGoalPopupAsset> TrialInfos; // 0x40(0x10)
	struct TArray<struct FSeasonGoalPopupAsset> DeedInfos; // 0x50(0x10)
	struct TArray<struct FSeasonGoalPopupAsset> RenownActionInfos; // 0x60(0x10)
	struct FSeasonIconPopupAsset SeasonInfo; // 0x70(0x68)
	struct FSeasonIconPopupAsset LevelIncreaseInfo; // 0xd8(0x68)
	struct FSeasonIconPopupAsset RewardInfo; // 0x140(0x68)
	struct FSeasonIconPopupAsset MultipleRewardsInfo; // 0x1a8(0x68)
	struct FStringAssetReference BackgroundImage; // 0x210(0x10)
	struct FString DefaultToastSfxEventName; // 0x220(0x10)
	struct FString DefaultToastEventName; // 0x230(0x10)
	struct FString DefaultToastSwitchName; // 0x240(0x10)
	struct FString DefaultToastSwitchValue; // 0x250(0x10)
	struct FString DefaultChatSfxEventName; // 0x260(0x10)
	struct FString DefaultChatEventName; // 0x270(0x10)
	struct FString DefaultChatSwitchName; // 0x280(0x10)
	struct FString DefaultChatSwitchValue; // 0x290(0x10)
};

// Class SeasonProgressionUI.SeasonPopupListAsset
// Size: 0x38 (Inherited: 0x28)
struct USeasonPopupListAsset : UDataAsset {
	struct TArray<struct USeasonPopupAsset*> SeasonPopups; // 0x28(0x10)
};

// Class SeasonProgressionUI.SeasonProgressionUIInterface
// Size: 0x28 (Inherited: 0x28)
struct USeasonProgressionUIInterface : UInterface {
};

// Class SeasonProgressionUI.SeasonProgressionUITelemetryInterface
// Size: 0x28 (Inherited: 0x28)
struct USeasonProgressionUITelemetryInterface : UInterface {
};

// Class SeasonProgressionUI.SeasonProgressionUIComponent
// Size: 0x1c0 (Inherited: 0xc8)
struct USeasonProgressionUIComponent : UActorComponent {
	char UnknownData_C8[0x20]; // 0xc8(0x20)
	struct TArray<struct FEnableMoreButtonEvent> DetailsNavigationDesc; // 0xe8(0x10)
	struct FSeasonProgressionUITelemetryFragment NextReceivedEventsTelemetryData; // 0xf8(0x18)
	char UnknownData_110[0xb0]; // 0x110(0xb0)

	void OnHUDDestroyed(); // Function SeasonProgressionUI.SeasonProgressionUIComponent.OnHUDDestroyed // Final|Native|Private // @ game+0x4489cd0
};

// Class SeasonProgressionUI.SeasonProgressionUIServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct USeasonProgressionUIServiceInterface : UInterface {
};

// Class SeasonProgressionUI.SeasonProgressionUIService
// Size: 0x5a8 (Inherited: 0x3c8)
struct ASeasonProgressionUIService : AActor {
	char UnknownData_3C8[0x30]; // 0x3c8(0x30)
	struct USeasonPopupListAsset* SeasonPopupListAsset; // 0x3f8(0x08)
	char UnknownData_400[0x1a8]; // 0x400(0x1a8)
};

// Class SeasonProgressionUI.SeasonProgressionUISettings
// Size: 0x38 (Inherited: 0x28)
struct USeasonProgressionUISettings : UObject {
	struct FStringAssetReference SeasonPopupListAsset; // 0x28(0x10)
};

