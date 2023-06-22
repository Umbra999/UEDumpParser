// Class EmissaryLevel.EmissaryActionRewardBoostComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UEmissaryActionRewardBoostComponent : UActorComponent {
	char UnknownData_C8[0x10]; // 0xc8(0x10)
};

// Class EmissaryLevel.EmissaryActiveTableVisualiserComponent
// Size: 0x158 (Inherited: 0xc8)
struct UEmissaryActiveTableVisualiserComponent : UActorComponent {
	struct UClass* TargetCompany; // 0xc8(0x08)
	struct TArray<struct FMaterialVisualisation> MaterialChanges; // 0xd0(0x10)
	char UnknownData_E0[0x10]; // 0xe0(0x10)
	struct TArray<struct FLightVisualisation> LightChanges; // 0xf0(0x10)
	char UnknownData_100[0x10]; // 0x100(0x10)
	struct TArray<struct FParticleVisualisation> ParticleChanges; // 0x110(0x10)
	char UnknownData_120[0x38]; // 0x120(0x38)

	void OnControllerEndPlay(char EndPlayReason); // Function EmissaryLevel.EmissaryActiveTableVisualiserComponent.OnControllerEndPlay // Final|Native|Private // @ game+0x49e2780
};

// Class EmissaryLevel.EmissaryColourSwatchSettingsAsset
// Size: 0x38 (Inherited: 0x28)
struct UEmissaryColourSwatchSettingsAsset : UDataAsset {
	struct TArray<struct FEmissaryColourSwatchInformation> ColourSwatchInformation; // 0x28(0x10)
};

// Class EmissaryLevel.EmissaryLevelSettingsAsset
// Size: 0x68 (Inherited: 0x28)
struct UEmissaryLevelSettingsAsset : UDataAsset {
	struct TArray<struct FEmissaryLevelEntry> EmissaryLevelData; // 0x28(0x10)
	struct FEmissaryPointBoostMultipliers BoostMultiplers; // 0x38(0x08)
	struct FEmissaryFlagMeshReferences DefaultEmissaryFlagAssetReferences; // 0x40(0x20)
	uint32_t NumberOfCustomisedShipPartsToGainBoost; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// Class EmissaryLevel.EmissaryEntitlementCategory
// Size: 0x80 (Inherited: 0x80)
struct UEmissaryEntitlementCategory : UItemCategory {
};

// Class EmissaryLevel.EmissaryEntitlementDesc
// Size: 0xc8 (Inherited: 0xc8)
struct UEmissaryEntitlementDesc : UEntitlementDesc {
};

// Class EmissaryLevel.EmissaryFlotsamDuplicationInterface
// Size: 0x28 (Inherited: 0x28)
struct UEmissaryFlotsamDuplicationInterface : UInterface {
};

// Class EmissaryLevel.EmissaryFlotsamItemInfo
// Size: 0x770 (Inherited: 0x728)
struct AEmissaryFlotsamItemInfo : ABootyItemInfo {
	char UnknownData_728[0x8]; // 0x728(0x08)
	struct FCompanySpecificBootyReward HandInOwnFlotsamReward; // 0x730(0x18)
	struct FCompanySpecificBootyReward AlternateHandInOwnFlotsamReward; // 0x748(0x18)
	struct UClass* PermittedFlotsamPurchaseCompany; // 0x760(0x08)
	bool FlotsamCanBeDuplicated; // 0x768(0x01)
	char UnknownData_769[0x7]; // 0x769(0x07)
};

// Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent
// Size: 0x530 (Inherited: 0x440)
struct UEmissaryFlotsamItemSpawnComponent : UItemSpawnComponent {
	char UnknownData_440[0xa8]; // 0x440(0xa8)
	struct FVector GuildSessionEndedFlotsamOffset; // 0x4e8(0x0c)
	char UnknownData_4F4[0x3c]; // 0x4f4(0x3c)
};

// Class EmissaryLevel.EmissaryFlotsamTooltipCustomizerComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UEmissaryFlotsamTooltipCustomizerComponent : UActorComponent {
	char UnknownData_C8[0x10]; // 0xc8(0x10)
	bool CheckForDelivery; // 0xd8(0x01)
	bool CheckForPickup; // 0xd9(0x01)
	bool HonorBattleFlag; // 0xda(0x01)
	char UnknownData_DB[0x15]; // 0xdb(0x15)
};

// Class EmissaryLevel.EmissaryLevelService
// Size: 0x720 (Inherited: 0x3c8)
struct AEmissaryLevelService : AActor {
	char UnknownData_3C8[0xb8]; // 0x3c8(0xb8)
	struct UEmissaryLevelSettingsAsset* Settings; // 0x480(0x08)
	struct UEmissaryRewardSettingsAsset* RewardSettings; // 0x488(0x08)
	struct UGuildSettings* GuildSettings; // 0x490(0x08)
	char UnknownData_498[0x288]; // 0x498(0x288)
};

