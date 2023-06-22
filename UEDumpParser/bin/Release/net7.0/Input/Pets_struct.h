// Enum Pets.EPetDangerHearingResponseType
enum class EPetDangerHearingResponseType : uint8_t {
	RunAway,
	RunToHangoutSpot,
	TurnToward,
	RunToOwner,
	MAX,
	EPetDangerHearingResponseType_MAX,
};

// Enum Pets.EPetDangerHearingTarget
enum class EPetDangerHearingTarget : uint8_t {
	None,
	Owner,
	Crew,
	Alliance,
	EPetDangerHearingTarget_MAX,
};

// Enum Pets.EHangoutRotationMode
enum class EHangoutRotationMode : uint8_t {
	Match,
	Randomise,
	EHangoutRotationMode_MAX,
};

// Enum Pets.EWieldablePetDropRequestReason
enum class EWieldablePetDropRequestReason : uint8_t {
	None,
	Submerged,
	Escaped,
	EWieldablePetDropRequestReason_MAX,
};

// Enum Pets.EPetFeedingReactionType
enum class EPetFeedingReactionType : uint8_t {
	None,
	Sick,
	Happy,
	EPetFeedingReactionType_MAX,
};

// ScriptStruct Pets.PetCustomisation
// Size: 0x28 (Inherited: 0x00)
struct FPetCustomisation {
	struct FString DefaultPetName; // 0x00(0x10)
	struct FString PetName; // 0x10(0x10)
	struct FAIPartId PetPartId; // 0x20(0x08)
};

