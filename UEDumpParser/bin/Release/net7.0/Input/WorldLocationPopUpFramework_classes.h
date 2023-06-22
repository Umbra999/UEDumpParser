// Class WorldLocationPopUpFramework.TaleAllowWorldLocationPopUpStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleAllowWorldLocationPopUpStep : UTaleQuestStep {
};

// Class WorldLocationPopUpFramework.TaleWorldLocationPopUpService
// Size: 0x90 (Inherited: 0x60)
struct UTaleWorldLocationPopUpService : UTaleQuestService {
	struct TArray<struct FTaleWorldLocationPopUpServiceEntry> SuppressedWorldLocationPopUpNearbyLocations; // 0x60(0x10)
	char UnknownData_70[0x20]; // 0x70(0x20)
};

// Class WorldLocationPopUpFramework.TaleWorldLocationPopUpServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleWorldLocationPopUpServiceDesc : UTaleQuestServiceDesc {
};

// Class WorldLocationPopUpFramework.TaleAllowWorldLocationPopUpStepDesc
// Size: 0xb8 (Inherited: 0x80)
struct UTaleAllowWorldLocationPopUpStepDesc : UTaleQuestStepDesc {
	float MaxDistanceFromWorldLocationPopUp; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct FQuestVariableActor NearbyActor; // 0x88(0x30)
};

// Class WorldLocationPopUpFramework.TalePreventWorldLocationPopUpStep
// Size: 0x98 (Inherited: 0x98)
struct UTalePreventWorldLocationPopUpStep : UTaleQuestStep {
};

// Class WorldLocationPopUpFramework.TalePreventWorldLocationPopUpStepDesc
// Size: 0xb8 (Inherited: 0x80)
struct UTalePreventWorldLocationPopUpStepDesc : UTaleQuestStepDesc {
	bool DisableEntireIsland; // 0x80(0x01)
	char UnknownData_81[0x3]; // 0x81(0x03)
	float MaxDistanceFromWorldLocationPopUp; // 0x84(0x04)
	struct FQuestVariableVector NearbyLocation; // 0x88(0x30)
};

// Class WorldLocationPopUpFramework.WorldLocationPopUpComponent
// Size: 0x370 (Inherited: 0x2e0)
struct UWorldLocationPopUpComponent : USceneComponent {
	struct UWorldLocationPopUpDataAsset* PopUpData; // 0x2e0(0x08)
	struct UShapeComponent* LocationOverlapVolume; // 0x2e8(0x08)
	float LocationCooldown; // 0x2f0(0x04)
	bool AlwaysShowPopUp; // 0x2f4(0x01)
	char UnknownData_2F5[0x63]; // 0x2f5(0x63)
	struct TArray<struct FGuid> SuppressedCrews; // 0x358(0x10)
	char UnknownData_368[0x8]; // 0x368(0x08)

	void OnOverlapEnd(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function WorldLocationPopUpFramework.WorldLocationPopUpComponent.OnOverlapEnd // Final|Native|Protected // @ game+0x483b430
	void OnOverlapBegin(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool FromSweep, struct FHitResult SweepResult); // Function WorldLocationPopUpFramework.WorldLocationPopUpComponent.OnOverlapBegin // Final|Native|Protected|HasOutParms // @ game+0x483b260
};

// Class WorldLocationPopUpFramework.WorldLocationPopUpDataAsset
// Size: 0x80 (Inherited: 0x28)
struct UWorldLocationPopUpDataAsset : UDataAsset {
	struct FName Id; // 0x28(0x08)
	struct FStringAssetReference BannerIcon; // 0x30(0x10)
	struct FText DisplayText; // 0x40(0x38)
	struct UPopUpAudioDesc* AudioOverride; // 0x78(0x08)
};

// Class WorldLocationPopUpFramework.WorldLocationVisitorInterface
// Size: 0x28 (Inherited: 0x28)
struct UWorldLocationVisitorInterface : UInterface {
};

// Class WorldLocationPopUpFramework.WorldLocationVisitorComponent
// Size: 0x108 (Inherited: 0xc8)
struct UWorldLocationVisitorComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	float RevisitCooldown; // 0xd0(0x04)
	char UnknownData_D4[0x34]; // 0xd4(0x34)
};

