// ScriptStruct OceanCrawlersAnimation.OceanCrawlerAnimationDataStructure
// Size: 0x90 (Inherited: 0x00)
struct FOceanCrawlerAnimationDataStructure {
	struct FOceanCrawlerLocomotionAnimationDataStructure LocomotionData; // 0x00(0x30)
	struct UCustomAnimationMontageDefinitionListingDataAsset* MontageData; // 0x30(0x08)
	struct UAthenaAnimationWeaponDataAsset* AttackAnimations; // 0x38(0x08)
	struct FHitReactionAnimationData HitReactionData; // 0x40(0x08)
	struct FOceanCrawlerSporeBreathAnimationData SporeBreathData; // 0x48(0x18)
	struct TArray<struct FCustomAnimationMontageId> AttackInterruptMontages; // 0x60(0x10)
	struct FCustomAnimationMontageId DeathMontageId; // 0x70(0x08)
	struct FCustomAnimationMontageId SpawnMontageId; // 0x78(0x08)
	struct FCustomAnimationMontageId SpawnOnShipMontageId; // 0x80(0x08)
	struct FCustomAnimationMontageId SpawnBoardedMontageId; // 0x88(0x08)
};

// ScriptStruct OceanCrawlersAnimation.OceanCrawlerSporeBreathAnimationData
// Size: 0x18 (Inherited: 0x00)
struct FOceanCrawlerSporeBreathAnimationData {
	struct UBlendSpace1D* Into; // 0x00(0x08)
	struct UBlendSpace1D* Locomotion; // 0x08(0x08)
	struct UBlendSpace1D* Outof; // 0x10(0x08)
};

// ScriptStruct OceanCrawlersAnimation.OceanCrawlerLocomotionAnimationDataStructure
// Size: 0x30 (Inherited: 0x00)
struct FOceanCrawlerLocomotionAnimationDataStructure {
	struct UBlendSpace1D* LocomotionIntoAsBlendspace; // 0x00(0x08)
	struct UAnimSequence* Idle; // 0x08(0x08)
	struct UAnimSequence* LocomotionOutOf; // 0x10(0x08)
	struct UBlendSpace1D* LocomotionOutOfAsBlendspace; // 0x18(0x08)
	struct UBlendSpace* Locomotion; // 0x20(0x08)
	float IntoDeadZone; // 0x28(0x04)
	float OutOfDeadZone; // 0x2c(0x04)
};

