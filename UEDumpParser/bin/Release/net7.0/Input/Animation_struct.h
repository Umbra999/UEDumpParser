// Enum Animation.ECharacterIKLimb
enum class ECharacterIKLimb : uint8_t {
	None,
	LeftHand,
	RightHand,
	LeftFoot,
	RightFoot,
	ECharacterIKLimb_MAX,
};

// Enum Animation.EAthenaAnimationSocketGroupCharacterSize
enum class EAthenaAnimationSocketGroupCharacterSize : uint8_t {
	Default,
	Large,
	Thin,
	EAthenaAnimationSocketGroupCharacterSize_MAX,
};

// Enum Animation.EAthenaAnimationSocketGroup
enum class EAthenaAnimationSocketGroup : uint8_t {
	Male,
	Female,
	EAthenaAnimationSocketGroup_MAX,
};

// Enum Animation.ELimbIKSpace
enum class ELimbIKSpace : uint8_t {
	Local,
	World,
	Character,
	ELimbIKSpace_MAX,
};

// Enum Animation.ECustomAnimationMontageType
enum class ECustomAnimationMontageType : uint8_t {
	OneShot,
	LoopingOneShot,
	LoopingStaged,
	ECustomAnimationMontageType_MAX,
};

// ScriptStruct Animation.TransformBlendCurve
// Size: 0x500 (Inherited: 0x00)
struct FTransformBlendCurve {
	bool UseLocationCurve; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FRuntimeVectorCurve LocationCurve; // 0x08(0x170)
	bool UseRotationCurve; // 0x178(0x01)
	char UnknownData_179[0x7]; // 0x179(0x07)
	struct FRuntimeVectorCurve RotationCurve; // 0x180(0x170)
	bool UseScaleCurve; // 0x2f0(0x01)
	char UnknownData_2F1[0x7]; // 0x2f1(0x07)
	struct FRuntimeVectorCurve ScaleCurve; // 0x2f8(0x170)
	char UnknownData_468[0x8]; // 0x468(0x08)
	struct FTransform SourceTransform; // 0x470(0x30)
	struct FTransform TargetTransform; // 0x4a0(0x30)
	char UnknownData_4D0[0x30]; // 0x4d0(0x30)
};

// ScriptStruct Animation.CustomAnimationMontageId
// Size: 0x08 (Inherited: 0x00)
struct FCustomAnimationMontageId {
	struct FName CustomAnimationMontageId; // 0x00(0x08)
};

// ScriptStruct Animation.HitReactionAnimationData
// Size: 0x08 (Inherited: 0x00)
struct FHitReactionAnimationData {
	struct UBlendSpace1D* HitReactBlendSpace; // 0x00(0x08)
};

