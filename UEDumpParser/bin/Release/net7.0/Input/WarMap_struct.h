// ScriptStruct WarMap.WarMapVoteAddedEvent
// Size: 0x08 (Inherited: 0x00)
struct FWarMapVoteAddedEvent {
	struct AActor* Voter; // 0x00(0x08)
};

// ScriptStruct WarMap.EventLocalPlayerOpenedWarMap
// Size: 0x08 (Inherited: 0x00)
struct FEventLocalPlayerOpenedWarMap {
	struct UCompany* Faction; // 0x00(0x08)
};

// ScriptStruct WarMap.EventWarMapHardModeStateChanged
// Size: 0x01 (Inherited: 0x00)
struct FEventWarMapHardModeStateChanged {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct WarMap.EventWarMapStateChanged
// Size: 0x10 (Inherited: 0x00)
struct FEventWarMapStateChanged {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct AActor* WarMapProposalContainer; // 0x08(0x08)
};

