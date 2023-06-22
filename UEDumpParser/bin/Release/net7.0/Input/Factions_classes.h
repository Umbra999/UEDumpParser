// Class Factions.FactionSettingsAsset
// Size: 0x198 (Inherited: 0x28)
struct UFactionSettingsAsset : UDataAsset {
	struct TArray<struct UClass*> PossibleFactions; // 0x28(0x10)
	struct TArray<struct UClass*> FactionsRewardingFriendlyFire; // 0x38(0x10)
	struct TArray<struct FSandsOfFateData> SandsOfFateRewards; // 0x48(0x10)
	struct TArray<struct FFactionStreakLevelData> FactionStreakLevelData; // 0x58(0x10)
	struct TArray<struct FDefenderLootLevelThreshold> DefenderLootLevelThresholds; // 0x68(0x10)
	float EnemyFactionShipEmergentRange; // 0x78(0x04)
	float EnemyFactionShipInvasionRange; // 0x7c(0x04)
	float CrewShipRangeStatesUpdateInterval; // 0x80(0x04)
	float UpdateWaitTimesRate; // 0x84(0x04)
	struct TArray<struct FCompanyFactionAlignment> AlignedFactionsAndCompanies; // 0x88(0x10)
	struct TArray<struct FCompanyFactionAlignment> OpposingFactionsAndCompanies; // 0x98(0x10)
	struct TArray<struct FFactionServicePopUpData> JoiningFactionPopUp; // 0xa8(0x10)
	struct TArray<struct FFactionServicePopUpData> LeavingFactionPopUp; // 0xb8(0x10)
	struct TArray<struct FFactionServicePopUpData> DefeatedFactionPopUp; // 0xc8(0x10)
	struct TArray<struct FFactionServicePopUpData> EnteredTunnelOfTheDamnedFactionPopUp; // 0xd8(0x10)
	struct TArray<struct FFactionServicePopUpData> LeavingBattleBoundsPopUp; // 0xe8(0x10)
	struct TArray<struct FFactionServicePopUpData> SentToSinBinPopUp; // 0xf8(0x10)
	struct TArray<struct FFactionServicePopUpData> MaxRankAchievedForSloopOrBrigantinePopUp; // 0x108(0x10)
	struct TArray<struct FFactionServicePopUpData> MaxRankAchievedForGalleonPopUp; // 0x118(0x10)
	struct FText LosingBattleHeaderText; // 0x128(0x38)
	struct FText LosingBattleMessageText; // 0x160(0x38)
};

// Class Factions.CrewFactionOwnershipInterface
// Size: 0x28 (Inherited: 0x28)
struct UCrewFactionOwnershipInterface : UInterface {
};

// Class Factions.FactionFlipMeshComponent
// Size: 0x890 (Inherited: 0x620)
struct UFactionFlipMeshComponent : UStaticMeshComponent {
	struct UCurveFloat* FlipCurve; // 0x620(0x08)
	struct UClass* FlippedFaction; // 0x628(0x08)
	float FactionJoinedLerpDuration; // 0x630(0x04)
	char UnknownData_634[0x244]; // 0x634(0x244)
	struct FGuid OwningShipCrewId; // 0x878(0x10)
	int32_t OwningShipCrewStreak; // 0x888(0x04)
	bool ServerTargetFlipped; // 0x88c(0x01)
	char UnknownData_88D[0x3]; // 0x88d(0x03)

	void OnRep_Streak(); // Function Factions.FactionFlipMeshComponent.OnRep_Streak // Final|Native|Public // @ game+0x48817f0
	void OnRep_ServerTargetFlipped(); // Function Factions.FactionFlipMeshComponent.OnRep_ServerTargetFlipped // Final|Native|Public // @ game+0x48817d0
};

// Class Factions.FactionInteractionVoteComponent
// Size: 0x158 (Inherited: 0x150)
struct UFactionInteractionVoteComponent : UInlineVotingInteractionComponent {
	float TurnHourglassInteractionHoldTime; // 0x150(0x04)
	int32_t WaitTimeSimilarityThresholdSeconds; // 0x154(0x04)
};

// Class Factions.FactionIntervoteServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UFactionIntervoteServiceInterface : UInterface {
};

// Class Factions.FactionIntervoteService
// Size: 0x410 (Inherited: 0x3c8)
struct AFactionIntervoteService : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct TArray<struct UFactionVoteConsumerBase*> FactionVoteConsumers; // 0x3d0(0x10)
	char UnknownData_3E0[0x30]; // 0x3e0(0x30)
};

