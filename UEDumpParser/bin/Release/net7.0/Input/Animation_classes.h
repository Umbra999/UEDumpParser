// Class Animation.CharacterAnimationInstance
// Size: 0x660 (Inherited: 0x440)
struct UCharacterAnimationInstance : UAnimInstance {
	char UnknownData_440[0x10]; // 0x440(0x10)
	struct FCharacterAnimationIKUpdateParams IKLeftHandUpdateParams; // 0x450(0x40)
	struct FCharacterAnimationIKUpdateParams IKRightHandUpdateParams; // 0x490(0x40)
	struct FName RightHandIKSocketName; // 0x4d0(0x08)
	struct FName LeftHandIKSocketName; // 0x4d8(0x08)
	struct FLimbIK RightHandIK; // 0x4e0(0x60)
	struct FLimbIK LeftHandIK; // 0x540(0x60)
	struct FLimbIK RightFootIK; // 0x5a0(0x60)
	struct FLimbIK LeftFootIK; // 0x600(0x60)
};

// Class Animation.AnimationData
// Size: 0x28 (Inherited: 0x28)
struct UAnimationData : UObject {
};

// Class Animation.AnimationServerData
// Size: 0x28 (Inherited: 0x28)
struct UAnimationServerData : UObject {
};

// Class Animation.AIAnimationInstanceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIAnimationInstanceInterface : UInterface {
};

// Class Animation.AnimationDataConsumerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAnimationDataConsumerInterface : UInterface {
};

// Class Animation.AnimationDataFunctionLib
// Size: 0x28 (Inherited: 0x28)
struct UAnimationDataFunctionLib : UBlueprintFunctionLibrary {

	bool UnwrapAnimDataEntryStruct(struct FAnimDataEntryStructWrapper Wrapper, struct UScriptStruct* DestinationStruct, struct FGenericStruct Value); // Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3349e40
	struct UAnimationData* MakeAnimationData(struct UClass* Class); // Function Animation.AnimationDataFunctionLib.MakeAnimationData // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3348cd0
	struct FAnimDataEntryStructWrapper GetAnimDataEntryStructAsStructWrapper(struct UAnimationData* AnimationDataObject, struct UScriptStruct* TheClass); // Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3348340
	void CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs(struct UClass* InClass); // Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs // Final|Native|Static|Public // @ game+0x3347f80
};

// Class Animation.AnimationDataOverriderInterface
// Size: 0x28 (Inherited: 0x28)
struct UAnimationDataOverriderInterface : UInterface {
};

// Class Animation.AnimationDataStoreId
// Size: 0x28 (Inherited: 0x28)
struct UAnimationDataStoreId : UObject {
};

// Class Animation.AnimationDataStoreOverrideId
// Size: 0x28 (Inherited: 0x28)
struct UAnimationDataStoreOverrideId : UAnimationDataStoreId {
};

// Class Animation.AnimationDataStore
// Size: 0x60 (Inherited: 0x28)
struct UAnimationDataStore : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)
	struct TArray<struct FAnimationDataStoreEntry> Data; // 0x40(0x10)
	struct TArray<struct FAnimationDataStoreLoadingEntry> LoadingData; // 0x50(0x10)
};

// Class Animation.AnimationDataStoreAsset
// Size: 0x38 (Inherited: 0x28)
struct UAnimationDataStoreAsset : UDataAsset {
	struct TArray<struct FAnimationDataStoreAssetEntry> AssetRefs; // 0x28(0x10)

	struct UAnimationData* LookupAnimationData(struct UClass* AnimDataId); // Function Animation.AnimationDataStoreAsset.LookupAnimationData // Final|Native|Public|BlueprintCallable // @ game+0x3348c40
	struct UClass* GetAnimationDataClass(struct FAnimationDataStoreAssetEntry Entry); // Function Animation.AnimationDataStoreAsset.GetAnimationDataClass // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3348450
};

