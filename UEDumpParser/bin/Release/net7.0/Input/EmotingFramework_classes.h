// Class EmotingFramework.EmoteCameraInterface
// Size: 0x28 (Inherited: 0x28)
struct UEmoteCameraInterface : UInterface {
};

// Class EmotingFramework.EmoteCard
// Size: 0x518 (Inherited: 0x3c8)
struct AEmoteCard : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct UMaterialInstanceDynamic* DynamicCardSelectionMaterialInstance; // 0x3d0(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x3d8(0x08)
	struct FName RandomCardParameterName; // 0x3e0(0x08)
	struct FInt32Range RandomCardParameterRange; // 0x3e8(0x10)
	char UnknownData_3F8[0x120]; // 0x3f8(0x120)
};

// Class EmotingFramework.EmoteCoin
// Size: 0x4f0 (Inherited: 0x3c8)
struct AEmoteCoin : AActor {
	char UnknownData_3C8[0x128]; // 0x3c8(0x128)
};

// Class EmotingFramework.EmotePropData
// Size: 0x28 (Inherited: 0x28)
struct UEmotePropData : UDataAsset {
};

// Class EmotingFramework.EmoteRandomFromListAsset
// Size: 0x38 (Inherited: 0x28)
struct UEmoteRandomFromListAsset : UDataAsset {
	struct TArray<struct FEmoteData> EmoteDataList; // 0x28(0x10)
};

// Class EmotingFramework.EmotePropDiceData
// Size: 0x30 (Inherited: 0x28)
struct UEmotePropDiceData : UEmotePropData {
	char DiceType; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// Class EmotingFramework.EmoteDice
// Size: 0x4f8 (Inherited: 0x3c8)
struct AEmoteDice : AActor {
	char UnknownData_3C8[0x130]; // 0x3c8(0x130)

	void SetDiceMesh(char DiceType); // Function EmotingFramework.EmoteDice.SetDiceMesh // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1848130
	void SendTelemetryData(struct FTransform OrientationUsed, int32_t RollNumber, char DiceType); // Function EmotingFramework.EmoteDice.SendTelemetryData // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3589360
	void RollDice(int32_t RollNumber, char DiceType); // Function EmotingFramework.EmoteDice.RollDice // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3589290
};

// Class EmotingFramework.EmoteIdListingAsset
// Size: 0x38 (Inherited: 0x28)
struct UEmoteIdListingAsset : UDataAsset {
	struct TArray<struct FName> EmoteIds; // 0x28(0x10)
};

// Class EmotingFramework.EmoteInteractionObjectsProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UEmoteInteractionObjectsProviderInterface : UInterface {
};

// Class EmotingFramework.EmotePropRandomObjectData
// Size: 0x38 (Inherited: 0x28)
struct UEmotePropRandomObjectData : UEmotePropData {
	struct TArray<struct FEmotePropRandomObjectInfo> PossibleObjects; // 0x28(0x10)
};

// Class EmotingFramework.EmoteRandomObject
// Size: 0x508 (Inherited: 0x3c8)
struct AEmoteRandomObject : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x3d0(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterialInstance; // 0x3d8(0x08)
	char UnknownData_3E0[0x128]; // 0x3e0(0x128)
};

// Class EmotingFramework.EmoteSettings
// Size: 0x40 (Inherited: 0x38)
struct UEmoteSettings : UDeveloperSettings {
	int32_t NumPages; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class EmotingFramework.EmoteZoomInAnalogInputId
// Size: 0x38 (Inherited: 0x38)
struct UEmoteZoomInAnalogInputId : UAnalogInputId {
};

// Class EmotingFramework.EmoteZoomMouseAnalogInputId
// Size: 0x38 (Inherited: 0x38)
struct UEmoteZoomMouseAnalogInputId : UAnalogInputId {
};

// Class EmotingFramework.EmoteZoomOutAnalogInputId
// Size: 0x38 (Inherited: 0x38)
struct UEmoteZoomOutAnalogInputId : UAnalogInputId {
};

