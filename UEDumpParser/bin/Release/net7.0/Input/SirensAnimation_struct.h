// ScriptStruct SirensAnimation.SirenAnimationDataStructure
// Size: 0x60 (Inherited: 0x00)
struct FSirenAnimationDataStructure {
	struct FSirenAnimationLocomotion LocomotionAnims; // 0x00(0x48)
	struct UCustomAnimationMontageDefinitionListingDataAsset* FullBodyMontageListings; // 0x48(0x08)
	struct UAthenaAnimationWeaponDataAsset* AttackAnimationAsset; // 0x50(0x08)
	struct FHitReactionAnimationData HitReactAnimationData; // 0x58(0x08)
};

// ScriptStruct SirensAnimation.SirenAnimationLocomotion
// Size: 0x48 (Inherited: 0x00)
struct FSirenAnimationLocomotion {
	struct UAnimSequence* TreadwaterSequence; // 0x00(0x08)
	struct UAnimSequence* AggressiveTreadwaterSequence; // 0x08(0x08)
	struct UBlendSpace1D* LongwaysLocomotionBlendSpace; // 0x10(0x08)
	struct UBlendSpace1D* AggressiveLongwaysLocomotionBlendSpace; // 0x18(0x08)
	struct UBlendSpace1D* AlternativeAggressiveLongwaysLocomotionBlendSpace; // 0x20(0x08)
	struct UBlendSpace1D* LocomotionTurningAdditiveBlendSpace; // 0x28(0x08)
	struct UBlendSpace1D* LocomotionSpinningAdditiveBlendSpace; // 0x30(0x08)
	struct UAnimSequence* DivingFromSurfaceSequence; // 0x38(0x08)
	struct UAnimSequence* EmergingToSurfaceSequence; // 0x40(0x08)
};

