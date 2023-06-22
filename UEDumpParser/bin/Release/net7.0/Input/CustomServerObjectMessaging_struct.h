// ScriptStruct CustomServerObjectMessaging.CustomServerEvent
// Size: 0x18 (Inherited: 0x00)
struct FCustomServerEvent {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FName EventID; // 0x08(0x08)
	struct FDateTime ServerTimeUTC; // 0x10(0x08)
};

// ScriptStruct CustomServerObjectMessaging.OnRelaodAmmoCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FOnRelaodAmmoCustomServerEvent : FEntityCustomServerEvent {
	int32_t AvailableAmmoToAdd; // 0x20(0x04)
	int32_t CurrentAmmoAfterReload; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.EntityCustomServerEvent
// Size: 0x20 (Inherited: 0x18)
struct FEntityCustomServerEvent : FCustomServerEvent {
	int32_t EntityNetId; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CustomServerObjectMessaging.OnItemPlacedInChestCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FOnItemPlacedInChestCustomServerEvent : FEntityCustomServerEvent {
	int32_t ChestId; // 0x20(0x04)
	int32_t ItemId; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.OnCannonBallHitShipCustomServerEvent
// Size: 0x38 (Inherited: 0x20)
struct FOnCannonBallHitShipCustomServerEvent : FEntityCustomServerEvent {
	struct FString CannonBallType; // 0x20(0x10)
	int32_t ShipId; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct CustomServerObjectMessaging.PlayerCharacterEnteredShipCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FPlayerCharacterEnteredShipCustomServerEvent : FEntityCustomServerEvent {
	int32_t UserId; // 0x20(0x04)
	int32_t ShipId; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.FortKeyUsedCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FFortKeyUsedCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.TreasureSoldCustomServerEvent
// Size: 0x60 (Inherited: 0x20)
struct FTreasureSoldCustomServerEvent : FEntityCustomServerEvent {
	struct FString CrewId; // 0x20(0x10)
	struct FString TreasureType; // 0x30(0x10)
	struct FString VendorId; // 0x40(0x10)
	struct FString CompanyId; // 0x50(0x10)
};

// ScriptStruct CustomServerObjectMessaging.TreasurePickedUpCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FTreasurePickedUpCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.TreasureFoundCustomServerEvent
// Size: 0x30 (Inherited: 0x20)
struct FTreasureFoundCustomServerEvent : FEntityCustomServerEvent {
	struct FString TreasureType; // 0x20(0x10)
};

// ScriptStruct CustomServerObjectMessaging.TreasureDroppedCustomServerEvent
// Size: 0x40 (Inherited: 0x20)
struct FTreasureDroppedCustomServerEvent : FEntityCustomServerEvent {
	struct FString TreasureType; // 0x20(0x10)
	struct FVector Position; // 0x30(0x0c)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct CustomServerObjectMessaging.TinySharkDespawnCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FTinySharkDespawnCustomServerEvent : FEntityCustomServerEvent {
	char Reason; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct CustomServerObjectMessaging.KrakenDespawnCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FKrakenDespawnCustomServerEvent : FEntityCustomServerEvent {
	char Reason; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct CustomServerObjectMessaging.KrakenTentacleDestroyedCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FKrakenTentacleDestroyedCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.CookStartCustomServerEvent
// Size: 0x30 (Inherited: 0x20)
struct FCookStartCustomServerEvent : FEntityCustomServerEvent {
	struct FString FoodType; // 0x20(0x10)
};

// ScriptStruct CustomServerObjectMessaging.CookEndCustomServerEvent
// Size: 0x40 (Inherited: 0x20)
struct FCookEndCustomServerEvent : FEntityCustomServerEvent {
	struct FString FoodType; // 0x20(0x10)
	struct FString CookedState; // 0x30(0x10)
};

// ScriptStruct CustomServerObjectMessaging.ShipSpawnedCustomServerEvent
// Size: 0x30 (Inherited: 0x20)
struct FShipSpawnedCustomServerEvent : FEntityCustomServerEvent {
	struct FString ShipType; // 0x20(0x10)
};

// ScriptStruct CustomServerObjectMessaging.ShipRepairCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FShipRepairCustomServerEvent : FEntityCustomServerEvent {
	int32_t UserId; // 0x20(0x04)
	int32_t ShipId; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.ShipOnFireEndCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FShipOnFireEndCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.ShipMastCollapseStateCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FShipMastCollapseStateCustomServerEvent : FEntityCustomServerEvent {
	int32_t ShipId; // 0x20(0x04)
	int32_t MastId; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.ShipDestroyedCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FShipDestroyedCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.ShipDamagedCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FShipDamagedCustomServerEvent : FEntityCustomServerEvent {
	int32_t Damage; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.ProjectileWeaponFiredCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FProjectileWeaponFiredCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.ProjectileHitCustomServerEvent
// Size: 0x38 (Inherited: 0x20)
struct FProjectileHitCustomServerEvent : FEntityCustomServerEvent {
	struct FString ProjectileType; // 0x20(0x10)
	int32_t RecipientId; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct CustomServerObjectMessaging.PlayerStatusEffectActivatedCustomServerEvent
// Size: 0x30 (Inherited: 0x20)
struct FPlayerStatusEffectActivatedCustomServerEvent : FEntityCustomServerEvent {
	struct FString Effect; // 0x20(0x10)
};

// ScriptStruct CustomServerObjectMessaging.PlayerStatusEffectDeactivatedCustomServerEvent
// Size: 0x30 (Inherited: 0x20)
struct FPlayerStatusEffectDeactivatedCustomServerEvent : FEntityCustomServerEvent {
	struct FString Effect; // 0x20(0x10)
};

// ScriptStruct CustomServerObjectMessaging.PlayerSpawnCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FPlayerSpawnCustomServerEvent : FEntityCustomServerEvent {
	int32_t PlayerStateId; // 0x20(0x04)
	char CharacterType; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
};

// ScriptStruct CustomServerObjectMessaging.PlayerSetFootLocationCustomServerEvent
// Size: 0x30 (Inherited: 0x20)
struct FPlayerSetFootLocationCustomServerEvent : FEntityCustomServerEvent {
	struct FString IslandName; // 0x20(0x10)
};

// ScriptStruct CustomServerObjectMessaging.PlayerRevivalCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FPlayerRevivalCustomServerEvent : FEntityCustomServerEvent {
	char UnknownData_20[0x8]; // 0x20(0x08)
};

// ScriptStruct CustomServerObjectMessaging.PlayerRadialChatCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FPlayerRadialChatCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.PlayerLeftGhostShipCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FPlayerLeftGhostShipCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.PlayerKillAICustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FPlayerKillAICustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.PlayerItemUsageStartCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FPlayerItemUsageStartCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.PlayerItemUsageEndCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FPlayerItemUsageEndCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.PlayerItemRetrievalFromContainerCustomServerEvent
// Size: 0x30 (Inherited: 0x20)
struct FPlayerItemRetrievalFromContainerCustomServerEvent : FEntityCustomServerEvent {
	struct FString RetrievedItemName; // 0x20(0x10)
};

// ScriptStruct CustomServerObjectMessaging.PlayerItemEquipCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FPlayerItemEquipCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.PlayerItemAddToContainerCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FPlayerItemAddToContainerCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.PlayerInReviveableStateCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FPlayerInReviveableStateCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.PlayerHeartbeatCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FPlayerHeartbeatCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.PlayerHealthChangeCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FPlayerHealthChangeCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.PlayerGameFishingStartedCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FPlayerGameFishingStartedCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.PlayerEncounterStartCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FPlayerEncounterStartCustomServerEvent : FEntityCustomServerEvent {
	char EncounterType; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct CustomServerObjectMessaging.PlayerEncounterEndCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FPlayerEncounterEndCustomServerEvent : FEntityCustomServerEvent {
	char EncounterType; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct CustomServerObjectMessaging.PlayerEmoteEndCustomServerEvent
// Size: 0x30 (Inherited: 0x20)
struct FPlayerEmoteEndCustomServerEvent : FEntityCustomServerEvent {
	struct FString Emote; // 0x20(0x10)
};

// ScriptStruct CustomServerObjectMessaging.PlayerEmoteStartCustomServerEvent
// Size: 0x30 (Inherited: 0x20)
struct FPlayerEmoteStartCustomServerEvent : FEntityCustomServerEvent {
	struct FString Emote; // 0x20(0x10)
};

// ScriptStruct CustomServerObjectMessaging.PlayerDeathCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FPlayerDeathCustomServerEvent : FEntityCustomServerEvent {
	int32_t KillerID; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.PlayerChangedShipLoadoutCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FPlayerChangedShipLoadoutCustomServerEvent : FEntityCustomServerEvent {
	int32_t ShipId; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.PlayerChangedLoadoutCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FPlayerChangedLoadoutCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.PlayerCapstanUsageStartCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FPlayerCapstanUsageStartCustomServerEvent : FEntityCustomServerEvent {
	int32_t ShipId; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.PlayerCapstanUsageEndCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FPlayerCapstanUsageEndCustomServerEvent : FEntityCustomServerEvent {
	int32_t ShipId; // 0x20(0x04)
	int32_t CapstanState; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.PlayerBucketScoopCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FPlayerBucketScoopCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.PlayerBucketEmptyCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FPlayerBucketEmptyCustomServerEvent : FEntityCustomServerEvent {
	bool AtWielder; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct CustomServerObjectMessaging.PlayerActionCannonCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FPlayerActionCannonCustomServerEvent : FEntityCustomServerEvent {
	int32_t ShipId; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.PlayerActionCustomServerEvent
// Size: 0x30 (Inherited: 0x20)
struct FPlayerActionCustomServerEvent : FEntityCustomServerEvent {
	struct FString Action; // 0x20(0x10)
};

// ScriptStruct CustomServerObjectMessaging.MermaidUsedCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FMermaidUsedCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.MeleeWeaponAttackCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FMeleeWeaponAttackCustomServerEvent : FEntityCustomServerEvent {
	int32_t Type; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.CustomTriggerOverlapEndCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FCustomTriggerOverlapEndCustomServerEvent : FEntityCustomServerEvent {
	int32_t OtherNetId; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.CustomTriggerOverlapBeginCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FCustomTriggerOverlapBeginCustomServerEvent : FEntityCustomServerEvent {
	int32_t OtherNetId; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.AISpawnCustomServerEvent
// Size: 0x30 (Inherited: 0x20)
struct FAISpawnCustomServerEvent : FEntityCustomServerEvent {
	struct FString AIType; // 0x20(0x10)
};

// ScriptStruct CustomServerObjectMessaging.AIShipSpawnCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FAIShipSpawnCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.AIShipDespawnCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FAIShipDespawnCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.AIShipDamagedCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FAIShipDamagedCustomServerEvent : FEntityCustomServerEvent {
	float AIShipWaterLevel; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.OnCannonballLoadedOnCannonCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FOnCannonballLoadedOnCannonCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.OnPlayerFiredFromCannonCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FOnPlayerFiredFromCannonCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.OnEnemyDeathCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FOnEnemyDeathCustomServerEvent : FEntityCustomServerEvent {
	int32_t KillerPlayerID; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.OnPlayerDigCustomServerEvent
// Size: 0x30 (Inherited: 0x20)
struct FOnPlayerDigCustomServerEvent : FEntityCustomServerEvent {
	struct FVector Location; // 0x20(0x0c)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct CustomServerObjectMessaging.OnPlayerStartsNPCInteractionCustomServerEvent
// Size: 0x30 (Inherited: 0x20)
struct FOnPlayerStartsNPCInteractionCustomServerEvent : FEntityCustomServerEvent {
	struct FString NPCName; // 0x20(0x10)
};

// ScriptStruct CustomServerObjectMessaging.OnPlayerJoinsMapTableCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FOnPlayerJoinsMapTableCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.OnHarpoonShotHitCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FOnHarpoonShotHitCustomServerEvent : FEntityCustomServerEvent {
	int32_t ActorTetheredTo; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.OnHarpoonShotShotCustomServerEvent
// Size: 0x28 (Inherited: 0x20)
struct FOnHarpoonShotShotCustomServerEvent : FEntityCustomServerEvent {
	int32_t HarpoonId; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.OnPlayerInsideCannonCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FOnPlayerInsideCannonCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.OnPlayerAteCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FOnPlayerAteCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.ShipSinkingCustomServerEvent
// Size: 0x20 (Inherited: 0x20)
struct FShipSinkingCustomServerEvent : FEntityCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.HoleFixedForShipCustomServerEvent
// Size: 0x30 (Inherited: 0x20)
struct FHoleFixedForShipCustomServerEvent : FEntityCustomServerEvent {
	float RepairPercentage; // 0x20(0x04)
	int32_t RepairingActor; // 0x24(0x04)
	bool RepairCompleted; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct CustomServerObjectMessaging.MermaidSpawnedCustomServerEvent
// Size: 0x28 (Inherited: 0x18)
struct FMermaidSpawnedCustomServerEvent : FGlobalCustomServerEvent {
	struct FVector Position; // 0x18(0x0c)
	int32_t PlayerId; // 0x24(0x04)
};

// ScriptStruct CustomServerObjectMessaging.GlobalCustomServerEvent
// Size: 0x18 (Inherited: 0x18)
struct FGlobalCustomServerEvent : FCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.PlayerLookingAtMapCustomServerEvent
// Size: 0x18 (Inherited: 0x18)
struct FPlayerLookingAtMapCustomServerEvent : FGlobalCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.OnQuestStartedCustomServerEvent
// Size: 0x30 (Inherited: 0x18)
struct FOnQuestStartedCustomServerEvent : FGlobalCustomServerEvent {
	char QuestType; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	struct FGuid CrewId; // 0x1c(0x10)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct CustomServerObjectMessaging.OnVoyageStartedCustomServerEvent
// Size: 0x50 (Inherited: 0x18)
struct FOnVoyageStartedCustomServerEvent : FGlobalCustomServerEvent {
	struct FString CompanyDisplayName; // 0x18(0x10)
	int32_t Rank; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FString Title; // 0x30(0x10)
	struct FGuid CrewId; // 0x40(0x10)
};

// ScriptStruct CustomServerObjectMessaging.OnVoyageCancelledCustomServerEvent
// Size: 0x28 (Inherited: 0x18)
struct FOnVoyageCancelledCustomServerEvent : FGlobalCustomServerEvent {
	struct FString AssociatedCrew; // 0x18(0x10)
};

// ScriptStruct CustomServerObjectMessaging.OnVoyageAcceptedCustomServerEvent
// Size: 0x40 (Inherited: 0x18)
struct FOnVoyageAcceptedCustomServerEvent : FGlobalCustomServerEvent {
	struct FString CompanyDisplayName; // 0x18(0x10)
	int32_t Rank; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FString Title; // 0x30(0x10)
};

// ScriptStruct CustomServerObjectMessaging.OnQuestAcceptedCustomServerEvent
// Size: 0x18 (Inherited: 0x18)
struct FOnQuestAcceptedCustomServerEvent : FGlobalCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.WatercraftDespawnCustomServerEvent
// Size: 0x20 (Inherited: 0x18)
struct FWatercraftDespawnCustomServerEvent : FGlobalCustomServerEvent {
	int32_t WatercraftId; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CustomServerObjectMessaging.TreasureSpawnedCustomServerEvent
// Size: 0x18 (Inherited: 0x18)
struct FTreasureSpawnedCustomServerEvent : FGlobalCustomServerEvent {
};

// ScriptStruct CustomServerObjectMessaging.KrakenSpawnCustomServerEvent
// Size: 0x38 (Inherited: 0x18)
struct FKrakenSpawnCustomServerEvent : FGlobalCustomServerEvent {
	struct FVector SpawnLocation; // 0x18(0x0c)
	int32_t TrackedShipId; // 0x24(0x04)
	int32_t KrakenId; // 0x28(0x04)
	int32_t NumberOfTentacles; // 0x2c(0x04)
	int32_t NumberOfKilledTentaclesToDismissKraken; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct CustomServerObjectMessaging.WatercraftSpawnCustomServerEvent
// Size: 0x20 (Inherited: 0x18)
struct FWatercraftSpawnCustomServerEvent : FGlobalCustomServerEvent {
	int32_t EntityNetId; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CustomServerObjectMessaging.ActorSpawnCustomServerEvent
// Size: 0x20 (Inherited: 0x18)
struct FActorSpawnCustomServerEvent : FGlobalCustomServerEvent {
	int32_t EntityNetId; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CustomServerObjectMessaging.ItemSpawnCustomServerEvent
// Size: 0x30 (Inherited: 0x18)
struct FItemSpawnCustomServerEvent : FGlobalCustomServerEvent {
	int32_t EntityNetId; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString ItemType; // 0x20(0x10)
};

// ScriptStruct CustomServerObjectMessaging.FortWaveCompletedCustomServerEvent
// Size: 0x28 (Inherited: 0x18)
struct FFortWaveCompletedCustomServerEvent : FGlobalCustomServerEvent {
	struct FString InCrewId; // 0x18(0x10)
};

// ScriptStruct CustomServerObjectMessaging.CrewSessionLeaveCustomServerEvent
// Size: 0x28 (Inherited: 0x18)
struct FCrewSessionLeaveCustomServerEvent : FGlobalCustomServerEvent {
	struct FString CrewId; // 0x18(0x10)
};

// ScriptStruct CustomServerObjectMessaging.CrewPlayerLeftCustomServerEvent
// Size: 0x30 (Inherited: 0x18)
struct FCrewPlayerLeftCustomServerEvent : FGlobalCustomServerEvent {
	struct FString CrewId; // 0x18(0x10)
	int32_t PlayerId; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct CustomServerObjectMessaging.TinySharkSpawnCustomServerEvent
// Size: 0x30 (Inherited: 0x18)
struct FTinySharkSpawnCustomServerEvent : FGlobalCustomServerEvent {
	int32_t TinySharkId; // 0x18(0x04)
	struct FVector SpawnLocation; // 0x1c(0x0c)
	int32_t TrackedShipId; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

