// Class InvasionFramework.InvasionServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UInvasionServiceInterface : UInterface {

	struct FName GetCachedFactionIdentifierForMatchmakingCrew(struct FGuid InCrewId); // Function InvasionFramework.InvasionServiceInterface.GetCachedFactionIdentifierForMatchmakingCrew // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3cd3720
	struct FName GetCachedFactionIdentifierForInvadingCrew(struct FGuid InCrewId); // Function InvasionFramework.InvasionServiceInterface.GetCachedFactionIdentifierForInvadingCrew // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3cd3670
	bool GetAggressivePassiveInvasionTargetLocationOffset(struct FGuid InCrewId, struct FVector OutTargetLocation); // Function InvasionFramework.InvasionServiceInterface.GetAggressivePassiveInvasionTargetLocationOffset // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3cd3570
	bool GetAggressivePassiveInvasionResurfaceDistanceForCrewId(struct FGuid InCrewId, float OutMinDistance, float OutMaxDistance); // Function InvasionFramework.InvasionServiceInterface.GetAggressivePassiveInvasionResurfaceDistanceForCrewId // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3cd3430
};

// Class InvasionFramework.DisplayInvasionBannersStep
// Size: 0x98 (Inherited: 0x98)
struct UDisplayInvasionBannersStep : UTaleQuestStep {
};

// Class InvasionFramework.TaleQuestInvasionService
// Size: 0x208 (Inherited: 0x60)
struct UTaleQuestInvasionService : UTaleQuestService {
	struct UTaleQuestInvasionServiceDesc* ServiceDesc; // 0x60(0x08)
	char UnknownData_68[0x1a0]; // 0x68(0x1a0)
};

// Class InvasionFramework.TaleQuestInvasionServiceDesc
// Size: 0x108 (Inherited: 0x28)
struct UTaleQuestInvasionServiceDesc : UTaleQuestServiceDesc {
	struct FText OnCrewLeftServerMessage; // 0x28(0x38)
	struct FText OnCrewLeftFightMessage; // 0x60(0x38)
	struct FText FactionGBannerTag; // 0x98(0x38)
	struct FText FactionBBannerTag; // 0xd0(0x38)
};

// Class InvasionFramework.DisplayInvasionBannersStepDesc
// Size: 0x120 (Inherited: 0x80)
struct UDisplayInvasionBannersStepDesc : UTaleQuestStepDesc {
	struct FText Message; // 0x80(0x38)
	bool DisableMusic; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
	struct FQuestVariableGuid DisplayShipsNameForCrewId; // 0xc0(0x30)
	struct FQuestVariableName DisplayBannersForFaction; // 0xf0(0x30)
};

// Class InvasionFramework.EnvQueryGenerator_AggressiveAggressiveSpawnLocations
// Size: 0x58 (Inherited: 0x58)
struct UEnvQueryGenerator_AggressiveAggressiveSpawnLocations : UEnvQueryGenerator {
};

// Class InvasionFramework.GetInvasionBattleLocationStep
// Size: 0x98 (Inherited: 0x98)
struct UGetInvasionBattleLocationStep : UTaleQuestStep {
};

// Class InvasionFramework.GetInvasionBattleLocationStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct UGetInvasionBattleLocationStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableVector Location; // 0x80(0x30)
	struct FQuestVariableFloat Radius; // 0xb0(0x30)
};

// Class InvasionFramework.GetInvasionShipsStep
// Size: 0x98 (Inherited: 0x98)
struct UGetInvasionShipsStep : UTaleQuestStep {
};

// Class InvasionFramework.GetInvasionShipsStepDesc
// Size: 0x230 (Inherited: 0x80)
struct UGetInvasionShipsStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor AggressiveShip_1; // 0x80(0x30)
	struct FQuestVariableActor AggressiveShip_2; // 0xb0(0x30)
	struct FQuestVariableActor PassiveShip; // 0xe0(0x30)
	struct FQuestVariableGuid AggressiveCrewId_1; // 0x110(0x30)
	struct FQuestVariableGuid AggressiveCrewId_2; // 0x140(0x30)
	struct FQuestVariableGuid PassiveCrewId; // 0x170(0x30)
	struct FQuestVariableName AggressiveFaction_1; // 0x1a0(0x30)
	struct FQuestVariableName AggressiveFaction_2; // 0x1d0(0x30)
	struct FQuestVariableName PassiveFaction; // 0x200(0x30)
};

// Class InvasionFramework.InvasionBattleBounds
// Size: 0x408 (Inherited: 0x3c8)
struct AInvasionBattleBounds : AActor {
	struct USceneComponent* Root; // 0x3c8(0x08)
	struct AActor* ShipToTrack1; // 0x3d0(0x08)
	struct AActor* ShipToTrack2; // 0x3d8(0x08)
	float InnerRadius; // 0x3e0(0x04)
	float OuterRadius; // 0x3e4(0x04)
	char UnknownData_3E8[0x8]; // 0x3e8(0x08)
	struct AActor* ShipThatWasDestroyed; // 0x3f0(0x08)
	struct TArray<struct AActor*> HasLeftBattleBounds; // 0x3f8(0x10)