// Class Animation.AnimationDataStoreWeakReferenceAsset
// Size: 0x38 (Inherited: 0x28)
struct UAnimationDataStoreWeakReferenceAsset : UDataAsset {
	struct TArray<struct FAnimationDataStoreAssetWeakReferenceEntry> AssetWeakRefs; // 0x28(0x10)
};

// Class Animation.AnimationDataStoreLoaderInterface
// Size: 0x28 (Inherited: 0x28)
struct UAnimationDataStoreLoaderInterface : UInterface {
};

// Class Animation.AnimationDataStoreComponent
// Size: 0x190 (Inherited: 0xc8)
struct UAnimationDataStoreComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UAnimationDataStoreWeakReferenceAsset* AnimationDataStoreWeakReferences; // 0xd0(0x08)
	char UnknownData_D8[0xb8]; // 0xd8(0xb8)
};

// Class Animation.AnimationDataStoreInterface
// Size: 0x28 (Inherited: 0x28)
struct UAnimationDataStoreInterface : UInterface {

	struct UAnimationData* GetAnimationDataForId(struct UClass* AnimDataId); // Function Animation.AnimationDataStoreInterface.GetAnimationDataForId // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x33484f0
};

// Class Animation.AnimationEditorSettings
// Size: 0x48 (Inherited: 0x38)
struct UAnimationEditorSettings : UDeveloperSettings {
	struct FStringAssetReference CustomAnimationMontageIdListings; // 0x38(0x10)
};

// Class Animation.AnimationLookAtInterface
// Size: 0x28 (Inherited: 0x28)
struct UAnimationLookAtInterface : UInterface {
};

// Class Animation.AnimationStateId
// Size: 0x28 (Inherited: 0x28)
struct UAnimationStateId : UObject {
};

// Class Animation.AnimNotify_DestroyAllCosmeticItems
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_DestroyAllCosmeticItems : UAnimNotify {
};

