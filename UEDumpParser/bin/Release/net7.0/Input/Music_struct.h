// Enum Music.EAISpawnerMusicZoneState
enum class EAISpawnerMusicZoneState : uint8_t {
	Passive,
	InCombat,
	BattleWon,
	EAISpawnerMusicZoneState_MAX,
};

// ScriptStruct Music.MusicZoneDestroyedEvent
// Size: 0x10 (Inherited: 0x00)
struct FMusicZoneDestroyedEvent {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Music.MusicZoneSpawnedEvent
// Size: 0x10 (Inherited: 0x00)
struct FMusicZoneSpawnedEvent {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

