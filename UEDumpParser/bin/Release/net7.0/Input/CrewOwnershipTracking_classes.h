// Class CrewOwnershipTracking.CrewOwnershipTrackingInterface
// Size: 0x28 (Inherited: 0x28)
struct UCrewOwnershipTrackingInterface : UInterface {
};

// Class CrewOwnershipTracking.CrewSpawnOwnershipTrackingInterface
// Size: 0x28 (Inherited: 0x28)
struct UCrewSpawnOwnershipTrackingInterface : UInterface {
};

// Class CrewOwnershipTracking.CustomCrewTrackingInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomCrewTrackingInterface : UInterface {
};

// Class CrewOwnershipTracking.CrewOwnershipTrackingComponent
// Size: 0x170 (Inherited: 0xc8)
struct UCrewOwnershipTrackingComponent : UActorComponent {
	char UnknownData_C8[0x18]; // 0xc8(0x18)
	struct FGuid SpawningCrewId; // 0xe0(0x10)
	struct FGuid CurrentOwnedByCrewId; // 0xf0(0x10)
	struct FOwnerListEntry PreviousOwnedByCrewIdList; // 0x100(0x10)
	struct TMap<struct FName, struct FOwnerListEntry> CustomTrackingMap; // 0x110(0x50)
	char UnknownData_160[0x10]; // 0x160(0x10)

	struct FGuid GetSpawningCrewIdByCopy(); // Function CrewOwnershipTracking.CrewOwnershipTrackingComponent.GetSpawningCrewIdByCopy // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3722f90
};

// Class CrewOwnershipTracking.CrewOwnershipTrackingControlInterface
// Size: 0x28 (Inherited: 0x28)
struct UCrewOwnershipTrackingControlInterface : UInterface {
};

