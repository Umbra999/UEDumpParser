// Class Pets.AIPetsOnDemandSpawner
// Size: 0x438 (Inherited: 0x438)
struct UAIPetsOnDemandSpawner : UAISpawner {
};

// Class Pets.BTDecorator_IsForcingHangout
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_IsForcingHangout : UBTDecorator_BaseConditional {
};

// Class Pets.BTDecorator_IsOccupiedHangoutSpotStillAvailable
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_IsOccupiedHangoutSpotStillAvailable : UBTDecorator_BaseConditional {
};

// Class Pets.BTDecorator_IsOccupyingHangoutSpotWithGivenId
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_IsOccupyingHangoutSpotWithGivenId : UBTDecorator_BaseConditional {
	struct TArray<struct FHangoutSpotId> SuccessIds; // 0x68(0x10)
};

// Class Pets.BTDecorator_IsPerchedInHangout
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_IsPerchedInHangout : UBTDecorator_BaseConditional {
};

// Class Pets.BTDecorator_PetFoodSourceAvailable
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_PetFoodSourceAvailable : UBTDecorator_BaseConditional {
};

// Class Pets.BTDecorator_PetRoamingAnimationStateActive
// Size: 0x78 (Inherited: 0x68)
struct UBTDecorator_PetRoamingAnimationStateActive : UBTDecorator_BaseConditional {
	struct TArray<char> MatchingStates; // 0x68(0x10)
};

