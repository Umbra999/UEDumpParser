// Class EngineSettings.ConsoleSettings
// Size: 0x50 (Inherited: 0x28)
struct UConsoleSettings : UObject {
	int32_t MaxScrollbackSize; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FAutoCompleteCommand> ManualAutoCompleteList; // 0x30(0x10)
	struct TArray<struct FString> AutoCompleteMapPaths; // 0x40(0x10)
};

// Class EngineSettings.GameMapsSettings
// Size: 0xb0 (Inherited: 0x28)
struct UGameMapsSettings : UObject {
	struct FString EditorStartupMap; // 0x28(0x10)
	struct FString LocalMapOptions; // 0x38(0x10)
	struct FString TransitionMap; // 0x48(0x10)
	bool bUseSplitscreen; // 0x58(0x01)
	char TwoPlayerSplitscreenLayout; // 0x59(0x01)
	char ThreePlayerSplitscreenLayout; // 0x5a(0x01)
	char UnknownData_5B[0x5]; // 0x5b(0x05)
	struct FStringClassReference GameInstanceClass; // 0x60(0x10)
	struct FString GameDefaultMap; // 0x70(0x10)
	struct FString ServerDefaultMap; // 0x80(0x10)
	struct FStringClassReference GlobalDefaultGameMode; // 0x90(0x10)
	struct FStringClassReference GlobalDefaultServerGameMode; // 0xa0(0x10)
};

// Class EngineSettings.GameNetworkManagerSettings
// Size: 0x58 (Inherited: 0x28)
struct UGameNetworkManagerSettings : UObject {
	int32_t MinDynamicBandwidth; // 0x28(0x04)
	int32_t MaxDynamicBandwidth; // 0x2c(0x04)
	int32_t TotalNetBandwidth; // 0x30(0x04)
	int32_t BadPingThreshold; // 0x34(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	float StandbyRxCheatTime; // 0x3c(0x04)
	float StandbyTxCheatTime; // 0x40(0x04)
	float PercentMissingForRxStandby; // 0x44(0x04)
	float PercentMissingForTxStandby; // 0x48(0x04)
	float PercentForBadPing; // 0x4c(0x04)
	float JoinInProgressStandbyWaitTime; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// Class EngineSettings.GameSessionSettings
// Size: 0x38 (Inherited: 0x28)
struct UGameSessionSettings : UObject {
	int32_t MaxSpectators; // 0x28(0x04)
	int32_t MaxPlayers; // 0x2c(0x04)
	char bRequiresPushToTalk : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class EngineSettings.GeneralEngineSettings
// Size: 0x28 (Inherited: 0x28)
struct UGeneralEngineSettings : UObject {
};

// Class EngineSettings.GeneralProjectSettings
// Size: 0x110 (Inherited: 0x28)
struct UGeneralProjectSettings : UObject {
	struct FString CompanyName; // 0x28(0x10)
	struct FString CompanyDistinguishedName; // 0x38(0x10)
	struct FString CopyrightNotice; // 0x48(0x10)
	struct FString Description; // 0x58(0x10)
	struct FString Homepage; // 0x68(0x10)
	struct FString LicensingTerms; // 0x78(0x10)
	struct FString PrivacyPolicy; // 0x88(0x10)
	struct FGuid ProjectID; // 0x98(0x10)
	struct FString ProjectName; // 0xa8(0x10)
	struct FString ProjectVersion; // 0xb8(0x10)
	struct FString SupportContact; // 0xc8(0x10)
	struct FText ProjectDisplayedTitle; // 0xd8(0x38)
};

// Class EngineSettings.HudSettings
// Size: 0x40 (Inherited: 0x28)
struct UHudSettings : UObject {
	char bShowHUD : 1; // 0x28(0x01)
	char UnknownData_28_1 : 7; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct TArray<struct FName> DebugDisplay; // 0x30(0x10)
};

