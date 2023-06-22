// Enum RareAudio.EEmitterRelationship
enum class EEmitterRelationship : uint8_t {
	Audio_Remote,
	Audio_Local,
	Audio_Default,
	Audio_MAX,
};

// ScriptStruct RareAudio.WwiseEmitter
// Size: 0x20 (Inherited: 0x00)
struct FWwiseEmitter {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct RareAudio.WwiseEmitterCreationParams
// Size: 0x28 (Inherited: 0x00)
struct FWwiseEmitterCreationParams {
	struct UWwiseEvent* Event; // 0x00(0x08)
	struct TArray<struct FWWiseEmitterCreationRTPCSetting> RTPCs; // 0x08(0x10)
	struct TArray<struct FWWiseEmitterCreationSwitchSetting> Switches; // 0x18(0x10)
};

// ScriptStruct RareAudio.WWiseEmitterCreationSwitchSetting
// Size: 0x10 (Inherited: 0x00)
struct FWWiseEmitterCreationSwitchSetting {
	struct FName SwitchGroup; // 0x00(0x08)
	struct FName SwitchValue; // 0x08(0x08)
};

// ScriptStruct RareAudio.WWiseEmitterCreationRTPCSetting
// Size: 0x0c (Inherited: 0x00)
struct FWWiseEmitterCreationRTPCSetting {
	struct FName RTPCName; // 0x00(0x08)
	float RTPCValue; // 0x08(0x04)
};

// ScriptStruct RareAudio.EventToComponentMapping
// Size: 0x20 (Inherited: 0x00)
struct FEventToComponentMapping {
	struct UWwiseEvent* PlayEvent; // 0x00(0x08)
	struct UWwiseEvent* StopEvent; // 0x08(0x08)
	struct TArray<struct UWwiseEmitterComponent*> WwiseEmitterComponents; // 0x10(0x10)
};

// ScriptStruct RareAudio.StaticMeshAudioAssociation
// Size: 0x20 (Inherited: 0x00)
struct FStaticMeshAudioAssociation {
	struct TArray<struct FStaticMeshWwiseEmitterData> PlaybackDataArray; // 0x00(0x10)
	struct TArray<struct UStaticMesh*> Meshes; // 0x10(0x10)
};

// ScriptStruct RareAudio.StaticMeshWwiseEmitterData
// Size: 0x38 (Inherited: 0x00)
struct FStaticMeshWwiseEmitterData {
	struct UWwiseObjectPoolWrapper* Pool; // 0x00(0x08)
	struct FVector LocalOriginOffset; // 0x08(0x0c)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct UWwiseEvent*> StartEvents; // 0x18(0x10)
	struct TArray<struct UWwiseEvent*> StopEvents; // 0x28(0x10)
};

// ScriptStruct RareAudio.StaticMeshComponentAudioAssociation
// Size: 0x68 (Inherited: 0x00)
struct FStaticMeshComponentAudioAssociation {
	struct FStaticMeshWwiseEmitterData PlaybackData; // 0x00(0x38)
	struct FVector EmitterPositionRelativeToComponentOrigin; // 0x38(0x0c)
	char UnknownData_44[0x24]; // 0x44(0x24)
};