// ScriptStruct Pets.HangoutSpotId
// Size: 0x08 (Inherited: 0x00)
struct FHangoutSpotId {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Pets.PetTurnToFaceData
// Size: 0x20 (Inherited: 0x00)
struct FPetTurnToFaceData {
	struct FQuat EndRotation; // 0x00(0x10)
	float RotationTime; // 0x10(0x04)
	char UnknownData_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct Pets.PetDangerHearingThreatResponse
// Size: 0x03 (Inherited: 0x00)
struct FPetDangerHearingThreatResponse {
	char Type; // 0x00(0x01)
	char IgnoredTarget; // 0x01(0x01)
	bool InvertIgnoredTarget; // 0x02(0x01)
};

// ScriptStruct Pets.HangoutSpotParams
// Size: 0x28 (Inherited: 0x00)
struct FHangoutSpotParams {
	struct FName HangoutSpotName; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FPetHangoutSpotParams> PetParams; // 0x10(0x10)
	struct FName FeatureName; // 0x20(0x08)
};

// ScriptStruct Pets.PetHangoutSpotParams
// Size: 0xb8 (Inherited: 0x00)
struct FPetHangoutSpotParams {
	struct UClass* PetType; // 0x00(0x08)
	struct FFloatRange HangoutTime; // 0x08(0x10)
	struct FWeightedPetAnimationSelector AnimationSelector; // 0x18(0xa0)
};

// ScriptStruct Pets.PetCustomiationOverrideMappingEntry
// Size: 0x18 (Inherited: 0x00)
struct FPetCustomiationOverrideMappingEntry {
	struct FString Identifier; // 0x00(0x10)
	struct UPetCustomisationOverrideDataAsset* OverrideAsset; // 0x10(0x08)
};

// ScriptStruct Pets.PetDangerHearingThreat
// Size: 0x20 (Inherited: 0x00)
struct FPetDangerHearingThreat {
	struct FName SoundTag; // 0x00(0x08)
	float TimeBeforeForgotten; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FPetDangerHearingThreatResponse> Responses; // 0x10(0x10)
};

// ScriptStruct Pets.PetFeedingParams
// Size: 0x38 (Inherited: 0x00)
struct FPetFeedingParams {
	struct FPetFeedingAnimationData EatingAnimData; // 0x00(0x08)
	struct FPetFeedingAnimationData FedAnimData; // 0x08(0x08)
	struct FPetFeedingAnimationData NotFedAnimData; // 0x10(0x08)
	struct FPetFeedingAnimationData SickAnimData; // 0x18(0x08)
	struct FPetFeedingAnimationData RefusalAnimData; // 0x20(0x08)
	float TimeToStartEating; // 0x28(0x04)
	float TimeUntilGivingUp; // 0x2c(0x04)
	float DistToleranceSquared; // 0x30(0x04)
	float RotationTolerance; // 0x34(0x04)
};

// ScriptStruct Pets.PetFeedingAnimationData
// Size: 0x08 (Inherited: 0x00)
struct FPetFeedingAnimationData {
	char AnimationState; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float AnimationTimeout; // 0x04(0x04)
};

// ScriptStruct Pets.HangoutSpotPosition
// Size: 0x80 (Inherited: 0x00)
struct FHangoutSpotPosition {
	struct FHangoutSpotId Id; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	char RotationMode; // 0x40(0x01)
	char ShipDeck; // 0x41(0x01)
	char UnknownData_42[0x6]; // 0x42(0x06)
	struct APawn* Occupier; // 0x48(0x08)
	char UnknownData_50[0x10]; // 0x50(0x10)
	bool IsPerch; // 0x60(0x01)
	bool NeedOverrideInteractionPoint; // 0x61(0x01)
	char UnknownData_62[0x2]; // 0x62(0x02)
	struct FVector OverrideInteractionPointPosition; // 0x64(0x0c)
	bool BlockPetEmoteReactions; // 0x70(0x01)
	bool IgnorePickupFromHangoutTooltipDisplayOffset; // 0x71(0x01)
	char UnknownData_72[0xe]; // 0x72(0x0e)
};

// ScriptStruct Pets.PetListingTypeEntry
// Size: 0x38 (Inherited: 0x00)
struct FPetListingTypeEntry {
	struct FStringAssetReference PetPartsCategory; // 0x00(0x10)
	struct FStringClassReference PetType; // 0x10(0x10)
	struct FName FeatureToggleName; // 0x20(0x08)
	struct FString PetListingName; // 0x28(0x10)
};

// ScriptStruct Pets.PetsServiceParams
// Size: 0x38 (Inherited: 0x00)
struct FPetsServiceParams {
	uint32_t MaximumDistanceFromOwner; // 0x00(0x04)
	uint32_t ProximityRadius; // 0x04(0x04)
	int32_t MaxPetsInProximity; // 0x08(0x04)
	float RespawnRequestTimeout; // 0x0c(0x04)
	float SpawnTimeDelay; // 0x10(0x04)
	float MinPetProximityLifespan; // 0x14(0x04)
	float MaxPetProximityLifespan; // 0x18(0x04)
	float MinPetProximityRespawnDelay; // 0x1c(0x04)
	float MaxPetProximityRespawnDelay; // 0x20(0x04)
	float HeldPetDespawnDelay; // 0x24(0x04)
	struct TArray<struct UClass*> IllegalShipsSizesForSpawn; // 0x28(0x10)
};

// ScriptStruct Pets.PetRelationship
// Size: 0x20 (Inherited: 0x00)
struct FPetRelationship {
	struct APetItemInfo* PetInfo; // 0x00(0x08)
	char UnknownData_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Pets.ReactStateMapping
// Size: 0xd8 (Inherited: 0x00)
struct FReactStateMapping {
	struct FName AnimationID; // 0x00(0x08)
	bool CanTimeout; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float AnimationTimeout; // 0x0c(0x04)
	struct FWeightedPetAnimationSelector PetStateSelector; // 0x10(0xa0)
	float AnimationChance; // 0xb0(0x04)
	struct FFloatRange AnimationDelay; // 0xb4(0x10)
	char UnknownData_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct UClass*> IgnoringStrategies; // 0xc8(0x10)
};

// ScriptStruct Pets.EventWieldablePetPendingDrop
// Size: 0x01 (Inherited: 0x00)
struct FEventWieldablePetPendingDrop {
	char DropRequestReason; // 0x00(0x01)
};

// ScriptStruct Pets.WieldablePetDropTimeout
// Size: 0x08 (Inherited: 0x00)
struct FWieldablePetDropTimeout {
	char RequestReason; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float DropDelay; // 0x04(0x04)
};

// ScriptStruct Pets.WieldablePetFoodSourceEntry
// Size: 0x10 (Inherited: 0x00)
struct FWieldablePetFoodSourceEntry {
	struct AActor* FoodSourceActor; // 0x00(0x08)
	float TimeUntilConsumption; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Pets.WieldablePetHungerAnimationData
// Size: 0x08 (Inherited: 0x00)
struct FWieldablePetHungerAnimationData {
	char AnimState; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float AnimTimeout; // 0x04(0x04)
};

// ScriptStruct Pets.EventNewPetThreatDetected
// Size: 0x01 (Inherited: 0x00)
struct FEventNewPetThreatDetected {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Pets.EventPetDismissed
// Size: 0x08 (Inherited: 0x00)
struct FEventPetDismissed {
	struct AActor* DismissingActor; // 0x00(0x08)
};

// ScriptStruct Pets.DismissPetNotificationEvent
// Size: 0x01 (Inherited: 0x00)
struct FDismissPetNotificationEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Pets.EventPetRefusedFood
// Size: 0x18 (Inherited: 0x10)
struct FEventPetRefusedFood : FEventPetFoodBase {
	struct AActor* FeedingActor; // 0x10(0x08)
};

// ScriptStruct Pets.EventPetFoodBase
// Size: 0x10 (Inherited: 0x00)
struct FEventPetFoodBase {
	struct FGuid FeedingInteractionId; // 0x00(0x10)
};

// ScriptStruct Pets.EventPetReactedToFood
// Size: 0x14 (Inherited: 0x10)
struct FEventPetReactedToFood : FEventPetFoodBase {
	char ReactionType; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Pets.EventPetNotFed
// Size: 0x18 (Inherited: 0x10)
struct FEventPetNotFed : FEventPetFoodBase {
	struct AActor* FeedingActor; // 0x10(0x08)
};

// ScriptStruct Pets.EventPetFed
// Size: 0x20 (Inherited: 0x10)
struct FEventPetFed : FEventPetFoodBase {
	struct AActor* FedWithActor; // 0x10(0x08)
	struct AActor* FeedingActor; // 0x18(0x08)
};

// ScriptStruct Pets.EventPetPerchSpotEnabledStateChanged
// Size: 0x01 (Inherited: 0x00)
struct FEventPetPerchSpotEnabledStateChanged {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Pets.EventPetLeftHangout
// Size: 0x08 (Inherited: 0x00)
struct FEventPetLeftHangout {
	struct AActor* Pet; // 0x00(0x08)
};

// ScriptStruct Pets.EventPetEnteredHangout
// Size: 0x02 (Inherited: 0x00)
struct FEventPetEnteredHangout {
	char UnknownData_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Pets.EventPetSadnessEnd
// Size: 0x01 (Inherited: 0x00)
struct FEventPetSadnessEnd {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Pets.EventPetSadnessBegin
// Size: 0x01 (Inherited: 0x00)
struct FEventPetSadnessBegin {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Pets.EventPetInfoAssigned
// Size: 0x08 (Inherited: 0x00)
struct FEventPetInfoAssigned {
	struct AItemInfo* PetInfo; // 0x00(0x08)
};

// ScriptStruct Pets.EventPetOwnerAssigned
// Size: 0x08 (Inherited: 0x00)
struct FEventPetOwnerAssigned {
	struct AActor* Owner; // 0x00(0x08)
};

// ScriptStruct Pets.EventPetCustomisationComplete
// Size: 0x01 (Inherited: 0x00)
struct FEventPetCustomisationComplete {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Pets.EventPetCustomisationReady
// Size: 0x10 (Inherited: 0x00)
struct FEventPetCustomisationReady {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Pets.EventWieldablePetPutOnPerch
// Size: 0x20 (Inherited: 0x00)
struct FEventWieldablePetPutOnPerch {
	struct AActor* Pet; // 0x00(0x08)
	struct FName HangoutSpotName; // 0x08(0x08)
	uint32_t HangoutSpotIndex; // 0x10(0x04)
	struct AActor* WieldingActor; // 0x14(0x08)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Pets.EventPetDropped
// Size: 0x08 (Inherited: 0x00)
struct FEventPetDropped {
	struct AActor* PetInfo; // 0x00(0x08)
};

// ScriptStruct Pets.EventPetPickedUp
// Size: 0x0c (Inherited: 0x00)
struct FEventPetPickedUp {
	bool IsOnPerch; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct AActor* PetInfo; // 0x04(0x08)
};

// ScriptStruct Pets.EventPetReactBegun
// Size: 0x0c (Inherited: 0x00)
struct FEventPetReactBegun {
	struct FName ReactId; // 0x00(0x08)
	char ReactState; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Pets.EventPetReactCancellation
// Size: 0x10 (Inherited: 0x00)
struct FEventPetReactCancellation {
	struct AActor* ReactSource; // 0x00(0x08)
	struct FName ReactId; // 0x08(0x08)
};

// ScriptStruct Pets.EventPetReactRequest
// Size: 0x10 (Inherited: 0x00)
struct FEventPetReactRequest {
	struct AActor* ReactSource; // 0x00(0x08)
	struct FName ReactId; // 0x08(0x08)
};

// ScriptStruct Pets.RespawnPetEvent
// Size: 0x08 (Inherited: 0x00)
struct FRespawnPetEvent {
	struct AActor* PetOwner; // 0x00(0x08)
};

// ScriptStruct Pets.EventPetEndPlay
// Size: 0x08 (Inherited: 0x00)
struct FEventPetEndPlay {
	struct APawn* LinkedPet; // 0x00(0x08)
};

// ScriptStruct Pets.EventPetSpawnedForShip
// Size: 0x10 (Inherited: 0x00)
struct FEventPetSpawnedForShip {
	struct APawn* LinkedPet; // 0x00(0x08)
	struct AActor* LinkedShip; // 0x08(0x08)
};

// ScriptStruct Pets.PetBaseTelemetryFragmentInput
// Size: 0x08 (Inherited: 0x01)
struct FPetBaseTelemetryFragmentInput : FTelemetryFragmentInput {
	struct AActor* PetInfo; // 0x00(0x08)
};

// ScriptStruct Pets.PetBaseTelemetryFragment
// Size: 0x30 (Inherited: 0x00)
struct FPetBaseTelemetryFragment {
	struct FString OwnerId; // 0x00(0x10)
	struct FString PetPartId; // 0x10(0x10)
	char CurrentPetRepresentation; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	struct FVector PetLocation; // 0x24(0x0c)
};

// ScriptStruct Pets.WieldablePetPutOnPerchTelemetryEvent
// Size: 0x28 (Inherited: 0x00)
struct FWieldablePetPutOnPerchTelemetryEvent {
	struct FString HangoutSpotName; // 0x00(0x10)
	uint32_t HangoutSpotIndex; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString WieldingActorTelemetrySubjectId; // 0x18(0x10)
};

// ScriptStruct Pets.PetDismissedTelemetryEvent
// Size: 0x01 (Inherited: 0x00)
struct FPetDismissedTelemetryEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Pets.PetRefusedFoodTelemetryEvent
// Size: 0x20 (Inherited: 0x00)
struct FPetRefusedFoodTelemetryEvent {
	struct FString TryingToFeedPlayerId; // 0x00(0x10)
	struct FGuid FeedingInteractionId; // 0x10(0x10)
};

// ScriptStruct Pets.PetReactedToFoodTelemetryEvent
// Size: 0x14 (Inherited: 0x00)
struct FPetReactedToFoodTelemetryEvent {
	struct FGuid FeedingInteractionId; // 0x00(0x10)
	char FeedingReaction; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Pets.PetNotFedTelemetryEvent
// Size: 0x20 (Inherited: 0x00)
struct FPetNotFedTelemetryEvent {
	struct FString IgnoringPlayerId; // 0x00(0x10)
	struct FGuid FeedingInteractionId; // 0x10(0x10)
};

// ScriptStruct Pets.PetFedTelemetryEvent
// Size: 0x30 (Inherited: 0x00)
struct FPetFedTelemetryEvent {
	struct FString FedWithItemId; // 0x00(0x10)
	struct FString FeedingPlayerId; // 0x10(0x10)
	struct FGuid FeedingInteractionId; // 0x20(0x10)
};

// ScriptStruct Pets.PetReactedTelemetryEvent
// Size: 0x18 (Inherited: 0x00)
struct FPetReactedTelemetryEvent {
	struct FString ReactId; // 0x00(0x10)
	char AnimationState; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Pets.PetDroppedTelemetryEvent
// Size: 0x01 (Inherited: 0x00)
struct FPetDroppedTelemetryEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Pets.PetPickedUpTelemetryEvent
// Size: 0x01 (Inherited: 0x00)
struct FPetPickedUpTelemetryEvent {
	bool IsOnPerch; // 0x00(0x01)
};

// ScriptStruct Pets.PetControllerSetTickOrderEvent
// Size: 0x08 (Inherited: 0x00)
struct FPetControllerSetTickOrderEvent {
	struct AActor* Actor; // 0x00(0x08)
};

// ScriptStruct Pets.EventPetUGCBlockStateChanged
// Size: 0x01 (Inherited: 0x00)
struct FEventPetUGCBlockStateChanged {
	bool IsPetUGCBlocked; // 0x00(0x01)
};

// ScriptStruct Pets.EventPerchHangoutSpotSetEnabledState
// Size: 0x0c (Inherited: 0x00)
struct FEventPerchHangoutSpotSetEnabledState {
	char UnknownData_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Pets.EventHangoutSpotMadeAvailable
// Size: 0x50 (Inherited: 0x00)
struct FEventHangoutSpotMadeAvailable {
	char UnknownData_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Pets.EventHangoutSpotMadeUnavailable
// Size: 0x50 (Inherited: 0x00)
struct FEventHangoutSpotMadeUnavailable {
	char UnknownData_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Pets.PetDespawnActionStateParams
// Size: 0x40 (Inherited: 0x00)
struct FPetDespawnActionStateParams {
	float TakeOffHeight; // 0x00(0x04)
	float TakeOffTime; // 0x04(0x04)
	float TotalGhostShaderTime; // 0x08(0x04)
	float TimeToTriggerVFX; // 0x0c(0x04)
	struct UObject* DespawnVFX; // 0x10(0x08)
	struct FLinearColor DespawnVFXColour; // 0x18(0x10)
	struct UWwiseEvent* DespawnSFX; // 0x28(0x08)
	struct UWwiseEvent* StopDespawnSFX; // 0x30(0x08)
	float TotalDespawningTime; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Pets.PetSpawnActionStateConstructionInfo
// Size: 0x30 (Inherited: 0x30)
struct FPetSpawnActionStateConstructionInfo : FActorActionStateConstructionInfo {
};

// ScriptStruct Pets.PetSpawnActionStateParams
// Size: 0x40 (Inherited: 0x00)
struct FPetSpawnActionStateParams {
	float LandingHeight; // 0x00(0x04)
	float LandingTime; // 0x04(0x04)
	float TotalGhostShaderTime; // 0x08(0x04)
	float TimeToTriggerVFX; // 0x0c(0x04)
	struct UObject* SpawnVFX; // 0x10(0x08)
	struct FLinearColor SpawnVFXColour; // 0x18(0x10)
	struct UWwiseEvent* SpawnSFX; // 0x28(0x08)
	struct UWwiseEvent* StopSpawnSFX; // 0x30(0x08)
	float TotalSpawningTime; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Pets.EventWieldablePetHungerStateUpdated
// Size: 0x01 (Inherited: 0x00)
struct FEventWieldablePetHungerStateUpdated {
	char NewState; // 0x00(0x01)
};