// Class Animation.AnimNotify_DestroyCosmeticItem
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_DestroyCosmeticItem : UAnimNotify {
	char DestroyLocation; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class Animation.AnimNotify_DetachAndMaintainWorldPosition
// Size: 0x50 (Inherited: 0x38)
struct UAnimNotify_DetachAndMaintainWorldPosition : UAnimNotify {
	char CurrentLocation; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	struct FVector PreviewLocationOffset; // 0x3c(0x0c)
	float PreviewScaleMultiplier; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class Animation.AnimNotify_PlayAnimationForCosmetic
// Size: 0x50 (Inherited: 0x38)
struct UAnimNotify_PlayAnimationForCosmetic : UAnimNotify {
	char CosmeticLocation; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct UAnimSequenceBase* CosmeticItemAnimation; // 0x40(0x08)
	bool Looping; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class Animation.AnimNotify_PlayMontage
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_PlayMontage : UAnimNotify {
	struct UAnimMontage* MontageToPlay; // 0x38(0x08)
};

// Class Animation.AnimNotify_ReattachCosmeticItem
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_ReattachCosmeticItem : UAnimNotify {
	char CurrentLocation; // 0x38(0x01)
	char NewLocation; // 0x39(0x01)
	char UnknownData_3A[0x6]; // 0x3a(0x06)
};

// Class Animation.AnimNotify_SetCosmeticItemVisibility
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_SetCosmeticItemVisibility : UAnimNotify {
	char ItemLocation; // 0x38(0x01)
	bool Visible; // 0x39(0x01)
	bool RenderShadow; // 0x3a(0x01)
	bool RenderShadowWhenHidden; // 0x3b(0x01)
	bool UpdateForRole; // 0x3c(0x01)
	char UpdateRole; // 0x3d(0x01)
	char UnknownData_3E[0x2]; // 0x3e(0x02)
};

// Class Animation.AnimNotify_SetLookAtEnabled
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_SetLookAtEnabled : UAnimNotify {
	bool Enabled; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class Animation.AnimNotify_SpawnCosmeticItem
// Size: 0x58 (Inherited: 0x38)
struct UAnimNotify_SpawnCosmeticItem : UAnimNotify {
	struct UClass* ItemSpawnClass; // 0x38(0x08)
	char SpawnLocation; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
	struct UCosmeticItemAnimationSetDataAsset* CosmeticItemAnimationDataSet; // 0x48(0x08)
	bool SpawnHidden; // 0x50(0x01)
	bool SpawnForRole; // 0x51(0x01)
	char SpawnRole; // 0x52(0x01)
	char UnknownData_53[0x5]; // 0x53(0x05)
};

// Class Animation.AnimNotify_StateComplete
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_StateComplete : UAnimNotify {
	struct UClass* CompletedStateId; // 0x38(0x08)
};

// Class Animation.AnimNotify_SwitchCosmeticItemAttachment
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_SwitchCosmeticItemAttachment : UAnimNotify {
	char PreviousLocation; // 0x38(0x01)
	char NewLocation; // 0x39(0x01)
	char UnknownData_3A[0x6]; // 0x3a(0x06)
};

// Class Animation.AnimNotify_ToggleIK
// Size: 0x50 (Inherited: 0x38)
struct UAnimNotify_ToggleIK : UAnimNotify {
	struct TArray<char> IKLimbsToAdjust; // 0x38(0x10)
	bool Enabled; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class Animation.AnimNotifyCondition_FeatureConfigValidation
// Size: 0x38 (Inherited: 0x28)
struct UAnimNotifyCondition_FeatureConfigValidation : UAnimNotifyCondition {
	struct FName Feature; // 0x28(0x08)
	bool TriggerWhenDisabled; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Animation.AnimNotifyState_HideMeshByBoneForDuration
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotifyState_HideMeshByBoneForDuration : UAnimNotifyState {
	struct FName BoneName; // 0x30(0x08)
};

// Class Animation.AnimNotifyState_PropagateCurveValuesToMaterials
// Size: 0x58 (Inherited: 0x30)
struct UAnimNotifyState_PropagateCurveValuesToMaterials : UAnimNotifyState {
	struct TArray<struct FCurveUpdateValues> CurveValues; // 0x30(0x10)
	bool DoNotPropagteCurveValues; // 0x40(0x01)
	char UnknownData_41[0x17]; // 0x41(0x17)
};

// Class Animation.AnimNotifyState_SetLookAtDisabledForDuration
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_SetLookAtDisabledForDuration : UAnimNotifyState {
};

// Class Animation.AnimNotifyState_SetLookAtEnabledForDuration
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_SetLookAtEnabledForDuration : UAnimNotifyState {
};

// Class Animation.AnimNotifyState_SetMeshInvisibleForDuration
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_SetMeshInvisibleForDuration : UAnimNotifyState {
};

// Class Animation.AnimNotifyState_SpawnCosmeticItem
// Size: 0x50 (Inherited: 0x30)
struct UAnimNotifyState_SpawnCosmeticItem : UAnimNotifyState {
	struct UClass* CosmeticItemToSpawn; // 0x30(0x08)
	char SpawnLocation; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct UCosmeticItemAnimationSetDataAsset* CosmeticItemAnimationDataSet; // 0x40(0x08)
	bool SpawnHidden; // 0x48(0x01)
	bool DestroyOnEnd; // 0x49(0x01)
	bool OverrideDestroyLocation; // 0x4a(0x01)
	char DestroyLocation; // 0x4b(0x01)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class Animation.AnimNotifyState_ToggleIK
// Size: 0x98 (Inherited: 0x30)
struct UAnimNotifyState_ToggleIK : UAnimNotifyState {
	struct TArray<char> IKLimbsToAdjust; // 0x30(0x10)
	bool Enabled; // 0x40(0x01)
	char UnknownData_41[0x57]; // 0x41(0x57)
};

// Class Animation.AthenaAnimationControllableSocketsInterface
// Size: 0x28 (Inherited: 0x28)
struct UAthenaAnimationControllableSocketsInterface : UInterface {
};

// Class Animation.CharacterIKInterface
// Size: 0x28 (Inherited: 0x28)
struct UCharacterIKInterface : UInterface {
};

// Class Animation.PreviewCharacterAnimationInstance
// Size: 0x6f0 (Inherited: 0x660)
struct UPreviewCharacterAnimationInstance : UCharacterAnimationInstance {
	struct UAnimMontage* ActiveMontage; // 0x660(0x08)
	char UnknownData_668[0x88]; // 0x668(0x88)
};

// Class Animation.ClientSkeletalMeshComponent
// Size: 0x9c0 (Inherited: 0x9c0)
struct UClientSkeletalMeshComponent : USkeletalMeshComponent {
};

// Class Animation.CosmeticItemActor
// Size: 0x478 (Inherited: 0x3c8)
struct ACosmeticItemActor : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct USkeletalMeshComponent* MeshComponent; // 0x3d0(0x08)
	char UnknownData_3D8[0xa0]; // 0x3d8(0xa0)
};

// Class Animation.CosmeticItemAnimationInterface
// Size: 0x28 (Inherited: 0x28)
struct UCosmeticItemAnimationInterface : UInterface {
};

// Class Animation.CosmeticItemAnimationComponent
// Size: 0x130 (Inherited: 0xc8)
struct UCosmeticItemAnimationComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TMap<struct USkeletalMeshComponent*, struct FCosmeticItems> CosmeticItems; // 0xd0(0x50)
	struct UCosmeticItemAnimationDataAsset* DataAsset; // 0x120(0x08)
	char UnknownData_128[0x8]; // 0x128(0x08)

	bool SpawnCosmeticItem(struct USkeletalMeshComponent* MeshComponent, struct UClass* ObjectToSpawn, char SpawnLocation, struct UCosmeticItemAnimationSetDataAsset* CosmeticData, bool SpawnHidden); // Function Animation.CosmeticItemAnimationComponent.SpawnCosmeticItem // Final|Native|Public|BlueprintCallable // @ game+0x3349a60
	void DestroyAllCosmeticItems(); // Function Animation.CosmeticItemAnimationComponent.DestroyAllCosmeticItems // Native|Public|BlueprintCallable // @ game+0x3348250
};

// Class Animation.CosmeticItemAnimationDataAsset
// Size: 0x60 (Inherited: 0x28)
struct UCosmeticItemAnimationDataAsset : UDataAsset {
	struct FName WieldSockets[0x07]; // 0x28(0x38)
};

// Class Animation.CosmeticItemAnimationDataConsumerInterface
// Size: 0x28 (Inherited: 0x28)
struct UCosmeticItemAnimationDataConsumerInterface : UInterface {
};

// Class Animation.CosmeticItemAnimationInstance
// Size: 0x500 (Inherited: 0x440)
struct UCosmeticItemAnimationInstance : UAnimInstance {
	char UnknownData_440[0x8]; // 0x440(0x08)
	struct UCosmeticItemAnimationSetDataAsset* AnimationDataSet; // 0x448(0x08)
	struct UAnimMontage* ActiveMontage; // 0x450(0x08)
	char UnknownData_458[0xa8]; // 0x458(0xa8)

	void UnregisterEvents(); // Function Animation.CosmeticItemAnimationInstance.UnregisterEvents // Final|Native|Private // @ game+0x3349e20
};

// Class Animation.CosmeticItemAnimationSetDataAsset
// Size: 0x58 (Inherited: 0x28)
struct UCosmeticItemAnimationSetDataAsset : UDataAsset {
	struct FCosmeticItemAnimationSetLoopData LoopData; // 0x28(0x20)
	struct TArray<struct UAnimSequenceBase*> OneShotSequences; // 0x48(0x10)
};

// Class Animation.CustomAnimationHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomAnimationHandlerInterface : UInterface {
};

// Class Animation.CustomAnimationInstanceInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomAnimationInstanceInterface : UInterface {
};

// Class Animation.CustomAnimationInstanceProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomAnimationInstanceProviderInterface : UInterface {
};

// Class Animation.CustomAnimationMontageInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomAnimationMontageInterface : UInterface {
};

// Class Animation.CustomAnimationMontageComponent
// Size: 0x148 (Inherited: 0xc8)
struct UCustomAnimationMontageComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct FCustomAnimationMontageComponentReplicatedData ReplicatedData; // 0xd0(0x0c)
	char UnknownData_DC[0x6c]; // 0xdc(0x6c)

	void OnRep_ReplicatedData(struct FCustomAnimationMontageComponentReplicatedData PriorData); // Function Animation.CustomAnimationMontageComponent.OnRep_ReplicatedData // Final|Native|Private|HasOutParms // @ game+0x3348ed0
};