// ScriptStruct Animation.AnimDataEntryStructWrapper
// Size: 0x18 (Inherited: 0x00)
struct FAnimDataEntryStructWrapper {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Animation.AnimationDataStoreEntry
// Size: 0x18 (Inherited: 0x00)
struct FAnimationDataStoreEntry {
	struct UClass* AnimDataId; // 0x00(0x08)
	struct UAnimationData* AnimData; // 0x08(0x08)
	struct UAnimationServerData* AnimServerData; // 0x10(0x08)
};

// ScriptStruct Animation.AnimationDataStoreLoadingEntry
// Size: 0x40 (Inherited: 0x00)
struct FAnimationDataStoreLoadingEntry {
	char UnknownData_0[0x38]; // 0x00(0x38)
	struct UClass* AnimDataId; // 0x38(0x08)
};

// ScriptStruct Animation.AnimationDataStoreAssetWeakReferenceEntry
// Size: 0x28 (Inherited: 0x00)
struct FAnimationDataStoreAssetWeakReferenceEntry {
	struct UClass* AnimDataId; // 0x00(0x08)
	struct UClass* AnimData; // 0x08(0x20)
};

// ScriptStruct Animation.AnimationDataStoreAssetEntry
// Size: 0x18 (Inherited: 0x00)
struct FAnimationDataStoreAssetEntry {
	struct UClass* AnimDataId; // 0x00(0x08)
	struct UClass* AnimDataTypeCooked; // 0x08(0x08)
	struct UAnimationServerData* AnimServerData; // 0x10(0x08)
};

// ScriptStruct Animation.CurveUpdateValues
// Size: 0x0c (Inherited: 0x00)
struct FCurveUpdateValues {
	struct FName CurveName; // 0x00(0x08)
	float FinalValue; // 0x08(0x04)
};

// ScriptStruct Animation.CharacterAnimationIKUpdateParams
// Size: 0x40 (Inherited: 0x00)
struct FCharacterAnimationIKUpdateParams {
	float CurrentAlpha; // 0x00(0x04)
	float TranslationStrength; // 0x04(0x04)
	float RotationStrength; // 0x08(0x04)
	struct FVector Location; // 0x0c(0x0c)
	char UnknownData_18[0x8]; // 0x18(0x08)
	struct FQuat Orientation; // 0x20(0x10)
	char EffectorSpace; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FName ParentBone; // 0x34(0x08)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Animation.LimbIK
// Size: 0x60 (Inherited: 0x00)
struct FLimbIK {
	char UnknownData_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Animation.CosmeticItems
// Size: 0x10 (Inherited: 0x00)
struct FCosmeticItems {
	struct TArray<struct AActor*> CosmeticItemArray; // 0x00(0x10)
};

// ScriptStruct Animation.CosmeticItemAnimationSetLoopData
// Size: 0x20 (Inherited: 0x00)
struct FCosmeticItemAnimationSetLoopData {
	struct UAnimSequenceBase* Into; // 0x00(0x08)
	struct UAnimSequenceBase* Loop; // 0x08(0x08)
	struct FName IntoSyncGroup; // 0x10(0x08)
	struct FName LoopSyncGroup; // 0x18(0x08)
};

// ScriptStruct Animation.CustomAnimationMontageComponentReplicatedData
// Size: 0x0c (Inherited: 0x00)
struct FCustomAnimationMontageComponentReplicatedData {
	struct FCustomAnimationMontageId CustomMontageId; // 0x00(0x08)
	int32_t AnimationCallId; // 0x08(0x04)
};

// ScriptStruct Animation.CustomAnimationMontageStagedLoopingData
// Size: 0x28 (Inherited: 0x00)
struct FCustomAnimationMontageStagedLoopingData {
	struct UAnimMontage* Into; // 0x00(0x08)
	struct TArray<struct UAnimMontage*> LoopAnims; // 0x08(0x10)
	struct TArray<struct UAnimMontage*> OutOfAnims; // 0x18(0x10)
};

// ScriptStruct Animation.CustomAnimationMontageDefinitionEntry
// Size: 0x18 (Inherited: 0x00)
struct FCustomAnimationMontageDefinitionEntry {
	struct FName MontageId; // 0x00(0x08)
	struct FStringAssetReference Definition; // 0x08(0x10)
};

// ScriptStruct Animation.ActorVelocityData
// Size: 0x18 (Inherited: 0x00)
struct FActorVelocityData {
	struct FVector ActorsVelocityVector; // 0x00(0x0c)
	float ActorSpeed; // 0x0c(0x04)
	bool IsCharacterMoving; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float WantedMovementSpeed; // 0x14(0x04)
};

// ScriptStruct Animation.WeightedAnimationData
// Size: 0x18 (Inherited: 0x00)
struct FWeightedAnimationData {
	struct FStringAssetReference Animation; // 0x00(0x10)
	float Weighting; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Animation.EventCosmeticItemAttachmentSwitched
// Size: 0x08 (Inherited: 0x00)
struct FEventCosmeticItemAttachmentSwitched {
	struct AActor* Owner; // 0x00(0x08)
};

// ScriptStruct Animation.EventCosmeticItemSpawnedOwnerNotification
// Size: 0x08 (Inherited: 0x00)
struct FEventCosmeticItemSpawnedOwnerNotification {
	struct AActor* CosmeticItemActor; // 0x00(0x08)
};

// ScriptStruct Animation.EventCosmeticItemSpawned
// Size: 0x10 (Inherited: 0x00)
struct FEventCosmeticItemSpawned {
	struct AActor* Owner; // 0x00(0x08)
	struct UCosmeticItemAnimationSetDataAsset* CosmeticData; // 0x08(0x08)
};

// ScriptStruct Animation.EventAnimationResetHappyReact
// Size: 0x01 (Inherited: 0x00)
struct FEventAnimationResetHappyReact {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Animation.EventAnimationHappyReact
// Size: 0x01 (Inherited: 0x00)
struct FEventAnimationHappyReact {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Animation.EventHitReactAnimationFinished
// Size: 0x01 (Inherited: 0x00)
struct FEventHitReactAnimationFinished {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Animation.EventHitReactAnimationRequested
// Size: 0x1c (Inherited: 0x00)
struct FEventHitReactAnimationRequested {
	struct FVector HitNormal; // 0x00(0x0c)
	struct FVector HitVelocity; // 0x0c(0x0c)
	char ReactionAnimType; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Animation.HitReactionAnimationState
// Size: 0x28 (Inherited: 0x00)
struct FHitReactionAnimationState {
	float Yaw; // 0x00(0x04)
	float AdditiveBlend; // 0x04(0x04)
	char ReactType; // 0x08(0x01)
	bool ActivateNewHitReact; // 0x09(0x01)
	char UnknownData_A[0x1e]; // 0x0a(0x1e)
};

// ScriptStruct Animation.AnimationLookAtParams
// Size: 0x0c (Inherited: 0x00)
struct FAnimationLookAtParams {
	float ActivationSpeed; // 0x00(0x04)
	float HorizontalLimit; // 0x04(0x04)
	float VerticalLimit; // 0x08(0x04)
};

// ScriptStruct Animation.AnimationLookAt
// Size: 0xa8 (Inherited: 0x00)
struct FAnimationLookAt {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FAnimationLookAtParams Params; // 0x08(0x0c)
	struct FVector LookAtTarget; // 0x14(0x0c)
	bool IKLookAtActive; // 0x20(0x01)
	char UnknownData_21[0x87]; // 0x21(0x87)
};

// ScriptStruct Animation.EventAnimationLookAtUpdated
// Size: 0x01 (Inherited: 0x00)
struct FEventAnimationLookAtUpdated {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Animation.IKLookAtParams
// Size: 0x0c (Inherited: 0x00)
struct FIKLookAtParams {
	float ActivationSpeed; // 0x00(0x04)
	float HorizontalLimit; // 0x04(0x04)
	float VerticalLimit; // 0x08(0x04)
};

// ScriptStruct Animation.AnimNode_WeightedLoadOnDemandSquencePlayer
// Size: 0x70 (Inherited: 0x40)
struct FAnimNode_WeightedLoadOnDemandSquencePlayer : FAnimNode_AssetPlayerBase {
	float PlayRate; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct UWeightedAnimSequenceLoadOnDemand* WeightedAnimSequenceLoadOnDemand; // 0x48(0x08)
	int32_t GroupIndex; // 0x50(0x04)
	char GroupRole; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	struct UAnimSequence* CurrentSequence; // 0x58(0x08)
	struct UAnimSequence* NextSequence; // 0x60(0x08)
	char UnknownData_68[0x8]; // 0x68(0x08)
};

// ScriptStruct Animation.WeightedAnimationLoadOnDemandDataMetaData
// Size: 0x38 (Inherited: 0x00)
struct FWeightedAnimationLoadOnDemandDataMetaData {
	struct TArray<struct FWeightedAnimationData> AnimationList; // 0x00(0x10)
	struct FString AssetName; // 0x10(0x10)
	struct FString FallbackSkeletonName; // 0x20(0x10)
	bool FallbackValidAdditive; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Animation.EventCustomAnimationMontageExitRequested
// Size: 0x0c (Inherited: 0x00)
struct FEventCustomAnimationMontageExitRequested {
	char UnknownData_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Animation.EventCustomAnimationMontageRequested
// Size: 0x08 (Inherited: 0x00)
struct FEventCustomAnimationMontageRequested {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Animation.CustomAnimationMontageStateMachine
// Size: 0xd8 (Inherited: 0x00)
struct FCustomAnimationMontageStateMachine {
	struct UCustomAnimationMontageDefinitionDataAsset* ActiveState; // 0x00(0x08)
	struct UCustomAnimationMontageDefinitionDataAsset* PendingState; // 0x08(0x08)
	struct UAnimMontage* ActiveMontage; // 0x10(0x08)
	char UnknownData_18[0xc0]; // 0x18(0xc0)
};

// ScriptStruct Animation.EventPreviewCharacterAnimationRequest
// Size: 0x08 (Inherited: 0x00)
struct FEventPreviewCharacterAnimationRequest {
	struct UAnimationAsset* AnimationToPlay; // 0x00(0x08)
};

// ScriptStruct Animation.AnimationStateCompleteEvent
// Size: 0x08 (Inherited: 0x00)
struct FAnimationStateCompleteEvent {
	struct UClass* CompletedStateId; // 0x00(0x08)
};

// ScriptStruct Animation.WeightedAnimationTimeoutSelector
// Size: 0x10 (Inherited: 0x00)
struct FWeightedAnimationTimeoutSelector {
	struct TArray<struct FWeightedAnimationTimeout> Weightings; // 0x00(0x10)
};

// ScriptStruct Animation.WeightedAnimationTimeout
// Size: 0x14 (Inherited: 0x00)
struct FWeightedAnimationTimeout {
	struct FFloatRange TimeoutRange; // 0x00(0x10)
	float Weighting; // 0x10(0x04)
};

// ScriptStruct Animation.DockableInfo
// Size: 0x18 (Inherited: 0x00)
struct FDockableInfo {
	struct FName SocketName; // 0x00(0x08)
	struct USceneComponent* SceneComponent; // 0x08(0x08)
	char ShouldOverlapsUpdateOnParentUpdate; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Animation.Docker
// Size: 0x90 (Inherited: 0x00)
struct FDocker {
	char UnknownData_0[0x90]; // 0x00(0x90)
};

