// Enum EmotingFramework.EDiceType
enum class EDiceType : uint8_t {
	Dice4,
	Dice6,
	Dice8,
	Dice10,
	Dice12,
	Dice20,
	EDiceType_MAX,
};

// Enum EmotingFramework.EEmoteFlourishType
enum class EEmoteFlourishType : uint8_t {
	Invalid,
	PrimaryWeaponSlotFlourish,
	SecondaryWeaponSlotFlourish,
	EEmoteFlourishType_MAX,
};

// ScriptStruct EmotingFramework.EmoteData
// Size: 0xa0 (Inherited: 0x00)
struct FEmoteData {
	struct FEmoteId EmoteId; // 0x00(0x08)
	struct FText EmoteDisplayName; // 0x08(0x38)
	struct FText AudioDescription; // 0x40(0x38)
	float DelayBeforeAllowingExit; // 0x78(0x04)
	float VerticalOffsetFactorWhenZoomed; // 0x7c(0x04)
	bool HideNameplate; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
	struct UEmotePropData* EmotePropDataAsset; // 0x88(0x08)
	bool CanPlayInSuccession; // 0x90(0x01)
	bool ShowDescriptionInTextChat; // 0x91(0x01)
	char UnknownData_92[0x6]; // 0x92(0x06)
	struct UAthenaSpringArmComponentParams* CustomSpringArmParamsAsset; // 0x98(0x08)
};

// ScriptStruct EmotingFramework.EmoteId
// Size: 0x08 (Inherited: 0x00)
struct FEmoteId {
	struct FName EmoteId; // 0x00(0x08)
};

// ScriptStruct EmotingFramework.EmotePropRandomObjectResult
// Size: 0x50 (Inherited: 0x00)
struct FEmotePropRandomObjectResult {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	bool HasTransformValue; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FTransform Transform; // 0x10(0x30)
	struct FName TextureParameterName; // 0x40(0x08)
	int32_t TextureParameterValue; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct EmotingFramework.EmotePropRandomObjectInfo
// Size: 0x30 (Inherited: 0x00)
struct FEmotePropRandomObjectInfo {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct FTransform> PossibleTransforms; // 0x08(0x10)
	struct FName RandomParameterName; // 0x18(0x08)
	struct FInt32Range RandomParameterRange; // 0x20(0x10)
};

// ScriptStruct EmotingFramework.EventEmoteEndRequested
// Size: 0x0c (Inherited: 0x00)
struct FEventEmoteEndRequested {
	struct FName EmoteIdentifier; // 0x00(0x08)
	bool EndForcedEmote; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct EmotingFramework.EventEndEmoteAnimation
// Size: 0x01 (Inherited: 0x00)
struct FEventEndEmoteAnimation {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct EmotingFramework.EventEmoteSwapped
// Size: 0xa0 (Inherited: 0x00)
struct FEventEmoteSwapped {
	struct FEmoteData EmoteData; // 0x00(0xa0)
};

// ScriptStruct EmotingFramework.EventEmoteCompleted
// Size: 0x0c (Inherited: 0x00)
struct FEventEmoteCompleted {
	struct FName EmoteName; // 0x00(0x08)
	uint32_t EmoteDuration; // 0x08(0x04)
};

// ScriptStruct EmotingFramework.EventEmoteStarted
// Size: 0xa0 (Inherited: 0x00)
struct FEventEmoteStarted {
	struct FEmoteData EmoteData; // 0x00(0xa0)
};

// ScriptStruct EmotingFramework.EventEmoteRequested
// Size: 0xb0 (Inherited: 0x00)
struct FEventEmoteRequested {
	struct FEmoteData EmoteData; // 0x00(0xa0)
	struct FName ForcedEmoteIdentifier; // 0xa0(0x08)
	bool ForcedEmote; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct EmotingFramework.EventDisableLookAtEmoteCamera
// Size: 0x01 (Inherited: 0x00)
struct FEventDisableLookAtEmoteCamera {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct EmotingFramework.EventEnableLookAtEmoteCamera
// Size: 0x08 (Inherited: 0x00)
struct FEventEnableLookAtEmoteCamera {
	struct AActor* LookAtTarget; // 0x00(0x08)
};

// ScriptStruct EmotingFramework.EmoteDiceOutcomeTelemetryEvent
// Size: 0x14 (Inherited: 0x00)
struct FEmoteDiceOutcomeTelemetryEvent {
	int32_t MaxLimit; // 0x00(0x04)
	int32_t RollNumber; // 0x04(0x04)
	struct FVector OrientationUsed; // 0x08(0x0c)
};

// ScriptStruct EmotingFramework.EmoteRandomObjectOutcomeTelemetryEvent
// Size: 0x60 (Inherited: 0x00)
struct FEmoteRandomObjectOutcomeTelemetryEvent {
	struct FString MeshName; // 0x00(0x10)
	struct FTransform Transform; // 0x10(0x30)
	struct FString TextureParameterName; // 0x40(0x10)
	int32_t TextureParameterValue; // 0x50(0x04)
	char UnknownData_54[0xc]; // 0x54(0x0c)
};

