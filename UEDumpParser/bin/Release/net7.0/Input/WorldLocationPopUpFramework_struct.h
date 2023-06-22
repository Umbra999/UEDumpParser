// ScriptStruct WorldLocationPopUpFramework.TaleWorldLocationPopUpServiceEntry
// Size: 0x10 (Inherited: 0x00)
struct FTaleWorldLocationPopUpServiceEntry {
	struct FVector Location; // 0x00(0x0c)
	float MaxDistance; // 0x0c(0x04)
};

// ScriptStruct WorldLocationPopUpFramework.PlayerEnteredWorldLocationNotificationEvent
// Size: 0x28 (Inherited: 0x00)
struct FPlayerEnteredWorldLocationNotificationEvent {
	struct UPopUpAudioDesc* AudioOverride; // 0x00(0x08)
	struct FString IconPath; // 0x08(0x10)
	struct FString DisplayText; // 0x18(0x10)
};

