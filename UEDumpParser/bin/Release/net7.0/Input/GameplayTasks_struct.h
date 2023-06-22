// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t {
	StartOnTop,
	StartAtEnd,
	ETaskResourceOverlapPolicy_MAX,
};

// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t {
	Uninitialized,
	AwaitingActivation,
	Paused,
	Active,
	Finished,
	EGameplayTaskState_MAX,
};

// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t {
	Error,
	Failed,
	Success_Paused,
	Success_Active,
	Success_Finished,
	EGameplayTaskRunResult_MAX,
};

// ScriptStruct GameplayTasks.GameplayResourceSet
// Size: 0x02 (Inherited: 0x00)
struct FGameplayResourceSet {
	char UnknownData_0[0x2]; // 0x00(0x02)
};

