// Enum GameplayDebugger.EAIDebugDrawDataView
enum class EAIDebugDrawDataView : uint8_t {
	Empty,
	OverHead,
	Basic,
	BehaviorTree,
	EQS,
	Perception,
	GameView1,
	GameView2,
	GameView3,
	GameView4,
	GameView5,
	NavMesh,
	MAX,
	EAIDebugDrawDataView_MAX,
};

// Enum GameplayDebugger.EDebugComponentMessage
enum class EDebugComponentMessage : uint8_t {
	EnableExtendedView,
	DisableExtendedView,
	ActivateReplication,
	DeactivateReplilcation,
	ActivateDataView,
	DeactivateDataView,
	SetMultipleDataViews,
	EDebugComponentMessage_MAX,
};

// ScriptStruct GameplayDebugger.GDTCustomViewNames
// Size: 0x50 (Inherited: 0x00)
struct FGDTCustomViewNames {
	struct FString GameView1; // 0x00(0x10)
	struct FString GameView2; // 0x10(0x10)
	struct FString GameView3; // 0x20(0x10)
	struct FString GameView4; // 0x30(0x10)
	struct FString GameView5; // 0x40(0x10)
};