// Class EmissaryLevel.EmissaryMaxRankQuestProvider
// Size: 0x160 (Inherited: 0xc8)
struct UEmissaryMaxRankQuestProvider : UActorComponent {
	struct UClass* MaxRankQuestNotificationID; // 0xc8(0x08)
	char MaxRankQuestToolTipPriority; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
	struct FText StartMaxRankQuestToolTipText; // 0xd8(0x38)
	struct FText CannotStartMaxRankQuestToolTipText; // 0x110(0x38)
	struct FStringAssetReference QuestDesc; // 0x148(0x10)
	struct UClass* Company; // 0x158(0x08)
};

// Class EmissaryLevel.EmissaryParticipantComponent
// Size: 0x118 (Inherited: 0xc8)
struct UEmissaryParticipantComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	bool IsAtMaxRank; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct FMysteriousNotesCompletionEventsModelEntry> NoteCompletionIdents; // 0xd8(0x10)
	char UnknownData_E8[0x10]; // 0xe8(0x10)
	int32_t EmissaryLevel; // 0xf8(0x04)
	float EmissaryLevelProgress; // 0xfc(0x04)
	struct FName AffiliatedCompany; // 0x100(0x08)
	bool IsEmissaryMaxRankQuestBeenActivatedThisSession; // 0x108(0x01)
	char UnknownData_109[0x3]; // 0x109(0x03)
	struct FName VotedCompany; // 0x10c(0x08)
	char UnknownData_114[0x4]; // 0x114(0x04)

	void OnRep_EmissaryLevel(); // Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel // Final|Native|Private // @ game+0x49e28b0
	void OnRep_AffiliatedCompany(struct FName PreviousId); // Function EmissaryLevel.EmissaryParticipantComponent.OnRep_AffiliatedCompany // Final|Native|Private|HasOutParms // @ game+0x49e2800
};

// Class EmissaryLevel.EmissaryRepresentationMeshComponent
// Size: 0x620 (Inherited: 0x620)
struct UEmissaryRepresentationMeshComponent : UStaticMeshComponent {
};

// Class EmissaryLevel.EmissaryRewardCampaignSettingsAsset
// Size: 0x38 (Inherited: 0x28)
struct UEmissaryRewardCampaignSettingsAsset : UDataAsset {
	struct TArray<struct FEmissaryCompanyCampaignSettings> Companies; // 0x28(0x10)
};

// Class EmissaryLevel.EmissaryRewardSettingsAsset
// Size: 0x48 (Inherited: 0x28)
struct UEmissaryRewardSettingsAsset : UDataAsset {
	struct TArray<struct FEmissaryRewardEntry> EmissaryRewardData; // 0x28(0x10)
	float PlayerKilledExpiryTime; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct UEmissaryRewardCampaignSettingsAsset* CampaignSettings; // 0x40(0x08)
};

// Class EmissaryLevel.EmissaryShipAffiliationTrackerComponent
// Size: 0x350 (Inherited: 0x2e0)
struct UEmissaryShipAffiliationTrackerComponent : USceneComponent {
	struct UClass* TrackedCompany; // 0x2e0(0x08)
	struct UClass* EmissaryRepresentationMesh; // 0x2e8(0x20)
	struct TArray<struct FTransform> EmissaryRepresentationTransforms; // 0x308(0x10)
	struct TArray<struct UStaticMeshComponent*> EmissaryRepresentationMeshes; // 0x318(0x10)
	struct UClass* LoadedEmissaryRepresentationMesh; // 0x328(0x08)
	int32_t EmissaryCount; // 0x330(0x04)
	char UnknownData_334[0x1c]; // 0x334(0x1c)

	void OnRep_EmissaryCount(); // Function EmissaryLevel.EmissaryShipAffiliationTrackerComponent.OnRep_EmissaryCount // Final|Native|Private // @ game+0x49e2890
};

// Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase
// Size: 0x128 (Inherited: 0x30)
struct UEmissaryVoyageInlineVoteConsumerBase : UVoteConsumerInlineBase {
	struct UEmissaryVoyageVoteValidatorBase* Validator; // 0x30(0x08)
	char UnknownData_38[0x48]; // 0x38(0x48)
	struct FText VoyageCinematicHeader; // 0x80(0x38)
	struct FName VoyageCinematicTag; // 0xb8(0x08)
	char UnknownData_C0[0x20]; // 0xc0(0x20)
	struct TArray<struct FCrewMemberVotes> Votes; // 0xe0(0x10)
	struct UBoxedRpcDispatcherComponent* RpcDispatcher; // 0xf0(0x08)
	char UnknownData_F8[0x20]; // 0xf8(0x20)
	struct AActor* OwningActor; // 0x118(0x08)
	char UnknownData_120[0x8]; // 0x120(0x08)

	void OnRep_Votes(); // Function EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase.OnRep_Votes // Final|Native|Private // @ game+0x49e28d0
};

// Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer
// Size: 0x300 (Inherited: 0x128)
struct UStartEmissaryVoyageInlineVoteConsumer : UEmissaryVoyageInlineVoteConsumerBase {
	struct FText EmissaryVotingCastVote; // 0x128(0x38)
	struct FText EmissaryVotingCantVote; // 0x160(0x38)
	struct FText EmissaryVotingCantVoteReasonCrewShipOutsideRange; // 0x198(0x38)
	struct FText EmissaryVotingCantVoteReasonNoEmissaryEntitlement; // 0x1d0(0x38)
	struct FText EmissaryVotingCantVoteReasonHasActiveVoteForDifferentCompany; // 0x208(0x38)
	struct FText EmissaryVotingCantVoteReasonOnOpposingFaction; // 0x240(0x38)
	struct FText EmissaryVotingRemoveVote; // 0x278(0x38)
	struct FText EmissaryVotingCantRemoveVote; // 0x2b0(0x38)
	char UnknownData_2E8[0x18]; // 0x2e8(0x18)
};

// Class EmissaryLevel.StartGuildEmissaryVoyageInlineVoteConsumer
// Size: 0x388 (Inherited: 0x300)
struct UStartGuildEmissaryVoyageInlineVoteConsumer : UStartEmissaryVoyageInlineVoteConsumer {
	struct FText GuildEmissaryVotingCantVoteReasonGuildEmissaryNotUnlocked; // 0x300(0x38)
	struct FText GuildEmissaryVotingCantVoteReasonNoGuildShip; // 0x338(0x38)
	char UnknownData_370[0x18]; // 0x370(0x18)
};

// Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer
// Size: 0x290 (Inherited: 0x128)
struct UStopEmissaryVoyageInlineVoteConsumer : UEmissaryVoyageInlineVoteConsumerBase {
	struct FText EmissaryVotingCastVote; // 0x128(0x38)
	struct FText EmissaryVotingCantVote; // 0x160(0x38)
	struct FText EmissaryVotingCantVoteReasonCrewShipOutsideRange; // 0x198(0x38)
	struct FText EmissaryVotingCantVoteReasonActiveForDifferentCompany; // 0x1d0(0x38)
	struct FText EmissaryVotingRemoveVote; // 0x208(0x38)
	struct FText EmissaryVotingCantRemoveVote; // 0x240(0x38)
	char UnknownData_278[0x18]; // 0x278(0x18)
};

// Class EmissaryLevel.StopGuildEmissaryVoyageInlineVoteConsumer
// Size: 0x2a8 (Inherited: 0x290)
struct UStopGuildEmissaryVoyageInlineVoteConsumer : UStopEmissaryVoyageInlineVoteConsumer {
	char UnknownData_290[0x18]; // 0x290(0x18)
};

// Class EmissaryLevel.EmissaryVoyageVoteValidatorBase
// Size: 0xf0 (Inherited: 0x30)
struct UEmissaryVoyageVoteValidatorBase : UVoteValidatorInlineBase {
	char ValidatorType; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct UClass* RequiredEntitlement; // 0x38(0x08)
	char IsValidatorTypeEntitlement : 1; // 0x40(0x01)
	char UnknownData_40_1 : 7; // 0x40(0x01)
	char UnknownData_41[0x97]; // 0x41(0x97)
	struct UClass* TargetCompany; // 0xd8(0x08)
	struct UEmissaryVoyageInlineVoteConsumerBase* Consumer; // 0xe0(0x08)
	struct UGuildSettings* GuildSettings; // 0xe8(0x08)
};

// Class EmissaryLevel.StartEmissaryVoyageInlineVoteValidator
// Size: 0xf0 (Inherited: 0xf0)
struct UStartEmissaryVoyageInlineVoteValidator : UEmissaryVoyageVoteValidatorBase {
};

// Class EmissaryLevel.StopEmissaryVoyageInlineVoteValidator
// Size: 0xf0 (Inherited: 0xf0)
struct UStopEmissaryVoyageInlineVoteValidator : UEmissaryVoyageVoteValidatorBase {
};

// Class EmissaryLevel.IncreasingAGradeWithAnEmissaryConditionalStatTrigger
// Size: 0x30 (Inherited: 0x30)
struct UIncreasingAGradeWithAnEmissaryConditionalStatTrigger : UConditionalStatsTriggerType {
};

// Class EmissaryLevel.IsAnEmissaryStatCondition
// Size: 0x30 (Inherited: 0x30)
struct UIsAnEmissaryStatCondition : UTargetedStatCondition {
};

// Class EmissaryLevel.IsEmissaryStatCondition
// Size: 0x38 (Inherited: 0x28)
struct UIsEmissaryStatCondition : UStatCondition {
	struct UClass* RequiredEmissaryCompany; // 0x28(0x08)
	bool RequiresMaxEmissaryLevel; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

