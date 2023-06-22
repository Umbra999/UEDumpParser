// Enum TreasuryFramework.ETreasuryWaveType
enum class ETreasuryWaveType : uint8_t {
	Regular,
	FinalWave,
	ETreasuryWaveType_MAX,
};

// Enum TreasuryFramework.ETreasuryVaultDoorState
enum class ETreasuryVaultDoorState : uint8_t {
	Opening,
	Open,
	Closing,
	Closed,
	ETreasuryVaultDoorState_MAX,
};

// Enum TreasuryFramework.ETreasuryEncounterType
enum class ETreasuryEncounterType : uint8_t {
	Sirens,
	OceanCrawlers,
	ETreasuryEncounterType_MAX,
};

// Enum TreasuryFramework.ETreasuryWaveResult
enum class ETreasuryWaveResult : uint8_t {
	Continue,
	ChangeType,
	ETreasuryWaveResult_MAX,
};

// Enum TreasuryFramework.ETreasuryState
enum class ETreasuryState : uint8_t {
	Inactive,
	Waiting,
	Active,
	Completed,
	Failed,
	Aftermath,
	ETreasuryState_MAX,
};

// ScriptStruct TreasuryFramework.TreasuryWaveEncounter
// Size: 0x48 (Inherited: 0x00)
struct FTreasuryWaveEncounter {
	char EncounterType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct ASpawnAIWaveMechanismAction* SpawnerMechanism; // 0x08(0x08)
	struct AActor* MechanismTrigger; // 0x10(0x08)
	struct ASpawnAIWaveMechanismAction* SpawnerMechanismVaultMaster; // 0x18(0x08)
	struct AActor* MechanismTriggerVaultMaster; // 0x20(0x08)
	struct UTreasuryWaveDataAsset* Waves; // 0x28(0x08)
	struct UTreasuryWaveDataAsset* FinalWaves; // 0x30(0x08)
	struct UTreasuryWaveDataAsset* FinalWavesVaultMaster; // 0x38(0x08)
	bool NeedsRoomFlooded; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// ScriptStruct TreasuryFramework.TreasuryWaveTracker
// Size: 0x18 (Inherited: 0x00)
struct FTreasuryWaveTracker {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TreasuryFramework.EventTreasuryRoomInactive
// Size: 0x01 (Inherited: 0x00)
struct FEventTreasuryRoomInactive {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TreasuryFramework.EventTreasuryRoomActive
// Size: 0x01 (Inherited: 0x00)
struct FEventTreasuryRoomActive {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

