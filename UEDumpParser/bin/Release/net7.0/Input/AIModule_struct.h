// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t {
	Success,
	Blocked,
	OffPath,
	Aborted,
	Skipped,
	Invalid,
	EPathFollowingResult_MAX,
};

// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t {
	Processing,
	Success,
	Failed,
	Aborted,
	OwnerLost,
	MissingParam,
	EEnvQueryStatus_MAX,
};

// Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t {
	Animation,
	Logic,
	Script,
	Gameplay,
	MAX,
	EAILockSource_MAX,
};

// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t {
	SoftScript,
	Logic,
	HardScript,
	Reaction,
	Ultimate,
	MAX,
	EAIRequestPriority_MAX,
};

// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t {
	Invalid,
	FailedToStart,
	InstantAbort,
	FinishedAborting,
	FinishedExecution,
	Push,
	EPawnActionEventType_MAX,
};

// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t {
	NotStarted,
	InProgress,
	Success,
	Failed,
	Aborted,
	EPawnActionResult_MAX,
};

// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t {
	NeverStarted,
	NotBeingAborted,
	MarkPendingAbort,
	LatentAbortInProgress,
	AbortDone,
	MAX,
	EPawnActionAbortState_MAX,
};

// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t {
	Default,
	Enable,
	Disable,
	MAX,
	EAIOptionFlag_MAX,
};

// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t {
	Failed,
	AlreadyAtGoal,
	RequestSuccessful,
	EPathFollowingRequestResult_MAX,
};

// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t {
	Error,
	NoMove,
	DirectMove,
	PartialPath,
	PathToGoal,
	EPathFollowingAction_MAX,
};

// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t {
	Idle,
	Waiting,
	Paused,
	Moving,
	EPathFollowingStatus_MAX,
};

// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t {
	Equal,
	NotEqual,
	Contain,
	NotContain,
	ETextKeyOperation_MAX,
};

// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t {
	Equal,
	NotEqual,
	Less,
	LessOrEqual,
	Greater,
	GreaterOrEqual,
	EArithmeticKeyOperation_MAX,
};

// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t {
	Set,
	NotSet,
	EBasicKeyOperation_MAX,
};

// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t {
	None,
	LowerPriority,
	Self,
	Both,
	EBTFlowAbortMode_MAX,
};

// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t {
	Succeeded,
	Failed,
	Aborted,
	InProgress,
	EBTNodeResult_MAX,
};

// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t {
	Friendly,
	Neutral,
	Hostile,
	Alliance,
	ETeamAttitude_MAX,
};

// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t {
	OnEveryPerception,
	OnPerceptionChange,
	EAISenseNotifyType_MAX,
};

// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t {
	Lowest,
	Low,
	AutonomousAI,
	High,
	Ultimate,
	EAITaskPriority_MAX,
};

// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t {
	Invalid,
	Test,
	And,
	Or,
	Not,
	EBTDecoratorLogic_MAX,
};

// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t {
	FirstNode,
	TaskNode,
	EBTChildIndex_MAX,
};

// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t {
	ValueChange,
	ResultChange,
	EBTBlackboardRestart_MAX,
};

// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t {
	Equal,
	NotEqual,
	EBlackBoardEntryComparison_MAX,
};

// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t {
	NavmeshRaycast2D,
	HierarchicalQuery,
	RegularPathFinding,
	EPathExistanceQueryType_MAX,
};

// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t {
	AbortBackground,
	WaitForBackground,
	EBTParallelMode_MAX,
};

// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t {
	None,
	SpecifiedValue,
	FilterThreshold,
	EEnvQueryTestClamping_MAX,
};

// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t {
	TwoPoints,
	Rotation,
	EEnvDirection_MAX,
};

// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t {
	Line,
	Box,
	Sphere,
	Capsule,
	EEnvTraceShape_MAX,
};

// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t {
	None,
	Navigation,
	Geometry,
	RejectGeometry,
	EEnvQueryTrace_MAX,
};

// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t {
	Float,
	Int,
	Bool,
	EEnvQueryParam_MAX,
};

// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t {
	SingleResult,
	RandomBest5Pct,
	RandomBest25Pct,
	AllMatching,
	RandomFromAllMatching,
	EEnvQueryRunMode_MAX,
};

// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t {
	AverageScore,
	MinScore,
	MaxScore,
	EEnvTestScoreOperator_MAX,
};

// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t {
	AllPass,
	AnyPass,
	EEnvTestFilterOperator_MAX,
};

// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t {
	Low,
	Medium,
	High,
	EEnvTestCost_MAX,
};

// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t {
	None,
	Square,
	Inverse,
	Unused,
	Constant,
	Skip,
	EEnvTestWeight_MAX,
};

// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t {
	Linear,
	Square,
	InverseLinear,
	Constant,
	EEnvTestScoreEquation_MAX,
};

// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t {
	Minimum,
	Maximum,
	Range,
	Match,
	EEnvTestFilterType_MAX,
};

// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t {
	Filter,
	Score,
	FilterAndScore,
	EEnvTestPurpose_MAX,
};

// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t {
	RequireSuccess,
	IgnoreFailure,
	EPawnActionFailHandling_MAX,
};

// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t {
	CopyBeforeTriggering,
	ReuseInstances,
	EPawnSubActionTriggeringPolicy_MAX,
};

// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t {
	Distance3D,
	Distance2D,
	DistanceZ,
	EEnvTestDistance_MAX,
};

// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t {
	Dot3D,
	Dot2D,
	EEnvTestDot_MAX,
};

// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t {
	PathExist,
	PathCost,
	PathLength,
	EEnvTestPathfinding_MAX,
};

// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t {
	All,
	Best5Pct,
	Best25Pct,
	EEnvQueryHightlightMode_MAX,
};

// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t {
	UsePathfinding,
	StraightLine,
	EPawnActionMoveMode_MAX,
};

// ScriptStruct AIModule.AIRequestID
// Size: 0x04 (Inherited: 0x00)
struct FAIRequestID {
	uint32_t RequestID; // 0x00(0x04)
};

// ScriptStruct AIModule.AIStimulus
// Size: 0x3c (Inherited: 0x00)
struct FAIStimulus {
	float Age; // 0x00(0x04)
	float ExpirationAge; // 0x04(0x04)
	float Strength; // 0x08(0x04)
	struct FVector StimulusLocation; // 0x0c(0x0c)
	struct FVector ReceiverLocation; // 0x18(0x0c)
	struct FName Tag; // 0x24(0x08)
	char UnknownData_2C[0xc]; // 0x2c(0x0c)
	char UnknownData_38_0 : 1; // 0x38(0x01)
	char bSuccessfullySensed : 1; // 0x38(0x01)
	char UnknownData_38_2 : 6; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
};

// ScriptStruct AIModule.AIMoveRequest
// Size: 0x40 (Inherited: 0x00)
struct FAIMoveRequest {
	struct AActor* GoalActor; // 0x00(0x08)
	char UnknownData_8[0x38]; // 0x08(0x38)
};

// ScriptStruct AIModule.PawnActionStack
// Size: 0x08 (Inherited: 0x00)
struct FPawnActionStack {
	struct UPawnAction* TopAction; // 0x00(0x08)
};

