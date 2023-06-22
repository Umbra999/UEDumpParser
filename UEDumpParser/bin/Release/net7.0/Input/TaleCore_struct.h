// Enum TaleCore.ETaleStructStatus
enum class ETaleStructStatus : uint8_t {
	Dirty,
	UpToData,
	Error,
	ETaleStructStatus_MAX,
};

// ScriptStruct TaleCore.ClientCommandBase
// Size: 0x08 (Inherited: 0x00)
struct FClientCommandBase {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TaleCore.ClientCommandQueue
// Size: 0x18 (Inherited: 0x00)
struct FClientCommandQueue {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TaleCore.TaleStructInstance
// Size: 0x10 (Inherited: 0x00)
struct FTaleStructInstance {
	struct UTaleStruct* MyType; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

