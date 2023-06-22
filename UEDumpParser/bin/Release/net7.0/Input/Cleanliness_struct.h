// Enum Cleanliness.EDirtinessType
enum class EDirtinessType : uint8_t {
	Soot,
	Dust,
	MAX,
	EDirtinessType_MAX,
};

// ScriptStruct Cleanliness.CleanlinessInfo
// Size: 0x0c (Inherited: 0x00)
struct FCleanlinessInfo {
	char DirtinessType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float Strength; // 0x04(0x04)
	bool QuickClean; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Cleanliness.EventQuickCleanRequest
// Size: 0x01 (Inherited: 0x00)
struct FEventQuickCleanRequest {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

