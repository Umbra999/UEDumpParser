// Class Reviving.ReviveSettings
// Size: 0x90 (Inherited: 0x38)
struct UReviveSettings : UDeveloperSettings {
	float HealthRegained; // 0x38(0x04)
	float MaximumReviveDistance; // 0x3c(0x04)
	struct FLinearColor FadeColour; // 0x40(0x10)
	bool ShouldFadeAudio; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	float ServerWaitTimeBeforeFullyReviving; // 0x54(0x04)
	float ReviveTime; // 0x58(0x04)
	float MaxRevertEvaporateDuration; // 0x5c(0x04)
	struct TArray<char> UnsupportedPlayModes; // 0x60(0x10)
	struct TArray<struct FModeSpecificReviveSettings> ModeSpecificSettings; // 0x70(0x10)
	float GiveUpHoldTime; // 0x80(0x04)
	float GiveUpFadeDuration; // 0x84(0x04)
	float GiveUpEvaporateDuration; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class Reviving.DeathSelfInteractionComponent
// Size: 0x178 (Inherited: 0x128)
struct UDeathSelfInteractionComponent : UInteractableComponent {
	char UnknownData_128[0x8]; // 0x128(0x08)
	bool HasGivenUp; // 0x130(0x01)
	char UnknownData_131[0x47]; // 0x131(0x47)

	void SetGiveUpAvaliable(); // Function Reviving.DeathSelfInteractionComponent.SetGiveUpAvaliable // Final|Native|Private // @ game+0x3925a20
	void OnRep_HasGivenUp(); // Function Reviving.DeathSelfInteractionComponent.OnRep_HasGivenUp // Final|Native|Private // @ game+0x3925980
};

// Class Reviving.PostReviveLocomotionActionStateId
// Size: 0x28 (Inherited: 0x28)
struct UPostReviveLocomotionActionStateId : UActionStateId {
};

// Class Reviving.RevivableStatus
// Size: 0x30 (Inherited: 0x30)
struct URevivableStatus : UStatusBase {
};

// Class Reviving.ReviveableActionStateId
// Size: 0x28 (Inherited: 0x28)
struct UReviveableActionStateId : UActionStateId {
};

// Class Reviving.ReviveableCharacterInterface
// Size: 0x28 (Inherited: 0x28)
struct UReviveableCharacterInterface : UInterface {
};

// Class Reviving.ReviveableRepresentationInterface
// Size: 0x28 (Inherited: 0x28)
struct UReviveableRepresentationInterface : UInterface {
};

// Class Reviving.ReviveAudioComponent
// Size: 0x330 (Inherited: 0x310)
struct UReviveAudioComponent : UWwiseEmitterComponent {
	struct UReviveEffectsDataAsset* ReviveEffectsDataAsset; // 0x310(0x08)
	char UnknownData_318[0x18]; // 0x318(0x18)
};

// Class Reviving.ReviveInterface
// Size: 0x28 (Inherited: 0x28)
struct UReviveInterface : UInterface {
};

// Class Reviving.ReviveComponent
// Size: 0x268 (Inherited: 0x128)
struct UReviveComponent : UInteractableComponent {
	char UnknownData_128[0x10]; // 0x128(0x10)
	struct ACharacter* OwningCharacter; // 0x138(0x08)
	struct AActor* ReviveableRepresentationActor; // 0x140(0x08)
	char ReviveState; // 0x148(0x01)
	char InteractionState; // 0x149(0x01)
	char UnknownData_14A[0x6]; // 0x14a(0x06)
	struct UClass* ReviveableRepresentationClass; // 0x150(0x08)
	char UnknownData_158[0xc]; // 0x158(0x0c)
	bool ReviveWindowIsOpen; // 0x164(0x01)
	char UnknownData_165[0xd3]; // 0x165(0xd3)
	struct FStatus RevivableStatus; // 0x238(0x18)
	char UnknownData_250[0x18]; // 0x250(0x18)

