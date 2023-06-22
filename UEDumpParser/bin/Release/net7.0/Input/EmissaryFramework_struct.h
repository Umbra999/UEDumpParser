// Enum EmissaryFramework.EEmisaryCompanyActionType
enum class EEmisaryCompanyActionType : uint8_t {
	CompleteRiddleStep,
	CompleteRiddleQuest,
	CompleteXMarksTheSpotQuest,
	DefeatNamedSkeleton,
	CompleteBountyQuest,
	CompleteCargoRunStep,
	CompleteCargoRunQuest,
	CompleteMerchantStep,
	CompleteMerchantQuest,
	CompleteGhostShipQuest,
	MapPieceFound,
	CompleteWayfinderVoyage,
	DiscoveredLostShipmentsClue,
	CompleteLostShipmentsVoyage,
	CompleteLegendOfTheVeilVoyage,
	EEmisaryCompanyActionType_MAX,
};

// Enum EmissaryFramework.EEmisaryFactionActionType
enum class EEmisaryFactionActionType : uint8_t {
	SinkOpposingShip,
	EEmisaryFactionActionType_MAX,
};

// ScriptStruct EmissaryFramework.EmissaryFactionActionRewardBoostServiceEvent
// Size: 0x14 (Inherited: 0x00)
struct FEmissaryFactionActionRewardBoostServiceEvent {
	char FactionActionType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FGuid AssociatedCrew; // 0x04(0x10)
};

// ScriptStruct EmissaryFramework.EmissaryGlobalActionRewardBoostServiceEvent
// Size: 0x18 (Inherited: 0x00)
struct FEmissaryGlobalActionRewardBoostServiceEvent {
	struct UClass* FinishedEventType; // 0x00(0x08)
	struct FGuid AssociatedCrew; // 0x08(0x10)
};

// ScriptStruct EmissaryFramework.EmissaryCompanyActionRewardBoostServiceEvent
// Size: 0x1c (Inherited: 0x00)
struct FEmissaryCompanyActionRewardBoostServiceEvent {
	struct FName AssociatedCompany; // 0x00(0x08)
	char CompanyActionType; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FGuid AssociatedCrew; // 0x0c(0x10)
};

// ScriptStruct EmissaryFramework.EmissaryGlobalActionRewardBoostEvent
// Size: 0x08 (Inherited: 0x00)
struct FEmissaryGlobalActionRewardBoostEvent {
	struct UClass* GameEventType; // 0x00(0x08)
};

// ScriptStruct EmissaryFramework.EmissaryNonQuestCompanyActionRewardBoostEvent
// Size: 0x01 (Inherited: 0x00)
struct FEmissaryNonQuestCompanyActionRewardBoostEvent {
	char CompanyActionType; // 0x00(0x01)
};

// ScriptStruct EmissaryFramework.EmissaryQuestCompanyActionRewardBoostEvent
// Size: 0x14 (Inherited: 0x00)
struct FEmissaryQuestCompanyActionRewardBoostEvent {
	char CompanyActionType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FGuid QuestId; // 0x04(0x10)
};

// ScriptStruct EmissaryFramework.EmissaryCompanyChangedEvent
// Size: 0x10 (Inherited: 0x00)
struct FEmissaryCompanyChangedEvent {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct EmissaryFramework.EmissaryLedgerVisited
// Size: 0x10 (Inherited: 0x00)
struct FEmissaryLedgerVisited {
	struct FString CompanyId; // 0x00(0x10)
};