	void OnRep_InnerRadius(); // Function InvasionFramework.InvasionBattleBounds.OnRep_InnerRadius // Final|Native|Private // @ game+0x4899330
	void Multicast_ExplodeShip(struct AActor* Ship); // Function InvasionFramework.InvasionBattleBounds.Multicast_ExplodeShip // Net|NetReliableNative|Event|NetMulticast|Public // @ game+0x48992b0
};

// Class InvasionFramework.InvasionBattleBoundsShipComponentInterface
// Size: 0x28 (Inherited: 0x28)
struct UInvasionBattleBoundsShipComponentInterface : UInterface {
};

// Class InvasionFramework.InvasionBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UInvasionBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	bool ShouldAggressivePassiveTeleportUseEQS(); // Function InvasionFramework.InvasionBlueprintFunctionLibrary.ShouldAggressivePassiveTeleportUseEQS // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4899400
	float GetAggressivePassiveTeleportOffsetDistance(); // Function InvasionFramework.InvasionBlueprintFunctionLibrary.GetAggressivePassiveTeleportOffsetDistance // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4899280
};

// Class InvasionFramework.InvasionLocationsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UInvasionLocationsDataAsset : UDataAsset {
	struct TArray<struct FVector2D> AggressiveAggressiveLocations; // 0x28(0x10)
};

// Class InvasionFramework.InvasionLocationsDataAssetGetterInterface
// Size: 0x28 (Inherited: 0x28)
struct UInvasionLocationsDataAssetGetterInterface : UInterface {
};

// Class InvasionFramework.InvasionServiceDataAsset
// Size: 0xb0 (Inherited: 0x28)
struct UInvasionServiceDataAsset : UDataAsset {
	struct UVoyageDescDataAsset* Matchmaking_VoyageDescDataAsset; // 0x28(0x08)
	struct UVoyageDescDataAsset* Invasion_AggressivePassive_VoyageDescDataAsset; // 0x30(0x08)
	struct UVoyageDescDataAsset* Invasion_AggressiveAggressive_VoyageDescDataAsset; // 0x38(0x08)
	float VoteValidationRivalShipDetectionRadius; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct UVoyageDescDataAsset* Invasion_LosingCrew_VoyageDescDataAsset; // 0x48(0x08)
	struct UEnvQuery* AggressivePassive_EnvQueryTemplate; // 0x50(0x08)
	struct UEnvQuery* AggressiveAggressive_InvasionLocation_EnvQueryTemplate; // 0x58(0x08)
	struct UEnvQuery* AggressiveAggressive_PrimaryShipLocation_EnvQueryTemplate; // 0x60(0x08)
	struct UEnvQuery* AggressiveAggressive_SecondaryShipLocation_EnvQueryTemplate; // 0x68(0x08)
	float AggressivePassive_EQSQueryParamData_SailingTargetDistanceInMetres_Min; // 0x70(0x04)
	float AggressivePassive_EQSQueryParamData_SailingTargetDistanceInMetres_Max; // 0x74(0x04)
	float AggressivePassive_EQSQueryParamData_StationaryTargetDistanceInMetres_Min; // 0x78(0x04)
	float AggressivePassive_EQSQueryParamData_StationaryTargetDistanceInMetres_Max; // 0x7c(0x04)
	float AggressivePassive_EQSQueryParamData_TargetLocationOffsetInMetres; // 0x80(0x04)
	float AggressiveAggressive_EQSQueryParamData_InvasionLocationStormExclusionRadius; // 0x84(0x04)
	float AggressiveAggressive_EQSQueryParamData_PrimaryShipTargetDistanceInMetres_Min; // 0x88(0x04)
	float AggressiveAggressive_EQSQueryParamData_PrimaryShipTargetDistanceInMetres_Max; // 0x8c(0x04)
	float AggressiveAggressive_EQSQueryParamData_SecondaryShipTargetDistanceInMetres_Min; // 0x90(0x04)
	float AggressiveAggressive_EQSQueryParamData_SecondaryShipTargetDistanceInMetres_Max; // 0x94(0x04)
	struct UVoyageDescDataAsset* Invasion_Debug_AggressivePassive_VoyageDescDataAsset; // 0x98(0x08)
	struct UVoyageDescDataAsset* Invasion_Debug_AggressiveAggressive_VoyageDescDataAsset; // 0xa0(0x08)
	float StopPlayingEmergeMusicAfterSeconds; // 0xa8(0x04)
	float WorldEventsCooldown; // 0xac(0x04)
};

