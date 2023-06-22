// Class AthenaCheat.AthenaCheatManager
// Size: 0x138 (Inherited: 0x78)
struct UAthenaCheatManager : UCheatManager {
	struct ACinematicCameraController* CinematicCameraController; // 0x78(0x08)
	struct UClass* CinematicCameraControllerClass; // 0x80(0x08)
	char UnknownData_88[0x28]; // 0x88(0x28)
	struct TArray<struct FWorldMarkerDesc> CreatedWorldMarkers; // 0xb0(0x10)
	struct UGameEventSchedulerSettingsAsset* DebugSchedulerSettings; // 0xc0(0x08)
	struct AServerPerformanceReplicator* ServerPerformanceReplicator; // 0xc8(0x08)
	float TeleportToDigsiteHeightOffset; // 0xd0(0x04)
	char UnknownData_D4[0x64]; // 0xd4(0x64)

	void WindTriggerChange(int32_t ChangeInstantly); // Function AthenaCheat.AthenaCheatManager.WindTriggerChange // Final|Exec|Native|Public // @ game+0x45df610
	void WindSetVector(float X, float Y); // Function AthenaCheat.AthenaCheatManager.WindSetVector // Final|Exec|Native|Public // @ game+0x45df550
	void WindSetMagnitude(float Magnitude); // Function AthenaCheat.AthenaCheatManager.WindSetMagnitude // Final|Exec|Native|Public // @ game+0x45df4d0
	void WindSetDirection(float X, float Y); // Function AthenaCheat.AthenaCheatManager.WindSetDirection // Final|Exec|Native|Public // @ game+0x45df410
	void WindReloadParams(); // Function AthenaCheat.AthenaCheatManager.WindReloadParams // Final|Exec|Native|Public // @ game+0x45df3f0
	void WindPrintDirection(); // Function AthenaCheat.AthenaCheatManager.WindPrintDirection // Final|Exec|Native|Public // @ game+0x45df3d0
	void WindEnableDebug(); // Function AthenaCheat.AthenaCheatManager.WindEnableDebug // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45df3b0
	void WindDisableDebug(); // Function AthenaCheat.AthenaCheatManager.WindDisableDebug // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45df390
	void WindAlignWithCamera(); // Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera // Final|Exec|Native|Public // @ game+0x45df370
	void Walk(); // Function AthenaCheat.AthenaCheatManager.Walk // Exec|Native|Public // @ game+0x45df350
	void VomitWithType(struct FName VomitType, float Duration); // Function AthenaCheat.AthenaCheatManager.VomitWithType // Final|Exec|Native|Public|HasOutParms // @ game+0x45df280
	void Vomit(); // Function AthenaCheat.AthenaCheatManager.Vomit // Final|Exec|Native|Public // @ game+0x45df260
	void ValidateNPCCullingDistance(); // Function AthenaCheat.AthenaCheatManager.ValidateNPCCullingDistance // Final|Exec|Native|Public // @ game+0x45df240
	void UpdateInvasionAggressivePassiveTeleportOffsetDistance(struct FString InDistance); // Function AthenaCheat.AthenaCheatManager.UpdateInvasionAggressivePassiveTeleportOffsetDistance // Final|Exec|Native|Public // @ game+0x45df1a0
	void UpdateDisplayString(struct FString Namespace, struct FString Key, struct FString SourceString); // Function AthenaCheat.AthenaCheatManager.UpdateDisplayString // Final|Exec|Native|Public // @ game+0x45df040
	void UnlockTradeRouteSelectionForMyCrew(); // Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew // Final|Exec|Native|Public // @ game+0x45df020
	void UnlockTradeRouteSelectionForCrew(struct FGuid CrewId); // Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x45def80
	void UnlockEntitlementCategory(struct FString EntitlementMapToUnlock); // Function AthenaCheat.AthenaCheatManager.UnlockEntitlementCategory // Final|Exec|Native|Public // @ game+0x45deee0
	void UnlockEntitlement(struct FString EntitlementId); // Function AthenaCheat.AthenaCheatManager.UnlockEntitlement // Final|Exec|Native|Public // @ game+0x45dee40
	void UnlockAndEquipSkeletonCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipSkeletonCurse // Final|Exec|Native|Public // @ game+0x45dee20
	void UnlockAndEquipItemFromEntitlement(struct FString EntitlementId); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipItemFromEntitlement // Final|Exec|Native|Public // @ game+0x45ded80
	void UnlockAndEquipGoldGhostCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipGoldGhostCurse // Final|Exec|Native|Public // @ game+0x45ded60
	void UnlockAndEquipGhostCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipGhostCurse // Final|Exec|Native|Public // @ game+0x45ded40
	void UnlockAllTallTales(); // Function AthenaCheat.AthenaCheatManager.UnlockAllTallTales // Final|Exec|Native|Public // @ game+0x45ded20
	void UnlockAllSkeletonClothes(); // Function AthenaCheat.AthenaCheatManager.UnlockAllSkeletonClothes // Final|Exec|Native|Public // @ game+0x45ded00
	void UnlockAllEntitlements(int32_t TrueFalse); // Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements // Final|Exec|Native|Public // @ game+0x45dec80
	void UnlockAllEmblemsAndAchievements(); // Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements // Final|Exec|Native|Public // @ game+0x45dec60
	void UnBreakLeg(); // Function AthenaCheat.AthenaCheatManager.UnBreakLeg // Final|Exec|Native|Public // @ game+0x45dec40
	void TutorialAction(struct FString ActionTypeString); // Function AthenaCheat.AthenaCheatManager.TutorialAction // Final|Exec|Native|Public // @ game+0x45deba0
	void TriggerRewardNotification(struct FName Identifier); // Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification // Final|Exec|Native|Public|HasOutParms // @ game+0x45deb10
	void TriggerLosingCrewTale(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerLosingCrewTale // Final|Exec|Native|Public // @ game+0x45dea70
	void TriggerLandmarkReaction(int32_t ActionType); // Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction // Final|Exec|Native|Public // @ game+0x45de9f0
	void TriggerFogManagerAtNearestIsland(); // Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland // Final|Exec|Native|Public // @ game+0x45de9d0
	void TriggerFactionBattleLosingBanner(); // Function AthenaCheat.AthenaCheatManager.TriggerFactionBattleLosingBanner // Final|Exec|Native|Public // @ game+0x45de9b0
	void TriggerEmblemUnlockedMessage(struct FString EmblemFriendlyName); // Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage // Final|Exec|Native|Public // @ game+0x45de910
	void TriggerDebugAggressivePassiveInvasion(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressivePassiveInvasion // Final|Exec|Native|Public // @ game+0x45de870
	void TriggerDebugAggressiveAggressiveInvasion(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressiveAggressiveInvasion // Final|Exec|Native|Public // @ game+0x45de7d0
	void TriggerControllerConnectionChange(bool IsConnect, int32_t UserId, int32_t ControllerId); // Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange // Final|Exec|Native|Public // @ game+0x45de6d0
	void TriggerContestMatchmakingMigration(); // Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingMigration // Final|Exec|Native|Public // @ game+0x45de6b0
	void TriggerAIShipTimerBattle(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle // Final|Exec|Native|Public // @ game+0x45de670
	void TriggerAIShipPassive(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive // Final|Exec|Native|Public // @ game+0x45de650
	void TriggerAIShipEncounter(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter // Final|Exec|Native|Public // @ game+0x45de630
	void TriggerAIShipAggressive(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive // Final|Exec|Native|Public // @ game+0x45de610
	void TriggerAdvertiseGameEventsOnDemandAvailability(); // Function AthenaCheat.AthenaCheatManager.TriggerAdvertiseGameEventsOnDemandAvailability // Final|Exec|Native|Public // @ game+0x45de690
	void ToggleVideprinter(struct FString Id); // Function AthenaCheat.AthenaCheatManager.ToggleVideprinter // Final|Exec|Native|Public // @ game+0x45de570
	void ToggleThirdPerson(); // Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson // Final|Exec|Native|Public // @ game+0x45de550
	void ToggleStoryRefresh(); // Function AthenaCheat.AthenaCheatManager.ToggleStoryRefresh // Final|Exec|Native|Public // @ game+0x45de530
	void ToggleStoryDisplayFilter(bool IsIncludeFilter, struct FString Filter); // Function AthenaCheat.AthenaCheatManager.ToggleStoryDisplayFilter // Final|Exec|Native|Public // @ game+0x45de440
	void ToggleSeaClueLocationQueryDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay // Final|Exec|Native|Public // @ game+0x45de420
	void ToggleRetailDrawDebug(); // Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug // Final|Exec|Native|Public // @ game+0x45de400
	void ToggleNoClip(); // Function AthenaCheat.AthenaCheatManager.ToggleNoClip // Final|Exec|Native|Public // @ game+0x45de3e0
	void ToggleNearestSuperheatedWater(); // Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater // Final|Exec|Native|Public // @ game+0x45de3c0
	void ToggleNearestLava(); // Function AthenaCheat.AthenaCheatManager.ToggleNearestLava // Final|Exec|Native|Public // @ game+0x45de3a0
	void ToggleMigrationPointOfInterestChecks(bool Enabled); // Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks // Final|Exec|Native|Public // @ game+0x45de310
	void ToggleIslandSelectionDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay // Final|Exec|Native|Public // @ game+0x45de2f0
	void ToggleGlint(); // Function AthenaCheat.AthenaCheatManager.ToggleGlint // Final|Exec|Native|Public // @ game+0x45de2d0
	void ToggleFastShipControls(); // Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls // Final|Exec|Native|Public // @ game+0x45de2b0
	void ToggleFactionDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleFactionDebugDisplay // Final|Exec|Native|Public // @ game+0x45de290
	void ToggleDrowning(); // Function AthenaCheat.AthenaCheatManager.ToggleDrowning // Final|Exec|Native|Public // @ game+0x45de270
	void ToggleDrawShipSpeed(); // Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed // Final|Exec|Native|Public // @ game+0x45de250
	void ToggleDrawAboveIslandBounds(); // Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds // Final|Exec|Native|Public // @ game+0x45de230
	void ToggleDisplayStories(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayStories // Final|Exec|Native|Public // @ game+0x45de210
	void ToggleDisplayEmergentBattleBanners(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayEmergentBattleBanners // Final|Exec|Native|Public // @ game+0x45de1f0
	void ToggleDisplayCannonAISpawnerZones(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones // Final|Exec|Native|Public // @ game+0x45de1d0
	void ToggleDebugFlying(); // Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45de1b0
	void ToggleDeathCamera(); // Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera // Final|Exec|Native|Public // @ game+0x45de190
	void ToggleDamageAllowedToPlayerShip(); // Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip // Final|Exec|Native|Public // @ game+0x45de170
	void ToggleCrewIdToBeBlockedFromBeingInvaded(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.ToggleCrewIdToBeBlockedFromBeingInvaded // Final|Exec|Native|Public // @ game+0x45de0d0
	void ToggleContestScoreDebug(); // Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug // Final|Exec|Native|Public // @ game+0x45de0b0
	void ToggleCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera // Final|Exec|Native|Public // @ game+0x45de090
	void ToggleAudioReportingForVeryCloseAudio(); // Function AthenaCheat.AthenaCheatManager.ToggleAudioReportingForVeryCloseAudio // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45de070
	void ToggleAudioReporting(); // Function AthenaCheat.AthenaCheatManager.ToggleAudioReporting // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45de050
	void ToggleAttributeOverride(); // Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride // Final|Exec|Native|Public // @ game+0x45de030
	void ToggleAggressivePassiveTeleportUseEQS(); // Function AthenaCheat.AthenaCheatManager.ToggleAggressivePassiveTeleportUseEQS // Final|Exec|Native|Public // @ game+0x45de010
	void TestForceArchiveAsyncPoolCanaryCrash(); // Function AthenaCheat.AthenaCheatManager.TestForceArchiveAsyncPoolCanaryCrash // Final|Exec|Native|Public // @ game+0x45ddff0
	void TestCrashDumpCreationOnRunnableThread(); // Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread // Final|Exec|Native|Public // @ game+0x45ddfd0
	void TestCrashDumpCreationOnMainThread(); // Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread // Final|Exec|Native|Public // @ game+0x45ddfb0
	void TeleportToShip(); // Function AthenaCheat.AthenaCheatManager.TeleportToShip // Final|Exec|Native|Public // @ game+0x45ddf90
	void TeleportToPlayerStart(); // Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart // Final|Exec|Native|Public // @ game+0x45ddf70
	void TeleportToNearestTreasureLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation // Final|Exec|Native|Public // @ game+0x45ddf50
	void TeleportToLocation(float LocationX, float LocationY, float LocationZ); // Function AthenaCheat.AthenaCheatManager.TeleportToLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45dde40
	void TeleportToHideout(); // Function AthenaCheat.AthenaCheatManager.TeleportToHideout // Final|Exec|Native|Public // @ game+0x45dde20
	void TeleportToDebugDestinationLocation(struct FString ActorIdString, struct FString DestinationId); // Function AthenaCheat.AthenaCheatManager.TeleportToDebugDestinationLocation // Final|Exec|Native|Public // @ game+0x45ddd20
	void TeleportToAggressiveGhostShipEncounter(); // Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter // Final|Exec|Native|Public // @ game+0x45ddd00
	void TeleportShip(float X, float Y, float Z); // Function AthenaCheat.AthenaCheatManager.TeleportShip // Final|Exec|Native|Public // @ game+0x45ddbf0
	void TeleportPlayerToSpireLocation(int32_t SpireIndex); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSpireLocation // Final|Exec|Native|Public // @ game+0x45ddb50
	void TeleportPlayerToSafety(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety // Final|Exec|Native|Public // @ game+0x45ddb30
	void TeleportPlayerToOffsetAndReturn(float OffsetX, float OffsetY, float OffsetZ, float ReturnTime); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToOffsetAndReturn // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45dd9e0
	void TeleportPlayerToNearestActiveRiddleLandmark(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToNearestActiveRiddleLandmark // Final|Exec|Native|Public // @ game+0x45dd9c0
	void TeleportPlayerToMerchantCrateSpawnLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToMerchantCrateSpawnLocation // Final|Exec|Native|Public // @ game+0x45dd9a0
	void TeleportPlayerToKraken(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken // Final|Exec|Native|Public // @ game+0x45dd980
	void TeleportPlayersCrewShipToPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45ddbd0
	void TeleportOutOfHideout(); // Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout // Final|Exec|Native|Public // @ game+0x45dd960
	void TeleportCrewToShip(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip // Final|Exec|Native|Public // @ game+0x45dd8c0
	void TeleportCrewToSafeSpawnLocationFromRemoteActor(struct FString ActorIdString, struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor // Final|Exec|Native|Public // @ game+0x45dd7c0
	void TeleportCrewToSafeSpawnLocation(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation // Final|Exec|Native|Public // @ game+0x45dd720
	void TeleportCrewMemberToShip(struct FString ActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip // Final|Exec|Native|Public // @ game+0x45dd680
	void TeleportAllPlayersToShip(); // Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip // Final|Exec|Native|Public // @ game+0x45dd660
	void TeleportAllPlayersToPlayerStart(); // Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart // Final|Exec|Native|Public // @ game+0x45dd640
	void TeleportAllCrewsToShips(); // Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips // Final|Exec|Native|Public // @ game+0x45dd620
	void TeleportAllCrewsToCrewSpawnLocations(); // Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations // Final|Exec|Native|Public // @ game+0x45dd600
	void TeleportActorToTrackedActorType(struct FString ActorIdString, int32_t DestinationActorType); // Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45dd520
	void TeleportActorToTeleportLocationActor(struct FString ControllerActorIdString, struct FString TeleportLocationActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45dd420
	void TeleportActorToPlayerBuriedDigSite(struct FString ActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportActorToPlayerBuriedDigSite // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45dd380
	void TeleportActorToLocation(struct FString ActorIdString, float LocationX, float LocationY, float LocationZ, float Yaw); // Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45dd1c0
	void TeleportActorToIsland(struct FString ActorIdString, struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45dd0c0
	void TeleportActorToDigSite(struct FString ActorIdString, bool WasBuriedByPlayer); // Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45dcfd0
	void TeleportActorToActorWithOffset(struct FString ActorIdString, struct FString DestinationActorIdString, float OffsetX, float OffsetY, float OffsetZ); // Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45dce10
	void SwitchActiveStory(struct FString StoryNameToRemove, struct FString StoryNameToAdd, bool AddIfNonExistentStory); // Function AthenaCheat.AthenaCheatManager.SwitchActiveStory // Final|Exec|Native|Public // @ game+0x45dccd0
	void SuperShovel(); // Function AthenaCheat.AthenaCheatManager.SuperShovel // Final|Exec|Native|Public // @ game+0x45dccb0
	void SuperSailor(); // Function AthenaCheat.AthenaCheatManager.SuperSailor // Final|Exec|Native|Public // @ game+0x45dcc90
	void StraightenAllTrinketsOnOwnShip(); // Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnOwnShip // Final|Exec|Native|Public // @ game+0x45dcc70
	void StraightenAllTrinketsOnAllShips(); // Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnAllShips // Final|Exec|Native|Public // @ game+0x45dcc50
	void StoreWieldedItemInBootyStorageInCurrentIsland(); // Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland // Final|Exec|Native|Public // @ game+0x45dcc30
	void StoreWieldedItemInBootyStorage(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage // Final|Exec|Native|Public // @ game+0x45dcb90
	void StoreShipLocation(float LocationX, float LocationY, float LocationZ, float Yaw); // Function AthenaCheat.AthenaCheatManager.StoreShipLocation // Final|Exec|Native|Public // @ game+0x45dca40
	void StopShip(); // Function AthenaCheat.AthenaCheatManager.StopShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45dca20
	void StopPetHangout(); // Function AthenaCheat.AthenaCheatManager.StopPetHangout // Final|Exec|Native|Public // @ game+0x45dca00
	void StopOverridingUGCState(); // Function AthenaCheat.AthenaCheatManager.StopOverridingUGCState // Final|Exec|Native|Public // @ game+0x45dc9e0
	void StopLocalSequences(); // Function AthenaCheat.AthenaCheatManager.StopLocalSequences // Final|Exec|Native|Public // @ game+0x45dc9c0
	void StopAllShips(); // Function AthenaCheat.AthenaCheatManager.StopAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45dc9a0
	void StopAllPetsHangout(); // Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout // Final|Exec|Native|Public // @ game+0x45dc980
	void StockShip(struct FString EntitlementAndAmountString); // Function AthenaCheat.AthenaCheatManager.StockShip // Final|Exec|Native|Public // @ game+0x45dc8e0
	void StartVoyage(struct FString SourceAssetName, bool Development); // Function AthenaCheat.AthenaCheatManager.StartVoyage // Final|Exec|Native|Public // @ game+0x45dc7f0
	void StartTimedStatsCapture(float CaptureLengthInSeconds); // Function AthenaCheat.AthenaCheatManager.StartTimedStatsCapture // Final|Exec|Native|Public // @ game+0x45dc770
	void StartSicknessOnPlayer(); // Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer // Final|Exec|Native|Public // @ game+0x45dc750
	void StartSelectedRomeVoyage(struct FString RomeVoyageString); // Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage // Final|Exec|Native|Public // @ game+0x45dc6b0
	void StartNearestVolcano(); // Function AthenaCheat.AthenaCheatManager.StartNearestVolcano // Final|Exec|Native|Public // @ game+0x45dc690
	void StartNearestGeysers(); // Function AthenaCheat.AthenaCheatManager.StartNearestGeysers // Final|Exec|Native|Public // @ game+0x45dc670
	void StartNearestEarthquake(); // Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake // Final|Exec|Native|Public // @ game+0x45dc650
	void StartInvasionMatchmaking(); // Function AthenaCheat.AthenaCheatManager.StartInvasionMatchmaking // Final|Exec|Native|Public // @ game+0x45dc630
	void StartGuildSessionAsCrew(); // Function AthenaCheat.AthenaCheatManager.StartGuildSessionAsCrew // Final|Exec|Native|Public // @ game+0x45dc610
	void StartDemoSession(); // Function AthenaCheat.AthenaCheatManager.StartDemoSession // Final|Exec|Native|Public // @ game+0x45dc5f0
	void StartCargoRunFromNearestNPC(int32_t NumOfCrates); // Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC // Final|Exec|Native|Public // @ game+0x45dc570
	void StartCaptaincySessionAsNewCrew(); // Function AthenaCheat.AthenaCheatManager.StartCaptaincySessionAsNewCrew // Final|Exec|Native|Public // @ game+0x45dc550
	void StartAshenLordGeysers(); // Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers // Final|Exec|Native|Public // @ game+0x45dc530
	void StartAllVolcanos(); // Function AthenaCheat.AthenaCheatManager.StartAllVolcanos // Final|Exec|Native|Public // @ game+0x45dc510
	void StartAllCrewVoyages(); // Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages // Final|Exec|Native|Public // @ game+0x45dc4f0
	void StarFieldMaskStartSkySpin(); // Function AthenaCheat.AthenaCheatManager.StarFieldMaskStartSkySpin // Final|Exec|Native|Public // @ game+0x45dc4d0
	void SpireStreamOut(int32_t SpireIndex); // Function AthenaCheat.AthenaCheatManager.SpireStreamOut // Final|Exec|Native|Public // @ game+0x45dc450
	void SpireStreamIn(int32_t SpireIndex); // Function AthenaCheat.AthenaCheatManager.SpireStreamIn // Final|Exec|Native|Public // @ game+0x45dc3d0
	void SpinShip(float YawSpdInDegreesPerSecond); // Function AthenaCheat.AthenaCheatManager.SpinShip // Final|Exec|Native|Public // @ game+0x45dc350
	void SpawnWatercraftUnlimited(struct FString WatercraftClassString); // Function AthenaCheat.AthenaCheatManager.SpawnWatercraftUnlimited // Final|Exec|Native|Public // @ game+0x45dc2b0
	void SpawnWatercraft(struct FString WatercraftClassString); // Function AthenaCheat.AthenaCheatManager.SpawnWatercraft // Final|Exec|Native|Public // @ game+0x45dc210
	void SpawnTreasureChestOfType(struct FString ChestTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x45dc160
	void SpawnTreasureArtifact(struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact // Final|Exec|Native|Public // @ game+0x45dc0c0
	void SpawnTinySharkAtLocation(float X, float Y, float Z, int32_t PartIndex); // Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation // Final|Exec|Native|Public // @ game+0x45dbf70
	void SpawnTinySharkAtCurrentLocation(int32_t ControllerParamIndex, int32_t PartIndex); // Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation // Final|Exec|Native|Public // @ game+0x45dbeb0
	void SpawnStrongholdKeyFromGameEventType(struct FString FortEventName); // Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType // Final|Exec|Native|Public|HasOutParms // @ game+0x45dbe00
	void SpawnStrongholdKey(); // Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey // Final|Exec|Native|Public // @ game+0x45dbde0
	void SpawnSmallShipAtIsland(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45dbd40
	void SpawnSmallShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnSmallShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45dbbf0
	void SpawnSkeletonAtNearestAISpawnPoint(); // Function AthenaCheat.AthenaCheatManager.SpawnSkeletonAtNearestAISpawnPoint // Final|Exec|Native|Public // @ game+0x45dbbd0
	void SpawnShipOfType(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw, struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnShipOfType // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45dba10
	void SpawnShipInFrontOfNearestAIInteractable(float XProportion, float YProportion, float Yaw, struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable // Final|Exec|Native|Public // @ game+0x45db890
	void SpawnShipFromDesc(struct FString InShipDescAssetString, float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45db6d0
	void SpawnShipAtIsland(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45db630
	void SpawnShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45db4e0
	void SpawnSeagull(); // Function AthenaCheat.AthenaCheatManager.SpawnSeagull // Final|Exec|Native|Public // @ game+0x45db4c0
	void SpawnRandomSeagull(); // Function AthenaCheat.AthenaCheatManager.SpawnRandomSeagull // Final|Exec|Native|Public // @ game+0x45db4a0
	void SpawnOceanCrawlersOnShip(); // Function AthenaCheat.AthenaCheatManager.SpawnOceanCrawlersOnShip // Final|Exec|Native|Public // @ game+0x45db480
	void SpawnNumberOfAI(struct FString AIDescString, int32_t NumToSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI // Final|Exec|Native|Public // @ game+0x45db3a0
	void SpawnNightmareAggressiveGhostShipEncountersRandom(); // Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom // Final|Exec|Native|Public // @ game+0x45db380
	void SpawnNightmareAggressiveGhostShipEncountersNearToPlayer(); // Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer // Final|Exec|Native|Public // @ game+0x45db360
	void SpawnMultipleTreasureChestsOfType(struct FString ChestTypeString, int32_t Num); // Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x45db260
	void SpawnMessageInABottle(struct FString MessageInABottleTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle // Final|Exec|Native|Public // @ game+0x45db1c0
	void SpawnMermaid(); // Function AthenaCheat.AthenaCheatManager.SpawnMermaid // Final|Exec|Native|Public // @ game+0x45db1a0
	void SpawnMerchantFauna(struct FString FaunaTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna // Final|Exec|Native|Public // @ game+0x45db100
	void SpawnMerchantCrate(struct FString MerchantCrateTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate // Final|Exec|Native|Public // @ game+0x45db060
	void SpawnMerchantCargo(struct FString MerchantCargoTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo // Final|Exec|Native|Public // @ game+0x45dafc0
	void SpawnKrakenAtCurrentLocationWithNumTentacles(uint32_t NumTentacles); // Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles // Final|Exec|Native|Public // @ game+0x45daf40
	void SpawnKrakenAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation // Final|Exec|Native|Public // @ game+0x45daf20
	void SpawnItemOnFloor(struct FString ItemString); // Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor // Final|Exec|Native|Public // @ game+0x45dae80
	void SpawnItemInHand(struct FString ItemString); // Function AthenaCheat.AthenaCheatManager.SpawnItemInHand // Final|Exec|Native|Public // @ game+0x45dade0
	void SpawnGoldMound(struct FString GoldMoundTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnGoldMound // Final|Exec|Native|Public // @ game+0x45dad40
	void SpawnGeyserAtPlayerLocationWithDormancy(float Dormancy); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy // Final|Exec|Native|Public // @ game+0x45dacc0
	void SpawnGeyserAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation // Final|Exec|Native|Public // @ game+0x45daca0
	void SpawnGeyserAtLocation(float LocationX, float LocationY, float LocationZ, float Dormancy); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtLocation // Final|Exec|Native|Public // @ game+0x45dab50
	void SpawnFogAtPlayerPosition(); // Function AthenaCheat.AthenaCheatManager.SpawnFogAtPlayerPosition // Final|Exec|Native|Public // @ game+0x45dab30
	void SpawnFishAtPlayerLocation(struct FString InBaitType); // Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation // Final|Exec|Native|Public // @ game+0x45daa90
	void SpawnFirework(struct FString FireworkItemString); // Function AthenaCheat.AthenaCheatManager.SpawnFirework // Final|Exec|Native|Public // @ game+0x45da9f0
	void SpawnCursedCannonball(struct FString CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball // Final|Exec|Native|Public // @ game+0x45da950
	void SpawnContextualPrompt(struct FString PromptAccessKey); // Function AthenaCheat.AthenaCheatManager.SpawnContextualPrompt // Final|Exec|Native|Public // @ game+0x45da8b0
	void SpawnCollectorsChestOfType(struct FString ChestTypeString, struct FString RewardId); // Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x45da780
	void SpawnCargoRunCrate(struct FString SpawnCargoRunCrateString); // Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate // Final|Exec|Native|Public // @ game+0x45da6e0
	void SpawnCabinDoorInFrontOfPlayer(float Distance); // Function AthenaCheat.AthenaCheatManager.SpawnCabinDoorInFrontOfPlayer // Final|Exec|Native|Public // @ game+0x45da660
	void SpawnBountyReward(struct FString BountyTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnBountyReward // Final|Exec|Native|Public // @ game+0x45da5c0
	void SpawnBootyPickupPoint(); // Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint // Final|Exec|Native|Public // @ game+0x45da5a0
	void SpawnBarrelGroup(bool ForcedCloseSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup // Final|Exec|Native|Public // @ game+0x45da510
	void SpawnAThousandTreasureChests(); // Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests // Final|Exec|Native|Public // @ game+0x45da330
	void SpawnAndEquipDebugWieldable(struct FString DebugWieldableTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable // Final|Exec|Native|Public // @ game+0x45da470
	void SpawnAllBooty(int32_t InNumOfEachToSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnAllBooty // Final|Exec|Native|Public // @ game+0x45da3f0
	void SpawnAINoTrigger(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger // Final|Exec|Native|Public // @ game+0x45da290
	void SpawnAIEncounter(struct FString AIEncounterString); // Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter // Final|Exec|Native|Public // @ game+0x45da1f0
	void SpawnAIAtNearestAISpawnPoint(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint // Final|Exec|Native|Public // @ game+0x45da150
	void SpawnAIAtLocationDelayed(struct FString AIDescString, float LocationX, float LocationY, float LocationZ, float Yaw, float Delay); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed // Final|Exec|Native|Public // @ game+0x45d9f60
	void SpawnAIAtCurrentLocationDelayed(struct FString AIDescString, float Delay); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed // Final|Exec|Native|Public // @ game+0x45d9e70
	void SpawnAI(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAI // Final|Exec|Native|Public // @ game+0x45d9dd0
	void SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid // Final|Exec|Native|Public // @ game+0x45da3d0
	void SpawnAggressiveGhostShipEncounterSpireFriendlyFormation(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation // Final|Exec|Native|Public // @ game+0x45da3b0
	void SpawnAggressiveGhostShipEncounterSpireEnemyFormation(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation // Final|Exec|Native|Public // @ game+0x45da390
	void SpawnAggressiveGhostShipEncounterSpire(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire // Final|Exec|Native|Public // @ game+0x45da370
	void SpawnAggressiveGhostShipEncounter(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter // Final|Exec|Native|Public // @ game+0x45da350
	void SmoulderClosestShipFire(); // Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d9db0
	void SmoulderAllShipFires(); // Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d9d90
	void SlowMotionOverride(bool InValue); // Function AthenaCheat.AthenaCheatManager.SlowMotionOverride // Final|Exec|Native|Public // @ game+0x45d9d00
	void SkipToEndOfOnboarding(); // Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding // Final|Exec|Native|Public // @ game+0x45d9ce0
	void SinkShipWithKeelOverIndex(int32_t KeelOverConfigIndex); // Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex // Final|Exec|Native|Public // @ game+0x45d9c60
	void SinkShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.SinkShipByActorId // Final|Exec|Native|Public // @ game+0x45d9bc0
	void SinkShip(); // Function AthenaCheat.AthenaCheatManager.SinkShip // Final|Exec|Native|Public // @ game+0x45d9ba0
	void SinkClosestItemProxy(); // Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy // Final|Exec|Native|Public // @ game+0x45d9b80
	void SinkAllBarrels(); // Function AthenaCheat.AthenaCheatManager.SinkAllBarrels // Final|Exec|Native|Public // @ game+0x45d9b60
	void SinkAllAIShips(); // Function AthenaCheat.AthenaCheatManager.SinkAllAIShips // Final|Exec|Native|Public // @ game+0x45d9b40
	void SingleStickSwap(); // Function AthenaCheat.AthenaCheatManager.SingleStickSwap // Final|Exec|Native|Public // @ game+0x45d9b20
	void SingleStickRight(); // Function AthenaCheat.AthenaCheatManager.SingleStickRight // Final|Exec|Native|Public // @ game+0x45d9b00
	void SingleStickOff(); // Function AthenaCheat.AthenaCheatManager.SingleStickOff // Final|Exec|Native|Public // @ game+0x45d9ae0
	void SingleStickLeft(); // Function AthenaCheat.AthenaCheatManager.SingleStickLeft // Final|Exec|Native|Public // @ game+0x45d9ac0
	void SimulateTunnelFailure(); // Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure // Final|Exec|Native|Public // @ game+0x45d9aa0
	void SimulatePetReactRequest(struct FString Id); // Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest // Final|Exec|Native|Public // @ game+0x45d9a00
	void SimulatePetReactCancellation(struct FString Id); // Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation // Final|Exec|Native|Public // @ game+0x45d9960
	void SignalActiveGlobalVoyageDelaySteps(); // Function AthenaCheat.AthenaCheatManager.SignalActiveGlobalVoyageDelaySteps // Final|Exec|Native|Public // @ game+0x45d9940
	void ShowTaleDebug_WithVariables(); // Function AthenaCheat.AthenaCheatManager.ShowTaleDebug_WithVariables // Final|Exec|Native|Public // @ game+0x45d9920
	void ShowTaleDebug(); // Function AthenaCheat.AthenaCheatManager.ShowTaleDebug // Final|Exec|Native|Public // @ game+0x45d9900
	void ShowShipMilestoneToast(struct FString MilestoneGuid, struct FString MilestoneAlignment, uint64_t MilestoneLevel, struct FString ShipName); // Function AthenaCheat.AthenaCheatManager.ShowShipMilestoneToast // Final|Exec|Native|Public // @ game+0x45d9770
	void ShowRandomCrewMemberGamerCard(); // Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard // Final|Exec|Native|Public // @ game+0x45d9750
	void ShowPlayerMilestoneToast(struct FString MilestoneGuid, struct FString MilestoneAlignment, uint64_t MilestoneLevel); // Function AthenaCheat.AthenaCheatManager.ShowPlayerMilestoneToast // Final|Exec|Native|Public // @ game+0x45d9610
	void ShowEmissaryVoteIndicators(); // Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators // Final|Exec|Native|Public // @ game+0x45d95f0
	void ShowAllWelds(); // Function AthenaCheat.AthenaCheatManager.ShowAllWelds // Final|Exec|Native|Public // @ game+0x45d9530
	void ShowAllianceStatus(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus // Final|Exec|Native|Public // @ game+0x45d9550
	void ShipwrecksSpawnOne(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ); // Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne // Final|Exec|Native|Public // @ game+0x45d9420
	void ShipwrecksSpawnCustom(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, struct FString WreckAsset); // Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnCustom // Final|Exec|Native|Public // @ game+0x45d92a0
	void ShipwrecksRemoveCustom(); // Function AthenaCheat.AthenaCheatManager.ShipwrecksRemoveCustom // Final|Exec|Native|Public // @ game+0x45d9280
	void ShipwrecksRegen(); // Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen // Final|Exec|Native|Public // @ game+0x45d9260
	void ShipUpdateMassProperies(); // Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies // Final|Exec|Native|Public // @ game+0x45d9240
	void ShipSurface(); // Function AthenaCheat.AthenaCheatManager.ShipSurface // Final|Exec|Native|Public // @ game+0x45d9220
	void ShipDive(); // Function AthenaCheat.AthenaCheatManager.ShipDive // Final|Exec|Native|Public // @ game+0x45d9200
	void SetWheelAngle(float Angle); // Function AthenaCheat.AthenaCheatManager.SetWheelAngle // Final|Exec|Native|Public // @ game+0x45d9180
	void SetWeaponsLockedOut(bool WeaponsLockedOut); // Function AthenaCheat.AthenaCheatManager.SetWeaponsLockedOut // Final|Exec|Native|Public // @ game+0x45d90f0
	void SetWaveFlag(int32_t InFlag); // Function AthenaCheat.AthenaCheatManager.SetWaveFlag // Final|Exec|Native|Public // @ game+0x45d9070
	void SetWaterWaveParams(float Amplitude, float WaveLength, float PropagationSpeed); // Function AthenaCheat.AthenaCheatManager.SetWaterWaveParams // Final|Exec|Native|Public // @ game+0x45d8f60
	void SetVoiceChatEndpointXAudio2(); // Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointXAudio2 // Final|Exec|Native|Public // @ game+0x45d8f40
	void SetVoiceChatEndpointWwise(); // Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise // Final|Exec|Native|Public // @ game+0x45d8f20
	void SetUnattenuatedChatMixingMethodToUseWwise(); // Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise // Final|Exec|Native|Public // @ game+0x45d8f00
	void SetUnattenuatedChatMixingMethodToUsePlatform(); // Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform // Final|Exec|Native|Public // @ game+0x45d8ee0
	void SetTrinketsEnabled(bool InTrinketsEnabled); // Function AthenaCheat.AthenaCheatManager.SetTrinketsEnabled // Final|Exec|Native|Public // @ game+0x45d8e50
	void SetTrinketNudgeChanceMaxOnAllShips(); // Function AthenaCheat.AthenaCheatManager.SetTrinketNudgeChanceMaxOnAllShips // Final|Exec|Native|Public // @ game+0x45d8e30
	void SetTinySharkToOneHealth(); // Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth // Final|Exec|Native|Public // @ game+0x45d8e10
	void SetTimeScalar(float TimeScalar); // Function AthenaCheat.AthenaCheatManager.SetTimeScalar // Final|Exec|Native|Public // @ game+0x45d8d90
	void SetTimeHoursAndMinutes(int32_t Hours, int32_t Minutes); // Function AthenaCheat.AthenaCheatManager.SetTimeHoursAndMinutes // Final|Exec|Native|Public // @ game+0x45d8cd0
	void SetTime(int32_t Hours); // Function AthenaCheat.AthenaCheatManager.SetTime // Final|Exec|Native|Public // @ game+0x45d8c50
	void SetTaleSelectorSeed(int32_t Seed); // Function AthenaCheat.AthenaCheatManager.SetTaleSelectorSeed // Final|Exec|Native|Public // @ game+0x45d8bd0
	void SetShroudbreakerActive(bool bActive); // Function AthenaCheat.AthenaCheatManager.SetShroudbreakerActive // Final|Exec|Native|Public // @ game+0x45d8b40
	void SetShipYaw(float Yaw); // Function AthenaCheat.AthenaCheatManager.SetShipYaw // Final|Exec|Native|Public // @ game+0x45d8ac0
	void SetShipWheelFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired // Final|Exec|Native|Public // @ game+0x45d8aa0
	void SetShipWheelFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged // Final|Exec|Native|Public // @ game+0x45d8a80
	void SetShipRoll(float Roll); // Function AthenaCheat.AthenaCheatManager.SetShipRoll // Final|Exec|Native|Public // @ game+0x45d8a00
	void SetShipName(struct FString InShipName); // Function AthenaCheat.AthenaCheatManager.SetShipName // Final|Exec|Native|Public // @ game+0x45d8960
	void SetShipFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged // Final|Exec|Native|Public // @ game+0x45d8940
	void SetShipCapstanFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired // Final|Exec|Native|Public // @ game+0x45d8920
	void SetShipCapstanFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged // Final|Exec|Native|Public // @ game+0x45d8900
	void SetShipBuoyancyBlend(float UnaryBlend); // Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend // Final|Exec|Native|Public // @ game+0x45d8880
	void SetSeaFortAllEnemiesDeadOnAlignmentFlag(int32_t InFort, bool IsDead); // Function AthenaCheat.AthenaCheatManager.SetSeaFortAllEnemiesDeadOnAlignmentFlag // Final|Exec|Native|Public // @ game+0x45d87c0
	void SetSeaFortAlignment(int32_t InFort, int32_t InAlignment); // Function AthenaCheat.AthenaCheatManager.SetSeaFortAlignment // Final|Exec|Native|Public // @ game+0x45d8700
	void SetSailLoweredProportions(float Proportion); // Function AthenaCheat.AthenaCheatManager.SetSailLoweredProportions // Final|Exec|Native|Public // @ game+0x45d8680
	void SetSailAngles(float Angle); // Function AthenaCheat.AthenaCheatManager.SetSailAngles // Final|Exec|Native|Public // @ game+0x45d8600
	void SetRitualTableRequiredPlayersOverride(int32_t RequiredPlayerCount); // Function AthenaCheat.AthenaCheatManager.SetRitualTableRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x45d8580
	void SetPreventLeakingOnAllShips(); // Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips // Final|Exec|Native|Public // @ game+0x45d8560
	void SetPreventLeakingOnAllDamageZones(bool PreventLeaking); // Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones // Final|Exec|Native|Public // @ game+0x45d84d0
	void SetPlayerVisibleToAI(); // Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI // Final|Exec|Native|Public // @ game+0x45d84b0
	void SetPlayerMaxTicks(int32_t InMaxTicksPerFrame); // Function AthenaCheat.AthenaCheatManager.SetPlayerMaxTicks // Final|Exec|Native|Public // @ game+0x45d8430
	void SetPlayerInvisibleToAI(); // Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI // Final|Exec|Native|Public // @ game+0x45d8410
	void SetPlayerInert(bool IsInert); // Function AthenaCheat.AthenaCheatManager.SetPlayerInert // Final|Exec|Native|Public // @ game+0x45d8380
	void SetPlayerGuildSlotsAreFull(bool InSlotsAreFull); // Function AthenaCheat.AthenaCheatManager.SetPlayerGuildSlotsAreFull // Final|Exec|Native|Public // @ game+0x45d82f0
	void SetPlayerCanInviteToGuild(bool InCanInvite); // Function AthenaCheat.AthenaCheatManager.SetPlayerCanInviteToGuild // Final|Exec|Native|Public // @ game+0x45d8260
	void SetPhotoMode(bool Enabled); // Function AthenaCheat.AthenaCheatManager.SetPhotoMode // Final|Exec|Native|Public // @ game+0x45d81d0
	void SetPetMovementTimeWindow(float TimeWindow); // Function AthenaCheat.AthenaCheatManager.SetPetMovementTimeWindow // Final|Exec|Native|Public // @ game+0x45d8150
	void SetOverridenUGCState(bool InOverridenUGCState); // Function AthenaCheat.AthenaCheatManager.SetOverridenUGCState // Final|Exec|Native|Public // @ game+0x45d80c0
	void SetNonCrewChatSpatialisation(bool Enabled); // Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation // Final|Exec|Native|Public // @ game+0x45d8030
	void SetMaxNumOfSpawnedAI(int32_t MaxNumOfSpawnedActors); // Function AthenaCheat.AthenaCheatManager.SetMaxNumOfSpawnedAI // Final|Exec|Native|Public // @ game+0x45d7fb0
	void SetMaxMovingPetsOnShips(int32_t MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnShips // Final|Exec|Native|Public // @ game+0x45d7f30
	void SetMaxMovingPetsOnServer(int32_t MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnServer // Final|Exec|Native|Public // @ game+0x45d7eb0
	void SetMaxMovingPetsOnLand(int32_t MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnLand // Final|Exec|Native|Public // @ game+0x45d7e30
	void SetMastsFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired // Final|Exec|Native|Public // @ game+0x45d7e10
	void SetMastsFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged // Final|Exec|Native|Public // @ game+0x45d7df0
	void SetKnockbackDisabled(bool Disabled); // Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled // Exec|Native|Public // @ game+0x45d7d60
	void SetIsTinSession(bool InIsCaptainedSession); // Function AthenaCheat.AthenaCheatManager.SetIsTinSession // Final|Exec|Native|Public // @ game+0x45d7cd0
	void SetIsShipCustomizationTinOnly(bool InIsShipCustomizationCaptainOnly); // Function AthenaCheat.AthenaCheatManager.SetIsShipCustomizationTinOnly // Final|Exec|Native|Public // @ game+0x45d7c40
	void SetIsCaptain(bool InIsCaptain); // Function AthenaCheat.AthenaCheatManager.SetIsCaptain // Final|Exec|Native|Public // @ game+0x45d7bb0
	void SetIdleDisconnectEnabled(bool Enabled); // Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled // Final|Exec|Native|Public // @ game+0x45d7b20
	void SetHealthInfoReplicateOverride(bool bActive); // Function AthenaCheat.AthenaCheatManager.SetHealthInfoReplicateOverride // Final|Exec|Native|Public // @ game+0x45d7a90
	void SetGuildLevelToRequiredLevelToUnlockGuildEmissary(); // Function AthenaCheat.AthenaCheatManager.SetGuildLevelToRequiredLevelToUnlockGuildEmissary // Final|Exec|Native|Public // @ game+0x45d7a70
	void SetGuildIsFull(struct FString InStringGuildId, bool InGuildIsFull); // Function AthenaCheat.AthenaCheatManager.SetGuildIsFull // Final|Exec|Native|Public // @ game+0x45d7980
	void SetGrogSecondary(bool InValue); // Function AthenaCheat.AthenaCheatManager.SetGrogSecondary // Final|Exec|Native|Public // @ game+0x45d78f0
	void SetGodMode(bool GodModeOn); // Function AthenaCheat.AthenaCheatManager.SetGodMode // Final|Exec|Native|Public // @ game+0x45d7860
	void SetGlitterbeardRequiredPlayersOverride(int32_t RequiredPlayerCount); // Function AthenaCheat.AthenaCheatManager.SetGlitterbeardRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x45d77e0
	void SetFOV(float InNewFOV); // Function AthenaCheat.AthenaCheatManager.SetFOV // Final|Exec|Native|Public // @ game+0x45d75e0
	void SetForceLocalPlayerMoveForwardFlipDistance(float FlipDistance); // Function AthenaCheat.AthenaCheatManager.SetForceLocalPlayerMoveForwardFlipDistance // Final|Exec|Native|Public // @ game+0x45d7760
	void SetFlameOfFateColour(int32_t InFlameOfFateType); // Function AthenaCheat.AthenaCheatManager.SetFlameOfFateColour // Final|Exec|Native|Public // @ game+0x45d76e0
	void SetFactionStreak(int32_t InStreak); // Function AthenaCheat.AthenaCheatManager.SetFactionStreak // Final|Exec|Native|Public // @ game+0x45d7660
	void SetDebugItemSource(struct FString Source); // Function AthenaCheat.AthenaCheatManager.SetDebugItemSource // Final|Exec|Native|Public // @ game+0x45d7540
	void SetDebugHealthStage(int32_t InStage); // Function AthenaCheat.AthenaCheatManager.SetDebugHealthStage // Final|Exec|Native|Public // @ game+0x45d74c0
	void SetDebugCameraUseProjectileCollisionChannel(bool bUseProjectileChannel); // Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel // Final|Exec|Native|Public // @ game+0x45d7430
	void SetDeathPenaltyRespawnTimer(float InSpawnTimer); // Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyRespawnTimer // Final|Exec|Native|Public // @ game+0x45d73b0
	void SetDeathPenaltyCrewBasedRespawnTimes(float CrewOfOne, float CrewOfTwo, float CrewOfThree, float CrewOfFour); // Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyCrewBasedRespawnTimes // Final|Exec|Native|Public // @ game+0x45d7260
	void SetDamageAllowedToPlayerShip(bool InAllowDamage); // Function AthenaCheat.AthenaCheatManager.SetDamageAllowedToPlayerShip // Final|Exec|Native|Public // @ game+0x45d71d0
	void SetCutsceneResponseCoordinatorDebug(bool Value); // Function AthenaCheat.AthenaCheatManager.SetCutsceneResponseCoordinatorDebug // Final|Exec|Native|Public // @ game+0x45d7140
	void SetCurrentCulture(struct FString Culture); // Function AthenaCheat.AthenaCheatManager.SetCurrentCulture // Final|Exec|Native|Public // @ game+0x45d70a0
	void SetCrewSkill(struct FString TargetCrew, int32_t Skill); // Function AthenaCheat.AthenaCheatManager.SetCrewSkill // Final|Exec|Native|Public // @ game+0x45d6fc0
	void SetCrestTextVisibility(bool InShouldShowText); // Function AthenaCheat.AthenaCheatManager.SetCrestTextVisibility // Final|Exec|Native|Public // @ game+0x45d6f30
	void SetCoordinatedKrakenPhaseAsset(int32_t AssetIndex); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenPhaseAsset // Final|Exec|Native|Public // @ game+0x45d6eb0
	void SetCoordinatedKrakenCurrentPhaseAssetInactive(); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive // Final|Exec|Native|Public // @ game+0x45d6e90
	void SetCoordinatedKrakenCurrentPhaseAssetActive(); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive // Final|Exec|Native|Public // @ game+0x45d6e70
	void SetCapstanPosition(float Position); // Function AthenaCheat.AthenaCheatManager.SetCapstanPosition // Final|Exec|Native|Public // @ game+0x45d6df0
	void SetAxisBinding(struct FString InBindingName, struct FString InKeyName); // Function AthenaCheat.AthenaCheatManager.SetAxisBinding // Final|Exec|Native|Public // @ game+0x45d6cf0
	void SetAllShipsSailsAngle(float Angle); // Function AthenaCheat.AthenaCheatManager.SetAllShipsSailsAngle // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d6c70
	void SetAllShipsSailLoweredProportions(float Proportion); // Function AthenaCheat.AthenaCheatManager.SetAllShipsSailLoweredProportions // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d6bf0
	void SetAllSeaFortsAlignment(int32_t InAlignment); // Function AthenaCheat.AthenaCheatManager.SetAllSeaFortsAlignment // Final|Exec|Native|Public // @ game+0x45d6b70
	void SetAllCapstanPositions(float Position); // Function AthenaCheat.AthenaCheatManager.SetAllCapstanPositions // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d6af0
	void SetAllAIOverrideCannonShotHitChance(float HitChance); // Function AthenaCheat.AthenaCheatManager.SetAllAIOverrideCannonShotHitChance // Final|Exec|Native|Public // @ game+0x45d6a70
	void SetAITeamAttitude(struct FString TeamAString, struct FString TeamBString, struct FString AttitudeString); // Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude // Final|Exec|Native|Public // @ game+0x45d6870
	void SetAIExclusiveAbility(struct FString AIAbilityString); // Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility // Final|Exec|Native|Public // @ game+0x45d67d0
	void SetAIAbilityTimeMultiplier(struct FString AIAbilityString, float IntervalCooldownMultiplier, float ActivationCooldownMultiplier); // Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier // Final|Exec|Native|Public // @ game+0x45d66a0
	void SetAbilityAlwaysOn(struct FString AIAbilityString); // Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn // Final|Exec|Native|Public // @ game+0x45d69d0
	void SendUpdateVoyageProgressEvent(); // Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent // Final|Exec|Native|Public // @ game+0x45d6680
	void SendStatEvent(uint32_t StatId, uint64_t StatValue); // Function AthenaCheat.AthenaCheatManager.SendStatEvent // Final|Exec|Native|Public // @ game+0x45d65c0
	void SendRewardRequestEvent(struct FString CompanyNameAndRewardIdSeparatedByColon); // Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent // Final|Exec|Native|Public // @ game+0x45d6520
	void SendResetReaperLevelEvent(); // Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent // Final|Exec|Native|Public // @ game+0x45d6500
	void SendPlayerToFerrySinBin(); // Function AthenaCheat.AthenaCheatManager.SendPlayerToFerrySinBin // Final|Exec|Native|Public // @ game+0x45d64e0
	void ScuttleShip(bool InShouldSendCrewToLosingTunnel); // Function AthenaCheat.AthenaCheatManager.ScuttleShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d6450
	void ScreenFadeStart(); // Function AthenaCheat.AthenaCheatManager.ScreenFadeStart // Final|Exec|Native|Public // @ game+0x45d6430
	void ScreenFadeEnd(); // Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd // Final|Exec|Native|Public // @ game+0x45d6410
	void SchedulerToggleUseRemoteService(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleUseRemoteService // Final|Exec|Native|Public // @ game+0x45d63f0
	void SchedulerToggleDebugDraw(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw // Final|Exec|Native|Public // @ game+0x45d63d0
	void SchedulerSkipToNext(); // Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext // Final|Exec|Native|Public // @ game+0x45d63b0
	void SchedulerInitTinyShark(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark // Final|Exec|Native|Public // @ game+0x45d6390
	void SchedulerInitSkellyFort(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort // Final|Exec|Native|Public // @ game+0x45d6370
	void SchedulerInitOceanCrawlersOnShip(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitOceanCrawlersOnShip // Final|Exec|Native|Public // @ game+0x45d6350
	void SchedulerInitLegendarySkellyFort(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitLegendarySkellyFort // Final|Exec|Native|Public // @ game+0x45d6330
	void SchedulerInitKraken(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken // Final|Exec|Native|Public // @ game+0x45d6310
	void SchedulerInitDefault(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault // Final|Exec|Native|Public // @ game+0x45d62f0
	void SchedulerInitAshenLord(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord // Final|Exec|Native|Public // @ game+0x45d62d0
	void SchedulerInitAIShipPassive(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive // Final|Exec|Native|Public // @ game+0x45d6290
	void SchedulerInitAIShipBattle(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle // Final|Exec|Native|Public // @ game+0x45d6270
	void SchedulerInitAIShipAggro(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro // Final|Exec|Native|Public // @ game+0x45d6250
	void SchedulerInitAggroGhostShip(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip // Final|Exec|Native|Public // @ game+0x45d62b0
	void SchedulerAdvance(float Time); // Function AthenaCheat.AthenaCheatManager.SchedulerAdvance // Final|Exec|Native|Public // @ game+0x45d61d0
	void SaveMyShip(); // Function AthenaCheat.AthenaCheatManager.SaveMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d61b0
	void SailShip(); // Function AthenaCheat.AthenaCheatManager.SailShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d6190
	void SailAllShips(); // Function AthenaCheat.AthenaCheatManager.SailAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d6170
	void RewindPhysicsSceneBy(float SecondsToRewindBy); // Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy // Final|Exec|Native|Public // @ game+0x45d60f0
	void RewardPlayer(struct FString RewardId); // Function AthenaCheat.AthenaCheatManager.RewardPlayer // Final|Exec|Native|Public // @ game+0x45d6050
	void ReviveLocalPlayerInstantly(); // Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly // Final|Exec|Native|Public // @ game+0x45d6030
	void ReviveLocalPlayerAccordingToReviveTime(); // Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime // Final|Exec|Native|Public // @ game+0x45d6010
	void RetrieveItemsFromBootyStorageInCurrentIsland(); // Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland // Final|Exec|Native|Public // @ game+0x45d5ff0
	void RetrieveItemsFromBootyStorage(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage // Final|Exec|Native|Public // @ game+0x45d5f50
	void ResurfaceShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId // Final|Exec|Native|Public // @ game+0x45d5eb0
	void RestoreAndRestockShipAndPlayer(); // Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer // Final|Exec|Native|Public // @ game+0x45d5e90
	void RestockIslandBarrels(); // Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels // Final|Exec|Native|Public // @ game+0x45d5e70
	void RestockAllReplenishables(); // Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables // Final|Exec|Native|Public // @ game+0x45d5e50
	void RespawnAllIslandItemSpawners(); // Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners // Final|Exec|Native|Public // @ game+0x45d5e30
	void ResetTinySharkSpawnTimerWithTime(float Timer); // Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimerWithTime // Final|Exec|Native|Public // @ game+0x45d5db0
	void ResetTinySharkSpawnTimer(); // Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimer // Final|Exec|Native|Public // @ game+0x45d5d90
	void ResetTaleSelectorSeed(); // Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed // Final|Exec|Native|Public // @ game+0x45d5d70
	void ResetStats(); // Function AthenaCheat.AthenaCheatManager.ResetStats // Final|Exec|Native|Public // @ game+0x45d5d50
	void ResetRitualTable(); // Function AthenaCheat.AthenaCheatManager.ResetRitualTable // Final|Exec|Native|Public // @ game+0x45d5d30
	void ResetRepairedShipDamage(); // Function AthenaCheat.AthenaCheatManager.ResetRepairedShipDamage // Final|Exec|Native|Public // @ game+0x45d5d10
	void ResetNearestVault(); // Function AthenaCheat.AthenaCheatManager.ResetNearestVault // Final|Exec|Native|Public // @ game+0x45d5cf0
	void ResetNearestSeaFort(); // Function AthenaCheat.AthenaCheatManager.ResetNearestSeaFort // Final|Exec|Native|Public // @ game+0x45d5cd0
	void ResetNearestEventRoom(); // Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom // Final|Exec|Native|Public // @ game+0x45d5cb0
	void ResetMouseDelta(); // Function AthenaCheat.AthenaCheatManager.ResetMouseDelta // Final|Exec|Native|Public // @ game+0x45d5c90
	void ResetMaxNumOfSpawnedAI(); // Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI // Final|Exec|Native|Public // @ game+0x45d5c70
	void ResetMaxMovingPetsOnServerToDefault(); // Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault // Final|Exec|Native|Public // @ game+0x45d5c50
	void ResetLeaveFactionCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetLeaveFactionCooldown // Final|Exec|Native|Public // @ game+0x45d5c30
	void ResetInvasionMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetInvasionMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x45d5c10
	void ResetInitialMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetInitialMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x45d5bf0
	void ResetGlitterbeardTree(); // Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree // Final|Exec|Native|Public // @ game+0x45d5bd0
	void ResetDemoSession(bool StartNewSession); // Function AthenaCheat.AthenaCheatManager.ResetDemoSession // Final|Exec|Native|Public // @ game+0x45d5b40
	void ResetAllShipDamage(); // Function AthenaCheat.AthenaCheatManager.ResetAllShipDamage // Final|Exec|Native|Public // @ game+0x45d5b20
	void ResetAllOverrideCannonShotHitChance(); // Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance // Final|Exec|Native|Public // @ game+0x45d5b00
	void ResetAllMechanisms(); // Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms // Final|Exec|Native|Public // @ game+0x45d5ae0
	void ResetAITeamAttitudes(); // Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes // Final|Exec|Native|Public // @ game+0x45d5a80
	void ResetAIExclusiveAbilities(); // Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities // Final|Exec|Native|Public // @ game+0x45d5a60
	void ResetActiveStories(); // Function AthenaCheat.AthenaCheatManager.ResetActiveStories // Final|Exec|Native|Public // @ game+0x45d5ac0
	void ResetAbilityAlwaysOn(); // Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn // Final|Exec|Native|Public // @ game+0x45d5aa0
	void RequestSmallPassiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip // Final|Exec|Native|Public // @ game+0x45d5a40
	void RequestSmallAggressiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip // Final|Exec|Native|Public // @ game+0x45d5a20
	void RequestMysteriousNotesForPlayer(); // Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer // Final|Exec|Native|Public // @ game+0x45d5a00
	void RequestLargePassiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip // Final|Exec|Native|Public // @ game+0x45d59e0
	void RequestLargeAggressiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip // Final|Exec|Native|Public // @ game+0x45d59c0
	void RequestDiveToAdventure(); // Function AthenaCheat.AthenaCheatManager.RequestDiveToAdventure // Final|Exec|Native|Public // @ game+0x45d59a0
	void RequestCaptainedSessionCrewData(); // Function AthenaCheat.AthenaCheatManager.RequestCaptainedSessionCrewData // Final|Exec|Native|Public // @ game+0x45d5980
	void ReplenishShipWithDebugSpawner(); // Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner // Final|Exec|Native|Public // @ game+0x45d5960
	void ReplenishShip(); // Function AthenaCheat.AthenaCheatManager.ReplenishShip // Final|Exec|Native|Public // @ game+0x45d5940
	void ReplaceShipWithSmallShip(struct FString ShipActorIdConsoleString); // Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip // Final|Exec|Native|Public // @ game+0x45d58a0
	void RepairShipAndClearInternalWater(); // Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater // Final|Exec|Native|Public // @ game+0x45d5880
	void RepairAndClearInternalWaterOnAllShips(); // Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips // Final|Exec|Native|Public // @ game+0x45d5860
	void RenameTreasure(struct FString InVendorName); // Function AthenaCheat.AthenaCheatManager.RenameTreasure // Final|Exec|Native|Public // @ game+0x45d57c0
	void RemoveVoyageFromShip(struct FString SourceAssetName); // Function AthenaCheat.AthenaCheatManager.RemoveVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d5720
	void RemoveSkeletonCurseEntitlement(); // Function AthenaCheat.AthenaCheatManager.RemoveSkeletonCurseEntitlement // Final|Exec|Native|Public // @ game+0x45d5700
	void RemovePetsFromAllPlayers(); // Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers // Final|Exec|Native|Public // @ game+0x45d56e0
	void RemovePetFromPlayer(); // Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer // Final|Exec|Native|Public // @ game+0x45d56c0
	void RemoveLostShipmentsDebugging(); // Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging // Final|Exec|Native|Public // @ game+0x45d56a0
	void RemoveLastAddedVoyageFromShip(); // Function AthenaCheat.AthenaCheatManager.RemoveLastAddedVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d5680
	void RemoveItemInSlot(int32_t SlotIndex); // Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot // Final|Exec|Native|Public // @ game+0x45d5600
	void RemoveGhostCurseEntitlement(); // Function AthenaCheat.AthenaCheatManager.RemoveGhostCurseEntitlement // Final|Exec|Native|Public // @ game+0x45d55e0
	void RemoveDebugPetSpawners(); // Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners // Final|Exec|Native|Public // @ game+0x45d55c0
	void RemoveDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage // Final|Exec|Native|Public // @ game+0x45d55a0
	void RemoveAllSkeletonClothing(); // Function AthenaCheat.AthenaCheatManager.RemoveAllSkeletonClothing // Final|Exec|Native|Public // @ game+0x45d5580
	void RemoveAllFog(); // Function AthenaCheat.AthenaCheatManager.RemoveAllFog // Final|Exec|Native|Public // @ game+0x45d5560
	void RemoveAISpawnContext(struct FString ContextName); // Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext // Final|Exec|Native|Public // @ game+0x45d5420
	void RemoveActiveStory(struct FString StoryName); // Function AthenaCheat.AthenaCheatManager.RemoveActiveStory // Final|Exec|Native|Public // @ game+0x45d54c0
	void RefreshActiveStories(); // Function AthenaCheat.AthenaCheatManager.RefreshActiveStories // Final|Exec|Native|Public // @ game+0x45d5400
	void RebuildPirateFromSeed(int32_t Seed); // Function AthenaCheat.AthenaCheatManager.RebuildPirateFromSeed // Final|Exec|Native|Public // @ game+0x45d5380
	void ReallyScrambleMyGamertag(); // Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag // Final|Exec|Native|Public // @ game+0x45d5360
	void QueryShipStocks(); // Function AthenaCheat.AthenaCheatManager.QueryShipStocks // Final|Exec|Native|Public // @ game+0x45d5340
	void PuzzleManager_ResetAllPuzzlesOnClosestManager(); // Function AthenaCheat.AthenaCheatManager.PuzzleManager_ResetAllPuzzlesOnClosestManager // Final|Exec|Native|Public // @ game+0x45d4f60
	void Puzzle_UnlockLockByIndex(struct FString TargetActor, int32_t LockIndex); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLockByIndex // Final|Exec|Native|Public // @ game+0x45d5260
	void Puzzle_UnlockLock(struct FString TargetActor, struct FGuid Guid); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLock // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x45d5160
	void Puzzle_UnlockAllLocks(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockAllLocks // Final|Exec|Native|Public // @ game+0x45d50c0
	void Puzzle_ResetUnlock(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_ResetUnlock // Final|Exec|Native|Public // @ game+0x45d5020
	void Puzzle_ActivateAllLocks(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_ActivateAllLocks // Final|Exec|Native|Public // @ game+0x45d4f80
	void PushShip(float FwdSpdInMetersPerSecond); // Function AthenaCheat.AthenaCheatManager.PushShip // Final|Exec|Native|Public // @ game+0x45d4ee0
	void PullLatestEmblemProgress(); // Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress // Final|Exec|Native|Public // @ game+0x45d4ec0
	void ProposeVoyageFromShip(struct FString SourceAssetName); // Function AthenaCheat.AthenaCheatManager.ProposeVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d4e20
	void ProposeLastAddedVoyageFromShip(); // Function AthenaCheat.AthenaCheatManager.ProposeLastAddedVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d4e00
	void ProceedToNextContestState(); // Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState // Final|Exec|Native|Public // @ game+0x45d4de0
	void PrintTime(); // Function AthenaCheat.AthenaCheatManager.PrintTime // Final|Exec|Native|Public // @ game+0x45d4dc0
	void PrintNPCs(); // Function AthenaCheat.AthenaCheatManager.PrintNPCs // Final|Exec|Native|Public // @ game+0x45d4da0
	void PrintAllNetworkActors(); // Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors // Final|Exec|Native|Public // @ game+0x45d4d80
	void PrintAISpawners(); // Function AthenaCheat.AthenaCheatManager.PrintAISpawners // Final|Exec|Native|Public // @ game+0x45d4d60
	void PrintAISpawnContexts(); // Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts // Final|Exec|Native|Public // @ game+0x45d4d40
	void PrimeRitualTable(); // Function AthenaCheat.AthenaCheatManager.PrimeRitualTable // Final|Exec|Native|Public // @ game+0x45d4d20
	void PreventShipMotion(); // Function AthenaCheat.AthenaCheatManager.PreventShipMotion // Final|Exec|Native|Public // @ game+0x45d4d00
	void PlayWorldSequence(struct FString InReference); // Function AthenaCheat.AthenaCheatManager.PlayWorldSequence // Final|Exec|Native|Public // @ game+0x45d4bd0
	void PlayLocalSequences(); // Function AthenaCheat.AthenaCheatManager.PlayLocalSequences // Final|Exec|Native|Public // @ game+0x45d4bb0
	void PlayerAnimationOverride(struct FName Name); // Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride // Final|Exec|Native|Public|HasOutParms // @ game+0x45d4c70
	void OverrideShipPartFromCatalogue(struct FString InShipActorIdConsoleString, int32_t InCataloguePartIndex, int32_t InCataloguePartCustomisationIndex); // Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d4a90
	void OpenSkeletonFortDoor(); // Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor // Final|Exec|Native|Public // @ game+0x45d4a70
	void NudgeAllTrinketsOnOwnShip(); // Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnOwnShip // Final|Exec|Native|Public // @ game+0x45d4a50
	void NudgeAllTrinketsOnAllShips(); // Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnAllShips // Final|Exec|Native|Public // @ game+0x45d4a30
	void MoveStormToPlayer(); // Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer // Final|Exec|Native|Public // @ game+0x45d4a10
	void MoveStormToLocation(float LocationX, float LocationY); // Function AthenaCheat.AthenaCheatManager.MoveStormToLocation // Final|Exec|Native|Public // @ game+0x45d4950
	void MoveStormToIsland(struct FString IslandNameString); // Function AthenaCheat.AthenaCheatManager.MoveStormToIsland // Final|Exec|Native|Public // @ game+0x45d48b0
	void MessageBoxOnGraphicsThreadTest(); // Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest // Final|Exec|Native|Public // @ game+0x45d4890
	void MakeSharksBrainDead(); // Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead // Final|Exec|Native|Public // @ game+0x45d4870
	void MakeDebugPetSpawner(); // Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner // Final|Exec|Native|Public // @ game+0x45d4850
	void LogShipHierarchy(); // Function AthenaCheat.AthenaCheatManager.LogShipHierarchy // Final|Exec|Native|Public // @ game+0x45d4830
	void LogServerShipHierarchy(); // Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy // Final|Exec|Native|Public // @ game+0x45d4810
	void LogAITeamAttitudes(); // Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes // Final|Exec|Native|Public // @ game+0x45d47f0
	void LockTradeRouteSelectionToSpecificRouteForMyCrew(struct FString RouteReferencePath); // Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew // Final|Exec|Native|Public // @ game+0x45d4750
	void LockTradeRouteSelectionToSpecificRouteForCrew(struct FGuid CrewId, struct FString RouteReferencePath); // Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x45d4650
	void LocallyUnBreakLeg(); // Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg // Final|Exec|Native|Public // @ game+0x45d4630
	void LocallyDisableTutorial(); // Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial // Final|Exec|Native|Public // @ game+0x45d4610
	void LoadMyShip(); // Function AthenaCheat.AthenaCheatManager.LoadMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d45f0
	void LightLocalBraziers(); // Function AthenaCheat.AthenaCheatManager.LightLocalBraziers // Final|Exec|Native|Public // @ game+0x45d45d0
	void LightBraziersInRadius(float Radius); // Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius // Final|Exec|Native|Public // @ game+0x45d4550
	void LeaveFaction(); // Function AthenaCheat.AthenaCheatManager.LeaveFaction // Final|Exec|Native|Public // @ game+0x45d4530
	void LeaveAlliance(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.LeaveAlliance // Final|Exec|Native|Public // @ game+0x45d4490
	void LayerSpawn(struct FString LayerAsset); // Function AthenaCheat.AthenaCheatManager.LayerSpawn // Final|Exec|Native|Public // @ game+0x45d43f0
	void LayerClearAll(); // Function AthenaCheat.AthenaCheatManager.LayerClearAll // Final|Exec|Native|Public // @ game+0x45d43d0
	void LayerClear(struct FString LayerAsset); // Function AthenaCheat.AthenaCheatManager.LayerClear // Final|Exec|Native|Public // @ game+0x45d4330
	void LaunchPlayer(float Velocity, float Angle); // Function AthenaCheat.AthenaCheatManager.LaunchPlayer // Final|Exec|Native|Public // @ game+0x45d4270
	void KrakenSetTentaclesToOneHealth(); // Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth // Final|Exec|Native|Public // @ game+0x45d4250
	void KrakenAnimatedTentacleThrowPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer // Final|Exec|Native|Public // @ game+0x45d4230
	void KrakenAnimatedTentacleTakeDamage(float Damage); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage // Final|Exec|Native|Public // @ game+0x45d41b0
	void KrakenAnimatedTentacleSwallowPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer // Final|Exec|Native|Public // @ game+0x45d4190
	void KrakenAnimatedTentacleSuckPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer // Final|Exec|Native|Public // @ game+0x45d4170
	void KrakenAnimatedTentaclePowerSlamPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer // Final|Exec|Native|Public // @ game+0x45d4150
	void KrakenAnimatedTentacleKill(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill // Final|Exec|Native|Public // @ game+0x45d4130
	void KrakenAnimatedTentacleIngestPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer // Final|Exec|Native|Public // @ game+0x45d4110
	void KrakenAnimatedTentacleDropPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer // Final|Exec|Native|Public // @ game+0x45d40f0
	void KrakenAnimatedTentacleDespawn(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn // Final|Exec|Native|Public // @ game+0x45d40d0
	void KrakenAnimatedTentacleDefeat(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat // Final|Exec|Native|Public // @ game+0x45d40b0
	void KrakenAnimatedTentacleChangePlayerHoldState(struct FString HoldState); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState // Final|Exec|Native|Public // @ game+0x45d4010
	void KindleClosestShip(); // Function AthenaCheat.AthenaCheatManager.KindleClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d3ff0
	void KindleAllShipFires(); // Function AthenaCheat.AthenaCheatManager.KindleAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d3fd0
	void KillPlayer(); // Function AthenaCheat.AthenaCheatManager.KillPlayer // Final|Exec|Native|Public // @ game+0x45d3fb0
	void KillCrew(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.KillCrew // Final|Exec|Native|Public // @ game+0x45d3f10
	void KillAllSkeletons(); // Function AthenaCheat.AthenaCheatManager.KillAllSkeletons // Final|Exec|Native|Public // @ game+0x45d3ef0
	void KillAllPlayers(); // Function AthenaCheat.AthenaCheatManager.KillAllPlayers // Final|Exec|Native|Public // @ game+0x45d3ed0
	void KillAllOtherPlayers(); // Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers // Final|Exec|Native|Public // @ game+0x45d3eb0
	void KillAllOtherPlayerCharacters(); // Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters // Final|Exec|Native|Public // @ game+0x45d3e90
	void KillAllDebugAISpawners(); // Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners // Final|Exec|Native|Public // @ game+0x45d3e70
	void KillAllCrews(); // Function AthenaCheat.AthenaCheatManager.KillAllCrews // Final|Exec|Native|Public // @ game+0x45d3e50
	void KillAllAI(); // Function AthenaCheat.AthenaCheatManager.KillAllAI // Final|Exec|Native|Public // @ game+0x45d3df0
	void KillAllAggressiveGhostShips(); // Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips // Final|Exec|Native|Public // @ game+0x45d3e30
	void KillAllAggressiveGhostShipEncounters(); // Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters // Final|Exec|Native|Public // @ game+0x45d3e10
	void JoinFaction(struct FString FactionName); // Function AthenaCheat.AthenaCheatManager.JoinFaction // Final|Exec|Native|Public // @ game+0x45d3d50
	void JoinAlliance(struct FString OfferingCrew, struct FString AcceptingCrew); // Function AthenaCheat.AthenaCheatManager.JoinAlliance // Final|Exec|Native|Public // @ game+0x45d3c50
	void IPGOverride(struct FName BodyShape, float Distance); // Function AthenaCheat.AthenaCheatManager.IPGOverride // Final|Exec|Native|Public|HasOutParms // @ game+0x45d38b0
	void IPGLoadWithoutClothing(struct FString ActorIdString, struct FString path); // Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing // Final|Exec|Native|Public // @ game+0x45d37b0
	void IPGLoadWithClothing(struct FString ActorIdString, struct FString path); // Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing // Final|Exec|Native|Public // @ game+0x45d36b0
	void IPGLoad(struct FString path); // Function AthenaCheat.AthenaCheatManager.IPGLoad // Final|Exec|Native|Public // @ game+0x45d3610
	void InvincibleEverything(); // Function AthenaCheat.AthenaCheatManager.InvincibleEverything // Final|Exec|Native|Public // @ game+0x45d3c30
	void InterruptSicknessOnPlayer(); // Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer // Final|Exec|Native|Public // @ game+0x45d3c10
	void InfiniteGunAmmo(bool Enabled); // Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo // Final|Exec|Native|Public // @ game+0x45d3b80
	void IncrementTime(int32_t Hours, int32_t Minutes); // Function AthenaCheat.AthenaCheatManager.IncrementTime // Final|Exec|Native|Public // @ game+0x45d3ac0
	void IncrementFactionStreak(); // Function AthenaCheat.AthenaCheatManager.IncrementFactionStreak // Final|Exec|Native|Public // @ game+0x45d3aa0
	void IncrementDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage // Final|Exec|Native|Public // @ game+0x45d3a80
	void IncreaseEmissaryCount(int32_t Amount); // Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount // Final|Exec|Native|Public // @ game+0x45d3a00
	void IgniteShipAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d39e0
	void IgniteLocalPlayer(); // Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d39c0
	void IgniteClosestShip(); // Function AthenaCheat.AthenaCheatManager.IgniteClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d39a0
	void IgniteAllShipFires(); // Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d3980
	void HuntersCryForceRescueSuccess(); // Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueSuccess // Final|Exec|Native|Public // @ game+0x45d35f0
	void HuntersCryForceRescueFail(); // Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueFail // Final|Exec|Native|Public // @ game+0x45d35d0
	void HuntersCryDisableTimedFail(); // Function AthenaCheat.AthenaCheatManager.HuntersCryDisableTimedFail // Final|Exec|Native|Public // @ game+0x45d35b0
	void HitRegSnapshotsToggleOnScreenStatus(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsToggleOnScreenStatus // Final|Exec|Native|Public // @ game+0x45d3590
	void HitRegSnapshotsSetShowPreCorrectedCapsules(bool ShowPreCorrectedCapsules, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowPreCorrectedCapsules // Final|Exec|Native|Public // @ game+0x45d3470
	void HitRegSnapshotsSetShowFullRewindData(bool ShowFullRewindData, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowFullRewindData // Final|Exec|Native|Public // @ game+0x45d3350
	void HitRegSnapshotsSetDisplaySnapshots(bool ShowSnapshots, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplaySnapshots // Final|Exec|Native|Public // @ game+0x45d3230
	void HitRegSnapshotsSetDisplayServerData(bool ShowServerData, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayServerData // Final|Exec|Native|Public // @ game+0x45d3110
	void HitRegSnapshotsSetDisplayDetailedExplanations(bool ShowExplanations, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayDetailedExplanations // Final|Exec|Native|Public // @ game+0x45d2ff0
	void HitRegSnapshotsSetDisplayAttackingClientData(bool ShowClientData, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayAttackingClientData // Final|Exec|Native|Public // @ game+0x45d2ed0
	void HitRegSnapshotsSetDisagreementModeToComponents(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToComponents // Final|Exec|Native|Public // @ game+0x45d2eb0
	void HitRegSnapshotsSetDisagreementModeToAllShots(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToAllShots // Final|Exec|Native|Public // @ game+0x45d2e90
	void HitRegSnapshotsSetDisagreementModeToActors(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToActors // Final|Exec|Native|Public // @ game+0x45d2e70
	void HitRegSnapshotsResetVisibilitySettingsToDefault(bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsResetVisibilitySettingsToDefault // Final|Exec|Native|Public // @ game+0x45d2da0
	void HitRegSnapshotsEnableSystem(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsEnableSystem // Final|Exec|Native|Public // @ game+0x45d2d80
	void HitRegSnapshotsDisableSystem(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDisableSystem // Final|Exec|Native|Public // @ game+0x45d2d60
	void HitRegSnapshotsDestroyAll(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDestroyAll // Final|Exec|Native|Public // @ game+0x45d2d40
	void HitRegSetPlayerProjectilesHitScan(bool Enabled); // Function AthenaCheat.AthenaCheatManager.HitRegSetPlayerProjectilesHitScan // Final|Exec|Native|Public // @ game+0x45d2cb0
	void HideTaleDebug(); // Function AthenaCheat.AthenaCheatManager.HideTaleDebug // Final|Exec|Native|Public // @ game+0x45d2c90
	void HideEmissaryVoteIndicators(); // Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators // Final|Exec|Native|Public // @ game+0x45d2c70
	void HealthSet(float Value); // Function AthenaCheat.AthenaCheatManager.HealthSet // Final|Exec|Native|Public // @ game+0x45d2bf0
	void HealthReset(); // Function AthenaCheat.AthenaCheatManager.HealthReset // Final|Exec|Native|Public // @ game+0x45d2bd0
	void HealthRegenResetToEmpty(); // Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty // Final|Exec|Native|Public // @ game+0x45d2bb0
	void HealthRegenAdd(float Value); // Function AthenaCheat.AthenaCheatManager.HealthRegenAdd // Final|Exec|Native|Public // @ game+0x45d2b30
	void HealthContinuousStopWithTestReason(); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason // Final|Exec|Native|Public // @ game+0x45d2b10
	void HealthContinuousStopWithReason(struct FString Reason); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason // Final|Exec|Native|Public // @ game+0x45d2a70
	void HealthContinuousStartWithTestReason(float Value); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithTestReason // Final|Exec|Native|Public // @ game+0x45d29f0
	void HealthContinuousStartWithReason(float Value, struct FString Reason); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason // Final|Exec|Native|Public // @ game+0x45d2900
	void HealthAdjust(float Amount); // Function AthenaCheat.AthenaCheatManager.HealthAdjust // Final|Exec|Native|Public // @ game+0x45d2880
	void HandInMegalodonSoulToRitualTable(int32_t SoulType); // Function AthenaCheat.AthenaCheatManager.HandInMegalodonSoulToRitualTable // Final|Exec|Native|Public // @ game+0x45d2800
	void God(); // Function AthenaCheat.AthenaCheatManager.God // Exec|Native|Public // @ game+0x45d27e0
	void GetSourceStringHash(struct FString SourceString); // Function AthenaCheat.AthenaCheatManager.GetSourceStringHash // Final|Exec|Native|Public // @ game+0x45d2740
	void GameEventOnDemandAvailabilityServiceToggleDebugDraw(); // Function AthenaCheat.AthenaCheatManager.GameEventOnDemandAvailabilityServiceToggleDebugDraw // Final|Exec|Native|Public // @ game+0x45d2720
	void ForceStopAllPetsDanger(); // Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger // Final|Exec|Native|Public // @ game+0x45d2700
	void ForceStartAllPetsDangerWithChangingThreatLocation(struct FString ResponseType, float UpdateThreatLocationTime); // Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation // Final|Exec|Native|Public // @ game+0x45d2610
	void ForceStartAllPetsDanger(struct FString ResponseType); // Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger // Final|Exec|Native|Public // @ game+0x45d2570
	void ForceSkipTallTaleSteps_WaitAndCutscenes(); // Function AthenaCheat.AthenaCheatManager.ForceSkipTallTaleSteps_WaitAndCutscenes // Final|Exec|Native|Public // @ game+0x45d2550
	void ForceRequestCampaignsFromServices(); // Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices // Final|Exec|Native|Public // @ game+0x45d2530
	void ForcePetHangout(struct FName HangoutName, int32_t PositionIndex); // Function AthenaCheat.AthenaCheatManager.ForcePetHangout // Final|Exec|Native|Public // @ game+0x45d2470
	void ForceOpenShop(); // Function AthenaCheat.AthenaCheatManager.ForceOpenShop // Final|Exec|Native|Public // @ game+0x45d2450
	void ForceNPCOnSurfaceToMove(bool FastMove, bool KeepCurrentLocation); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceToMove // Final|Exec|Native|Public // @ game+0x45d2380
	void ForceNPCOnSurfaceLocation(int32_t LoctationIndex, int32_t LoctationPointIndex); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceLocation // Final|Exec|Native|Public // @ game+0x45d22c0
	void ForceNPCOnShipIsCurrentlyInDanger(bool IsCurrentlyInDanger); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnShipIsCurrentlyInDanger // Final|Exec|Native|Public // @ game+0x45d2230
	void ForceLocalPlayerMoveForward(float ScaleValue); // Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMoveForward // Final|Exec|Native|Public // @ game+0x45d21b0
	void ForceGarbageCollect(); // Function AthenaCheat.AthenaCheatManager.ForceGarbageCollect // Final|Exec|Native|Public // @ game+0x45d2190
	void ForceEmoteWithEmoteProp(struct FName EmoteIdentifier, struct FString EmotePropAssetLocation); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithEmoteProp // Final|Exec|Native|Public|HasOutParms // @ game+0x45d2090
	void ForceEmoteWithDescriptionAndEmoteProp(struct FName EmoteIdentifier, struct FString DisplayName, struct FString AudioDescription, struct FString EmotePropAssetLocation); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescriptionAndEmoteProp // Final|Exec|Native|Public|HasOutParms // @ game+0x45d1ef0
	void ForceEmoteWithDescription(struct FName EmoteIdentifier, struct FString DisplayName, struct FString AudioDescription); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription // Final|Exec|Native|Public|HasOutParms // @ game+0x45d1d90
	void ForceEmote(struct FName EmoteIdentifier); // Function AthenaCheat.AthenaCheatManager.ForceEmote // Final|Exec|Native|Public|HasOutParms // @ game+0x45d1d00
	void ForceCloseShop(); // Function AthenaCheat.AthenaCheatManager.ForceCloseShop // Final|Exec|Native|Public // @ game+0x45d1ce0
	void ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation(struct FString ResponseType, float UpdateThreatLocationTime); // Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation // Final|Exec|Native|Public // @ game+0x45d1bf0
	void ForceAllPetsDangerWithNoiseEvent(struct FString ResponseType); // Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent // Final|Exec|Native|Public // @ game+0x45d1b50
	void ForceAggressiveGhostShipStartSinkingAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation // Final|Exec|Native|Public // @ game+0x45d1b30
	void ForceAggressiveGhostShipStartDisappearAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation // Final|Exec|Native|Public // @ game+0x45d1b10
	void ForceAggressiveGhostShipStartAppearAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation // Final|Exec|Native|Public // @ game+0x45d1af0
	void ForceAggressiveGhostShipPortalJump(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump // Final|Exec|Native|Public // @ game+0x45d1ad0
	void Fly(); // Function AthenaCheat.AthenaCheatManager.Fly // Exec|Native|Public // @ game+0x45d1ab0
	void FloodShipWithKeelOverIndex(float NormalisedWaterAmount, int32_t KeelOverConfigIndex); // Function AthenaCheat.AthenaCheatManager.FloodShipWithKeelOverIndex // Final|Exec|Native|Public // @ game+0x45d19e0
	void FloodShip(float NormalisedWaterAmount); // Function AthenaCheat.AthenaCheatManager.FloodShip // Final|Exec|Native|Public // @ game+0x45d1960
	void FireStartedCaptainedSessionEvent(); // Function AthenaCheat.AthenaCheatManager.FireStartedCaptainedSessionEvent // Final|Exec|Native|Public // @ game+0x45d1940
	void FireSeasonRewardEarnedMessage(int32_t InNumSeason, int32_t InRewardsLevel, bool InMultipleRewards); // Function AthenaCheat.AthenaCheatManager.FireSeasonRewardEarnedMessage // Final|Exec|Native|Public // @ game+0x45d1840
	void FireSeasonGoalProgressionMessage(int32_t InNumSeason, int32_t InPreviousProgress, int32_t InCurrentProgress, int32_t InCompletionTreshold, int32_t InGoalType, struct FString InGoalCategory); // Function AthenaCheat.AthenaCheatManager.FireSeasonGoalProgressionMessage // Final|Exec|Native|Public // @ game+0x45d1670
	void FireSeasonGoalCompletionMessage(int32_t InNumSeason, int32_t InGoalType, struct FString InGoalCategory); // Function AthenaCheat.AthenaCheatManager.FireSeasonGoalCompletionMessage // Final|Exec|Native|Public // @ game+0x45d1550
	void FireOnlineSessionMemberLostEventForMyself(); // Function AthenaCheat.AthenaCheatManager.FireOnlineSessionMemberLostEventForMyself // Final|Exec|Native|Public // @ game+0x45d1530
	void FireLevelCompletionMessage(int32_t InNumSeason, int32_t InLevel, int32_t InTimeSpentInLevel, int32_t InTier, int32_t InTimeSpentInTier, bool InTierCompleted, bool InSeasonCompleted); // Function AthenaCheat.AthenaCheatManager.FireLevelCompletionMessage // Final|Exec|Native|Public // @ game+0x45d1330
	void FireEndedGuildSessionEvent(); // Function AthenaCheat.AthenaCheatManager.FireEndedGuildSessionEvent // Final|Exec|Native|Public // @ game+0x45d1310
	void FireCreatorCrewSignedUpStat(); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewSignedUpStat // Final|Exec|Native|Public // @ game+0x45d12f0
	void FireCreatorCrewMinutesViewedStat(int32_t InNumMinutes); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat // Final|Exec|Native|Public // @ game+0x45d1270
	void FireCreatorCrewMinutesStreamedStat(int32_t InNumMinutes); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesStreamedStat // Final|Exec|Native|Public // @ game+0x45d11f0
	void FireCreatorCrewCurrentViewersStat(int32_t InNumViewers); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewCurrentViewersStat // Final|Exec|Native|Public // @ game+0x45d1170
	void FindOrAddDisplayString(struct FString Namespace, struct FString Key, struct FString SourceString); // Function AthenaCheat.AthenaCheatManager.FindOrAddDisplayString // Final|Exec|Native|Public // @ game+0x45d1010
	void FindDisplayString(struct FString Namespace, struct FString Key); // Function AthenaCheat.AthenaCheatManager.FindDisplayString // Final|Exec|Native|Public // @ game+0x45d0f10
	void FillNearestShipWithTrinkets(); // Function AthenaCheat.AthenaCheatManager.FillNearestShipWithTrinkets // Final|Exec|Native|Public // @ game+0x45d0ef0
	void FakeMigrateBountyQuests(); // Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests // Final|Exec|Native|Public // @ game+0x45d0ed0
	void ExitedStormShipEvent(); // Function AthenaCheat.AthenaCheatManager.ExitedStormShipEvent // Final|Exec|Native|Public // @ game+0x45d0eb0
	void EquipPirateTitle(struct FString PirateTitleType); // Function AthenaCheat.AthenaCheatManager.EquipPirateTitle // Final|Exec|Native|Public // @ game+0x45d0e10
	void EquipCompassInLoadout(); // Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout // Final|Exec|Native|Public // @ game+0x45d0df0
	void EnteredStormShipEvent(); // Function AthenaCheat.AthenaCheatManager.EnteredStormShipEvent // Final|Exec|Native|Public // @ game+0x45d0dd0
	void EndDemoSession(); // Function AthenaCheat.AthenaCheatManager.EndDemoSession // Final|Exec|Native|Public // @ game+0x45d0db0
	void EndCurrentCaptainedSession(); // Function AthenaCheat.AthenaCheatManager.EndCurrentCaptainedSession // Final|Exec|Native|Public // @ game+0x45d0d90
	void EnableVoiceChatMeteringForOutgoingSignals(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals // Final|Exec|Native|Public // @ game+0x45d0d00
	void EnableVoiceChatMeteringForIncomingSignals(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals // Final|Exec|Native|Public // @ game+0x45d0c70
	void EnableStoryServiceCheat(); // Function AthenaCheat.AthenaCheatManager.EnableStoryServiceCheat // Final|Exec|Native|Public // @ game+0x45d0c50
	void EnableStormEffects(char LockReason); // Function AthenaCheat.AthenaCheatManager.EnableStormEffects // Final|Exec|Native|Public // @ game+0x45d0bd0
	void EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay(int32_t TrueFalse); // Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay // Final|Exec|Native|Public // @ game+0x45d0b50
	void EnableNTP(bool Enable); // Function AthenaCheat.AthenaCheatManager.EnableNTP // Final|Exec|Native|Public // @ game+0x45d0ac0
	void EnableMermaidSpawning(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableMermaidSpawning // Final|Exec|Native|Public // @ game+0x45d0a40
	void EnableMermaidDeletion(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableMermaidDeletion // Final|Exec|Native|Public // @ game+0x45d09c0
	void EnableHeadphoneMixing(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableHeadphoneMixing // Final|Exec|Native|Public // @ game+0x45d0930
	void EnableFactionDebug(); // Function AthenaCheat.AthenaCheatManager.EnableFactionDebug // Final|Exec|Native|Public // @ game+0x45d0910
	void EnableEmergentSirenSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning // Final|Exec|Native|Public // @ game+0x45d08f0
	void EnableEmergentSharkSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning // Final|Exec|Native|Public // @ game+0x45d08d0
	void EnableConsoleLogging(); // Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging // Final|Exec|Native|Public // @ game+0x45d08b0
	void EnableCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera // Final|Exec|Native|Protected // @ game+0x45d0890
	void EnableBeaconOnAllMermaids(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids // Final|Exec|Native|Public // @ game+0x45d0810
	void EnableAllEmergentWaterSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning // Final|Exec|Native|Public // @ game+0x45d07f0
	void EnableAIBehaviour(); // Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour // Final|Exec|Native|Public // @ game+0x45d07d0
	void EmptyNearestShipOfTrinkets(); // Function AthenaCheat.AthenaCheatManager.EmptyNearestShipOfTrinkets // Final|Exec|Native|Public // @ game+0x45d07b0
	void DrawVideprinter(struct FString Id, bool Active); // Function AthenaCheat.AthenaCheatManager.DrawVideprinter // Final|Exec|Native|Public // @ game+0x45d06c0
	void DrawTreasureDebug(int32_t Enabled); // Function AthenaCheat.AthenaCheatManager.DrawTreasureDebug // Final|Exec|Native|Public // @ game+0x45d0640
	void DrawTemporaryLandmarkDebug(bool Enabled); // Function AthenaCheat.AthenaCheatManager.DrawTemporaryLandmarkDebug // Final|Exec|Native|Public // @ game+0x45d05b0
	void DrawNearbyAISpawnPointsRanged(float Range); // Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPointsRanged // Final|Exec|Native|Public // @ game+0x45d0530
	void DrawNearbyAISpawnPoints(); // Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints // Final|Exec|Native|Public // @ game+0x45d0510
	void DownPlayer(); // Function AthenaCheat.AthenaCheatManager.DownPlayer // Final|Exec|Native|Public // @ game+0x45d04f0
	void DownAllPlayers(); // Function AthenaCheat.AthenaCheatManager.DownAllPlayers // Final|Exec|Native|Public // @ game+0x45d04d0
	void DownAllOtherPlayers(); // Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers // Final|Exec|Native|Public // @ game+0x45d04b0
	void DownAllOtherPlayerCharacters(); // Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters // Final|Exec|Native|Public // @ game+0x45d0490
	void DouseClosestShip(); // Function AthenaCheat.AthenaCheatManager.DouseClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d0470
	void DouseAllShipFires(); // Function AthenaCheat.AthenaCheatManager.DouseAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45d0450
	void DiveShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.DiveShipByActorId // Final|Exec|Native|Public // @ game+0x45d03b0
	void DisplaySpireLocationsDebug(int32_t Enabled); // Function AthenaCheat.AthenaCheatManager.DisplaySpireLocationsDebug // Final|Exec|Native|Public // @ game+0x45d0330
	void DisplaySingleEmblemProgress(struct FString StatName); // Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress // Final|Exec|Native|Public // @ game+0x45d0290
	void DisplayServersideHitsAtPlayerPosWithDefaults(); // Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults // Final|Exec|Native|Public // @ game+0x45d0270
	void DisplayServersideHitsAtPlayerPos(uint32_t NumSamplesPerDimension, float DistanceBetweenSamples, float TestHeight); // Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPos // Final|Exec|Native|Public // @ game+0x45d0170
	void DisplayServerFPS(); // Function AthenaCheat.AthenaCheatManager.DisplayServerFPS // Final|Exec|Native|Public // @ game+0x45d0150
	void DisplayNonVagueNonUniqueLandmarksForIsland(bool Enabled); // Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland // Final|Exec|Native|Public // @ game+0x45d00c0
	void DisplayLoadingScreenTeleport(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport // Final|Exec|Native|Public // @ game+0x45d00a0
	void DisplayLoadingScreenBoot(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot // Final|Exec|Native|Public // @ game+0x45d0080
	void DisplayLoadingScreenAdventure(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure // Final|Exec|Native|Public // @ game+0x45d0060
	void DisplayLandmarkValidTreasureLocationsForPlayer(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer // Final|Exec|Native|Public // @ game+0x45d0040
	void DisplayLandmarkRegions(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions // Final|Exec|Native|Public // @ game+0x45d0020
	void DisplayLandmarkNames(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames // Final|Exec|Native|Public // @ game+0x45d0000
	void DisplayFallDamageDebug(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug // Final|Exec|Native|Public // @ game+0x45cff80
	void DisplayDrunkenness(bool Flag); // Function AthenaCheat.AthenaCheatManager.DisplayDrunkenness // Final|Exec|Native|Public // @ game+0x45cfef0
	void DismissAllPickupPoints(); // Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints // Final|Exec|Native|Public // @ game+0x45cfed0
	void DisableStormEffects(char LockReason); // Function AthenaCheat.AthenaCheatManager.DisableStormEffects // Final|Exec|Native|Public // @ game+0x45cfe50
	void DisableEmergentSirenSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning // Final|Exec|Native|Public // @ game+0x45cfe30
	void DisableEmergentSharkSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning // Final|Exec|Native|Public // @ game+0x45cfe10
	void DisableConsoleLogging(); // Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging // Final|Exec|Native|Public // @ game+0x45cfdf0
	void DisableCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera // Final|Exec|Native|Protected // @ game+0x45cfdd0
	void DisableAllEmergentWaterSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning // Final|Exec|Native|Public // @ game+0x45cfdb0
	void DisableAIBehaviour(); // Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour // Final|Exec|Native|Public // @ game+0x45cfd90
	void DisableAIAbilities(); // Function AthenaCheat.AthenaCheatManager.DisableAIAbilities // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45cfd70
	void DioramaStartNearest(struct FString Spawner, struct FString DioramaDesc); // Function AthenaCheat.AthenaCheatManager.DioramaStartNearest // Final|Exec|Native|Public // @ game+0x45cfc70
	void DioramaStart(struct FString ActorName, struct FString Spawner, struct FString DioramaDesc); // Function AthenaCheat.AthenaCheatManager.DioramaStart // Final|Exec|Native|Public // @ game+0x45cfb10
	void DioramaKillAllDebug(); // Function AthenaCheat.AthenaCheatManager.DioramaKillAllDebug // Final|Exec|Native|Public // @ game+0x45cfaf0
	void DestroyShip(struct FString ShipActorIdConsoleString); // Function AthenaCheat.AthenaCheatManager.DestroyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45cfa50
	void DestroyNearestDebugReapersChestMarker(); // Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker // Final|Exec|Native|Public // @ game+0x45cfa30
	void DestroyMyShip(); // Function AthenaCheat.AthenaCheatManager.DestroyMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45cfa10
	void DestroyKraken(); // Function AthenaCheat.AthenaCheatManager.DestroyKraken // Final|Exec|Native|Public // @ game+0x45cf9f0
	void DestroyAllTreasureChests(); // Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests // Final|Exec|Native|Public // @ game+0x45cf9d0
	void DestroyAllTinySharks(); // Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks // Final|Exec|Native|Public // @ game+0x45cf9b0
	void DestroyAllSirenStatues(); // Function AthenaCheat.AthenaCheatManager.DestroyAllSirenStatues // Final|Exec|Native|Public // @ game+0x45cf990
	void DestroyAllShips(); // Function AthenaCheat.AthenaCheatManager.DestroyAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45cf970
	void DespawnNumberOfAI(struct FString AITypeString, int32_t NumToDespawn); // Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI // Final|Exec|Native|Public // @ game+0x45cf890
	void DespawnFirstAI(); // Function AthenaCheat.AthenaCheatManager.DespawnFirstAI // Final|Exec|Native|Public // @ game+0x45cf870
	void DespawnAllAggressiveGhostShips(); // Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips // Final|Exec|Native|Public // @ game+0x45cf850
	void DespawnAI(struct FString AITypeString); // Function AthenaCheat.AthenaCheatManager.DespawnAI // Final|Exec|Native|Public // @ game+0x45cf7b0
	void DeleteVoyageHistory(); // Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory // Final|Exec|Native|Public // @ game+0x45cf790
	void DeleteAllMermaids(); // Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids // Final|Exec|Native|Public // @ game+0x45cf770
	void DecrementFactionStreak(); // Function AthenaCheat.AthenaCheatManager.DecrementFactionStreak // Final|Exec|Native|Public // @ game+0x45cf750
	void DecrementDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage // Final|Exec|Native|Public // @ game+0x45cf730
	void DebugLoadRowboat(struct FString WatercraftEntitlement, struct FString LiveryEntitlement); // Function AthenaCheat.AthenaCheatManager.DebugLoadRowboat // Final|Exec|Native|Public // @ game+0x45cf630
	void DebugIslandDelta(); // Function AthenaCheat.AthenaCheatManager.DebugIslandDelta // Final|Exec|Native|Public // @ game+0x45cf610
	void DeactivateSkellyFort(struct FString FortName); // Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort // Final|Exec|Native|Public|HasOutParms // @ game+0x45cf560
	void DeactivateEmissaryFlagCompany(); // Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany // Final|Exec|Native|Public // @ game+0x45cf540
	void DeactivateDeathEffect(); // Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect // Final|Exec|Native|Public // @ game+0x45cf520
	void DamageShipFromRemoteActor(struct FString ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ); // Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor // Final|Exec|Native|Public // @ game+0x45cf2a0
	void DamageShip(float Strength); // Function AthenaCheat.AthenaCheatManager.DamageShip // Final|Exec|Native|Public // @ game+0x45cf220
	void DamagePlayerFromRemoteActor(struct FString ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ); // Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor // Final|Exec|Native|Public // @ game+0x45cefa0
	void DamagePlayer(float Strength); // Function AthenaCheat.AthenaCheatManager.DamagePlayer // Final|Exec|Native|Public // @ game+0x45cef20
	void CustomiseNearestRowboat(struct FString LiveryDescStringRef); // Function AthenaCheat.AthenaCheatManager.CustomiseNearestRowboat // Final|Exec|Native|Public // @ game+0x45cee80
	void CureAllAilings(); // Function AthenaCheat.AthenaCheatManager.CureAllAilings // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45cee60
	void CreateDebugReapersChestMarkerAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation // Final|Exec|Native|Public // @ game+0x45cee40
	void CreateDebugAISpawnerAt(struct FString SpawnerAssetName, struct FString LocationActorName); // Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt // Final|Exec|Native|Public // @ game+0x45ced40
	void CreateDebugAISpawner(struct FString SpawnerAssetName); // Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner // Final|Exec|Native|Public // @ game+0x45ceca0
	void CreateCaptainsLogForCrew(); // Function AthenaCheat.AthenaCheatManager.CreateCaptainsLogForCrew // Final|Exec|Native|Public // @ game+0x45cec80
	void CoordinatedKrakenToggleAI(); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI // Final|Exec|Native|Public // @ game+0x45cec60
	void CoordinatedKrakenRequestAction(struct FString ActionName); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction // Final|Exec|Native|Public // @ game+0x45cebc0
	void CoordinatedKrakenEnableDebugging(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenEnableDebugging // Final|Exec|Native|Public // @ game+0x45ceb40
	void ContextualPromptCountersToggleDebugDraw(); // Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw // Final|Exec|Native|Public // @ game+0x45ceb20
	void CompleteVoyage(); // Function AthenaCheat.AthenaCheatManager.CompleteVoyage // Final|Exec|Native|Public // @ game+0x45ceb00
	void CompleteCurrentChecklistMap(); // Function AthenaCheat.AthenaCheatManager.CompleteCurrentChecklistMap // Final|Exec|Native|Public // @ game+0x45ceae0
	void CompleteAllActivePuzzleVaults(); // Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults // Final|Exec|Native|Public // @ game+0x45ceac0
	void CompleteActiveQuests(); // Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests // Final|Exec|Native|Public // @ game+0x45ceaa0
	void CloseSkeletonFortDoor(); // Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor // Final|Exec|Native|Public // @ game+0x45cea80
	void CloseLoadingScreen(); // Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen // Final|Exec|Native|Public // @ game+0x45cea60
	void ClearWorldSequences(); // Function AthenaCheat.AthenaCheatManager.ClearWorldSequences // Final|Exec|Native|Public // @ game+0x45cea40
	void ClearVoiceChatMeters(); // Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters // Final|Exec|Native|Public // @ game+0x45cea20
	void ClearStoryDisplayFilter(); // Function AthenaCheat.AthenaCheatManager.ClearStoryDisplayFilter // Final|Exec|Native|Public // @ game+0x45cea00
	void ClearSlowMotionOverride(); // Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride // Final|Exec|Native|Public // @ game+0x45ce9e0
	void ClearShipVoyages(); // Function AthenaCheat.AthenaCheatManager.ClearShipVoyages // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45ce9c0
	void ClearRitualTableRequiredPlayersOverride(); // Function AthenaCheat.AthenaCheatManager.ClearRitualTableRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x45ce9a0
	void ClearGrogSecondary(); // Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary // Final|Exec|Native|Public // @ game+0x45ce980
	void ClearGlitterbeardRequiredPlayersOverride(); // Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x45ce960
	void ClearDebugStormLocation(); // Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation // Final|Exec|Native|Public // @ game+0x45ce940
	void ClearCampaignOverrides(); // Function AthenaCheat.AthenaCheatManager.ClearCampaignOverrides // Final|Exec|Native|Public // @ game+0x45ce920
	void ClearAxisBinding(struct FString InBindingName); // Function AthenaCheat.AthenaCheatManager.ClearAxisBinding // Final|Exec|Native|Public // @ game+0x45ce880
	void ClearAIAbilityTimeMultipliers(); // Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers // Final|Exec|Native|Public // @ game+0x45ce840
	void ClearAdventureOnDemandCrewDiveCooldown(); // Function AthenaCheat.AthenaCheatManager.ClearAdventureOnDemandCrewDiveCooldown // Final|Exec|Native|Public // @ game+0x45ce860
	void CheckLandmarkValidTreasureLocationsAtPlayerPos(); // Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos // Final|Exec|Native|Public // @ game+0x45ce820
	void CheckLandmarkRelativeToIslandCalculation(); // Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation // Final|Exec|Native|Public // @ game+0x45ce800
	void CapsizeShip(); // Function AthenaCheat.AthenaCheatManager.CapsizeShip // Final|Exec|Native|Public // @ game+0x45ce7e0
	void CancelVoyage(); // Function AthenaCheat.AthenaCheatManager.CancelVoyage // Final|Exec|Native|Public // @ game+0x45ce7c0
	void CancelTale(); // Function AthenaCheat.AthenaCheatManager.CancelTale // Final|Exec|Native|Public // @ game+0x45ce7a0
	void CancelLeaveFactionCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelLeaveFactionCooldown // Final|Exec|Native|Public // @ game+0x45ce780
	void CancelInvasionMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelInvasionMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x45ce760
	void CancelInitialMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelInitialMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x45ce740
	void CancelEmergentVoyages(); // Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages // Final|Exec|Native|Public // @ game+0x45ce720
	void CancelDebugInvasion(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.CancelDebugInvasion // Final|Exec|Native|Public // @ game+0x45ce680
	void CancelCurrentMatchmakingCooldownForAllCrews(); // Function AthenaCheat.AthenaCheatManager.CancelCurrentMatchmakingCooldownForAllCrews // Final|Exec|Native|Public // @ game+0x45ce660
	void CancelAllDebugInvasions(); // Function AthenaCheat.AthenaCheatManager.CancelAllDebugInvasions // Final|Exec|Native|Public // @ game+0x45ce640
	void CancelAllCrewVoyages(); // Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages // Final|Exec|Native|Public // @ game+0x45ce620
	void CancelActiveAIShipEncounters(); // Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters // Final|Exec|Native|Public // @ game+0x45ce600
	void BuryNearestBuriable(); // Function AthenaCheat.AthenaCheatManager.BuryNearestBuriable // Final|Exec|Native|Public // @ game+0x45ce5e0
	void BuryItem(struct FString NameOfItemToBury); // Function AthenaCheat.AthenaCheatManager.BuryItem // Final|Exec|Native|Public // @ game+0x45ce540
	void BreakLeg(); // Function AthenaCheat.AthenaCheatManager.BreakLeg // Final|Exec|Native|Public // @ game+0x45ce520
	void BlockMigrationForPlayer(bool Enabled); // Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer // Final|Exec|Native|Public // @ game+0x45ce490
	void ApplyStatusToPlayer(struct FString StatusIdentifier, float Duration); // Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer // Final|Exec|Native|Public // @ game+0x45ce3a0
	void ApplyDamageToAllDamageZones(float Damage); // Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones // Final|Exec|Native|Public // @ game+0x45ce320
	void ApplyCursedCannonballStatusToShip(struct FString CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip // Final|Exec|Native|Public // @ game+0x45ce280
	void ApplyCursedCannonballStatusToPlayer(struct FString CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer // Final|Exec|Native|Public // @ game+0x45ce1e0
	void AllowTeleportWithItems(bool CanTeleport); // Function AthenaCheat.AthenaCheatManager.AllowTeleportWithItems // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45ce150
	void AllowShipMotion(); // Function AthenaCheat.AthenaCheatManager.AllowShipMotion // Final|Exec|Native|Public // @ game+0x45ce130
	void AllocatePortalToTunnelOfTheDamned(struct FString TunnelDescAssetPath); // Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned // Final|Exec|Native|Public // @ game+0x45ce090
	void AllJoinAlliance(); // Function AthenaCheat.AthenaCheatManager.AllJoinAlliance // Final|Exec|Native|Public // @ game+0x45ce070
	void AIPlayerShip(); // Function AthenaCheat.AthenaCheatManager.AIPlayerShip // Final|Exec|Native|Public // @ game+0x45cd1a0
	void AggressiveGhostShipRebuildSpline(); // Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline // Final|Exec|Native|Public // @ game+0x45ce050
	void AdjustGhostShader(bool Enabled, float InStartingAmount, float InTargetAmount, float InVengeanceStartingAmount, float InVengeanceTargetAmount, float InDelayBeforeStart, float InBlendDuration); // Function AthenaCheat.AthenaCheatManager.AdjustGhostShader // Final|Exec|Native|Public // @ game+0x45cde40
	void AddVoyageToShip(struct FString SourceAssetName); // Function AthenaCheat.AthenaCheatManager.AddVoyageToShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x45cdda0
	void AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x45cdd80
	void AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x45cdd60
	void AddTradeRouteClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x45cdd40
	void AddTornMapPiece(); // Function AthenaCheat.AthenaCheatManager.AddTornMapPiece // Final|Exec|Native|Public // @ game+0x45cdd20
	void AddShipToCrew(struct FString ActorIdString, struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.AddShipToCrew // Final|Exec|Native|Public // @ game+0x45cdc20
	void AddRandomPetForAllPlayers(); // Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers // Final|Exec|Native|Public // @ game+0x45cdc00
	void AddPlayerToCrew(struct FString ActorIdString, struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew // Final|Exec|Native|Public // @ game+0x45cdb00
	void AddPetForPlayer(int32_t PetTypeIndex, int32_t PetPartIndex); // Function AthenaCheat.AthenaCheatManager.AddPetForPlayer // Final|Exec|Native|Public // @ game+0x45cda40
	void AddPetForAllPlayers(int32_t PetTypeIndex, int32_t PetPartIndex); // Function AthenaCheat.AthenaCheatManager.AddPetForAllPlayers // Final|Exec|Native|Public // @ game+0x45cd980
	void AddNoParameterEventLogEntryToCaptainsLog(); // Function AthenaCheat.AthenaCheatManager.AddNoParameterEventLogEntryToCaptainsLog // Final|Exec|Native|Public // @ game+0x45cd960
	void AddMysteriousNote(struct FString NoteType, struct FString NoteTitle, struct FString NoteBody, struct FString CompletionStrings); // Function AthenaCheat.AthenaCheatManager.AddMysteriousNote // Final|Exec|Native|Public // @ game+0x45cd7b0
	void AddLongEventLogEntryToCaptainsLog(); // Function AthenaCheat.AthenaCheatManager.AddLongEventLogEntryToCaptainsLog // Final|Exec|Native|Public // @ game+0x45cd790
	void AddInvasionBattleBounds(); // Function AthenaCheat.AthenaCheatManager.AddInvasionBattleBounds // Final|Exec|Native|Public // @ game+0x45cd770
	void AddInactiveCampaignOverride(struct FString CampaignName); // Function AthenaCheat.AthenaCheatManager.AddInactiveCampaignOverride // Final|Exec|Native|Public // @ game+0x45cd6d0
	void AddDrunkenness(int32_t DrunkennessType, float DrunkennessChange); // Function AthenaCheat.AthenaCheatManager.AddDrunkenness // Final|Exec|Native|Public // @ game+0x45cd600
	void AddAllKnownStories(); // Function AthenaCheat.AthenaCheatManager.AddAllKnownStories // Final|Exec|Native|Public // @ game+0x45cd5e0
	void AddAISpawnContext(struct FString ContextName); // Function AthenaCheat.AthenaCheatManager.AddAISpawnContext // Final|Exec|Native|Public // @ game+0x45cd3b0
	void AddActiveStory(struct FString StoryName, bool AddIfNonExistentStory); // Function AthenaCheat.AthenaCheatManager.AddActiveStory // Final|Exec|Native|Public // @ game+0x45cd4f0
	void AddActiveCampaignOverride(struct FString CampaignName); // Function AthenaCheat.AthenaCheatManager.AddActiveCampaignOverride // Final|Exec|Native|Public // @ game+0x45cd450
	void ActivateSkellyFort(struct FString FortEventName, struct FString FortName); // Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort // Final|Exec|Native|Public|HasOutParms // @ game+0x45cd280
	void ActivateEmissaryFlagCompany(struct FString CompanyId); // Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany // Final|Exec|Native|Public // @ game+0x45cd1e0
	void ActivateDebugTeleportationDestinationService(); // Function AthenaCheat.AthenaCheatManager.ActivateDebugTeleportationDestinationService // Final|Exec|Native|Public // @ game+0x45cd1c0
};