// Class Factions.FactionLootLevelRewardsAsset
// Size: 0x38 (Inherited: 0x28)
struct UFactionLootLevelRewardsAsset : UDataAsset {
	struct TArray<struct FLootLevelReward> LootLevelRewards; // 0x28(0x10)
};

// Class Factions.FactionOutpostVoteInteractionActor
// Size: 0x5f8 (Inherited: 0x3c8)
struct AFactionOutpostVoteInteractionActor : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	float FadeDuration; // 0x3d8(0x04)
	char UnknownData_3DC[0x4]; // 0x3dc(0x04)
	struct FFactionDisplayInfo FactionInactiveInfo; // 0x3e0(0xa0)
	struct FFactionDisplayInfo FactionActiveInfo; // 0x480(0xa0)
	char UnknownData_520[0x18]; // 0x520(0x18)
	struct FFactionRequest FactionActiveInfoPtr; // 0x538(0x20)
	char UnknownData_558[0xa0]; // 0x558(0xa0)
};

// Class Factions.FactionParticleComponent
// Size: 0xa50 (Inherited: 0x8b0)
struct UFactionParticleComponent : UParticleSystemComponent {
	char UnknownData_8B0[0x178]; // 0x8b0(0x178)
	struct UClass* Faction; // 0xa28(0x08)
	struct UClass* JoinedFaction; // 0xa30(0x08)
	struct FGuid OwningShipCrewId; // 0xa38(0x10)
	int32_t OwningShipCrewStreak; // 0xa48(0x04)
	bool ServerMigrationEnded; // 0xa4c(0x01)
	char UnknownData_A4D[0x3]; // 0xa4d(0x03)

	void OnRep_Streak(); // Function Factions.FactionParticleComponent.OnRep_Streak // Final|Native|Public // @ game+0x4881810
	void OnRep_ServerMigrationEnded(); // Function Factions.FactionParticleComponent.OnRep_ServerMigrationEnded // Final|Native|Public // @ game+0x48817b0
};

// Class Factions.FactionServiceDebugRepActor
// Size: 0x3e8 (Inherited: 0x3c8)
struct AFactionServiceDebugRepActor : AActor {
	bool bDebugEnabled; // 0x3c8(0x01)
	char UnknownData_3C9[0x7]; // 0x3c9(0x07)
	struct TArray<struct FCrewFactionEntryData> FactionAlignedCrewData; // 0x3d0(0x10)
	struct AFactionService* FactionService; // 0x3e0(0x08)
};

// Class Factions.FactionService
// Size: 0x658 (Inherited: 0x3c8)
struct AFactionService : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct UFactionSettingsAsset* Settings; // 0x3d8(0x08)
	struct UFactionLootLevelRewardsAsset* LootLevelRewardsAsset; // 0x3e0(0x08)
	char UnknownData_3E8[0xc0]; // 0x3e8(0xc0)
	struct TArray<struct FCompanyFactionAlignment> OpposingFactionsAndCompanies; // 0x4a8(0x10)
	struct TArray<struct FDefenderLootLevelThreshold> DefenderLootLevelThresholds; // 0x4b8(0x10)
	struct TArray<struct FCrewFactionEntryData> FactionAlignedCrewData; // 0x4c8(0x10)
	struct TArray<struct FCrewFactionEntry> FactionAlignedCrews; // 0x4d8(0x10)
	struct TArray<struct FFactionWaitTimesData> MatchmakingWaitTimes; // 0x4e8(0x10)
	char UnknownData_4F8[0x138]; // 0x4f8(0x138)
	struct AFactionServiceDebugRepActor* DebugRepActor; // 0x630(0x08)
	char UnknownData_638[0x20]; // 0x638(0x20)

	void OnRep_FactionAlignedCrews(struct TArray<struct FCrewFactionEntry> PreviousCrews); // Function Factions.FactionService.OnRep_FactionAlignedCrews // Final|Native|Public|HasOutParms // @ game+0x48816e0
};

// Class Factions.FactionShipStreakDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UFactionShipStreakDataAsset : UDataAsset {
	struct TArray<struct FStreakMesh> StreakMeshes; // 0x28(0x10)
};