// Class Pets.BTTask_AttachToHangout
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_AttachToHangout : UBTTask_BlackboardBase {
	float TaskDuration; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class Pets.BTTask_ChangeHangoutAnimation
// Size: 0x88 (Inherited: 0x88)
struct UBTTask_ChangeHangoutAnimation : UBTTask_BlackboardBase {
};

// Class Pets.BTTask_DetachFromHangout
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_DetachFromHangout : UBTTask_BlackboardBase {
	float TaskDuration; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class Pets.BTTask_EatFood
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_EatFood : UBTTaskNode {
	struct UPetFeedingDataAsset* FeedingDataAsset; // 0x60(0x08)
};

// Class Pets.BTTask_GetTotalHangoutTime
// Size: 0x88 (Inherited: 0x88)
struct UBTTask_GetTotalHangoutTime : UBTTask_BlackboardBase {
};

// Class Pets.BTTask_NotifyForcedHangoutComplete
// Size: 0x88 (Inherited: 0x88)
struct UBTTask_NotifyForcedHangoutComplete : UBTTask_BlackboardBase {
};

// Class Pets.BTTask_PetWaitForAnimationRoamingState
// Size: 0x80 (Inherited: 0x60)
struct UBTTask_PetWaitForAnimationRoamingState : UBTTaskNode {
	struct TArray<char> SuccessRoamingStates; // 0x60(0x10)
	struct TArray<char> FailRoamingStates; // 0x70(0x10)
};

// Class Pets.BTTask_ReactToOwner
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_ReactToOwner : UBTTaskNode {
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Pets.BTTask_ReactToThreat
// Size: 0x70 (Inherited: 0x60)
struct UBTTask_ReactToThreat : UBTTaskNode {
	char ReactAnimState; // 0x60(0x01)
	bool ChangeAnimationAfterWaitTime; // 0x61(0x01)
	char UnknownData_62[0x2]; // 0x62(0x02)
	float ReactAnimTime; // 0x64(0x04)
	char AfterReactAnimState; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class Pets.BTTask_RotatePetToFaceBBEntryWithTime
// Size: 0x98 (Inherited: 0x90)
struct UBTTask_RotatePetToFaceBBEntryWithTime : UBTTask_RotateToFaceBBEntry {
	float Delay; // 0x90(0x04)
	float RotationTime; // 0x94(0x04)
};

// Class Pets.BTTask_SelectFoodSource
// Size: 0x88 (Inherited: 0x88)
struct UBTTask_SelectFoodSource : UBTTask_BlackboardBase {
};

// Class Pets.BTTask_SelectPetHangoutSpot
// Size: 0x98 (Inherited: 0x88)
struct UBTTask_SelectPetHangoutSpot : UBTTask_BlackboardBase {
	bool NeedForceId; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	struct FHangoutSpotId ForcedId; // 0x8c(0x08)
	char UnknownData_94[0x4]; // 0x94(0x04)
};

// Class Pets.BTTask_SelectWanderFlyStrategy
// Size: 0x100 (Inherited: 0x88)
struct UBTTask_SelectWanderFlyStrategy : UBTTask_BlackboardBase {
	struct FAIDataProviderFloatValue WanderRange; // 0x88(0x30)
	struct FAIDataProviderFloatValue LowFlyRange; // 0xb8(0x30)
	struct UClass* WanderStrategy; // 0xe8(0x08)
	struct UClass* LowFlyStrategy; // 0xf0(0x08)
	struct UClass* HighFlyStrategy; // 0xf8(0x08)
};

// Class Pets.PetHangoutInterface
// Size: 0x28 (Inherited: 0x28)
struct UPetHangoutInterface : UInterface {
};

// Class Pets.PetMemoryInterface
// Size: 0x28 (Inherited: 0x28)
struct UPetMemoryInterface : UInterface {
};

// Class Pets.PetUGCNameInterface
// Size: 0x28 (Inherited: 0x28)
struct UPetUGCNameInterface : UInterface {
};

// Class Pets.PetLifetimeInterface
// Size: 0x28 (Inherited: 0x28)
struct UPetLifetimeInterface : UInterface {
};

// Class Pets.PetOwnerIdentityInterface
// Size: 0x28 (Inherited: 0x28)
struct UPetOwnerIdentityInterface : UInterface {
};

// Class Pets.PetSpawnOnShipInterface
// Size: 0x28 (Inherited: 0x28)
struct UPetSpawnOnShipInterface : UInterface {
};

// Class Pets.PetReactInterface
// Size: 0x28 (Inherited: 0x28)
struct UPetReactInterface : UInterface {
};

// Class Pets.BTTask_SetDebugPetStateDescriptor
// Size: 0x68 (Inherited: 0x60)
struct UBTTask_SetDebugPetStateDescriptor : UBTTaskNode {
	char NewDescriptor; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// Class Pets.BTTask_StopOccupyingHangoutSpot
// Size: 0x88 (Inherited: 0x88)
struct UBTTask_StopOccupyingHangoutSpot : UBTTask_BlackboardBase {
};

// Class Pets.CannonSquashComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UCannonSquashComponent : UActorComponent {
	char UnknownData_C8[0x18]; // 0xc8(0x18)
};

// Class Pets.PetDangerComponent
// Size: 0x1a0 (Inherited: 0xc8)
struct UPetDangerComponent : UActorComponent {
	struct UPetDangerDataAsset* DangerDataAsset; // 0xc8(0x08)
	char UnknownData_D0[0xd0]; // 0xd0(0xd0)
};

// Class Pets.EnvQueryContext_AverageThreatPositionFromBlackboard
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_AverageThreatPositionFromBlackboard : UEnvQueryContext_PositionFromBlackboard {
};

// Class Pets.EnvQueryContext_CurrentHangoutSpot
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_CurrentHangoutSpot : UEnvQueryContext {
};

// Class Pets.EnvQueryContext_FirstThreatPositionFromBlackboard
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_FirstThreatPositionFromBlackboard : UEnvQueryContext_PositionFromBlackboard {
};

// Class Pets.EnvQueryContext_PerceivedFoodSources
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_PerceivedFoodSources : UEnvQueryContext {
};

// Class Pets.EnvQueryContext_SafePositionFromBlackboard
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_SafePositionFromBlackboard : UEnvQueryContext_PositionFromBlackboard {
};

// Class Pets.PetDesc
// Size: 0x130 (Inherited: 0x120)
struct UPetDesc : UItemDesc {
	struct UPetSpawnParamsDataAsset* PetSpawnParams; // 0x120(0x08)
	struct UClass* PreviewPetClass; // 0x128(0x08)
};

// Class Pets.PetHangoutSpotsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UPetHangoutSpotsDataAsset : UDataAsset {
	struct TArray<struct FHangoutSpotParams> HangoutSpotParams; // 0x28(0x10)
};

// Class Pets.PetHangoutSpotSelectorComponent
// Size: 0x2b8 (Inherited: 0xc8)
struct UPetHangoutSpotSelectorComponent : UActorComponent {
	struct UPetHangoutSpotComponent* HangoutSpotPositionComponent; // 0xc8(0x08)
	struct UPetHangoutSpotsDataAsset* HangoutParamsDataAsset; // 0xd0(0x08)
	char UnknownData_D8[0x70]; // 0xd8(0x70)
	struct UClass* PetType_Cached; // 0x148(0x08)
	char UnknownData_150[0x168]; // 0x150(0x168)
};

// Class Pets.HangoutSpotSelectionInterface
// Size: 0x28 (Inherited: 0x28)
struct UHangoutSpotSelectionInterface : UInterface {
};

// Class Pets.PetIdleMovementInterface
// Size: 0x28 (Inherited: 0x28)
struct UPetIdleMovementInterface : UInterface {
};

// Class Pets.PetAIController
// Size: 0xa48 (Inherited: 0x960)
struct APetAIController : AAthenaAIController {
	char UnknownData_960[0x20]; // 0x960(0x20)
	struct TArray<struct FAIStategyControllerMovementMod> StrategyControllerMovementMods; // 0x980(0x10)
	float DefaultControlRotationInterpSpeed; // 0x990(0x04)
	char UnknownData_994[0x4]; // 0x994(0x04)
	struct UClass* DefaultStrategy; // 0x998(0x08)
	struct UReactStateMappingsDataAsset* ReactMappings; // 0x9a0(0x08)
	char UnknownData_9A8[0x8]; // 0x9a8(0x08)
	struct UPetHangoutSpotSelectorComponent* HangoutSpotSelectorComponent; // 0x9b0(0x08)
	struct UPetHangoutSpotComponent* ForcedHangoutSpotComponent; // 0x9b8(0x08)
	struct UBlackboardData* DefaultBlackboardAsset; // 0x9c0(0x08)
	struct UBehaviorTree* DefaultTree; // 0x9c8(0x08)
	struct UBehaviorTree* HangoutTree; // 0x9d0(0x08)
	struct UBehaviorTree* IdleTree; // 0x9d8(0x08)
	float MaximumReactRange; // 0x9e0(0x04)
	char UnknownData_9E4[0x4]; // 0x9e4(0x04)
	struct UPetDangerComponent* DangerComponent; // 0x9e8(0x08)
	float MinAgentHalfHeightPctOverride; // 0x9f0(0x04)
	char UnknownData_9F4[0x54]; // 0x9f4(0x54)

	void OnPerceptionUpdated(struct TArray<struct AActor*> ChangedPerceivedActors); // Function Pets.PetAIController.OnPerceptionUpdated // Native|Public // @ game+0x4410170
	struct UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp(); // Function Pets.PetAIController.GetAthenaAICharPathFollowingComp // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4410060
};

// Class Pets.PetCustomisationOverrideDataAsset
// Size: 0x48 (Inherited: 0x28)
struct UPetCustomisationOverrideDataAsset : UDataAsset {
	struct UClass* AnimationOverrideId; // 0x28(0x08)
	struct UWwiseEvent* FiredFromActorSFX; // 0x30(0x08)
	struct FString DebugMenuName; // 0x38(0x10)
};

// Class Pets.PetCustomisationOverrideMappingsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UPetCustomisationOverrideMappingsDataAsset : UDataAsset {
	struct TArray<struct FPetCustomiationOverrideMappingEntry> MappingEntries; // 0x28(0x10)
};

// Class Pets.PetDangerDataAsset
// Size: 0x50 (Inherited: 0x28)
struct UPetDangerDataAsset : UDataAsset {
	struct TArray<struct FPetDangerHearingThreat> KnownHearingDangers; // 0x28(0x10)
	float MinChangeAverageThreatLocationToUpdate; // 0x38(0x04)
	float FleeDistance; // 0x3c(0x04)
	struct TArray<char> ResponsePriorities; // 0x40(0x10)
};

// Class Pets.PetFeedingDataAsset
// Size: 0x60 (Inherited: 0x28)
struct UPetFeedingDataAsset : UDataAsset {
	struct FPetFeedingParams PetFeedingParams; // 0x28(0x38)
};

// Class Pets.PetHangoutSpotComponent
// Size: 0x380 (Inherited: 0x2e0)
struct UPetHangoutSpotComponent : USceneComponent {
	struct TArray<struct FHangoutSpotPosition> HangoutSpots; // 0x2e0(0x10)
	bool HasLowerDeckFloodThreshold; // 0x2f0(0x01)
	char UnknownData_2F1[0x3]; // 0x2f1(0x03)
	float LowerDeckFloodThreshold; // 0x2f4(0x04)
	bool HasMiddleDeckFloodThreshold; // 0x2f8(0x01)
	char UnknownData_2F9[0x3]; // 0x2f9(0x03)
	float MiddleDeckFloodThreshold; // 0x2fc(0x04)
	float PerchInteractableHeightOffset; // 0x300(0x04)
	bool IsWorldHangout; // 0x304(0x01)
	char UnknownData_305[0x23]; // 0x305(0x23)
	struct TArray<struct UPetPerchComponent*> PetPerchComponents; // 0x328(0x10)
	char UnknownData_338[0x10]; // 0x338(0x10)
	bool IsTopDeckBlocked; // 0x348(0x01)
	bool IsOwnerSinking; // 0x349(0x01)
	char UnknownData_34A[0x1e]; // 0x34a(0x1e)
	struct UPetHangoutSpotsDataAsset* PetHangoutSpotsDataAsset; // 0x368(0x08)
	char UnknownData_370[0x10]; // 0x370(0x10)

	void OnRep_IsOwnerSinking(); // Function Pets.PetHangoutSpotComponent.OnRep_IsOwnerSinking // Final|Native|Private // @ game+0x4410330
};

// Class Pets.PetItemInfo
// Size: 0x590 (Inherited: 0x510)
struct APetItemInfo : ANonStorableItemInfo {
	char UnknownData_510[0x20]; // 0x510(0x20)
	struct AActor* SpawnedForShip; // 0x530(0x08)
	float DropTraceDistance; // 0x538(0x04)
	float PointSearchRadius; // 0x53c(0x04)
	char DropChannel; // 0x540(0x01)
	char UnknownData_541[0x7]; // 0x541(0x07)
	struct AActor* PetOwner; // 0x548(0x08)
	struct FPetCustomisation PetCustomisation; // 0x550(0x28)
	struct UPetUGCNameComponent* PetUGCNameComponent; // 0x578(0x08)
	char UnknownData_580[0x10]; // 0x580(0x10)

	void OnRep_PetOwner(); // Function Pets.PetItemInfo.OnRep_PetOwner // Final|Native|Private // @ game+0x44103f0
};

// Class Pets.PetListingDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UPetListingDataAsset : UDataAsset {
	struct TArray<struct FPetListingTypeEntry> Entries; // 0x28(0x10)
};

// Class Pets.PetMovementModifierSettingsInterface
// Size: 0x28 (Inherited: 0x28)
struct UPetMovementModifierSettingsInterface : UInterface {
};

// Class Pets.PetOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UPetOwnerInterface : UInterface {
};