// ScriptStruct AIModule.PawnActionEvent
// Size: 0x18 (Inherited: 0x00)
struct FPawnActionEvent {
	struct UPawnAction* Action; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct AIModule.BlackboardKeySelector
// Size: 0x28 (Inherited: 0x00)
struct FBlackboardKeySelector {
	struct TArray<struct UBlackboardKeyType*> AllowedTypes; // 0x00(0x10)
	struct FName SelectedKeyName; // 0x10(0x08)
	struct UClass* SelectedKeyType; // 0x18(0x08)
	char SelectedKeyID; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	char bNoneIsAllowedValue : 1; // 0x24(0x01)
	char UnknownData_24_1 : 7; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
};

// ScriptStruct AIModule.GenericTeamId
// Size: 0x01 (Inherited: 0x00)
struct FGenericTeamId {
	char TeamID; // 0x00(0x01)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct AIModule.AIDataProviderTypedValue
// Size: 0x28 (Inherited: 0x20)
struct FAIDataProviderTypedValue : FAIDataProviderValue {
	struct UClass* PropertyType; // 0x20(0x08)
};

// ScriptStruct AIModule.AIDataProviderValue
// Size: 0x20 (Inherited: 0x00)
struct FAIDataProviderValue {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UProperty* CachedProperty; // 0x08(0x08)
	struct UAIDataProvider* DataBinding; // 0x10(0x08)
	struct FName DataField; // 0x18(0x08)
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AIModule.AIDataProviderIntValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AIModule.AIDataProviderStructValue
// Size: 0x30 (Inherited: 0x20)
struct FAIDataProviderStructValue : FAIDataProviderValue {
	char UnknownData_20[0x10]; // 0x20(0x10)
};

// ScriptStruct AIModule.CustomDataProviderObjectPropertySelector
// Size: 0x10 (Inherited: 0x00)
struct FCustomDataProviderObjectPropertySelector {
	struct UClass* ObjectClass; // 0x00(0x08)
	struct FName PropertyName; // 0x08(0x08)
};

// ScriptStruct AIModule.IgnoreActorInfo
// Size: 0x0c (Inherited: 0x00)
struct FIgnoreActorInfo {
	struct AActor* Actor; // 0x00(0x08)
	float TimeRemaining; // 0x08(0x04)
};

// ScriptStruct AIModule.AISenseAffiliationFilter
// Size: 0x04 (Inherited: 0x00)
struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x00(0x01)
	char bDetectNeutrals : 1; // 0x00(0x01)
	char bDetectFriendlies : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// Size: 0x20 (Inherited: 0x00)
struct FActorPerceptionBlueprintInfo {
	struct AActor* Target; // 0x00(0x08)
	struct TArray<struct FAIStimulus> LastSensedStimuli; // 0x08(0x10)
	char bIsHostile : 1; // 0x18(0x01)
	char UnknownData_18_1 : 7; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AIModule.AIDamageEvent
// Size: 0x30 (Inherited: 0x00)
struct FAIDamageEvent {
	float Amount; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector HitLocation; // 0x10(0x0c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct AActor* DamagedActor; // 0x20(0x08)
	struct AActor* Instigator; // 0x28(0x08)
};

// ScriptStruct AIModule.AINoiseEvent
// Size: 0x30 (Inherited: 0x00)
struct FAINoiseEvent {
	char UnknownData_0[0x4]; // 0x00(0x04)
	struct FVector NoiseLocation; // 0x04(0x0c)
	float Loudness; // 0x10(0x04)
	float MaxRange; // 0x14(0x04)
	struct AActor* Instigator; // 0x18(0x08)
	struct FName Tag; // 0x20(0x08)
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct AIModule.AIPredictionEvent
// Size: 0x18 (Inherited: 0x00)
struct FAIPredictionEvent {
	struct AActor* Requestor; // 0x00(0x08)
	struct AActor* PredictedActor; // 0x08(0x08)
	char UnknownData_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.AISightEvent
// Size: 0x18 (Inherited: 0x00)
struct FAISightEvent {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct AActor* SeenActor; // 0x08(0x08)
	struct AActor* Observer; // 0x10(0x08)
};

// ScriptStruct AIModule.AITeamStimulusEvent
// Size: 0x38 (Inherited: 0x00)
struct FAITeamStimulusEvent {
	char UnknownData_0[0x28]; // 0x00(0x28)
	struct AActor* Broadcaster; // 0x28(0x08)
	struct AActor* Enemy; // 0x30(0x08)
};

// ScriptStruct AIModule.AITouchEvent
// Size: 0x20 (Inherited: 0x00)
struct FAITouchEvent {
	char UnknownData_0[0x10]; // 0x00(0x10)
	struct AActor* TouchReceiver; // 0x10(0x08)
	struct AActor* OtherActor; // 0x18(0x08)
};

// ScriptStruct AIModule.BTCompositeChild
// Size: 0x30 (Inherited: 0x00)
struct FBTCompositeChild {
	struct UBTCompositeNode* ChildComposite; // 0x00(0x08)
	struct UBTTaskNode* ChildTask; // 0x08(0x08)
	struct TArray<struct UBTDecorator*> Decorators; // 0x10(0x10)
	struct TArray<struct FBTDecoratorLogic> DecoratorOps; // 0x20(0x10)
};

// ScriptStruct AIModule.BTDecoratorLogic
// Size: 0x04 (Inherited: 0x00)
struct FBTDecoratorLogic {
	char Operation; // 0x00(0x01)
	char UnknownData_1[0x1]; // 0x01(0x01)
	uint16_t Number; // 0x02(0x02)
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// Size: 0x18 (Inherited: 0x00)
struct FBehaviorTreeTemplateInfo {
	struct UBehaviorTree* Asset; // 0x00(0x08)
	struct UBTCompositeNode* Template; // 0x08(0x08)
	char UnknownData_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.BlackboardEntry
// Size: 0x18 (Inherited: 0x00)
struct FBlackboardEntry {
	struct FName EntryName; // 0x00(0x08)
	struct UBlackboardKeyType* KeyType; // 0x08(0x08)
	char bInstanceSynced : 1; // 0x10(0x01)
	char UnknownData_10_1 : 7; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AIModule.EnvBoolParam
// Size: 0x0c (Inherited: 0x0c)
struct FEnvBoolParam : FEnvBoolParam_DEPRECATED {
};

// ScriptStruct AIModule.EnvBoolParam_DEPRECATED
// Size: 0x0c (Inherited: 0x00)
struct FEnvBoolParam_DEPRECATED {
	bool Value; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FName ParamName; // 0x04(0x08)
};

// ScriptStruct AIModule.EnvIntParam
// Size: 0x0c (Inherited: 0x0c)
struct FEnvIntParam : FEnvIntParam_DEPRECATED {
};

// ScriptStruct AIModule.EnvIntParam_DEPRECATED
// Size: 0x0c (Inherited: 0x00)
struct FEnvIntParam_DEPRECATED {
	int32_t Value; // 0x00(0x04)
	struct FName ParamName; // 0x04(0x08)
};

// ScriptStruct AIModule.EnvFloatParam
// Size: 0x0c (Inherited: 0x0c)
struct FEnvFloatParam : FEnvFloatParam_DEPRECATED {
};

// ScriptStruct AIModule.EnvFloatParam_DEPRECATED
// Size: 0x0c (Inherited: 0x00)
struct FEnvFloatParam_DEPRECATED {
	float Value; // 0x00(0x04)
	struct FName ParamName; // 0x04(0x08)
};

// ScriptStruct AIModule.EnvQueryResult
// Size: 0x40 (Inherited: 0x00)
struct FEnvQueryResult {
	char UnknownData_0[0x10]; // 0x00(0x10)
	struct UClass* ItemType; // 0x10(0x08)
	char UnknownData_18[0x14]; // 0x18(0x14)
	int32_t OptionIndex; // 0x2c(0x04)
	int32_t QueryID; // 0x30(0x04)
	char UnknownData_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct AIModule.EnvTraceData
// Size: 0x40 (Inherited: 0x00)
struct FEnvTraceData {
	int32_t VersionNum; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UClass* NavigationFilter; // 0x08(0x08)
	struct FName OverrideNavMesh; // 0x10(0x08)
	float ProjectDown; // 0x18(0x04)
	float ProjectUp; // 0x1c(0x04)
	float ExtentX; // 0x20(0x04)
	float ExtentY; // 0x24(0x04)
	float ExtentZ; // 0x28(0x04)
	float PostProjectionVerticalOffset; // 0x2c(0x04)
	char TraceChannel; // 0x30(0x01)
	char SerializedChannel; // 0x31(0x01)
	char TraceShape; // 0x32(0x01)
	char TraceMode; // 0x33(0x01)
	char bTraceComplex : 1; // 0x34(0x01)
	char bOnlyBlockingHits : 1; // 0x34(0x01)
	char bCanTraceOnNavMesh : 1; // 0x34(0x01)
	char bCanTraceOnGeometry : 1; // 0x34(0x01)
	char bCanDisableTrace : 1; // 0x34(0x01)
	char bCanProjectDown : 1; // 0x34(0x01)
	char UnknownData_34_6 : 2; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
	bool bUseUpDownAsAbsoluteZStartAndEnd; // 0x38(0x01)
	bool bUseSourceZAsEnd; // 0x39(0x01)
	char UnknownData_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct AIModule.EnvDirection
// Size: 0x20 (Inherited: 0x00)
struct FEnvDirection {
	struct UClass* LineFrom; // 0x00(0x08)
	struct UClass* LineTo; // 0x08(0x08)
	struct UClass* Rotation; // 0x10(0x08)
	char DirMode; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AIModule.EnvNamedValue
// Size: 0x10 (Inherited: 0x00)
struct FEnvNamedValue {
	struct FName ParamName; // 0x00(0x08)
	char ParamType; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// Size: 0x20 (Inherited: 0x00)
struct FCrowdAvoidanceSamplingPattern {
	struct TArray<float> Angles; // 0x00(0x10)
	struct TArray<float> Radii; // 0x10(0x10)
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
// Size: 0x1c (Inherited: 0x00)
struct FCrowdAvoidanceConfig {
	float VelocityBias; // 0x00(0x04)
	float DesiredVelocityWeight; // 0x04(0x04)
	float CurrentVelocityWeight; // 0x08(0x04)
	float SideBiasWeight; // 0x0c(0x04)
	float ImpactTimeWeight; // 0x10(0x04)
	float ImpactTimeRange; // 0x14(0x04)
	char CustomPatternIdx; // 0x18(0x01)
	char AdaptiveDivisions; // 0x19(0x01)
	char AdaptiveRings; // 0x1a(0x01)
	char AdaptiveDepth; // 0x1b(0x01)
};

// ScriptStruct AIModule.EnvQueryInstanceCache
// Size: 0x290 (Inherited: 0x00)
struct FEnvQueryInstanceCache {
	struct UEnvQuery* Template; // 0x00(0x08)
	char UnknownData_8[0x288]; // 0x08(0x288)
};

// ScriptStruct AIModule.EnvQueryRequest
// Size: 0x170 (Inherited: 0x00)
struct FEnvQueryRequest {
	struct UEnvQuery* QueryTemplate; // 0x00(0x08)
	struct UObject* Owner; // 0x08(0x08)
	struct UWorld* World; // 0x10(0x08)
	char UnknownData_18[0x158]; // 0x18(0x158)
};

