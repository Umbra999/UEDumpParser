// Class Cooking.BurntItemConditionalStatTrigger
// Size: 0x30 (Inherited: 0x30)
struct UBurntItemConditionalStatTrigger : UConditionalStatsTriggerType {
};

// Class Cooking.BurntItemOnShipConditionalStatTrigger
// Size: 0x30 (Inherited: 0x30)
struct UBurntItemOnShipConditionalStatTrigger : UConditionalStatsTriggerType {
};

// Class Cooking.CookableInterface
// Size: 0x28 (Inherited: 0x28)
struct UCookableInterface : UInterface {
};

// Class Cooking.CookingDefaultsInterface
// Size: 0x28 (Inherited: 0x28)
struct UCookingDefaultsInterface : UInterface {
};

// Class Cooking.CookingStatusPublisherInterface
// Size: 0x28 (Inherited: 0x28)
struct UCookingStatusPublisherInterface : UInterface {
};

// Class Cooking.CookingStateInterface
// Size: 0x28 (Inherited: 0x28)
struct UCookingStateInterface : UInterface {
};

// Class Cooking.CookableComponent
// Size: 0x128 (Inherited: 0xc8)
struct UCookableComponent : UActorComponent {
	char UnknownData_C8[0x20]; // 0xc8(0x20)
	struct UClass* NextCookState; // 0xe8(0x08)
	float TimeToNextCookState; // 0xf0(0x04)
	char UnknownData_F4[0x4]; // 0xf4(0x04)
	struct TArray<struct FCookableComponentSmokeFeedbackTimingEntry> SmokeFeedbackLevels; // 0xf8(0x10)
	struct UCurveFloat* VisibleCookedExtentOverTime; // 0x108(0x08)
	float DefaultVisibleCookedExtent; // 0x110(0x04)
	struct FName CookableTypeName; // 0x114(0x08)
	struct FPlayerStat CookedStat; // 0x11c(0x04)
	struct FPlayerStat ShipCookedStat; // 0x120(0x04)
	char CookingState; // 0x124(0x01)
	char InitialCookingState; // 0x125(0x01)
	char RemovedCookingState; // 0x126(0x01)
	bool IgnoreCookedFromRawStats; // 0x127(0x01)
};

// Class Cooking.CookerInterface
// Size: 0x28 (Inherited: 0x28)
struct UCookerInterface : UInterface {
};

// Class Cooking.CookerComponent
// Size: 0x248 (Inherited: 0xc8)
struct UCookerComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct FStatus> StatusToApplyToContents; // 0xd0(0x10)
	struct TArray<struct FCookerSmokeFeedbackEntry> VFXFeedback; // 0xe0(0x10)
	struct UStaticMeshMemoryConstraintComponent* CookableStaticMeshComponent; // 0xf0(0x08)
	struct USkeletalMeshMemoryConstraintComponent* CookableSkeletalMeshComponent; // 0xf8(0x08)
	struct FName CookedMaterialParameterName; // 0x100(0x08)
	struct FName BurnDownDirectionParameterName; // 0x108(0x08)
	float PlacementVarianceAngleBound; // 0x110(0x04)
	bool OnByDefault; // 0x114(0x01)
	char UnknownData_115[0x3]; // 0x115(0x03)
	struct UCookingComponentAudioParams* AudioParams; // 0x118(0x08)
	char VfxLocation; // 0x120(0x01)
	char UnknownData_121[0x7]; // 0x121(0x07)
	struct AItemInfo* CurrentlyCookingItem; // 0x128(0x08)
	struct FCookingClientRepresentation CookingState; // 0x130(0x68)
	struct UParticleSystemComponent* SmokeParticleComponent; // 0x198(0x08)
	struct UMaterialInstanceDynamic* VisibleCookableMaterial; // 0x1a0(0x08)
	bool TurnedOn; // 0x1a8(0x01)
	bool OnIsland; // 0x1a9(0x01)
	char UnknownData_1AA[0x9e]; // 0x1aa(0x9e)

	void OnRep_CookingState(struct FCookingClientRepresentation OldRepresentation); // Function Cooking.CookerComponent.OnRep_CookingState // Final|Native|Private|HasOutParms // @ game+0x3ac02d0
};

// Class Cooking.CookingComponentAudioParams
// Size: 0xa0 (Inherited: 0x28)
struct UCookingComponentAudioParams : UDataAsset {
	struct UWwiseObjectPoolWrapper* CookingPool; // 0x28(0x08)
	struct FVector EmitterOffsetVector; // 0x30(0x0c)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct UWwiseEvent* FoodPlaceInPot; // 0x40(0x08)
	struct UWwiseEvent* CookingStart; // 0x48(0x08)
	struct UWwiseEvent* CookingStop; // 0x50(0x08)
	struct FName CookingTypeSwitchGroup; // 0x58(0x08)
	struct FName CookingTypeSizzle; // 0x60(0x08)
	struct FName CookingTypeSimmer; // 0x68(0x08)
	struct FName FoodTypeSwitchGroup; // 0x70(0x08)
	struct FName FoodTypeFruit; // 0x78(0x08)
	struct FName FoodTypeMeat; // 0x80(0x08)
	struct FName FoodTypeRareMeat; // 0x88(0x08)
	struct FName FoodCookedAmount; // 0x90(0x08)
	float MaxCookingRtpcAmount; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

// Class Cooking.CookingPot
// Size: 0x5e0 (Inherited: 0x400)
struct ACookingPot : AInteractableBase {
	char UnknownData_400[0x8]; // 0x400(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x408(0x08)
	struct UActionRulesInteractableComponent* InteractableComponent; // 0x410(0x08)
	struct UCookerComponent* CookerComponent; // 0x418(0x08)
	float HoldToInteractTime; // 0x420(0x04)
	char UnknownData_424[0x4]; // 0x424(0x04)
	struct FText NotWieldingCookableItemTooltip; // 0x428(0x38)
	struct FText WieldingCookableItemTooltip; // 0x460(0x38)
	struct FText TakeItemTooltip; // 0x498(0x38)
	struct FText CannotTakeItemTooltip; // 0x4d0(0x38)
	struct FText MixInItemTooltip; // 0x508(0x38)
	char UnknownData_540[0xa0]; // 0x540(0xa0)
};

// Class Cooking.CookItemConditionalStatTrigger
// Size: 0x30 (Inherited: 0x30)
struct UCookItemConditionalStatTrigger : UConditionalStatsTriggerType {
};

// Class Cooking.HasRequiredCookingStateStatCondition
// Size: 0x38 (Inherited: 0x30)
struct UHasRequiredCookingStateStatCondition : UTargetedStatCondition {
	char RequiredState; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Cooking.MixableInterface
// Size: 0x28 (Inherited: 0x28)
struct UMixableInterface : UInterface {
};

// Class Cooking.PottableInterface
// Size: 0x28 (Inherited: 0x28)
struct UPottableInterface : UInterface {
};

// Class Cooking.PottableComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UPottableComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	bool CanBePutInPot; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
};