// Class Animation.CustomAnimationMontageDefinitionDataAsset
// Size: 0x70 (Inherited: 0x28)
struct UCustomAnimationMontageDefinitionDataAsset : UDataAsset {
	struct FName MontageId; // 0x28(0x08)
	char MontageType; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct UAnimMontage* MontageData; // 0x38(0x08)
	struct FCustomAnimationMontageStagedLoopingData LoopingData; // 0x40(0x28)
	bool Interrupts; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class Animation.CustomAnimationMontageDefinitionListingDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UCustomAnimationMontageDefinitionListingDataAsset : UDataAsset {
	struct TArray<struct FCustomAnimationMontageDefinitionEntry> Entries; // 0x28(0x10)
};

// Class Animation.CustomAnimationMontageIdListingDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UCustomAnimationMontageIdListingDataAsset : UDataAsset {
	struct TArray<struct FName> MontageIds; // 0x28(0x10)
};

// Class Animation.DockingAnimationInterface
// Size: 0x28 (Inherited: 0x28)
struct UDockingAnimationInterface : UInterface {
};

// Class Animation.EmotePropDataInterface
// Size: 0x28 (Inherited: 0x28)
struct UEmotePropDataInterface : UInterface {
};

// Class Animation.IndexedPlayableMontagesInterface
// Size: 0x28 (Inherited: 0x28)
struct UIndexedPlayableMontagesInterface : UInterface {
};

