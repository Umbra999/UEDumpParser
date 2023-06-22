// Enum Factions.EStreakPartType
enum class EStreakPartType : uint8_t {
	LeftHull,
	RightHull,
	Foremast,
	EStreakPartType_MAX,
};

// ScriptStruct Factions.LootLevelReward
// Size: 0x28 (Inherited: 0x00)
struct FLootLevelReward {
	char LootLevel; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FRewardId RewardId; // 0x04(0x08)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FFactionServicePopUpData> LootLevelPopUpMessageDesc; // 0x10(0x10)
	int32_t PopUpIndex; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Factions.FactionRequest
// Size: 0x20 (Inherited: 0x00)
struct FFactionRequest {
	struct UClass* Faction; // 0x00(0x08)
	char UnknownData_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Factions.FactionDisplayInfo
// Size: 0xa0 (Inherited: 0x00)
struct FFactionDisplayInfo {
	struct UClass* Faction; // 0x00(0x08)
	struct FText Title; // 0x08(0x38)
	struct FText Description; // 0x40(0x38)
	struct FVector2D CardOffset; // 0x78(0x08)
	struct FStringAssetReference KeyArt; // 0x80(0x10)
	struct FStringAssetReference Icon; // 0x90(0x10)
};

// ScriptStruct Factions.KillStreakRibbonEvent
// Size: 0x0c (Inherited: 0x00)
struct FKillStreakRibbonEvent {
	int32_t HourGlassPreValue; // 0x00(0x04)
	int32_t HourGlassPostValue; // 0x04(0x04)
	int32_t HourGlassIncrement; // 0x08(0x04)
};

// ScriptStruct Factions.KillStreakHideEvent
// Size: 0x01 (Inherited: 0x00)
struct FKillStreakHideEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Factions.KillStreakShowEvent
// Size: 0x01 (Inherited: 0x00)
struct FKillStreakShowEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Factions.UpdateKillStreakEvent
// Size: 0x04 (Inherited: 0x00)
struct FUpdateKillStreakEvent {
	int32_t NewLevel; // 0x00(0x04)
};

// ScriptStruct Factions.DeactivateKillStreakEvent
// Size: 0x01 (Inherited: 0x00)
struct FDeactivateKillStreakEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Factions.ActivateKillStreakEvent
// Size: 0x01 (Inherited: 0x00)
struct FActivateKillStreakEvent {
	char FactionId; // 0x00(0x01)
};

// ScriptStruct Factions.DeactivateKillStreakNetworkEvent
// Size: 0x10 (Inherited: 0x10)
struct FDeactivateKillStreakNetworkEvent : FNetworkEventStruct {
};

// ScriptStruct Factions.ActivateKillStreakNetworkEvent
// Size: 0x18 (Inherited: 0x10)
struct FActivateKillStreakNetworkEvent : FNetworkEventStruct {
	char FactionId; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Factions.FactionShipSunkUIEvent
// Size: 0x20 (Inherited: 0x00)
struct FFactionShipSunkUIEvent {
	char OpponentFaction; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FString ShipName; // 0x08(0x10)
	int32_t MyKillStreak; // 0x18(0x04)
	int32_t TheirKillStreak; // 0x1c(0x04)
};

// ScriptStruct Factions.FactionShipSunkNetworkEvent
// Size: 0x38 (Inherited: 0x10)
struct FFactionShipSunkNetworkEvent : FNetworkEventStruct {
	char OpponentFaction; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	struct FGuid OpponentCrewId; // 0x14(0x10)
	int32_t MyKillStreak; // 0x24(0x04)
	int32_t TheirKillStreak; // 0x28(0x04)
	int32_t SandsOfFateBefore; // 0x2c(0x04)
	int32_t SandsOfFateAfter; // 0x30(0x04)
	bool IsIntraFactionBattle; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
};

// ScriptStruct Factions.FactionPopupEvent
// Size: 0x18 (Inherited: 0x10)
struct FFactionPopupEvent : FNetworkEventStruct {
	struct UDataAsset* PopUpDesc; // 0x10(0x08)
};

// ScriptStruct Factions.StreakMesh
// Size: 0x10 (Inherited: 0x00)
struct FStreakMesh {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	char PartType; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Factions.StreakMaterial
// Size: 0x10 (Inherited: 0x00)
struct FStreakMaterial {
	struct UMaterialInstance* Material; // 0x00(0x08)
	char PartType; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Factions.CinematicFactionEvent
// Size: 0x88 (Inherited: 0x00)
struct FCinematicFactionEvent {
	struct UClass* Company; // 0x00(0x08)
	struct FCinematicQuestEvent CinematicData; // 0x08(0x80)
};

// ScriptStruct Factions.FactionStreakData
// Size: 0x10 (Inherited: 0x00)
struct FFactionStreakData {
	struct UClass* Faction; // 0x00(0x08)
	int32_t StreakLevel; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Factions.StreakDynamicMaterials
// Size: 0x18 (Inherited: 0x00)
struct FStreakDynamicMaterials {
	struct UClass* Company; // 0x00(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x08(0x10)
};

// ScriptStruct Factions.StreakCompanyMaterials
// Size: 0x18 (Inherited: 0x00)
struct FStreakCompanyMaterials {
	struct UClass* Company; // 0x00(0x08)
	struct TArray<struct FStreakMaterial> Materials; // 0x08(0x10)
};

// ScriptStruct Factions.StreakMaterialValue
// Size: 0x08 (Inherited: 0x00)
struct FStreakMaterialValue {
	int32_t Streak; // 0x00(0x04)
	float Length; // 0x04(0x04)
};

// ScriptStruct Factions.FactionBlockedTaleVoteConsensusReached
// Size: 0x10 (Inherited: 0x00)
struct FFactionBlockedTaleVoteConsensusReached {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct Factions.FactionBlockedTaleVoteAdded
// Size: 0x08 (Inherited: 0x00)
struct FFactionBlockedTaleVoteAdded {
	struct AActor* Voter; // 0x00(0x08)
};

// ScriptStruct Factions.FactionVoteAdded
// Size: 0x20 (Inherited: 0x00)
struct FFactionVoteAdded {
	struct AActor* Voter; // 0x00(0x08)
	struct FGuid CrewId; // 0x08(0x10)
	bool VotePassed; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Factions.EventLocalPlayerApproachedHourglass
// Size: 0x01 (Inherited: 0x00)
struct FEventLocalPlayerApproachedHourglass {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

