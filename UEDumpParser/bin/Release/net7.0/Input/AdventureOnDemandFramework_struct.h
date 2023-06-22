// Enum AdventureOnDemandFramework.EOnDemandQuestResumeConditionMetReason
enum class EOnDemandQuestResumeConditionMetReason : uint8_t {
	ArrivalTunnelComplete,
	DiveCancelled,
	CrewNotDiving,
	None,
	EOnDemandQuestResumeConditionMetReason_MAX,
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandServiceCrewEntry
// Size: 0x88 (Inherited: 0x00)
struct FAdventureOnDemandServiceCrewEntry {
	char UnknownData_0[0x40]; // 0x00(0x40)
	struct TArray<struct UCrewVoyageParticipant*> Participants; // 0x40(0x10)
	struct UTunnelDesc* TunnelDesc; // 0x50(0x08)
	char UnknownData_58[0x30]; // 0x58(0x30)
};

// ScriptStruct AdventureOnDemandFramework.VoyageHintForQuestTypeEntry
// Size: 0x02 (Inherited: 0x00)
struct FVoyageHintForQuestTypeEntry {
	char QuestType; // 0x00(0x01)
	char HintType; // 0x01(0x01)
};

// ScriptStruct AdventureOnDemandFramework.VoyageHintPopupDescEntry
// Size: 0x10 (Inherited: 0x00)
struct FVoyageHintPopupDescEntry {
	char QuestType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UPopUpMessageDesc* HintPopUpMessageDesc; // 0x08(0x08)
};

// ScriptStruct AdventureOnDemandFramework.ExtraSpawnDistanceFromIsland
// Size: 0x18 (Inherited: 0x00)
struct FExtraSpawnDistanceFromIsland {
	struct UClass* ShipSize; // 0x00(0x08)
	struct TArray<struct FExtraSpawnDistanceByIslandType> DistanceByIslandType; // 0x08(0x10)
};

// ScriptStruct AdventureOnDemandFramework.ExtraSpawnDistanceByIslandType
// Size: 0x08 (Inherited: 0x00)
struct FExtraSpawnDistanceByIslandType {
	char IslandType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float ExtraSpawnDistance; // 0x04(0x04)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandVoyageSelectionVoyageProposalGroup
// Size: 0x28 (Inherited: 0x00)
struct FAdventureOnDemandVoyageSelectionVoyageProposalGroup {
	struct FName GroupName; // 0x00(0x08)
	struct TArray<struct UInteractionPrerequisiteBase*> Prerequisites; // 0x08(0x10)
	struct TArray<struct FAdventureOnDemandVoyageSelectionVoyageProposal> Proposals; // 0x18(0x10)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandVoyageSelectionVoyageProposal
// Size: 0x18 (Inherited: 0x00)
struct FAdventureOnDemandVoyageSelectionVoyageProposal {
	struct TArray<struct UInteractionPrerequisiteBase*> Prerequisites; // 0x00(0x10)
	struct UClass* Proposal; // 0x10(0x08)
};

// ScriptStruct AdventureOnDemandFramework.OnDemandQuestResumeConditionMetReasonQuestVariable
// Size: 0x30 (Inherited: 0x30)
struct FOnDemandQuestResumeConditionMetReasonQuestVariable : FQuestVariable {
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandDiveCrewAlreadyAtDestinationEvent
// Size: 0x10 (Inherited: 0x00)
struct FAdventureOnDemandDiveCrewAlreadyAtDestinationEvent {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandVoyageSurfaceTaleFinished
// Size: 0x01 (Inherited: 0x00)
struct FAdventureOnDemandVoyageSurfaceTaleFinished {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AdventureOnDemandFramework.SeaBasedGameEventOnDemandLocationRequestFailedTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FSeaBasedGameEventOnDemandLocationRequestFailedTelemetryEvent {
	struct FString GameEventType; // 0x00(0x10)
};

// ScriptStruct AdventureOnDemandFramework.SeaBasedGameEventOnDemandLocationRequestCompletedTelemetryEvent
// Size: 0x18 (Inherited: 0x00)
struct FSeaBasedGameEventOnDemandLocationRequestCompletedTelemetryEvent {
	struct FString GameEventType; // 0x00(0x10)
	struct FVector2D Result; // 0x10(0x08)
};