// Class Pets.PetOwnerComponent
// Size: 0xe8 (Inherited: 0xc8)
struct UPetOwnerComponent : UActorComponent {
	char UnknownData_C8[0x18]; // 0xc8(0x18)
	struct AItemInfo* PetInfo; // 0xe0(0x08)

	void Server_RequestDismissal(); // Function Pets.PetOwnerComponent.Server_RequestDismissal // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x4410580
};

// Class Pets.PetPartCustomisationInterface
// Size: 0x28 (Inherited: 0x28)
struct UPetPartCustomisationInterface : UInterface {
};

// Class Pets.PetPerchComponent
// Size: 0x170 (Inherited: 0x128)
struct UPetPerchComponent : UInteractableComponent {
	char UnknownData_128[0x18]; // 0x128(0x18)
	struct TArray<struct UClass*> AllowedPetTypes; // 0x140(0x10)
	int32_t HangoutSpotIndex; // 0x150(0x04)
	struct FName HangoutSpotName; // 0x154(0x08)
	struct FVector InteractionPointLocation; // 0x15c(0x0c)
	bool Enabled; // 0x168(0x01)
	bool BlocksPetEmoteReactions; // 0x169(0x01)
	bool IgnorePickupFromHangoutTooltipDisplayOffset; // 0x16a(0x01)
	char UnknownData_16B[0x5]; // 0x16b(0x05)
};

