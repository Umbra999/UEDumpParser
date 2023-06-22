// Enum Time.ETimeOfDay
enum class ETimeOfDay : uint8_t {
	Day,
	Night,
	ETimeOfDay_MAX,
};

// ScriptStruct Time.GameTime
// Size: 0x08 (Inherited: 0x00)
struct FGameTime {
	struct FDateTime DateTimeRepresentation; // 0x00(0x08)
};

// ScriptStruct Time.GameTimeRange
// Size: 0x10 (Inherited: 0x00)
struct FGameTimeRange {
	struct FGameTime Start; // 0x00(0x08)
	struct FGameTime End; // 0x08(0x08)
};

// ScriptStruct Time.ReplicatedDateTime
// Size: 0x08 (Inherited: 0x00)
struct FReplicatedDateTime {
	int64_t Ticks; // 0x00(0x08)
};

// ScriptStruct Time.ReplicatedAuthoritativeTime
// Size: 0x10 (Inherited: 0x00)
struct FReplicatedAuthoritativeTime {
	struct FReplicatedDateTime WorldTime; // 0x00(0x08)
	struct FReplicatedDateTime SyncTime; // 0x08(0x08)
};

// ScriptStruct Time.ReplicatedTimespan
// Size: 0x08 (Inherited: 0x00)
struct FReplicatedTimespan {
	int64_t Ticks; // 0x00(0x08)
};

// ScriptStruct Time.EventSetDateTime
// Size: 0x14 (Inherited: 0x00)
struct FEventSetDateTime {
	int32_t Year; // 0x00(0x04)
	int32_t Month; // 0x04(0x04)
	int32_t Day; // 0x08(0x04)
	int32_t Hour; // 0x0c(0x04)
	int32_t Minute; // 0x10(0x04)
};