// Class Animation.LimbIKFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULimbIKFunctionLibrary : UBlueprintFunctionLibrary {

	void SetTranslationStrength(struct FLimbIK LimbIK, float InRotationStrength); // Function Animation.LimbIKFunctionLibrary.SetTranslationStrength // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3349960
	void SetTransform(struct FLimbIK LimbIK, struct FTransform InTransform); // Function Animation.LimbIKFunctionLibrary.SetTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3349810
	void SetRotationStrength(struct FLimbIK LimbIK, float InRotationStrength); // Function Animation.LimbIKFunctionLibrary.SetRotationStrength // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3349710
	void SetParentBone(struct FLimbIK LimbIK, struct FName Bone); // Function Animation.LimbIKFunctionLibrary.SetParentBone // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3349600
	void SetIKSpace(struct FLimbIK LimbIK, char IKSpace); // Function Animation.LimbIKFunctionLibrary.SetIKSpace // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3349500
	void SetEnabled(struct FLimbIK LimbIK, bool Enabled, char IKSpace, struct FName ParentBone); // Function Animation.LimbIKFunctionLibrary.SetEnabled // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3349370
	void SetBlendOutSpeed(struct FLimbIK LimbIK, float BlendOutSpeed); // Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3349270
	void SetBlendInSpeed(struct FLimbIK LimbIK, float BlendInSpeed); // Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3349170
	void SetAnimationOverride(struct FLimbIK LimbIK, bool AnimationOverride); // Function Animation.LimbIKFunctionLibrary.SetAnimationOverride // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3349070
	void SetAlphaTarget(struct FLimbIK LimbIK, float AlphaTarget); // Function Animation.LimbIKFunctionLibrary.SetAlphaTarget // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3348f70
	bool IsEnabled(struct FLimbIK LimbIK); // Function Animation.LimbIKFunctionLibrary.IsEnabled // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3348b80
	float GetTranslationStrength(struct FLimbIK LimbIK); // Function Animation.LimbIKFunctionLibrary.GetTranslationStrength // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3348a40
	struct FTransform GetTransform(struct FLimbIK LimbIK); // Function Animation.LimbIKFunctionLibrary.GetTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3348960
	float GetRotationStrength(struct FLimbIK LimbIK); // Function Animation.LimbIKFunctionLibrary.GetRotationStrength // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x33488a0
	struct FName GetParentBone(struct FLimbIK LimbIK); // Function Animation.LimbIKFunctionLibrary.GetParentBone // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x33487d0
	char GetIKSpace(struct FLimbIK LimbIK); // Function Animation.LimbIKFunctionLibrary.GetIKSpace // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3348710
	float GetCurrentAlpha(struct FLimbIK LimbIK); // Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3348650
	bool GetAnimationOverride(struct FLimbIK LimbIK); // Function Animation.LimbIKFunctionLibrary.GetAnimationOverride // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3348590
	float GetAlphaTarget(struct FLimbIK LimbIK); // Function Animation.LimbIKFunctionLibrary.GetAlphaTarget // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3348280
	float ConvertBoolToAlpha(bool InBool); // Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3347ff0
};