	void OnRep_ReviveState(char PreviousReviveState); // Function Reviving.ReviveComponent.OnRep_ReviveState // Final|Native|Private // @ game+0x39259a0
	void HandleOwningCharacterEndPlay(); // Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay // Final|Native|Public // @ game+0x3925960
};

// Class Reviving.ReviveConditionalStatTrigger
// Size: 0x30 (Inherited: 0x30)
struct UReviveConditionalStatTrigger : UConditionalStatsTriggerType {
};

// Class Reviving.RevivedActionStateId
// Size: 0x28 (Inherited: 0x28)
struct URevivedActionStateId : UActionStateId {
};

// Class Reviving.ReviveDebugComponent
// Size: 0x160 (Inherited: 0xc8)
struct UReviveDebugComponent : UActorComponent {
	char UnknownData_C8[0x98]; // 0xc8(0x98)
};

// Class Reviving.ReviveEffectsDataAsset
// Size: 0xd0 (Inherited: 0x28)
struct UReviveEffectsDataAsset : UDataAsset {
	struct UMaterialParameterCollection* ReviveMaterialParameterCollection; // 0x28(0x08)
	struct FName AstralCordReviveInProgressMaterialCollectionScalarParameterName; // 0x30(0x08)
	struct FName AstralCordFadeMaterialCollectionScalarParameterName; // 0x38(0x08)
	struct FName AstralCordBorderMaterialCollectionScalarParameterName; // 0x40(0x08)
	struct UCurveFloat* AstralCordBorderParamValueByAbsoluteTimeSinceDeath; // 0x48(0x08)
	struct UMaterial* ReviveePostProcessMaterial; // 0x50(0x08)
	float GhostShaderGhostEffectInterpolationValue; // 0x58(0x04)
	float ReviveSuccessfulEffectDuration; // 0x5c(0x04)
	struct UObject* ReviveSuccessfulOneShotVFX; // 0x60(0x08)
	struct UObject* ReviveSuccessfulOneShotVFX_Revivee; // 0x68(0x08)
	struct UObject* ReviveInProgressLoopingVFX; // 0x70(0x08)
	float AstralCordReviveInProgressInterpolationSpeed; // 0x78(0x04)
	float AstralCordReviveNotInProgressInterpolationSpeed; // 0x7c(0x04)
	struct UObject* ContinuousBodyLoopingVFX; // 0x80(0x08)
	float AstralCordFadeInInterpolationSpeed; // 0x88(0x04)
	float AstralCordFadeOutInterpolationSpeed; // 0x8c(0x04)
	float DefaultAstralCordHeight; // 0x90(0x04)
	float AstralCordHeightOffsetFromTheGhost; // 0x94(0x04)
	struct UObject* DeadPlayerBodyEvaporatesOneShotVFX; // 0x98(0x08)
	struct UWwiseEvent* OtherPlayers_ReviveGhostAmbientStart; // 0xa0(0x08)
	struct UWwiseEvent* OtherPlayers_ReviveGhostAmbientStop; // 0xa8(0x08)
	struct UWwiseEvent* DeadPlayer_ReviveInProgressStart; // 0xb0(0x08)
	struct UWwiseEvent* DeadPlayer_ReviveInProgressStop; // 0xb8(0x08)
	struct UWwiseEvent* OtherPlayers_ReviveInProgressStart; // 0xc0(0x08)
	struct UWwiseEvent* OtherPlayers_ReviveInProgressStop; // 0xc8(0x08)
};

// Class Reviving.ReviveGhost
// Size: 0x628 (Inherited: 0x3c8)
struct AReviveGhost : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> CorpseMaterials; // 0x3d8(0x10)
	struct USceneComponent* Root; // 0x3e8(0x08)
	struct USkeletalMeshComponent* MeshComponent; // 0x3f0(0x08)
	struct USceneComponent* AstralCordContainer; // 0x3f8(0x08)
	struct UAnimationDataStoreComponent* AnimationDataStoreComponent; // 0x400(0x08)
	struct UPostProcessComponent* PostProcessComponent; // 0x408(0x08)
	struct UDitherComponent* DitherComponent; // 0x410(0x08)
	struct UReviveAudioComponent* AudioComponent; // 0x418(0x08)
	char UnknownData_420[0x10]; // 0x420(0x10)
	char RevivableOwnerNetRole; // 0x430(0x01)
	char UnknownData_431[0x7]; // 0x431(0x07)
	struct UGhostDataAsset* ReviveGhostDataAsset; // 0x438(0x08)
	struct UReviveEffectsDataAsset* ReviveEffectsDataAsset; // 0x440(0x08)
	struct FReviveEffectsValues ReviveEffectsValues; // 0x448(0x20)
	struct FModeSpecificReviveSettings ReviveSettings; // 0x468(0x38)
	char UnknownData_4A0[0x13c]; // 0x4a0(0x13c)
	struct UParticleSystemComponent* ContinuousOnTheBodyLoopingVFX; // 0x5dc(0x08)
	struct UParticleSystemComponent* ReviveInProgressLoopingVFX; // 0x5e4(0x08)
	char UnknownData_5EC[0x1c]; // 0x5ec(0x1c)
	struct TArray<struct UMaterialInstanceDynamic*> AstralCordDynamicMaterials; // 0x608(0x10)
	struct FGhostPlayModeParameters GhostPlayModeSpecificParameters; // 0x618(0x0c)
	char UnknownData_624[0x4]; // 0x624(0x04)
};

// Class Reviving.RevivePlayerActionStateId
// Size: 0x28 (Inherited: 0x28)
struct URevivePlayerActionStateId : UActionStateId {
};