// Class Pets.PetSpawnParamsDataAsset
// Size: 0x68 (Inherited: 0x28)
struct UPetSpawnParamsDataAsset : UDataAsset {
	struct UClass* PetClassID; // 0x28(0x08)
	struct UBehaviorTree* TreeToRun; // 0x30(0x08)
	struct UAthenaAIControllerParamsDataAsset* PetSkillset; // 0x38(0x20)
	struct UEnvQuery* SpawnQueryForLand; // 0x58(0x08)
	struct UEnvQuery* SpawnQueryForShip; // 0x60(0x08)
};

// Class Pets.PetsServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UPetsServiceInterface : UInterface {
};

// Class Pets.PetsServiceParamsDataAsset
// Size: 0x60 (Inherited: 0x28)
struct UPetsServiceParamsDataAsset : UDataAsset {
	struct FPetsServiceParams Params; // 0x28(0x38)
};

// Class Pets.PetsService
// Size: 0x330 (Inherited: 0x28)
struct UPetsService : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct TMap<struct AActor*, struct FPetRelationship> PetOwnerRelationships; // 0x38(0x50)
	struct UAIPetsOnDemandSpawner* Spawner; // 0x88(0x08)
	char UnknownData_90[0x18]; // 0x90(0x18)
	struct FPetsServiceParams PetsServiceParams; // 0xa8(0x38)
	struct TArray<struct AActor*> OwnersToRemove; // 0xe0(0x10)
	struct TArray<struct AActor*> OwnersToRequestDespawn; // 0xf0(0x10)
	struct TArray<struct APawn*> MovingPetsOnIslands; // 0x100(0x10)
	struct TArray<struct APawn*> MovingPetsOnShips; // 0x110(0x10)
	struct TArray<struct AActor*> ScratchArray; // 0x120(0x10)
	char UnknownData_130[0x1a8]; // 0x130(0x1a8)
	struct UPetHangoutSpotsDataAsset* PetHangoutDataAsset; // 0x2d8(0x08)
	char UnknownData_2E0[0x50]; // 0x2e0(0x50)

	void RemovePetFromActor(struct AActor* InOwner); // Function Pets.PetsService.RemovePetFromActor // Final|Native|Public|BlueprintCallable // @ game+0x44104f0
	void AddPetForActorAndWield(struct UClass* InPetType, struct FPetCustomisation InCustomisation, struct AActor* InOwner, bool IsWielded); // Function Pets.PetsService.AddPetForActorAndWield // Native|Public|BlueprintCallable // @ game+0x440fec0
	void AddPetForActor(struct UClass* InPetType, struct FPetCustomisation InCustomisation, struct AActor* InOwner); // Function Pets.PetsService.AddPetForActor // Final|Native|Public|BlueprintCallable // @ game+0x440fd50
};

