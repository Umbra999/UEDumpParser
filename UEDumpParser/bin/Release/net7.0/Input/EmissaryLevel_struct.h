// Enum EmissaryLevel.EBootyRewardType
enum class EBootyRewardType : uint8_t {
	OwnershipChanged,
	ItemDroppedOnItem,
	PlayerKilled,
	GameEventsFinished,
	Handin,
	MAX,
	EBootyRewardType_MAX,
};

// Enum EmissaryLevel.EEmissaryVoyageValidatorType
enum class EEmissaryVoyageValidatorType : uint8_t {
	Entitlement,
	GuildReputation,
	EEmissaryVoyageValidatorType_MAX,
};

// Enum EmissaryLevel.EEmissaryDeactivateReason
enum class EEmissaryDeactivateReason : uint8_t {
	DissociateFromShip,
	Cancelled,
	GuildSessionEnded,
	EEmissaryDeactivateReason_MAX,
};

// ScriptStruct EmissaryLevel.EmissaryFlagMeshReferences
// Size: 0x20 (Inherited: 0x00)
struct FEmissaryFlagMeshReferences {
	struct FStringAssetReference BackOfShipEmissaryFlagMeshAssetReference; // 0x00(0x10)
	struct FStringAssetReference MastEmissaryFlagMeshAssetReference; // 0x10(0x10)
};

// ScriptStruct EmissaryLevel.ParticleVisualisation
// Size: 0x28 (Inherited: 0x00)
struct FParticleVisualisation {
	struct FActorComponentSelector TargetParticles; // 0x00(0x10)
	float Delay; // 0x10(0x04)
	float DelayAfterPutOutParticles; // 0x14(0x04)
	struct UParticleSystem* PutOutParticles; // 0x18(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x20(0x08)
};

// ScriptStruct EmissaryLevel.LightVisualisation
// Size: 0x28 (Inherited: 0x00)
struct FLightVisualisation {
	struct FActorComponentSelector TargetLight; // 0x00(0x10)
	float TransitionTime; // 0x10(0x04)
	float ActiveValue; // 0x14(0x04)
	float InactiveValue; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct ULightComponent* Light; // 0x20(0x08)
};

