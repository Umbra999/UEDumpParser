// ScriptStruct CrewOwnershipTracking.CrewTrackedItemOwnershipSet
// Size: 0x18 (Inherited: 0x00)
struct FCrewTrackedItemOwnershipSet {
	struct AActor* Item; // 0x00(0x08)
	struct FGuid CrewId; // 0x08(0x10)
};

// ScriptStruct CrewOwnershipTracking.CrewTrackedItemOwnershipChanged
// Size: 0x30 (Inherited: 0x00)
struct FCrewTrackedItemOwnershipChanged {
	struct AActor* Item; // 0x00(0x08)
	struct FGuid CrewId; // 0x08(0x10)
	struct FGuid PreviousCrewId; // 0x18(0x10)
	bool IsFirstTimeOwnedByThisCrew; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct CrewOwnershipTracking.OwnerListEntry
// Size: 0x10 (Inherited: 0x00)
struct FOwnerListEntry {
	struct TArray<struct FGuid> OwnerList; // 0x00(0x10)
};

// ScriptStruct CrewOwnershipTracking.TrackItemOwnershipEvent
// Size: 0x18 (Inherited: 0x00)
struct FTrackItemOwnershipEvent {
	struct AActor* TrackedItem; // 0x00(0x08)
	TScriptInterface<struct UCrewMembershipInterface> CrewMembershipInterface; // 0x08(0x10)
};

