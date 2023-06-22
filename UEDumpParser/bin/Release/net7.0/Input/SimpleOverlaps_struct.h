// ScriptStruct SimpleOverlaps.SimpleOverlapEnd
// Size: 0x10 (Inherited: 0x00)
struct FSimpleOverlapEnd {
	struct FSimpleOverlapInfo OverlapInfo; // 0x00(0x10)
};

// ScriptStruct SimpleOverlaps.SimpleOverlapInfo
// Size: 0x10 (Inherited: 0x00)
struct FSimpleOverlapInfo {
	struct AActor* OtherActor; // 0x00(0x08)
	struct UPrimitiveComponent* OtherComponent; // 0x08(0x08)
};

// ScriptStruct SimpleOverlaps.SimpleOverlapBegin
// Size: 0x10 (Inherited: 0x00)
struct FSimpleOverlapBegin {
	struct FSimpleOverlapInfo OverlapInfo; // 0x00(0x10)
};