// Class Pets.PetsSettings
// Size: 0x78 (Inherited: 0x28)
struct UPetsSettings : UObject {
	struct FStringAssetReference PetHangoutSpotsDataAsset; // 0x28(0x10)
	struct FStringAssetReference PetListingDataAsset; // 0x38(0x10)
	struct FStringAssetReference PetsServiceParamsDataAsset; // 0x48(0x10)
	struct FStringAssetReference PetSpawnDefinitionsDataAsset; // 0x58(0x10)
	struct TArray<char> ExcludedStatesForRoamingAssetGeneration; // 0x68(0x10)
};

// Class Pets.PetUGCNameComponent
// Size: 0x118 (Inherited: 0xc8)
struct UPetUGCNameComponent : UActorComponent {
	char UnknownData_C8[0x18]; // 0xc8(0x18)
	struct FString DefaultPetName; // 0xe0(0x10)
	struct FString CustomisedPetName; // 0xf0(0x10)
	char UnknownData_100[0x18]; // 0x100(0x18)
};

// Class Pets.ReactAIStrategyId
// Size: 0x28 (Inherited: 0x28)
struct UReactAIStrategyId : UAIStrategyId {
};

// Class Pets.ReactStateMappingsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UReactStateMappingsDataAsset : UDataAsset {
	struct TArray<struct FReactStateMapping> ReactMappings; // 0x28(0x10)
};