// ScriptStruct EmissaryLevel.MaterialVisualisation
// Size: 0x30 (Inherited: 0x00)
struct FMaterialVisualisation {
	struct FActorComponentSelector TargetMesh; // 0x00(0x10)
	float TransitionTime; // 0x10(0x04)
	int32_t MaterialIndex; // 0x14(0x04)
	struct FName ParameterName; // 0x18(0x08)
	float ActiveValue; // 0x20(0x04)
	float InactiveValue; // 0x24(0x04)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x28(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryLevelEntry
// Size: 0x88 (Inherited: 0x00)
struct FEmissaryLevelEntry {
	struct UClass* Company; // 0x00(0x08)
	struct TArray<struct FEmissaryLevelData> CompanyLevelData; // 0x08(0x10)
	struct UDataAsset* MaxRankPopUpToastData; // 0x18(0x08)
	struct UDataAsset* EmissaryJoinedPopUpToastData; // 0x20(0x08)
	struct UDataAsset* EmissarySunkPopUpToastData; // 0x28(0x08)
	struct FEmissaryCompanyCosmetics CompanyCosmetics; // 0x30(0x20)
	struct FPlayerStat TimeSpentAtMaxRankStat; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct TArray<struct FPlayerStat> StatsToFireOnFullEmissaryClothing; // 0x58(0x10)
	struct TArray<struct FPlayerStat> StatsToFireOnFullEmissaryShipCustomizations; // 0x68(0x10)
	struct TArray<struct FPlayerStat> StatsToFireOnFullShipCustomizationsAndClothing; // 0x78(0x10)
};

// ScriptStruct EmissaryLevel.EmissaryCompanyCosmetics
// Size: 0x20 (Inherited: 0x00)
struct FEmissaryCompanyCosmetics {
	struct TArray<struct UClass*> CompanyCostumeCosmetics; // 0x00(0x10)
	struct TArray<struct UClass*> CompanyShipCosmetics; // 0x10(0x10)
};

// ScriptStruct EmissaryLevel.EmissaryLevelData
// Size: 0xd8 (Inherited: 0x00)
struct FEmissaryLevelData {
	int32_t LevelTarget; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FEmissaryFlagMeshReferences EmissaryFlagMeshAssetReferences; // 0x08(0x20)
	struct UWeightedItemDescSpawnDataAsset* EmissaryFlotsamSpawnDataAsset; // 0x28(0x20)
	struct UWeightedItemDescSpawnDataAsset* HonorBattleEmissaryFlotsamSpawnDataAsset; // 0x48(0x20)
	struct UEmissaryColourSwatchSettingsAsset* CustomisedFlagSettings; // 0x68(0x08)
	struct FRewardId EmissaryDeactivationReward; // 0x70(0x08)
	struct TArray<struct FPlayerStat> StatsToFireOnEmissaryLevelReached; // 0x78(0x10)
	struct TArray<struct FPlayerStat> StatsToFireOnEmissaryLevelReachedGuildOnly; // 0x88(0x10)
	struct TArray<struct FPlayerStat> StatsToFireOnEmissaryDeactivated; // 0x98(0x10)
	struct TArray<struct FPlayerStat> StatsToFireOnEmissaryDeactivatedGuildOnly; // 0xa8(0x10)
	struct FStringAssetReference TreasureSoldNotificationFlag; // 0xb8(0x10)
	struct FStringAssetReference EmissaryFlagTextureReference; // 0xc8(0x10)
};

// ScriptStruct EmissaryLevel.EmissaryColourSwatchInformation
// Size: 0x60 (Inherited: 0x00)
struct FEmissaryColourSwatchInformation {
	struct FString ColourSwatchIdentifier; // 0x00(0x10)
	struct FEmissaryFlagMeshReferences EmissaryFlagMeshAssetReferences; // 0x10(0x20)
	struct UWeightedItemDescSpawnDataAsset* EmissaryFlotsamSpawnDataAsset; // 0x30(0x20)
	struct FStringAssetReference EmissaryFlagTextureReference; // 0x50(0x10)
};

// ScriptStruct EmissaryLevel.EmissaryPointBoostMultipliers
// Size: 0x08 (Inherited: 0x00)
struct FEmissaryPointBoostMultipliers {
	float PlayerWearningCompanyCostume; // 0x00(0x04)
	float CrewShipFullyEquippedWithCompanyCosmetics; // 0x04(0x04)
};

// ScriptStruct EmissaryLevel.EmissaryLevelStatusStatInfo
// Size: 0x04 (Inherited: 0x00)
struct FEmissaryLevelStatusStatInfo {
	struct FPlayerStat StatToFire; // 0x00(0x04)
};

// ScriptStruct EmissaryLevel.EmissaryPointsBoostCriteria
// Size: 0x08 (Inherited: 0x00)
struct FEmissaryPointsBoostCriteria {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct EmissaryLevel.TrackedPlayerKillEntry
// Size: 0x18 (Inherited: 0x00)
struct FTrackedPlayerKillEntry {
	struct FString KilledPlayer; // 0x00(0x10)
	int32_t KillCount; // 0x10(0x04)
	float KillTime; // 0x14(0x04)
};

// ScriptStruct EmissaryLevel.EmissaryCompanyCampaignSettings
// Size: 0x28 (Inherited: 0x00)
struct FEmissaryCompanyCampaignSettings {
	struct UClass* Company; // 0x00(0x08)
	struct TArray<struct FEmissaryCompanyCampaignKillPlayer> KillPlayers; // 0x08(0x10)
	struct TArray<struct FEmissaryCompanyCampaignGameEvent> GameEvents; // 0x18(0x10)
};

// ScriptStruct EmissaryLevel.EmissaryCompanyCampaignGameEvent
// Size: 0x18 (Inherited: 0x00)
struct FEmissaryCompanyCampaignGameEvent {
	struct UClass* EventType; // 0x00(0x08)
	struct TArray<struct FEmissaryCompanyCampaignScale> Scales; // 0x08(0x10)
};

// ScriptStruct EmissaryLevel.EmissaryCompanyCampaignScale
// Size: 0x0c (Inherited: 0x00)
struct FEmissaryCompanyCampaignScale {
	struct FName Campaign; // 0x00(0x08)
	float Scale; // 0x08(0x04)
};

// ScriptStruct EmissaryLevel.EmissaryCompanyCampaignKillPlayer
// Size: 0x18 (Inherited: 0x00)
struct FEmissaryCompanyCampaignKillPlayer {
	struct UClass* Company; // 0x00(0x08)
	struct TArray<struct FEmissaryCompanyCampaignScale> Scales; // 0x08(0x10)
};

// ScriptStruct EmissaryLevel.EmissaryRewardEntry
// Size: 0x90 (Inherited: 0x00)
struct FEmissaryRewardEntry {
	struct UClass* Company; // 0x00(0x08)
	struct FEmissaryActionRewardData ActionRewardData; // 0x08(0x88)
};

// ScriptStruct EmissaryLevel.EmissaryActionRewardData
// Size: 0x88 (Inherited: 0x00)
struct FEmissaryActionRewardData {
	struct TArray<struct FEmissaryEventAward> OwnershipChangedRewards; // 0x00(0x10)
	struct TArray<struct FEmissaryEventAward> PlacedOnShipRewards; // 0x10(0x10)
	struct FEmissaryKillPlayerReward KillPlayerReward; // 0x20(0x28)
	struct TArray<struct FEmissaryGameEventsReward> GameEventsRewards; // 0x48(0x10)
	struct TArray<struct FEmissaryEventAward> HandinRewards; // 0x58(0x10)
	struct TArray<struct FEmissaryCompanyActionReward> CompanyActionRewards; // 0x68(0x10)
	struct TArray<struct FEmissaryFactionActionReward> FactionActionRewards; // 0x78(0x10)
};

// ScriptStruct EmissaryLevel.EmissaryFactionActionReward
// Size: 0x08 (Inherited: 0x00)
struct FEmissaryFactionActionReward {
	char FactionActionType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float Amount; // 0x04(0x04)
};

// ScriptStruct EmissaryLevel.EmissaryCompanyActionReward
// Size: 0x08 (Inherited: 0x00)
struct FEmissaryCompanyActionReward {
	char CompanyActionType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float Amount; // 0x04(0x04)
};

// ScriptStruct EmissaryLevel.EmissaryEventAward
// Size: 0x08 (Inherited: 0x00)
struct FEmissaryEventAward {
	bool FirstTimeOnly; // 0x00(0x01)
	bool NotOriginalOwner; // 0x01(0x01)
	char ItemQualityRequirement; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	int32_t EmissaryLevelIncrease; // 0x04(0x04)
};

// ScriptStruct EmissaryLevel.EmissaryGameEventsReward
// Size: 0x10 (Inherited: 0x00)
struct FEmissaryGameEventsReward {
	struct UClass* FinishedEventType; // 0x00(0x08)
	float Amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct EmissaryLevel.EmissaryKillPlayerReward
// Size: 0x28 (Inherited: 0x00)
struct FEmissaryKillPlayerReward {
	int32_t EmissaryLevelIncrease; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FEmissaryKillScaleFactor> EmissaryLevelKillCountScaleFactors; // 0x08(0x10)
	struct TArray<struct UClass*> ValidEmissariesToKill; // 0x18(0x10)
};

// ScriptStruct EmissaryLevel.EmissaryKillScaleFactor
// Size: 0x08 (Inherited: 0x00)
struct FEmissaryKillScaleFactor {
	int32_t KillCount; // 0x00(0x04)
	float ScaleFactor; // 0x04(0x04)
};

// ScriptStruct EmissaryLevel.EmissaryVoteRemovedEvent
// Size: 0x08 (Inherited: 0x00)
struct FEmissaryVoteRemovedEvent {
	struct FName Company; // 0x00(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryVoteAddedEvent
// Size: 0x08 (Inherited: 0x00)
struct FEmissaryVoteAddedEvent {
	struct FName Company; // 0x00(0x08)
};

// ScriptStruct EmissaryLevel.CrewMemberVotes
// Size: 0x20 (Inherited: 0x00)
struct FCrewMemberVotes {
	struct FGuid CrewId; // 0x00(0x10)
	struct TArray<struct FPerCompanyVotes> CompanyVotes; // 0x10(0x10)
};

// ScriptStruct EmissaryLevel.PerCompanyVotes
// Size: 0x18 (Inherited: 0x00)
struct FPerCompanyVotes {
	struct TArray<struct APlayerState*> MemberVotes; // 0x00(0x10)
	struct FName CompanyIdentifier; // 0x10(0x08)
};

// ScriptStruct EmissaryLevel.ChaliceStatuePhaseUpdate
// Size: 0x04 (Inherited: 0x00)
struct FChaliceStatuePhaseUpdate {
	int32_t NewLevel; // 0x00(0x04)
};

// ScriptStruct EmissaryLevel.EmissaryEncounteredSkellyFortNetworkEvent
// Size: 0x18 (Inherited: 0x10)
struct FEmissaryEncounteredSkellyFortNetworkEvent : FNetworkEventStruct {
	struct FName CompanyName; // 0x10(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryEncounteredAIShipEvent
// Size: 0x08 (Inherited: 0x00)
struct FEmissaryEncounteredAIShipEvent {
	struct FName CompanyName; // 0x00(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryEncounteredTinySharkEvent
// Size: 0x08 (Inherited: 0x00)
struct FEmissaryEncounteredTinySharkEvent {
	struct FName CompanyName; // 0x00(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryEncounteredKrakenEvent
// Size: 0x08 (Inherited: 0x00)
struct FEmissaryEncounteredKrakenEvent {
	struct FName CompanyName; // 0x00(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryEntitlementPurchasedEvent
// Size: 0x10 (Inherited: 0x00)
struct FEmissaryEntitlementPurchasedEvent {
	struct FGuid OfferId; // 0x00(0x10)
};

// ScriptStruct EmissaryLevel.EmissaryLevelRankChange
// Size: 0x0c (Inherited: 0x00)
struct FEmissaryLevelRankChange {
	int32_t NewLevel; // 0x00(0x04)
	struct FName CompanyName; // 0x04(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryActivated
// Size: 0x08 (Inherited: 0x00)
struct FEmissaryActivated {
	struct FName CompanyName; // 0x00(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryKilledAnotherEmissaryNetworkEvent
// Size: 0x20 (Inherited: 0x10)
struct FEmissaryKilledAnotherEmissaryNetworkEvent : FNetworkEventStruct {
	struct FName CompanyName; // 0x10(0x08)
	struct FName VictimCompanyName; // 0x18(0x08)
};

// ScriptStruct EmissaryLevel.EmissarySoldLootNetworkEvent
// Size: 0x18 (Inherited: 0x10)
struct FEmissarySoldLootNetworkEvent : FNetworkEventStruct {
	struct FName CompanyName; // 0x10(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryStoleLootNetworkEvent
// Size: 0x18 (Inherited: 0x10)
struct FEmissaryStoleLootNetworkEvent : FNetworkEventStruct {
	struct FName CompanyName; // 0x10(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryDiscoveredCargoRunCrateNetworkEvent
// Size: 0x18 (Inherited: 0x10)
struct FEmissaryDiscoveredCargoRunCrateNetworkEvent : FNetworkEventStruct {
	struct FName CompanyName; // 0x10(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryDiscoveredLootNetworkEvent
// Size: 0x18 (Inherited: 0x10)
struct FEmissaryDiscoveredLootNetworkEvent : FNetworkEventStruct {
	struct FName CompanyName; // 0x10(0x08)
};

// ScriptStruct EmissaryLevel.EmissarySecuredLootOnShipNetworkEvent
// Size: 0x18 (Inherited: 0x10)
struct FEmissarySecuredLootOnShipNetworkEvent : FNetworkEventStruct {
	struct FName CompanyName; // 0x10(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryJoinedNetworkEvent
// Size: 0x28 (Inherited: 0x10)
struct FEmissaryJoinedNetworkEvent : FNetworkEventStruct {
	struct UDataAsset* PopUpDesc; // 0x10(0x08)
	struct FGuid GuildId; // 0x18(0x10)
};

// ScriptStruct EmissaryLevel.EmissarySunkNetworkEvent
// Size: 0x20 (Inherited: 0x10)
struct FEmissarySunkNetworkEvent : FNetworkEventStruct {
	struct UDataAsset* PopUpDesc; // 0x10(0x08)
	struct FName CompanyName; // 0x18(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryMaxLevelReachedNetworkEvent
// Size: 0x18 (Inherited: 0x10)
struct FEmissaryMaxLevelReachedNetworkEvent : FNetworkEventStruct {
	struct UDataAsset* PopUpDesc; // 0x10(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryDeactivatedNetworkEvent
// Size: 0x10 (Inherited: 0x10)
struct FEmissaryDeactivatedNetworkEvent : FNetworkEventStruct {
};

// ScriptStruct EmissaryLevel.EmissaryStateUpdateEvent
// Size: 0x0c (Inherited: 0x00)
struct FEmissaryStateUpdateEvent {
	float CurrentRepTotal; // 0x00(0x04)
	struct FName CompanyId; // 0x04(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryProgressUpdatedNetworkEvent
// Size: 0x20 (Inherited: 0x10)
struct FEmissaryProgressUpdatedNetworkEvent : FNetworkEventStruct {
	float OldRepTotal; // 0x10(0x04)
	float NewRepTotal; // 0x14(0x04)
	struct FName CompanyId; // 0x18(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryLevelProgressUpdatedEvent
// Size: 0x14 (Inherited: 0x00)
struct FEmissaryLevelProgressUpdatedEvent {
	float LevelProgress; // 0x00(0x04)
	struct FGuid AssociatedCrew; // 0x04(0x10)
};

// ScriptStruct EmissaryLevel.ActivateEmissaryMaxRankQuestForSession
// Size: 0x01 (Inherited: 0x00)
struct FActivateEmissaryMaxRankQuestForSession {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct EmissaryLevel.UpdateEmissaryValueForCompany
// Size: 0x30 (Inherited: 0x00)
struct FUpdateEmissaryValueForCompany {
	struct FGuid SessionId; // 0x00(0x10)
	struct FName Company; // 0x10(0x08)
	struct FGuid AssociatedCrew; // 0x18(0x10)
	char RewardType; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	int32_t UpdateAmount; // 0x2c(0x04)
};

// ScriptStruct EmissaryLevel.ReactivateEmissaryForMigratedCrew
// Size: 0x28 (Inherited: 0x00)
struct FReactivateEmissaryForMigratedCrew {
	struct FGuid SessionId; // 0x00(0x10)
	struct FName Company; // 0x10(0x08)
	struct FGuid AssociatedCrew; // 0x18(0x10)
};

// ScriptStruct EmissaryLevel.DeactivateEmissaryForCrew
// Size: 0x40 (Inherited: 0x00)
struct FDeactivateEmissaryForCrew {
	struct FGuid SessionId; // 0x00(0x10)
	struct FGuid GuildId; // 0x10(0x10)
	struct FName Company; // 0x20(0x08)
	struct FGuid AssociatedCrew; // 0x28(0x10)
	char EmissaryDeactivateReason; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	int32_t EmissaryTotal; // 0x3c(0x04)
};

// ScriptStruct EmissaryLevel.ActivateEmissaryForCrew
// Size: 0x28 (Inherited: 0x00)
struct FActivateEmissaryForCrew {
	struct FGuid SessionId; // 0x00(0x10)
	struct FName Company; // 0x10(0x08)
	struct FGuid AssociatedCrew; // 0x18(0x10)
};

// ScriptStruct EmissaryLevel.EmissaryLevelChanged
// Size: 0x1c (Inherited: 0x00)
struct FEmissaryLevelChanged {
	int32_t NewLevel; // 0x00(0x04)
	struct FGuid AssociatedCrew; // 0x04(0x10)
	struct FName CompanyName; // 0x14(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryLevelResetProgress
// Size: 0x01 (Inherited: 0x00)
struct FEmissaryLevelResetProgress {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct EmissaryLevel.PlayerRemovedFromEmissaryCrew
// Size: 0x01 (Inherited: 0x00)
struct FPlayerRemovedFromEmissaryCrew {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct EmissaryLevel.PlayerAddedToEmissaryCrew
// Size: 0x10 (Inherited: 0x00)
struct FPlayerAddedToEmissaryCrew {
	int32_t EmissaryLevel; // 0x00(0x04)
	float EmissaryLevelProgress; // 0x04(0x04)
	struct FName EmissaryCompany; // 0x08(0x08)
};

// ScriptStruct EmissaryLevel.EmissaryRoleplayActionTelemetryEvent
// Size: 0x2c (Inherited: 0x00)
struct FEmissaryRoleplayActionTelemetryEvent {
	struct FGuid EmissarySessionId; // 0x00(0x10)
	struct FName EmissaryCompany; // 0x10(0x08)
	int32_t EmissaryRank; // 0x18(0x04)
	char ActionName; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
	int32_t PointsRewarded; // 0x20(0x04)
	int32_t PointsAccumulated; // 0x24(0x04)
	int32_t PointsRequiredToNextRank; // 0x28(0x04)
};

// ScriptStruct EmissaryLevel.EmissarySessionEndTelemetryEvent
// Size: 0x1c (Inherited: 0x00)
struct FEmissarySessionEndTelemetryEvent {
	struct FGuid EmissarySessionId; // 0x00(0x10)
	struct FName EmissaryCompany; // 0x10(0x08)
	char DisbandedReason; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct EmissaryLevel.EmissarySessionStartTelemetryEvent
// Size: 0x1c (Inherited: 0x00)
struct FEmissarySessionStartTelemetryEvent {
	struct FGuid EmissarySessionId; // 0x00(0x10)
	struct FName EmissaryCompany; // 0x10(0x08)
	int32_t EmisarriesOnServerCount; // 0x18(0x04)
};

// ScriptStruct EmissaryLevel.VoteAddedNetworkEvent
// Size: 0x28 (Inherited: 0x10)
struct FVoteAddedNetworkEvent : FBoxedRpc {
	struct FName CompanyId; // 0x10(0x08)
	struct FGuid CrewId; // 0x18(0x10)
};

// ScriptStruct EmissaryLevel.VoteRemovedNetworkEvent
// Size: 0x28 (Inherited: 0x10)
struct FVoteRemovedNetworkEvent : FBoxedRpc {
	struct FName CompanyId; // 0x10(0x08)
	struct FGuid CrewId; // 0x18(0x10)
};

