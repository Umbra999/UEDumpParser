// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t {
	FavorTop,
	FavorBottom,
	EThreePlayerSplitScreenType_MAX,
};

// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t {
	Horizontal,
	Vertical,
	ETwoPlayerSplitScreenType_MAX,
};

// ScriptStruct EngineSettings.AutoCompleteCommand
// Size: 0x30 (Inherited: 0x00)
struct FAutoCompleteCommand {
	struct FString Command; // 0x00(0x10)
	struct FString Desc; // 0x10(0x10)
	struct FString Keywords; // 0x20(0x10)
};

