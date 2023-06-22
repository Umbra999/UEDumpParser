// Enum Tales.ETaleQuestStepBeginMode
enum class ETaleQuestStepBeginMode : uint8_t {
	Cold,
	Warm,
	ETaleQuestStepBeginMode_MAX,
};

// Enum Tales.ETaleQuestStepState
enum class ETaleQuestStepState : uint8_t {
	Inactive,
	Active,
	PendingCompletion,
	Completed,
	ETaleQuestStepState_MAX,
};

// Enum Tales.ETaleQuestQueryableStateDataIntComparison
enum class ETaleQuestQueryableStateDataIntComparison : uint8_t {
	Equal,
	Greater,
	GreaterOrEqual,
	Less,
	LessOrEqual,
	ETaleQuestQueryableStateDataIntComparison_MAX,
};

// Enum Tales.ETaleInteractionState
enum class ETaleInteractionState : uint8_t {
	Enabled,
	Disabled,
	ETaleInteractionState_MAX,
};

// Enum Tales.ELostShipmentsIslandTypes
enum class ELostShipmentsIslandTypes : uint8_t {
	Feature,
	Resource,
	Seapost,
	Outpost,
	Fort,
	ELostShipmentsIslandTypes_MAX,
};

// Enum Tales.EModifyAtIndexType
enum class EModifyAtIndexType : uint8_t {
	AddPageAtIndex,
	ReplacePageAtIndex,
	ReplacePageFromIndex,
	EModifyAtIndexType_MAX,
};

// ScriptStruct Tales.TaleQuestDeliveryRequest
// Size: 0x38 (Inherited: 0x00)
struct FTaleQuestDeliveryRequest {
	int32_t Id; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FMerchantContractItemDesc Item; // 0x08(0x28)
	int32_t NumToDeliver; // 0x30(0x04)
	int32_t NumToAllocate; // 0x34(0x04)
};

// ScriptStruct Tales.TaleActorSpawnParameters
// Size: 0x03 (Inherited: 0x00)
struct FTaleActorSpawnParameters {
	bool Tracked; // 0x00(0x01)
	bool GatherForMigration; // 0x01(0x01)
	bool DeferredSpawning; // 0x02(0x01)
};

// ScriptStruct Tales.IslandTypeWeights
// Size: 0x14 (Inherited: 0x00)
struct FIslandTypeWeights {
	float FeatureIslandWeight; // 0x00(0x04)
	float ResourceIslandWeight; // 0x04(0x04)
	float OutpostIslandWeight; // 0x08(0x04)
	float SeapostIslandWeight; // 0x0c(0x04)
	float FortIslandWeight; // 0x10(0x04)
};

// ScriptStruct Tales.QuestVariableAny
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableAny : FQuestVariable {
};

