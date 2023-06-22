// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// Size: 0x01 (Inherited: 0x00)
struct FSessionServiceLogUnsubscribe {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// Size: 0x01 (Inherited: 0x00)
struct FSessionServiceLogSubscribe {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.SessionServiceLog
// Size: 0x38 (Inherited: 0x00)
struct FSessionServiceLog {
	struct FName Category; // 0x00(0x08)
	struct FString Data; // 0x08(0x10)
	struct FGuid InstanceId; // 0x18(0x10)
	double TimeSeconds; // 0x28(0x08)
	char Verbosity; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct SessionMessages.SessionServicePong
// Size: 0x90 (Inherited: 0x00)
struct FSessionServicePong {
	struct FString BuildDate; // 0x00(0x10)
	struct FString DeviceName; // 0x10(0x10)
	struct FGuid InstanceId; // 0x20(0x10)
	struct FString InstanceName; // 0x30(0x10)
	bool IsConsoleBuild; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
	struct FString PlatformName; // 0x48(0x10)
	struct FGuid SessionId; // 0x58(0x10)
	struct FString SessionName; // 0x68(0x10)
	struct FString SessionOwner; // 0x78(0x10)
	bool Standalone; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// ScriptStruct SessionMessages.SessionServicePing
// Size: 0x01 (Inherited: 0x00)
struct FSessionServicePing {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