// Class InvasionFramework.InvasionService
// Size: 0x660 (Inherited: 0x3c8)
struct AInvasionService : AActor {
	char UnknownData_3C8[0x40]; // 0x3c8(0x40)
	struct UInvasionSettings* InvasionSettings; // 0x408(0x08)
	struct UInvasionServiceDataAsset* InvasionServiceDataAsset; // 0x410(0x08)
	struct UInvasionLocationsDataAsset* InvasionLocationsDataAsset; // 0x418(0x08)
	char UnknownData_420[0x178]; // 0x420(0x178)
	struct TArray<struct FInvasionParticipatingCrewData> MatchmakingCrews; // 0x598(0x10)
	struct TArray<struct FInvasionParticipatingCrewData> InvadingCrews; // 0x5a8(0x10)
	struct TArray<struct FReplicatedInvasionCrewMusicState> ReplicatedInvasionCrewMusicStates; // 0x5b8(0x10)
	struct TArray<struct FInvasionServiceMatchmakingCrewInfo> MatchmakingCrewsReplicated; // 0x5c8(0x10)
	struct TArray<struct FGuid> InvadingCrewsReplicated; // 0x5d8(0x10)
	struct TArray<struct AInvasionBattleBounds*> InvasionBattleBoundsList; // 0x5e8(0x10)
	char UnknownData_5F8[0x68]; // 0x5f8(0x68)

	void OnRep_ReplicatedInvasionCrewMusicStates(struct TArray<struct FReplicatedInvasionCrewMusicState> StaleMusicStates); // Function InvasionFramework.InvasionService.OnRep_ReplicatedInvasionCrewMusicStates // Final|Native|Private|HasOutParms // @ game+0x4899350
};

// Class InvasionFramework.InvasionSettings
// Size: 0x48 (Inherited: 0x38)
struct UInvasionSettings : UDeveloperSettings {
	struct FStringAssetReference InvasionServiceDataAsset; // 0x38(0x10)
};

// Class InvasionFramework.SetInvasionMusicStateForCrewStep
// Size: 0x98 (Inherited: 0x98)
struct USetInvasionMusicStateForCrewStep : UTaleQuestStep {
};

// Class InvasionFramework.SetInvasionMusicStateForCrewStepDesc
// Size: 0x88 (Inherited: 0x80)
struct USetInvasionMusicStateForCrewStepDesc : UTaleQuestStepDesc {
	char MusicState; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class InvasionFramework.TaleQuestInvasionCreateBattleBoundsStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestInvasionCreateBattleBoundsStep : UTaleQuestStep {
};

// Class InvasionFramework.TaleQuestInvasionCreateBattleBoundsStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct UTaleQuestInvasionCreateBattleBoundsStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor Ship1; // 0x80(0x30)
	struct FQuestVariableActor Ship2; // 0xb0(0x30)
};

// Class InvasionFramework.TaleQuestInvasionMatchmakingService
// Size: 0x228 (Inherited: 0x60)
struct UTaleQuestInvasionMatchmakingService : UTaleQuestService {
	struct UTaleQuestInvasionMatchmakingServiceDesc* ServiceDesc; // 0x60(0x08)
	char UnknownData_68[0x1c0]; // 0x68(0x1c0)
};

// Class InvasionFramework.TaleQuestInvasionMatchmakingServiceDesc
// Size: 0x98 (Inherited: 0x28)
struct UTaleQuestInvasionMatchmakingServiceDesc : UTaleQuestServiceDesc {
	struct FText OnCrewLeftServerMessage; // 0x28(0x38)
	struct FText OnCrewLeftFightMessage; // 0x60(0x38)
};

// Class InvasionFramework.TaleQuestInvasionRemoveBattleBoundsStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestInvasionRemoveBattleBoundsStep : UTaleQuestStep {
};

// Class InvasionFramework.TaleQuestInvasionRemoveBattleBoundsStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTaleQuestInvasionRemoveBattleBoundsStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor ShipInBattleBounds; // 0x80(0x30)
};

// Class InvasionFramework.WaitForShipToBeDefeatedStep
// Size: 0xb0 (Inherited: 0x98)
struct UWaitForShipToBeDefeatedStep : UTaleQuestStep {
	char UnknownData_98[0x18]; // 0x98(0x18)
};

// Class InvasionFramework.WaitForShipToBeDefeatedStepDesc
// Size: 0x1e0 (Inherited: 0x80)
struct UWaitForShipToBeDefeatedStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor WinningShip; // 0x80(0x30)
	struct FQuestVariableActor DefeatedShip; // 0xb0(0x30)
	struct FQuestVariableGuid WinningCrewId; // 0xe0(0x30)
	struct FQuestVariableGuid DefeatedCrewId; // 0x110(0x30)
	struct FQuestVariableName WinningFaction; // 0x140(0x30)
	struct FQuestVariableName DefeatedFaction; // 0x170(0x30)
	float TimeoutTimerIntervalInMinutes; // 0x1a0(0x04)
	char UnknownData_1A4[0x4]; // 0x1a4(0x04)
	struct FText FailMessage; // 0x1a8(0x38)
};

