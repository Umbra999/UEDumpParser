// Enum ServerMigration.EExecutionTarget
enum class EExecutionTarget : uint8_t {
	OldServer,
	NewServer,
	Client,
	EExecutionTarget_MAX,
};

// ScriptStruct ServerMigration.ClientSettings
// Size: 0x02 (Inherited: 0x00)
struct FClientSettings {
	bool FailToConnectToServer; // 0x00(0x01)
	bool PauseMigrationBeforeOwnershipTransfer; // 0x01(0x01)
};

// ScriptStruct ServerMigration.ServerSettings
// Size: 0x08 (Inherited: 0x00)
struct FServerSettings {
	bool FailToConnectToServer; // 0x00(0x01)
	bool RefuseMigrationStart; // 0x01(0x01)
	bool DisconnectServerConnectionDuringMigration; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	int32_t RefuseIncomingClientConnections; // 0x04(0x04)
};

// ScriptStruct ServerMigration.ServerMigrationCustomMigrationSerialisationStruct
// Size: 0x04 (Inherited: 0x00)
struct FServerMigrationCustomMigrationSerialisationStruct {
	char UnknownData_0[0x4]; // 0x00(0x04)
};

// ScriptStruct ServerMigration.ServerMigrationSerialisationDetailsTestsUStruct
// Size: 0x0c (Inherited: 0x00)
struct FServerMigrationSerialisationDetailsTestsUStruct {
	float FloatWithNoMarkup; // 0x00(0x04)
	uint16_t UInt16WithMigrationMarkup; // 0x04(0x02)
	uint16_t UInt16WithNotReplicatedMarkup; // 0x06(0x02)
	uint16_t UInt16WithMigrationAndNotReplicatedMarkup; // 0x08(0x02)
	char UnknownData_A[0x2]; // 0x0a(0x02)
};

