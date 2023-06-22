// ScriptStruct CustomDeath.SetCustomPlayerStartGameServerRequestModel
// Size: 0x08 (Inherited: 0x00)
struct FSetCustomPlayerStartGameServerRequestModel {
	int32_t PlayerNetGUID; // 0x00(0x04)
	int32_t PlayerStartActorNetID; // 0x04(0x04)
};

// ScriptStruct CustomDeath.CustomDeathConfiguration
// Size: 0x18 (Inherited: 0x00)
struct FCustomDeathConfiguration {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct CustomDeath.DestroyCustomPlayerStartGameServerRequestModel
// Size: 0x18 (Inherited: 0x00)
struct FDestroyCustomPlayerStartGameServerRequestModel {
	int32_t PlayerStartActorNetID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FString Tag; // 0x08(0x10)
};

// ScriptStruct CustomDeath.CustomPlayerStartConfigResponseGameServerRequestModel
// Size: 0x08 (Inherited: 0x00)
struct FCustomPlayerStartConfigResponseGameServerRequestModel {
	bool Success; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t PlayerStartId; // 0x04(0x04)
};

// ScriptStruct CustomDeath.CustomPlayerStartConfigGameServerRequestModel
// Size: 0x30 (Inherited: 0x00)
struct FCustomPlayerStartConfigGameServerRequestModel {
	struct FVector Location; // 0x00(0x0c)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
	struct TArray<struct FString> Tags; // 0x20(0x10)
};

// ScriptStruct CustomDeath.ResetCustomConfigForPlayerGameServerRequestModel
// Size: 0x04 (Inherited: 0x00)
struct FResetCustomConfigForPlayerGameServerRequestModel {
	int32_t PlayerNetGUID; // 0x00(0x04)
};

// ScriptStruct CustomDeath.SetShouldSkipFerryOfTheDamnedGameServerRequestModel
// Size: 0x08 (Inherited: 0x00)
struct FSetShouldSkipFerryOfTheDamnedGameServerRequestModel {
	int32_t PlayerNetGUID; // 0x00(0x04)
	bool bShouldSkipFerryOfTheDamned; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct CustomDeath.SetShouldUseRevivalFlowGameServerRequestModel
// Size: 0x08 (Inherited: 0x00)
struct FSetShouldUseRevivalFlowGameServerRequestModel {
	int32_t PlayerNetGUID; // 0x00(0x04)
	bool bShouldUseRevivalFlow; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct CustomDeath.GameModeDeathPenaltyRespawnTimerGameServerRequestModel
// Size: 0x04 (Inherited: 0x00)
struct FGameModeDeathPenaltyRespawnTimerGameServerRequestModel {
	float SpawnTimer; // 0x00(0x04)
};

// ScriptStruct CustomDeath.ForcePlayerRespawnGameServerRequestModel
// Size: 0x08 (Inherited: 0x00)
struct FForcePlayerRespawnGameServerRequestModel {
	int32_t PlayerNetGUID; // 0x00(0x04)
	bool bRespawnAsGhost; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct CustomDeath.KillCrewGameServerRequestModel
// Size: 0x10 (Inherited: 0x00)
struct FKillCrewGameServerRequestModel {
	struct FGuid CrewNetGUID; // 0x00(0x10)
};

// ScriptStruct CustomDeath.KillPlayerGameServerRequestModel
// Size: 0x04 (Inherited: 0x00)
struct FKillPlayerGameServerRequestModel {
	int32_t PlayerNetGUID; // 0x00(0x04)
};