// ScriptStruct Tales.SplineFootprintPathTool
// Size: 0x01 (Inherited: 0x00)
struct FSplineFootprintPathTool {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Tales.TaleQuestCargoRunContractItem
// Size: 0x18 (Inherited: 0x00)
struct FTaleQuestCargoRunContractItem {
	struct UClass* ItemToCollect; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Tales.CompondNodePinDesc
// Size: 0x48 (Inherited: 0x00)
struct FCompondNodePinDesc {
	struct FText DisplayName; // 0x00(0x38)
	struct FGuid PinId; // 0x38(0x10)
};

// ScriptStruct Tales.TaleQuestDesc
// Size: 0x80 (Inherited: 0x28)
struct FTaleQuestDesc : FQuestDesc {
	struct UTaleQuestStepDesc* Root; // 0x28(0x08)
	struct UObject* Definition; // 0x30(0x08)
	struct FText TaleFailMessage; // 0x38(0x38)
	struct FName TaleFailBannerTag; // 0x70(0x08)
	bool ShouldFireStartTallTaleTrackedObjective; // 0x78(0x01)
	bool Development; // 0x79(0x01)
	char UnknownData_7A[0x6]; // 0x7a(0x06)
};

// ScriptStruct Tales.TaleQuestToggledDefinition
// Size: 0x10 (Inherited: 0x00)
struct FTaleQuestToggledDefinition {
	struct FName FeatureToggle; // 0x00(0x08)
	struct UClass* Definition; // 0x08(0x08)
};

// ScriptStruct Tales.TaleQuestQueryableStateDataInfo
// Size: 0x20 (Inherited: 0x00)
struct FTaleQuestQueryableStateDataInfo {
	struct FGuid TaleId; // 0x00(0x10)
	struct UClass* DataID; // 0x10(0x08)
	bool DataBool; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	int32_t DataInt; // 0x1c(0x04)
};

// ScriptStruct Tales.TrackedActorData
// Size: 0x10 (Inherited: 0x00)
struct FTrackedActorData {
	struct AActor* Actor; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Tales.SnapshottedActorData
// Size: 0x60 (Inherited: 0x00)
struct FSnapshottedActorData {
	TScriptInterface<struct USnapshotOwnerInterface> Instagator; // 0x00(0x10)
	struct FGuid SnapshotID; // 0x10(0x10)
	bool ActorWasCritical; // 0x20(0x01)
	bool ActorWasTracked; // 0x21(0x01)
	char UnknownData_22[0x6]; // 0x22(0x06)
	struct FText FailureMessage; // 0x28(0x38)
};

// ScriptStruct Tales.CriticalActorDelegateData
// Size: 0x48 (Inherited: 0x00)
struct FCriticalActorDelegateData {
	struct AActor* CriticalActor; // 0x00(0x08)
	struct FText FailureMessage; // 0x08(0x38)
	char UnknownData_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Tales.CriticalActorWrapper
// Size: 0x40 (Inherited: 0x00)
struct FCriticalActorWrapper {
	struct AActor* CriticalActor; // 0x00(0x08)
	char UnknownData_8[0x38]; // 0x08(0x38)
};

// ScriptStruct Tales.PhasedItem
// Size: 0x28 (Inherited: 0x00)
struct FPhasedItem {
	struct AItemProxy* ItemProxy; // 0x00(0x08)
	struct AItemInfo* ItemInfo; // 0x08(0x08)
	bool Tracked; // 0x10(0x01)
	char UnknownData_11[0x17]; // 0x11(0x17)
};

// ScriptStruct Tales.PhasedActor
// Size: 0x20 (Inherited: 0x00)
struct FPhasedActor {
	struct AActor* MapActor; // 0x00(0x08)
	struct AActor* Actor; // 0x08(0x08)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Tales.QuestVariableCollection
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableCollection : FQuestVariable {
};

// ScriptStruct Tales.QuestVariableArray
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableArray : FQuestVariable {
};

// ScriptStruct Tales.QuestVariableGuidArray
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableGuidArray : FQuestVariable {
};

// ScriptStruct Tales.QuestVariableActorArray
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableActorArray : FQuestVariable {
};

// ScriptStruct Tales.QuestVariableObjectArray
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableObjectArray : FQuestVariable {
};

// ScriptStruct Tales.QuestVariableClassArray
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableClassArray : FQuestVariable {
};

// ScriptStruct Tales.QuestVariableSetEQSTaleContextValue
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableSetEQSTaleContextValue : FQuestVariable {
};

// ScriptStruct Tales.QuestVariableLinkEQSContext
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableLinkEQSContext : FQuestVariable {
};

// ScriptStruct Tales.ParticpantToolGroup
// Size: 0x20 (Inherited: 0x00)
struct FParticpantToolGroup {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Tales.MigrationActionPair
// Size: 0x10 (Inherited: 0x00)
struct FMigrationActionPair {
	struct FTaleResourceHandle AllocatedResourceHandle; // 0x00(0x08)
	struct UTaleMigrationAction* MigrationAction; // 0x08(0x08)
};

// ScriptStruct Tales.QuestVariableRotator
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableRotator : FQuestVariable {
};

// ScriptStruct Tales.QuestVariableActorAssetType
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableActorAssetType : FQuestVariable {
};

// ScriptStruct Tales.BodyFramePair
// Size: 0x28 (Inherited: 0x00)
struct FBodyFramePair {
	char UnknownData_0[0x10]; // 0x00(0x10)
	struct UTaleQuestIndexedFrame* Frame; // 0x10(0x08)
	TScriptInterface<struct UTaleQuestStepInterface> Body; // 0x18(0x10)
};

// ScriptStruct Tales.TaleQuestForEachCrewTask
// Size: 0x28 (Inherited: 0x00)
struct FTaleQuestForEachCrewTask {
	TScriptInterface<struct UTaleQuestStepInterface> Task; // 0x00(0x10)
	char UnknownData_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Tales.TaleQuestStopPermanentPromptEvent
// Size: 0x01 (Inherited: 0x00)
struct FTaleQuestStopPermanentPromptEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Tales.QuestVariableItemDescType
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableItemDescType : FQuestVariable {
};

// ScriptStruct Tales.QuestVariableItemInfo
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableItemInfo : FQuestVariable {
};

// ScriptStruct Tales.QuestVariablePrioritisedPrompt
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariablePrioritisedPrompt : FQuestVariable {
};

// ScriptStruct Tales.QuestVariableGameEvent
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableGameEvent : FQuestVariable {
};

// ScriptStruct Tales.QuestVariableAISpawner
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableAISpawner : FQuestVariable {
};

// ScriptStruct Tales.TaleQuestQueryableStateCanAllDataBeReadCondition
// Size: 0x40 (Inherited: 0x28)
struct FTaleQuestQueryableStateCanAllDataBeReadCondition : FTargetedPayloadConditionBase {
	struct TArray<struct UClass*> AllDataToCheck; // 0x28(0x10)
	bool ExpectedValue; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Tales.TaleQuestQueryableStateCanAnyDataBeReadCondition
// Size: 0x40 (Inherited: 0x28)
struct FTaleQuestQueryableStateCanAnyDataBeReadCondition : FTargetedPayloadConditionBase {
	struct TArray<struct UClass*> AllDataToCheck; // 0x28(0x10)
	bool ExpectedValue; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Tales.TaleQuestQueryableStateReadAllValueBoolCondition
// Size: 0x40 (Inherited: 0x28)
struct FTaleQuestQueryableStateReadAllValueBoolCondition : FTargetedPayloadConditionBase {
	struct TArray<struct UClass*> AllDataToCheck; // 0x28(0x10)
	bool ExpectedValue; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Tales.TaleQuestQueryableStateReadAnyValueBoolCondition
// Size: 0x40 (Inherited: 0x28)
struct FTaleQuestQueryableStateReadAnyValueBoolCondition : FTargetedPayloadConditionBase {
	struct TArray<struct UClass*> AllDataToCheck; // 0x28(0x10)
	bool ExpectedValue; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Tales.TaleQuestQueryableStateReadValueIntCondition
// Size: 0x38 (Inherited: 0x28)
struct FTaleQuestQueryableStateReadValueIntCondition : FTargetedPayloadConditionBase {
	struct UClass* DataID; // 0x28(0x08)
	int32_t ExpectedValue; // 0x30(0x04)
	char ComparisonToExpectedValue; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
};

// ScriptStruct Tales.InteractionOptionSelectedWithQueryableStateNonUI
// Size: 0x20 (Inherited: 0x00)
struct FInteractionOptionSelectedWithQueryableStateNonUI {
	struct UClass* DataID; // 0x00(0x08)
	struct FGuid InstigatorCrewID; // 0x08(0x10)
	struct AActor* InteractingPlayer; // 0x18(0x08)
};

// ScriptStruct Tales.QuestVariableTaleResourceHandle
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableTaleResourceHandle : FQuestVariable {
};

// ScriptStruct Tales.QueryableStateChangedEvent
// Size: 0x20 (Inherited: 0x00)
struct FQueryableStateChangedEvent {
	struct FTaleQuestQueryableStateDataInfo DataValue; // 0x00(0x20)
};

// ScriptStruct Tales.ActorSpawnedAutomationEvent
// Size: 0x08 (Inherited: 0x00)
struct FActorSpawnedAutomationEvent {
	struct AActor* Actor; // 0x00(0x08)
};

// ScriptStruct Tales.EventSpawnedTallTaleQuestItem
// Size: 0x01 (Inherited: 0x00)
struct FEventSpawnedTallTaleQuestItem {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Tales.TaleQuestSelectorServiceSeedSetTelemetryEvent
// Size: 0x04 (Inherited: 0x00)
struct FTaleQuestSelectorServiceSeedSetTelemetryEvent {
	int32_t Seed; // 0x00(0x04)
};

// ScriptStruct Tales.PlaySequencerAutomationEvent
// Size: 0x18 (Inherited: 0x00)
struct FPlaySequencerAutomationEvent {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Tales.MontageAnimationCommandBase
// Size: 0x18 (Inherited: 0x08)
struct FMontageAnimationCommandBase : FClientCommandBase {
	struct AActor* MyTarget; // 0x08(0x08)
	struct UAnimMontage* MyMontage; // 0x10(0x08)
};

// ScriptStruct Tales.JumpToMontageSectionCommand
// Size: 0x20 (Inherited: 0x18)
struct FJumpToMontageSectionCommand : FMontageAnimationCommandBase {
	struct FName SectionName; // 0x18(0x08)
};

// ScriptStruct Tales.PlayMontageAnimationCommand
// Size: 0x20 (Inherited: 0x18)
struct FPlayMontageAnimationCommand : FMontageAnimationCommandBase {
	float PlayRate; // 0x18(0x04)
	float Position; // 0x1c(0x04)
};

// ScriptStruct Tales.SetNextMontageSectionCommand
// Size: 0x28 (Inherited: 0x18)
struct FSetNextMontageSectionCommand : FMontageAnimationCommandBase {
	struct FName FromSectionName; // 0x18(0x08)
	struct FName ToSectionName; // 0x20(0x08)
};

// ScriptStruct Tales.StopMontageAnimationCommand
// Size: 0x20 (Inherited: 0x18)
struct FStopMontageAnimationCommand : FMontageAnimationCommandBase {
	float BlendOutTime; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Tales.SetDialogueInteractionEnabledClientCommand
// Size: 0x18 (Inherited: 0x08)
struct FSetDialogueInteractionEnabledClientCommand : FClientCommandBase {
	struct UObject* DialogueComponentObject; // 0x08(0x08)
	bool ShouldBeEnabled; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Tales.SetDialogueInteractionPromptClientCommand
// Size: 0x48 (Inherited: 0x08)
struct FSetDialogueInteractionPromptClientCommand : FClientCommandBase {
	struct UNPCDialogComponent* DialogueComponent; // 0x08(0x08)
	struct FText Prompt; // 0x10(0x38)
};

// ScriptStruct Tales.EventModalInteractionStateChanged
// Size: 0x01 (Inherited: 0x00)
struct FEventModalInteractionStateChanged {
	bool IsInteractionBlocked; // 0x00(0x01)
};

// ScriptStruct Tales.ToggleModalInteractionNetworkEvent
// Size: 0x20 (Inherited: 0x10)
struct FToggleModalInteractionNetworkEvent : FBoxedRpc {
	struct AActor* TargetActor; // 0x10(0x08)
	bool InteractionBlocked; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Tales.QuestVariableMerchantItemArray
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableMerchantItemArray : FQuestVariable {
};

// ScriptStruct Tales.QuestVariableMerchantItem
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableMerchantItem : FQuestVariable {
};

// ScriptStruct Tales.StepMerchantItemDesc
// Size: 0x40 (Inherited: 0x00)
struct FStepMerchantItemDesc {
	struct FText Name; // 0x00(0x38)
	struct UTexture* Icon; // 0x38(0x08)
};

// ScriptStruct Tales.QuestVariableActorAssetTypeArray
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableActorAssetTypeArray : FQuestVariable {
};

// ScriptStruct Tales.QuestVariableItemDescTypeArray
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableItemDescTypeArray : FQuestVariable {
};

// ScriptStruct Tales.QuestVariablePageLayout
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariablePageLayout : FQuestVariable {
};

// ScriptStruct Tales.QuestVariableTexture
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableTexture : FQuestVariable {
};

// ScriptStruct Tales.TaleQuestFailedEvent
// Size: 0x20 (Inherited: 0x00)
struct FTaleQuestFailedEvent {
	struct TArray<struct FGuid> CrewIds; // 0x00(0x10)
	struct FGuid QuestId; // 0x10(0x10)
};

// ScriptStruct Tales.TaleQuestContextInvalidTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FTaleQuestContextInvalidTelemetryEvent {
	struct FName StepType; // 0x00(0x08)
	struct FName Tale; // 0x08(0x08)
};

// ScriptStruct Tales.TaleQuestDeliverableItem
// Size: 0x40 (Inherited: 0x00)
struct FTaleQuestDeliverableItem {
	struct FText Name; // 0x00(0x38)
	struct UTexture* Icon; // 0x38(0x08)
};

// ScriptStruct Tales.QuestVariableBountyTargetArray
// Size: 0x30 (Inherited: 0x30)
struct FQuestVariableBountyTargetArray : FQuestVariable {
};

// ScriptStruct Tales.StepBountyTargetDesc
// Size: 0x40 (Inherited: 0x00)
struct FStepBountyTargetDesc {
	struct FText Name; // 0x00(0x38)
	struct UTexture* Portrait; // 0x38(0x08)
};