// Class Animation.LoadableAnimationsInterface
// Size: 0x28 (Inherited: 0x28)
struct ULoadableAnimationsInterface : UInterface {
};

// Class Animation.LocomotionFunctionLib
// Size: 0x28 (Inherited: 0x28)
struct ULocomotionFunctionLib : UBlueprintFunctionLibrary {

	float UpdateControllerSpineRotation(struct FRotator CharacterRotation, float AngleSpeedMax, float AngleSpeedMin); // Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334a300
	struct FActorVelocityData UpdateCharacterSpeed(struct FVector Velocity, float CurrentMaxWalkSpeed, float WantedMovementSpeed, float BaseMaxWalkSpeed, float SpeedBlendValue, bool IsSwimming, float DeadZone); // Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x334a0d0
	float UpdateCalculateRateAndCurrentYaw(struct FRotator CharacterRotation, float LargeRate, float CurrentCharacterYaw, float DeltaSeconds); // Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x3349f70
};

// Class Animation.NetworkSyncedAnimationInstanceInterface
// Size: 0x28 (Inherited: 0x28)
struct UNetworkSyncedAnimationInstanceInterface : UInterface {
};

// Class Animation.NetworkSyncedAnimationComponent
// Size: 0x110 (Inherited: 0xc8)
struct UNetworkSyncedAnimationComponent : UActorComponent {
	float PlayRateAdjustMaxTimeDelta; // 0xc8(0x04)
	float PlayRateAdjustMaxPercentageToSpeedUpPlayRate; // 0xcc(0x04)
	float PlayRateAdjustMaxPercentageToSlowDownPlayRate; // 0xd0(0x04)
	float ReplicatedAnimationProgression; // 0xd4(0x04)
	int32_t ReplicatedPlayingAnimationIndex; // 0xd8(0x04)
	float ReplicatedPlayRate; // 0xdc(0x04)
	char UnknownData_E0[0x8]; // 0xe0(0x08)
	struct UAnimInstance* AnimInstance; // 0xe8(0x08)
	char UnknownData_F0[0x20]; // 0xf0(0x20)

	void OnRep_PlayingAnimationIndex(); // Function Animation.NetworkSyncedAnimationComponent.OnRep_PlayingAnimationIndex // Final|Native|Protected // @ game+0x3348eb0
	void OnRep_AnimationProgression(); // Function Animation.NetworkSyncedAnimationComponent.OnRep_AnimationProgression // Final|Native|Protected // @ game+0x3348e90
};

// Class Animation.RemoteAnimPlayableInterface
// Size: 0x28 (Inherited: 0x28)
struct URemoteAnimPlayableInterface : UInterface {
};

// Class Animation.ServerAnimationDataStoreInterface
// Size: 0x28 (Inherited: 0x28)
struct UServerAnimationDataStoreInterface : UInterface {
};

// Class Animation.SyncGroupAnimMetaData
// Size: 0x30 (Inherited: 0x28)
struct USyncGroupAnimMetaData : UAnimMetaData {
	struct FName SyncGroup; // 0x28(0x08)
};

