// ScriptStruct TaleAI.SpawnAICustomOnDespawnTaskData
// Size: 0x20 (Inherited: 0x00)
struct FSpawnAICustomOnDespawnTaskData {
	int32_t Despawn_Index; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct APawn* Despawn_Pawn; // 0x08(0x08)
	char Despawn_Reason; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct UTaleQuestStepDesc* Body; // 0x18(0x08)
};

// ScriptStruct TaleAI.SpawnAICustomOnSpawnTaskData
// Size: 0x18 (Inherited: 0x00)
struct FSpawnAICustomOnSpawnTaskData {
	int32_t Spawn_Index; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct APawn* Spawn_Pawn; // 0x08(0x08)
	struct UTaleQuestStepDesc* Body; // 0x10(0x08)
};

// ScriptStruct TaleAI.SpawnActorCustomOnCompleteWaveTaskData
// Size: 0x08 (Inherited: 0x00)
struct FSpawnActorCustomOnCompleteWaveTaskData {
	struct UTaleQuestStepDesc* Body; // 0x00(0x08)
};

// ScriptStruct TaleAI.SpawnActorCustomOnTriggerWaveTaskData
// Size: 0x10 (Inherited: 0x00)
struct FSpawnActorCustomOnTriggerWaveTaskData {
	int32_t NumAIToSpawn; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UTaleQuestStepDesc* Body; // 0x08(0x08)
};

// ScriptStruct TaleAI.SpawnAICustomPreSpawnTaskData
// Size: 0x68 (Inherited: 0x00)
struct FSpawnAICustomPreSpawnTaskData {
	int32_t Index; // 0x00(0x04)
	struct FVector SpawnLocation; // 0x04(0x0c)
	struct UClass* PawnClass; // 0x10(0x20)
	struct UAthenaAIControllerParamsDataAsset* Skillset; // 0x30(0x08)
	struct ULoadoutAsset* Loadout; // 0x38(0x08)
	struct UAthenaAIFormDataAsset* Form; // 0x40(0x08)
	struct UAthenaAIAmmoDataAsset* Ammo; // 0x48(0x08)
	struct UClass* AIClass; // 0x50(0x08)
	struct UAIPartsCategory* PartsCategory; // 0x58(0x08)
	struct UTaleQuestStepDesc* Body; // 0x60(0x08)
};

// ScriptStruct TaleAI.SpawnAICustomSetupTaskData
// Size: 0x18 (Inherited: 0x00)
struct FSpawnAICustomSetupTaskData {
	int32_t MaxAI; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UTaleAIRegionBase* Region; // 0x08(0x08)
	struct UTaleQuestStepDesc* Body; // 0x10(0x08)
};