// Class Pets.WieldablePet
// Size: 0x930 (Inherited: 0x7e0)
struct AWieldablePet : ASkeletalMeshWieldableItem {
	char UnknownData_7E0[0x38]; // 0x7e0(0x38)
	float ThirdPersonScalingModifier; // 0x818(0x04)
	char UnknownData_81C[0x4]; // 0x81c(0x04)
	struct UWieldablePetComponent* WieldablePetComponent; // 0x820(0x08)
	struct UAIPartsRetrievalComponent* AIPartsRetrievalComponent; // 0x828(0x08)
	struct UPetPartCustomisationComponent* PetPartCustomisationComponent; // 0x830(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitterComponent; // 0x838(0x08)
	struct UWaterExposureComponent* WaterExposureComponent; // 0x840(0x08)
	struct UUsableWieldableComponent* UsableWieldableComponent; // 0x848(0x08)
	struct UPickupableComponent* PickupableComponent; // 0x850(0x08)
	struct UWieldableInteractableComponent* WieldableInteractableComponent; // 0x858(0x08)
	struct UCleanlinessComponent* CleanlinessComponent; // 0x860(0x08)
	struct ULightWeightStatusEffectManagerComponent* LightWeightStatusEffectManagerComponent; // 0x868(0x08)
	struct UPetDitherComponent* PetDitherComponent; // 0x870(0x08)
	struct AActor* PetOwner; // 0x878(0x08)
	struct UFeedingComponent* FeedingComponent; // 0x880(0x08)
	struct UPetSicknessComponent* SicknessComponent; // 0x888(0x08)
	struct UWieldablePetHungerComponent* HungerComponent; // 0x890(0x08)
	struct UStarvingComponent* StarvingComponent; // 0x898(0x08)
	struct UPetTelemetryComponent* TelemetryComponent; // 0x8a0(0x08)
	struct UAnimationDataStoreComponent* AnimationDataStoreComponent; // 0x8a8(0x08)
	bool SubmergedStrokingEnabled; // 0x8b0(0x01)
	char UnknownData_8B1[0x6f]; // 0x8b1(0x6f)
	char HungerReactAnimationState; // 0x920(0x01)
	char DropRequest; // 0x921(0x01)
	char UnknownData_922[0xe]; // 0x922(0x0e)

	void OnRep_HungerReactAnimationState(); // Function Pets.WieldablePet.OnRep_HungerReactAnimationState // Final|Native|Private // @ game+0x44102f0
	void OnRep_DropRequest(char PriorDropRequest); // Function Pets.WieldablePet.OnRep_DropRequest // Final|Native|Private // @ game+0x4410270
};

// Class Pets.WieldablePetAnimNotifyWwiseEmitterComponent
// Size: 0x320 (Inherited: 0x310)
struct UWieldablePetAnimNotifyWwiseEmitterComponent : UAnimNotifyWwiseEmitterComponent {
	char UnknownData_310[0x10]; // 0x310(0x10)
};

// Class Pets.WieldablePetComponent
// Size: 0x150 (Inherited: 0xc8)
struct UWieldablePetComponent : UActorComponent {
	struct UWieldablePetComponentDataAsset* WieldablePetComponentData; // 0xc8(0x08)
	char UnknownData_D0[0x80]; // 0xd0(0x80)
};

// Class Pets.WieldablePetComponentDataAsset
// Size: 0x70 (Inherited: 0x28)
struct UWieldablePetComponentDataAsset : UDataAsset {
	struct FFloatRange FriendlyTimeUntilEscape; // 0x28(0x10)
	struct FFloatRange NormalTimeUntilEscape; // 0x38(0x10)
	struct FFloatRange SubmergedTimeUntilEscape; // 0x48(0x10)
	float DamageToOwnerDropThreshold; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FWieldablePetDropTimeout> DropTimeouts; // 0x60(0x10)
};

// Class Pets.WieldablePetHungerComponent
// Size: 0x178 (Inherited: 0xc8)
struct UWieldablePetHungerComponent : UActorComponent {
	struct UWieldablePetHungerDataAsset* HungerData; // 0xc8(0x08)
	char UnknownData_D0[0x28]; // 0xd0(0x28)
	struct TArray<struct FOverlapResult> CachedOverlappingActors; // 0xf8(0x10)
	struct TArray<struct FWieldablePetFoodSourceEntry> ActiveFoodSources; // 0x108(0x10)
	struct TArray<struct FWieldablePetFoodSourceEntry> FoodSourcesToRemove; // 0x118(0x10)
	char UnknownData_128[0x50]; // 0x128(0x50)
};

// Class Pets.WieldablePetHungerDataAsset
// Size: 0x58 (Inherited: 0x28)
struct UWieldablePetHungerDataAsset : UDataAsset {
	float TimeToStartEating; // 0x28(0x04)
	float EdibleCheckRadius; // 0x2c(0x04)
	struct FWieldablePetHungerAnimationData EatingAnimData; // 0x30(0x08)
	struct FWieldablePetHungerAnimationData FedAnimData; // 0x38(0x08)
	struct FWieldablePetHungerAnimationData SickAnimData; // 0x40(0x08)
	struct FWieldablePetHungerAnimationData RefuseAnimData; // 0x48(0x08)
	char CollisionChannel; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

