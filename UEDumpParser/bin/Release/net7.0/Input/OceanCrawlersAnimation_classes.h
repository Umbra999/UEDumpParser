// Class OceanCrawlersAnimation.OceanCrawlerAnimationData
// Size: 0xb8 (Inherited: 0x28)
struct UOceanCrawlerAnimationData : UAnimationData {
	struct FOceanCrawlerAnimationDataStructure OceanCrawlerAnimationDataStructure; // 0x28(0x90)
};

// Class OceanCrawlersAnimation.OceanCrawlerAnimationInstance
// Size: 0x720 (Inherited: 0x440)
struct UOceanCrawlerAnimationInstance : UAnimInstance {
	char UnknownData_440[0x18]; // 0x440(0x18)
	struct FOceanCrawlerAnimationDataStructure LoadedAnimations; // 0x458(0x90)
	struct FActorVelocityData MovementData; // 0x4e8(0x18)
	float CurrentDirection; // 0x500(0x04)
	char UnknownData_504[0x4]; // 0x504(0x04)
	struct FAthenaAnimationWeapon AttackAnims; // 0x508(0xb8)
	bool UseDefaultAnimations; // 0x5c0(0x01)
	bool AnimationsLoaded; // 0x5c1(0x01)
	bool SporeBreathActive; // 0x5c2(0x01)
	char UnknownData_5C3[0x1]; // 0x5c3(0x01)
	struct FName PropAttachmentSocket; // 0x5c4(0x08)
	char UnknownData_5CC[0x4]; // 0x5cc(0x04)
	struct FCustomAnimationMontageStateMachine MontagePlayer; // 0x5d0(0xd8)
	struct FHitReactionAnimationState HitReacts; // 0x6a8(0x28)
	char UnknownData_6D0[0x50]; // 0x6d0(0x50)

	void ClearActiveAttack(); // Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.ClearActiveAttack // Final|Native|Public|BlueprintCallable // @ game+0x150fa50
	void BeginNewAttack(); // Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.BeginNewAttack // Final|Native|Public|BlueprintCallable // @ game+0x150fa30
};

// Class OceanCrawlersAnimation.OceanCrawlerAnimationServerData
// Size: 0x48 (Inherited: 0x28)
struct UOceanCrawlerAnimationServerData : UAnimationServerData {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UClass* AnimInstanceType; // 0x30(0x08)
	float MaxSpawnAnimDuration; // 0x38(0x04)
	float MaxSpawnOnShipAnimDuration; // 0x3c(0x04)
	float MaxSpawnBoardingAnimDuration; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