// Class Animation.TransformBlendCurveComponent
// Size: 0x5d0 (Inherited: 0xc8)
struct UTransformBlendCurveComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct FTransformBlendCurve Curve; // 0xd0(0x500)
};

// Class Animation.TurningFunctionLib
// Size: 0x28 (Inherited: 0x28)
struct UTurningFunctionLib : UBlueprintFunctionLibrary {

	bool TurningUpdate(float DeltaSeconds, bool CharacterMoving, bool DeadZone, float TurnRate, float DelayedCounter, float CounterMax, bool TurningLeft); // Function Animation.TurningFunctionLib.TurningUpdate // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3349bf0
};

// Class Animation.WaitForAnimationStateEntryProxy
// Size: 0x50 (Inherited: 0x28)
struct UWaitForAnimationStateEntryProxy : UObject {
	struct FMulticastDelegate OnReachedState; // 0x28(0x10)
	char UnknownData_38[0x18]; // 0x38(0x18)

	void OnEnteredState(struct FName path); // Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState // Final|Native|Public // @ game+0x3348d90
	void OnAnimationUpdated(); // Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated // Final|Native|Public // @ game+0x3348d50
	struct UWaitForAnimationStateEntryProxy* CreateProxy(struct UAnimInstance* AnimInstance, struct FName TargetPath); // Function Animation.WaitForAnimationStateEntryProxy.CreateProxy // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x33480b0
};

// Class Animation.WaitForAnimationStateExitProxy
// Size: 0x48 (Inherited: 0x28)
struct UWaitForAnimationStateExitProxy : UObject {
	struct FMulticastDelegate OnStateExit; // 0x28(0x10)
	char UnknownData_38[0x10]; // 0x38(0x10)

	void OnExitState(struct FName path); // Function Animation.WaitForAnimationStateExitProxy.OnExitState // Final|Native|Public // @ game+0x3348e10
	void OnAnimationUpdated(); // Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated // Final|Native|Public // @ game+0x3348d70
	struct UWaitForAnimationStateExitProxy* CreateProxy(struct UAnimInstance* AnimInstance, struct FName TargetPath); // Function Animation.WaitForAnimationStateExitProxy.CreateProxy // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3348180
};

// Class Animation.WeightedAnimationLoadOnDemandDataAsset
// Size: 0x40 (Inherited: 0x28)
struct UWeightedAnimationLoadOnDemandDataAsset : UDataAsset {
	struct TArray<struct FWeightedAnimationData> WeightedAnimationList; // 0x28(0x10)
	struct UAnimSequence* FallBackAnimation; // 0x38(0x08)
};

// Class Animation.WeightedAnimSequenceLoadOnDemand
// Size: 0x120 (Inherited: 0x28)
struct UWeightedAnimSequenceLoadOnDemand : UObject {
	struct UAnimSequence* FallBackAnimation; // 0x28(0x08)
	struct TArray<struct FWeightedAnimationData> WeightedAnimationList; // 0x30(0x10)
	char UnknownData_40[0xe0]; // 0x40(0xe0)

	void Initialise(struct UWeightedAnimationLoadOnDemandDataAsset* InAnimationData); // Function Animation.WeightedAnimSequenceLoadOnDemand.Initialise // Final|Native|Public|BlueprintCallable // @ game+0x3348b00
	struct UWeightedAnimSequenceLoadOnDemand* CreateNewWeightedAnimSequenceLoadOnDemand(); // Function Animation.WeightedAnimSequenceLoadOnDemand.CreateNewWeightedAnimSequenceLoadOnDemand // Final|Native|Static|Public|BlueprintCallable // @ game+0x3348080
};

// Class Animation.DockableInterface
// Size: 0x28 (Inherited: 0x28)
struct UDockableInterface : UInterface {

	void HandleDestroy(); // Function Animation.DockableInterface.HandleDestroy // Native|Public // @ game+0x37b6950
	struct FDockableInfo GetDockableInfo(); // Function Animation.DockableInterface.GetDockableInfo // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x37b6820
};