// Class Factions.FactionVoteAudioComponent
// Size: 0x218 (Inherited: 0xe8)
struct UFactionVoteAudioComponent : UVoteAudioComponent {
	struct UWwiseEvent* FactionStart; // 0xe8(0x08)
	struct UWwiseEvent* Flip; // 0xf0(0x08)
	struct UWwiseEvent* Levelup; // 0xf8(0x08)
	struct FName LevelupSwitchGroup; // 0x100(0x08)
	struct TArray<struct FName> LevelupSwitchValues; // 0x108(0x10)
	char UnknownData_118[0x100]; // 0x118(0x100)
};

// Class Factions.FactionVoteConsumerBase
// Size: 0xd0 (Inherited: 0x30)
struct UFactionVoteConsumerBase : UVoteConsumerInlineBase {
	char UnknownData_30[0x10]; // 0x30(0x10)
	struct UFactionVoteValidatorBase* Validator; // 0x40(0x08)
	char UnknownData_48[0x48]; // 0x48(0x48)
	struct AActor* OwningActor; // 0x90(0x08)
	struct TArray<struct FCinematicFactionEvent> FactionBannerData; // 0x98(0x10)
	struct TArray<struct FCrewMemberVotes> Votes; // 0xa8(0x10)
	char UnknownData_B8[0x18]; // 0xb8(0x18)

	void OnRep_Votes(struct TArray<struct FCrewMemberVotes> PreviousVotes); // Function Factions.FactionVoteConsumerBase.OnRep_Votes // Final|RequiredAPI|Native|Private|HasOutParms // @ game+0x4881830
};

// Class Factions.StartFactionVoyageVoteConsumer
// Size: 0x350 (Inherited: 0xd0)
struct UStartFactionVoyageVoteConsumer : UFactionVoteConsumerBase {
	struct FText FactionVotingCastVote; // 0xd0(0x38)
	struct FText FactionVotingCantVote; // 0x108(0x38)
	struct FText FactionVotingRemoveVote; // 0x140(0x38)
	struct FText FactionVotingCantRemoveVote; // 0x178(0x38)
	struct FText FactionVotingCantVoteReasonVoterNotOnOwnShip; // 0x1b0(0x38)
	struct FText FactionVotingCantVoteReasonIsOpposingEmissary; // 0x1e8(0x38)
	struct FText FactionVotingCantVoteReasonIsOnFactionBlockedTale; // 0x220(0x38)
	struct FText FactionVotingCantVoteReasonIsInInvalidWorldRegion; // 0x258(0x38)
	struct FText FactionVotingCantVoteReasonIsNotOnNormalPlayMode; // 0x290(0x38)
	struct FText FactionVotingCantVoteReasonShroudbreakerIsActive; // 0x2c8(0x38)
	struct FText FactionVotingSwitchVote; // 0x300(0x38)
	char UnknownData_338[0x18]; // 0x338(0x18)
};

// Class Factions.StopFactionVoyageVoteConsumer
// Size: 0x300 (Inherited: 0xd0)
struct UStopFactionVoyageVoteConsumer : UFactionVoteConsumerBase {
	struct FText FactionVotingCastVote; // 0xd0(0x38)
	struct FText FactionVotingCantVote; // 0x108(0x38)
	struct FText FactionVotingRemoveVote; // 0x140(0x38)
	struct FText FactionVotingCantRemoveVote; // 0x178(0x38)
	struct FText FactionVotingCantVoteReasonGoToOutpost; // 0x1b0(0x38)
	struct FText FactionVotingCantVoteReasonActiveForDifferentCompany; // 0x1e8(0x38)
	struct FText FactionVotingCantVoteReasonEnemyShipNearby; // 0x220(0x38)
	struct FText FactionVotingCantVoteReasonShipNotInHarbour; // 0x258(0x38)
	struct FText FactionVotingCantVoteReasonCrewInBattle; // 0x290(0x38)
	struct FText FactionVotingCantVoteReasonLeaveFactionCooldownIsActive; // 0x2c8(0x38)
};

// Class Factions.FactionVoteInteractionActor
// Size: 0x4c0 (Inherited: 0x3c8)
struct AFactionVoteInteractionActor : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	float FadeDuration; // 0x3d8(0x04)
	char UnknownData_3DC[0x4]; // 0x3dc(0x04)
	struct TArray<struct FFactionDisplayInfo> NoFactionInfos; // 0x3e0(0x10)
	struct TArray<struct FFactionDisplayInfo> FactionInfos; // 0x3f0(0x10)
	struct TArray<struct FFactionRequest> NoFactionInfoPtrs; // 0x400(0x10)
	struct TArray<struct FFactionRequest> FactionInfoPtrs; // 0x410(0x10)
	char UnknownData_420[0xa0]; // 0x420(0xa0)
};

// Class Factions.FactionVoteValidatorBase
// Size: 0xf0 (Inherited: 0x30)
struct UFactionVoteValidatorBase : UVoteValidatorInlineBase {
	struct TArray<struct UClass*> TargetCompanies; // 0x30(0x10)
	float EdgeOfWorldWarningWeightForFactionLock; // 0x40(0x04)
	char UnknownData_44[0x8c]; // 0x44(0x8c)
	struct UFactionVoteConsumerBase* Consumer; // 0xd0(0x08)
	int32_t CurrentCompany; // 0xd8(0x04)
	float FlipTime; // 0xdc(0x04)
	char UnknownData_E0[0x8]; // 0xe0(0x08)
	struct AActor* OwningActor; // 0xe8(0x08)

	void OnRep_CurrentCompany(); // Function Factions.FactionVoteValidatorBase.OnRep_CurrentCompany // Final|Native|Protected // @ game+0x48816c0
};

// Class Factions.StartFactionVoyageVoteValidator
// Size: 0xf0 (Inherited: 0xf0)
struct UStartFactionVoyageVoteValidator : UFactionVoteValidatorBase {
};

// Class Factions.StopFactionVoyageVoteValidator
// Size: 0xf0 (Inherited: 0xf0)
struct UStopFactionVoyageVoteValidator : UFactionVoteValidatorBase {
};

// Class Factions.IsInFactionStatCondition
// Size: 0x50 (Inherited: 0x30)
struct UIsInFactionStatCondition : UTargetedStatCondition {
	bool CheckOwnerFaction; // 0x30(0x01)
	bool RequiresOwnerMaxStreakLevel; // 0x31(0x01)
	char UnknownData_32[0x6]; // 0x32(0x06)
	struct UClass* RequiredOwnerFaction; // 0x38(0x08)
	bool CheckTargetFaction; // 0x40(0x01)
	bool RequiresTargetMaxStreakLevel; // 0x41(0x01)
	char UnknownData_42[0x6]; // 0x42(0x06)
	struct UClass* RequiredTargetFaction; // 0x48(0x08)
};

// Class Factions.IsWearingCursePrerequisite
// Size: 0x88 (Inherited: 0x80)
struct UIsWearingCursePrerequisite : UInteractionPrerequisiteBase {
	bool AnyCurse; // 0x80(0x01)
	bool SkeletonCurse; // 0x81(0x01)
	bool GhostCurse; // 0x82(0x01)
	char UnknownData_83[0x5]; // 0x83(0x05)
};

// Class Factions.StreakMaterialDataAsset
// Size: 0x48 (Inherited: 0x28)
struct UStreakMaterialDataAsset : UDataAsset {
	struct TArray<struct FStreakMaterialValue> MaterialValues; // 0x28(0x10)
	struct TArray<struct FStreakCompanyMaterials> StreakMaterials; // 0x38(0x10)
};

// Class Factions.ShipFactionCustomisation
// Size: 0x150 (Inherited: 0xc8)
struct UShipFactionCustomisation : UActorComponent {
	struct UStreakMaterialDataAsset* StreakMaterialData; // 0xc8(0x08)
	struct UFactionShipStreakDataAsset* ShipStreakData; // 0xd0(0x08)
	struct TArray<struct UActorComponent*> CachedStaticMeshComponents; // 0xd8(0x10)
	struct TArray<struct FStreakDynamicMaterials> CachedDynamicMaterials; // 0xe8(0x10)
	char UnknownData_F8[0x48]; // 0xf8(0x48)
	struct FFactionStreakData FactionStreakData; // 0x140(0x10)

	void OnRep_FactionStreakData(); // Function Factions.ShipFactionCustomisation.OnRep_FactionStreakData // Final|Native|Private // @ game+0x4881790
};

// Class Factions.ShipSunkTrackingComponent
// Size: 0xf8 (Inherited: 0xc8)
struct UShipSunkTrackingComponent : UActorComponent {
	float CrewRange; // 0xc8(0x04)
	char UnknownData_CC[0x2c]; // 0xcc(0x2c)
};

