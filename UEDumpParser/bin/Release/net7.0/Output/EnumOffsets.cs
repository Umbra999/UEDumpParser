namespace Hexed.SDK.Offsets
{
    internal class EnumOffsets
    {
        // Enum ActionStateMachine.EActionStateMachineTrackId
        public enum EActionStateMachineTrackId : byte
        {
           	Locomotion,
           	Overlay,
           	ItemUse,
           	ForcedMovement,
           	Migration,
           	Count,
           	Invalid,
           	EActionStateMachineTrackId_MAX,
        };

        // Enum ActionStateMachine.EActionPredictionType
        public enum EActionPredictionType : byte
        {
           	Predicted,
           	NotPredicted,
           	EActionPredictionType_MAX,
        };

        // Enum ActionStateMachine.EActionStatePriority
        public enum EActionStatePriority : byte
        {
           	Overrides,
           	Overriden,
           	EActionStatePriority_MAX,
        };

        // Enum ActorLayers.EActorLayerOwnership
        public enum EActorLayerOwnership : byte
        {
           	Internal,
           	External,
           	EActorLayerOwnership_MAX,
        };

        // Enum ActorLayers.EActorLayerState
        public enum EActorLayerState : byte
        {
           	Inactive,
           	Active,
           	Loading,
           	EActorLayerState_MAX,
        };

        // Enum ActorSequence.EActorSequenceObjectReferenceType
        public enum EActorSequenceObjectReferenceType : byte
        {
           	ContextActor,
           	ExternalActor,
           	Component,
           	EActorSequenceObjectReferenceType_MAX,
        };

        // Enum AdventureOnDemandFramework.EOnDemandQuestResumeConditionMetReason
        public enum EOnDemandQuestResumeConditionMetReason : byte
        {
           	ArrivalTunnelComplete,
           	DiveCancelled,
           	CrewNotDiving,
           	None,
           	EOnDemandQuestResumeConditionMetReason_MAX,
        };

        // Enum AIModule.EPathFollowingResult
        public enum EPathFollowingResult : byte
        {
           	Success,
           	Blocked,
           	OffPath,
           	Aborted,
           	Skipped,
           	Invalid,
           	EPathFollowingResult_MAX,
        };

        // Enum AIModule.EEnvQueryStatus
        public enum EEnvQueryStatus : byte
        {
           	Processing,
           	Success,
           	Failed,
           	Aborted,
           	OwnerLost,
           	MissingParam,
           	EEnvQueryStatus_MAX,
        };

        // Enum AIModule.EAILockSource
        public enum EAILockSource : byte
        {
           	Animation,
           	Logic,
           	Script,
           	Gameplay,
           	MAX,
           	EAILockSource_MAX,
        };

        // Enum AIModule.EAIRequestPriority
        public enum EAIRequestPriority : byte
        {
           	SoftScript,
           	Logic,
           	HardScript,
           	Reaction,
           	Ultimate,
           	MAX,
           	EAIRequestPriority_MAX,
        };

        // Enum AIModule.EPawnActionEventType
        public enum EPawnActionEventType : byte
        {
           	Invalid,
           	FailedToStart,
           	InstantAbort,
           	FinishedAborting,
           	FinishedExecution,
           	Push,
           	EPawnActionEventType_MAX,
        };

        // Enum AIModule.EPawnActionResult
        public enum EPawnActionResult : byte
        {
           	NotStarted,
           	InProgress,
           	Success,
           	Failed,
           	Aborted,
           	EPawnActionResult_MAX,
        };

        // Enum AIModule.EPawnActionAbortState
        public enum EPawnActionAbortState : byte
        {
           	NeverStarted,
           	NotBeingAborted,
           	MarkPendingAbort,
           	LatentAbortInProgress,
           	AbortDone,
           	MAX,
           	EPawnActionAbortState_MAX,
        };

        // Enum AIModule.EAIOptionFlag
        public enum EAIOptionFlag : byte
        {
           	Default,
           	Enable,
           	Disable,
           	MAX,
           	EAIOptionFlag_MAX,
        };

        // Enum AIModule.EPathFollowingRequestResult
        public enum EPathFollowingRequestResult : byte
        {
           	Failed,
           	AlreadyAtGoal,
           	RequestSuccessful,
           	EPathFollowingRequestResult_MAX,
        };

        // Enum AIModule.EPathFollowingAction
        public enum EPathFollowingAction : byte
        {
           	Error,
           	NoMove,
           	DirectMove,
           	PartialPath,
           	PathToGoal,
           	EPathFollowingAction_MAX,
        };

        // Enum AIModule.EPathFollowingStatus
        public enum EPathFollowingStatus : byte
        {
           	Idle,
           	Waiting,
           	Paused,
           	Moving,
           	EPathFollowingStatus_MAX,
        };

        // Enum AIModule.ETextKeyOperation
        public enum ETextKeyOperation : byte
        {
           	Equal,
           	NotEqual,
           	Contain,
           	NotContain,
           	ETextKeyOperation_MAX,
        };

        // Enum AIModule.EArithmeticKeyOperation
        public enum EArithmeticKeyOperation : byte
        {
           	Equal,
           	NotEqual,
           	Less,
           	LessOrEqual,
           	Greater,
           	GreaterOrEqual,
           	EArithmeticKeyOperation_MAX,
        };

        // Enum AIModule.EBasicKeyOperation
        public enum EBasicKeyOperation : byte
        {
           	Set,
           	NotSet,
           	EBasicKeyOperation_MAX,
        };

        // Enum AIModule.EBTFlowAbortMode
        public enum EBTFlowAbortMode : byte
        {
           	None,
           	LowerPriority,
           	Self,
           	Both,
           	EBTFlowAbortMode_MAX,
        };

        // Enum AIModule.EBTNodeResult
        public enum EBTNodeResult : byte
        {
           	Succeeded,
           	Failed,
           	Aborted,
           	InProgress,
           	EBTNodeResult_MAX,
        };

        // Enum AIModule.ETeamAttitude
        public enum ETeamAttitude : byte
        {
           	Friendly,
           	Neutral,
           	Hostile,
           	Alliance,
           	ETeamAttitude_MAX,
        };

        // Enum AIModule.EAISenseNotifyType
        public enum EAISenseNotifyType : byte
        {
           	OnEveryPerception,
           	OnPerceptionChange,
           	EAISenseNotifyType_MAX,
        };

        // Enum AIModule.EAITaskPriority
        public enum EAITaskPriority : byte
        {
           	Lowest,
           	Low,
           	AutonomousAI,
           	High,
           	Ultimate,
           	EAITaskPriority_MAX,
        };

        // Enum AIModule.EBTDecoratorLogic
        public enum EBTDecoratorLogic : byte
        {
           	Invalid,
           	Test,
           	And,
           	Or,
           	Not,
           	EBTDecoratorLogic_MAX,
        };

        // Enum AIModule.EBTChildIndex
        public enum EBTChildIndex : byte
        {
           	FirstNode,
           	TaskNode,
           	EBTChildIndex_MAX,
        };

        // Enum AIModule.EBTBlackboardRestart
        public enum EBTBlackboardRestart : byte
        {
           	ValueChange,
           	ResultChange,
           	EBTBlackboardRestart_MAX,
        };

        // Enum AIModule.EBlackBoardEntryComparison
        public enum EBlackBoardEntryComparison : byte
        {
           	Equal,
           	NotEqual,
           	EBlackBoardEntryComparison_MAX,
        };

        // Enum AIModule.EPathExistanceQueryType
        public enum EPathExistanceQueryType : byte
        {
           	NavmeshRaycast2D,
           	HierarchicalQuery,
           	RegularPathFinding,
           	EPathExistanceQueryType_MAX,
        };

        // Enum AIModule.EBTParallelMode
        public enum EBTParallelMode : byte
        {
           	AbortBackground,
           	WaitForBackground,
           	EBTParallelMode_MAX,
        };

        // Enum AIModule.EEnvQueryTestClamping
        public enum EEnvQueryTestClamping : byte
        {
           	None,
           	SpecifiedValue,
           	FilterThreshold,
           	EEnvQueryTestClamping_MAX,
        };

        // Enum AIModule.EEnvDirection
        public enum EEnvDirection : byte
        {
           	TwoPoints,
           	Rotation,
           	EEnvDirection_MAX,
        };

        // Enum AIModule.EEnvTraceShape
        public enum EEnvTraceShape : byte
        {
           	Line,
           	Box,
           	Sphere,
           	Capsule,
           	EEnvTraceShape_MAX,
        };

        // Enum AIModule.EEnvQueryTrace
        public enum EEnvQueryTrace : byte
        {
           	None,
           	Navigation,
           	Geometry,
           	RejectGeometry,
           	EEnvQueryTrace_MAX,
        };

        // Enum AIModule.EEnvQueryParam
        public enum EEnvQueryParam : byte
        {
           	Float,
           	Int,
           	Bool,
           	EEnvQueryParam_MAX,
        };

        // Enum AIModule.EEnvQueryRunMode
        public enum EEnvQueryRunMode : byte
        {
           	SingleResult,
           	RandomBest5Pct,
           	RandomBest25Pct,
           	AllMatching,
           	RandomFromAllMatching,
           	EEnvQueryRunMode_MAX,
        };

        // Enum AIModule.EEnvTestScoreOperator
        public enum EEnvTestScoreOperator : byte
        {
           	AverageScore,
           	MinScore,
           	MaxScore,
           	EEnvTestScoreOperator_MAX,
        };

        // Enum AIModule.EEnvTestFilterOperator
        public enum EEnvTestFilterOperator : byte
        {
           	AllPass,
           	AnyPass,
           	EEnvTestFilterOperator_MAX,
        };

        // Enum AIModule.EEnvTestCost
        public enum EEnvTestCost : byte
        {
           	Low,
           	Medium,
           	High,
           	EEnvTestCost_MAX,
        };

        // Enum AIModule.EEnvTestWeight
        public enum EEnvTestWeight : byte
        {
           	None,
           	Square,
           	Inverse,
           	Unused,
           	Constant,
           	Skip,
           	EEnvTestWeight_MAX,
        };

        // Enum AIModule.EEnvTestScoreEquation
        public enum EEnvTestScoreEquation : byte
        {
           	Linear,
           	Square,
           	InverseLinear,
           	Constant,
           	EEnvTestScoreEquation_MAX,
        };

        // Enum AIModule.EEnvTestFilterType
        public enum EEnvTestFilterType : byte
        {
           	Minimum,
           	Maximum,
           	Range,
           	Match,
           	EEnvTestFilterType_MAX,
        };

        // Enum AIModule.EEnvTestPurpose
        public enum EEnvTestPurpose : byte
        {
           	Filter,
           	Score,
           	FilterAndScore,
           	EEnvTestPurpose_MAX,
        };

        // Enum AIModule.EPawnActionFailHandling
        public enum EPawnActionFailHandling : byte
        {
           	RequireSuccess,
           	IgnoreFailure,
           	EPawnActionFailHandling_MAX,
        };

        // Enum AIModule.EPawnSubActionTriggeringPolicy
        public enum EPawnSubActionTriggeringPolicy : byte
        {
           	CopyBeforeTriggering,
           	ReuseInstances,
           	EPawnSubActionTriggeringPolicy_MAX,
        };

        // Enum AIModule.EEnvTestDistance
        public enum EEnvTestDistance : byte
        {
           	Distance3D,
           	Distance2D,
           	DistanceZ,
           	EEnvTestDistance_MAX,
        };

        // Enum AIModule.EEnvTestDot
        public enum EEnvTestDot : byte
        {
           	Dot3D,
           	Dot2D,
           	EEnvTestDot_MAX,
        };

        // Enum AIModule.EEnvTestPathfinding
        public enum EEnvTestPathfinding : byte
        {
           	PathExist,
           	PathCost,
           	PathLength,
           	EEnvTestPathfinding_MAX,
        };

        // Enum AIModule.EEnvQueryHightlightMode
        public enum EEnvQueryHightlightMode : byte
        {
           	All,
           	Best5Pct,
           	Best25Pct,
           	EEnvQueryHightlightMode_MAX,
        };

        // Enum AIModule.EPawnActionMoveMode
        public enum EPawnActionMoveMode : byte
        {
           	UsePathfinding,
           	StraightLine,
           	EPawnActionMoveMode_MAX,
        };

        // Enum AIShips.EAIShipEncounterType
        public enum EAIShipEncounterType : byte
        {
           	Battle,
           	Passive,
           	Aggressive,
           	MAX,
           	EAIShipEncounterType_MAX,
        };

        // Enum AIShips.ECannonballIconType
        public enum ECannonballIconType : byte
        {
           	Normal,
           	Anchor,
           	Ballast,
           	Barrel,
           	Boogie,
           	Grog,
           	Limp,
           	Passive,
           	Rigging,
           	Rudder,
           	Silence,
           	Snake,
           	Snooze,
           	None,
           	Max,
           	ECannonballIconType_MAX,
        };

        // Enum AIShips.ESkellyFormIconType
        public enum ESkellyFormIconType : byte
        {
           	Normal,
           	Metal,
           	Plant,
           	Shadow,
           	None,
           	Max,
           	ESkellyFormIconType_MAX,
        };

        // Enum AIShips.EAIShipType
        public enum EAIShipType : byte
        {
           	Normal,
           	Hard,
           	EAIShipType_MAX,
        };

        // Enum AIShips.EAIShipPlayerTrackerType
        public enum EAIShipPlayerTrackerType : byte
        {
           	DefaultRadiusTracker,
           	CannonRadiusTracker,
           	OnShipTracker,
           	BelowDeckOfShipTracker,
           	EAIShipPlayerTrackerType_MAX,
        };

        // Enum AIShips.EAIShipDestructionReason
        public enum EAIShipDestructionReason : byte
        {
           	Defeated,
           	Despawn,
           	EAIShipDestructionReason_MAX,
        };

        // Enum Animation.ECharacterIKLimb
        public enum ECharacterIKLimb : byte
        {
           	None,
           	LeftHand,
           	RightHand,
           	LeftFoot,
           	RightFoot,
           	ECharacterIKLimb_MAX,
        };

        // Enum Animation.EAthenaAnimationSocketGroupCharacterSize
        public enum EAthenaAnimationSocketGroupCharacterSize : byte
        {
           	Default,
           	Large,
           	Thin,
           	EAthenaAnimationSocketGroupCharacterSize_MAX,
        };

        // Enum Animation.EAthenaAnimationSocketGroup
        public enum EAthenaAnimationSocketGroup : byte
        {
           	Male,
           	Female,
           	EAthenaAnimationSocketGroup_MAX,
        };

        // Enum Animation.ELimbIKSpace
        public enum ELimbIKSpace : byte
        {
           	Local,
           	World,
           	Character,
           	ELimbIKSpace_MAX,
        };

        // Enum Animation.ECustomAnimationMontageType
        public enum ECustomAnimationMontageType : byte
        {
           	OneShot,
           	LoopingOneShot,
           	LoopingStaged,
           	ECustomAnimationMontageType_MAX,
        };

        // Enum AnimGraphRuntime.EDrivenBoneModificationMode
        public enum EDrivenBoneModificationMode : byte
        {
           	AddToInput,
           	ReplaceComponent,
           	AddToRefPose,
           	EDrivenBoneModificationMode_MAX,
        };

        // Enum AnimGraphRuntime.EComponentType
        public enum EComponentType : byte
        {
           	None,
           	TranslationX,
           	TranslationY,
           	TranslationZ,
           	RotationX,
           	RotationY,
           	RotationZ,
           	Scale,
           	ScaleX,
           	ScaleY,
           	ScaleZ,
           	EComponentType_MAX,
        };

        // Enum AnimGraphRuntime.EInterpolationBlend
        public enum EInterpolationBlend : byte
        {
           	Linear,
           	Cubic,
           	Sinusoidal,
           	EaseInOutExponent2,
           	EaseInOutExponent3,
           	EaseInOutExponent4,
           	EaseInOutExponent5,
           	MAX,
           	EInterpolationBlend_MAX,
        };

        // Enum AnimGraphRuntime.EAxisOption
        public enum EAxisOption : byte
        {
           	X,
           	Y,
           	Z,
           	X_Neg,
           	Y_Neg,
           	Z_Neg,
           	EAxisOption_MAX,
        };

        // Enum AnimGraphRuntime.EBoneModificationMode
        public enum EBoneModificationMode : byte
        {
           	BMM_Ignore,
           	BMM_Replace,
           	BMM_Additive,
           	BMM_MAX,
        };

        // Enum AnimGraphRuntime.EBoneAxis
        public enum EBoneAxis : byte
        {
           	BA_X,
           	BA_Y,
           	BA_Z,
           	BA_MAX,
        };

        // Enum AthenaAIAbilities.EMeleeAwarenessCollisionHitResult
        public enum EMeleeAwarenessCollisionHitResult : byte
        {
           	None,
           	Static,
           	Character,
           	ToggleableCollider,
           	EMeleeAwarenessCollisionHitResult_MAX,
        };

        // Enum AthenaAI.EAIKnockbackStrengthType
        public enum EAIKnockbackStrengthType : byte
        {
           	Low,
           	Medium,
           	High,
           	EAIKnockbackStrengthType_MAX,
        };

        // Enum AthenaAI.EAIAbilityDamageIntervalCounterMode
        public enum EAIAbilityDamageIntervalCounterMode : byte
        {
           	DontBlock,
           	BlockWhenExecutingThisAbility,
           	BlockWhenExecutingAnyAbility,
           	EAIAbilityDamageIntervalCounterMode_MAX,
        };

        // Enum AthenaAI.EAIDebugColour
        public enum EAIDebugColour : byte
        {
           	Red,
           	Green,
           	Blue,
           	White,
           	Yellow,
           	Black,
           	EAIDebugColour_MAX,
        };

        // Enum AthenaAI.AISpawnRequestResult
        public enum AISpawnRequestResult : byte
        {
           	Incomplete,
           	Success,
           	FailedSpawnDenied,
           	FailedNoQuery,
           	FailedNoValidPos,
           	FailedLoadingPawnClass,
           	FailedLoadingItemDropComponentClass,
           	Cancelled,
           	AISpawnRequestResult_MAX,
        };

        // Enum AthenaAI.ClassLoadState
        public enum ClassLoadState : byte
        {
           	Incomplete,
           	Success,
           	NoLoad,
           	Failed,
           	ClassLoadState_MAX,
        };

        // Enum AthenaAI.AISpawnLocationSearchResult
        public enum AISpawnLocationSearchResult : byte
        {
           	Incomplete,
           	Success,
           	FailedNoQuery,
           	FailedNoValidPos,
           	Cancelled,
           	AISpawnLocationSearchResult_MAX,
        };

        // Enum AthenaAI.AISpawnRequestState
        public enum AISpawnRequestState : byte
        {
           	PreloadClasses,
           	AwaitingBegin,
           	DelayUntilNextCanSpawnCheck,
           	WaitForClassLoadsAndLocationResult,
           	DelayUntilNextLocationCheck,
           	Complete,
           	AISpawnRequestState_MAX,
        };

        // Enum AthenaAI.EAITargetWeaponFiringArcResult
        public enum EAITargetWeaponFiringArcResult : byte
        {
           	LeftOfArc,
           	RightOfArc,
           	WithinArc,
           	EAITargetWeaponFiringArcResult_MAX,
        };

        // Enum AthenaAI.ESirenEncounterState
        public enum ESirenEncounterState : byte
        {
           	Active,
           	Inactive,
           	ESirenEncounterState_MAX,
        };

        // Enum AthenaAI.EBlackboardIntValueComparisonType
        public enum EBlackboardIntValueComparisonType : byte
        {
           	Equal,
           	NotEqual,
           	GreaterThan,
           	LessThan,
           	GreaterThanEquals,
           	LessThanEquals,
           	EBlackboardIntValueComparisonType_MAX,
        };

        // Enum AthenaAI.EBlackboardValueCompositeType
        public enum EBlackboardValueCompositeType : byte
        {
           	And,
           	Or,
           	EBlackboardValueCompositeType_MAX,
        };

        // Enum AthenaAI.EBlackboardValueComparisonType
        public enum EBlackboardValueComparisonType : byte
        {
           	NearlyEqual,
           	NotNearlyEqual,
           	GreaterThan,
           	LessThan,
           	GreaterThanEquals,
           	LessThanEquals,
           	EBlackboardValueComparisonType_MAX,
        };

        // Enum AthenaAI.EFloatValueComparisonType
        public enum EFloatValueComparisonType : byte
        {
           	NearlyEqual,
           	NotNearlyEqual,
           	GreaterThan,
           	LessThan,
           	GreaterThanEquals,
           	LessThanEquals,
           	EFloatValueComparisonType_MAX,
        };

        // Enum AthenaAI.ECoralShieldVFXRole
        public enum ECoralShieldVFXRole : byte
        {
           	None,
           	Caster,
           	Receiver,
           	ECoralShieldVFXRole_MAX,
        };

        // Enum AthenaAI.ECoralShieldVFXState
        public enum ECoralShieldVFXState : byte
        {
           	Off,
           	Starting,
           	On,
           	Ending,
           	ECoralShieldVFXState_MAX,
        };

        // Enum AthenaAI.ETraceDirection
        public enum ETraceDirection : byte
        {
           	ItemToContext,
           	ContextToItem,
           	ETraceDirection_MAX,
        };

        // Enum AthenaAI.EAIThreatLevel
        public enum EAIThreatLevel : byte
        {
           	NoDanger,
           	Nervous,
           	Threatened,
           	Calm,
           	EAIThreatLevel_MAX,
        };

        // Enum AthenaAI.EOceanCrawlerAbilityAudioKey
        public enum EOceanCrawlerAbilityAudioKey : byte
        {
           	NONE,
           	Hermit_Start_BurrowingLoop,
           	Hermit_Stop_BurrowingLoop,
           	Hermit_Play_BurrowDown_OneShot,
           	Hermit_Play_BurrowEmerge_OneShot,
           	Hermit_Play_BurrowHealTarget_OneShot,
           	Hermit_Play_SporeBreath_OneShot,
           	Hermit_Play_BullRushChargeUp_OneShot,
           	Hermit_Play_BullRushChargeGo_OneShot,
           	Hermit_Play_BullRushStaticImpact_OneShot,
           	Hermit_Play_BullRushCharacterImpact_OneShot,
           	Crab_Play_PummelWindBack_OneShot,
           	Crab_Play_PummelImpact_OneShot,
           	Crab_Play_CoralShieldStart_OneShot,
           	Crab_Play_CoralShieldEnd_OneShot,
           	Crab_Play_CoralShieldInterrupted_OneShot,
           	Crab_Play_CoralShieldApplied_OneShot,
           	Crab_Play_CoralShieldStopApplying_OneShot,
           	Eel_Play_EelelectricShieldStartCharge_OneShot,
           	Eel_Play_EelelectricShieldCast_OneShot,
           	Eel_Play_EelelectricShieldInterrupted_OneShot,
           	Eel_Play_EelelectricShieldAppliedToTarget_OneShot,
           	Eel_Play_EelelectricShieldHitToChain_OneShot,
           	Eel_Play_EelelectricShieldFinishedOnTarget_OneShot,
           	Eel_Play_EelElectricEelThrowCharge_OneShot,
           	EOceanCrawlerAbilityAudioKey_MAX,
        };

        // Enum AthenaAI.EAIDialogueState
        public enum EAIDialogueState : byte
        {
           	Inactive,
           	Passive,
           	Alerted,
           	Dead,
           	EAIDialogueState_MAX,
        };

        // Enum AthenaAI.EBountySpawnerAudioState
        public enum EBountySpawnerAudioState : byte
        {
           	None,
           	Action,
           	Anticipation,
           	EBountySpawnerAudioState_MAX,
        };

        // Enum AthenaAI.EBountySpawnerType
        public enum EBountySpawnerType : byte
        {
           	Default,
           	BountyQuest,
           	BountyFort,
           	SeaFort,
           	EBountySpawnerType_MAX,
        };

        // Enum AthenaAI.EBountyTargetRank
        public enum EBountyTargetRank : byte
        {
           	Captain,
           	Crew,
           	EBountyTargetRank_MAX,
        };

        // Enum AthenaAI.EBountyTargetGender
        public enum EBountyTargetGender : byte
        {
           	Male,
           	Female,
           	EBountyTargetGender_MAX,
        };

        // Enum AthenaAI.EFaunaInWaterState
        public enum EFaunaInWaterState : byte
        {
           	NotInWater,
           	FloatingOnSurface,
           	Underwater,
           	EFaunaInWaterState_MAX,
        };

        // Enum AthenaAI.EFaunaCratedState
        public enum EFaunaCratedState : byte
        {
           	NotInCrate,
           	InProxyCrate,
           	InWieldedCrate,
           	EFaunaCratedState_MAX,
        };

        // Enum AthenaAI.ESwimRotationMode
        public enum ESwimRotationMode : byte
        {
           	FaceMovement,
           	UprightStrafe,
           	LongwaysStrafe,
           	ESwimRotationMode_MAX,
        };

        // Enum AthenaAI.EArcToTargetDirection
        public enum EArcToTargetDirection : byte
        {
           	VelocityOrRotation,
           	VelocityOrRotation2D,
           	InversedVelocityOrRotation,
           	InversedVelocityOrRotation2D,
           	Up,
           	Down,
           	GoalDirection2D,
           	EArcToTargetDirection_MAX,
        };

        // Enum AthenaAI.EArcFollowingMode
        public enum EArcFollowingMode : byte
        {
           	SharkArc,
           	Simple3DArc,
           	EArcFollowingMode_MAX,
        };

        // Enum AthenaAI.ESwimmingLineOfSightTest
        public enum ESwimmingLineOfSightTest : byte
        {
           	None,
           	Lazy,
           	Immediate,
           	ESwimmingLineOfSightTest_MAX,
        };

        // Enum AthenaAI.ESwimmingSyncMode
        public enum ESwimmingSyncMode : byte
        {
           	Synchronous,
           	Asynchronous,
           	ESwimmingSyncMode_MAX,
        };

        // Enum AthenaAI.ESwimmingArcMode
        public enum ESwimmingArcMode : byte
        {
           	ArcToTarget,
           	SwimDirectlyToTarget,
           	SwimDirectlyDown,
           	ESwimmingArcMode_MAX,
        };

        // Enum AthenaAI.ESwimmingGoalCheckMode
        public enum ESwimmingGoalCheckMode : byte
        {
           	Goal2D,
           	Goal3D,
           	ESwimmingGoalCheckMode_MAX,
        };

        // Enum AthenaAI.ETaskReaction
        public enum ETaskReaction : byte
        {
           	Ignore,
           	SucceedTask,
           	FailTask,
           	ETaskReaction_MAX,
        };

        // Enum AthenaAI.ETinySharkDespawnReason
        public enum ETinySharkDespawnReason : byte
        {
           	Invalid,
           	Defeated,
           	TimedOut,
           	ETinySharkDespawnReason_MAX,
        };

        // Enum AthenaAI.ETinySharkActiveState
        public enum ETinySharkActiveState : byte
        {
           	TrackingTarget,
           	WaitingForTarget,
           	RepositionToTarget,
           	WaitingForRespawn,
           	ETinySharkActiveState_MAX,
        };

        // Enum AthenaAI.ETinySharkState
        public enum ETinySharkState : byte
        {
           	Inactive,
           	Spawning,
           	Active,
           	Defeated,
           	Despawning,
           	WaitingForItemsToFinishSpawning,
           	ETinySharkState_MAX,
        };

        // Enum AthenaAI.ETinySharkTypes
        public enum ETinySharkTypes : byte
        {
           	None,
           	TheHuneringOne,
           	TheCrestedQueen,
           	TheShadowmaw,
           	TheAncientTerror,
           	TheShroudedGhost,
           	ETinySharkTypes_MAX,
        };

        // Enum AthenaAI.EDebugPetStateDescriptor
        public enum EDebugPetStateDescriptor : byte
        {
           	NoState,
           	Hangout_Attached,
           	Hangout_MoveToLocation,
           	Reacting,
           	Pursuit,
           	Idle,
           	Follow,
           	Eating,
           	Scared,
           	ForcedIdle,
           	EDebugPetStateDescriptor_MAX,
        };

        // Enum AthenaAI.EPetSize
        public enum EPetSize : byte
        {
           	Small,
           	Medium,
           	Large,
           	EPetSize_MAX,
        };

        // Enum AthenaAI.EAthenaAISpawnType
        public enum EAthenaAISpawnType : byte
        {
           	SpawnOnLand,
           	SpawnOnShip,
           	SpawnSummoned,
           	SpawnBoarding,
           	Num,
           	EAthenaAISpawnType_MAX,
        };

        // Enum AthenaEngine.EPlayModeVariant
        public enum EPlayModeVariant : byte
        {
           	Normal,
           	Creator,
           	Invalid,
           	MAX,
           	EPlayModeVariant_MAX,
        };

        // Enum AthenaEngine.EPlayMode
        public enum EPlayMode : byte
        {
           	Adventure,
           	Contest,
           	Tutorial,
           	NotSelectedYet,
           	MAX,
           	Invalid,
           	EPlayMode_MAX,
        };

        // Enum AthenaInputMkII.ELeftStickScalarReason
        public enum ELeftStickScalarReason : byte
        {
           	Limping,
           	Pacing,
           	NumReasons,
           	ELeftStickScalarReason_MAX,
        };

        // Enum AthenaMediaPlaybackGameLayer.EAthenaMediaState
        public enum EAthenaMediaState : byte
        {
           	Closed,
           	Opened,
           	Error,
           	Buffering,
           	Playing,
           	Paused,
           	Ended,
           	EAthenaMediaState_MAX,
        };

        // Enum AthenaObjectLinkage.EAddLinkResult
        public enum EAddLinkResult : byte
        {
           	Success_Set,
           	Success_Pending,
           	Failed_SourceEndpointIdInvalid,
           	Failed_TargetEndpointIdInvalid,
           	Failed_CoincidentEndpointIds,
           	Failed_Duplicate,
           	EAddLinkResult_MAX,
        };

        // Enum AthenaObjectLinkage.EAddEndpointResult
        public enum EAddEndpointResult : byte
        {
           	Success,
           	Failed_InvalidInstance,
           	Failed_InvalidId,
           	Failed_DuplicateId,
           	Failed_DoesntImplementEndpointInterface,
           	EAddEndpointResult_MAX,
        };

        // Enum AthenaProjectiles.EProjectileFiredFrom
        public enum EProjectileFiredFrom : byte
        {
           	Cannon,
           	Character,
           	DeepSeaCannon,
           	DeepSeaCharacter,
           	RowboatCannon,
           	SeaFortCannon,
           	MAX,
           	EProjectileFiredFrom_MAX,
        };

        // Enum AthenaRigging.EInstancedRopeParameterType
        public enum EInstancedRopeParameterType : byte
        {
           	RPT_Start,
           	RPT_End,
           	RPT_Roughness,
           	RPT_Thickness,
           	RPT_UVScale,
           	RPT_UVOffset,
           	RPT_Length,
           	RPT_SwingTime,
           	RPT_WindAmount,
           	RPT_CatenaryScale,
           	RPT_CatenaryX0,
           	RPT_CatenaryY0,
           	RPT_CatenaryXYDistance,
           	RPT_IsCatenary,
           	RPT_MAX,
        };

        // Enum Athena.EFlameOfFateType
        public enum EFlameOfFateType : byte
        {
           	Default,
           	Cursed,
           	DiedByShark,
           	DiedByVolcano,
           	DiedBySkeleton,
           	DiedByLightning,
           	DiedByVenom,
           	DiedByPlayer,
           	MAX,
           	EFlameOfFateType_MAX,
        };

        // Enum Athena.EHealthChangedReason
        public enum EHealthChangedReason : byte
        {
           	NoChange,
           	Test,
           	Reset,
           	CannonProjectile,
           	CannonBallSplashDamage,
           	FallDamage,
           	HealedFromFood,
           	Drowning,
           	DamagedBySwimmingCreature,
           	StruckByLightning,
           	Blunderbuss_Default,
           	Pistol_Default,
           	EyeOfReach_Default,
           	Cutlass,
           	GunpowderBarrelExplosion,
           	IngestedByKrakenTentacle,
           	PowerSlammedByKrakenTentacle,
           	StarvedToDeath,
           	SkeletonFormsHeal,
           	Venom,
           	Fire,
           	Emote,
           	TinySharkBite,
           	SunkenCurseSelfHeal,
           	SunkenCurseDamage,
           	TinySharkRespawn,
           	Lava,
           	Boiling,
           	StateTransfer,
           	Fragile,
           	Rainfall,
           	Submerged,
           	LiquidProjectile,
           	Dry,
           	StrainDamage,
           	VolcanoInstantKill,
           	VolcanicRock,
           	DevilsShroud,
           	Regeneration,
           	HarpoonProjectile,
           	Mechanism,
           	KnockbackAIAbility,
           	SpikePit,
           	ChestOfRage,
           	Scalded,
           	Geyser,
           	Flamethrower,
           	AshenLordFireBreath,
           	AshenWindsSkull,
           	AshenWindsSkullCharge,
           	Revive,
           	HealedByAbility,
           	Shocked,
           	Siren,
           	KrakenBite,
           	Firework,
           	Sleeping,
           	DestroyAllShipAI,
           	LighthouseBeam,
           	TunnelOfTheDamned,
           	MAX,
           	EHealthChangedReason_MAX,
        };

        // Enum Athena.EShipPartCustomizationErrorCode
        public enum EShipPartCustomizationErrorCode : byte
        {
           	AlreadyInProgress,
           	FailedToCustomize,
           	InvalidParameters,
           	EShipPartCustomizationErrorCode_MAX,
        };

        // Enum Athena.ERequestState
        public enum ERequestState : byte
        {
           	Invalid,
           	Waiting,
           	Complete,
           	Timeout,
           	Cancelled,
           	ERequestState_MAX,
        };

        // Enum Athena.EPointSelectionMethod
        public enum EPointSelectionMethod : byte
        {
           	GetRandom,
           	GetFirst,
           	GetClosest,
           	EPointSelectionMethod_MAX,
        };

        // Enum Athena.ESpaceType
        public enum ESpaceType : byte
        {
           	WorldSpace,
           	LocalSpace,
           	ESpaceType_MAX,
        };

        // Enum Athena.EWaterState
        public enum EWaterState : byte
        {
           	Empty,
           	Transitioning,
           	Full,
           	EWaterState_MAX,
        };

        // Enum Athena.EProjectileCollisionResponse
        public enum EProjectileCollisionResponse : byte
        {
           	Ignore,
           	Block,
           	EProjectileCollisionResponse_MAX,
        };

        // Enum Athena.ESprintLockReason
        public enum ESprintLockReason : byte
        {
           	WieldedItem,
           	WieldedItemAction,
           	Environment,
           	ESprintLockReason_MAX,
        };

        // Enum Athena.ESwimAttackableType
        public enum ESwimAttackableType : byte
        {
           	TakesDamage,
           	SmallItem,
           	LargeItem,
           	ESwimAttackableType_MAX,
        };

        // Enum Athena.EAllianceStatus
        public enum EAllianceStatus : byte
        {
           	IsInAlliance,
           	IsNotInAlliance,
           	EAllianceStatus_MAX,
        };

        // Enum Athena.ENPCCustomAnimationState
        public enum ENPCCustomAnimationState : byte
        {
           	None,
           	InOneShot,
           	InContinuousIn,
           	InContinuousLoopA,
           	InContinuousLoopB,
           	InContinuousOut,
           	ENPCCustomAnimationState_MAX,
        };

        // Enum Athena.EAthenaNPCObjectSlot
        public enum EAthenaNPCObjectSlot : byte
        {
           	Slot_2,
           	Slot_3,
           	Slot_4,
           	Slot_5,
           	Slot_6,
           	Slot_7,
           	Slot_8,
           	Slot_9,
           	Slot_10,
           	Slot_11,
           	Slot_MAX,
        };

        // Enum Athena.EAthenaNPCSpawnHand
        public enum EAthenaNPCSpawnHand : byte
        {
           	Left,
           	Right,
           	EAthenaNPCSpawnHand_MAX,
        };

        // Enum Athena.EAnimNotifyUnderwaterMode
        public enum EAnimNotifyUnderwaterMode : byte
        {
           	AutoDetect,
           	AlwaysUnder,
           	AlwaysAbove,
           	EAnimNotifyUnderwaterMode_MAX,
        };

        // Enum Athena.EMeleeSpecialState
        public enum EMeleeSpecialState : byte
        {
           	None,
           	Lunge,
           	Knockback,
           	Stunned,
           	Dodge,
           	MAX,
           	EMeleeSpecialState_MAX,
        };

        // Enum Athena.ESkeletonShipCaptainDockedAnimationState
        public enum ESkeletonShipCaptainDockedAnimationState : byte
        {
           	None,
           	Taunt,
           	Ram,
           	RamImpact,
           	ESkeletonShipCaptainDockedAnimationState_MAX,
        };

        // Enum Athena.ESkeletonActiveAnimSystem
        public enum ESkeletonActiveAnimSystem : byte
        {
           	Sensing,
           	EmoteAction,
           	ESkeletonActiveAnimSystem_MAX,
        };

        // Enum Athena.ESkeletonEmoteActionState
        public enum ESkeletonEmoteActionState : byte
        {
           	None,
           	Taunt,
           	Cheer,
           	ESkeletonEmoteActionState_MAX,
        };

        // Enum Athena.ESkeletonSensingState
        public enum ESkeletonSensingState : byte
        {
           	None,
           	InitialReaction,
           	Searching,
           	AlertingOthers,
           	Pursuit,
           	ESkeletonSensingState_MAX,
        };

        // Enum Athena.EKnockbackAnimDirection
        public enum EKnockbackAnimDirection : byte
        {
           	Forwards,
           	Backwards,
           	EKnockbackAnimDirection_MAX,
        };

        // Enum Athena.EStunAnimationType
        public enum EStunAnimationType : byte
        {
           	None,
           	Normal,
           	ShadowSkeletonLightExposure,
           	SkeletonDrunk,
           	SkeletonDance,
           	SkeletonSleep,
           	EStunAnimationType_MAX,
        };

        // Enum Athena.EArmOverlayState
        public enum EArmOverlayState : byte
        {
           	Idle,
           	Locomotion,
           	Swimming,
           	Turning,
           	JumpingStart,
           	JumpingCycle,
           	JumpingPreImpact,
           	JumpingLandLight,
           	Equipping,
           	UnEquipping,
           	OneShotAction,
           	ContinuousActionIn,
           	ContinuousActionCycle,
           	ContinuousActionOut,
           	ContinuousActionLocomotion,
           	ContinuousActionJumpStart,
           	ContinuousActionJumpCycle,
           	ContinuousActionJumpPreImpact,
           	ContinuousActionJumpLandLight,
           	ContinuousActionSwimming,
           	ComplexOneShotWarmUp,
           	ComplexOneShotAction,
           	ComplexOneShotRecover,
           	BlockingInto,
           	BlockingLocomotion,
           	BlockingFeedbackA,
           	BlockingFeedbackB,
           	BlockingOutOf,
           	Force_FullBody,
           	Force_UpperBody,
           	Force_2H,
           	EArmOverlayState_MAX,
        };

        // Enum Athena.EOceanCrawlerAIType
        public enum EOceanCrawlerAIType : byte
        {
           	OceanCrawler,
           	Crab,
           	Eel,
           	Hermit,
           	EOceanCrawlerAIType_MAX,
        };

        // Enum Athena.ECharacterSwimmingMode
        public enum ECharacterSwimmingMode : byte
        {
           	Surface,
           	Submerged,
           	Total,
           	ECharacterSwimmingMode_MAX,
        };

        // Enum Athena.EAICharacterMaxSpeedModificationReason
        public enum EAICharacterMaxSpeedModificationReason : byte
        {
           	SkeletonFormsConstant,
           	SkeletonFormsEffects,
           	SkeletonLimpCurse,
           	EAICharacterMaxSpeedModificationReason_MAX,
        };

        // Enum Athena.EVoyageDisplayState
        public enum EVoyageDisplayState : byte
        {
           	Default,
           	Proposed,
           	Locked,
           	EVoyageDisplayState_MAX,
        };

        // Enum Athena.EOverlapType
        public enum EOverlapType : byte
        {
           	PhysX,
           	SimpleOverlaps,
           	Ticking,
           	EOverlapType_MAX,
        };

        // Enum Athena.ECharacterFootImpactType
        public enum ECharacterFootImpactType : byte
        {
           	None,
           	Walk,
           	Jump,
           	Pace,
           	ECharacterFootImpactType_MAX,
        };

        // Enum Athena.EFlameColourType
        public enum EFlameColourType : byte
        {
           	Light,
           	FX,
           	Glow,
           	Flame,
           	EFlameColourType_MAX,
        };

        // Enum Athena.EQuestBookPageRenderingMode
        public enum EQuestBookPageRenderingMode : byte
        {
           	NoPagesRendered,
           	DrawLeftPageAsCurrentOnly,
           	DrawLeftPageAsPreviousAndRightPageAsCurrent,
           	DrawLeftPageAsCurrentAndRightPageAsNext,
           	EQuestBookPageRenderingMode_MAX,
        };

        // Enum Athena.EBT_ShipOwnership
        public enum EBT_ShipOwnership : byte
        {
           	Any,
           	Crew,
           	Alliance,
           	AI,
           	EBT_MAX,
        };

        // Enum Athena.ECannonInteractionState
        public enum ECannonInteractionState : byte
        {
           	AllInteractions,
           	AimingEnabledLoadingDisabled,
           	LoadingEnabledAimingDisabled,
           	NoInteractions,
           	ECannonInteractionState_MAX,
        };

        // Enum Athena.EShipCurseTag
        public enum EShipCurseTag : byte
        {
           	None,
           	Ballast,
           	Barrel,
           	Capstan,
           	Helm,
           	Rigging,
           	Peace,
           	EShipCurseTag_MAX,
        };

        // Enum Athena.ECurseTag
        public enum ECurseTag : byte
        {
           	None,
           	ToggleInteractionsForCapstan,
           	ToggleInteractionsForShipStorageContainers,
           	ToggleInteractionsForRigging,
           	ToggleInteractionsForShipCannons,
           	ToggleLockOnWheel,
           	ECurseTag_MAX,
        };

        // Enum Athena.EShipSurfacingState
        public enum EShipSurfacingState : byte
        {
           	SurfaceSailing,
           	Surfacing,
           	Diving,
           	UnderwaterSailing,
           	EShipSurfacingState_MAX,
        };

        // Enum Athena.EContainerType
        public enum EContainerType : byte
        {
           	None,
           	Bucket,
           	Stomach,
           	Kraken,
           	Total,
           	EContainerType_MAX,
        };

        // Enum Athena.EThrowableLiquidType
        public enum EThrowableLiquidType : byte
        {
           	Empty,
           	Water,
           	Vomit,
           	BoilingWater,
           	Total,
           	EThrowableLiquidType_MAX,
        };

        // Enum Athena.EBucketProjectileDestination
        public enum EBucketProjectileDestination : byte
        {
           	Ahead,
           	AtWielder,
           	Max,
           	EBucketProjectileDestination_MAX,
        };

        // Enum Athena.EBucketState
        public enum EBucketState : byte
        {
           	Idle,
           	Scooping,
           	Throwing,
           	DrenchingWielder,
           	Max,
           	Pad,
           	EBucketState_MAX,
        };

        // Enum Athena.ELocationGeneratorSampleType
        public enum ELocationGeneratorSampleType : byte
        {
           	None,
           	Usable,
           	Unusable_NoContact,
           	Unusable_SurfaceType,
           	Unusable_Proximity,
           	Unusable_Slope,
           	Unusable_BelowWater,
           	ELocationGeneratorSampleType_MAX,
        };

        // Enum Athena.EBurrowEruptState
        public enum EBurrowEruptState : byte
        {
           	Dormant,
           	Erupt,
           	EBurrowEruptState_MAX,
        };

        // Enum Athena.EHasBeenWieldedState
        public enum EHasBeenWieldedState : byte
        {
           	InitialState,
           	HasNotBeenWielded,
           	HasBeenWielded,
           	EHasBeenWieldedState_MAX,
        };

        // Enum Athena.ECarouselPirateBodyshapeDirection
        public enum ECarouselPirateBodyshapeDirection : byte
        {
           	None,
           	N,
           	NW,
           	W,
           	SW,
           	S,
           	SE,
           	E,
           	NE,
           	ECarouselPirateBodyshapeDirection_MAX,
        };

        // Enum Athena.EFogBankType
        public enum EFogBankType : byte
        {
           	Default,
           	Haunted,
           	EFogBankType_MAX,
        };

        // Enum Athena.EPlayerMusicState
        public enum EPlayerMusicState : byte
        {
           	InCave,
           	InPuzzleVault,
           	InsideShip,
           	Fishing,
           	KrakenEncounter,
           	MusicZone_PriorityHigh,
           	MusicZone_PriorityMed,
           	MusicZone_PriorityLow,
           	NoMusicState,
           	OnBountyQuestPreAction,
           	OnBountyQuestAction,
           	OnBountyFortAnticipation,
           	OnBountyFortPreAction,
           	OnBountyFortAction,
           	OnSeaFortAnticipation,
           	OnSeaFortPreAction,
           	OnSeaFortAction,
           	OnIsland,
           	OnIslandNearCompany,
           	OutAtSea,
           	ServerMigration,
           	Shipwreck,
           	SkellyShipEncounter,
           	SkellyShipEmergentEncounter,
           	TinySharkEncounter,
           	TinySharkEncounterSpecial,
           	UnderWater,
           	InDeepSeaRegion,
           	InvasionDive,
           	InvasionEmerge,
           	EnemyAIOnShipEncounter,
           	EPlayerMusicState_MAX,
        };

        // Enum Athena.ECharacterSocketCollisionResultType
        public enum ECharacterSocketCollisionResultType : byte
        {
           	CollisionsOnly,
           	NonCollisionsOnly,
           	CollisionsAndNonCollisions,
           	ECharacterSocketCollisionResultType_MAX,
        };

        // Enum Athena.ECharacterSocketCollisionTraceType
        public enum ECharacterSocketCollisionTraceType : byte
        {
           	WorldUp,
           	WorldDown,
           	WorldLeft,
           	WorldRight,
           	TravelForwards,
           	TravelBackwards,
           	ECharacterSocketCollisionTraceType_MAX,
        };

        // Enum Athena.ERageState
        public enum ERageState : byte
        {
           	Disabled,
           	Dormant,
           	RageBuilding,
           	Steaming,
           	OnFire,
           	ERageState_MAX,
        };

        // Enum Athena.EUIInputFocusType
        public enum EUIInputFocusType : byte
        {
           	None,
           	MouseCaptureOnly,
           	FullCapture,
           	EUIInputFocusType_MAX,
        };

        // Enum Athena.EVirtualKeyboardTextUsage
        public enum EVirtualKeyboardTextUsage : byte
        {
           	TextChat,
           	PetName,
           	GenericText,
           	EVirtualKeyboardTextUsage_MAX,
        };

        // Enum Athena.EScoreReason
        public enum EScoreReason : byte
        {
           	None,
           	SoldChest,
           	SoldStolenChest,
           	CrewShipSunk,
           	DownedOpponent,
           	KilledOpponent,
           	ChestDugUp,
           	MastHit,
           	CapstanHit,
           	WheelHit,
           	HullHit,
           	EScoreReason_MAX,
        };

        // Enum Athena.ESpecialEvents
        public enum ESpecialEvents : byte
        {
           	None,
           	StartBlinds,
           	Leaderboard,
           	TavernCeremony,
           	ESpecialEvents_MAX,
        };

        // Enum Athena.EContestStagePivot
        public enum EContestStagePivot : byte
        {
           	Beginning,
           	Quater,
           	HalfTime,
           	ThirdQuater,
           	End,
           	EContestStagePivot_MAX,
        };

        // Enum Athena.EContestEventStages
        public enum EContestEventStages : byte
        {
           	Staging,
           	Contest,
           	PostContest,
           	Reward,
           	EContestEventStages_MAX,
        };

        // Enum Athena.EMuteState
        public enum EMuteState : byte
        {
           	NotMuted,
           	VoiceMuted,
           	ChatMuted,
           	VoiceAndChatMuted,
           	NonVerbalMuted,
           	VoiceAndNonVerbalMuted,
           	ChatAndNonVerbalMuted,
           	AllMuted,
           	EMuteState_MAX,
        };

        // Enum Athena.ECrewSpawnState
        public enum ECrewSpawnState : byte
        {
           	Invalid,
           	Onboarding,
           	AtDock,
           	OnShip,
           	AtSinkLocation,
           	AtMermaid,
           	InBrig,
           	InHideout,
           	InContestTavern,
           	AtProgressionLocation,
           	ECrewSpawnState_MAX,
        };

        // Enum Athena.ESirenTridentProjectileState
        public enum ESirenTridentProjectileState : byte
        {
           	None,
           	Small,
           	Medium,
           	Large,
           	MAX,
           	ESirenTridentProjectileState_MAX,
        };

        // Enum Athena.EProjectileLauncherMechanismTargetMode
        public enum EProjectileLauncherMechanismTargetMode : byte
        {
           	TargetLocations,
           	ShipsAndWatercraft,
           	EProjectileLauncherMechanismTargetMode_MAX,
        };

        // Enum Athena.EDamageTargetType
        public enum EDamageTargetType : byte
        {
           	Player,
           	Ship,
           	EDamageTargetType_MAX,
        };

        // Enum Athena.EDiggingState
        public enum EDiggingState : byte
        {
           	Initial,
           	BeingDug,
           	WaitingForPickup,
           	EDiggingState_MAX,
        };

        // Enum Athena.EDrunkennessType
        public enum EDrunkennessType : byte
        {
           	FromDrinkingAlcohol,
           	FromDrunkenChest,
           	NumTypes,
           	EDrunkennessType_MAX,
        };

        // Enum Athena.EConeWeightingMethod
        public enum EConeWeightingMethod : byte
        {
           	Weighted,
           	Absolute,
           	EConeWeightingMethod_MAX,
        };

        // Enum Athena.EShipHullDamageType
        public enum EShipHullDamageType : byte
        {
           	Landscape,
           	RammingSpur,
           	EShipHullDamageType_MAX,
        };

        // Enum Athena.EFogState
        public enum EFogState : byte
        {
           	NotSetUpYet,
           	SetUp,
           	FadingIn,
           	Active,
           	FadingOut,
           	SeekingNewValue,
           	EFogState_MAX,
        };

        // Enum Athena.EGlintCondition
        public enum EGlintCondition : byte
        {
           	OnShip,
           	Floating,
           	SpawnedAsSunkenSalvage,
           	SpawnedAsTallTaleQuestItem,
           	SpawnedAsTreasureVaultReward,
           	EGlintCondition_MAX,
        };

        // Enum Athena.EHarpoonLauncherReelingState
        public enum EHarpoonLauncherReelingState : byte
        {
           	NotReeling,
           	ReelingIn,
           	ReelingLocked,
           	EHarpoonLauncherReelingState_MAX,
        };

        // Enum Athena.EHarpoonLauncherRetractReason
        public enum EHarpoonLauncherRetractReason : byte
        {
           	Default,
           	PlayerInstigated,
           	TetherLengthExeeded,
           	EHarpoonLauncherRetractReason_MAX,
        };

        // Enum Athena.EHarpoonProjectileState
        public enum EHarpoonProjectileState : byte
        {
           	Docked,
           	InFlight,
           	Attached,
           	EHarpoonProjectileState_MAX,
        };

        // Enum Athena.EHoleState
        public enum EHoleState : byte
        {
           	Alive,
           	Dead,
           	EHoleState_MAX,
        };

        // Enum Athena.ELeakEffectState
        public enum ELeakEffectState : byte
        {
           	Off,
           	LeakingWater,
           	LeakingWaterPlugged,
           	LeakingBubbles,
           	LeakingBubblesPlugged,
           	ELeakEffectState_MAX,
        };

        // Enum Athena.ELeakState
        public enum ELeakState : byte
        {
           	Open,
           	Plugged,
           	ELeakState_MAX,
        };

        // Enum Athena.EShipLeakerUpdateType
        public enum EShipLeakerUpdateType : byte
        {
           	Iterative,
           	ForceAll,
           	EShipLeakerUpdateType_MAX,
        };

        // Enum Athena.EVaultAudioSettings
        public enum EVaultAudioSettings : byte
        {
           	Default,
           	NoWater,
           	NoMusic,
           	TreasureVault,
           	NoMusicOrCompletionSounds,
           	EVaultAudioSettings_MAX,
        };

        // Enum Athena.EInventoryManipulatorAutoEquipPolicy
        public enum EInventoryManipulatorAutoEquipPolicy : byte
        {
           	LastIn,
           	MatchingItemDescIfPossible,
           	RawMeatLast,
           	EInventoryManipulatorAutoEquipPolicy_MAX,
        };

        // Enum Athena.EActionQueueEntryStatus
        public enum EActionQueueEntryStatus : byte
        {
           	Unset,
           	Set,
           	Playing,
           	Completed,
           	EActionQueueEntryStatus_MAX,
        };

        // Enum Athena.EProjectileSpawnedState
        public enum EProjectileSpawnedState : byte
        {
           	NotSpawned,
           	Spawned,
           	EProjectileSpawnedState_MAX,
        };

        // Enum Athena.ELightningHitTarget
        public enum ELightningHitTarget : byte
        {
           	RandomLocation,
           	Player,
           	NearPlayer,
           	Ship,
           	ShipNearMiss,
           	HighPriorityPlayer,
           	EnemyGhostShip,
           	EnemyGhostShipNearMiss,
           	Total,
           	ELightningHitTarget_MAX,
        };

        // Enum Athena.ELoadoutPersistence
        public enum ELoadoutPersistence : byte
        {
           	Temporary,
           	Persistent,
           	ELoadoutPersistence_MAX,
        };

        // Enum Athena.ELPVAdaptationType
        public enum ELPVAdaptationType : byte
        {
           	Full,
           	CutTranslation,
           	None,
           	ELPVAdaptationType_MAX,
        };

        // Enum Athena.EForceBillowingState
        public enum EForceBillowingState : byte
        {
           	NoOverride,
           	ForceFullyBillowed,
           	ForceNoBillow,
           	EForceBillowingState_MAX,
        };

        // Enum Athena.EContestType
        public enum EContestType : byte
        {
           	Race,
           	PVP,
           	PVQ,
           	MAX,
           	EContestType_MAX,
        };

        // Enum Athena.EMatchmakingServerType
        public enum EMatchmakingServerType : byte
        {
           	Adventure,
           	Contest,
           	EMatchmakingServerType_MAX,
        };

        // Enum Athena.EPlayerAbandonedReason
        public enum EPlayerAbandonedReason : byte
        {
           	None,
           	NoCrewShip,
           	FarFromShipAndOnLand,
           	FarFromShipInWater,
           	OnShip,
           	CloseEnoughToCrewShip,
           	OnWatercraft,
           	CloseEnoughToWatercraft,
           	InTheDeepSea,
           	EPlayerAbandonedReason_MAX,
        };

        // Enum Athena.EPlayerAbandoned
        public enum EPlayerAbandoned : byte
        {
           	Yes,
           	No,
           	DontKnow,
           	EPlayerAbandoned_MAX,
        };

        // Enum Athena.EWalletBalanceStatus
        public enum EWalletBalanceStatus : byte
        {
           	Unknown,
           	Valid,
           	EWalletBalanceStatus_MAX,
        };

        // Enum Athena.EOverlapShapeType
        public enum EOverlapShapeType : byte
        {
           	Mesh,
           	Box,
           	EOverlapShapeType_MAX,
        };

        // Enum Athena.EMusicalTriggerState
        public enum EMusicalTriggerState : byte
        {
           	NotActive,
           	PreparingToActivateMechanism,
           	MechanismActivated,
           	EMusicalTriggerState_MAX,
        };

        // Enum Athena.ENonVerbalRadialCategory
        public enum ENonVerbalRadialCategory : byte
        {
           	QuickAccess,
           	Strategy,
           	WieldedItem,
           	ControlledObject,
           	Invalid,
           	ENonVerbalRadialCategory_MAX,
        };

        // Enum Athena.ENPCIdleVariantType
        public enum ENPCIdleVariantType : byte
        {
           	Standard,
           	Inactive,
           	Interact,
           	ENPCIdleVariantType_MAX,
        };

        // Enum Athena.ETutorialDialogOption
        public enum ETutorialDialogOption : byte
        {
           	None,
           	ReturnToStrangerCompanyVoyageDialogOption,
           	ReturnToStrangerTallTaleDialogOption,
           	ReturnToStrangerGoItAloneDialogOption,
           	ETutorialDialogOption_MAX,
        };

        // Enum Athena.ETutorialDialogStep
        public enum ETutorialDialogStep : byte
        {
           	None,
           	StartedTalkedToMysteriousStranger,
           	FinishedTalkingToMysteriousStranger,
           	ETutorialDialogStep_MAX,
        };

        // Enum Athena.EPiratePreviewSkeletonCurseMode
        public enum EPiratePreviewSkeletonCurseMode : byte
        {
           	KeepPirateAsIs,
           	ForceRemoveSkeletonCurse,
           	ForceApplySkeletonCurse,
           	EPiratePreviewSkeletonCurseMode_MAX,
        };

        // Enum Athena.EStartGameNarrativeMediaSize
        public enum EStartGameNarrativeMediaSize : byte
        {
           	Undefined,
           	Default,
           	LargeWide,
           	EStartGameNarrativeMediaSize_MAX,
        };

        // Enum Athena.EStartGameNarrativePositionY
        public enum EStartGameNarrativePositionY : byte
        {
           	Undefined,
           	Top,
           	Middle,
           	Bottom,
           	EStartGameNarrativePositionY_MAX,
        };

        // Enum Athena.EStartGameNarrativePositionX
        public enum EStartGameNarrativePositionX : byte
        {
           	Undefined,
           	Left,
           	Middle,
           	Right,
           	EStartGameNarrativePositionX_MAX,
        };

        // Enum Athena.EMockShipConnectionPartType
        public enum EMockShipConnectionPartType : byte
        {
           	HoistToMast,
           	AngleToMast,
           	Total,
           	EMockShipConnectionPartType_MAX,
        };

        // Enum Athena.EPLSectionType
        public enum EPLSectionType : byte
        {
           	Module,
           	Link,
           	Count,
           	EPLSectionType_MAX,
        };

        // Enum Athena.EPiratePreviewRTTState
        public enum EPiratePreviewRTTState : byte
        {
           	Uninitialized,
           	Busy,
           	ReadyToCapture,
           	CompletedCapture,
           	EPiratePreviewRTTState_MAX,
        };

        // Enum Athena.EPlayerCurseTag
        public enum EPlayerCurseTag : byte
        {
           	None,
           	Limping,
           	Poisoned,
           	Drunk,
           	Silenced,
           	Dancing,
           	Sleeping,
           	Vomit,
           	EPlayerCurseTag_MAX,
        };

        // Enum Athena.ERefreshEntitlementBehaviour
        public enum ERefreshEntitlementBehaviour : byte
        {
           	TryUsingCachedServicesEntitlements,
           	FullRefresh,
           	ERefreshEntitlementBehaviour_MAX,
        };

        // Enum Athena.EPlayerHeroStatsSuccess
        public enum EPlayerHeroStatsSuccess : byte
        {
           	Success,
           	Success_Zero,
           	NotAutonomousProxy,
           	NoLocalUser,
           	PlayerIdInvalid,
           	NoClientData,
           	StartOfSessionValueNotSet,
           	NoServerData,
           	NoHeroStatData,
           	OnlineStatsPtrNull,
           	OnlineStats_UnknownError,
           	OnlineStats_InvalidStatId,
           	OnlineStats_InvalidArgument,
           	OnlineStats_InvalidUser,
           	EPlayerHeroStatsSuccess_MAX,
        };

        // Enum Athena.EPremiumCatalogOfferType
        public enum EPremiumCatalogOfferType : byte
        {
           	Undefined,
           	Tab,
           	BundleSet,
           	ItemSet,
           	Cards,
           	Item,
           	Offer,
           	EPremiumCatalogOfferType_MAX,
        };

        // Enum Athena.ECatalogOfferAvailability
        public enum ECatalogOfferAvailability : byte
        {
           	Available,
           	AlreadyOwned,
           	Locked,
           	Info,
           	Hide,
           	Unaffordable,
           	ECatalogOfferAvailability_MAX,
        };

        // Enum Athena.EPremiumStoreLandingPageItemType
        public enum EPremiumStoreLandingPageItemType : byte
        {
           	Bundle,
           	Set,
           	Cards,
           	Item,
           	EPremiumStoreLandingPageItemType_MAX,
        };

        // Enum Athena.EProjectileLauncherMechanismMode
        public enum EProjectileLauncherMechanismMode : byte
        {
           	OneShot,
           	Continuous,
           	EProjectileLauncherMechanismMode_MAX,
        };

        // Enum Athena.EProjectileWeaponFireType
        public enum EProjectileWeaponFireType : byte
        {
           	Aiming,
           	HipFire,
           	MAX,
           	EProjectileWeaponFireType_MAX,
        };

        // Enum Athena.EProjectileWeaponType
        public enum EProjectileWeaponType : byte
        {
           	Pistol,
           	Blunderbuss,
           	EyeOfReach,
           	MAX,
           	EProjectileWeaponType_MAX,
        };

        // Enum Athena.EProjectileWeaponState
        public enum EProjectileWeaponState : byte
        {
           	Equipping,
           	Idle,
           	Aiming,
           	Recoil,
           	Reloading,
           	InterruptedReload,
           	EProjectileWeaponState_MAX,
        };

        // Enum Athena.EPuzzleStatueActivatedMechanismType
        public enum EPuzzleStatueActivatedMechanismType : byte
        {
           	Generic,
           	WaterLevelUp,
           	WaterLevelDown,
           	EPuzzleStatueActivatedMechanismType_MAX,
        };

        // Enum Athena.EReactionSequenceState
        public enum EReactionSequenceState : byte
        {
           	None,
           	BeginSuccessfulSequence,
           	BeginUnsuccessfulSequence,
           	EndSuccessfulSequence,
           	EndUnsuccessfulSequence,
           	Reset,
           	Cancelled,
           	MAX,
           	EReactionSequenceState_MAX,
        };

        // Enum Athena.EAllocationStrategy
        public enum EAllocationStrategy : byte
        {
           	Normal,
           	LowPriority,
           	NonAllocated,
           	EAllocationStrategy_MAX,
        };

        // Enum Athena.EShadowAIFormState
        public enum EShadowAIFormState : byte
        {
           	Invalid,
           	Light,
           	Dark,
           	EShadowAIFormState_MAX,
        };

        // Enum Athena.EShipBuilderState
        public enum EShipBuilderState : byte
        {
           	Idle,
           	LoadingTemplate,
           	CustomizingParts,
           	EShipBuilderState_MAX,
        };

        // Enum Athena.EShipBuilderErrorCode
        public enum EShipBuilderErrorCode : byte
        {
           	AlreadyInProgress,
           	AssetLoadingFailure,
           	FailedToSpawnActor,
           	FailedToBuildParts,
           	InvalidParameter,
           	InvalidShipDesc,
           	Cancelled,
           	SpawnedActorWasNotAShip,
           	EShipBuilderErrorCode_MAX,
        };

        // Enum Athena.EShipParticleParam
        public enum EShipParticleParam : byte
        {
           	None,
           	DeckWater,
           	FloodLevel,
           	Total,
           	EShipParticleParam_MAX,
        };

        // Enum Athena.EPurchaseRequestFailureReason
        public enum EPurchaseRequestFailureReason : byte
        {
           	ServiceUnavailable,
           	OfferUnavailable,
           	InsufficientFunds,
           	RequestTimeout,
           	PurchaseAlreadyPending,
           	EPurchaseRequestFailureReason_MAX,
        };

        // Enum Athena.EShovelState
        public enum EShovelState : byte
        {
           	Idle,
           	Exhuming,
           	Burying,
           	EShovelState_MAX,
        };

        // Enum Athena.EAthenaSafeZoneEnum
        public enum EAthenaSafeZoneEnum : byte
        {
           	NONE,
           	MAINWORLD_SAFEZONE,
           	TRIBUTEPEAK_SAFEZONE,
           	EAthenaSafeZoneEnum_MAX,
        };

        // Enum Athena.EShroudBreakerActivationStateEnum
        public enum EShroudBreakerActivationStateEnum : byte
        {
           	DEACTIVE,
           	STAGE_2,
           	STAGE_3,
           	STAGE_4,
           	STAGE_5,
           	EShroudBreakerActivationStateEnum_MAX,
        };

        // Enum Athena.EDoorState
        public enum EDoorState : byte
        {
           	Closed,
           	Triggered,
           	Opening,
           	Open,
           	EDoorState_MAX,
        };

        // Enum Athena.ESkellyFortType
        public enum ESkellyFortType : byte
        {
           	Default,
           	Damned,
           	Max,
           	ESkellyFortType_MAX,
        };

        // Enum Athena.EDamnedFortAudioState
        public enum EDamnedFortAudioState : byte
        {
           	Inactive,
           	BattleMusic,
           	BattleMusicWithCaptain,
           	Finished,
           	MAX,
           	EDamnedFortAudioState_MAX,
        };

        // Enum Athena.EStaggerReason
        public enum EStaggerReason : byte
        {
           	Drunk,
           	Earthquake,
           	NumReasons,
           	EStaggerReason_MAX,
        };

        // Enum Athena.EStunnedActionStateItemWielding
        public enum EStunnedActionStateItemWielding : byte
        {
           	Allowed,
           	Disallowed,
           	EStunnedActionStateItemWielding_MAX,
        };

        // Enum Athena.EStunnedActionStateDurationType
        public enum EStunnedActionStateDurationType : byte
        {
           	Definite,
           	Indefinite,
           	EStunnedActionStateDurationType_MAX,
        };

        // Enum Athena.ERitualState
        public enum ERitualState : byte
        {
           	Disabled,
           	PrePrimed,
           	Primed,
           	Stopped,
           	Started,
           	Complete,
           	ERitualState_MAX,
        };

        // Enum Athena.ESwimmingCreatureType
        public enum ESwimmingCreatureType : byte
        {
           	SwimmingCreature,
           	Shark,
           	TinyShark,
           	Siren,
           	ESwimmingCreatureType_MAX,
        };

        // Enum Athena.ESelectionPolicy
        public enum ESelectionPolicy : byte
        {
           	Random,
           	Closest,
           	ESelectionPolicy_MAX,
        };

        // Enum Athena.EAISpawnerShutdownPolicy
        public enum EAISpawnerShutdownPolicy : byte
        {
           	SpawnerShutsDownWhenPlayersNoLongerTracked,
           	SpawnerShutsDownWhenStepEnd,
           	EAISpawnerShutdownPolicy_MAX,
        };

        // Enum Athena.EAILifeTimePolicy
        public enum EAILifeTimePolicy : byte
        {
           	SpawnWhenVoyageParticipantsEnterDespawnWhenAllLeave,
           	SpawnWhenVoyageParticipantsEnterDespawnWhenAllVoyageParticipantsLeave,
           	SpawnWhenAnyEnterDespawnWhenAllLeave,
           	EAILifeTimePolicy_MAX,
        };

        // Enum Athena.ETankardLiquidType
        public enum ETankardLiquidType : byte
        {
           	Grog,
           	ExtraStrongGrog,
           	ETankardLiquidType_MAX,
        };

        // Enum Athena.EStepsTriggerState
        public enum EStepsTriggerState : byte
        {
           	Closed,
           	Opening,
           	Open,
           	EStepsTriggerState_MAX,
        };

        // Enum Athena.ETinVoyageDifficulty
        public enum ETinVoyageDifficulty : byte
        {
           	Easy,
           	Medium,
           	Hard,
           	ETinVoyageDifficulty_MAX,
        };

        // Enum Athena.ETreasureRoomState
        public enum ETreasureRoomState : byte
        {
           	Inactive,
           	Waiting,
           	Combat,
           	CombatOver,
           	Aftermath,
           	ETreasureRoomState_MAX,
        };

        // Enum Athena.EItemSpawnType
        public enum EItemSpawnType : byte
        {
           	None,
           	Scaffolding,
           	Reward,
           	PressurePlate,
           	EItemSpawnType_MAX,
        };

        // Enum Athena.EEvaluationType
        public enum EEvaluationType : byte
        {
           	PerPlayer,
           	WholeCrew,
           	EEvaluationType_MAX,
        };

        // Enum Athena.EMurkWaterModifierZoneState
        public enum EMurkWaterModifierZoneState : byte
        {
           	Active,
           	Inactive,
           	Activating,
           	Deactivating,
           	EMurkWaterModifierZoneState_MAX,
        };

        // Enum Athena.EWeepingState
        public enum EWeepingState : byte
        {
           	Weeping,
           	Calm,
           	EWeepingState_MAX,
        };

        // Enum Athena.EWheelFractureLabel
        public enum EWheelFractureLabel : byte
        {
           	West,
           	East,
           	South,
           	EWheelFractureLabel_MAX,
        };

        // Enum Athena.EAudioGameState
        public enum EAudioGameState : byte
        {
           	None,
           	InGame,
           	InFrontendWrapper,
           	InFrontendMatineeSequence,
           	EAudioGameState_MAX,
        };

        // Enum Athena.ELocalGameChatStatus
        public enum ELocalGameChatStatus : byte
        {
           	Undefined,
           	NoMicrophone,
           	MicrophoneMuted,
           	InPartyChat,
           	Ready,
           	ELocalGameChatStatus_MAX,
        };

        // Enum Athena.EVoiceChatAudioDevice
        public enum EVoiceChatAudioDevice : byte
        {
           	None,
           	Headset,
           	Kinect,
           	EVoiceChatAudioDevice_MAX,
        };

        // Enum Athena.EBootflowError
        public enum EBootflowError : byte
        {
           	None,
           	Unknown,
           	AthenaGameInstanceFailedToConnectToServer,
           	AthenaGameInstanceActiveConnectionToServerLost,
           	AthenaGameInstanceActiveConnectionToServerTimedOut,
           	AthenaGameInstanceInitialConnectionToServerTimedOut,
           	AthenaGameInstancePendingConnectionToServerTimedOut,
           	AthenaGameInstancePendingConnectionToServerLost,
           	AthenaGameInstanceGameVersionMismatch,
           	AthenaGameInstanceGenericDisconnectMessage,
           	AthenaGameInstanceNetDriverFailure,
           	AthenaGameInstanceInvalidFeatureConfig,
           	AthenaGameInstanceRPCSpamDetected,
           	AthenaGameInstancePlayerDeemedInactive,
           	AthenaGameInstanceInvalidServerURL,
           	AthenaGameInstanceGameAssetMismatch,
           	AthenaGameInstanceGenericTravelError,
           	AthenaGameInstanceCrewMigrationRequested,
           	AthenaGameInstanceCrewSessionLost,
           	AthenaGameInstanceServerShuttingDown,
           	ClientBootflowPrimaryPlayerSignedOut,
           	ClientBootflowPlayerSuspendedGame,
           	ClientBootflowLostConnectionToXboxLive,
           	ClientBootflowEthernetConnectionUnplugged,
           	ClientEvicted,
           	ClientInGameStateWasIdleForTooLong,
           	ClientInGameStateUnableToFindLocalUserId,
           	ClientInGameStateUnableToObtainLocalPlayerInterface,
           	ClientInGameStateStopMatchmakingFailed,
           	ClientJoinServerStateFailed,
           	CrewMatchmakingStateLocalUserHasInvalidId,
           	CrewMatchmakingStateUnableToObtainLocalUserId,
           	CrewMatchmakingStateUnableToObtainLocalPlayerInterface,
           	CrewMatchmakingStateMatchmakingFailed,
           	CrewSessionStateUnableToObtainLocalUserId,
           	CrewSessionStateUnableToObtainLocalPlayerInterface,
           	CrewSessionStateFailedToCreateCrewSession,
           	CrewSessionStateInvalidCrewSessionTypeReceived,
           	CrewSessionStateInvalidServicesResponse,
           	CrewSessionOnSessionLost,
           	DiscoveryServiceStateRequestFailedNotAuthorized,
           	DiscoveryServiceStateRequestFailed,
           	EmblemDefinitionRetrievalFailed,
           	EngageStateInviteHadInvalidControllerId,
           	EngageStateNoLocalPlayerFound,
           	EntryLevelStateFailedToLoadDefaultMap,
           	EntryLevelStateFailed,
           	LoadLevelStateTimeout,
           	LoadLevelStateFailed,
           	LoadUserSettingsStateFailed,
           	LoginTokenExchangePlayerFailedFlightingCheck,
           	LoginTokenExchangePlayerFailedOtherTitleCheck,
           	LoginTokenExchangeFailed,
           	LoginTokenExchangeFailedPlayerBannedPerm,
           	LoginTokenExchangeFailedPlayerBannedTemp,
           	LoginTokenExchangeFailedSteamError,
           	LoginTokenExchangeFailedSteamIncorrectAppToken,
           	LoginTokenExchangeFailedSteamTokenInvalid,
           	LoginTokenExchangeFailedSteamUnlicensed,
           	LoginTokenExchangeFailedSteamMissingXuid,
           	LoginTokenExchangeFailedSteamBadApiResponse,
           	LoginTokenExchangeFailedSteamUnreachableEndpoint,
           	LoginTokenExchangeFailedTitleVersionInvalid,
           	SelectUserStateFailedToShowSignInUI,
           	SelectUserStateFailedToObtainValidControllerId,
           	SelectUserStateFailedToObtainValidLocalPlayer,
           	SelectUserStateNotConnectedToLive,
           	SelectUserStateNotSignedInWhileUnattended,
           	SelectUserStateUserDoesNotHaveUniqueNetId,
           	SelectUserStateUserDidNotSignIn,
           	SelectUserStateUserIsGuest,
           	SelectUserStateInsufficientPrivilegesToPlay,
           	SelectUserStateInvalidIdentityInterface,
           	ServerMatchmakingStateSandboxDisabled,
           	ServerMatchmakingStateUnableToObtainCrewId,
           	ServerMatchmakingStateUnableToObtainLocalPlayerInterface,
           	ServerMatchmakingStateInvalidPirateIdentity,
           	ServerMatchmakingStateNoServersAvailable,
           	ServerMatchmakingStateInvalidMatchmakingResponse,
           	ServerMatchmakingStateInvalidResponse,
           	ServerMatchmakingStateMatchmakingTimedOut,
           	ServerMatchmakingStateUnexpectedResult,
           	ServerMatchmakingStateJoinRefused,
           	ServerMatchmakingStateUnsupportedVersion,
           	ServerAtMatchmakingCapacity,
           	ServerShuttingDownWhilstMigrationIsOngoing,
           	SetupConfigurationServiceStateConfigServiceRequestFailed,
           	SetupCrewSessionStateFailedToJoinCrewSession,
           	SetupCrewSessionStateFailedToCreateCrewSession,
           	SetupServiceBridgeStateFailed,
           	SetupTelemetryDispatcherStateFailed,
           	CrewSessionHandlerJoinFailedAsCrewIsFull,
           	CrewSessionHandlerJoinFailedAsCrewDoesntExist,
           	CrewSessionHandlerJoinFailedAsCouldNotRetrieveAddress,
           	CrewSessionHandlerJoinFailedAsUnknownErrorOccurred,
           	PirateSelectionStateUnableToObtainLocalPlayerInterface,
           	PirateSelectionStateUnableToRetrievePirates,
           	PirateSelectionStateUnableToCreatePirate,
           	PirateSelectionStateUnableToReRollPirate,
           	SessionSelectInvalidSessionTypeSpecified,
           	InvitePrivilegesCheckFailed,
           	InviteUnableToRetrieveSession,
           	InviteSessionXboxPadOnly,
           	InviteSessionNoBannedData,
           	InviteSessionFull,
           	InviteSessionUnknownFailure,
           	InviteSessionNoTransferHandle,
           	InviteSessionUnableToFindTargetSession,
           	InviteSessionIsNotJoinable,
           	FailedToEnumerateEntitlements,
           	WhatsNewArticleRetrievalStateInvalidIdentityInterface,
           	FailedToFetchExistingSessions,
           	FailedToDisconnectFromServiceBridge,
           	LobbySesssionHandlerFailedToCreateLobbySession,
           	LobbySesssionHandlerFailedToJoinLobbySession,
           	LobbySessionHandlerJoinFailedAsUnknownErrorOccurred,
           	LobbySessionHandlerJoinFailedAsCouldNotRetrieveAddress,
           	LobbySessionHandlerJoinFailedAsSessionIsFull,
           	LobbySessionHandlerJoinFailedAsSessionDoesntExist,
           	LobbySessionInviteIsNotJoinable,
           	CreatorModeSessionStateFailedToCreateLobbySession,
           	CreatorModeSessionStateFailedToJoinLobbySession,
           	CreatorModeSessionStateFailedToAdoptCrewSession,
           	CreatorModeSessionStateFailedToLeaveLobbySession,
           	CreatorModeSessionStateFailedToRegisterCrewsOnService,
           	CreatorModeSessionStateFailedToReplicateCrewsFromService,
           	LobbySessionCrewlessPlayer,
           	StampSwapDiscoveryRequestFailed,
           	StampSwapDiscoveryRequestFailedNotAuthorized,
           	StampSwapLoginTokenExchangeFailed,
           	StampSwapLoginTokenExchangeFailedPlayerBannedPerm,
           	StampSwapLoginTokenExchangeFailedPlayerBannedTemp,
           	StampSwapLoginTokenExchangeFailedSteamError,
           	StampSwapLoginTokenExchangeFailedSteamIncorrectAppToken,
           	StampSwapLoginTokenExchangeFailedSteamTokenInvalid,
           	StampSwapLoginTokenExchangeFailedSteamUnlicensed,
           	StampSwapLoginTokenExchangeFailedTitleVersionInvalid,
           	StampSwapLoginTokenExchangePlayerFailedFlightingCheck,
           	StampSwapLoginTokenExchangePlayerFailedOtherTitleCheck,
           	StampSwapSetupServiceBridgeFailed,
           	StampSwapFailedToDisconnectFromServiceBridge,
           	LoginTokenExchangeFailedUWPLicenseMissing,
           	LoginTokenExchangeFailedUWPInvalidLicense,
           	LoginTokenExchangeFailedUWPReplayLicense,
           	LoginTokenExchangeFailedUWPInvalidLicenseCertificate,
           	LoginTokenExchangeFailedUWPNoSuitableProductLicense,
           	LoginTokenExchangeFailedUWPMissingSandboxClaim,
           	LoginTokenExchangeFailedClockSkew,
           	LoginTokenExchangeFailedInvalidDeviceType,
           	TestFailed,
           	TestNetworkError,
           	Max,
           	EBootflowError_MAX,
        };

        // Enum Athena.EBootflowErrorPriority
        public enum EBootflowErrorPriority : byte
        {
           	High,
           	AboveNormal,
           	Normal,
           	BelowNormal,
           	Low,
           	EBootflowErrorPriority_MAX,
        };

        // Enum Athena.EUISessionLobbyType
        public enum EUISessionLobbyType : byte
        {
           	Invalid,
           	Open,
           	Closed,
           	Guild,
           	EUISessionLobbyType_MAX,
        };

        // Enum Athena.ECreativeLobbyState
        public enum ECreativeLobbyState : byte
        {
           	Open,
           	ReadyToSetSail,
           	Count,
           	ECreativeLobbyState_MAX,
        };

        // Enum Athena.ECreationMode
        public enum ECreationMode : byte
        {
           	Invalid,
           	Create,
           	Join,
           	ECreationMode_MAX,
        };

        // Enum Athena.EStoreAsyncResult
        public enum EStoreAsyncResult : byte
        {
           	Unknown,
           	GetAccessTokenInvalidHttpRequest,
           	GetAccessTokenTimeout,
           	GetAccessTokenCancelled,
           	GetAccessTokenFailure,
           	GetPurchaseRedemptionTokenInterfaceInvalid,
           	GetPurchaseRedemptionTokenOnlineStoreFailure,
           	GetPurchaseRedemptionTokenFailure,
           	PostPurchaseRedemptionTokenInvalidHttpRequest,
           	PostPurchaseRedemptionTokenCancelled,
           	PostPurchaseRedemptionTokenTimeout,
           	PostPurchaseRedemptionTokenFailure,
           	Success,
           	EStoreAsyncResult_MAX,
        };

        // Enum Athena.EWaitForLoadingScreenSubState
        public enum EWaitForLoadingScreenSubState : byte
        {
           	Invalid,
           	CacheLoadingScreenDataAssetParams,
           	CacheLoadingScreenLoadingScreenParams,
           	CacheLoadingScreenContent,
           	Complete,
           	EWaitForLoadingScreenSubState_MAX,
        };

        // Enum Athena.EStreamingPlatform
        public enum EStreamingPlatform : byte
        {
           	Twitch,
           	Mixer,
           	YouTube,
           	EStreamingPlatform_MAX,
        };

        // Enum Athena.EWaterPuzzleAlterationEndingState
        public enum EWaterPuzzleAlterationEndingState : byte
        {
           	Invalid,
           	Normal,
           	MaxToMax,
           	EWaterPuzzleAlterationEndingState_MAX,
        };

        // Enum Athena.EMeleeAttackMoveCorrectionReason
        public enum EMeleeAttackMoveCorrectionReason : byte
        {
           	NotSpecified,
           	SpedUpTooSoon,
           	EMeleeAttackMoveCorrectionReason_MAX,
        };

        // Enum Athena.EInteractableOverlayActionType
        public enum EInteractableOverlayActionType : byte
        {
           	None,
           	Activate,
           	EInteractableOverlayActionType_MAX,
        };

        // Enum Athena.EServerTeleportAckReason
        public enum EServerTeleportAckReason : byte
        {
           	Invalid,
           	Complete,
           	Timeout,
           	EServerTeleportAckReason_MAX,
        };

        // Enum Athena.EVirtualKeyboardInputScope
        public enum EVirtualKeyboardInputScope : byte
        {
           	Alphanumeric,
           	Default,
           	Email,
           	Number,
           	Password,
           	Search,
           	TelephoneNumber,
           	Url,
           	EVirtualKeyboardInputScope_MAX,
        };

        // Enum Athena.EReputationNavigationAction
        public enum EReputationNavigationAction : byte
        {
           	Company,
           	Commendations,
           	Ledger,
           	EReputationNavigationAction_MAX,
        };

        // Enum Athena.EServerCameraFadeAckReason
        public enum EServerCameraFadeAckReason : byte
        {
           	Invalid,
           	Complete,
           	Timeout,
           	EServerCameraFadeAckReason_MAX,
        };

        // Enum Athena.EConsumeEntitlementFailureReason
        public enum EConsumeEntitlementFailureReason : byte
        {
           	ServiceUnavailable,
           	ItemNotFound,
           	RequestTimeout,
           	PreconditionFailed,
           	Unknown,
           	EConsumeEntitlementFailureReason_MAX,
        };

        // Enum Athena.EQuestGenAssetSuffix
        public enum EQuestGenAssetSuffix : byte
        {
           	Default,
           	Underground,
           	AISpawn,
           	EQuestGenAssetSuffix_MAX,
        };

        // Enum Athena.EPurchaseOfferFailureReason
        public enum EPurchaseOfferFailureReason : byte
        {
           	ServiceUnavailable,
           	OfferUnavailable,
           	InsufficientFunds,
           	EPurchaseOfferFailureReason_MAX,
        };

        // Enum Athena.EHttpRequestTelemetryResult
        public enum EHttpRequestTelemetryResult : byte
        {
           	None,
           	Completed,
           	Failed,
           	Cancelled,
           	Aborted,
           	EHttpRequestTelemetryResult_MAX,
        };

        // Enum Athena.EServerMatchmakingFailureReason
        public enum EServerMatchmakingFailureReason : byte
        {
           	NoServersAvailable,
           	CrewServerRequestBeingProcessed,
           	CrewBeingMigrated,
           	SandboxDisabled,
           	EServerMatchmakingFailureReason_MAX,
        };

        // Enum Athena.EStoreRemoteServiceFutureStatus
        public enum EStoreRemoteServiceFutureStatus : byte
        {
           	Unknown,
           	NotStarted,
           	Failed,
           	Succeeded,
           	Cancelled,
           	TimedOut,
           	EStoreRemoteServiceFutureStatus_MAX,
        };

        // Enum Athena.EServerEnvironmentShutdownStatus
        public enum EServerEnvironmentShutdownStatus : byte
        {
           	NotSet,
           	Starting,
           	StandingBy,
           	Active,
           	EServerEnvironmentShutdownStatus_MAX,
        };

        // Enum Athena.EPreLoginDeniedReason
        public enum EPreLoginDeniedReason : byte
        {
           	None,
           	PirateRetreival,
           	EntitlementsRetrieval,
           	MPSDValidation,
           	CrewNoLongerOnServer,
           	CrewAssignmentFailed,
           	AuthTokenValidation,
           	UWPJoinAttemptRefusal,
           	EPreLoginDeniedReason_MAX,
        };

        // Enum Athena.EIntroVideoStateSkipReason
        public enum EIntroVideoStateSkipReason : byte
        {
           	Unknown,
           	FeatureDisabled,
           	AutoProceed,
           	PendingInvite,
           	Debug,
           	EIntroVideoStateSkipReason_MAX,
        };

        // Enum Athena.EFriendStatus
        public enum EFriendStatus : byte
        {
           	None,
           	Online,
           	Offline,
           	Away,
           	EFriendStatus_MAX,
        };

        // Enum Athena.ESlidingDoorDirection
        public enum ESlidingDoorDirection : byte
        {
           	Up,
           	Down,
           	Forward,
           	Back,
           	ESlidingDoorDirection_MAX,
        };

        // Enum Athena.ESlidingDoorState
        public enum ESlidingDoorState : byte
        {
           	Closing,
           	Closed,
           	Opening,
           	Open,
           	ESlidingDoorState_MAX,
        };

        // Enum Athena.ESwingDoorState
        public enum ESwingDoorState : byte
        {
           	Closing,
           	Closed,
           	Opening,
           	Open,
           	ESwingDoorState_MAX,
        };

        // Enum Athena.ENPCOnSurfaceDespawnReason
        public enum ENPCOnSurfaceDespawnReason : byte
        {
           	PlayersLeftShip,
           	ShipSinking,
           	ChangingLocation,
           	CurrentLocationUnderWater,
           	ChangingState,
           	Hiding,
           	ManningCannon,
           	CurrentLocationOnFire,
           	BeingPermanentlyDestroyed,
           	ENPCOnSurfaceDespawnReason_MAX,
        };

        // Enum Athena.ENPCOnSurfaceFloodedLevel
        public enum ENPCOnSurfaceFloodedLevel : byte
        {
           	Empty,
           	LowerDeckFlooded,
           	MidDeckFlooded,
           	Sunk,
           	ENPCOnSurfaceFloodedLevel_MAX,
        };

        // Enum Athena.EOpenableItemState
        public enum EOpenableItemState : byte
        {
           	Open,
           	Closed,
           	EOpenableItemState_MAX,
        };

        // Enum Athena.ETradeRouteMapTextIdentifier
        public enum ETradeRouteMapTextIdentifier : byte
        {
           	Misc,
           	Vessel,
           	Origin,
           	Destination,
           	ETradeRouteMapTextIdentifier_MAX,
        };

        // Enum Athena.ELoadPersistance
        public enum ELoadPersistance : byte
        {
           	Permanent,
           	FrontEndOnly,
           	CallbackOnly,
           	ELoadPersistance_MAX,
        };

        // Enum Athena.EDelayLoadPhase
        public enum EDelayLoadPhase : byte
        {
           	Boot,
           	FeatureConfigAvailable,
           	FrontEnd,
           	EngageState,
           	PreloadGame,
           	InGame,
           	Count,
           	EDelayLoadPhase_MAX,
        };

        // Enum Athena.EServerAsyncLoadingAckReason
        public enum EServerAsyncLoadingAckReason : byte
        {
           	Invalid,
           	Complete,
           	Timeout,
           	EServerAsyncLoadingAckReason_MAX,
        };

        // Enum Athena.ETelemetryPlatformId
        public enum ETelemetryPlatformId : byte
        {
           	Undefined,
           	Aoelus,
           	Xbox,
           	Windows,
           	SteamDeck,
           	DevPC,
           	ETelemetryPlatformId_MAX,
        };

        // Enum Athena.ECompanyStatus
        public enum ECompanyStatus : byte
        {
           	Invalid,
           	Pending,
           	Valid,
           	ECompanyStatus_MAX,
        };

        // Enum Athena.ERequestEntitlementBehaviour
        public enum ERequestEntitlementBehaviour : byte
        {
           	Default,
           	ForceRefresh,
           	ERequestEntitlementBehaviour_MAX,
        };

        // Enum Athena.EEntitlementConsumptionState
        public enum EEntitlementConsumptionState : byte
        {
           	Failed,
           	Succeeded,
           	TimedOut,
           	EEntitlementConsumptionState_MAX,
        };

        // Enum Athena.EEntitlementStatus
        public enum EEntitlementStatus : byte
        {
           	Unknown,
           	Invalid,
           	UsableButUnverified,
           	UsableAndVerfied,
           	EEntitlementStatus_MAX,
        };

        // Enum Athena.EProgressStyle
        public enum EProgressStyle : byte
        {
           	Circle,
           	Square,
           	Hexagon,
           	Diamond,
           	SeaDogs,
           	HuntersCall,
           	ReapersBones,
           	FactionB,
           	FactionG,
           	Guild,
           	EProgressStyle_MAX,
        };

        // Enum Athena.EWieldAnimationGraph
        public enum EWieldAnimationGraph : byte
        {
           	ThirdPerson,
           	FirstPerson,
           	EWieldAnimationGraph_MAX,
        };

        // Enum Athena.EWieldAnimationLocation
        public enum EWieldAnimationLocation : byte
        {
           	Left,
           	Right,
           	Floating,
           	LF_CAMERA_IK_HAND__Skeleton,
           	RT_CAMERA_IK_HAND__Skeleton,
           	LF_IK_HAND__Skeleton,
           	RT_IK_HAND__Skeleton,
           	Total,
           	EWieldAnimationLocation_MAX,
        };

        // Enum Athena.ECharacterHitReactionAnimType
        public enum ECharacterHitReactionAnimType : byte
        {
           	Full,
           	Flinch,
           	None,
           	Override,
           	ECharacterHitReactionAnimType_MAX,
        };

        // Enum Athena.EFacialPriority
        public enum EFacialPriority : byte
        {
           	Low,
           	Medium,
           	High,
           	MustPlay,
           	EFacialPriority_MAX,
        };

        // Enum Athena.ELocomotionType
        public enum ELocomotionType : byte
        {
           	Standard,
           	Limp,
           	Drunk,
           	PegLeg,
           	Combat,
           	HotCoals,
           	MAX,
           	ELocomotionType_MAX,
        };

        // Enum Athena.EStairAnimations
        public enum EStairAnimations : byte
        {
           	UpLeft,
           	UpRight,
           	DownLeft,
           	DownRight,
           	EStairAnimations_MAX,
        };

        // Enum Athena.EArmOverlayFlags
        public enum EArmOverlayFlags : byte
        {
           	RightArmOnly,
           	FullBody,
           	UpperBody,
           	UpperBodyLeft,
           	UpperBodyRight,
           	TwoHanded,
           	EArmOverlayFlags_MAX,
        };

        // Enum Athena.EInputControllerType
        public enum EInputControllerType : byte
        {
           	GamePad,
           	Keyboard,
           	EInputControllerType_MAX,
        };

        // Enum Athena.EConditionalStatType
        public enum EConditionalStatType : byte
        {
           	PlayerOnly,
           	WholeCrew,
           	WholeCrewButLegendsOnly,
           	CrewAndAlliance,
           	AllianceOnly,
           	WholeCrewButOnlyThoseWearingTheSkeletonCurse,
           	WholeCrewButOnlyThoseWearingTheGhostCurse,
           	WholeCrewButOnlyThoseUnlockedTheSkeletonCurse,
           	WholeCrewButOnlyThoseUnlockedTheGhostCurse,
           	AllPlayersWearingTheSkeletonCurseInRange,
           	AllPlayersWearingTheGhostCurseInRange,
           	GuildMembersinCrewOnly,
           	EConditionalStatType_MAX,
        };

        // Enum Athena.EStatConditionTarget
        public enum EStatConditionTarget : byte
        {
           	PlayerPawn,
           	ObjectOfInterest,
           	ObjectOfInterest2,
           	EStatConditionTarget_MAX,
        };

        // Enum Athena.EAllPlayersStatShouldSendToOwner
        public enum EAllPlayersStatShouldSendToOwner : byte
        {
           	SendToOwner,
           	DoNotSendToOwner,
           	EAllPlayersStatShouldSendToOwner_MAX,
        };

        // Enum Athena.EAllPlayersStatEventTypes
        public enum EAllPlayersStatEventTypes : byte
        {
           	SendToAllPlayersWearingGhostCurseWithinRange,
           	SendToAllPlayersWearingSkeletonCurseWithinRange,
           	EAllPlayersStatEventTypes_MAX,
        };

        // Enum Athena.ECrewStatEventTypes
        public enum ECrewStatEventTypes : byte
        {
           	SendToWholeCrew,
           	OnlySendToPirateLegends,
           	OnlySendToPlayersWearingGhostCurse,
           	OnlySendToPlayersWearingSkeletonCurse,
           	GuildMembersOnly,
           	ECrewStatEventTypes_MAX,
        };

        // Enum Athena.EStatEventsWasFiredFromConditionalStatsServiceState
        public enum EStatEventsWasFiredFromConditionalStatsServiceState : byte
        {
           	WasNotFired,
           	WasFired,
           	EStatEventsWasFiredFromConditionalStatsServiceState_MAX,
        };

        // Enum Athena.EPlayerStatsOperator
        public enum EPlayerStatsOperator : byte
        {
           	Sum,
           	Replace,
           	Minimum,
           	Maximum,
           	EPlayerStatsOperator_MAX,
        };

        // Enum Athena.EPlayerStatsType
        public enum EPlayerStatsType : byte
        {
           	Int,
           	Double,
           	EPlayerStatsType_MAX,
        };

        // Enum Athena.EShipLocation
        public enum EShipLocation : byte
        {
           	TOP_DECK,
           	MID_DECK,
           	BOTTOM_DECK,
           	HATCH_BACK_LEFT,
           	HATCH_BACK_RIGHT,
           	HATCH_FRONT_LEFT,
           	HATCH_FRONT_RIGHT,
           	CABIN_FRONT_DOOR,
           	CABIN_SIDE_DOOR,
           	TOP_DECK_BOW_PLANE,
           	TOP_DECK_HATCH_PLANE,
           	TOP_DECK_WHEEL_PLANE,
           	MAP_DECK_FRONT_PLANE,
           	MAP_DECK_TABLE_PLANE,
           	MAP_DECK_REARSTAIRS_PLANE,
           	BRIG_DECK_BRIG_PLANE,
           	BRIG_DECK_STAIRS_PLANE,
           	AITARGET_OFFSET_TO_EXTENTS,
           	AITARGET_EXTENTS,
           	AITARGET_ABOVE_DECK_OFFSET,
           	AITARGET_ABOVE_DECK_EXTENTS,
           	AITARGET_MID_DECK_OFFSET,
           	AITARGET_MID_DECK_EXTENTS,
           	AITARGET_LOWER_DECK_OFFSET,
           	AITARGET_LOWER_DECK_EXTENTS,
           	AI_KRAKEN_TENTACLE,
           	CAPTAINS_TABLE_SPAWN_LOCATION,
           	EShipLocation_MAX,
        };

        // Enum Athena.EPreventDamageTypeLockReasons
        public enum EPreventDamageTypeLockReasons : byte
        {
           	IsFiredOutOfACannon,
           	AIStrategy,
           	Form,
           	IsHiddenInObject,
           	ExternalController,
           	EPreventDamageTypeLockReasons_MAX,
        };

        // Enum Athena.ERegenerationState
        public enum ERegenerationState : byte
        {
           	Regenerating,
           	Stopped,
           	Paused,
           	ERegenerationState_MAX,
        };

        // Enum Athena.EInputControllerTypeRemote
        public enum EInputControllerTypeRemote : byte
        {
           	GamePad,
           	Keyboard,
           	EInputControllerTypeRemote_MAX,
        };

        // Enum Athena.EAimSensitivitySettingCategory
        public enum EAimSensitivitySettingCategory : byte
        {
           	Invalid,
           	Blunderbuss,
           	Flintlock,
           	EyeOfReach,
           	Spyglass,
           	TridentOfDarkTides,
           	EAimSensitivitySettingCategory_MAX,
        };

        // Enum Athena.FNarrateInteractableButtonsType
        public enum FNarrateInteractableButtonsType : byte
        {
           	Off,
           	Before,
           	After,
           	FNarrateInteractableButtonsType_MAX,
        };

        // Enum Athena.FPerformanceCounterOptions
        public enum FPerformanceCounterOptions : byte
        {
           	None,
           	FPS,
           	Ping,
           	FPSAndPing,
           	FPerformanceCounterOptions_MAX,
        };

        // Enum Athena.FVsyncOptions
        public enum FVsyncOptions : byte
        {
           	Off,
           	On,
           	COUNT,
           	FVsyncOptions_MAX,
        };

        // Enum Athena.FPersistentUserGameSettingsDetail
        public enum FPersistentUserGameSettingsDetail : byte
        {
           	Min,
           	Low,
           	Medium,
           	High,
           	Ultra,
           	Recommended,
           	COUNT,
           	FPersistentUserGameSettingsDetail_MAX,
        };

        // Enum Athena.ESettingsChangeInstigator
        public enum ESettingsChangeInstigator : byte
        {
           	Player,
           	Programmatic,
           	ESettingsChangeInstigator_MAX,
        };

        // Enum Athena.EBindingSet
        public enum EBindingSet : byte
        {
           	ActionBindings,
           	AxisBindings,
           	EBindingSet_MAX,
        };

        // Enum Athena.EGameSettingType
        public enum EGameSettingType : byte
        {
           	Bool,
           	Float,
           	Int,
           	INVALID,
           	EGameSettingType_MAX,
        };

        // Enum Athena.ETeleportActionStateAudioMode
        public enum ETeleportActionStateAudioMode : byte
        {
           	DoNothing,
           	FadeAudio,
           	PlaySfx,
           	FadeAndSfx,
           	ETeleportActionStateAudioMode_MAX,
        };

        // Enum Athena.ETeleportActionStateStage
        public enum ETeleportActionStateStage : byte
        {
           	Uninitialised,
           	Started,
           	CharacterFadeCompleteCondition,
           	PreTeleport,
           	CrewShipSpawnedIfPlayerIsInBrigCondition,
           	TeleportCompleteCondition,
           	AsyncLoadCompleteCondition,
           	ActorsRelevantSpawnCondition,
           	PlayerCreatedOnClientSpawnCondition,
           	PlayerLoadoutReceivedSpawnCondition,
           	PlayerEntitlementReceivedSpawnCondition,
           	PlayerPromptCountersReceivedSpawnCondition,
           	ClientConditionsCompleteCondition,
           	CharacterReadyForContestRespawnCondition,
           	PostTeleport,
           	Ended,
           	ETeleportActionStateStage_MAX,
        };

        // Enum Athena.ETeleportActionStateReason
        public enum ETeleportActionStateReason : byte
        {
           	Uninitialised,
           	Test,
           	Cheat,
           	LeaveConcealingObject,
           	TeleportPlayerToSafety,
           	SinkingShip,
           	Mermaid,
           	RespawnStatue,
           	ReturnToShip,
           	PanicTeleport_FoundAssociatedLocation,
           	PanicTeleport_NotFoundAssociatedLocation,
           	PanicTeleport_NoAssociatedLocationsProvided,
           	TeleportTriggerObject,
           	SentToBrig,
           	HideOutEntered,
           	HideOutLeftToSpecificExitPoint,
           	HideOutLeftWithNoExitPoint,
           	ContestTeleportPlayerToShipOnRestart,
           	DebugTeleportCrewStep,
           	EnterTunnelOfTheDamned,
           	ExitTunnelOfTheDamned,
           	SpawnPlayer,
           	InitialPlayerSpawn,
           	SpawnGhost,
           	TeleportPlayerFromSafeZone,
           	TaleProgressStatue,
           	LeaveGhostShip,
           	ETeleportActionStateReason_MAX,
        };

        // Enum Athena.ETeleportTransformSpace
        public enum ETeleportTransformSpace : byte
        {
           	World,
           	RelativeToBase,
           	ETeleportTransformSpace_MAX,
        };

        // Enum Athena.ETeleportActionStateConditions
        public enum ETeleportActionStateConditions : byte
        {
           	AllConditions,
           	NoConditions,
           	ETeleportActionStateConditions_MAX,
        };

        // Enum Athena.ETeleportActionStateFadeType
        public enum ETeleportActionStateFadeType : byte
        {
           	Fade,
           	FadeEndOnly,
           	NoFade,
           	FadeOut,
           	ETeleportActionStateFadeType_MAX,
        };

        // Enum Athena.EAttitudeTowardActor
        public enum EAttitudeTowardActor : byte
        {
           	Friendly,
           	Neutral,
           	Hostile,
           	Alliance,
           	EAttitudeTowardActor_MAX,
        };

        // Enum Athena.ECharacterInertReason
        public enum ECharacterInertReason : byte
        {
           	Teleporting,
           	Cutscene,
           	EnteringTunnelOfTheDamned,
           	ECharacterInertReason_MAX,
        };

        // Enum Athena.ECharacterType
        public enum ECharacterType : byte
        {
           	Ghost,
           	Character,
           	ECharacterType_MAX,
        };

        // Enum Athena.ETeleportNotificationSource
        public enum ETeleportNotificationSource : byte
        {
           	TeleportState,
           	WaitingToSpawnState,
           	ETeleportNotificationSource_MAX,
        };

        // Enum Athena.ECharacterBodyType
        public enum ECharacterBodyType : byte
        {
           	Default,
           	Large,
           	Thin,
           	Unfit,
           	Athletic,
           	Unknown,
           	ECharacterBodyType_MAX,
        };

        // Enum Athena.ECharacterGender
        public enum ECharacterGender : byte
        {
           	Unspecified,
           	Male,
           	Female,
           	ECharacterGender_MAX,
        };

        // Enum Athena.EToggleOrHoldMode
        public enum EToggleOrHoldMode : byte
        {
           	Off,
           	Hold,
           	Toggle,
           	EToggleOrHoldMode_MAX,
        };

        // Enum Athena.EUseSingleStick
        public enum EUseSingleStick : byte
        {
           	Off,
           	LeftStick,
           	RightStick,
           	SwapSticks,
           	EUseSingleStick_MAX,
        };

        // Enum Athena.ECameraLookatAnimationType
        public enum ECameraLookatAnimationType : byte
        {
           	Default,
           	Wheel,
           	Capstan,
           	Sail,
           	Tentacle,
           	Ladder,
           	Sitting,
           	ECameraLookatAnimationType_MAX,
        };

        // Enum Athena.ELookAtRotationType
        public enum ELookAtRotationType : byte
        {
           	Rate,
           	Raw,
           	ELookAtRotationType_MAX,
        };

        // Enum Athena.EEmoteSequenceType
        public enum EEmoteSequenceType : byte
        {
           	Continuous,
           	OneShot,
           	EEmoteSequenceType_MAX,
        };

        // Enum Athena.EWalletCurrencyId
        public enum EWalletCurrencyId : byte
        {
           	Undefined,
           	Gold,
           	WaywardTokens,
           	Premium,
           	EWalletCurrencyId_MAX,
        };

        // Enum Athena.EWalletBalanceRequestFailureReason
        public enum EWalletBalanceRequestFailureReason : byte
        {
           	ServiceUnavailable,
           	RequestTimeout,
           	PendingRequest,
           	RequestCancelled,
           	EWalletBalanceRequestFailureReason_MAX,
        };

        // Enum Athena.EWalletTransactionRequestFailureReason
        public enum EWalletTransactionRequestFailureReason : byte
        {
           	ServiceUnavailable,
           	PendingRequest,
           	RequestCancelled,
           	InvalidPirateIdentity,
           	InvalidTransactionRequest,
           	EWalletTransactionRequestFailureReason_MAX,
        };

        // Enum Athena.EStyleModifiers
        public enum EStyleModifiers : byte
        {
           	Hide,
           	Emblem,
           	Brig,
           	Accessible,
           	EStyleModifiers_MAX,
        };

        // Enum Athena.EPossessionsChestType
        public enum EPossessionsChestType : byte
        {
           	Unknown,
           	EquipmentChest,
           	ClothingChest,
           	VanityChest,
           	ArmoryChest,
           	ShipCustomizationChest,
           	ShipFlagCustomizationChest,
           	PetChest,
           	CaptainsShipCustomizationChest,
           	TrinketChest,
           	EPossessionsChestType_MAX,
        };

        // Enum Athena.EChestEntitlementActionType
        public enum EChestEntitlementActionType : byte
        {
           	Equip,
           	Unequip,
           	Clear,
           	Randomise,
           	RadialEquip,
           	EChestEntitlementActionType_MAX,
        };

        // Enum Athena.EMenuNavigationAction
        public enum EMenuNavigationAction : byte
        {
           	EscapeMenu,
           	QuickMenu,
           	VoteToScuttleShip,
           	Unsupported,
           	EMenuNavigationAction_MAX,
        };

        // Enum Athena.EShopOfferAvailability
        public enum EShopOfferAvailability : byte
        {
           	Available,
           	AlreadyOwned,
           	Locked,
           	Info,
           	Hide,
           	EShopOfferAvailability_MAX,
        };

        // Enum Athena.EShopType
        public enum EShopType : byte
        {
           	Invalid,
           	ShipWright_Liveries,
           	ShipWright_Decorations,
           	ShipWright_Trinkets,
           	MAX,
           	EShopType_MAX,
        };

        // Enum Athena.EMultiShopType
        public enum EMultiShopType : byte
        {
           	Invalid,
           	ShipWright,
           	MAX,
           	EMultiShopType_MAX,
        };

        // Enum Athena.EDitherFadeSetting
        public enum EDitherFadeSetting : byte
        {
           	FadeIn,
           	FadeOut,
           	EDitherFadeSetting_MAX,
        };

        // Enum Athena.EFadeInOnStart
        public enum EFadeInOnStart : byte
        {
           	FadeIn,
           	FadeOut,
           	None,
           	EFadeInOnStart_MAX,
        };

        // Enum Athena.ELightTemplateType
        public enum ELightTemplateType : byte
        {
           	PointLight,
           	SpotLight,
           	ELightTemplateType_MAX,
        };

        // Enum Athena.EShipAlignmentType
        public enum EShipAlignmentType : byte
        {
           	None,
           	AlignedToShip,
           	AlignedToShipXYOnly,
           	EShipAlignmentType_MAX,
        };

        // Enum Athena.EShipState
        public enum EShipState : byte
        {
           	PlainSailing,
           	GrindingToHalt,
           	Lowering,
           	ReduceWaterOcclusionZone,
           	KeelingOver,
           	KeeledOver,
           	FinalSinking,
           	Dead,
           	EShipState_MAX,
        };

        // Enum Athena.EBowSplashTickReturnType
        public enum EBowSplashTickReturnType : byte
        {
           	NoEffectsPlayed,
           	SFXOnly,
           	SFXAndVFX,
           	EBowSplashTickReturnType_MAX,
        };

        // Enum Athena.EShipAnnouncementAlignment
        public enum EShipAnnouncementAlignment : byte
        {
           	None,
           	Emissary,
           	TheFeared,
           	GoldSeeker,
           	Hunter,
           	TheIllFated,
           	Rogue,
           	Voyager,
           	Protector,
           	Servant,
           	Event_FestivalOfGiving,
           	ShipCrest_Reaver,
           	ShipCrest_RoyalCoronet,
           	ShipCrest_ForgottenTemple,
           	EShipAnnouncementAlignment_MAX,
        };

        // Enum Athena.EShipPartCustomizationState
        public enum EShipPartCustomizationState : byte
        {
           	Idle,
           	SearchingForPart,
           	CustomizingPart,
           	RegisteringPart,
           	EShipPartCustomizationState_MAX,
        };

        // Enum Athena.EShipDynamicsAnchoredState
        public enum EShipDynamicsAnchoredState : byte
        {
           	Unknown,
           	Raised,
           	Lowered,
           	EShipDynamicsAnchoredState_MAX,
        };

        // Enum Athena.EAllianceNotificationType
        public enum EAllianceNotificationType : byte
        {
           	Joined,
           	Formed,
           	Left,
           	Disbanded,
           	OtherCrewJoined,
           	OtherCrewLeft,
           	EAllianceNotificationType_MAX,
        };

        // Enum Athena.EAllianceJoinStatus
        public enum EAllianceJoinStatus : byte
        {
           	CannotJoinAlliance,
           	CanJoinAlliance,
           	IsInAlliance,
           	EAllianceJoinStatus_MAX,
        };

        // Enum Athena.EMatchmakingVisibilityState
        public enum EMatchmakingVisibilityState : byte
        {
           	Public,
           	Private,
           	EMatchmakingVisibilityState_MAX,
        };

        // Enum Athena.EScuttleState
        public enum EScuttleState : byte
        {
           	Scuttled,
           	NotScuttled,
           	Disabled_TunnelOfTheDamned,
           	Disabled_Cooldown,
           	NotScuttled_ChangeSeasUnavailable,
           	EScuttleState_MAX,
        };

        // Enum Athena.EBrigState
        public enum EBrigState : byte
        {
           	Unbriggable,
           	Free,
           	InBrig_Releasable,
           	InBrig_Unreleasable,
           	EBrigState_MAX,
        };

        // Enum Athena.ECrewOwnershipState
        public enum ECrewOwnershipState : byte
        {
           	Neutral,
           	Assigned,
           	ECrewOwnershipState_MAX,
        };

        // Enum Athena.ECrewDestroyedReason
        public enum ECrewDestroyedReason : byte
        {
           	AllCrewMembersRemoved,
           	ServerMigrated,
           	ECrewDestroyedReason_MAX,
        };

        // Enum Athena.EBrigReleaseReason
        public enum EBrigReleaseReason : byte
        {
           	VoteToRelease,
           	AutoRelease,
           	QuitGameRelease,
           	EBrigReleaseReason_MAX,
        };

        // Enum Athena.EShipRegion
        public enum EShipRegion : byte
        {
           	None,
           	TopDeck_Bow,
           	TopDeck_MainStairs,
           	TopDeck_Hatch,
           	TopDeck_CaptainsCabin,
           	TopDeck_WheelDeck,
           	MapDeck_Front,
           	MapDeck_MainStairs,
           	MapDeck_Table,
           	MapDeck_RearStairs,
           	BrigDeck_Stairs,
           	BrigDeck_OutsideBrig,
           	BrigDeck_InsideBrig,
           	EShipRegion_MAX,
        };

        // Enum Athena.EShipDeck
        public enum EShipDeck : byte
        {
           	BottomDeck,
           	MidDeck,
           	TopDeck,
           	EShipDeck_MAX,
        };

        // Enum Athena.EVfxCustomLocalSpaceMode
        public enum EVfxCustomLocalSpaceMode : byte
        {
           	Default,
           	ShipSpaceAutoLocal,
           	ShipSpaceAutoPlayer,
           	ShipSpaceAutoWorld,
           	EVfxCustomLocalSpaceMode_MAX,
        };

        // Enum Athena.EVfxRegion
        public enum EVfxRegion : byte
        {
           	None,
           	ShipExterior,
           	ShipInterior,
           	EVfxRegion_MAX,
        };

        // Enum Athena.EVfxUnderwaterUsage
        public enum EVfxUnderwaterUsage : byte
        {
           	AboveWater,
           	UnderWater,
           	Both,
           	EVfxUnderwaterUsage_MAX,
        };

        // Enum Athena.ETrackedActorType
        public enum ETrackedActorType : byte
        {
           	Unknown,
           	AI_Fauna,
           	AI_GhostShip_Captain,
           	AI_GhostShip_MiniBoss,
           	AI_GhostShip_Grunt,
           	AI_Kraken,
           	AI_Megalodon,
           	AI_OceanCrawler_Crab,
           	AI_OceanCrawler_Eel,
           	AI_OceanCrawler_Hermit,
           	AI_Pets,
           	AI_Pets_Wielded,
           	AI_Phantom,
           	AI_Siren,
           	AI_Shark,
           	AI_Ship_Aggressive_Large,
           	AI_Ship_Aggressive_Small,
           	AI_Ship_Battle_Large,
           	AI_Ship_Battle_Small,
           	AI_Ship_Passive_Large,
           	AI_Ship_Passive_Small,
           	AI_Skeleton,
           	AI_SwimmingCreature,
           	AshenLordCloud,
           	BarrelsOfPlenty,
           	Booty,
           	Booty_AshenWindsSkull,
           	Booty_CaptainsLog,
           	Booty_ReapersChest,
           	Booty_RuinedCaptainsLog,
           	BuoyantActor,
           	BurnedFragment,
           	Consumable,
           	Earthquake,
           	FireworkExplosion,
           	FireworkProjectile,
           	FishingFish,
           	FogBank,
           	Geyser,
           	Ghostship_Flameheart_Cloud,
           	GoalDrivenCharacter,
           	GoldCoin,
           	Haunted_Fort,
           	Jettisoned_Supplies,
           	Mermaid,
           	MessageInABottle,
           	NPC,
           	Player,
           	Pouch_Ammo,
           	Pouch_Doubloons,
           	Pouch_Gold,
           	Rowboat,
           	Rowboat_Cannon,
           	Rowboat_Harpoon,
           	Ship_Large,
           	Ship_Medium,
           	Ship_Small,
           	ShipCloud,
           	Shipwreck,
           	Shipwreck_Graveyard,
           	ShortRangeMarker,
           	SkeletonThrone,
           	SkullCloud,
           	Spire,
           	StatueThreat,
           	StorageContainer,
           	StorageContainerBuoyant,
           	Storm,
           	SuperHeatedWater,
           	Volcano,
           	WreckDebris_Land,
           	WreckDebris_Sea,
           	MAX,
           	ETrackedActorType_MAX,
        };

        // Enum Athena.ETrackedOwnerType
        public enum ETrackedOwnerType : byte
        {
           	Unknown,
           	Consumable,
           	Booty,
           	Booty_ReapersChest,
           	Booty_AshenWindsSkull,
           	BarrelsOfPlenty,
           	WreckDebris_Land,
           	WreckDebris_Sea,
           	BurnedFragment,
           	GoldCoin,
           	ETrackedOwnerType_MAX,
        };

        // Enum Athena.EBuoyantObjectState
        public enum EBuoyantObjectState : byte
        {
           	Rising,
           	Floating,
           	Sinking,
           	Disappearing,
           	EBuoyantObjectState_MAX,
        };

        // Enum Athena.ELoadableState
        public enum ELoadableState : byte
        {
           	Unloaded,
           	Unloading,
           	Loading,
           	Loaded,
           	ELoadableState_MAX,
        };

        // Enum Athena.ECharacterDeathType
        public enum ECharacterDeathType : byte
        {
           	Invalid,
           	Killed,
           	Despawn,
           	OwnershipRemoved,
           	NoGameStatePresentDuringPostInitializeComponents,
           	SentToFerrySinBin,
           	ECharacterDeathType_MAX,
        };

        // Enum Athena.EHitRegToggleName
        public enum EHitRegToggleName : byte
        {
           	ShadowHitScan,
           	UseSameTimeService,
           	DisableRewindTimeStampModifier,
           	PlayerControllerTicksAfterTimeService,
           	FixInaccuracySeedMismatch,
           	OverrideCharacterInterpolationDistanceWhenAiming,
           	CharacterMovementOrientProjectileHitVolumeWhenInterpolating,
           	ProjectileHitRegistrationTelemetry,
           	EvaluateAngleWhenDeterminingWhetherToInterpolate,
           	ProjectileFixedTimestep,
           	TickProjectileServiceAfterCharacterMovementOnClient,
           	EHitRegToggleName_MAX,
        };

        // Enum Athena.EPlayerActivityType
        public enum EPlayerActivityType : byte
        {
           	None,
           	Bailing,
           	Cannon,
           	Cannon_END,
           	Capstan,
           	Capstan_END,
           	CarryingBooty,
           	CarryingBooty_END,
           	Dead,
           	Dead_END,
           	Digging,
           	Dousing,
           	EmptyingBucket,
           	Harpoon,
           	Harpoon_END,
           	LoseHealth,
           	Repairing,
           	Sails,
           	Sails_END,
           	UndoingRepair,
           	Wheel,
           	Wheel_END,
           	MAX,
           	EPlayerActivityType_MAX,
        };

        // Enum Athena.ERadialMenuInputModality
        public enum ERadialMenuInputModality : byte
        {
           	None,
           	Keyboard,
           	Gamepad,
           	ERadialMenuInputModality_MAX,
        };

        // Enum Athena.ERadialInventoryType
        public enum ERadialInventoryType : byte
        {
           	None,
           	Item,
           	Map,
           	Phrases,
           	Emotes,
           	ERadialInventoryType_MAX,
        };

        // Enum Athena.EDockableSocketOverlapUpdates
        public enum EDockableSocketOverlapUpdates : byte
        {
           	AllowUpdate,
           	BlockUpdate,
           	EDockableSocketOverlapUpdates_MAX,
        };

        // Enum Athena.EActionSequenceInteractableState
        public enum EActionSequenceInteractableState : byte
        {
           	NoInteraction,
           	InteractionStarted,
           	InteractionCancelled,
           	InteractionCompleted,
           	InteractionFailed,
           	EActionSequenceInteractableState_MAX,
        };

        // Enum Athena.EActionDisplayPriority
        public enum EActionDisplayPriority : byte
        {
           	Primary,
           	Secondary,
           	Tertiary,
           	Total,
           	EActionDisplayPriority_MAX,
        };

        // Enum Athena.EInteractableState
        public enum EInteractableState : byte
        {
           	Interactable,
           	DisableDescribe,
           	DisabledDontDescribe,
           	EInteractableState_MAX,
        };

        // Enum Athena.ETooltipHighlightType
        public enum ETooltipHighlightType : byte
        {
           	Active,
           	GreyedOut,
           	None,
           	ETooltipHighlightType_MAX,
        };

        // Enum Athena.ETooltipSpinnerType
        public enum ETooltipSpinnerType : byte
        {
           	None,
           	Progress,
           	ETooltipSpinnerType_MAX,
        };

        // Enum Athena.EItemUseSpeed
        public enum EItemUseSpeed : byte
        {
           	Default,
           	Custom_2,
           	Custom_3,
           	EItemUseSpeed_MAX,
        };

        // Enum Athena.EMaxMoveSpeedScalarReason
        public enum EMaxMoveSpeedScalarReason : byte
        {
           	Digging,
           	Limping,
           	UsingItem,
           	Stunned,
           	MeleeBlocking,
           	Testing,
           	Environment,
           	NumReasons,
           	EMaxMoveSpeedScalarReason_MAX,
        };

        // Enum Athena.EWieldableItemAnimVariant
        public enum EWieldableItemAnimVariant : byte
        {
           	Default,
           	Variant1,
           	Variant2,
           	Variant3,
           	Variant4,
           	MAX,
           	EWieldableItemAnimVariant_MAX,
        };

        // Enum Athena.EWieldableItemBlockingAnimState
        public enum EWieldableItemBlockingAnimState : byte
        {
           	Main,
           	Feedback,
           	EWieldableItemBlockingAnimState_MAX,
        };

        // Enum Athena.EWieldableItemComplexOneShotLookUpType
        public enum EWieldableItemComplexOneShotLookUpType : byte
        {
           	Combo,
           	Heavy,
           	Special,
           	EWieldableItemComplexOneShotLookUpType_MAX,
        };

        // Enum Athena.EWieldableItemComplexOneShotAnimType
        public enum EWieldableItemComplexOneShotAnimType : byte
        {
           	MeleeComboAttack,
           	MeleeHeavyAttack,
           	EWieldableItemComplexOneShotAnimType_MAX,
        };

        // Enum Athena.EWieldableItemSize
        public enum EWieldableItemSize : byte
        {
           	Small,
           	Large,
           	EWieldableItemSize_MAX,
        };

        // Enum Athena.EWieldableItemVisibilityReason
        public enum EWieldableItemVisibilityReason : byte
        {
           	Animation,
           	Interpolation,
           	BlocksView,
           	EWieldableItemVisibilityReason_MAX,
        };

        // Enum Athena.EItemType
        public enum EItemType : byte
        {
           	Weapon,
           	Item,
           	Quest,
           	Invalid,
           	EItemType_MAX,
        };

        // Enum Athena.EWieldItemReturnCode
        public enum EWieldItemReturnCode : byte
        {
           	Success,
           	NoAuthority,
           	UnableToDisplace,
           	InvalidItem,
           	WaitingForUnstash,
           	EWieldItemReturnCode_MAX,
        };

        // Enum Athena.EDropItemReturnCode
        public enum EDropItemReturnCode : byte
        {
           	NothingToDrop,
           	Success,
           	DroppingProhibited,
           	EDropItemReturnCode_MAX,
        };

        // Enum Athena.EStowMethod
        public enum EStowMethod : byte
        {
           	Unequip,
           	Stash,
           	EStowMethod_MAX,
        };

        // Enum Athena.EStashReason
        public enum EStashReason : byte
        {
           	Locomotion,
           	Jumping,
           	Docking,
           	Sprinting,
           	Using,
           	Dead,
           	SpawnOrDespawn,
           	AIPartsChange,
           	Emote,
           	EStashReason_MAX,
        };

        // Enum Athena.ECanAddItemQueryResult
        public enum ECanAddItemQueryResult : byte
        {
           	Success,
           	SlotFull,
           	Invalid,
           	ECanAddItemQueryResult_MAX,
        };

        // Enum Athena.EItemActionState
        public enum EItemActionState : byte
        {
           	Idle,
           	Starting,
           	Performing,
           	Stopping,
           	Cooldown,
           	Resetting,
           	EItemActionState_MAX,
        };

        // Enum Athena.EItemActionType
        public enum EItemActionType : byte
        {
           	OneShot,
           	WindUp,
           	Continuous,
           	EItemActionType_MAX,
        };

        // Enum Athena.EItemUseStoppedReason
        public enum EItemUseStoppedReason : byte
        {
           	Stopped,
           	Interrupted,
           	EItemUseStoppedReason_MAX,
        };

        // Enum Athena.EPerspectiveTypes
        public enum EPerspectiveTypes : byte
        {
           	FirstPerson,
           	ThirdPerson,
           	EPerspectiveTypes_MAX,
        };

        // Enum Athena.EItemLifetimeManagement
        public enum EItemLifetimeManagement : byte
        {
           	Automatic,
           	Manual,
           	EItemLifetimeManagement_MAX,
        };

        // Enum Athena.EItemRepresentation
        public enum EItemRepresentation : byte
        {
           	None,
           	Wielded,
           	WorldProxy,
           	EItemRepresentation_MAX,
        };

        // Enum Athena.EHitLocationToleranceResult
        public enum EHitLocationToleranceResult : byte
        {
           	Invalid,
           	Within,
           	Outside,
           	EHitLocationToleranceResult_MAX,
        };

        // Enum Athena.EDoubleActionItemPriority
        public enum EDoubleActionItemPriority : byte
        {
           	None,
           	Primary,
           	Secondary,
           	EDoubleActionItemPriority_MAX,
        };

        // Enum Athena.EContinuousUseID
        public enum EContinuousUseID : byte
        {
           	In,
           	Out,
           	EContinuousUseID_MAX,
        };

        // Enum Athena.EContinuousUseOverride
        public enum EContinuousUseOverride : byte
        {
           	None,
           	ForcePrimary,
           	ForceSecondary,
           	EContinuousUseOverride_MAX,
        };

        // Enum Athena.EItemPassiveState
        public enum EItemPassiveState : byte
        {
           	Idle,
           	Locomotion,
           	Jumping,
           	Turning,
           	Swimming,
           	EItemPassiveState_MAX,
        };

        // Enum Athena.EInventoryType
        public enum EInventoryType : byte
        {
           	Player,
           	Storage,
           	EInventoryType_MAX,
        };

        // Enum Athena.InventoryAction
        public enum InventoryAction : byte
        {
           	Take,
           	Stow,
           	InventoryAction_MAX,
        };

        // Enum Athena.InventoryItemState
        public enum InventoryItemState : byte
        {
           	Default,
           	Locked,
           	InventoryItemState_MAX,
        };

        // Enum Athena.EActionRelevancy
        public enum EActionRelevancy : byte
        {
           	Primary,
           	PrimaryAlt,
           	Secondary,
           	SecondaryAlt,
           	EActionRelevancy_MAX,
        };

        // Enum Athena.EShelterUpdateOption
        public enum EShelterUpdateOption : byte
        {
           	Never,
           	OnStartUp,
           	WithinRainZones,
           	Always,
           	EShelterUpdateOption_MAX,
        };

        // Enum Athena.ESubmergedState
        public enum ESubmergedState : byte
        {
           	Surfaced,
           	PartiallySubmerged,
           	FullySubmerged,
           	ESubmergedState_MAX,
        };

        // Enum Athena.EControllableObjectType
        public enum EControllableObjectType : byte
        {
           	None,
           	Wheel,
           	CapstanArm,
           	Pulley,
           	SailHoist,
           	SailAngle,
           	Cannon,
           	MapTable,
           	KeyedInstrument,
           	Tentacle,
           	Ladder,
           	SkeletonShipWheel,
           	Oars,
           	RowboatSeat,
           	Seat,
           	Bed,
           	HarpoonLauncher,
           	WaterPump,
           	Ride,
           	Book,
           	CombinationLock,
           	EControllableObjectType_MAX,
        };

        // Enum Athena.ELadderType
        public enum ELadderType : byte
        {
           	Generic,
           	BoatSide,
           	BoatCrowsnest,
           	ClamberSpot,
           	ELadderType_MAX,
        };

        // Enum Athena.ELadderTransitionMode
        public enum ELadderTransitionMode : byte
        {
           	OnTop,
           	OffTop,
           	OnBottom,
           	OffBottom,
           	Max,
           	ELadderTransitionMode_MAX,
        };

        // Enum Athena.EMeleeWeaponMovementSpeed
        public enum EMeleeWeaponMovementSpeed : byte
        {
           	Default,
           	SlightlySlowed,
           	Slowed,
           	EMeleeWeaponMovementSpeed_MAX,
        };

        // Enum Athena.EMeleeAttackInterruptReason
        public enum EMeleeAttackInterruptReason : byte
        {
           	Stopping,
           	Comboing,
           	EMeleeAttackInterruptReason_MAX,
        };

        // Enum Athena.EMeleeWeaponAttackType
        public enum EMeleeWeaponAttackType : byte
        {
           	Combo,
           	Heavy,
           	Special,
           	EMeleeWeaponAttackType_MAX,
        };

        // Enum Athena.EBlendedFadeState
        public enum EBlendedFadeState : byte
        {
           	FadingIn,
           	FadingOut,
           	Active,
           	Idle,
           	EBlendedFadeState_MAX,
        };

        // Enum Athena.EEncounterListenerType
        public enum EEncounterListenerType : byte
        {
           	None,
           	Ship,
           	Player,
           	Count,
           	EEncounterListenerType_MAX,
        };

        // Enum Athena.EEncounterMobility
        public enum EEncounterMobility : byte
        {
           	Static,
           	Mobile,
           	EEncounterMobility_MAX,
        };

        // Enum Athena.EEncounterDimensions
        public enum EEncounterDimensions : byte
        {
           	ThreeDimensions,
           	TwoDimensions,
           	EEncounterDimensions_MAX,
        };

        // Enum Athena.EEncounterType
        public enum EEncounterType : byte
        {
           	None,
           	Storm,
           	BarrelsOfPlenty,
           	ShipSighting,
           	ShipEncounter,
           	ShipwreckEventSighting,
           	ShipwreckEventEncounter,
           	ShipwreckAmbientSighting,
           	ShipwreckAmbientEncounter,
           	SkellyFortSighting,
           	SkellyFortEncounter,
           	SkellyFortLegendaryFortSighting,
           	SkellyFortLegendaryFortEncounter,
           	KrakenSighting,
           	KrakenEncounter,
           	TinySharkSighting,
           	TinySharkEncounter,
           	AIShipSighting,
           	AIShipEncounter,
           	FogBank,
           	BoxOfSecrets,
           	ReapersChest,
           	EmergentCaptain,
           	AncientSkelly,
           	AshenLordSighting,
           	AshenLordEncounter,
           	AggressiveGhostShipsAmbientSighting,
           	AggressiveGhostShipsAmbientEncounter,
           	AggressiveGhostShipsEventSighting,
           	AggressiveGhostShipsEventEncounter,
           	SunkenKingdomTreasurySighting,
           	SunkenKingdomTreasuryEncounter,
           	SeaFortSighting,
           	SeaFortEncounter,
           	FortOfTheDamnedFortSighting,
           	FortOfTheDamnedFortEncounter,
           	Count,
           	EEncounterType_MAX,
        };

        // Enum Athena.ESpawnedItemSource
        public enum ESpawnedItemSource : byte
        {
           	None,
           	Quest,
           	Shipwreck,
           	FloatingAtSea,
           	Island,
           	SkellyFort,
           	AIShip,
           	Megalodon,
           	KrakenTentacle,
           	SunkenCurseArtefact,
           	EmergentCaptain,
           	PlayerShip,
           	AggressiveGhostShip,
           	Siren,
           	SunkenKingdom,
           	BuriedByPlayer,
           	OceanCrawlers,
           	ESpawnedItemSource_MAX,
        };

        // Enum Athena.ECompassDirections
        public enum ECompassDirections : byte
        {
           	North,
           	NorthByNorthEast,
           	NorthEast,
           	EastByNorthEast,
           	East,
           	EastBySouthEast,
           	SouthEast,
           	SouthBySouthEast,
           	South,
           	SouthBySouthWest,
           	SouthWest,
           	WestBySouthWest,
           	West,
           	WestByNorthWest,
           	NorthWest,
           	NorthByNorthWest,
           	NumDirections,
           	ECompassDirections_MAX,
        };

        // Enum Athena.ECannotInviteToGuildReason
        public enum ECannotInviteToGuildReason : byte
        {
           	Pending,
           	NotInAGuildedSession,
           	GuildIsFull,
           	PirateIsNotAMemberOfTheGuild,
           	PirateDoesNotHavePermissionToInvite,
           	ECannotInviteToGuildReason_MAX,
        };

        // Enum Athena.ECaptainedSessionType
        public enum ECaptainedSessionType : byte
        {
           	CaptaincyOnly,
           	Guild,
           	ECaptainedSessionType_MAX,
        };

        // Enum Athena.EDefenderLootLevel
        public enum EDefenderLootLevel : byte
        {
           	NotDefended,
           	NoLoot,
           	VeryLow,
           	Low,
           	Medium,
           	High,
           	VeryHigh,
           	EDefenderLootLevel_MAX,
        };

        // Enum Athena.ERewardType
        public enum ERewardType : byte
        {
           	XP,
           	Gold,
           	Entitlement,
           	WaywardTokens,
           	Level,
           	Emblem,
           	Achievement,
           	PremiumCurrency,
           	SeasonXP,
           	Null,
           	ERewardType_MAX,
        };

        // Enum Athena.ERewardRequestFailureReason
        public enum ERewardRequestFailureReason : byte
        {
           	FailedToProcess,
           	TimedOut,
           	Unknown,
           	ERewardRequestFailureReason_MAX,
        };

        // Enum Athena.ERewardRequestPropogation
        public enum ERewardRequestPropogation : byte
        {
           	PropagateToOtherCrewMembers,
           	DoNotPropagateToOtherCrewMembers,
           	ERewardRequestPropogation_MAX,
        };

        // Enum Athena.ERewardRequestAccountLevel
        public enum ERewardRequestAccountLevel : byte
        {
           	RewardAccount,
           	RewardPirate,
           	ERewardRequestAccountLevel_MAX,
        };

        // Enum Athena.ERewardRequestSourceReliability
        public enum ERewardRequestSourceReliability : byte
        {
           	IsFromSecureSource,
           	IsFromInsecureSource,
           	ERewardRequestSourceReliability_MAX,
        };

        // Enum Athena.ERewardRequestSovereignHandIn
        public enum ERewardRequestSovereignHandIn : byte
        {
           	IsSovereignHandIn,
           	IsNotSovereignHandIn,
           	ERewardRequestSovereignHandIn_MAX,
        };

        // Enum Athena.ERewardRequestFactionAllegiance
        public enum ERewardRequestFactionAllegiance : byte
        {
           	RewardFactionAllegiance,
           	DoNotRewardFactionAllegiance,
           	ERewardRequestFactionAllegiance_MAX,
        };

        // Enum Athena.ERewardRequestSeasonRenown
        public enum ERewardRequestSeasonRenown : byte
        {
           	RewardSeasonRenown,
           	DoNotRewardSeasonRenown,
           	ERewardRequestSeasonRenown_MAX,
        };

        // Enum Athena.ERewardRequestXP
        public enum ERewardRequestXP : byte
        {
           	RewardXP,
           	DoNotRewardXP,
           	ERewardRequestXP_MAX,
        };

        // Enum Athena.ERewardRequestGold
        public enum ERewardRequestGold : byte
        {
           	RewardGold,
           	DoNotRewardGold,
           	ERewardRequestGold_MAX,
        };

        // Enum Athena.ERewardRequestNotifyPlayer
        public enum ERewardRequestNotifyPlayer : byte
        {
           	NotifyPlayer,
           	DoNotNotifyPlayer,
           	ERewardRequestNotifyPlayer_MAX,
        };

        // Enum Athena.ERewardDestinationType
        public enum ERewardDestinationType : byte
        {
           	Player,
           	Crew,
           	Alliance,
           	ERewardDestinationType_MAX,
        };

        // Enum Athena.ERewardRequestSkipXpToAllegianceMultiplier
        public enum ERewardRequestSkipXpToAllegianceMultiplier : byte
        {
           	SkipXpToAllegianceMultiplier,
           	DoNotSkipXpToAllegianceMultiplier,
           	ERewardRequestSkipXpToAllegianceMultiplier_MAX,
        };

        // Enum Athena.EQuestMapIcon
        public enum EQuestMapIcon : byte
        {
           	Unknown,
           	XMarksTheSpot,
           	Riddle,
           	Bounty,
           	Merchant,
           	MessageInABottle,
           	CargoRun,
           	SkeletonOrder,
           	Emissary,
           	Wayfinder,
           	MerchantClue,
           	Fishing,
           	TreasureBuriedByYou,
           	TreasureBuriedByOther,
           	Checklist,
           	EQuestMapIcon_MAX,
        };

        // Enum Athena.EQuestType
        public enum EQuestType : byte
        {
           	Unknown,
           	XMarksTheSpot,
           	Riddle,
           	Bounty,
           	Merchant,
           	CargoRun,
           	Tale,
           	Matchmake,
           	EmergantVoyage,
           	Reward,
           	Staging,
           	EQuestType_MAX,
        };

        // Enum Athena.EShowVoyageBannersState
        public enum EShowVoyageBannersState : byte
        {
           	Show,
           	ShowCustom,
           	DontShow,
           	EShowVoyageBannersState_MAX,
        };

        // Enum Athena.EEmergentVoyageSource
        public enum EEmergentVoyageSource : byte
        {
           	Unknown,
           	MessageInABottle,
           	SkeletonOrder,
           	Emissary,
           	CoralMessageInABottle,
           	EEmergentVoyageSource_MAX,
        };

        // Enum Athena.EVoyagesPrioritisedPromptTutorialHintTypes
        public enum EVoyagesPrioritisedPromptTutorialHintTypes : byte
        {
           	GH_XMarks,
           	GH_Riddle,
           	GH_TreasureVault,
           	OOS_Bounty,
           	OOS_GhostShip,
           	MA_AnimalContract,
           	MA_CargoRun,
           	MA_LostShipment,
           	PL_LoTV,
           	PL_LaunchVoyage,
           	MERC_Stash,
           	MERC_Order,
           	ADV_Latest,
           	HintType_None,
           	EVoyagesPrioritisedPromptTutorialHintTypes_MAX,
        };

        // Enum Athena.EQuestStatus
        public enum EQuestStatus : byte
        {
           	Pending,
           	Starting,
           	InProgress,
           	Complete,
           	EQuestStatus_MAX,
        };

        // Enum Athena.EVoyageLocationFilter
        public enum EVoyageLocationFilter : byte
        {
           	Default,
           	Dive,
           	EVoyageLocationFilter_MAX,
        };

        // Enum Athena.EVoyageChangeReason
        public enum EVoyageChangeReason : byte
        {
           	Unknown,
           	PreviousWasCompleted,
           	PreviousWasCancelled,
           	EVoyageChangeReason_MAX,
        };

        // Enum Athena.EQuestResultFromDig
        public enum EQuestResultFromDig : byte
        {
           	None,
           	Chest,
           	QuestItem,
           	EQuestResultFromDig_MAX,
        };

        // Enum Athena.EVoyageJoinStatus
        public enum EVoyageJoinStatus : byte
        {
           	Other,
           	Start,
           	JoinInProgress,
           	EVoyageJoinStatus_MAX,
        };

        // Enum Athena.EVoyageLeaveStatus
        public enum EVoyageLeaveStatus : byte
        {
           	Other,
           	Completed,
           	Cancelled,
           	QuitInProgress,
           	Migrated,
           	EVoyageLeaveStatus_MAX,
        };

        // Enum Athena.EVoyageChapterProgressionType
        public enum EVoyageChapterProgressionType : byte
        {
           	DrivenByAnyQuestCompletion,
           	DrivenBySpecificQuestCompletion,
           	EVoyageChapterProgressionType_MAX,
        };

        // Enum Athena.EQuestDistributionMethod
        public enum EQuestDistributionMethod : byte
        {
           	AllAtOnce,
           	PerChapter,
           	FixedChapters,
           	EQuestDistributionMethod_MAX,
        };

        // Enum Athena.EQuestLocationSelectionMethod
        public enum EQuestLocationSelectionMethod : byte
        {
           	NoRepetitionWithinVoyage,
           	NoRepetitionWithinAdjacentChapters,
           	AllIslandsAvailable,
           	EQuestLocationSelectionMethod_MAX,
        };

        // Enum Athena.EQuestPoolSelectionMethod
        public enum EQuestPoolSelectionMethod : byte
        {
           	Sequential,
           	Random,
           	EQuestPoolSelectionMethod_MAX,
        };

        // Enum Athena.ERiddleActions
        public enum ERiddleActions : byte
        {
           	RaiseLanternAnyone,
           	PlayAnyInstrumentAnyone,
           	Dig,
           	LookAtMap,
           	NumActions,
           	ERiddleActions_MAX,
        };

        // Enum Athena.ELandmarkUniqueness
        public enum ELandmarkUniqueness : byte
        {
           	Unique,
           	NonUnique,
           	ELandmarkUniqueness_MAX,
        };

        // Enum Athena.ELandmarkVagueness
        public enum ELandmarkVagueness : byte
        {
           	Vague,
           	NonVague,
           	ELandmarkVagueness_MAX,
        };

        // Enum Athena.EEventRunLocation
        public enum EEventRunLocation : byte
        {
           	Client,
           	Server,
           	ClientAndServer,
           	EEventRunLocation_MAX,
        };

        // Enum Athena.EItemLoadoutDestroyBehaviour
        public enum EItemLoadoutDestroyBehaviour : byte
        {
           	DoNotDestroy,
           	Destroy,
           	EItemLoadoutDestroyBehaviour_MAX,
        };

        // Enum Athena.EIslandType
        public enum EIslandType : byte
        {
           	Resource,
           	Outpost,
           	Small,
           	Medium,
           	Large,
           	Fort,
           	FortOfTheDamned,
           	Reef,
           	SeaPost,
           	Tutorial,
           	ReapersHideout,
           	Sunken,
           	SunkenKingdomNonStarlight,
           	SeaFortPrime1,
           	SeaFortPrime2,
           	SeaFortOvergrown1,
           	SeaFortOvergrown2,
           	SeaFortPrison1,
           	SeaFortPrison2,
           	None,
           	Max,
           	EIslandType_MAX,
        };

        // Enum Athena.EIslandActiveEventType
        public enum EIslandActiveEventType : byte
        {
           	None,
           	Shrouded,
           	EIslandActiveEventType_MAX,
        };

        // Enum Athena.EIslandReservationState
        public enum EIslandReservationState : byte
        {
           	NotReserved,
           	PartiallyReserved,
           	FullyReserved,
           	EIslandReservationState_MAX,
        };

        // Enum Athena.EGameplayEventSignalType
        public enum EGameplayEventSignalType : byte
        {
           	SkellyFort,
           	SkellyShip,
           	AshenLord,
           	FlameheartGhostShips,
           	MAX,
           	EGameplayEventSignalType_MAX,
        };

        // Enum Athena.EEventHandleState
        public enum EEventHandleState : byte
        {
           	Inactive,
           	Pending,
           	Retrying,
           	Activating,
           	Active,
           	Total,
           	EEventHandleState_MAX,
        };

        // Enum Athena.EEventLockReason
        public enum EEventLockReason : byte
        {
           	Invasion_Matchmaking,
           	Invasion_Invading,
           	Cooldown,
           	AdventureOnDemand,
           	AdventureOnDemand_Arrival,
           	AdventureOnDemand_Cooldown,
           	EEventLockReason_MAX,
        };

        // Enum Athena.EGameEventStatus
        public enum EGameEventStatus : byte
        {
           	Failed,
           	Triggered,
           	Complete,
           	Pending,
           	Register,
           	Unregister,
           	Deactivate,
           	Activating,
           	Retrying,
           	EGameEventStatus_MAX,
        };

        // Enum Athena.EEncounterActorRemovedReason
        public enum EEncounterActorRemovedReason : byte
        {
           	Defeated,
           	Despawned,
           	Deleted,
           	EEncounterActorRemovedReason_MAX,
        };

        // Enum Athena.EGameEventSchedulerEventType
        public enum EGameEventSchedulerEventType : byte
        {
           	Unknown,
           	AI_Kraken,
           	AI_Megalodon,
           	AI_Ship_Aggressive,
           	AI_Ship_Passive,
           	ShipCloud,
           	SkullCloud,
           	Ghostship_Flameheart_Cloud,
           	AshenLordCloud,
           	LegendarySkullCloud,
           	AI_OceanCrawlersOnShip,
           	EGameEventSchedulerEventType_MAX,
        };

        // Enum Athena.EDigDirection
        public enum EDigDirection : byte
        {
           	None,
           	Exhuming,
           	Burying,
           	EDigDirection_MAX,
        };

        // Enum Athena.EFeedableType
        public enum EFeedableType : byte
        {
           	None,
           	Meat,
           	Fruit,
           	Bait,
           	EFeedableType_MAX,
        };

        // Enum Athena.EAmmoEffectState
        public enum EAmmoEffectState : byte
        {
           	Idle,
           	Processing,
           	Stopped,
           	EAmmoEffectState_MAX,
        };

        // Enum Athena.ETreasureMapVerticalAlignment
        public enum ETreasureMapVerticalAlignment : byte
        {
           	Top,
           	Centre,
           	ETreasureMapVerticalAlignment_MAX,
        };

        // Enum Athena.ETreasureMapHorizontalAlignment
        public enum ETreasureMapHorizontalAlignment : byte
        {
           	Left,
           	Centre,
           	Right,
           	ETreasureMapHorizontalAlignment_MAX,
        };

        // Enum Athena.EAnimatedMechanismTickCost
        public enum EAnimatedMechanismTickCost : byte
        {
           	Low,
           	High,
           	EAnimatedMechanismTickCost_MAX,
        };

        // Enum Athena.EMechanismActionActivationMode
        public enum EMechanismActionActivationMode : byte
        {
           	Any,
           	All,
           	EMechanismActionActivationMode_MAX,
        };

        // Enum Athena.EMechanismActionState
        public enum EMechanismActionState : byte
        {
           	Active,
           	Inactive,
           	EMechanismActionState_MAX,
        };

        // Enum Athena.EMechanismActionType
        public enum EMechanismActionType : byte
        {
           	OneShot,
           	Continuous,
           	EMechanismActionType_MAX,
        };

        // Enum Athena.EMechanismTriggerState
        public enum EMechanismTriggerState : byte
        {
           	Active,
           	Inactive,
           	Disabled,
           	EMechanismTriggerState_MAX,
        };

        // Enum Athena.EMechanismTriggerType
        public enum EMechanismTriggerType : byte
        {
           	OneShot,
           	Continuous,
           	EMechanismTriggerType_MAX,
        };

        // Enum Athena.ELockAnimationState
        public enum ELockAnimationState : byte
        {
           	None,
           	InterpolatingIn,
           	Unlocking,
           	ELockAnimationState_MAX,
        };

        // Enum Athena.EBootyTypes
        public enum EBootyTypes : byte
        {
           	Invalid,
           	TreasureChest,
           	BountySkull,
           	MerchantCrate,
           	GunpowderBarrel,
           	TreasureArtifact,
           	AncientChest,
           	PirateLordBooty,
           	BoxOfSecrets,
           	CargoRunCrate,
           	MermaidGem,
           	CollectorsChest,
           	DroppedPouch,
           	FishedItem,
           	Food,
           	TaleArtifact,
           	CampaignBooty,
           	ReapersBooty,
           	ReapersBounty,
           	RitualSkull,
           	SkullOfDestiny,
           	AshenBooty,
           	AshenGift,
           	EmissaryFlotsam,
           	GoldMound,
           	MerchantManifest,
           	BreathOfTheSea,
           	CaptainsLog,
           	SirenTrident,
           	BaitCrate,
           	NonSellable,
           	EBootyTypes_MAX,
        };

        // Enum Athena.EItemOwnershipType
        public enum EItemOwnershipType : byte
        {
           	NotOwned,
           	Owned,
           	FirstOwner,
           	FirstOwnerFromCrew,
           	OriginalOwner,
           	Stolen,
           	FirstStolenByCrew,
           	EItemOwnershipType_MAX,
        };

        // Enum Athena.EShovelDigType
        public enum EShovelDigType : byte
        {
           	Success,
           	PatDownSuccess,
           	DeflectOffHardGround,
           	Invalid,
           	None,
           	EShovelDigType_MAX,
        };

        // Enum Athena.EIngestionState
        public enum EIngestionState : byte
        {
           	Idle,
           	InToIngestion,
           	OutOfIngestion,
           	EIngestionState_MAX,
        };

        // Enum Athena.EAthenaAITeam
        public enum EAthenaAITeam : byte
        {
           	Players,
           	Skeletons,
           	Fauna_Chickens,
           	Fauna_Pigs,
           	Fauna_Snakes,
           	NeutralSwimmingCreature,
           	Sharks,
           	TinyShark,
           	Kraken,
           	KrakenTentacle,
           	NeutralCreatureCharacters,
           	Pets,
           	Fire,
           	AggressiveGhostShip,
           	Sirens,
           	LordPinch,
           	OceanCrawlers,
           	Phantoms,
           	PlayerAllied,
           	Max,
           	EAthenaAITeam_MAX,
        };

        // Enum Athena.ENPCDisplayNameType
        public enum ENPCDisplayNameType : byte
        {
           	NPCAndIsland,
           	NPCOnly,
           	IslandOnly,
           	ENPCDisplayNameType_MAX,
        };

        // Enum Athena.EOfferingNPCSpawnHand
        public enum EOfferingNPCSpawnHand : byte
        {
           	Left,
           	Right,
           	EOfferingNPCSpawnHand_MAX,
        };

        // Enum Athena.ECollectorsChestMaterial
        public enum ECollectorsChestMaterial : byte
        {
           	Wood,
           	Stone,
           	ECollectorsChestMaterial_MAX,
        };

        // Enum Athena.EMermaidState
        public enum EMermaidState : byte
        {
           	Rising,
           	Idle,
           	Disappearing,
           	EMermaidState_MAX,
        };

        // Enum Athena.EMovingWorldMarkerAttachType
        public enum EMovingWorldMarkerAttachType : byte
        {
           	PlayerOnShip,
           	Player,
           	Static,
           	ParentActor,
           	MAX,
           	EMovingWorldMarkerAttachType_MAX,
        };

        // Enum Athena.EBootyStorageMaterialState
        public enum EBootyStorageMaterialState : byte
        {
           	Empty,
           	Partial,
           	Full,
           	EBootyStorageMaterialState_MAX,
        };

        // Enum Athena.ENPCChatType
        public enum ENPCChatType : byte
        {
           	Chat,
           	Subtitles,
           	ENPCChatType_MAX,
        };

        // Enum Athena.ENPCDialogReactionSuppression
        public enum ENPCDialogReactionSuppression : byte
        {
           	None,
           	SuppressResponseOnly,
           	SuppressAudioOnly,
           	SuppressBoth,
           	ENPCDialogReactionSuppression_MAX,
        };

        // Enum Athena.ETransientCampfireStateChange
        public enum ETransientCampfireStateChange : byte
        {
           	Extinguished,
           	WoodAdded,
           	Ignited,
           	Stoked,
           	BurnedDown,
           	ETransientCampfireStateChange_MAX,
        };

        // Enum Athena.EReapersMarkTrackedBootyItemType
        public enum EReapersMarkTrackedBootyItemType : byte
        {
           	None,
           	GenericBooty,
           	FOTDKey,
           	ReapersBounty,
           	DoubloonReapersChest,
           	LegendaryFortKey,
           	EReapersMarkTrackedBootyItemType_MAX,
        };

        // Enum Athena.EReapersMarkTrackedVoyageType
        public enum EReapersMarkTrackedVoyageType : byte
        {
           	None,
           	NonAllianceVoyage,
           	AllianceVoyage,
           	EReapersMarkTrackedVoyageType_MAX,
        };

        // Enum Athena.EIslandTextureSourceType
        public enum EIslandTextureSourceType : byte
        {
           	TreasureMap,
           	WorldMap,
           	EIslandTextureSourceType_MAX,
        };

        // Enum Athena.EWorldMapShipType
        public enum EWorldMapShipType : byte
        {
           	None,
           	IsInAlliance,
           	IsOwnedShip,
           	IsContestShip,
           	IsReapersTrackedShip,
           	IsInTunnel,
           	IsInFaction,
           	IsFactionMaxRank,
           	IsInvadingShip,
           	EWorldMapShipType_MAX,
        };

        // Enum Athena.EStickinessType
        public enum EStickinessType : byte
        {
           	DontStick,
           	StickTemporarily,
           	StickForever,
           	EStickinessType_MAX,
        };

        // Enum Athena.ENotificationType
        public enum ENotificationType : byte
        {
           	Chat,
           	Server,
           	FormattedChat,
           	STTChat,
           	EmoteDescription,
           	ENotificationType_MAX,
        };

        // Enum Athena.ECutsceneActivatonState
        public enum ECutsceneActivatonState : byte
        {
           	Enabled,
           	Disabled,
           	Active,
           	FinishedPlaying,
           	Decommissioned,
           	ECutsceneActivatonState_MAX,
        };

        // Enum Athena.ECutscenePlayResult
        public enum ECutscenePlayResult : byte
        {
           	Success,
           	Failure,
           	Queued,
           	ECutscenePlayResult_MAX,
        };

        // Enum Athena.ERiddleActionLocationOffsets
        public enum ERiddleActionLocationOffsets : byte
        {
           	PerformActionAtLocation,
           	PerformActionAtCompassDirectionOffsetFromLocation,
           	ERiddleActionLocationOffsets_MAX,
        };

        // Enum Athena.ERiddleLocations
        public enum ERiddleLocations : byte
        {
           	NotOnIsland,
           	UniqueNonVagueLandmark,
           	UniqueVagueLandmark,
           	NonUniqueNonVagueLandmark,
           	Island,
           	ERiddleLocations_MAX,
        };

        // Enum Athena.EFaunaAnimationSnakeAttackDirection
        public enum EFaunaAnimationSnakeAttackDirection : byte
        {
           	Forwards,
           	Backwards,
           	EFaunaAnimationSnakeAttackDirection_MAX,
        };

        // Enum Athena.EFaunaAnimationStartledLevel
        public enum EFaunaAnimationStartledLevel : byte
        {
           	None,
           	Low,
           	High,
           	EFaunaAnimationStartledLevel_MAX,
        };

        // Enum Athena.EFaunaAnimationLocation
        public enum EFaunaAnimationLocation : byte
        {
           	Land,
           	Sea,
           	Underwater,
           	EFaunaAnimationLocation_MAX,
        };

        // Enum Athena.EFaunaAnimationState
        public enum EFaunaAnimationState : byte
        {
           	Idle,
           	Locomotion,
           	Impact,
           	DyingLoop,
           	Death,
           	Special,
           	EFaunaAnimationState_MAX,
        };

        // Enum Athena.ENamedPointCollectionSearchTag
        public enum ENamedPointCollectionSearchTag : byte
        {
           	None,
           	PirateLegendsVoyage,
           	PirateLegends_HauntedFort,
           	PirateLegends_HauntedIsland,
           	PirateLegends_LyingMap,
           	PirateLegends_PictureMap,
           	PirateLegends_ShipwreckGraveyard,
           	PirateLegends_ZoomMap,
           	ENamedPointCollectionSearchTag_MAX,
        };

        // Enum Athena.ENamedPointGroupSearchTag
        public enum ENamedPointGroupSearchTag : byte
        {
           	None,
           	ItemSpawnLocation,
           	ItemBuryLocation,
           	Exclude,
           	ENamedPointGroupSearchTag_MAX,
        };

        // Enum Athena.EOverlapFailCondition
        public enum EOverlapFailCondition : byte
        {
           	OnBegin,
           	OnEnd,
           	EOverlapFailCondition_MAX,
        };

        // Enum Athena.EObstacleFailCondition
        public enum EObstacleFailCondition : byte
        {
           	OutOfBounds,
           	OutOfTime,
           	OutOfOrder,
           	Death,
           	LeftCrew,
           	CourseUniqueFailure,
           	EObstacleFailCondition_MAX,
        };

        // Enum Athena.EObstacleCourseState
        public enum EObstacleCourseState : byte
        {
           	WaitForStart,
           	Playing,
           	End,
           	Fail,
           	EObstacleCourseState_MAX,
        };

        // Enum Athena.ERevealState
        public enum ERevealState : byte
        {
           	Hidden,
           	FarRevealed,
           	CloseRevealed,
           	ERevealState_MAX,
        };

        // Enum Athena.EStarFieldPuzzleState
        public enum EStarFieldPuzzleState : byte
        {
           	NotStarted,
           	Starting,
           	Running,
           	Completed,
           	Dimmed,
           	Cleanup,
           	MAX,
           	EStarFieldPuzzleState_MAX,
        };

        // Enum Athena.EStarFieldSkySpinState
        public enum EStarFieldSkySpinState : byte
        {
           	NoSpinToQueue,
           	SpinToQueue,
           	EStarFieldSkySpinState_MAX,
        };

        // Enum Athena.EWheelAnimationType
        public enum EWheelAnimationType : byte
        {
           	SmallTurn,
           	LeftTurnMid,
           	LeftTurnFast,
           	RightTurnMid,
           	RightTurnFast,
           	EWheelAnimationType_MAX,
        };

        // Enum Athena.EWheelDirection
        public enum EWheelDirection : byte
        {
           	Any,
           	Anticlockwise,
           	Clockwise,
           	EWheelDirection_MAX,
        };

        // Enum Athena.EVoyageDifficultyScope
        public enum EVoyageDifficultyScope : byte
        {
           	Tale,
           	Standard,
           	Emergent,
           	EVoyageDifficultyScope_MAX,
        };

        // Enum Athena.EMastDamageState
        public enum EMastDamageState : byte
        {
           	Intact,
           	Secured,
           	Upright,
           	FreeToMove,
           	EMastDamageState_MAX,
        };

        // Enum Athena.EMastType
        public enum EMastType : byte
        {
           	Front,
           	Main,
           	Rear,
           	EMastType_MAX,
        };

        // Enum Athena.ERowBraking
        public enum ERowBraking : byte
        {
           	None,
           	BrakeLeft,
           	BrakeRight,
           	BrakeBoth,
           	ERowBraking_MAX,
        };

        // Enum Athena.EObstacleType
        public enum EObstacleType : byte
        {
           	None,
           	SeaRock,
           	UnderseaRock,
           	Island,
           	AIShip,
           	PlayerShip,
           	Shipwreck,
           	GameEventExclusionZone,
           	HauntedSeaFort,
           	EObstacleType_MAX,
        };

        // Enum Athena.EWreckSpawnBlockType
        public enum EWreckSpawnBlockType : byte
        {
           	AlwaysBlock,
           	NeverBlock,
           	PotentialBlockage,
           	EWreckSpawnBlockType_MAX,
        };

        // Enum Athena.EWreckSpawnCheckFlag
        public enum EWreckSpawnCheckFlag : byte
        {
           	None,
           	Players,
           	Ships,
           	AmbientWrecks,
           	CustomWrecks,
           	Islands,
           	AmbientWrecksWithNearPlayers,
           	AmbientWrecksWithoutNearPlayers,
           	SeaRocks,
           	EWreckSpawnCheckFlag_MAX,
        };

        // Enum Athena.DrowningState
        public enum DrowningState : byte
        {
           	NotDrowning,
           	Drowning,
           	Gulping,
           	ResetDrowning,
           	DrowningState_MAX,
        };

        // Enum Athena.ETunnelOfTheDamnedShipSailState
        public enum ETunnelOfTheDamnedShipSailState : byte
        {
           	Preserved,
           	Lowered,
           	Raised,
           	ETunnelOfTheDamnedShipSailState_MAX,
        };

        // Enum Athena.ETunnelPresenterStartMode
        public enum ETunnelPresenterStartMode : byte
        {
           	OnInitialize,
           	OnMatchmakingStart,
           	ETunnelPresenterStartMode_MAX,
        };

        // Enum Athena.ESwimmingMode
        public enum ESwimmingMode : byte
        {
           	SwimmingMode_None,
           	SwimmingMode_Swimming,
           	SwimmingMode_Sinking,
           	SwimmingMode_MAX,
        };

        // Enum Athena.ESwimmingCreatureDeathCustomEventEnum
        public enum ESwimmingCreatureDeathCustomEventEnum : byte
        {
           	None,
           	StartSinking,
           	StartSinkingAnim,
           	ESwimmingCreatureDeathCustomEventEnum_MAX,
        };

        // Enum Athena.EVoyageLocationType
        public enum EVoyageLocationType : byte
        {
           	Fixed,
           	Random,
           	Closest,
           	EVoyageLocationType_MAX,
        };

        // Enum Athena.EStormEffectLockReasons
        public enum EStormEffectLockReasons : byte
        {
           	InsideExclusionVolume,
           	AccessibilityToggledOff,
           	EStormEffectLockReasons_MAX,
        };

        // Enum Athena.EAggressiveGhostShipCannonFacingDirection
        public enum EAggressiveGhostShipCannonFacingDirection : byte
        {
           	Left,
           	Right,
           	EAggressiveGhostShipCannonFacingDirection_MAX,
        };

        // Enum Athena.EAggressiveGhostShipSpawnDirectionType
        public enum EAggressiveGhostShipSpawnDirectionType : byte
        {
           	Random,
           	AlwaysClockwise,
           	AlwaysAntiClockwise,
           	MatchNearbyEncounter,
           	OppositeToNearbyEncounter,
           	EAggressiveGhostShipSpawnDirectionType_MAX,
        };

        // Enum Athena.EAggressiveGhostShipType
        public enum EAggressiveGhostShipType : byte
        {
           	Grunt,
           	FormationGrunt,
           	FormationLeader,
           	CaptainFormationGrunt,
           	Captain,
           	EAggressiveGhostShipType_MAX,
        };

        // Enum Athena.EAggressiveGhostShipAllegiance
        public enum EAggressiveGhostShipAllegiance : byte
        {
           	HostileToPlayers,
           	FriendlyToPlayers,
           	EAggressiveGhostShipAllegiance_MAX,
        };

        // Enum Athena.FAggressiveGhostShipEncounterWaveProgressAnnounceMusicType
        public enum FAggressiveGhostShipEncounterWaveProgressAnnounceMusicType : byte
        {
           	None,
           	Formation,
           	FinalWaveCaptain,
           	FinalWaveFlameheart,
           	EncounterComplete,
           	FAggressiveGhostShipEncounterWaveProgressAnnounceMusicType_MAX,
        };

        // Enum Athena.EAggressiveGhostShipTarget
        public enum EAggressiveGhostShipTarget : byte
        {
           	None,
           	Player,
           	NearPlayer,
           	Ship,
           	NearShip,
           	MermaidStatue,
           	NearMermaidStatue,
           	EnemyGhostShip,
           	NearEnemyGhostShip,
           	CannonRowboat,
           	NearCannonRowboat,
           	GenericExtraTarget,
           	NearGenericExtraTarget,
           	Anywhere,
           	EAggressiveGhostShipTarget_MAX,
        };

        // Enum Athena.EHitRegShotType
        public enum EHitRegShotType : byte
        {
           	Invalid,
           	HitScanShot,
           	TimeOfFlightShot,
           	EHitRegShotType_MAX,
        };

        // Enum Athena.EHitRegSnapshotDisagreementType
        public enum EHitRegSnapshotDisagreementType : byte
        {
           	NoDisagreement,
           	DifferentComponentsOnSameActor,
           	DifferentActors,
           	DesynchronizedData,
           	EHitRegSnapshotDisagreementType_MAX,
        };

        // Enum Athena.ERespawnPointOrientation
        public enum ERespawnPointOrientation : byte
        {
           	None,
           	North,
           	South,
           	West,
           	East,
           	Outward,
           	Inward,
           	Random,
           	ERespawnPointOrientation_MAX,
        };

        // Enum Athena.EContestState
        public enum EContestState : byte
        {
           	Idle,
           	Staging,
           	Contest,
           	PostContest,
           	Reward,
           	EContestState_MAX,
        };

        // Enum Athena.EContestScoreId
        public enum EContestScoreId : byte
        {
           	Undefined,
           	Silver,
           	EContestScoreId_MAX,
        };

        // Enum Athena.EMechanismAnimationEventType
        public enum EMechanismAnimationEventType : byte
        {
           	OneShot,
           	Continuous,
           	EMechanismAnimationEventType_MAX,
        };

        // Enum Athena.ETimedDoorCheckpointState
        public enum ETimedDoorCheckpointState : byte
        {
           	Lowering,
           	Jammed,
           	ETimedDoorCheckpointState_MAX,
        };

        // Enum Athena.ETimedDoorState
        public enum ETimedDoorState : byte
        {
           	Lowering,
           	Closed,
           	Opening,
           	Jammed,
           	ETimedDoorState_MAX,
        };

        // Enum Athena.ESimpleAnimatedMechanismActionMode
        public enum ESimpleAnimatedMechanismActionMode : byte
        {
           	OneShot,
           	OneShotRetriggerable,
           	Continuous,
           	ESimpleAnimatedMechanismActionMode_MAX,
        };

        // Enum Athena.ECollisionShapeType
        public enum ECollisionShapeType : byte
        {
           	Sphere,
           	Box,
           	ECollisionShapeType_MAX,
        };

        // Enum Athena.ECombinationDirection
        public enum ECombinationDirection : byte
        {
           	None,
           	Left,
           	Right,
           	ECombinationDirection_MAX,
        };

        // Enum Athena.ESwitchMechanismTriggerRotationMode
        public enum ESwitchMechanismTriggerRotationMode : byte
        {
           	Forward,
           	Backwards,
           	Both,
           	ESwitchMechanismTriggerRotationMode_MAX,
        };

        // Enum Athena.ESwitchMechanismTriggerRandomSelectionMode
        public enum ESwitchMechanismTriggerRandomSelectionMode : byte
        {
           	Any,
           	InactiveOnly,
           	ESwitchMechanismTriggerRandomSelectionMode_MAX,
        };

        // Enum Athena.EVFXMechanismAnimationEventMode
        public enum EVFXMechanismAnimationEventMode : byte
        {
           	FixedRelativeOffset,
           	FixedMechanismVFXComponentLocation,
           	AttachedToSceneComponent,
           	EVFXMechanismAnimationEventMode_MAX,
        };

        // Enum Athena.ESwitchMechanismTriggerPlankState
        public enum ESwitchMechanismTriggerPlankState : byte
        {
           	Idle,
           	RotateToStart,
           	RotateToEnd,
           	ESwitchMechanismTriggerPlankState_MAX,
        };

        // Enum Athena.EOverrideState
        public enum EOverrideState : byte
        {
           	Free,
           	StartingOverride,
           	EndingOverride,
           	Overridden,
           	EOverrideState_MAX,
        };

        // Enum Athena.EEventRoomState
        public enum EEventRoomState : byte
        {
           	Inactive,
           	Waiting,
           	Active,
           	Completed,
           	Aftermath,
           	EEventRoomState_MAX,
        };

        // Enum Athena.EBaitType
        public enum EBaitType : byte
        {
           	NoBait,
           	EarthWorms,
           	Grubs,
           	Leeches,
           	EBaitType_MAX,
        };

        // Enum Athena.EFishSize
        public enum EFishSize : byte
        {
           	Medium,
           	Large,
           	EFishSize_MAX,
        };

        // Enum Athena.EFishSpawnTimeOfDay
        public enum EFishSpawnTimeOfDay : byte
        {
           	AnyTime,
           	OnlyDay,
           	OnlyNight,
           	EFishSpawnTimeOfDay_MAX,
        };

        // Enum Athena.EFishAnimationState
        public enum EFishAnimationState : byte
        {
           	SwimmingLoop,
           	Fighting,
           	Tired,
           	Escaped,
           	Caught,
           	EFishAnimationState_MAX,
        };

        // Enum Athena.EFishingFishState
        public enum EFishingFishState : byte
        {
           	NotSet,
           	RisingFromTheDepths,
           	AttachedToFloat_MovingToFloat,
           	AttachedToFloat_Battling,
           	AttachedToFloat_Tired,
           	AttachedToFloat_Caught,
           	AttachedToFloat_Caught_Instant,
           	Escaping,
           	EFishingFishState_MAX,
        };

        // Enum Athena.EFishingFloatState
        public enum EFishingFloatState : byte
        {
           	NotSet,
           	AttachedToRod,
           	Casting,
           	CastingFailed,
           	FloatingOnWater,
           	BringingInCatch,
           	Retracting,
           	ViolentlyRetracting,
           	EFishingFloatState_MAX,
        };

        // Enum Athena.EFishingMiniGamePlayerInputBattlingDirection
        public enum EFishingMiniGamePlayerInputBattlingDirection : byte
        {
           	BattlingAgainstLeft,
           	BattlingAgainstRight,
           	BattlingAgainstAway,
           	EFishingMiniGamePlayerInputBattlingDirection_MAX,
        };

        // Enum Athena.EFishingMiniGamePlayerInputDirection
        public enum EFishingMiniGamePlayerInputDirection : byte
        {
           	None,
           	Left,
           	Away,
           	Right,
           	Towards,
           	EFishingMiniGamePlayerInputDirection_MAX,
        };

        // Enum Athena.EFishingMiniGameEscapeDirection
        public enum EFishingMiniGameEscapeDirection : byte
        {
           	None,
           	Left,
           	Away,
           	Right,
           	EFishingMiniGameEscapeDirection_MAX,
        };

        // Enum Athena.EFishingMiniGameState
        public enum EFishingMiniGameState : byte
        {
           	Battling,
           	Recovering,
           	EFishingMiniGameState_MAX,
        };

        // Enum Athena.EFishingRodServerState
        public enum EFishingRodServerState : byte
        {
           	NotBeingUsed,
           	PreparingToCast,
           	VerifyingCastLocation,
           	Casting,
           	DelayBeforeSpawningFish,
           	RequestFishSpawnWhenPossible,
           	WaitingForAsyncLoadToFinish,
           	WaitingForFishToBite,
           	FishMovingInToBite,
           	FishOnRodAndWaitingForPlayerInput,
           	FishMovingToMinimumDistanceFromPlayer,
           	FishingMiniGameUnderway,
           	FishCaught,
           	ReelingInAComedyItem,
           	ComedyItemCaught,
           	EFishingRodServerState_MAX,
        };

        // Enum Athena.EFishingRodRetractLineVisuals
        public enum EFishingRodRetractLineVisuals : byte
        {
           	None,
           	Normal,
           	Violent,
           	EFishingRodRetractLineVisuals_MAX,
        };

        // Enum Athena.EFishingRodBattlingState
        public enum EFishingRodBattlingState : byte
        {
           	NotBattling,
           	Battling_Tiring,
           	Battling_NotTiring,
           	Battling_Tired,
           	EFishingRodBattlingState_MAX,
        };

        // Enum Athena.EFishingState
        public enum EFishingState : byte
        {
           	None,
           	Casting,
           	CastForwards,
           	CastSuccess,
           	CastFailed,
           	Fishing,
           	IntoFighting,
           	Fighting,
           	Success,
           	Failure,
           	EFishingState_MAX,
        };

        // Enum Athena.EMusicalInstrumentType
        public enum EMusicalInstrumentType : byte
        {
           	Banjo,
           	Bass,
           	Concertina,
           	Drums,
           	HurdyGurdy,
           	OneManBand,
           	Sousaphone,
           	Ukulele,
           	VoiceBox,
           	Any,
           	Total,
           	EMusicalInstrumentType_MAX,
        };

        // Enum Athena.EShantyEnsembleOption
        public enum EShantyEnsembleOption : byte
        {
           	TryToJoinExistingNearbyEnsemble,
           	ForceNewEnsemble,
           	EShantyEnsembleOption_MAX,
        };

        // Enum Athena.EPetMontageAnimationType
        public enum EPetMontageAnimationType : byte
        {
           	None,
           	OneShot,
           	LoopingOneShot,
           	LoopingStaged,
           	EPetMontageAnimationType_MAX,
        };

        // Enum Athena.EPetMontageAnimationState
        public enum EPetMontageAnimationState : byte
        {
           	None,
           	OneShot,
           	ContinuousIn,
           	ContinuousLoop,
           	ContinuousOut,
           	ExitContinuousLoop,
           	EPetMontageAnimationState_MAX,
        };

        // Enum Athena.EAthenaAnimationPetRoamingState
        public enum EAthenaAnimationPetRoamingState : byte
        {
           	Idle,
           	Locomotion,
           	LocomtionScared,
           	Unique,
           	React,
           	Call,
           	Concealed,
           	FlyCannon,
           	Cheer,
           	Interested,
           	Talking,
           	Happy,
           	Caged,
           	Grumpy,
           	Angry,
           	Dance,
           	Cleaning,
           	Exit,
           	Arrive,
           	Startled,
           	Inactive,
           	TakingOff,
           	Landing,
           	Flying,
           	Yawn,
           	Scared,
           	Protective,
           	Vomit,
           	Chew,
           	Sneeze,
           	Sleep,
           	Hangout_A,
           	Hangout_B,
           	Hangout_C,
           	LookAround,
           	Meme,
           	EAthenaAnimationPetRoamingState_MAX,
        };

        // Enum Athena.EAthenaAnimationPetHeldReactionState
        public enum EAthenaAnimationPetHeldReactionState : byte
        {
           	None,
           	Chew,
           	PositiveReact,
           	NegativeReact,
           	RefuseReact,
           	EAthenaAnimationPetHeldReactionState_MAX,
        };

        // Enum Athena.EAthenaAnimationPetHeldState
        public enum EAthenaAnimationPetHeldState : byte
        {
           	Idle,
           	Underwater,
           	UnEquip,
           	Equip,
           	Inactive,
           	Drop,
           	Stroke,
           	Give,
           	EAthenaAnimationPetHeldState_MAX,
        };

        // Enum Athena.EAthenaAnimationPetSpawnState
        public enum EAthenaAnimationPetSpawnState : byte
        {
           	Null,
           	BeingHeld,
           	Roaming,
           	EAthenaAnimationPetSpawnState_MAX,
        };

        // Enum Athena.EWorldRegion
        public enum EWorldRegion : byte
        {
           	BlueSeaOfPlenty,
           	TheWilds,
           	WideSeaOfPlunder,
           	DevilsRoar,
           	ShoresOfGold,
           	EWorldRegion_MAX,
        };

        // Enum Athena.MapInventoryItemState
        public enum MapInventoryItemState : byte
        {
           	Default,
           	Locked,
           	MapInventoryItemState_MAX,
        };

        // Enum Athena.EEventFortDestructionReason
        public enum EEventFortDestructionReason : byte
        {
           	Defeated,
           	Despawn,
           	EEventFortDestructionReason_MAX,
        };

        // Enum Athena.ESeaFortState
        public enum ESeaFortState : byte
        {
           	Inactive,
           	Dormant,
           	Battle,
           	ESeaFortState_MAX,
        };

        // Enum Athena.ESeaFortAlignmentState
        public enum ESeaFortAlignmentState : byte
        {
           	Idle,
           	Belle,
           	Reaper,
           	ESeaFortAlignmentState_MAX,
        };

        // Enum Athena.EPrisonerPosition
        public enum EPrisonerPosition : byte
        {
           	None,
           	Hitting,
           	Kneeling,
           	Stood,
           	EPrisonerPosition_MAX,
        };

        // Enum Athena.EAlignmentTableFlameSize
        public enum EAlignmentTableFlameSize : byte
        {
           	None,
           	Small,
           	Medium,
           	Large,
           	EAlignmentTableFlameSize_MAX,
        };

        // Enum Athena.EShipType
        public enum EShipType : byte
        {
           	Sloop,
           	Brigantine,
           	Galleon,
           	Invalid,
           	EShipType_MAX,
        };

        // Enum Athena.EShipLoadoutPersistence
        public enum EShipLoadoutPersistence : byte
        {
           	Temporary,
           	Persistent,
           	EShipLoadoutPersistence_MAX,
        };

        // Enum Athena.ECanvasBlendMode
        public enum ECanvasBlendMode : byte
        {
           	Opaque,
           	Masked,
           	Translucent,
           	Additive,
           	Modulate,
           	MaskedDistanceField,
           	MaskedDistanceFieldShadowed,
           	TranslucentDistanceField,
           	TranslucentDistanceFieldShadowed,
           	AlphaComposite,
           	AlphaBlend,
           	TranslucentAlphaOnly,
           	PremultipliedAlpha,
           	ECanvasBlendMode_MAX,
        };

        // Enum Athena.EWidgetVisibilityGroup
        public enum EWidgetVisibilityGroup : byte
        {
           	Persistent,
           	AlwaysHidden,
           	Group1,
           	Group2,
           	EWidgetVisibilityGroup_MAX,
        };

        // Enum Athena.EWieldableBookPageType
        public enum EWieldableBookPageType : byte
        {
           	Single,
           	Double,
           	EWieldableBookPageType_MAX,
        };

        // Enum Athena.EWieldableBookPageRenderingMode
        public enum EWieldableBookPageRenderingMode : byte
        {
           	NoPagesRendered,
           	DrawLeftPageAsCurrentOnly,
           	DrawLeftPageAsPreviousAndRightPageAsCurrent,
           	DrawLeftPageAsCurrentAndRightPageAsNext,
           	EWieldableBookPageRenderingMode_MAX,
        };

        // Enum Athena.ERenderPageResult
        public enum ERenderPageResult : byte
        {
           	RenderedPage,
           	NoWorkDone,
           	ERenderPageResult_MAX,
        };

        // Enum Athena.EEventLogEntryType
        public enum EEventLogEntryType : byte
        {
           	None,
           	PlayerDied,
           	PlayerShipSpottedSloop,
           	PlayerShipSpottedBrigantine,
           	PlayerShipSpottedGalleon,
           	ArrivedAtIsland,
           	ArrivedAtShrine,
           	DepartedIsland,
           	DepartedShrine,
           	BuriedTreasure,
           	VoyageComplete,
           	FortComplete,
           	FortCompleteKeelHaulFort,
           	FortCompleteHiddenSpringKeep,
           	FortCompleteSailorsKnotStronghold,
           	FortCompleteLostGoldFort,
           	FortCompleteTheCrowsNestFortress,
           	FortCompleteSkullKeep,
           	FortCompleteKrakenWatchtower,
           	FortCompleteSharkFinCamp,
           	FortCompleteMoltenSandsFortress,
           	FortOfFortuneCompleteKeelHaulFort,
           	FortOfFortuneCompleteHiddenSpringKeep,
           	FortOfFortuneCompleteSailorsKnotStronghold,
           	FortOfFortuneCompleteLostGoldFort,
           	FortOfFortuneCompleteTheCrowsNestFortress,
           	FortOfFortuneCompleteSkullKeep,
           	FortOfFortuneCompleteKrakenWatchtower,
           	FortOfFortuneCompleteSharkFinCamp,
           	FortOfFortuneCompleteMoltenSandsFortress,
           	DamnedFortComplete,
           	SeaFortConqueredSeaFort01,
           	SeaFortConqueredSeaFort02,
           	SeaFortConqueredSeaFort03,
           	SeaFortConqueredSeaFort04,
           	SeaFortConqueredSeaFort05,
           	SeaFortConqueredSeaFort06,
           	TreasuryCompletedSunkenShores,
           	TreasuryCompletedLostAncients,
           	TreasuryCompletedSecretWilds,
           	TallTaleComplete,
           	TallTaleShroudBreakerComplete,
           	TallTaleCursedRogueComplete,
           	TallTaleLegendaryStorytellerComplete,
           	TallTaleStarsOfAThiefComplete,
           	TallTaleWildRoseComplete,
           	TallTaleArtOfTheTricksterComplete,
           	TallTaleFateOfTheMorningstarComplete,
           	TallTaleRevengeOfTheMorningstarComplete,
           	TallTaleShoresOfGoldComplete,
           	TallTaleAshenDragonComplete,
           	TallTaleHeartOfFireComplete,
           	TallTaleAPiratesLifeComplete,
           	TallTaleTheSunkenPearlComplete,
           	TallTaleCaptainsOfTheDamnedComplete,
           	TallTaleDarkBrethrenComplete,
           	TallTaleLordsOfTheSeaComplete,
           	LordFought,
           	LordDefeated,
           	LordDefeatedCaptainBriggsy,
           	LordDefeatedGraymarrow,
           	LordDefeatedGoldHoarder,
           	LordDefeatedGhostGraymarrow,
           	LordDefeatedMutinousHelmsman,
           	LordDefeatedTwoFacedScoundrel,
           	LordDefeatedDuchess,
           	LordDefeatedOldHoratio,
           	LordDefeatedWardenChi,
           	LordDefeatedCaptainGrimm,
           	LordDefeatedRedRuth,
           	FlameheartFought,
           	GhostShipFought,
           	GhostShipDefeatedGruntShip,
           	GhostShipDefeatedGhostFlagship,
           	GhostShipDefeatedGhostCaptainShip,
           	GhostShipDefeatedBurningBlade,
           	GhostShipDefeatedGhostBrethrenShip,
           	GhostShipDefeatedGhostBrethrenCaptainShip,
           	SkellyShipFought,
           	SkellyShipDefeatedSkellySloop,
           	SkellyShipDefeatedSkellyGalleon,
           	KrakenEncountered,
           	KrakenDefeated,
           	MegEncountered,
           	MegDefeatedHungeringOne,
           	MegDefeatedQueenOfTheDepths,
           	MegDefeatedShadowmaw,
           	MegDefeatedAncientTerror,
           	MegDefeatedGhostOfTheDeep,
           	FoundMessageInABottle,
           	FoundTreasure,
           	AllianceFormed,
           	AllianceDisbanded,
           	Sunk,
           	SailedDistance,
           	ShipwreckExplored,
           	PlayerShipLanternRowboatDocked,
           	PlayerShipHarpoonRowboatDocked,
           	PlayerShipCannonRowboatDocked,
           	FightPlayers,
           	EndedCaptaincy,
           	EnteredSea,
           	BattleNonCaptainsShip,
           	BattleCaptainsShip,
           	AllianceJoined,
           	AllianceLeft,
           	GoldHoarderEmissaryRaised,
           	GoldHoarderEmissaryLevel5Reached,
           	GoldHoarderEmissaryLowered,
           	MerchantAllianceEmissaryRaised,
           	MerchantAllianceEmissaryLevel5Reached,
           	MerchantAllianceEmissaryLowered,
           	OrderOfSoulsAllianceEmissaryRaised,
           	OrderOfSoulsEmissaryLevel5Reached,
           	OrderOfSoulsEmissaryLowered,
           	AthenasFortuneAllianceEmissaryRaised,
           	AthenasFortuneEmissaryLevel5Reached,
           	AthenasFortuneEmissaryLowered,
           	ReapersBonesAllianceEmissaryRaised,
           	ReapersBonesEmissaryLevel5Reached,
           	ReapersBonesEmissaryLowered,
           	GoldHoarderVoyageComplete,
           	GoldHoarderXMarksComplete,
           	GoldHoarderRiddlesComplete,
           	GoldHoarderWayfinderComplete,
           	GoldHoarderAshenXMarksComplete,
           	GoldHoarderAshenRiddleMapComplete,
           	GoldHoarderAshenWayfinderComplete,
           	OrderOfSoulsVoyageComplete,
           	OrderOfSoulsAshenVoyageComplete,
           	OrderOfSoulsGhostShipVoyageComplete,
           	MerchantAllianceVoyageComplete,
           	MerchantAllianceTradeGoodComplete,
           	MerchantAllianceLostShipmentComplete,
           	AthenasFortuneVoyageComplete,
           	AthenasFortuneAshenVoyageComplete,
           	AthenasFortuneHauntedIslandsComplete,
           	AthenasFortuneLyingMapsComplete,
           	AthenasFortunePictorialMapsComplete,
           	AthenasFortuneShipwreckGraveyardsComplete,
           	AthenasFortuneZoomMapsComplete,
           	AthenasFortuneGhostGarrisonComplete,
           	BilgeRatsVoyageComplete,
           	EmergentVoyageComplete,
           	TavernBoardQuestComplete,
           	EnteredStorm,
           	ExitedStorm,
           	FiresDoused,
           	ServantJoinedTheFight,
           	ServantLeftTheFight,
           	ServantBattleBegins,
           	ServantStreakIncreased,
           	ServantPirateLordShipsSunkSloop,
           	ServantPirateLordShipsSunkBrigantine,
           	ServantPirateLordShipsSunkGalleon,
           	ServantPirateLordBossShipsSunkSloop,
           	ServantPirateLordBossShipsSunkBrigantine,
           	ServantPirateLordBossShipsSunkGalleon,
           	GuardianJoinedTheFight,
           	GuardianLeftTheFight,
           	GuardianBattleBegins,
           	GuardianStreakIncreased,
           	GuardianFlameheartShipsSunkSloop,
           	GuardianFlameheartShipsSunkBrigantine,
           	GuardianFlameheartLordShipsSunkGalleon,
           	GuardianFlameheartLordBossShipsSunkSloop,
           	GuardianFlameheartLordBossShipsSunkBrigantine,
           	GuardianFlameheartLordBossShipsSunkGalleon,
           	Season8ShipSunkStreakIncreased,
           	EEventLogEntryType_MAX,
        };

        // Enum Athena.ECaptainsLogPageType
        public enum ECaptainsLogPageType : byte
        {
           	Invalid,
           	Ship,
           	Crew,
           	Session,
           	Log,
           	ECaptainsLogPageType_MAX,
        };

        // Enum Athena.EHauntedFortPhase
        public enum EHauntedFortPhase : byte
        {
           	NONE,
           	Emplacements,
           	Fort,
           	Destroyed,
           	EHauntedFortPhase_MAX,
        };

        // Enum Athena.ENavigationDirection
        public enum ENavigationDirection : byte
        {
           	None,
           	Left,
           	Right,
           	Up,
           	Down,
           	ENavigationDirection_MAX,
        };

        // Enum Athena.ETransientActorDiscardType
        public enum ETransientActorDiscardType : byte
        {
           	MarkForDestruction,
           	Unregister,
           	Count,
           	ETransientActorDiscardType_MAX,
        };

        // Enum Athena.ESittingActionStateDockingMode
        public enum ESittingActionStateDockingMode : byte
        {
           	FindFloor,
           	AttachDirectlyToSeat,
           	ESittingActionStateDockingMode_MAX,
        };

        // Enum Athena.ESleepingActionStateDockingMode
        public enum ESleepingActionStateDockingMode : byte
        {
           	FindFloor,
           	AttachDirectlyToSeat,
           	ESleepingActionStateDockingMode_MAX,
        };

        // Enum Athena.ESeatStatTimeOfDay
        public enum ESeatStatTimeOfDay : byte
        {
           	Sunrise,
           	Morning,
           	MidDay,
           	Afternoon,
           	Sunset,
           	Night,
           	Unknown,
           	ESeatStatTimeOfDay_MAX,
        };

        // Enum Athena.EAthenaAnimationCapstanState
        public enum EAthenaAnimationCapstanState : byte
        {
           	Neutral,
           	Positive,
           	Negative,
           	EAthenaAnimationCapstanState_MAX,
        };

        // Enum Athena.EAthenaAnimationJumpingState
        public enum EAthenaAnimationJumpingState : byte
        {
           	None,
           	Jumping,
           	Falling,
           	Impact,
           	JumpFinished,
           	PreImpact,
           	EAthenaAnimationJumpingState_MAX,
        };

        // Enum Athena.EAthenaAnimationLadderState
        public enum EAthenaAnimationLadderState : byte
        {
           	None,
           	ClimbOn,
           	ClimbOff,
           	Climbing,
           	EAthenaAnimationLadderState_MAX,
        };

        // Enum Athena.EAthenaAnimationLadderTransitionState
        public enum EAthenaAnimationLadderTransitionState : byte
        {
           	None,
           	Bottom,
           	Top,
           	EAthenaAnimationLadderTransitionState_MAX,
        };

        // Enum Athena.EIKFootPlantingState
        public enum EIKFootPlantingState : byte
        {
           	On,
           	Off,
           	EIKFootPlantingState_MAX,
        };

        // Enum Athena.EIKSolverType
        public enum EIKSolverType : byte
        {
           	NormalSolver,
           	LODSolver,
           	EIKSolverType_MAX,
        };

        // Enum Athena.EIKState
        public enum EIKState : byte
        {
           	On,
           	Off,
           	EIKState_MAX,
        };

        // Enum Athena.EItemBlockingSubState
        public enum EItemBlockingSubState : byte
        {
           	None,
           	Main,
           	Feedback,
           	InFeedback,
           	EItemBlockingSubState_MAX,
        };

        // Enum Athena.EComplexOneShotAttackType
        public enum EComplexOneShotAttackType : byte
        {
           	CombatLocomotion,
           	CombatStatic,
           	CombatSwimming,
           	CombatHeavy,
           	CombatHeavySwimming,
           	EComplexOneShotAttackType_MAX,
        };

        // Enum Athena.EComplexOneShotSubState
        public enum EComplexOneShotSubState : byte
        {
           	WarmUp,
           	WarmUpFromBlock,
           	Action,
           	Recover,
           	HeavyAttackStun,
           	EComplexOneShotSubState_MAX,
        };

        // Enum Athena.EAthenaAnimationWheelState
        public enum EAthenaAnimationWheelState : byte
        {
           	Neutral,
           	Positive,
           	Negative,
           	EAthenaAnimationWheelState_MAX,
        };

        // Enum Athena.EObjectPitchTargetingStates
        public enum EObjectPitchTargetingStates : byte
        {
           	None,
           	StandardPassive,
           	StandardWater,
           	Action_2,
           	Action_1_Water,
           	Action_3,
           	Action_2_Water,
           	EObjectPitchTargetingStates_MAX,
        };

        // Enum Athena.EObjectPitchTargetingLimbs
        public enum EObjectPitchTargetingLimbs : byte
        {
           	None,
           	RightArm,
           	LeftArm,
           	BothArms,
           	EObjectPitchTargetingLimbs_MAX,
        };

        // Enum Athena.EAnimationWaterPumpState
        public enum EAnimationWaterPumpState : byte
        {
           	None,
           	PumpForwards,
           	PumpBackwards,
           	ExitPumping,
           	EAnimationWaterPumpState_MAX,
        };

        // Enum Athena.EWieldedItemAnimationState
        public enum EWieldedItemAnimationState : byte
        {
           	Equipping,
           	Unequipping,
           	Idle,
           	Unequipped,
           	ContinuousUse,
           	OutOfContinuousUse,
           	OneShot,
           	ComplexOneShot,
           	Blocking,
           	EWieldedItemAnimationState_MAX,
        };

        // Enum AudioReporting.EAudioReactionState
        public enum EAudioReactionState : byte
        {
           	Normal,
           	MaxDurationExceeded,
           	MinDurationNotMet,
           	EAudioReactionState_MAX,
        };

        // Enum ChecklistMaps.EChecklistActionType
        public enum EChecklistActionType : byte
        {
           	None,
           	KillActor,
           	NPCInteraction,
           	DeliverBooty,
           	EChecklistActionType_MAX,
        };

        // Enum Cleanliness.EDirtinessType
        public enum EDirtinessType : byte
        {
           	Soot,
           	Dust,
           	MAX,
           	EDirtinessType_MAX,
        };

        // Enum CoherentUIGTPlugin.ECoherentUIGTKeys
        public enum ECoherentUIGTKeys : byte
        {
           	LeftMouseButton,
           	RightMouseButton,
           	MiddleMouseButton,
           	ThumbMouseButton,
           	ThumbMouseButton2,
           	BackSpace,
           	Tab,
           	Enter,
           	Pause,
           	CapsLock,
           	Escape,
           	SpaceBar,
           	PageUp,
           	PageDown,
           	End,
           	Home,
           	Left,
           	Up,
           	Right,
           	Down,
           	Insert,
           	Delete,
           	Zero,
           	One,
           	Two,
           	Three,
           	Four,
           	Five,
           	Six,
           	Seven,
           	Eight,
           	Nine,
           	A,
           	B,
           	C,
           	D,
           	E,
           	F,
           	G,
           	H,
           	I,
           	J,
           	K,
           	L,
           	M,
           	N,
           	O,
           	P,
           	Q,
           	R,
           	S,
           	T,
           	U,
           	V,
           	W,
           	X,
           	Y,
           	Z,
           	NumPadZero,
           	NumPadOne,
           	NumPadTwo,
           	NumPadThree,
           	NumPadFour,
           	NumPadFive,
           	NumPadSix,
           	NumPadSeven,
           	NumPadEight,
           	NumPadNine,
           	Multiply,
           	Add,
           	Subtract,
           	Decimal,
           	Divide,
           	F1,
           	F2,
           	F3,
           	F4,
           	F5,
           	F6,
           	F7,
           	F8,
           	F9,
           	F10,
           	F11,
           	F12,
           	Gamepad_Special_Left,
           	Gamepad_Special_Right,
           	MouseScrollUp,
           	MouseScrollDown,
           	Gamepad_RightStick_Left,
           	Gamepad_RightStick_Up,
           	Gamepad_RightStick_Right,
           	Gamepad_RightStick_Down,
           	NumLock,
           	ScrollLock,
           	LeftShift,
           	RightShift,
           	LeftControl,
           	RightControl,
           	LeftAlt,
           	RightAlt,
           	LeftCommand,
           	RightCommand,
           	Semicolon,
           	Equals,
           	Comma,
           	Underscore,
           	Period,
           	Slash,
           	Tilde,
           	LeftBracket,
           	Backslash,
           	RightBracket,
           	Quote,
           	Unknown,
           	ECoherentUIGTKeys_MAX,
        };

        // Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
        public enum ECoherentUIGTInputPropagationBehaviour : byte
        {
           	None,
           	Keyboard,
           	Joystick,
           	KeyboardAndJoystick,
           	ECoherentUIGTInputPropagationBehaviour_MAX,
        };

        // Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
        public enum EGamepadBehaviourOnFocusLost : byte
        {
           	ResetState,
           	UseCurrentState,
           	UseStateBeforeReset,
           	EGamepadBehaviourOnFocusLost_MAX,
        };

        // Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
        public enum EGTInputWidgetLineTraceMode : byte
        {
           	GTInputLineTrace_Single,
           	GTInputLineTrace_Multi,
           	GTInputLineTrace_MAX,
        };

        // Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
        public enum EGTInputWidgetRaycastQuality : byte
        {
           	RaycastQuality_Fast,
           	RaycastQuality_Balanced,
           	RaycastQuality_Accurate,
           	RaycastQuality_MAX,
        };

        // Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
        public enum ECoherentUIGTMSAA : byte
        {
           	MSAA_1x,
           	MSAA_2x,
           	MSAA_4x,
           	MSAA_MAX,
        };

        // Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
        public enum ECoherentUIGTSettingsSeverity : byte
        {
           	Trace,
           	Debug,
           	Info,
           	Warning,
           	AssertFailure,
           	Error,
           	ECoherentUIGTSettingsSeverity_MAX,
        };

        // Enum CommodityDemandFramework.ECommodityDemand
        public enum ECommodityDemand : byte
        {
           	None,
           	Low,
           	Normal,
           	High,
           	ECommodityDemand_MAX,
        };

        // Enum ConditionalFramework.EPayloadObjectOption
        public enum EPayloadObjectOption : byte
        {
           	Object,
           	PawnObject,
           	ControllerObject,
           	EPayloadObjectOption_MAX,
        };

        // Enum ContestMatchmaking.EGameEventShipSizeLimit
        public enum EGameEventShipSizeLimit : byte
        {
           	NoLimit,
           	SmallShips,
           	MediumShips,
           	LargeShips,
           	EGameEventShipSizeLimit_MAX,
        };

        // Enum ContestMatchmaking.EGameEventAvailabilityStatus
        public enum EGameEventAvailabilityStatus : byte
        {
           	Active,
           	ActiveEngaged,
           	AvailableToSpawn,
           	EGameEventAvailabilityStatus_MAX,
        };

        // Enum ContestMatchmaking.EServerCrewMatchmakingResultCode
        public enum EServerCrewMatchmakingResultCode : byte
        {
           	NoAvailableCrews,
           	MinCrewsNotSatisfied,
           	Success,
           	StampExpired,
           	EServerCrewMatchmakingResultCode_MAX,
        };

        // Enum ContestMatchmaking.EPvPFaction
        public enum EPvPFaction : byte
        {
           	NotApplicable,
           	Flameheart,
           	PirateLord,
           	EPvPFaction_MAX,
        };

        // Enum ContestMatchmaking.EClientMatchmakingRequestReason
        public enum EClientMatchmakingRequestReason : byte
        {
           	NewCrews,
           	LoadBalancingMigration,
           	PvPMigration,
           	StarlightMigration,
           	GameEventOnDemandMigration,
           	EClientMatchmakingRequestReason_MAX,
        };

        // Enum Cooking.ECookingState
        public enum ECookingState : byte
        {
           	Raw,
           	Undercooked,
           	Cooked,
           	Burned,
           	Fresh,
           	ECookingState_MAX,
        };

        // Enum Cooking.ECookingSmokeFeedbackLevel
        public enum ECookingSmokeFeedbackLevel : byte
        {
           	NotCooking,
           	Raw,
           	CookedWarning,
           	Cooked,
           	BurnedWarning,
           	Burned,
           	ECookingSmokeFeedbackLevel_MAX,
        };

        // Enum CoreUObject.EInterpCurveMode
        public enum EInterpCurveMode : byte
        {
           	CIM_Linear,
           	CIM_CurveAuto,
           	CIM_Constant,
           	CIM_CurveUser,
           	CIM_CurveBreak,
           	CIM_CurveAutoClamped,
           	CIM_MAX,
        };

        // Enum CoreUObject.ERangeBoundTypes
        public enum ERangeBoundTypes : byte
        {
           	Exclusive,
           	Inclusive,
           	Open,
           	ERangeBoundTypes_MAX,
        };

        // Enum CoreUObject.EUnit
        public enum EUnit : byte
        {
           	Micrometers,
           	Millimeters,
           	Centimeters,
           	Meters,
           	Kilometers,
           	Inches,
           	Feet,
           	Yards,
           	Miles,
           	Lightyears,
           	Degrees,
           	Radians,
           	MetersPerSecond,
           	KilometersPerHour,
           	MilesPerHour,
           	Celsius,
           	Farenheit,
           	Kelvin,
           	Micrograms,
           	Milligrams,
           	Grams,
           	Kilograms,
           	MetricTons,
           	Ounces,
           	Pounds,
           	Stones,
           	Newtons,
           	PoundsForce,
           	KilogramsForce,
           	Hertz,
           	Kilohertz,
           	Megahertz,
           	Gigahertz,
           	RevolutionsPerMinute,
           	Bytes,
           	Kilobytes,
           	Megabytes,
           	Gigabytes,
           	Terabytes,
           	Lumens,
           	Milliseconds,
           	Seconds,
           	Minutes,
           	Hours,
           	Days,
           	Months,
           	Years,
           	Unspecified,
           	EUnit_MAX,
        };

        // Enum CoreUObject.EMouseCursor
        public enum EMouseCursor : byte
        {
           	None,
           	Default,
           	TextEditBeam,
           	ResizeLeftRight,
           	ResizeUpDown,
           	ResizeSouthEast,
           	ResizeSouthWest,
           	CardinalCross,
           	Crosshairs,
           	Hand,
           	GrabHand,
           	GrabHandClosed,
           	SlashedCircle,
           	EyeDropper,
           	EMouseCursor_MAX,
        };

        // Enum CoreUObject.EPixelFormat
        public enum EPixelFormat : byte
        {
           	PF_Unknown,
           	PF_A32B32G32R32F,
           	PF_B8G8R8A8,
           	PF_G8,
           	PF_G16,
           	PF_DXT1,
           	PF_DXT3,
           	PF_DXT5,
           	PF_UYVY,
           	PF_FloatRGB,
           	PF_FloatRGBA,
           	PF_DepthStencil,
           	PF_ShadowDepth,
           	PF_R32_FLOAT,
           	PF_G16R16,
           	PF_G16R16F,
           	PF_G16R16F_FILTER,
           	PF_G32R32F,
           	PF_A2B10G10R10,
           	PF_A16B16G16R16,
           	PF_D24,
           	PF_R16F,
           	PF_R16F_FILTER,
           	PF_BC5,
           	PF_V8U8,
           	PF_A1,
           	PF_FloatR11G11B10,
           	PF_A8,
           	PF_R32_UINT,
           	PF_R32_SINT,
           	PF_PVRTC2,
           	PF_PVRTC4,
           	PF_R16_UINT,
           	PF_R16_SINT,
           	PF_R16G16B16A16_UINT,
           	PF_R16G16B16A16_SINT,
           	PF_R5G6B5_UNORM,
           	PF_R8G8B8A8,
           	PF_A8R8G8B8,
           	PF_BC4,
           	PF_R8G8,
           	PF_ATC_RGB,
           	PF_ATC_RGBA_E,
           	PF_ATC_RGBA_I,
           	PF_X24_G8,
           	PF_ETC1,
           	PF_ETC2_RGB,
           	PF_ETC2_RGBA,
           	PF_R32G32B32A32_UINT,
           	PF_R16G16_UINT,
           	PF_ASTC_4x4,
           	PF_ASTC_6x6,
           	PF_ASTC_8x8,
           	PF_ASTC_10x10,
           	PF_ASTC_12x12,
           	PF_BC6H,
           	PF_BC7,
           	PF_A16B16G16R16F_FILTER,
           	PF_BC6H_SF16,
           	PF_BC6H_UF16,
           	PF_R32G32_SINT,
           	PF_Stencil,
           	PF_Depth,
           	PF_R32G32_UINT,
           	PF_NV12,
           	PF_MAX,
        };

        // Enum CoreUObject.EAxis
        public enum EAxis : byte
        {
           	None,
           	X,
           	Y,
           	Z,
           	EAxis_MAX,
        };

        // Enum CoreUObject.ELogTimes
        public enum ELogTimes : byte
        {
           	None,
           	UTC,
           	SinceGStartTime,
           	ELogTimes_MAX,
        };

        // Enum CoreUObject.ESearchDir
        public enum ESearchDir : byte
        {
           	FromStart,
           	FromEnd,
           	ESearchDir_MAX,
        };

        // Enum CoreUObject.ESearchCase
        public enum ESearchCase : byte
        {
           	CaseSensitive,
           	IgnoreCase,
           	ESearchCase_MAX,
        };

        // Enum CustomServerAssetCatalog.GameAssetType
        public enum GameAssetType : byte
        {
           	ITEM,
           	SKELETON,
           	GameAssetType_MAX,
        };

        // Enum EmissaryFramework.EEmisaryCompanyActionType
        public enum EEmisaryCompanyActionType : byte
        {
           	CompleteRiddleStep,
           	CompleteRiddleQuest,
           	CompleteXMarksTheSpotQuest,
           	DefeatNamedSkeleton,
           	CompleteBountyQuest,
           	CompleteCargoRunStep,
           	CompleteCargoRunQuest,
           	CompleteMerchantStep,
           	CompleteMerchantQuest,
           	CompleteGhostShipQuest,
           	MapPieceFound,
           	CompleteWayfinderVoyage,
           	DiscoveredLostShipmentsClue,
           	CompleteLostShipmentsVoyage,
           	CompleteLegendOfTheVeilVoyage,
           	EEmisaryCompanyActionType_MAX,
        };

        // Enum EmissaryFramework.EEmisaryFactionActionType
        public enum EEmisaryFactionActionType : byte
        {
           	SinkOpposingShip,
           	EEmisaryFactionActionType_MAX,
        };

        // Enum EmissaryLevel.EBootyRewardType
        public enum EBootyRewardType : byte
        {
           	OwnershipChanged,
           	ItemDroppedOnItem,
           	PlayerKilled,
           	GameEventsFinished,
           	Handin,
           	MAX,
           	EBootyRewardType_MAX,
        };

        // Enum EmissaryLevel.EEmissaryVoyageValidatorType
        public enum EEmissaryVoyageValidatorType : byte
        {
           	Entitlement,
           	GuildReputation,
           	EEmissaryVoyageValidatorType_MAX,
        };

        // Enum EmissaryLevel.EEmissaryDeactivateReason
        public enum EEmissaryDeactivateReason : byte
        {
           	DissociateFromShip,
           	Cancelled,
           	GuildSessionEnded,
           	EEmissaryDeactivateReason_MAX,
        };

        // Enum EmotingFramework.EDiceType
        public enum EDiceType : byte
        {
           	Dice4,
           	Dice6,
           	Dice8,
           	Dice10,
           	Dice12,
           	Dice20,
           	EDiceType_MAX,
        };

        // Enum EmotingFramework.EEmoteFlourishType
        public enum EEmoteFlourishType : byte
        {
           	Invalid,
           	PrimaryWeaponSlotFlourish,
           	SecondaryWeaponSlotFlourish,
           	EEmoteFlourishType_MAX,
        };

        // Enum EnchantedCompass.ETargetUpdateReason
        public enum ETargetUpdateReason : byte
        {
           	Update,
           	Replace,
           	ETargetUpdateReason_MAX,
        };

        // Enum EnchantedCompass.ERotatingCompassRotationStates
        public enum ERotatingCompassRotationStates : byte
        {
           	RotationSequence,
           	SplinePath,
           	MAX,
           	ERotatingCompassRotationStates_MAX,
        };

        // Enum EngineSettings.EThreePlayerSplitScreenType
        public enum EThreePlayerSplitScreenType : byte
        {
           	FavorTop,
           	FavorBottom,
           	EThreePlayerSplitScreenType_MAX,
        };

        // Enum EngineSettings.ETwoPlayerSplitScreenType
        public enum ETwoPlayerSplitScreenType : byte
        {
           	Horizontal,
           	Vertical,
           	ETwoPlayerSplitScreenType_MAX,
        };

        // Enum Engine.EAttachLocation
        public enum EAttachLocation : byte
        {
           	KeepRelativeOffset,
           	KeepWorldPosition,
           	SnapToTarget,
           	SnapToTargetIncludingScale,
           	EAttachLocation_MAX,
        };

        // Enum Engine.EEndPlayReason
        public enum EEndPlayReason : byte
        {
           	Destroyed,
           	LevelTransition,
           	EndPlayInEditor,
           	RemovedFromWorld,
           	Quit,
           	EEndPlayReason_MAX,
        };

        // Enum Engine.ETickingGroup
        public enum ETickingGroup : byte
        {
           	TG_PrePhysics,
           	TG_StartPhysics,
           	TG_DuringPhysics,
           	TG_EndPhysics,
           	TG_PostPhysics,
           	TG_PostUpdateWork,
           	TG_NewlySpawned,
           	TG_MAX,
        };

        // Enum Engine.ESpawnActorCollisionHandlingMethod
        public enum ESpawnActorCollisionHandlingMethod : byte
        {
           	Undefined,
           	AlwaysSpawn,
           	AdjustIfPossibleButAlwaysSpawn,
           	AdjustIfPossibleButDontSpawnIfColliding,
           	DontSpawnIfColliding,
           	ESpawnActorCollisionHandlingMethod_MAX,
        };

        // Enum Engine.EAutoReceiveInput
        public enum EAutoReceiveInput : byte
        {
           	Disabled,
           	Player0,
           	Player1,
           	Player2,
           	Player3,
           	Player4,
           	Player5,
           	Player6,
           	Player7,
           	EAutoReceiveInput_MAX,
        };

        // Enum Engine.EActorSpawnRestrictions
        public enum EActorSpawnRestrictions : byte
        {
           	ServerOnly,
           	ClientOnly,
           	ServerAndClient,
           	SpawnRestrictionMax,
           	EActorSpawnRestrictions_MAX,
        };

        // Enum Engine.ENetRole
        public enum ENetRole : byte
        {
           	ROLE_None,
           	ROLE_SimulatedProxy,
           	ROLE_AutonomousProxy,
           	ROLE_Authority,
           	ROLE_MAX,
        };

        // Enum Engine.ERotatorQuantization
        public enum ERotatorQuantization : byte
        {
           	ByteComponents,
           	ShortComponents,
           	ERotatorQuantization_MAX,
        };

        // Enum Engine.EVectorQuantization
        public enum EVectorQuantization : byte
        {
           	RoundWholeNumber,
           	RoundOneDecimal,
           	RoundTwoDecimals,
           	EVectorQuantization_MAX,
        };

        // Enum Engine.ENavPathEvent
        public enum ENavPathEvent : byte
        {
           	Cleared,
           	NewPath,
           	UpdatedDueToGoalMoved,
           	UpdatedDueToNavigationChanged,
           	Invalidated,
           	RePathFailed,
           	Custom,
           	ENavPathEvent_MAX,
        };

        // Enum Engine.EComponentNetDormancy
        public enum EComponentNetDormancy : byte
        {
           	NotSupported,
           	Awake,
           	FollowOwner,
           	Dormant,
           	Count,
           	EComponentNetDormancy_MAX,
        };

        // Enum Engine.EComponentCreationMethod
        public enum EComponentCreationMethod : byte
        {
           	Native,
           	SimpleConstructionScript,
           	UserConstructionScript,
           	Instance,
           	EComponentCreationMethod_MAX,
        };

        // Enum Engine.EPlaneConstraintAxisSetting
        public enum EPlaneConstraintAxisSetting : byte
        {
           	Custom,
           	X,
           	Y,
           	Z,
           	UseGlobalPhysicsSetting,
           	EPlaneConstraintAxisSetting_MAX,
        };

        // Enum Engine.EInterpToBehaviourType
        public enum EInterpToBehaviourType : byte
        {
           	OneShot,
           	OneShot_Reverse,
           	Loop_Reset,
           	PingPong,
           	EInterpToBehaviourType_MAX,
        };

        // Enum Engine.EPlatformInterfaceDataType
        public enum EPlatformInterfaceDataType : byte
        {
           	PIDT_None,
           	PIDT_Int,
           	PIDT_Float,
           	PIDT_String,
           	PIDT_Object,
           	PIDT_Custom,
           	PIDT_MAX,
        };

        // Enum Engine.EMovementMode
        public enum EMovementMode : byte
        {
           	MOVE_None,
           	MOVE_Walking,
           	MOVE_NavWalking,
           	MOVE_Falling,
           	MOVE_Swimming,
           	MOVE_Flying,
           	MOVE_Custom,
           	MOVE_MAX,
        };

        // Enum Engine.EOverlapFilterOption
        public enum EOverlapFilterOption : byte
        {
           	OverlapFilter_All,
           	OverlapFilter_DynamicOnly,
           	OverlapFilter_StaticOnly,
           	OverlapFilter_MAX,
        };

        // Enum Engine.EObjectTypeQuery
        public enum EObjectTypeQuery : byte
        {
           	ObjectTypeQuery1,
           	ObjectTypeQuery2,
           	ObjectTypeQuery3,
           	ObjectTypeQuery4,
           	ObjectTypeQuery5,
           	ObjectTypeQuery6,
           	ObjectTypeQuery7,
           	ObjectTypeQuery8,
           	ObjectTypeQuery9,
           	ObjectTypeQuery10,
           	ObjectTypeQuery11,
           	ObjectTypeQuery12,
           	ObjectTypeQuery13,
           	ObjectTypeQuery14,
           	ObjectTypeQuery15,
           	ObjectTypeQuery16,
           	ObjectTypeQuery17,
           	ObjectTypeQuery18,
           	ObjectTypeQuery19,
           	ObjectTypeQuery20,
           	ObjectTypeQuery21,
           	ObjectTypeQuery22,
           	ObjectTypeQuery23,
           	ObjectTypeQuery24,
           	ObjectTypeQuery25,
           	ObjectTypeQuery26,
           	ObjectTypeQuery27,
           	ObjectTypeQuery28,
           	ObjectTypeQuery29,
           	ObjectTypeQuery30,
           	ObjectTypeQuery31,
           	ObjectTypeQuery32,
           	ObjectTypeQuery_MAX,
           	EObjectTypeQuery_MAX,
        };

        // Enum Engine.EDrawDebugTrace
        public enum EDrawDebugTrace : byte
        {
           	None,
           	ForOneFrame,
           	ForDuration,
           	Persistent,
           	EDrawDebugTrace_MAX,
        };

        // Enum Engine.ETraceTypeQuery
        public enum ETraceTypeQuery : byte
        {
           	TraceTypeQuery1,
           	TraceTypeQuery2,
           	TraceTypeQuery3,
           	TraceTypeQuery4,
           	TraceTypeQuery5,
           	TraceTypeQuery6,
           	TraceTypeQuery7,
           	TraceTypeQuery8,
           	TraceTypeQuery9,
           	TraceTypeQuery10,
           	TraceTypeQuery11,
           	TraceTypeQuery12,
           	TraceTypeQuery13,
           	TraceTypeQuery14,
           	TraceTypeQuery15,
           	TraceTypeQuery16,
           	TraceTypeQuery17,
           	TraceTypeQuery18,
           	TraceTypeQuery19,
           	TraceTypeQuery20,
           	TraceTypeQuery21,
           	TraceTypeQuery22,
           	TraceTypeQuery23,
           	TraceTypeQuery24,
           	TraceTypeQuery25,
           	TraceTypeQuery26,
           	TraceTypeQuery27,
           	TraceTypeQuery28,
           	TraceTypeQuery29,
           	TraceTypeQuery30,
           	TraceTypeQuery31,
           	TraceTypeQuery32,
           	TraceTypeQuery_MAX,
           	ETraceTypeQuery_MAX,
        };

        // Enum Engine.ECollisionChannel
        public enum ECollisionChannel : byte
        {
           	ECC_WorldStatic,
           	ECC_WorldDynamic,
           	ECC_Pawn,
           	ECC_Visibility,
           	ECC_Camera,
           	ECC_PhysicsBody,
           	ECC_Vehicle,
           	ECC_Destructible,
           	ECC_EngineTraceChannel1,
           	ECC_EngineTraceChannel2,
           	ECC_EngineTraceChannel3,
           	ECC_EngineTraceChannel4,
           	ECC_EngineTraceChannel5,
           	ECC_EngineTraceChannel6,
           	ECC_GameTraceChannel1,
           	ECC_GameTraceChannel2,
           	ECC_GameTraceChannel3,
           	ECC_GameTraceChannel4,
           	ECC_GameTraceChannel5,
           	ECC_GameTraceChannel6,
           	ECC_GameTraceChannel7,
           	ECC_GameTraceChannel8,
           	ECC_GameTraceChannel9,
           	ECC_GameTraceChannel10,
           	ECC_GameTraceChannel11,
           	ECC_GameTraceChannel12,
           	ECC_GameTraceChannel13,
           	ECC_GameTraceChannel14,
           	ECC_GameTraceChannel15,
           	ECC_GameTraceChannel16,
           	ECC_GameTraceChannel17,
           	ECC_GameTraceChannel18,
           	ECC_OverlapAll_Deprecated,
           	ECC_MAX,
        };

        // Enum Engine.EMoveComponentAction
        public enum EMoveComponentAction : byte
        {
           	Move,
           	Stop,
           	Return,
           	EMoveComponentAction_MAX,
        };

        // Enum Engine.EQuitPreference
        public enum EQuitPreference : byte
        {
           	Quit,
           	Background,
           	EQuitPreference_MAX,
        };

        // Enum Engine.ENodeAdvancedPins
        public enum ENodeAdvancedPins : byte
        {
           	NoPins,
           	Shown,
           	Hidden,
           	ENodeAdvancedPins_MAX,
        };

        // Enum Engine.ENodeTitleType
        public enum ENodeTitleType : byte
        {
           	FullTitle,
           	ListView,
           	EditableTitle,
           	MenuTitle,
           	MAX_TitleTypes,
           	ENodeTitleType_MAX,
        };

        // Enum Engine.EEdGraphPinDirection
        public enum EEdGraphPinDirection : byte
        {
           	EGPD_Input,
           	EGPD_Output,
           	EGPD_MAX,
        };

        // Enum Engine.EBlueprintPinStyleType
        public enum EBlueprintPinStyleType : byte
        {
           	BPST_Original,
           	BPST_VariantA,
           	BPST_MAX,
        };

        // Enum Engine.EViewModeIndex
        public enum EViewModeIndex : byte
        {
           	VMI_BrushWireframe,
           	VMI_Wireframe,
           	VMI_Unlit,
           	VMI_Lit,
           	VMI_Lit_DetailLighting,
           	VMI_LightingOnly,
           	VMI_LightComplexity,
           	VMI_ShaderComplexity,
           	VMI_LightmapDensity,
           	VMI_LitLightmapDensity,
           	VMI_ReflectionOverride,
           	VMI_VisualizeBuffer,
           	VMI_StationaryLightOverlap,
           	VMI_CollisionPawn,
           	VMI_CollisionVisibility,
           	VMI_CollisionWireframe,
           	VMI_LODColoration,
           	VMI_TriangleDensityScreenSpace,
           	VMI_TriangleDensityWorldSpace,
           	VMI_Max,
           	VMI_Unknown,
        };

        // Enum Engine.EDemoPlayFailure
        public enum EDemoPlayFailure : byte
        {
           	Generic,
           	DemoNotFound,
           	Corrupt,
           	InvalidVersion,
           	EDemoPlayFailure_MAX,
        };

        // Enum Engine.ETravelType
        public enum ETravelType : byte
        {
           	TRAVEL_Absolute,
           	TRAVEL_Partial,
           	TRAVEL_Relative,
           	TRAVEL_MAX,
        };

        // Enum Engine.ETravelFailure
        public enum ETravelFailure : byte
        {
           	NoLevel,
           	LoadMapFailure,
           	InvalidURL,
           	PackageMissing,
           	PackageVersion,
           	NoDownload,
           	TravelFailure,
           	CheatCommands,
           	PendingNetGameCreateFailure,
           	CloudSaveFailure,
           	ServerTravelFailure,
           	ClientTravelFailure,
           	ETravelFailure_MAX,
        };

        // Enum Engine.ENetworkFailure
        public enum ENetworkFailure : byte
        {
           	NetDriverAlreadyExists,
           	NetDriverCreateFailure,
           	NetDriverListenFailure,
           	ConnectionLost,
           	ConnectionTimeout,
           	FailureReceived,
           	OutdatedClient,
           	OutdatedServer,
           	PendingConnectionFailure,
           	InvalidFeatureConfig,
           	RPCSpamDetected,
           	FailedPreLogin,
           	InitialConnectionTimeout,
           	PendingConnectionTimeout,
           	PlayerDeemedInactive,
           	CrewMigrationRequested,
           	ServerAtMatchmakingCapacity,
           	ServerShuttingDownWhilstMigrationOngoing,
           	ServerShuttingDown,
           	CrewSessionLost,
           	ENetworkFailure_MAX,
        };

        // Enum Engine.EInputEvent
        public enum EInputEvent : byte
        {
           	IE_Pressed,
           	IE_Released,
           	IE_Repeat,
           	IE_DoubleClick,
           	IE_Axis,
           	IE_MAX,
        };

        // Enum Engine.EAngularConstraintMotion
        public enum EAngularConstraintMotion : byte
        {
           	ACM_Free,
           	ACM_Limited,
           	ACM_Locked,
           	ACM_MAX,
        };

        // Enum Engine.EComponentSocketType
        public enum EComponentSocketType : byte
        {
           	Invalid,
           	Bone,
           	Socket,
           	EComponentSocketType_MAX,
        };

        // Enum Engine.EComponentMobility
        public enum EComponentMobility : byte
        {
           	Static,
           	Stationary,
           	Movable,
           	EComponentMobility_MAX,
        };

        // Enum Engine.EPhysicalSurface
        public enum EPhysicalSurface : byte
        {
           	SurfaceType_Default,
           	SurfaceType1,
           	SurfaceType2,
           	SurfaceType3,
           	SurfaceType4,
           	SurfaceType5,
           	SurfaceType6,
           	SurfaceType7,
           	SurfaceType8,
           	SurfaceType9,
           	SurfaceType10,
           	SurfaceType11,
           	SurfaceType12,
           	SurfaceType13,
           	SurfaceType14,
           	SurfaceType15,
           	SurfaceType16,
           	SurfaceType17,
           	SurfaceType18,
           	SurfaceType19,
           	SurfaceType20,
           	SurfaceType21,
           	SurfaceType22,
           	SurfaceType23,
           	SurfaceType24,
           	SurfaceType25,
           	SurfaceType26,
           	SurfaceType27,
           	SurfaceType28,
           	SurfaceType29,
           	SurfaceType30,
           	SurfaceType31,
           	SurfaceType32,
           	SurfaceType33,
           	SurfaceType34,
           	SurfaceType35,
           	SurfaceType36,
           	SurfaceType37,
           	SurfaceType38,
           	SurfaceType39,
           	SurfaceType40,
           	SurfaceType41,
           	SurfaceType42,
           	SurfaceType43,
           	SurfaceType44,
           	SurfaceType45,
           	SurfaceType46,
           	SurfaceType47,
           	SurfaceType48,
           	SurfaceType49,
           	SurfaceType50,
           	SurfaceType51,
           	SurfaceType52,
           	SurfaceType53,
           	SurfaceType54,
           	SurfaceType55,
           	SurfaceType56,
           	SurfaceType57,
           	SurfaceType58,
           	SurfaceType59,
           	SurfaceType60,
           	SurfaceType61,
           	SurfaceType62,
           	SurfaceType_Max,
           	EPhysicalSurface_MAX,
        };

        // Enum Engine.EWalkableSlopeBehavior
        public enum EWalkableSlopeBehavior : byte
        {
           	WalkableSlope_Default,
           	WalkableSlope_Increase,
           	WalkableSlope_Decrease,
           	WalkableSlope_Unwalkable,
           	WalkableSlope_Max,
        };

        // Enum Engine.EAutoPossessAI
        public enum EAutoPossessAI : byte
        {
           	Disabled,
           	PlacedInWorld,
           	Spawned,
           	PlacedInWorldOrSpawned,
           	EAutoPossessAI_MAX,
        };

        // Enum Engine.ENetDormancy
        public enum ENetDormancy : byte
        {
           	DORM_Never,
           	DORM_Awake,
           	DORM_DormantAll,
           	DORM_DormantPartial,
           	DORM_Initial,
           	DORM_MAX,
        };

        // Enum Engine.ESimplygonMaterialChannel
        public enum ESimplygonMaterialChannel : byte
        {
           	SG_MATERIAL_CHANNEL_AMBIENT,
           	SG_MATERIAL_CHANNEL_DIFFUSE,
           	SG_MATERIAL_CHANNEL_SPECULAR,
           	SG_MATERIAL_CHANNEL_OPACITY,
           	SG_MATERIAL_CHANNEL_EMISSIVE,
           	SG_MATERIAL_CHANNEL_NORMALS,
           	SG_MATERIAL_CHANNEL_DISPLACEMENT,
           	SG_MATERIAL_CHANNEL_BASECOLOR,
           	SG_MATERIAL_CHANNEL_ROUGHNESS,
           	SG_MATERIAL_CHANNEL_METALLIC,
           	SG_MATERIAL_CHANNEL_AO,
           	SG_MATERIAL_CHANNEL_MAX,
        };

        // Enum Engine.ESimplygonTextureResolution
        public enum ESimplygonTextureResolution : byte
        {
           	TextureResolution_65,
           	TextureResolution_129,
           	TextureResolution_257,
           	TextureResolution_513,
           	TextureResolution_1025,
           	TextureResolution_2049,
           	TextureResolution_4097,
           	TextureResolution_8193,
           	TextureResolution_MAX,
        };

        // Enum Engine.ESimplygonColorChannels
        public enum ESimplygonColorChannels : byte
        {
           	RGBA,
           	RGB,
           	L,
           	ESimplygonColorChannels_MAX,
        };

        // Enum Engine.ESimplygonTextureSamplingQuality
        public enum ESimplygonTextureSamplingQuality : byte
        {
           	Poor,
           	Low,
           	Medium,
           	High,
           	ESimplygonTextureSamplingQuality_MAX,
        };

        // Enum Engine.ESimplygonCasterType
        public enum ESimplygonCasterType : byte
        {
           	None,
           	Color,
           	Normals,
           	Opacity,
           	ESimplygonCasterType_MAX,
        };

        // Enum Engine.ESimplygonTextureStrech
        public enum ESimplygonTextureStrech : byte
        {
           	None,
           	VerySmall,
           	Small,
           	Medium,
           	Large,
           	VeryLarge,
           	ESimplygonTextureStrech_MAX,
        };

        // Enum Engine.EMaterialLODType
        public enum EMaterialLODType : byte
        {
           	Off,
           	BakeTexture,
           	BakeVertexColor,
           	Replace,
           	EMaterialLODType_MAX,
        };

        // Enum Engine.ESimplygonLODType
        public enum ESimplygonLODType : byte
        {
           	Reduction,
           	Remeshing,
           	ESimplygonLODType_MAX,
        };

        // Enum Engine.EMeshFeatureImportance
        public enum EMeshFeatureImportance : byte
        {
           	Off,
           	Lowest,
           	Low,
           	Normal,
           	High,
           	Highest,
           	EMeshFeatureImportance_MAX,
        };

        // Enum Engine.EShadowMapFlags
        public enum EShadowMapFlags : byte
        {
           	SMF_None,
           	SMF_Streamed,
           	SMF_MAX,
        };

        // Enum Engine.ELightMapPaddingType
        public enum ELightMapPaddingType : byte
        {
           	LMPT_NormalPadding,
           	LMPT_PrePadding,
           	LMPT_NoPadding,
           	LMPT_MAX,
        };

        // Enum Engine.EDominanceGroup
        public enum EDominanceGroup : byte
        {
           	DominanceGroup_1,
           	DominanceGroup_2,
           	DominanceGroup_3,
           	DominanceGroup_4,
           	DominanceGroup_5,
           	DominanceGroup_6,
           	DominanceGroup_7,
           	DominanceGroup_8,
           	DominanceGroup_9,
           	DominanceGroup_10,
           	DominanceGroup_11,
           	DominanceGroup_12,
           	DominanceGroup_13,
           	DominanceGroup_14,
           	DominanceGroup_15,
           	DominanceGroup_16,
           	DominanceGroup_17,
           	DominanceGroup_18,
           	DominanceGroup_19,
           	DominanceGroup_20,
           	DominanceGroup_21,
           	DominanceGroup_22,
           	DominanceGroup_23,
           	DominanceGroup_24,
           	DominanceGroup_25,
           	DominanceGroup_26,
           	DominanceGroup_27,
           	DominanceGroup_28,
           	DominanceGroup_29,
           	DominanceGroup_30,
           	DominanceGroup_31,
           	DominanceGroup_32,
           	DominanceGroup_Max,
        };

        // Enum Engine.ECollisionEnabled
        public enum ECollisionEnabled : byte
        {
           	NoCollision,
           	QueryOnly,
           	PhysicsOnly,
           	QueryAndPhysics,
           	ECollisionEnabled_MAX,
        };

        // Enum Engine.ETimelineSigType
        public enum ETimelineSigType : byte
        {
           	ETS_EventSignature,
           	ETS_FloatSignature,
           	ETS_VectorSignature,
           	ETS_LinearColorSignature,
           	ETS_InvalidSignature,
           	ETS_MAX,
        };

        // Enum Engine.ESleepFamily
        public enum ESleepFamily : byte
        {
           	Normal,
           	Sensitive,
           	Custom,
           	ESleepFamily_MAX,
        };

        // Enum Engine.ERadialImpulseFalloff
        public enum ERadialImpulseFalloff : byte
        {
           	RIF_Constant,
           	RIF_Linear,
           	RIF_MAX,
        };

        // Enum Engine.EInputConsumeOptions
        public enum EInputConsumeOptions : byte
        {
           	ICO_ConsumeAll,
           	ICO_ConsumeBoundKeys,
           	ICO_ConsumeNone,
           	ICO_MAX,
        };

        // Enum Engine.EFilterInterpolationType
        public enum EFilterInterpolationType : byte
        {
           	BSIT_Average,
           	BSIT_Linear,
           	BSIT_Cubic,
           	BSIT_MAX,
        };

        // Enum Engine.ECollisionResponse
        public enum ECollisionResponse : byte
        {
           	ECR_Ignore,
           	ECR_Overlap,
           	ECR_Block,
           	ECR_MAX,
        };

        // Enum Engine.EPhysicsSceneType
        public enum EPhysicsSceneType : byte
        {
           	PST_Sync,
           	PST_Cloth,
           	PST_Async,
           	PST_MAX,
        };

        // Enum Engine.ETriangleSortAxis
        public enum ETriangleSortAxis : byte
        {
           	TSA_X_Axis,
           	TSA_Y_Axis,
           	TSA_Z_Axis,
           	TSA_MAX,
        };

        // Enum Engine.ETriangleSortOption
        public enum ETriangleSortOption : byte
        {
           	TRISORT_None,
           	TRISORT_CenterRadialDistance,
           	TRISORT_Random,
           	TRISORT_MergeContiguous,
           	TRISORT_Custom,
           	TRISORT_CustomLeftRight,
           	TRISORT_MAX,
        };

        // Enum Engine.ELightingBuildQuality
        public enum ELightingBuildQuality : byte
        {
           	Quality_Preview,
           	Quality_Medium,
           	Quality_High,
           	Quality_Production,
           	Quality_MAX,
        };

        // Enum Engine.EMaterialSamplerType
        public enum EMaterialSamplerType : byte
        {
           	SAMPLERTYPE_Color,
           	SAMPLERTYPE_Grayscale,
           	SAMPLERTYPE_Alpha,
           	SAMPLERTYPE_Normal,
           	SAMPLERTYPE_Masks,
           	SAMPLERTYPE_DistanceFieldFont,
           	SAMPLERTYPE_LinearColor,
           	SAMPLERTYPE_LinearGrayscale,
           	SAMPLERTYPE_MAX,
        };

        // Enum Engine.EPresortedBillboardsMode
        public enum EPresortedBillboardsMode : byte
        {
           	PBM_Disabled,
           	PBM_FrontToBack2D,
           	PBM_BackToFront2D,
           	PBM_MAX,
        };

        // Enum Engine.EMaterialGeometryMode
        public enum EMaterialGeometryMode : byte
        {
           	MGM_Normal,
           	MGM_VerticesAsBillboards,
           	MGM_TriangleDensityView,
           	MGM_TriangleDensityViewWorldSpace,
           	MGM_MAX,
        };

        // Enum Engine.ELowResTranslucencyCascade
        public enum ELowResTranslucencyCascade : byte
        {
           	LRTC_QuarterRes,
           	LRTC_HalfRes,
           	LRTC_FullRes,
           	LRTC_MAX,
        };

        // Enum Engine.EMaterialTessellationMode
        public enum EMaterialTessellationMode : byte
        {
           	MTM_NoTessellation,
           	MTM_FlatTessellation,
           	MTM_PNTriangles,
           	MTM_MAX,
        };

        // Enum Engine.EMaterialShadingModel
        public enum EMaterialShadingModel : byte
        {
           	MSM_Unlit,
           	MSM_DefaultLit,
           	MSM_Subsurface,
           	MSM_PreintegratedSkin,
           	MSM_ClearCoat,
           	MSM_SubsurfaceProfile,
           	MSM_TwoSidedFoliage,
           	MSM_MAX,
        };

        // Enum Engine.EParticleCollisionMode
        public enum EParticleCollisionMode : byte
        {
           	SceneDepth,
           	DistanceField,
           	EParticleCollisionMode_MAX,
        };

        // Enum Engine.ETrailWidthMode
        public enum ETrailWidthMode : byte
        {
           	ETrailWidthMode_FromCentre,
           	ETrailWidthMode_FromFirst,
           	ETrailWidthMode_FromSecond,
           	ETrailWidthMode_MAX,
        };

        // Enum Engine.ETranslucentSortPolicy
        public enum ETranslucentSortPolicy : byte
        {
           	SortByDistance,
           	SortByProjectedZ,
           	SortAlongAxis,
           	ETranslucentSortPolicy_MAX,
        };

        // Enum Engine.ETranslucencyLightingMode
        public enum ETranslucencyLightingMode : byte
        {
           	TLM_VolumetricNonDirectional,
           	TLM_VolumetricDirectional,
           	TLM_VolumetricPerVertexNonDirectional,
           	TLM_VolumetricPerVertexDirectional,
           	TLM_Surface,
           	TLM_SurfacePerPixelLighting,
           	TLM_DirectionalInnerCascade,
           	TLM_NonDirectionalInnerCascade,
           	TLM_MAX,
        };

        // Enum Engine.ESamplerSourceMode
        public enum ESamplerSourceMode : byte
        {
           	SSM_FromTextureAsset,
           	SSM_Wrap_WorldGroupSettings,
           	SSM_Clamp_WorldGroupSettings,
           	SSM_MAX,
        };

        // Enum Engine.EConstantMaterial
        public enum EConstantMaterial : byte
        {
           	CONSTMAT_None,
           	CONSTMAT_GroundCover,
           	CONSTMAT_TreeFoliage,
           	CONSTMAT_MAX,
        };

        // Enum Engine.EBlendMode
        public enum EBlendMode : byte
        {
           	BLEND_Opaque,
           	BLEND_Masked,
           	BLEND_Translucent,
           	BLEND_Additive,
           	BLEND_Modulate,
           	BLEND_BlendedOIT,
           	BLEND_LowResTranslucent,
           	BLEND_AlphaBlend,
           	BLEND_TranslucentUI,
           	BLEND_PremultipliedAlpha,
           	BLEND_MAX,
        };

        // Enum Engine.EIndirectLightingCacheQuality
        public enum EIndirectLightingCacheQuality : byte
        {
           	ILCQ_Off,
           	ILCQ_Point,
           	ILCQ_Volume,
           	ILCQ_MAX,
        };

        // Enum Engine.ESceneDepthPriorityGroup
        public enum ESceneDepthPriorityGroup : byte
        {
           	SDPG_World,
           	SDPG_Foreground,
           	SDPG_MAX,
        };

        // Enum Engine.EDetachmentRule
        public enum EDetachmentRule : byte
        {
           	KeepRelative,
           	KeepWorld,
           	EDetachmentRule_MAX,
        };

        // Enum Engine.EAttachmentRule
        public enum EAttachmentRule : byte
        {
           	KeepRelative,
           	KeepWorld,
           	SnapToTarget,
           	EAttachmentRule_MAX,
        };

        // Enum Engine.EActorMetricsType
        public enum EActorMetricsType : byte
        {
           	METRICS_VERTS,
           	METRICS_TRIS,
           	METRICS_SECTIONS,
           	METRICS_MAX,
        };

        // Enum Engine.EAspectRatioAxisConstraint
        public enum EAspectRatioAxisConstraint : byte
        {
           	AspectRatio_MaintainYFOV,
           	AspectRatio_MaintainXFOV,
           	AspectRatio_MajorAxisFOV,
           	AspectRatio_MaintainYFOV_UnitIsXFovIn16By9,
           	AspectRatio_MAX,
        };

        // Enum Engine.EBlueprintType
        public enum EBlueprintType : byte
        {
           	BPTYPE_Normal,
           	BPTYPE_Const,
           	BPTYPE_MacroLibrary,
           	BPTYPE_Interface,
           	BPTYPE_LevelScript,
           	BPTYPE_FunctionLibrary,
           	BPTYPE_MAX,
        };

        // Enum Engine.EBlueprintStatus
        public enum EBlueprintStatus : byte
        {
           	BS_Unknown,
           	BS_Dirty,
           	BS_Error,
           	BS_UpToDate,
           	BS_BeingCreated,
           	BS_UpToDateWithWarnings,
           	BS_MAX,
        };

        // Enum Engine.ERelativeTransformSpace
        public enum ERelativeTransformSpace : byte
        {
           	RTS_World,
           	RTS_Actor,
           	RTS_Component,
           	RTS_Basis,
           	RTS_BasisGrid,
           	RTS_MAX,
        };

        // Enum Engine.EDetailMode
        public enum EDetailMode : byte
        {
           	DM_Low,
           	DM_Medium,
           	DM_High,
           	DM_MAX,
        };

        // Enum Engine.ENetSpatialClusteringOptions
        public enum ENetSpatialClusteringOptions : byte
        {
           	OptIn,
           	OptOut,
           	NeverRelevant,
           	ENetSpatialClusteringOptions_MAX,
        };

        // Enum Engine.EBrushType
        public enum EBrushType : byte
        {
           	Brush_Default,
           	Brush_Add,
           	Brush_Subtract,
           	Brush_MAX,
        };

        // Enum Engine.ECsgOper
        public enum ECsgOper : byte
        {
           	CSG_Active,
           	CSG_Add,
           	CSG_Subtract,
           	CSG_Intersect,
           	CSG_Deintersect,
           	CSG_None,
           	CSG_MAX,
        };

        // Enum Engine.ReverbPreset
        public enum ReverbPreset : byte
        {
           	REVERB_Default,
           	REVERB_Bathroom,
           	REVERB_StoneRoom,
           	REVERB_Auditorium,
           	REVERB_ConcertHall,
           	REVERB_Cave,
           	REVERB_Hallway,
           	REVERB_StoneCorridor,
           	REVERB_Alley,
           	REVERB_Forest,
           	REVERB_City,
           	REVERB_Mountains,
           	REVERB_Quarry,
           	REVERB_Plain,
           	REVERB_ParkingLot,
           	REVERB_SewerPipe,
           	REVERB_Underwater,
           	REVERB_SmallRoom,
           	REVERB_MediumRoom,
           	REVERB_LargeRoom,
           	REVERB_MediumHall,
           	REVERB_LargeHall,
           	REVERB_Plate,
           	REVERB_MAX,
        };

        // Enum Engine.EStreamingVolumeUsage
        public enum EStreamingVolumeUsage : byte
        {
           	SVB_Loading,
           	SVB_LoadingAndVisibility,
           	SVB_VisibilityBlockingOnLoad,
           	SVB_BlockingOnLoad,
           	SVB_LoadingNotVisible,
           	SVB_MAX,
        };

        // Enum Engine.ENavigationQueryResult
        public enum ENavigationQueryResult : byte
        {
           	Invalid,
           	Error,
           	Fail,
           	Success,
           	ENavigationQueryResult_MAX,
        };

        // Enum Engine.ENavDataGatheringModeConfig
        public enum ENavDataGatheringModeConfig : byte
        {
           	Invalid,
           	Instant,
           	Lazy,
           	ENavDataGatheringModeConfig_MAX,
        };

        // Enum Engine.ENavDataGatheringMode
        public enum ENavDataGatheringMode : byte
        {
           	Default,
           	Instant,
           	Lazy,
           	ENavDataGatheringMode_MAX,
        };

        // Enum Engine.ENavigationOptionFlag
        public enum ENavigationOptionFlag : byte
        {
           	Default,
           	Enable,
           	Disable,
           	MAX,
           	ENavigationOptionFlag_MAX,
        };

        // Enum Engine.EBlendableLocation
        public enum EBlendableLocation : byte
        {
           	BL_AfterTonemapping,
           	BL_BeforeTonemapping,
           	BL_BeforeTranslucency,
           	BL_ReplacingTonemapper,
           	BL_ActualBeforeTranslucency,
           	BL_BeforeLighting,
           	BL_MAX,
        };

        // Enum Engine.EDisableShadowMapMethod
        public enum EDisableShadowMapMethod : byte
        {
           	DSM_None,
           	DSM_DisableLast,
           	DSM_DisableThirdSecond,
           	DSM_DisableAll,
           	DSM_MAX,
        };

        // Enum Engine.EAntiAliasingMethod
        public enum EAntiAliasingMethod : byte
        {
           	AAM_None,
           	AAM_FXAA,
           	AAM_TemporalAA,
           	AAM_MAX,
        };

        // Enum Engine.EDepthOfFieldMethod
        public enum EDepthOfFieldMethod : byte
        {
           	DOFM_BokehDOF,
           	DOFM_Gaussian,
           	DOFM_CircleDOF,
           	DOFM_MAX,
        };

        // Enum Engine.ECameraAnimPlaySpace
        public enum ECameraAnimPlaySpace : byte
        {
           	CameraLocal,
           	World,
           	UserDefined,
           	RARE_CutsceneWorld,
           	RARE_RelativeToWorldLocation,
           	ECameraAnimPlaySpace_MAX,
        };

        // Enum Engine.ECameraProjectionMode
        public enum ECameraProjectionMode : byte
        {
           	Perspective,
           	Orthographic,
           	ECameraProjectionMode_MAX,
        };

        // Enum Engine.EInitialOscillatorOffset
        public enum EInitialOscillatorOffset : byte
        {
           	EOO_OffsetRandom,
           	EOO_OffsetZero,
           	EOO_MAX,
        };

        // Enum Engine.EViewTargetBlendFunction
        public enum EViewTargetBlendFunction : byte
        {
           	VTBlend_Linear,
           	VTBlend_Cubic,
           	VTBlend_EaseIn,
           	VTBlend_EaseOut,
           	VTBlend_EaseInOut,
           	VTBlend_MAX,
        };

        // Enum Engine.EControllerAnalogStick
        public enum EControllerAnalogStick : byte
        {
           	CAS_LeftStick,
           	CAS_RightStick,
           	CAS_MAX,
        };

        // Enum Engine.ERichCurveExtrapolation
        public enum ERichCurveExtrapolation : byte
        {
           	RCCE_Cycle,
           	RCCE_CycleWithOffset,
           	RCCE_Oscillate,
           	RCCE_Linear,
           	RCCE_Constant,
           	RCCE_None,
           	RCCE_MAX,
        };

        // Enum Engine.ERichCurveTangentWeightMode
        public enum ERichCurveTangentWeightMode : byte
        {
           	RCTWM_WeightedNone,
           	RCTWM_WeightedArrive,
           	RCTWM_WeightedLeave,
           	RCTWM_WeightedBoth,
           	RCTWM_MAX,
        };

        // Enum Engine.ERichCurveTangentMode
        public enum ERichCurveTangentMode : byte
        {
           	RCTM_Auto,
           	RCTM_User,
           	RCTM_Break,
           	RCTM_None,
           	RCTM_MAX,
        };

        // Enum Engine.ERichCurveInterpMode
        public enum ERichCurveInterpMode : byte
        {
           	RCIM_Linear,
           	RCIM_Constant,
           	RCIM_Cubic,
           	RCIM_None,
           	RCIM_MAX,
        };

        // Enum Engine.EDynamicForceFeedbackAction
        public enum EDynamicForceFeedbackAction : byte
        {
           	Start,
           	Update,
           	Stop,
           	EDynamicForceFeedbackAction_MAX,
        };

        // Enum Engine.EStandbyType
        public enum EStandbyType : byte
        {
           	STDBY_Rx,
           	STDBY_Tx,
           	STDBY_BadPing,
           	STDBY_MAX,
        };

        // Enum Engine.EWorldCompositionSetting
        public enum EWorldCompositionSetting : byte
        {
           	NoWorldComposition,
           	WorldComposition,
           	NestedWorldComposition,
           	EWorldCompositionSetting_MAX,
        };

        // Enum Engine.EVisibilityAggressiveness
        public enum EVisibilityAggressiveness : byte
        {
           	VIS_LeastAggressive,
           	VIS_ModeratelyAggressive,
           	VIS_MostAggressive,
           	VIS_Max,
        };

        // Enum Engine.ESimpleLightFunctionType
        public enum ESimpleLightFunctionType : byte
        {
           	NoFunction,
           	Pulse,
           	Flicker,
           	ESimpleLightFunctionType_MAX,
        };

        // Enum Engine.ERuntimeGenerationType
        public enum ERuntimeGenerationType : byte
        {
           	Static,
           	DynamicModifiersOnly,
           	Dynamic,
           	LegacyGeneration,
           	ERuntimeGenerationType_MAX,
        };

        // Enum Engine.ERecastPartitioning
        public enum ERecastPartitioning : byte
        {
           	Monotone,
           	Watershed,
           	ChunkyMonotone,
           	ERecastPartitioning_MAX,
        };

        // Enum Engine.ENavCostDisplay
        public enum ENavCostDisplay : byte
        {
           	TotalCost,
           	HeuristicOnly,
           	RealCostOnly,
           	ENavCostDisplay_MAX,
        };

        // Enum Engine.ENavLinkDirection
        public enum ENavLinkDirection : byte
        {
           	BothWays,
           	LeftToRight,
           	RightToLeft,
           	ENavLinkDirection_MAX,
        };

        // Enum Engine.ETranslucencyPass
        public enum ETranslucencyPass : byte
        {
           	Default,
           	BeforeTranslucency,
           	BeforeVolumeFog,
           	WriteDepth,
           	ETranslucencyPass_MAX,
        };

        // Enum Engine.EMaterialUsage
        public enum EMaterialUsage : byte
        {
           	MATUSAGE_SkeletalMesh,
           	MATUSAGE_ParticleSprites,
           	MATUSAGE_BeamTrails,
           	MATUSAGE_MeshParticles,
           	MATUSAGE_StaticLighting,
           	MATUSAGE_MorphTargets,
           	MATUSAGE_SplineMesh,
           	MATUSAGE_Landscape,
           	MATUSAGE_InstancedStaticMeshes,
           	MATUSAGE_Clothing,
           	MATUSAGE_Deformables,
           	MATUSAGE_FFTWaterMask,
           	MATUSAGE_DynamicObjectFading,
           	MATUSAGE_Clouds,
           	MATUSAGE_InstancedRopes,
           	MATUSAGE_WaterBoundary,
           	MATUSAGE_PlanarReflection,
           	MATUSAGE_CPUParticleSprites,
           	MATUSAGE_Coverage,
           	MATUSAGE_GPUInstanceCulling,
           	MATUSAGE_PointLightShadow,
           	MATUSAGE_MAX,
        };

        // Enum Engine.EDOFMode
        public enum EDOFMode : byte
        {
           	Default,
           	SixDOF,
           	YZPlane,
           	XZPlane,
           	XYPlane,
           	None,
           	EDOFMode_MAX,
        };

        // Enum Engine.EExcludeFromCascades
        public enum EExcludeFromCascades : byte
        {
           	LastCascade,
           	LastTwoCascades,
           	LastThreeCascades,
           	EExcludeFromCascades_MAX,
        };

        // Enum Engine.EHasCustomNavigableGeometry
        public enum EHasCustomNavigableGeometry : byte
        {
           	No,
           	Yes,
           	EvenIfNotCollidable,
           	DontExport,
           	EHasCustomNavigableGeometry_MAX,
        };

        // Enum Engine.ECanBeCharacterBase
        public enum ECanBeCharacterBase : byte
        {
           	ECB_No,
           	ECB_Yes,
           	ECB_Owner,
           	ECB_MAX,
        };

        // Enum Engine.EParticleSystemOcclusionBoundsMethod
        public enum EParticleSystemOcclusionBoundsMethod : byte
        {
           	EPSOBM_None,
           	EPSOBM_ParticleBounds,
           	EPSOBM_CustomBounds,
           	EPSOBM_MAX,
        };

        // Enum Engine.ParticleSystemLODMethod
        public enum ParticleSystemLODMethod : byte
        {
           	PARTICLESYSTEMLODMETHOD_Automatic,
           	PARTICLESYSTEMLODMETHOD_DirectSet,
           	PARTICLESYSTEMLODMETHOD_ActivateAutomatic,
           	PARTICLESYSTEMLODMETHOD_MAX,
        };

        // Enum Engine.EParticleSystemUpdateMode
        public enum EParticleSystemUpdateMode : byte
        {
           	EPSUM_RealTime,
           	EPSUM_FixedTime,
           	EPSUM_MAX,
        };

        // Enum Engine.EWaterKillCondition
        public enum EWaterKillCondition : byte
        {
           	None,
           	AboveWater,
           	Underwater,
           	EWaterKillCondition_MAX,
        };

        // Enum Engine.EParticleEventType
        public enum EParticleEventType : byte
        {
           	EPET_Any,
           	EPET_Spawn,
           	EPET_Death,
           	EPET_Collision,
           	EPET_Burst,
           	EPET_Blueprint,
           	EPET_KillByKillPlane,
           	EPET_MAX,
        };

        // Enum Engine.ParticleReplayState
        public enum ParticleReplayState : byte
        {
           	PRS_Disabled,
           	PRS_Capturing,
           	PRS_Replaying,
           	PRS_MAX,
        };

        // Enum Engine.EParticleSysParamType
        public enum EParticleSysParamType : byte
        {
           	PSPT_None,
           	PSPT_Scalar,
           	PSPT_ScalarRand,
           	PSPT_Vector,
           	PSPT_VectorRand,
           	PSPT_Color,
           	PSPT_Actor,
           	PSPT_Material,
           	PSPT_EmitterPoints,
           	PSPT_MAX,
        };

        // Enum Engine.SkeletalMeshOptimizationType
        public enum SkeletalMeshOptimizationType : byte
        {
           	SMOT_NumOfTriangles,
           	SMOT_MaxDeviation,
           	SMOT_MAX,
        };

        // Enum Engine.SkeletalMeshOptimizationImportance
        public enum SkeletalMeshOptimizationImportance : byte
        {
           	SMOI_Off,
           	SMOI_Lowest,
           	SMOI_Low,
           	SMOI_Normal,
           	SMOI_High,
           	SMOI_Highest,
           	SMOI_MAX,
        };

        // Enum Engine.EAnimGroupRole
        public enum EAnimGroupRole : byte
        {
           	CanBeLeader,
           	AlwaysFollower,
           	AlwaysLeader,
           	EAnimGroupRole_MAX,
        };

        // Enum Engine.ERootMotionMode
        public enum ERootMotionMode : byte
        {
           	NoRootMotionExtraction,
           	IgnoreRootMotion,
           	RootMotionFromEverything,
           	RootMotionFromMontagesOnly,
           	ERootMotionMode_MAX,
        };

        // Enum Engine.ERootMotionRootLock
        public enum ERootMotionRootLock : byte
        {
           	RefPose,
           	AnimFirstFrame,
           	Zero,
           	ERootMotionRootLock_MAX,
        };

        // Enum Engine.EBoneSpaces
        public enum EBoneSpaces : byte
        {
           	WorldSpace,
           	ComponentSpace,
           	EBoneSpaces_MAX,
        };

        // Enum Engine.EMeshComponentUpdateFlag
        public enum EMeshComponentUpdateFlag : byte
        {
           	AlwaysTickPoseAndRefreshBones,
           	AlwaysTickPose,
           	OnlyTickPoseWhenRendered,
           	OnlyIfLODChanged,
           	EMeshComponentUpdateFlag_MAX,
        };

        // Enum Engine.EPhysBodyOp
        public enum EPhysBodyOp : byte
        {
           	PBO_None,
           	PBO_Term,
           	PBO_Disable,
           	PBO_MAX,
        };

        // Enum Engine.EBoneVisibilityStatus
        public enum EBoneVisibilityStatus : byte
        {
           	BVS_HiddenByParent,
           	BVS_Visible,
           	BVS_ExplicitlyHidden,
           	BVS_MAX,
        };

        // Enum Engine.EAngularDriveMode
        public enum EAngularDriveMode : byte
        {
           	SLERP,
           	TwistAndSwing,
           	EAngularDriveMode_MAX,
        };

        // Enum Engine.EConstraintFrame
        public enum EConstraintFrame : byte
        {
           	Frame1,
           	Frame2,
           	EConstraintFrame_MAX,
        };

        // Enum Engine.ELinearConstraintMotion
        public enum ELinearConstraintMotion : byte
        {
           	LCM_Free,
           	LCM_Limited,
           	LCM_Locked,
           	LCM_MAX,
        };

        // Enum Engine.EBoneTranslationRetargetingMode
        public enum EBoneTranslationRetargetingMode : byte
        {
           	Animation,
           	Skeleton,
           	AnimationScaled,
           	AnimationRelative,
           	EBoneTranslationRetargetingMode_MAX,
        };

        // Enum Engine.EAnimLinkMethod
        public enum EAnimLinkMethod : byte
        {
           	Absolute,
           	Relative,
           	Proportional,
           	EAnimLinkMethod_MAX,
        };

        // Enum Engine.ECurveBlendOption
        public enum ECurveBlendOption : byte
        {
           	MaxWeight,
           	NormalizeByWeight,
           	BlendByWeight,
           	ECurveBlendOption_MAX,
        };

        // Enum Engine.EAdditiveAnimationType
        public enum EAdditiveAnimationType : byte
        {
           	AAT_None,
           	AAT_LocalSpaceBase,
           	AAT_RotationOffsetMeshSpace,
           	AAT_MAX,
        };

        // Enum Engine.ENotifyFilterType
        public enum ENotifyFilterType : byte
        {
           	NoFiltering,
           	LOD,
           	ENotifyFilterType_MAX,
        };

        // Enum Engine.EMontageNotifyTickType
        public enum EMontageNotifyTickType : byte
        {
           	Queued,
           	BranchingPoint,
           	EMontageNotifyTickType_MAX,
        };

        // Enum Engine.EAnimationMode
        public enum EAnimationMode : byte
        {
           	AnimationBlueprint,
           	AnimationSingleNode,
           	AnimationCustomMode,
           	EAnimationMode_MAX,
        };

        // Enum Engine.EKinematicBonesUpdateToPhysics
        public enum EKinematicBonesUpdateToPhysics : byte
        {
           	SkipSimulatingBones,
           	SkipAllBones,
           	EKinematicBonesUpdateToPhysics_MAX,
        };

        // Enum Engine.ESplineCoordinateSpace
        public enum ESplineCoordinateSpace : byte
        {
           	Local,
           	World,
           	ESplineCoordinateSpace_MAX,
        };

        // Enum Engine.ESplinePointType
        public enum ESplinePointType : byte
        {
           	Linear,
           	Curve,
           	Constant,
           	CurveClamped,
           	CurveCustomTangent,
           	ESplinePointType_MAX,
        };

        // Enum Engine.FNavigationSystemRunMode
        public enum FNavigationSystemRunMode : byte
        {
           	InvalidMode,
           	GameMode,
           	EditorMode,
           	SimulationMode,
           	PIEMode,
           	FNavigationSystemRunMode_MAX,
        };

        // Enum Engine.ETypeAdvanceAnim
        public enum ETypeAdvanceAnim : byte
        {
           	ETAA_Default,
           	ETAA_Finished,
           	ETAA_Looped,
           	ETAA_MAX,
        };

        // Enum Engine.EAlphaBlendOption
        public enum EAlphaBlendOption : byte
        {
           	Linear,
           	Cubic,
           	HermiteCubic,
           	Sinusoidal,
           	QuadraticInOut,
           	CubicInOut,
           	QuarticInOut,
           	QuinticInOut,
           	CircularIn,
           	CircularOut,
           	CircularInOut,
           	ExpIn,
           	ExpOut,
           	ExpInOut,
           	Source,
           	Target,
           	Custom,
           	EAlphaBlendOption_MAX,
        };

        // Enum Engine.ETransitionLogicType
        public enum ETransitionLogicType : byte
        {
           	TLT_StandardBlend,
           	TLT_Custom,
           	TLT_MAX,
        };

        // Enum Engine.ETransitionBlendMode
        public enum ETransitionBlendMode : byte
        {
           	TBM_Linear,
           	TBM_Cubic,
           	TBM_MAX,
        };

        // Enum Engine.EBoneRotationSource
        public enum EBoneRotationSource : byte
        {
           	BRS_KeepComponentSpaceRotation,
           	BRS_KeepLocalSpaceRotation,
           	BRS_CopyFromTarget,
           	BRS_MAX,
        };

        // Enum Engine.EBoneControlSpace
        public enum EBoneControlSpace : byte
        {
           	BCS_WorldSpace,
           	BCS_ComponentSpace,
           	BCS_ParentBoneSpace,
           	BCS_BoneSpace,
           	BCS_MAX,
        };

        // Enum Engine.EAnimNotifyEventType
        public enum EAnimNotifyEventType : byte
        {
           	Begin,
           	End,
           	EAnimNotifyEventType_MAX,
        };

        // Enum Engine.ESoundSpatializationAlgorithm
        public enum ESoundSpatializationAlgorithm : byte
        {
           	SPATIALIZATION_Default,
           	SPATIALIZATION_HRTF,
           	SPATIALIZATION_MAX,
        };

        // Enum Engine.EAttenuationShape
        public enum EAttenuationShape : byte
        {
           	Sphere,
           	Capsule,
           	Box,
           	Cone,
           	EAttenuationShape_MAX,
        };

        // Enum Engine.ESoundDistanceCalc
        public enum ESoundDistanceCalc : byte
        {
           	SOUNDDISTANCE_Normal,
           	SOUNDDISTANCE_InfiniteXYPlane,
           	SOUNDDISTANCE_InfiniteXZPlane,
           	SOUNDDISTANCE_InfiniteYZPlane,
           	SOUNDDISTANCE_MAX,
        };

        // Enum Engine.ESoundDistanceModel
        public enum ESoundDistanceModel : byte
        {
           	ATTENUATION_Linear,
           	ATTENUATION_Logarithmic,
           	ATTENUATION_Inverse,
           	ATTENUATION_LogReverse,
           	ATTENUATION_NaturalSound,
           	ATTENUATION_Custom,
           	ATTENUATION_MAX,
        };

        // Enum Engine.EAmbientLightClusteringPolicy
        public enum EAmbientLightClusteringPolicy : byte
        {
           	OnlyLight,
           	ClosePriorityLight,
           	BlendableInCouple,
           	NoGrouping,
           	EAmbientLightClusteringPolicy_MAX,
        };

        // Enum Engine.EAmbientLightConeShape
        public enum EAmbientLightConeShape : byte
        {
           	Sphere,
           	Hemisphere,
           	VeryWideCone,
           	WideCone,
           	NarrowishCone,
           	EAmbientLightConeShape_MAX,
        };

        // Enum Engine.ESkyLightSourceType
        public enum ESkyLightSourceType : byte
        {
           	SLS_CapturedScene,
           	SLS_SpecifiedCubemap,
           	SLS_MAX,
        };

        // Enum Engine.EOptimizationType
        public enum EOptimizationType : byte
        {
           	OT_NumOfTriangles,
           	OT_MaxDeviation,
           	OT_MAX,
        };

        // Enum Engine.EImportanceLevel
        public enum EImportanceLevel : byte
        {
           	IL_Off,
           	IL_Lowest,
           	IL_Low,
           	IL_Normal,
           	IL_High,
           	IL_Highest,
           	TEMP_BROKEN2,
           	EImportanceLevel_MAX,
        };

        // Enum Engine.ENormalMode
        public enum ENormalMode : byte
        {
           	NM_PreserveSmoothingGroups,
           	NM_RecalculateNormals,
           	NM_RecalculateNormalsSmooth,
           	NM_RecalculateNormalsHard,
           	TEMP_BROKEN,
           	ENormalMode_MAX,
        };

        // Enum Engine.EPoseableAnimMode
        public enum EPoseableAnimMode : byte
        {
           	Poseable,
           	Animated,
           	EPoseableAnimMode_MAX,
        };

        // Enum Engine.ETextureSamplerFilter
        public enum ETextureSamplerFilter : byte
        {
           	Point,
           	Bilinear,
           	Trilinear,
           	AnisotropicPoint,
           	AnisotropicLinear,
           	ETextureSamplerFilter_MAX,
        };

        // Enum Engine.ETexturePowerOfTwoSetting
        public enum ETexturePowerOfTwoSetting : byte
        {
           	None,
           	PadToPowerOfTwo,
           	PadToSquarePowerOfTwo,
           	PadToMultipleOfFour,
           	ETexturePowerOfTwoSetting_MAX,
        };

        // Enum Engine.TextureMipGenSettings
        public enum TextureMipGenSettings : byte
        {
           	TMGS_FromTextureGroup,
           	TMGS_SimpleAverage,
           	TMGS_Sharpen0,
           	TMGS_Sharpen1,
           	TMGS_Sharpen2,
           	TMGS_Sharpen3,
           	TMGS_Sharpen4,
           	TMGS_Sharpen5,
           	TMGS_Sharpen6,
           	TMGS_Sharpen7,
           	TMGS_Sharpen8,
           	TMGS_Sharpen9,
           	TMGS_Sharpen10,
           	TMGS_NoMipmaps,
           	TMGS_LeaveExistingMips,
           	TMGS_Blur1,
           	TMGS_Blur2,
           	TMGS_Blur3,
           	TMGS_Blur4,
           	TMGS_Blur5,
           	TMGS_MAX,
        };

        // Enum Engine.TextureGroup
        public enum TextureGroup : byte
        {
           	TEXTUREGROUP_World,
           	TEXTUREGROUP_WorldNormalMap,
           	TEXTUREGROUP_WorldSpecular,
           	TEXTUREGROUP_Character,
           	TEXTUREGROUP_CharacterNormalMap,
           	TEXTUREGROUP_CharacterSpecular,
           	TEXTUREGROUP_Weapon,
           	TEXTUREGROUP_WeaponNormalMap,
           	TEXTUREGROUP_WeaponSpecular,
           	TEXTUREGROUP_Vehicle,
           	TEXTUREGROUP_VehicleNormalMap,
           	TEXTUREGROUP_VehicleSpecular,
           	TEXTUREGROUP_Cinematic,
           	TEXTUREGROUP_Effects,
           	TEXTUREGROUP_EffectsNotFiltered,
           	TEXTUREGROUP_Skybox,
           	TEXTUREGROUP_UI,
           	TEXTUREGROUP_Lightmap,
           	TEXTUREGROUP_RenderTarget,
           	TEXTUREGROUP_MobileFlattened,
           	TEXTUREGROUP_ProcBuilding_Face,
           	TEXTUREGROUP_ProcBuilding_LightMap,
           	TEXTUREGROUP_Shadowmap,
           	TEXTUREGROUP_ColorLookupTable,
           	TEXTUREGROUP_Terrain_Heightmap,
           	TEXTUREGROUP_Terrain_Weightmap,
           	TEXTUREGROUP_Bokeh,
           	TEXTUREGROUP_IESLightProfile,
           	TEXTUREGROUP_Pixels2D,
           	TEXTUREGROUP_RareLoDTest,
           	TEXTUREGROUP_Unassigned,
           	TEXTUREGROUP_Animation,
           	TEXTUREGROUP_Coherent,
           	TEXTUREGROUP_MippedUI,
           	TEXTUREGROUP_LoadingScreen,
           	TEXTUREGROUP_MAX,
        };

        // Enum Engine.ETextureSourceFormat
        public enum ETextureSourceFormat : byte
        {
           	TSF_Invalid,
           	TSF_G8,
           	TSF_BGRA8,
           	TSF_BGRE8,
           	TSF_RGBA16,
           	TSF_RGBA16F,
           	TSF_RGBA8,
           	TSF_RGBE8,
           	TSF_RGBA32F,
           	TSF_MAX,
        };

        // Enum Engine.ETextureSourceArtType
        public enum ETextureSourceArtType : byte
        {
           	TSAT_Uncompressed,
           	TSAT_PNGCompressed,
           	TSAT_DDSFile,
           	TSAT_MAX,
        };

        // Enum Engine.ETextureMipCount
        public enum ETextureMipCount : byte
        {
           	TMC_ResidentMips,
           	TMC_AllMips,
           	TMC_AllMipsBiased,
           	TMC_ResidentMipsUnpadded,
           	TMC_MAX,
        };

        // Enum Engine.ECompositeTextureMode
        public enum ECompositeTextureMode : byte
        {
           	CTM_Disabled,
           	CTM_NormalRoughnessToRed,
           	CTM_NormalRoughnessToGreen,
           	CTM_NormalRoughnessToBlue,
           	CTM_NormalRoughnessToAlpha,
           	CTM_MAX,
        };

        // Enum Engine.TextureAddress
        public enum TextureAddress : byte
        {
           	TA_Wrap,
           	TA_Clamp,
           	TA_Mirror,
           	TA_MAX,
        };

        // Enum Engine.TextureFilter
        public enum TextureFilter : byte
        {
           	TF_Nearest,
           	TF_Bilinear,
           	TF_Trilinear,
           	TF_Default,
           	TF_MAX,
        };

        // Enum Engine.TextureCompressionSettings
        public enum TextureCompressionSettings : byte
        {
           	TC_Default,
           	TC_Normalmap,
           	TC_Masks,
           	TC_Grayscale,
           	TC_Displacementmap,
           	TC_VectorDisplacementmap,
           	TC_HDR,
           	TC_EditorIcon,
           	TC_Alpha,
           	TC_DistanceFieldFont,
           	TC_HDR_Compressed,
           	TC_BC7,
           	TC_SignedHDR,
           	TC_UnsignedHDR,
           	TC_HighQuality,
           	TC_TwoChannelFloat,
           	TC_MAX,
        };

        // Enum Engine.ESplineMeshAxis
        public enum ESplineMeshAxis : byte
        {
           	X,
           	Y,
           	Z,
           	ESplineMeshAxis_MAX,
        };

        // Enum Engine.EVerticalTextAligment
        public enum EVerticalTextAligment : byte
        {
           	EVRTA_TextTop,
           	EVRTA_TextCenter,
           	EVRTA_TextBottom,
           	EVRTA_QuadTop,
           	EVRTA_MAX,
        };

        // Enum Engine.EHorizTextAligment
        public enum EHorizTextAligment : byte
        {
           	EHTA_Left,
           	EHTA_Center,
           	EHTA_Right,
           	EHTA_MAX,
        };

        // Enum Engine.ESceneCaptureSource
        public enum ESceneCaptureSource : byte
        {
           	SCS_SceneColorHDR,
           	SCS_FinalColorLDR,
           	SCS_MAX,
        };

        // Enum Engine.ETimelineDirection
        public enum ETimelineDirection : byte
        {
           	Forward,
           	Backward,
           	ETimelineDirection_MAX,
        };

        // Enum Engine.ETimelineLengthMode
        public enum ETimelineLengthMode : byte
        {
           	TL_TimelineLength,
           	TL_LastKeyFrame,
           	TL_MAX,
        };

        // Enum Engine.EAdditiveBasePoseType
        public enum EAdditiveBasePoseType : byte
        {
           	ABPT_None,
           	ABPT_RefPose,
           	ABPT_AnimScaled,
           	ABPT_AnimFrame,
           	ABPT_MAX,
        };

        // Enum Engine.AnimationKeyFormat
        public enum AnimationKeyFormat : byte
        {
           	AKF_ConstantKeyLerp,
           	AKF_VariableKeyLerp,
           	AKF_PerTrackCompression,
           	AKF_MAX,
        };

        // Enum Engine.AnimationCompressionFormat
        public enum AnimationCompressionFormat : byte
        {
           	ACF_None,
           	ACF_Float96NoW,
           	ACF_Fixed48NoW,
           	ACF_IntervalFixed32NoW,
           	ACF_Fixed32NoW,
           	ACF_Float32NoW,
           	ACF_Identity,
           	ACF_MAX,
        };

        // Enum Engine.ENotifyTriggerMode
        public enum ENotifyTriggerMode : byte
        {
           	AllAnimations,
           	HighestWeightedAnimation,
           	None,
           	ENotifyTriggerMode_MAX,
        };

        // Enum Engine.EBlendSpaceAxis
        public enum EBlendSpaceAxis : byte
        {
           	BSA_None,
           	BSA_X,
           	BSA_Y,
           	BSA_Max,
        };

        // Enum Engine.EEvaluateCurveTableResult
        public enum EEvaluateCurveTableResult : byte
        {
           	RowFound,
           	RowNotFound,
           	EEvaluateCurveTableResult_MAX,
        };

        // Enum Engine.EGrammaticalNumber
        public enum EGrammaticalNumber : byte
        {
           	Singular,
           	Plural,
           	EGrammaticalNumber_MAX,
        };

        // Enum Engine.EGrammaticalGender
        public enum EGrammaticalGender : byte
        {
           	Neuter,
           	Masculine,
           	Feminine,
           	Mixed,
           	EGrammaticalGender_MAX,
        };

        // Enum Engine.ESuggestProjVelocityTraceOption
        public enum ESuggestProjVelocityTraceOption : byte
        {
           	DoNotTrace,
           	TraceFullPath,
           	OnlyTraceWhileAsceding,
           	ESuggestProjVelocityTraceOption_MAX,
        };

        // Enum Engine.EEasingFunc
        public enum EEasingFunc : byte
        {
           	Linear,
           	Step,
           	SinusoidalIn,
           	SinusoidalOut,
           	SinusoidalInOut,
           	EaseIn,
           	EaseOut,
           	EaseInOut,
           	ExpoIn,
           	ExpoOut,
           	ExpoInOut,
           	CircularIn,
           	CircularOut,
           	CircularInOut,
           	EEasingFunc_MAX,
        };

        // Enum Engine.ERoundingMode
        public enum ERoundingMode : byte
        {
           	HalfToEven,
           	HalfFromZero,
           	HalfToZero,
           	FromZero,
           	ToZero,
           	ToNegativeInfinity,
           	ToPositiveInfinity,
           	ERoundingMode_MAX,
        };

        // Enum Engine.EBodyCollisionResponse
        public enum EBodyCollisionResponse : byte
        {
           	BodyCollision_Enabled,
           	BodyCollision_Disabled,
           	BodyCollision_MAX,
        };

        // Enum Engine.EPhysicsType
        public enum EPhysicsType : byte
        {
           	PhysType_Default,
           	PhysType_Kinematic,
           	PhysType_Simulated,
           	PhysType_MAX,
        };

        // Enum Engine.ECollisionTraceFlag
        public enum ECollisionTraceFlag : byte
        {
           	CTF_UseDefault,
           	CTF_UseSimpleAsComplex,
           	CTF_UseComplexAsSimple,
           	CTF_MAX,
        };

        // Enum Engine.ReliabilityType
        public enum ReliabilityType : byte
        {
           	Reliable,
           	Unreliable,
           	Count,
           	ReliabilityType_MAX,
        };

        // Enum Engine.EUIScalingRule
        public enum EUIScalingRule : byte
        {
           	ShortestSide,
           	LongestSide,
           	Horizontal,
           	Vertical,
           	Custom,
           	EUIScalingRule_MAX,
        };

        // Enum Engine.ERenderFocusRule
        public enum ERenderFocusRule : byte
        {
           	Always,
           	NonPointer,
           	NavigationOnly,
           	Never,
           	ERenderFocusRule_MAX,
        };

        // Enum Engine.ESettingsLockedAxis
        public enum ESettingsLockedAxis : byte
        {
           	None,
           	X,
           	Y,
           	Z,
           	Invalid,
           	ESettingsLockedAxis_MAX,
        };

        // Enum Engine.ESettingsDOF
        public enum ESettingsDOF : byte
        {
           	Full3D,
           	YZPlane,
           	XZPlane,
           	XYPlane,
           	ESettingsDOF_MAX,
        };

        // Enum Engine.EFrictionCombineMode
        public enum EFrictionCombineMode : byte
        {
           	Average,
           	Min,
           	Multiply,
           	Max,
           	EFrictionCombineMode_MAX,
        };

        // Enum Engine.EAntiAliasingMethodUI
        public enum EAntiAliasingMethodUI : byte
        {
           	AAM_None,
           	AAM_FXAA,
           	AAM_TemporalAA,
           	AAM_MAX,
        };

        // Enum Engine.EDepthSort
        public enum EDepthSort : byte
        {
           	Default,
           	ForcedOff,
           	ForcedOn,
           	EDepthSort_MAX,
        };

        // Enum Engine.EEarlyZPass
        public enum EEarlyZPass : byte
        {
           	None,
           	OpaqueOnly,
           	OpaqueAndMasked,
           	Auto,
           	EEarlyZPass_MAX,
        };

        // Enum Engine.ECustomDepthStencil
        public enum ECustomDepthStencil : byte
        {
           	Disabled,
           	Enabled,
           	EnabledOnDemand,
           	EnabledWithStencil,
           	ECustomDepthStencil_MAX,
        };

        // Enum Engine.ECompositingSampleCount
        public enum ECompositingSampleCount : byte
        {
           	One,
           	Two,
           	Four,
           	Eight,
           	ECompositingSampleCount_MAX,
        };

        // Enum Engine.EClearSceneOptions
        public enum EClearSceneOptions : byte
        {
           	NoClear,
           	HardwareClear,
           	QuadAtMaxZ,
           	HardwareClearAndQuadAtMaxZ,
           	EClearSceneOptions_MAX,
        };

        // Enum Engine.DistributionParamMode
        public enum DistributionParamMode : byte
        {
           	DPM_Normal,
           	DPM_Abs,
           	DPM_Direct,
           	DPM_MAX,
        };

        // Enum Engine.EDistributionVectorMirrorFlags
        public enum EDistributionVectorMirrorFlags : byte
        {
           	EDVMF_Same,
           	EDVMF_Different,
           	EDVMF_Mirror,
           	EDVMF_MAX,
        };

        // Enum Engine.EDistributionVectorLockFlags
        public enum EDistributionVectorLockFlags : byte
        {
           	EDVLF_None,
           	EDVLF_XY,
           	EDVLF_XZ,
           	EDVLF_YZ,
           	EDVLF_XYZ,
           	EDVLF_MAX,
        };

        // Enum Engine.ECanCreateConnectionResponse
        public enum ECanCreateConnectionResponse : byte
        {
           	CONNECT_RESPONSE_MAKE,
           	CONNECT_RESPONSE_DISALLOW,
           	CONNECT_RESPONSE_BREAK_OTHERS_A,
           	CONNECT_RESPONSE_BREAK_OTHERS_B,
           	CONNECT_RESPONSE_BREAK_OTHERS_AB,
           	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE,
           	CONNECT_RESPONSE_MAX,
        };

        // Enum Engine.EGraphType
        public enum EGraphType : byte
        {
           	GT_Function,
           	GT_Ubergraph,
           	GT_Macro,
           	GT_Animation,
           	GT_StateMachine,
           	GT_MAX,
        };

        // Enum Engine.EConsoleType
        public enum EConsoleType : byte
        {
           	CONSOLE_Any,
           	CONSOLE_Mobile,
           	CONSOLE_MAX,
        };

        // Enum Engine.ETransitionType
        public enum ETransitionType : byte
        {
           	TT_None,
           	TT_Paused,
           	TT_Loading,
           	TT_Saving,
           	TT_Connecting,
           	TT_Precaching,
           	TT_WaitingToConnect,
           	TT_MAX,
        };

        // Enum Engine.EFullyLoadPackageType
        public enum EFullyLoadPackageType : byte
        {
           	FULLYLOAD_Map,
           	FULLYLOAD_Game_PreLoadClass,
           	FULLYLOAD_Game_PostLoadClass,
           	FULLYLOAD_Always,
           	FULLYLOAD_Mutator,
           	FULLYLOAD_MAX,
        };

        // Enum Engine.ECustomTimeStepSynchronizationState
        public enum ECustomTimeStepSynchronizationState : byte
        {
           	Closed,
           	Error,
           	Synchronized,
           	Synchronizing,
           	ECustomTimeStepSynchronizationState_MAX,
        };

        // Enum Engine.EFontImportCharacterSet
        public enum EFontImportCharacterSet : byte
        {
           	FontICS_Default,
           	FontICS_Ansi,
           	FontICS_Symbol,
           	FontICS_MAX,
        };

        // Enum Engine.EFontCacheType
        public enum EFontCacheType : byte
        {
           	Offline,
           	Runtime,
           	EFontCacheType_MAX,
        };

        // Enum Engine.EPostCopyOperation
        public enum EPostCopyOperation : byte
        {
           	None,
           	LogicalNegateBool,
           	EPostCopyOperation_MAX,
        };

        // Enum Engine.EPinHidingMode
        public enum EPinHidingMode : byte
        {
           	NeverAsPin,
           	PinHiddenByDefault,
           	PinShownByDefault,
           	AlwaysAsPin,
           	EPinHidingMode_MAX,
        };

        // Enum Engine.EHIKEffector
        public enum EHIKEffector : byte
        {
           	HIKEffector_Hips,
           	HIKEffector_LeftAnkle,
           	HIKEffector_RightAnkle,
           	HIKEffector_LeftWrist,
           	HIKEffector_RightWrist,
           	HIKEffector_LeftKnee,
           	HIKEffector_RightKnee,
           	HIKEffector_LeftElbow,
           	HIKEffector_RightElbow,
           	HIKEffector_ChestOrigin,
           	HIKEffector_ChestEnd,
           	HIKEffector_LeftFoot,
           	HIKEffector_RightFoot,
           	HIKEffector_LeftShoulder,
           	HIKEffector_RightShoulder,
           	HIKEffector_Head,
           	HIKEffector_LeftHip,
           	HIKEffector_RightHip,
           	HIKEffector_LeftHand,
           	HIKEffector_RightHand,
           	HIKEffector_LeftHandThumb,
           	HIKEffector_LeftHandIndex,
           	HIKEffector_LeftHandMiddle,
           	HIKEffector_LeftHandRing,
           	HIKEffector_LeftHandPinky,
           	HIKEffector_LeftHandExtraFinger,
           	HIKEffector_RightHandThumb,
           	HIKEffector_RightHandIndex,
           	HIKEffector_RightHandMiddle,
           	HIKEffector_RightHandRing,
           	HIKEffector_RightHandPinky,
           	HIKEffector_RightHandExtraFinger,
           	HIKEffector_LeftFootThumb,
           	HIKEffector_LeftFootIndex,
           	HIKEffector_LeftFootMiddle,
           	HIKEffector_LeftFootRing,
           	HIKEffector_LeftFootPinky,
           	HIKEffector_LeftFootExtraFinger,
           	HIKEffector_RightFootThumb,
           	HIKEffector_RightFootIndex,
           	HIKEffector_RightFootMiddle,
           	HIKEffector_RightFootRing,
           	HIKEffector_RightFootPinky,
           	HIKEffector_RightFootExtraFinger,
           	HIKEffector_Last,
           	HIKEffector_MAX,
        };

        // Enum Engine.EHIKProperty
        public enum EHIKProperty : byte
        {
           	HIKProp_HIKForceActorSpaceId,
           	HIKProp_ScaleCompensationId,
           	HIKProp_MassCenterCompensationId,
           	HIKProp_AnkleHeightCompensationId,
           	HIKProp_AnkleProximityCompensationId,
           	HIKProp_HipsHeightCompensationId,
           	HIKProp_ReachActorLeftAnkleId,
           	HIKProp_ReachActorRightAnkleId,
           	HIKProp_ReachActorChestId,
           	HIKProp_ReachActorLeftWristId,
           	HIKProp_ReachActorRightWristId,
           	HIKProp_ReachActorLeftKneeId,
           	HIKProp_ReachActorRightKneeId,
           	HIKProp_ReachActorHeadId,
           	HIKProp_ReachActorLeftElbowId,
           	HIKProp_ReachActorRightElbowId,
           	HIKProp_ReachActorLeftAnkleRotationId,
           	HIKProp_ReachActorRightAnkleRotationId,
           	HIKProp_ReachActorHeadRotationId,
           	HIKProp_ReachActorLeftWristRotationId,
           	HIKProp_ReachActorRightWristRotationId,
           	HIKProp_ReachActorLeftFingerBaseId,
           	HIKProp_ReachActorRightFingerBaseId,
           	HIKProp_ReachActorLeftToesBaseId,
           	HIKProp_ReachActorRightToesBaseId,
           	HIKProp_ReachActorLeftFingerBaseRotationId,
           	HIKProp_ReachActorRightFingerBaseRotationId,
           	HIKProp_ReachActorLeftToesBaseRotationId,
           	HIKProp_ReachActorRightToesBaseRotationId,
           	HIKProp_ReachActorChestRotationId,
           	HIKProp_ReachActorLowerChestRotationId,
           	HIKProp_ReachActorLeftHandThumbId,
           	HIKProp_ReachActorLeftHandIndexId,
           	HIKProp_ReachActorLeftHandMiddleId,
           	HIKProp_ReachActorLeftHandRingId,
           	HIKProp_ReachActorLeftHandPinkyId,
           	HIKProp_ReachActorLeftHandExtraFingerId,
           	HIKProp_ReachActorRightHandThumbId,
           	HIKProp_ReachActorRightHandIndexId,
           	HIKProp_ReachActorRightHandMiddleId,
           	HIKProp_ReachActorRightHandRingId,
           	HIKProp_ReachActorRightHandPinkyId,
           	HIKProp_ReachActorRightHandExtraFingerId,
           	HIKProp_ReachActorLeftFootThumbId,
           	HIKProp_ReachActorLeftFootIndexId,
           	HIKProp_ReachActorLeftFootMiddleId,
           	HIKProp_ReachActorLeftFootRingId,
           	HIKProp_ReachActorLeftFootPinkyId,
           	HIKProp_ReachActorLeftFootExtraFingerId,
           	HIKProp_ReachActorRightFootThumbId,
           	HIKProp_ReachActorRightFootIndexId,
           	HIKProp_ReachActorRightFootMiddleId,
           	HIKProp_ReachActorRightFootRingId,
           	HIKProp_ReachActorRightFootPinkyId,
           	HIKProp_ReachActorRightFootExtraFingerId,
           	HIKProp_FootFloorContactId,
           	HIKProp_FootBottomToAnkleId,
           	HIKProp_FootBackToAnkleId,
           	HIKProp_FootMiddleToAnkleId,
           	HIKProp_FootFrontToMiddleId,
           	HIKProp_FootInToAnkleId,
           	HIKProp_FootOutToAnkleId,
           	HIKProp_HandFloorContactId,
           	HIKProp_HandBottomToWristId,
           	HIKProp_HandBackToWristId,
           	HIKProp_HandMiddleToWristId,
           	HIKProp_HandFrontToMiddleId,
           	HIKProp_HandInToWristId,
           	HIKProp_HandOutToWristId,
           	HIKProp_HandContactTypeId,
           	HIKProp_HandFingerContactId,
           	HIKProp_HandFingerContactModeId,
           	HIKProp_FootContactTypeId,
           	HIKProp_FootFingerContactId,
           	HIKProp_FootFingerContactModeId,
           	HIKProp_LeftUpLegRollId,
           	HIKProp_LeftLegRollId,
           	HIKProp_RightUpLegRollId,
           	HIKProp_RightLegRollId,
           	HIKProp_LeftArmRollId,
           	HIKProp_LeftForeArmRollId,
           	HIKProp_RightArmRollId,
           	HIKProp_RightForeArmRollId,
           	HIKProp_MirrorId,
           	HIKProp_LeftKneeKillPitchId,
           	HIKProp_RightKneeKillPitchId,
           	HIKProp_LeftElbowKillPitchId,
           	HIKProp_RightElbowKillPitchId,
           	HIKProp_CtrlPullLeftFootId,
           	HIKProp_CtrlPullRightFootId,
           	HIKProp_CtrlPullLeftHandId,
           	HIKProp_CtrlPullRightHandId,
           	HIKProp_CtrlPullHeadId,
           	HIKProp_CtrlPullLeftToeBaseId,
           	HIKProp_CtrlPullLeftKneeId,
           	HIKProp_CtrlPullRightToeBaseId,
           	HIKProp_CtrlPullRightKneeId,
           	HIKProp_CtrlPullLeftFingerBaseId,
           	HIKProp_CtrlPullLeftElbowId,
           	HIKProp_CtrlPullRightFingerBaseId,
           	HIKProp_CtrlPullRightElbowId,
           	HIKProp_CtrlChestPullLeftHandId,
           	HIKProp_CtrlChestPullRightHandId,
           	HIKProp_CtrlResistHipsPositionId,
           	HIKProp_CtrlEnforceGravityId,
           	HIKProp_CtrlResistHipsOrientationId,
           	HIKProp_CtrlResistChestPositionId,
           	HIKProp_CtrlResistChestOrientationId,
           	HIKProp_CtrlResistLeftCollarId,
           	HIKProp_CtrlResistRightCollarId,
           	HIKProp_CtrlResistLeftKneeId,
           	HIKProp_CtrlResistRightKneeId,
           	HIKProp_CtrlResistLeftElbowId,
           	HIKProp_CtrlResistRightElbowId,
           	HIKProp_CtrlSpineStiffnessId,
           	HIKProp_HipsTOffsetXId,
           	HIKProp_HipsTOffsetYId,
           	HIKProp_HipsTOffsetZId,
           	HIKProp_ChestTOffsetXId,
           	HIKProp_ChestTOffsetYId,
           	HIKProp_ChestTOffsetZId,
           	HIKProp_FootAutomaticToesId,
           	HIKProp_FootFloorPivotId,
           	HIKProp_PostureId,
           	HIKProp_HandAutomaticFingersId,
           	HIKProp_HandFloorPivotId,
           	HIKProp_CtrlNeckStiffnessId,
           	HIKProp_HipsTranslationModeId,
           	HIKProp_FingerSolvingId,
           	HIKProp_FootContactStiffnessId,
           	HIKProp_CtrlResistMaximumExtensionLeftKnee,
           	HIKProp_CtrlResistMaximumExtensionRightKnee,
           	HIKProp_CtrlResistMaximumExtensionLeftElbow,
           	HIKProp_CtrlResistMaximumExtensionRightElbow,
           	HIKProp_CtrlResistCompressionFactorLeftKnee,
           	HIKProp_CtrlResistCompressionFactorRightKnee,
           	HIKProp_CtrlResistCompressionFactorLeftElbow,
           	HIKProp_CtrlResistCompressionFactorRightElbow,
           	HIKProp_HandFingerContactRollStiffness,
           	HIKProp_FootFingerContactRollStiffness,
           	HIKProp_HandContactStiffness,
           	HIKProp_RollExtractionMode,
           	HIKProp_PullIterationCount,
           	HIKProp_LeftHandThumbTip,
           	HIKProp_LeftHandIndexTip,
           	HIKProp_LeftHandMiddleTip,
           	HIKProp_LeftHandRingTip,
           	HIKProp_LeftHandPinkyTip,
           	HIKProp_LeftHandExtraFingerTip,
           	HIKProp_RightHandThumbTip,
           	HIKProp_RightHandIndexTip,
           	HIKProp_RightHandMiddleTip,
           	HIKProp_RightHandRingTip,
           	HIKProp_RightHandPinkyTip,
           	HIKProp_RightHandExtraFingerTip,
           	HIKProp_LeftFootThumbTip,
           	HIKProp_LeftFootIndexTip,
           	HIKProp_LeftFootMiddleTip,
           	HIKProp_LeftFootRingTip,
           	HIKProp_LeftFootPinkyTip,
           	HIKProp_LeftFootExtraFingerTip,
           	HIKProp_RightFootThumbTip,
           	HIKProp_RightFootIndexTip,
           	HIKProp_RightFootMiddleTip,
           	HIKProp_RightFootRingTip,
           	HIKProp_RightFootPinkyTip,
           	HIKProp_RightFootExtraFingerTip,
           	HIKProp_RealisticShoulder,
           	HIKProp_LeftLegMaxExtensionAngle,
           	HIKProp_RightLegMaxExtensionAngle,
           	HIKProp_LeftArmMaxExtensionAngle,
           	HIKProp_RightArmMaxExtensionAngle,
           	HIKProp_ExtraCollarRatioId,
           	HIKProp_CollarStiffnessX,
           	HIKProp_CollarStiffnessY,
           	HIKProp_CollarStiffnessZ,
           	HIKProp_ReachActorLeftShoulderId,
           	HIKProp_ReachActorRightShoulderId,
           	HIKProp_FingerPropagationId,
           	HIKProp_RealisticLeftKneeSolvingId,
           	HIKProp_RealisticRightKneeSolvingId,
           	HIKProp_StretchStartArmsAndLegs,
           	HIKProp_StretchStopArmsAndLegs,
           	HIKProp_SnSScaleArmsAndLegs,
           	HIKProp_SnSReachLeftWrist,
           	HIKProp_SnSReachRightWrist,
           	HIKProp_SnSReachLeftAnkle,
           	HIKProp_SnSReachRightAnkle,
           	HIKProp_SnSScaleSpine,
           	HIKProp_SnSScaleSpineChildren,
           	HIKProp_SnSReachChestEnd,
           	HIKProp_SnSScaleNeck,
           	HIKProp_SnSReachHead,
           	HIKProp_LeftUpLegRollExId,
           	HIKProp_LeftLegRollExId,
           	HIKProp_RightUpLegRollExId,
           	HIKProp_RightLegRollExId,
           	HIKProp_LeftArmRollExId,
           	HIKProp_LeftForeArmRollExId,
           	HIKProp_RightArmRollExId,
           	HIKProp_RightForeArmRollExId,
           	HIKProp_TopSpineCorrectionId,
           	HIKProp_LowerSpineCorrectionId,
           	HIKProp_SnSSmoothReach,
           	HIKProp_LockXId,
           	HIKProp_LockYId,
           	HIKProp_LockZId,
           	HIKProp_RealisticArmSolvingId,
           	HIKProp_LastPropertyId,
           	HIKProp_MAX,
        };

        // Enum Engine.EHIKEffectorSpace
        public enum EHIKEffectorSpace : byte
        {
           	HIKEffectorSpace_World,
           	HIKEffectorSpace_Character,
           	HIKEffectorSpace_MAX,
        };

        // Enum Engine.EHIKHandsContactType
        public enum EHIKHandsContactType : byte
        {
           	HIKHandsContactType_Normal,
           	HIKHandsContactType_Wrist,
           	HIKHandsContactType_FingerBase,
           	HIKHandsContactType_Hoof,
           	HIKHandsContactType_MAX,
        };

        // Enum Engine.EHIKFeetContactType
        public enum EHIKFeetContactType : byte
        {
           	HIKFeetContactType_Normal,
           	HIKFeetContactType_Ankle,
           	HIKFeetContactType_ToeBase,
           	HIKFeetContactType_Hoof,
           	HIKFeetContactType_MAX,
        };

        // Enum Engine.ETrackActiveCondition
        public enum ETrackActiveCondition : byte
        {
           	ETAC_Always,
           	ETAC_GoreEnabled,
           	ETAC_GoreDisabled,
           	ETAC_MAX,
        };

        // Enum Engine.EInterpTrackMoveRotMode
        public enum EInterpTrackMoveRotMode : byte
        {
           	IMR_Keyframed,
           	IMR_LookAtGroup,
           	IMR_Ignore,
           	IMR_MAX,
        };

        // Enum Engine.EInterpMoveAxis
        public enum EInterpMoveAxis : byte
        {
           	AXIS_TranslationX,
           	AXIS_TranslationY,
           	AXIS_TranslationZ,
           	AXIS_RotationX,
           	AXIS_RotationY,
           	AXIS_RotationZ,
           	AXIS_MAX,
        };

        // Enum Engine.ETrackToggleAction
        public enum ETrackToggleAction : byte
        {
           	ETTA_Off,
           	ETTA_On,
           	ETTA_Toggle,
           	ETTA_Trigger,
           	ETTA_MAX,
        };

        // Enum Engine.EVisibilityTrackCondition
        public enum EVisibilityTrackCondition : byte
        {
           	EVTC_Always,
           	EVTC_GoreEnabled,
           	EVTC_GoreDisabled,
           	EVTC_MAX,
        };

        // Enum Engine.EVisibilityTrackAction
        public enum EVisibilityTrackAction : byte
        {
           	EVTA_Hide,
           	EVTA_Show,
           	EVTA_Toggle,
           	EVTA_MAX,
        };

        // Enum Engine.EClampMode
        public enum EClampMode : byte
        {
           	CMODE_Clamp,
           	CMODE_ClampMin,
           	CMODE_ClampMax,
           	CMODE_MAX,
        };

        // Enum Engine.ECustomMaterialOutputType
        public enum ECustomMaterialOutputType : byte
        {
           	CMOT_Float1,
           	CMOT_Float2,
           	CMOT_Float3,
           	CMOT_Float4,
           	CMOT_MAX,
        };

        // Enum Engine.EDepthOfFieldFunctionValue
        public enum EDepthOfFieldFunctionValue : byte
        {
           	TDOF_NearAndFarMask,
           	TDOF_NearMask,
           	TDOF_FarMask,
           	TDOF_MAX,
        };

        // Enum Engine.EFunctionInputType
        public enum EFunctionInputType : byte
        {
           	FunctionInput_Scalar,
           	FunctionInput_Vector2,
           	FunctionInput_Vector3,
           	FunctionInput_Vector4,
           	FunctionInput_Texture2D,
           	FunctionInput_TextureCube,
           	FunctionInput_StaticBool,
           	FunctionInput_MaterialAttributes,
           	FunctionInput_MAX,
        };

        // Enum Engine.EIfExpressionAttribute
        public enum EIfExpressionAttribute : byte
        {
           	Default,
           	Branch,
           	Flatten,
           	EIfExpressionAttribute_MAX,
        };

        // Enum Engine.EIfExpressionCondition
        public enum EIfExpressionCondition : byte
        {
           	Equal,
           	Greater,
           	GreaterOrEqual,
           	Less,
           	LessOrEqual,
           	EIfExpressionCondition_MAX,
        };

        // Enum Engine.ENoiseFunction
        public enum ENoiseFunction : byte
        {
           	NOISEFUNCTION_Simplex,
           	NOISEFUNCTION_Perlin,
           	NOISEFUNCTION_Gradient,
           	NOISEFUNCTION_FastGradient,
           	NOISEFUNCTION_MAX,
        };

        // Enum Engine.EMaterialSceneAttributeInputMode
        public enum EMaterialSceneAttributeInputMode : byte
        {
           	Coordinates,
           	OffsetFraction,
           	EMaterialSceneAttributeInputMode_MAX,
        };

        // Enum Engine.ESceneTextureId
        public enum ESceneTextureId : byte
        {
           	PPI_SceneColor,
           	PPI_SceneDepth,
           	PPI_DiffuseColor,
           	PPI_SpecularColor,
           	PPI_SubsurfaceColor,
           	PPI_BaseColor,
           	PPI_Specular,
           	PPI_Metallic,
           	PPI_WorldNormal,
           	PPI_SeparateTranslucency,
           	PPI_Opacity,
           	PPI_Roughness,
           	PPI_MaterialAO,
           	PPI_CustomDepth,
           	PPI_PostProcessInput0,
           	PPI_PostProcessInput1,
           	PPI_PostProcessInput2,
           	PPI_PostProcessInput3,
           	PPI_PostProcessInput4,
           	PPI_PostProcessInput5,
           	PPI_PostProcessInput6,
           	PPI_DecalMask,
           	PPI_ShadingModel,
           	PPI_AmbientOcclusion,
           	PPI_CustomStencil,
           	PPI_PlanarReflections,
           	PPI_Mask,
           	PPI_PreviousMask,
           	PPI_MAX,
        };

        // Enum Engine.ESpeedTreeLODType
        public enum ESpeedTreeLODType : byte
        {
           	STLOD_Pop,
           	STLOD_Smooth,
           	STLOD_MAX,
        };

        // Enum Engine.ESpeedTreeWindType
        public enum ESpeedTreeWindType : byte
        {
           	STW_None,
           	STW_Fastest,
           	STW_Fast,
           	STW_Better,
           	STW_Best,
           	STW_Palm,
           	STW_BestPlus,
           	STW_MAX,
        };

        // Enum Engine.ESpeedTreeGeometryType
        public enum ESpeedTreeGeometryType : byte
        {
           	STG_Branch,
           	STG_Frond,
           	STG_Leaf,
           	STG_FacingLeaf,
           	STG_Billboard,
           	STG_MAX,
        };

        // Enum Engine.ETextureMipValueMode
        public enum ETextureMipValueMode : byte
        {
           	TMVM_None,
           	TMVM_MipLevel,
           	TMVM_MipBias,
           	TMVM_Derivative,
           	TMVM_MAX,
        };

        // Enum Engine.ETextureColorChannel
        public enum ETextureColorChannel : byte
        {
           	TCC_Red,
           	TCC_Green,
           	TCC_Blue,
           	TCC_Alpha,
           	TCC_MAX,
        };

        // Enum Engine.EMaterialVectorCoordTransform
        public enum EMaterialVectorCoordTransform : byte
        {
           	TRANSFORM_Tangent,
           	TRANSFORM_Local,
           	TRANSFORM_World,
           	TRANSFORM_View,
           	TRANSFORM_MAX,
        };

        // Enum Engine.EMaterialVectorCoordTransformSource
        public enum EMaterialVectorCoordTransformSource : byte
        {
           	TRANSFORMSOURCE_Tangent,
           	TRANSFORMSOURCE_Local,
           	TRANSFORMSOURCE_World,
           	TRANSFORMSOURCE_View,
           	TRANSFORMSOURCE_MAX,
        };

        // Enum Engine.EMaterialPositionTransformSource
        public enum EMaterialPositionTransformSource : byte
        {
           	TRANSFORMPOSSOURCE_Local,
           	TRANSFORMPOSSOURCE_World,
           	TRANSFORMPOSSOURCE_TranslatedWorld,
           	TRANSFORMPOSSOURCE_View,
           	TRANSFORMPOSSOURCE_MAX,
        };

        // Enum Engine.EMaterialExposedViewProperty
        public enum EMaterialExposedViewProperty : byte
        {
           	MEVP_BufferSize,
           	MEVP_FieldOfView,
           	MEVP_TanHalfFieldOfView,
           	MEVP_ViewSize,
           	MEVP_WorldSpaceCameraPosition,
           	MEVP_MAX,
        };

        // Enum Engine.EWorldPositionIncludedOffsets
        public enum EWorldPositionIncludedOffsets : byte
        {
           	WPT_Default,
           	WPT_ExcludeAllShaderOffsets,
           	WPT_CameraRelative,
           	WPT_CameraRelativeNoOffsets,
           	WPT_MAX,
        };

        // Enum Engine.EMaterialDecalResponse
        public enum EMaterialDecalResponse : byte
        {
           	MDR_None,
           	MDR_ColorNormalRoughness,
           	MDR_Color,
           	MDR_ColorNormal,
           	MDR_ColorRoughness,
           	MDR_Normal,
           	MDR_NormalRoughness,
           	MDR_Roughness,
           	MDR_MAX,
        };

        // Enum Engine.EMaterialDomain
        public enum EMaterialDomain : byte
        {
           	MD_Surface,
           	MD_DeferredDecal,
           	MD_LightFunction,
           	MD_PostProcess,
           	MD_UI,
           	MD_MAX,
        };

        // Enum Engine.EDecalBlendMode
        public enum EDecalBlendMode : byte
        {
           	DBM_Translucent,
           	DBM_Stain,
           	DBM_Normal,
           	DBM_Emissive,
           	DBM_DBuffer_ColorNormalRoughness,
           	DBM_DBuffer_Color,
           	DBM_DBuffer_ColorNormal,
           	DBM_DBuffer_ColorRoughness,
           	DBM_DBuffer_Normal,
           	DBM_DBuffer_NormalRoughness,
           	DBM_DBuffer_Roughness,
           	DBM_Volumetric_DistanceFunction,
           	DBM_Wet,
           	DBM_MAX,
        };

        // Enum Engine.ECanvasRenderTargetMips
        public enum ECanvasRenderTargetMips : byte
        {
           	Disabled,
           	Enabled,
           	ECanvasRenderTargetMips_MAX,
        };

        // Enum Engine.EResolveOperationResult
        public enum EResolveOperationResult : byte
        {
           	Success,
           	ArchiveError,
           	InvalidNetGuid,
           	ArchiveErrorOnPathName,
           	FailedToFindObjectFromPath,
           	ObjectPendingKill,
           	ObjectIsntAPackage,
           	PackageChecksumFailure,
           	UnassignedObject,
           	ObjectMissing,
           	LevelNotVisible,
           	ClassUnexpected,
           	GetObjectSuccess,
           	GetObjectInvalidNetGuid,
           	GetObjectDefaultNetGuid,
           	GetObjectNeverRegistered,
           	GetObjectBroken,
           	GetObjectPending,
           	GetObjectDynamicStale,
           	GetObjectNoPath,
           	GetObjectNoEntryForOuter,
           	GetObjectOuterIsBroken,
           	GetObjectUnableToResolveOuter,
           	GetObjectUnableToFindObject,
           	EResolveOperationResult_MAX,
        };

        // Enum Engine.EEmitterRenderMode
        public enum EEmitterRenderMode : byte
        {
           	ERM_Normal,
           	ERM_Point,
           	ERM_Cross,
           	ERM_LightsOnly,
           	ERM_None,
           	ERM_MAX,
        };

        // Enum Engine.EParticleSubUVInterpMethod
        public enum EParticleSubUVInterpMethod : byte
        {
           	PSUVIM_None,
           	PSUVIM_Linear,
           	PSUVIM_Linear_NoBlend,
           	PSUVIM_Linear_Blend,
           	PSUVIM_Random,
           	PSUVIM_Random_Blend,
           	PSUVIM_MAX,
        };

        // Enum Engine.EEmitterQuality
        public enum EEmitterQuality : byte
        {
           	Low,
           	Medium,
           	High,
           	EEmitterQuality_MAX,
        };

        // Enum Engine.EBurstGroup
        public enum EBurstGroup : byte
        {
           	GroupA,
           	GroupB,
           	GroupC,
           	GroupD,
           	GroupE,
           	GroupReplacement,
           	Group_MAX,
           	EBurstGroup_MAX,
        };

        // Enum Engine.EParticleBurstMethod
        public enum EParticleBurstMethod : byte
        {
           	EPBM_Instant,
           	EPBM_Interpolated,
           	EPBM_MAX,
        };

        // Enum Engine.EParticleScreenAlignment
        public enum EParticleScreenAlignment : byte
        {
           	PSA_FacingCameraPosition,
           	PSA_Square,
           	PSA_Rectangle,
           	PSA_Velocity,
           	PSA_AwayFromCenter,
           	PSA_TypeSpecific,
           	PSA_VelocityScreen,
           	PSA_InitialVelocityScreen,
           	PSA_InitialVelocity,
           	PSA_VelocityOnly,
           	PSA_MAX,
        };

        // Enum Engine.EParticleSourceSelectionMethod
        public enum EParticleSourceSelectionMethod : byte
        {
           	EPSSM_Random,
           	EPSSM_Sequential,
           	EPSSM_MAX,
        };

        // Enum Engine.EModuleType
        public enum EModuleType : byte
        {
           	EPMT_General,
           	EPMT_TypeData,
           	EPMT_Beam,
           	EPMT_Trail,
           	EPMT_Spawn,
           	EPMT_Required,
           	EPMT_Event,
           	EPMT_Light,
           	EPMT_MAX,
        };

        // Enum Engine.EAccelerationGroupNames
        public enum EAccelerationGroupNames : byte
        {
           	AccelerationGroupB,
           	AccelerationGroupC,
           	AccelerationGroupD,
           	AccelerationGroupE,
           	AccelerationGroupReplacement,
           	AccelerationGroup_MAX,
           	EAccelerationGroupNames_MAX,
        };

        // Enum Engine.EDragOnLocalVelocityGroupName
        public enum EDragOnLocalVelocityGroupName : byte
        {
           	DragOnLocalVelocityGroupB,
           	DragOnLocalVelocityGroupC,
           	DragOnLocalVelocityGroupD,
           	DragOnLocalVelocityGroupE,
           	DragOnLocalVelocityGroupReplacement,
           	DragOnLocalVelocityGroup_MAX,
           	EDragOnLocalVelocityGroupName_MAX,
        };

        // Enum Engine.EDragCoefficientGroupName
        public enum EDragCoefficientGroupName : byte
        {
           	DragCoefficientGroupB,
           	DragCoefficientGroupC,
           	DragCoefficientGroupD,
           	DragCoefficientGroupE,
           	DragCoefficientGroupReplacement,
           	DragCoefficientGroup_MAX,
           	EDragCoefficientGroupName_MAX,
        };

        // Enum Engine.EAttractorParticleSelectionMethod
        public enum EAttractorParticleSelectionMethod : byte
        {
           	EAPSM_Random,
           	EAPSM_Sequential,
           	EAPSM_MAX,
        };

        // Enum Engine.Beam2SourceTargetTangentMethod
        public enum Beam2SourceTargetTangentMethod : byte
        {
           	PEB2STTM_Direct,
           	PEB2STTM_UserSet,
           	PEB2STTM_Distribution,
           	PEB2STTM_Emitter,
           	PEB2STTM_MAX,
        };

        // Enum Engine.Beam2SourceTargetMethod
        public enum Beam2SourceTargetMethod : byte
        {
           	PEB2STM_Default,
           	PEB2STM_UserSet,
           	PEB2STM_Emitter,
           	PEB2STM_Particle,
           	PEB2STM_Actor,
           	PEB2STM_MAX,
        };

        // Enum Engine.BeamModifierType
        public enum BeamModifierType : byte
        {
           	PEB2MT_Source,
           	PEB2MT_Target,
           	PEB2MT_MAX,
        };

        // Enum Engine.EParticleCameraOffsetUpdateMethod
        public enum EParticleCameraOffsetUpdateMethod : byte
        {
           	EPCOUM_DirectSet,
           	EPCOUM_Additive,
           	EPCOUM_Scalar,
           	EPCOUM_MAX,
        };

        // Enum Engine.EParticleCollisionComplete
        public enum EParticleCollisionComplete : byte
        {
           	EPCC_Kill,
           	EPCC_Freeze,
           	EPCC_HaltCollisions,
           	EPCC_FreezeTranslation,
           	EPCC_FreezeRotation,
           	EPCC_FreezeMovement,
           	EPCC_MAX,
        };

        // Enum Engine.EParticleCollisionResponse
        public enum EParticleCollisionResponse : byte
        {
           	Bounce,
           	Stop,
           	Kill,
           	EParticleCollisionResponse_MAX,
        };

        // Enum Engine.EStartAlphaGroupsName
        public enum EStartAlphaGroupsName : byte
        {
           	StartAlphaB,
           	StartAlphaC,
           	StartAlphaD,
           	StartAlphaE,
           	StartAlphaReplacement,
           	StartAlpha_MAX,
           	EStartAlphaGroupsName_MAX,
        };

        // Enum Engine.EStartColorGroupsName
        public enum EStartColorGroupsName : byte
        {
           	StartColorB,
           	StartColorC,
           	StartColorD,
           	StartColorE,
           	StartColorReplacement,
           	StartColor_MAX,
           	EStartColorGroupsName_MAX,
        };

        // Enum Engine.EGPUParticleCollisionEventLimit
        public enum EGPUParticleCollisionEventLimit : byte
        {
           	OnlyOnFirstCollision,
           	OnlyOnFirstTwoCollisions,
           	Unlimited,
           	EGPUParticleCollisionEventLimit_MAX,
        };

        // Enum Engine.ESpawnEventGroupNames
        public enum ESpawnEventGroupNames : byte
        {
           	SpawnEventGroupB,
           	SpawnEventGroupC,
           	SpawnEventGroupD,
           	SpawnEventGroupE,
           	SpawnEventGroupReplacemnent,
           	SpawnEventGroup_MAX,
           	ESpawnEventGroupNames_MAX,
        };

        // Enum Engine.EFFTWaterKillPointLocation
        public enum EFFTWaterKillPointLocation : byte
        {
           	FFTWaterKillPointLocation_LowerBound,
           	FFTWaterKillPointLocation_Center,
           	FFTWaterKillPointLocation_UpperBound,
           	FFTWaterKillPointLocation_MAX,
        };

        // Enum Engine.EFFTWaterKillPointGroupName
        public enum EFFTWaterKillPointGroupName : byte
        {
           	FFTWaterKillPointGroupB,
           	FFTWaterKillPointGroupC,
           	FFTWaterKillPointGroupD,
           	FFTWaterKillPointGroupE,
           	FFTWaterKillPointGroupReplacement,
           	FFTWaterKillPointGroup_MAX,
           	EFFTWaterKillPointGroupName_MAX,
        };

        // Enum Engine.ELifetimeGroupsName
        public enum ELifetimeGroupsName : byte
        {
           	LifetimeB,
           	LifetimeC,
           	LifetimeD,
           	LifetimeE,
           	LifetimeReplacement,
           	Lifetime_MAX,
           	ELifetimeGroupsName_MAX,
        };

        // Enum Engine.EStartLocationGroupNames
        public enum EStartLocationGroupNames : byte
        {
           	StartLocationGroupB,
           	StartLocationGroupC,
           	StartLocationGroupD,
           	StartLocationGroupE,
           	StartLocationGroup_MAX,
           	EStartLocationGroupNames_MAX,
        };

        // Enum Engine.ELocationBoneSocketSelectionMethod
        public enum ELocationBoneSocketSelectionMethod : byte
        {
           	BONESOCKETSEL_Sequential,
           	BONESOCKETSEL_Random,
           	BONESOCKETSEL_MAX,
        };

        // Enum Engine.ELocationBoneSocketSource
        public enum ELocationBoneSocketSource : byte
        {
           	BONESOCKETSOURCE_Bones,
           	BONESOCKETSOURCE_Sockets,
           	BONESOCKETSOURCE_MAX,
        };

        // Enum Engine.EMissingParentParticlesBehaviour
        public enum EMissingParentParticlesBehaviour : byte
        {
           	SpawnFromEmitterLocation,
           	PreventSpawning,
           	EMissingParentParticlesBehaviour_MAX,
        };

        // Enum Engine.ELocationEmitterSelectionMethod
        public enum ELocationEmitterSelectionMethod : byte
        {
           	ELESM_Random,
           	ELESM_Sequential,
           	ELESM_MAX,
        };

        // Enum Engine.EStartLocationGPUGroupNames
        public enum EStartLocationGPUGroupNames : byte
        {
           	StartLocationGPUGroupB,
           	StartLocationGPUGroupC,
           	StartLocationGPUGroupD,
           	StartLocationGPUGroupE,
           	StartLocationGPUGroupReplacement,
           	StartLocationGPUGroup_MAX,
           	EStartLocationGPUGroupNames_MAX,
        };

        // Enum Engine.ESpawnLocationValueSemantic
        public enum ESpawnLocationValueSemantic : byte
        {
           	Absolute,
           	Additive,
           	ESpawnLocationValueSemantic_MAX,
        };

        // Enum Engine.ESpawnLocationValueSemanticGPUGroupNames
        public enum ESpawnLocationValueSemanticGPUGroupNames : byte
        {
           	SpawnLocationValueSemanticGPUGroupB,
           	SpawnLocationValueSemanticGPUGroupC,
           	SpawnLocationValueSemanticGPUGroupD,
           	SpawnLocationValueSemanticGPUGroupE,
           	SpawnLocationValueSemanticGPUGroupReplacement,
           	SpawnLocationValueSemanticGPUGroup_MAX,
           	ESpawnLocationValueSemanticGPUGroupNames_MAX,
        };

        // Enum Engine.EStartHeightGroupNames
        public enum EStartHeightGroupNames : byte
        {
           	StartHeightGroupB,
           	StartHeightGroupC,
           	StartHeightGroupD,
           	StartHeightGroupE,
           	StartHeightGroup_MAX,
           	EStartHeightGroupNames_MAX,
        };

        // Enum Engine.EStartRadiusGroupNames
        public enum EStartRadiusGroupNames : byte
        {
           	StartRadiusGroupB,
           	StartRadiusGroupC,
           	StartRadiusGroupD,
           	StartRadiusGroupE,
           	StartRadiusGroup_MAX,
           	EStartRadiusGroupNames_MAX,
        };

        // Enum Engine.EAngleRangeGroupNames
        public enum EAngleRangeGroupNames : byte
        {
           	AngleRangeGroupB,
           	AngleRangeGroupC,
           	AngleRangeGroupD,
           	AngleRangeGroupE,
           	AngleRangeGroup_MAX,
           	EAngleRangeGroupNames_MAX,
        };

        // Enum Engine.CylinderHeightAxis
        public enum CylinderHeightAxis : byte
        {
           	PMLPC_HEIGHTAXIS_X,
           	PMLPC_HEIGHTAXIS_Y,
           	PMLPC_HEIGHTAXIS_Z,
           	PMLPC_HEIGHTAXIS_MAX,
        };

        // Enum Engine.EVelocityScaleGroupNames
        public enum EVelocityScaleGroupNames : byte
        {
           	VelocityScaleGroupB,
           	VelocityScaleGroupC,
           	VelocityScaleGroupD,
           	VelocityScaleGroupE,
           	VelocityScaleGroup_MAX,
           	EVelocityScaleGroupNames_MAX,
        };

        // Enum Engine.ELocationSkelVertSurfaceSource
        public enum ELocationSkelVertSurfaceSource : byte
        {
           	VERTSURFACESOURCE_Vert,
           	VERTSURFACESOURCE_Surface,
           	VERTSURFACESOURCE_MAX,
        };

        // Enum Engine.EOrbitChainMode
        public enum EOrbitChainMode : byte
        {
           	EOChainMode_Add,
           	EOChainMode_Scale,
           	EOChainMode_Link,
           	EOChainMode_MAX,
        };

        // Enum Engine.EParticleAxisLock
        public enum EParticleAxisLock : byte
        {
           	EPAL_NONE,
           	EPAL_X,
           	EPAL_Y,
           	EPAL_Z,
           	EPAL_NEGATIVE_X,
           	EPAL_NEGATIVE_Y,
           	EPAL_NEGATIVE_Z,
           	EPAL_ROTATE_X,
           	EPAL_ROTATE_Y,
           	EPAL_ROTATE_Z,
           	EPAL_MAX,
        };

        // Enum Engine.EEmitterDynamicParameterValue
        public enum EEmitterDynamicParameterValue : byte
        {
           	EDPV_UserSet,
           	EDPV_VelocityX,
           	EDPV_VelocityY,
           	EDPV_VelocityZ,
           	EDPV_VelocityMag,
           	EDPV_MAX,
        };

        // Enum Engine.EGroupScales
        public enum EGroupScales : byte
        {
           	GroupAScale,
           	GroupBScale,
           	GroupCScale,
           	GroupDScale,
           	GroupEScale,
           	GroupReplacementScale,
           	GroupScale_MAX,
           	EGroupScales_MAX,
        };

        // Enum Engine.EOpacitySourceMode
        public enum EOpacitySourceMode : byte
        {
           	OSM_Alpha,
           	OSM_ColorBrightness,
           	OSM_RedChannel,
           	OSM_GreenChannel,
           	OSM_BlueChannel,
           	OSM_MAX,
        };

        // Enum Engine.ESubUVBoundingVertexCount
        public enum ESubUVBoundingVertexCount : byte
        {
           	BVC_FourVertices,
           	BVC_EightVertices,
           	BVC_MAX,
        };

        // Enum Engine.EPriorityGroups
        public enum EPriorityGroups : byte
        {
           	PriorityZero,
           	PriorityOne,
           	PriorityTwo,
           	PriorityThree,
           	PriorityFour,
           	PriorityFive,
           	Priority_MAX,
           	EPriorityGroups_MAX,
        };

        // Enum Engine.EScreenAlignmentGroupNames
        public enum EScreenAlignmentGroupNames : byte
        {
           	ScreenAlignmentGroupB,
           	ScreenAlignmentGroupC,
           	ScreenAlignmentGroupD,
           	ScreenAlignmentGroupE,
           	ScreenAlignmentGroupReplacement,
           	ScreenAlignmentGroup_MAX,
           	EScreenAlignmentGroupNames_MAX,
        };

        // Enum Engine.EEmitterOriginGroupNames
        public enum EEmitterOriginGroupNames : byte
        {
           	EmitterOriginGroupB,
           	EmitterOriginGroupC,
           	EmitterOriginGroupD,
           	EmitterOriginGroupE,
           	EmitterOriginGroupReplacement,
           	EmitterOriginGroup_MAX,
           	EEmitterOriginGroupNames_MAX,
        };

        // Enum Engine.EEmitterNormalsMode
        public enum EEmitterNormalsMode : byte
        {
           	ENM_CameraFacing,
           	ENM_Spherical,
           	ENM_Cylindrical,
           	ENM_MAX,
        };

        // Enum Engine.EParticleSortMode
        public enum EParticleSortMode : byte
        {
           	PSORTMODE_None,
           	PSORTMODE_ViewProjDepth,
           	PSORTMODE_DistanceToView,
           	PSORTMODE_Age_OldestFirst,
           	PSORTMODE_Age_NewestFirst,
           	PSORTMODE_MAX,
        };

        // Enum Engine.EParticleUVFlipMode
        public enum EParticleUVFlipMode : byte
        {
           	None,
           	FlipUV,
           	FlipUOnly,
           	FlipVOnly,
           	RandomFlipUV,
           	RandomFlipUOnly,
           	RandomFlipVOnly,
           	RandomFlipUVIndependent,
           	EParticleUVFlipMode_MAX,
        };

        // Enum Engine.ERotationAboutArbitraryAxisGroupName
        public enum ERotationAboutArbitraryAxisGroupName : byte
        {
           	RotationAboutArbitraryAxisGroupB,
           	RotationAboutArbitraryAxisGroupC,
           	RotationAboutArbitraryAxisGroupD,
           	RotationAboutArbitraryAxisGroupE,
           	RotationAboutArbitraryAxisGroupReplacement,
           	RotationAboutArbitraryAxisGroup_MAX,
           	ERotationAboutArbitraryAxisGroupName_MAX,
        };

        // Enum Engine.EStartRotationGroupNames
        public enum EStartRotationGroupNames : byte
        {
           	StartRotationGroupB,
           	StartRotationGroupC,
           	StartRotationGroupD,
           	StartRotationGroupE,
           	StartRotationGroupReplacement,
           	StartRotationGroup_MAX,
           	EStartRotationGroupNames_MAX,
        };

        // Enum Engine.EStartRotationRateGroupNames
        public enum EStartRotationRateGroupNames : byte
        {
           	StartRotationRateGroupB,
           	StartRotationRateGroupC,
           	StartRotationRateGroupD,
           	StartRotationRateGroupE,
           	StartRotationRateGroupReplacement,
           	StartRotationRateGroup_MAX,
           	EStartRotationRateGroupNames_MAX,
        };

        // Enum Engine.EStartSizeGroupNames
        public enum EStartSizeGroupNames : byte
        {
           	StartSizeB,
           	StartSizeC,
           	StartSizeD,
           	StartSizeE,
           	StartSizeReplacement,
           	StartSize_MAX,
           	EStartSizeGroupNames_MAX,
        };

        // Enum Engine.ERateGroupNames
        public enum ERateGroupNames : byte
        {
           	RateB,
           	RateC,
           	RateD,
           	RateE,
           	RateReplacement,
           	Rate_MAX,
           	ERateGroupNames_MAX,
        };

        // Enum Engine.ETrail2SourceMethod
        public enum ETrail2SourceMethod : byte
        {
           	PET2SRCM_Default,
           	PET2SRCM_Particle,
           	PET2SRCM_Actor,
           	PET2SRCM_MAX,
        };

        // Enum Engine.EBeamTaperMethod
        public enum EBeamTaperMethod : byte
        {
           	PEBTM_None,
           	PEBTM_Full,
           	PEBTM_Partial,
           	PEBTM_MAX,
        };

        // Enum Engine.EBeam2Method
        public enum EBeam2Method : byte
        {
           	PEB2M_Distance,
           	PEB2M_Target,
           	PEB2M_Branch,
           	PEB2M_MAX,
        };

        // Enum Engine.EKillPlaneKillPointLocation
        public enum EKillPlaneKillPointLocation : byte
        {
           	KillPlaneKillPointLocation_LowerBound,
           	KillPlaneKillPointLocation_Center,
           	KillPlaneKillPointLocation_UpperBound,
           	KillPlaneKillPointLocation_MAX,
        };

        // Enum Engine.EInteractionWithKillPlane
        public enum EInteractionWithKillPlane : byte
        {
           	None,
           	KillOnFrontOfPlanes,
           	KillOnBackOfPlanes,
           	CollideWithFront,
           	KillOnIntersectionPlanes,
           	EInteractionWithKillPlane_MAX,
        };

        // Enum Engine.EParticleAlphaThresholdLevel
        public enum EParticleAlphaThresholdLevel : byte
        {
           	NoCulling,
           	Permissive,
           	Mild,
           	MildAggressive,
           	Aggressive,
           	EParticleAlphaThresholdLevel_MAX,
        };

        // Enum Engine.EMeshCameraFacingOptions
        public enum EMeshCameraFacingOptions : byte
        {
           	XAxisFacing_NoUp,
           	XAxisFacing_ZUp,
           	XAxisFacing_NegativeZUp,
           	XAxisFacing_YUp,
           	XAxisFacing_NegativeYUp,
           	LockedAxis_ZAxisFacing,
           	LockedAxis_NegativeZAxisFacing,
           	LockedAxis_YAxisFacing,
           	LockedAxis_NegativeYAxisFacing,
           	VelocityAligned_ZAxisFacing,
           	VelocityAligned_NegativeZAxisFacing,
           	VelocityAligned_YAxisFacing,
           	VelocityAligned_NegativeYAxisFacing,
           	EMeshCameraFacingOptions_MAX,
        };

        // Enum Engine.EMeshCameraFacingUpAxis
        public enum EMeshCameraFacingUpAxis : byte
        {
           	CameraFacing_NoneUP,
           	CameraFacing_ZUp,
           	CameraFacing_NegativeZUp,
           	CameraFacing_YUp,
           	CameraFacing_NegativeYUp,
           	CameraFacing_MAX,
        };

        // Enum Engine.EMeshScreenAlignment
        public enum EMeshScreenAlignment : byte
        {
           	PSMA_MeshFaceCameraWithRoll,
           	PSMA_MeshFaceCameraWithSpin,
           	PSMA_MeshFaceCameraWithLockedAxis,
           	PSMA_MAX,
        };

        // Enum Engine.ETrailsRenderAxisOption
        public enum ETrailsRenderAxisOption : byte
        {
           	Trails_CameraUp,
           	Trails_SourceUp,
           	Trails_WorldUp,
           	Trails_MAX,
        };

        // Enum Engine.EStartVelocityGroupsName
        public enum EStartVelocityGroupsName : byte
        {
           	StartVelocityB,
           	StartVelocityC,
           	StartVelocityD,
           	StartVelocityE,
           	StartVelocityReplacemnent,
           	StartVelocity_MAX,
           	EStartVelocityGroupsName_MAX,
        };

        // Enum Engine.EVelocityConeGroupNames
        public enum EVelocityConeGroupNames : byte
        {
           	VelocityConeGroupB,
           	VelocityConeGroupC,
           	VelocityConeGroupD,
           	VelocityConeGroupE,
           	VelocityConeGroupReplacemnent,
           	VelocityConeGroup_MAX,
           	EVelocityConeGroupNames_MAX,
        };

        // Enum Engine.ECloudStorageDelegate
        public enum ECloudStorageDelegate : byte
        {
           	CSD_KeyValueReadComplete,
           	CSD_KeyValueWriteComplete,
           	CSD_ValueChanged,
           	CSD_DocumentQueryComplete,
           	CSD_DocumentReadComplete,
           	CSD_DocumentWriteComplete,
           	CSD_DocumentConflictDetected,
           	CSD_MAX,
        };

        // Enum Engine.EAdManagerDelegate
        public enum EAdManagerDelegate : byte
        {
           	AMD_ClickedBanner,
           	AMD_UserClosedAd,
           	AMD_MAX,
        };

        // Enum Engine.EMicroTransactionResult
        public enum EMicroTransactionResult : byte
        {
           	MTR_Succeeded,
           	MTR_Failed,
           	MTR_Canceled,
           	MTR_RestoredFromServer,
           	MTR_MAX,
        };

        // Enum Engine.EMicroTransactionDelegate
        public enum EMicroTransactionDelegate : byte
        {
           	MTD_PurchaseQueryComplete,
           	MTD_PurchaseComplete,
           	MTD_MAX,
        };

        // Enum Engine.ETwitterIntegrationDelegate
        public enum ETwitterIntegrationDelegate : byte
        {
           	TID_AuthorizeComplete,
           	TID_TweetUIComplete,
           	TID_RequestComplete,
           	TID_MAX,
        };

        // Enum Engine.ETwitterRequestMethod
        public enum ETwitterRequestMethod : byte
        {
           	TRM_Get,
           	TRM_Post,
           	TRM_Delete,
           	TRM_MAX,
        };

        // Enum Engine.EReporterLineStyle
        public enum EReporterLineStyle : byte
        {
           	Line,
           	Dash,
           	EReporterLineStyle_MAX,
        };

        // Enum Engine.ELegendPosition
        public enum ELegendPosition : byte
        {
           	Outside,
           	Inside,
           	ELegendPosition_MAX,
        };

        // Enum Engine.EGraphDataStyle
        public enum EGraphDataStyle : byte
        {
           	Lines,
           	Filled,
           	EGraphDataStyle_MAX,
        };

        // Enum Engine.EGraphAxisStyle
        public enum EGraphAxisStyle : byte
        {
           	Lines,
           	Notches,
           	Grid,
           	EGraphAxisStyle_MAX,
        };

        // Enum Engine.EConstraintTransform
        public enum EConstraintTransform : byte
        {
           	Absolute,
           	Relative,
           	EConstraintTransform_MAX,
        };

        // Enum Engine.EControlConstraint
        public enum EControlConstraint : byte
        {
           	Orientation,
           	Translation,
           	Max,
           	EControlConstraint_MAX,
        };

        // Enum Engine.EImpactDamageOverride
        public enum EImpactDamageOverride : byte
        {
           	IDO_None,
           	IDO_On,
           	IDO_Off,
           	IDO_MAX,
        };

        // Enum Engine.EMaxConcurrentResolutionRule
        public enum EMaxConcurrentResolutionRule : byte
        {
           	PreventNew,
           	StopOldest,
           	StopFarthestThenPreventNew,
           	StopFarthestThenOldest,
           	EMaxConcurrentResolutionRule_MAX,
        };

        // Enum Engine.ESoundGroup
        public enum ESoundGroup : byte
        {
           	SOUNDGROUP_Default,
           	SOUNDGROUP_Effects,
           	SOUNDGROUP_UI,
           	SOUNDGROUP_Music,
           	SOUNDGROUP_Voice,
           	SOUNDGROUP_GameSoundGroup1,
           	SOUNDGROUP_GameSoundGroup2,
           	SOUNDGROUP_GameSoundGroup3,
           	SOUNDGROUP_GameSoundGroup4,
           	SOUNDGROUP_GameSoundGroup5,
           	SOUNDGROUP_GameSoundGroup6,
           	SOUNDGROUP_GameSoundGroup7,
           	SOUNDGROUP_GameSoundGroup8,
           	SOUNDGROUP_GameSoundGroup9,
           	SOUNDGROUP_GameSoundGroup10,
           	SOUNDGROUP_GameSoundGroup11,
           	SOUNDGROUP_GameSoundGroup12,
           	SOUNDGROUP_GameSoundGroup13,
           	SOUNDGROUP_GameSoundGroup14,
           	SOUNDGROUP_GameSoundGroup15,
           	SOUNDGROUP_GameSoundGroup16,
           	SOUNDGROUP_GameSoundGroup17,
           	SOUNDGROUP_GameSoundGroup18,
           	SOUNDGROUP_GameSoundGroup19,
           	SOUNDGROUP_GameSoundGroup20,
           	SOUNDGROUP_MAX,
        };

        // Enum Engine.EDecompressionType
        public enum EDecompressionType : byte
        {
           	DTYPE_Setup,
           	DTYPE_Invalid,
           	DTYPE_Preview,
           	DTYPE_Native,
           	DTYPE_RealTime,
           	DTYPE_Procedural,
           	DTYPE_Xenon,
           	DTYPE_Streaming,
           	DTYPE_MAX,
        };

        // Enum Engine.EAudioOutputTarget
        public enum EAudioOutputTarget : byte
        {
           	Speaker,
           	Controller,
           	ControllerFallbackToSpeaker,
           	EAudioOutputTarget_MAX,
        };

        // Enum Engine.ModulationParamMode
        public enum ModulationParamMode : byte
        {
           	MPM_Normal,
           	MPM_Abs,
           	MPM_Direct,
           	MPM_MAX,
        };

        // Enum Engine.ETimecodeProviderSynchronizationState
        public enum ETimecodeProviderSynchronizationState : byte
        {
           	Closed,
           	Error,
           	Synchronized,
           	Synchronizing,
           	ETimecodeProviderSynchronizationState_MAX,
        };

        // Enum Engine.EUserDefinedStructureStatus
        public enum EUserDefinedStructureStatus : byte
        {
           	UDSS_UpToDate,
           	UDSS_Dirty,
           	UDSS_Error,
           	UDSS_Duplicate,
           	UDSS_MAX,
        };

        // Enum Engine.EVectorFieldConstructionOp
        public enum EVectorFieldConstructionOp : byte
        {
           	VFCO_Extrude,
           	VFCO_Revolve,
           	VFCO_MAX,
        };

        // Enum Engine.EHIKLookAtInterpolation
        public enum EHIKLookAtInterpolation : byte
        {
           	EHIKLookAtInterpolation_Constant,
           	EHIKLookAtInterpolation_EaseOut,
           	EHIKLookAtInterpolation_MAX,
        };

        // Enum Engine.EHIKLookAtLimits
        public enum EHIKLookAtLimits : byte
        {
           	EHIKLookAtLimits_None,
           	EHIKLookAtLimits_Clamp,
           	EHIKLookAtLimits_Disable,
           	EHIKLookAtLimits_MAX,
        };

        // Enum Engine.ERefPoseType
        public enum ERefPoseType : byte
        {
           	EIT_LocalSpace,
           	EIT_Additive,
           	EIT_MAX,
        };

        // Enum Engine.EEvaluatorMode
        public enum EEvaluatorMode : byte
        {
           	EM_Standard,
           	EM_Freeze,
           	EM_DelayedFreeze,
           	EM_MAX,
        };

        // Enum Engine.EEvaluatorDataSource
        public enum EEvaluatorDataSource : byte
        {
           	EDS_SourcePose,
           	EDS_DestinationPose,
           	EDS_MAX,
        };

        // Enum Engine.ECameraAlphaBlendMode
        public enum ECameraAlphaBlendMode : byte
        {
           	CABM_Linear,
           	CABM_Cubic,
           	CABM_MAX,
        };

        // Enum Engine.EChannelDormancy
        public enum EChannelDormancy : byte
        {
           	Awake,
           	PendingDormant,
           	Dormant,
           	EChannelDormancy_MAX,
        };

        // Enum Engine.EActorChannelState
        public enum EActorChannelState : byte
        {
           	NoChannel,
           	ChannelCreated,
           	SpawnAcked,
           	EActorChannelState_MAX,
        };

        // Enum Engine.EShippingStatCategory
        public enum EShippingStatCategory : byte
        {
           	FrameSegment,
           	Game,
           	Engine,
           	Blueprint,
           	EShippingStatCategory_MAX,
        };

        // Enum ExplosionFramework.EExplosionReceiverCurveType
        public enum EExplosionReceiverCurveType : byte
        {
           	None,
           	Other,
           	Player,
           	EExplosionReceiverCurveType_MAX,
        };

        // Enum FactionsFramework.EEnemyFactionShipRangeState
        public enum EEnemyFactionShipRangeState : byte
        {
           	OutOfRange,
           	InRangeForEmergent,
           	InRangeForInvasion,
           	EEnemyFactionShipRangeState_MAX,
        };

        // Enum FactionsFramework.EFactionLeftReason
        public enum EFactionLeftReason : byte
        {
           	Defeated,
           	Voted,
           	CrewDestroyed,
           	EnteredCrossLevelTunnelOfTheDamned,
           	Migrated,
           	EFactionLeftReason_MAX,
        };

        // Enum FactionsFramework.EFactionType
        public enum EFactionType : byte
        {
           	FactionG,
           	FactionB,
           	EFactionType_MAX,
        };

        // Enum Factions.EStreakPartType
        public enum EStreakPartType : byte
        {
           	LeftHull,
           	RightHull,
           	Foremast,
           	EStreakPartType_MAX,
        };

        // Enum FireworkFramework.EFireworkAmbientLightFadeState
        public enum EFireworkAmbientLightFadeState : byte
        {
           	None,
           	FadeIn,
           	Lifetime,
           	FadeOut,
           	EFireworkAmbientLightFadeState_MAX,
        };

        // Enum Fire.EFireCellState
        public enum EFireCellState : byte
        {
           	Deactivated,
           	Flooded,
           	Wet,
           	Kindled,
           	Smouldering,
           	Steaming,
           	Burning,
           	MAX,
           	EFireCellState_MAX,
        };

        // Enum Fire.ELastIgnitionState
        public enum ELastIgnitionState : byte
        {
           	None,
           	Success,
           	Failure,
           	ELastIgnitionState_MAX,
        };

        // Enum Foliage.EFoliageScaling
        public enum EFoliageScaling : byte
        {
           	Uniform,
           	Free,
           	LockXY,
           	LockXZ,
           	LockYZ,
           	EFoliageScaling_MAX,
        };

        // Enum Foliage.FoliageVertexColorMask
        public enum FoliageVertexColorMask : byte
        {
           	FOLIAGEVERTEXCOLORMASK_Disabled,
           	FOLIAGEVERTEXCOLORMASK_Red,
           	FOLIAGEVERTEXCOLORMASK_Green,
           	FOLIAGEVERTEXCOLORMASK_Blue,
           	FOLIAGEVERTEXCOLORMASK_Alpha,
           	FOLIAGEVERTEXCOLORMASK_MAX,
        };

        // Enum Foliage.ESimulationQuery
        public enum ESimulationQuery : byte
        {
           	CollisionOverlap,
           	ShadeOverlap,
           	AnyOverlap,
           	ESimulationQuery_MAX,
        };

        // Enum Foliage.ESimulationOverlap
        public enum ESimulationOverlap : byte
        {
           	CollisionOverlap,
           	ShadeOverlap,
           	None,
           	ESimulationOverlap_MAX,
        };

        // Enum GameEventsOnDemandFramework.EGameEventCategory
        public enum EGameEventCategory : byte
        {
           	MainEvent,
           	SubEvent,
           	EGameEventCategory_MAX,
        };

        // Enum GameEventsOnDemandFramework.EAvailabilityState
        public enum EAvailabilityState : byte
        {
           	Inactive,
           	Available_Active,
           	Available_ActiveEngaged,
           	Unavailable_CrewLimitReached,
           	Unavailable_Cooldown,
           	Unavailable_ProgressedPastLimit,
           	EAvailabilityState_MAX,
        };

        // Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
        public enum EGameplayEffectGrantedAbilityRemovePolicy : byte
        {
           	CancelAbilityImmediately,
           	RemoveAbilityOnEnd,
           	DoNothing,
           	EGameplayEffectGrantedAbilityRemovePolicy_MAX,
        };

        // Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
        public enum EGameplayEffectAttributeCaptureSource : byte
        {
           	Source,
           	Target,
           	EGameplayEffectAttributeCaptureSource_MAX,
        };

        // Enum GameplayAbilities.EGameplayAbilityActivationMode
        public enum EGameplayAbilityActivationMode : byte
        {
           	Authority,
           	NonAuthority,
           	Predicting,
           	Confirmed,
           	EGameplayAbilityActivationMode_MAX,
        };

        // Enum GameplayAbilities.EAbilityGenericReplicatedEvent
        public enum EAbilityGenericReplicatedEvent : byte
        {
           	GenericConfirm,
           	GenericCancel,
           	InputPressed,
           	InputReleased,
           	GenericSignalFromClient,
           	GenericSignalFromServer,
           	GameCustom1,
           	GameCustom2,
           	GameCustom3,
           	GameCustom4,
           	GameCustom5,
           	MAX,
           	EAbilityGenericReplicatedEvent_MAX,
        };

        // Enum GameplayAbilities.ETargetDataFilterSelf
        public enum ETargetDataFilterSelf : byte
        {
           	TDFS_Any,
           	TDFS_NoSelf,
           	TDFS_NoOthers,
           	TDFS_MAX,
        };

        // Enum GameplayAbilities.EGameplayTagEventType
        public enum EGameplayTagEventType : byte
        {
           	NewOrRemoved,
           	AnyCountChange,
           	EGameplayTagEventType_MAX,
        };

        // Enum GameplayAbilities.EGameplayCueEvent
        public enum EGameplayCueEvent : byte
        {
           	OnActive,
           	WhileActive,
           	Executed,
           	Removed,
           	EGameplayCueEvent_MAX,
        };

        // Enum GameplayAbilities.EGameplayEffectStackingType
        public enum EGameplayEffectStackingType : byte
        {
           	None,
           	AggregateBySource,
           	AggregateByTarget,
           	EGameplayEffectStackingType_MAX,
        };

        // Enum GameplayAbilities.EGameplayModOp
        public enum EGameplayModOp : byte
        {
           	Additive,
           	Multiplicitive,
           	Division,
           	Override,
           	Max,
           	EGameplayModOp_MAX,
        };

        // Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
        public enum EGameplayAbilityTargetingLocationType : byte
        {
           	LiteralTransform,
           	ActorTransform,
           	SocketTransform,
           	EGameplayAbilityTargetingLocationType_MAX,
        };

        // Enum GameplayAbilities.EGameplayTargetingConfirmation
        public enum EGameplayTargetingConfirmation : byte
        {
           	Instant,
           	UserConfirmed,
           	Custom,
           	CustomMulti,
           	EGameplayTargetingConfirmation_MAX,
        };

        // Enum GameplayAbilities.EGameplayAbilityTriggerSource
        public enum EGameplayAbilityTriggerSource : byte
        {
           	GameplayEvent,
           	OwnedTagAdded,
           	OwnedTagPresent,
           	EGameplayAbilityTriggerSource_MAX,
        };

        // Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
        public enum EGameplayAbilityReplicationPolicy : byte
        {
           	ReplicateNo,
           	ReplicateYes,
           	EGameplayAbilityReplicationPolicy_MAX,
        };

        // Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
        public enum EGameplayAbilityNetExecutionPolicy : byte
        {
           	LocalPredicted,
           	LocalOnly,
           	ServerInitiated,
           	ServerOnly,
           	EGameplayAbilityNetExecutionPolicy_MAX,
        };

        // Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
        public enum EGameplayAbilityInstancingPolicy : byte
        {
           	NonInstanced,
           	InstancedPerActor,
           	InstancedPerExecution,
           	EGameplayAbilityInstancingPolicy_MAX,
        };

        // Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
        public enum EGameplayEffectStackingPeriodPolicy : byte
        {
           	ResetOnSuccessfulApplication,
           	NeverReset,
           	EGameplayEffectStackingPeriodPolicy_MAX,
        };

        // Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
        public enum EGameplayEffectStackingDurationPolicy : byte
        {
           	RefreshOnSuccessfulApplication,
           	NeverRefresh,
           	EGameplayEffectStackingDurationPolicy_MAX,
        };

        // Enum GameplayAbilities.EGameplayEffectDurationType
        public enum EGameplayEffectDurationType : byte
        {
           	Instant,
           	Infinite,
           	HasDuration,
           	EGameplayEffectDurationType_MAX,
        };

        // Enum GameplayAbilities.EAttributeBasedFloatCalculationType
        public enum EAttributeBasedFloatCalculationType : byte
        {
           	AttributeMagnitude,
           	AttributeBaseValue,
           	AttributeBonusMagnitude,
           	EAttributeBasedFloatCalculationType_MAX,
        };

        // Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
        public enum EGameplayEffectMagnitudeCalculation : byte
        {
           	ScalableFloat,
           	AttributeBased,
           	CustomCalculationClass,
           	SetByCaller,
           	EGameplayEffectMagnitudeCalculation_MAX,
        };

        // Enum GameplayAbilities.EAbilityTaskNetSyncType
        public enum EAbilityTaskNetSyncType : byte
        {
           	BothWait,
           	OnlyServerWait,
           	OnlyClientWait,
           	EAbilityTaskNetSyncType_MAX,
        };

        // Enum GameplayAbilities.ETargetAbilitySelfSelection
        public enum ETargetAbilitySelfSelection : byte
        {
           	TASS_Permit,
           	TASS_Forbid,
           	TASS_Require,
           	TASS_MAX,
        };

        // Enum GameplayAbilities.EWaitAttributeChangeComparison
        public enum EWaitAttributeChangeComparison : byte
        {
           	None,
           	GreaterThan,
           	LessThan,
           	GreaterThanOrEqualTo,
           	LessThanOrEqualTo,
           	NotEqualTo,
           	ExactlyEqualTo,
           	MAX,
           	EWaitAttributeChangeComparison_MAX,
        };

        // Enum GameplayAbilities.EGameplayAbilityInputBinds
        public enum EGameplayAbilityInputBinds : byte
        {
           	Ability1,
           	Ability2,
           	Ability3,
           	Ability4,
           	Ability5,
           	Ability6,
           	Ability7,
           	Ability8,
           	Ability9,
           	EGameplayAbilityInputBinds_MAX,
        };

        // Enum GameplayAbilities.EGameplayCuePayloadType
        public enum EGameplayCuePayloadType : byte
        {
           	EffectContext,
           	CueParameters,
           	FromSpec,
           	EGameplayCuePayloadType_MAX,
        };

        // Enum GameplayDebugger.EAIDebugDrawDataView
        public enum EAIDebugDrawDataView : byte
        {
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
        public enum EDebugComponentMessage : byte
        {
           	EnableExtendedView,
           	DisableExtendedView,
           	ActivateReplication,
           	DeactivateReplilcation,
           	ActivateDataView,
           	DeactivateDataView,
           	SetMultipleDataViews,
           	EDebugComponentMessage_MAX,
        };

        // Enum GameplayTags.EGameplayTagQueryExprType
        public enum EGameplayTagQueryExprType : byte
        {
           	Undefined,
           	AnyTagsMatch,
           	AllTagsMatch,
           	NoTagsMatch,
           	AnyExprMatch,
           	AllExprMatch,
           	NoExprMatch,
           	EGameplayTagQueryExprType_MAX,
        };

        // Enum GameplayTags.EGameplayContainerMatchType
        public enum EGameplayContainerMatchType : byte
        {
           	Any,
           	All,
           	EGameplayContainerMatchType_MAX,
        };

        // Enum GameplayTags.EGameplayTagMatchType
        public enum EGameplayTagMatchType : byte
        {
           	Explicit,
           	IncludeParentTags,
           	EGameplayTagMatchType_MAX,
        };

        // Enum GameplayTasks.ETaskResourceOverlapPolicy
        public enum ETaskResourceOverlapPolicy : byte
        {
           	StartOnTop,
           	StartAtEnd,
           	ETaskResourceOverlapPolicy_MAX,
        };

        // Enum GameplayTasks.EGameplayTaskState
        public enum EGameplayTaskState : byte
        {
           	Uninitialized,
           	AwaitingActivation,
           	Paused,
           	Active,
           	Finished,
           	EGameplayTaskState_MAX,
        };

        // Enum GameplayTasks.EGameplayTaskRunResult
        public enum EGameplayTaskRunResult : byte
        {
           	Error,
           	Failed,
           	Success_Paused,
           	Success_Active,
           	Success_Finished,
           	EGameplayTaskRunResult_MAX,
        };

        // Enum GlitterBeard.EFinaleState
        public enum EFinaleState : byte
        {
           	Inactive,
           	Active,
           	ServerComplete,
           	EFinaleState_MAX,
        };

        // Enum GlitterBeard.EGlitterbeardVFXState
        public enum EGlitterbeardVFXState : byte
        {
           	Active,
           	Inactive,
           	EGlitterbeardVFXState_MAX,
        };

        // Enum InputCore.ETouchIndex
        public enum ETouchIndex : byte
        {
           	Touch1,
           	Touch2,
           	Touch3,
           	Touch4,
           	Touch5,
           	Touch6,
           	Touch7,
           	Touch8,
           	Touch9,
           	Touch10,
           	ETouchIndex_MAX,
        };

        // Enum InputCore.ETouchType
        public enum ETouchType : byte
        {
           	Began,
           	Moved,
           	Stationary,
           	Ended,
           	NumTypes,
           	ETouchType_MAX,
        };

        // Enum InputCore.EConsoleForGamepadLabels
        public enum EConsoleForGamepadLabels : byte
        {
           	None,
           	XBoxOne,
           	PS4,
           	EConsoleForGamepadLabels_MAX,
        };

        // Enum InputCore.EControllerHand
        public enum EControllerHand : byte
        {
           	Left,
           	Right,
           	EControllerHand_MAX,
        };

        // Enum Interaction.EInteractionBlockReason
        public enum EInteractionBlockReason : byte
        {
           	None,
           	Radial,
           	Other,
           	EInteractionBlockReason_MAX,
        };

        // Enum Interaction.EInteractableIdentifier
        public enum EInteractableIdentifier : byte
        {
           	None,
           	Capstan,
           	Cannon,
           	Harpoon,
           	Sail,
           	Wheel,
           	MAX,
           	EInteractableIdentifier_MAX,
        };

        // Enum Interaction.EInteractionObject
        public enum EInteractionObject : byte
        {
           	None,
           	Shop,
           	Chest,
           	Barrel,
           	CaptainsBookcase,
           	EInteractionObject_MAX,
        };

        // Enum InvasionFramework.EInvasionStatus
        public enum EInvasionStatus : byte
        {
           	None,
           	Aggressive,
           	Passive,
           	EInvasionStatus_MAX,
        };

        // Enum InvasionFramework.EInvasionMusicState
        public enum EInvasionMusicState : byte
        {
           	None,
           	EnteringDive,
           	Emerging,
           	ForceStop,
           	EInvasionMusicState_MAX,
        };

        // Enum InvasionFramework.EInvasionEndedReason
        public enum EInvasionEndedReason : byte
        {
           	ShipSunk,
           	ParticipantLeftFaction,
           	ParticipantLeftServer,
           	InvasionTimeout,
           	None,
           	EInvasionEndedReason_MAX,
        };

        // Enum ItemQuality.EItemQualityQueryReason
        public enum EItemQualityQueryReason : byte
        {
           	DontCare,
           	ChangeOwnership,
           	DropOnShip,
           	HandIn,
           	EItemQualityQueryReason_MAX,
        };

        // Enum ItemQuality.EEmissaryQualityLevel
        public enum EEmissaryQualityLevel : byte
        {
           	Invalid,
           	Level1,
           	Level2,
           	Level3,
           	Level4,
           	Level5,
           	Level6,
           	Level7,
           	Level8,
           	MAX,
           	EEmissaryQualityLevel_MAX,
        };

        // Enum ItemQuality.EHealthIndex
        public enum EHealthIndex : byte
        {
           	DontCare,
           	Level1,
           	Level2,
           	Level3,
           	Level4,
           	Level5,
           	Level6,
           	Level7,
           	MAX,
           	EHealthIndex_MAX,
        };

        // Enum ItemQuality.EStatusType
        public enum EStatusType : byte
        {
           	DontCare,
           	Yes,
           	No,
           	EStatusType_MAX,
        };

        // Enum JsonUtilities.EJsonTestEnum
        public enum EJsonTestEnum : byte
        {
           	Value0,
           	Value1,
           	EJsonTestEnum_MAX,
        };

        // Enum KnockbackFramework.ESolidState
        public enum ESolidState : byte
        {
           	Disabled,
           	Knockback,
           	Solid,
           	ESolidState_MAX,
        };

        // Enum KnockbackFramework.EKnockbackType
        public enum EKnockbackType : byte
        {
           	AwayFromCentre,
           	TowardsActor,
           	EKnockbackType_MAX,
        };

        // Enum Kraken.ECoordinatedKrakenSpecialEventTypes
        public enum ECoordinatedKrakenSpecialEventTypes : byte
        {
           	None,
           	OverrideTargetActor,
           	ReleaseTargetActor,
           	BiteAttackImpact,
           	BreathingIn,
           	RoarVisuals,
           	RoarAttack,
           	EnableHeadDamage,
           	ECoordinatedKrakenSpecialEventTypes_MAX,
        };

        // Enum Kraken.ECoordinatedKrakenActionType
        public enum ECoordinatedKrakenActionType : byte
        {
           	Normal,
           	Appear,
           	Disappear,
           	ECoordinatedKrakenActionType_MAX,
        };

        // Enum Kraken.EKrakenBehaviourType
        public enum EKrakenBehaviourType : byte
        {
           	Idle,
           	ShipHitting,
           	ShipWrapping,
           	PlayerGrabbing,
           	EKrakenBehaviourType_MAX,
        };

        // Enum Kraken.EKrakenShipWrappingTentacleState
        public enum EKrakenShipWrappingTentacleState : byte
        {
           	Dormant,
           	Wrapping,
           	AmbientWobble,
           	EnteringShakeAttack,
           	ShakeAttack,
           	ExitingShakeAttack,
           	HeavyAttack,
           	Unwrapping,
           	EKrakenShipWrappingTentacleState_MAX,
        };

        // Enum Kraken.EKrakenDynamicsStateEvent
        public enum EKrakenDynamicsStateEvent : byte
        {
           	Damage,
           	Knockback,
           	EKrakenDynamicsStateEvent_MAX,
        };

        // Enum Kraken.EKrakenEQSLockReason
        public enum EKrakenEQSLockReason : byte
        {
           	Spawning,
           	EKrakenEQSLockReason_MAX,
        };

        // Enum Kraken.EKrakenDespawnReason
        public enum EKrakenDespawnReason : byte
        {
           	Invalid,
           	Defeated,
           	TimedOutWithNoTargets,
           	TimedOutWithTarget,
           	Dismissed,
           	EKrakenDespawnReason_MAX,
        };

        // Enum Kraken.EKrakenState
        public enum EKrakenState : byte
        {
           	Spawning,
           	Active,
           	Despawning,
           	EKrakenState_MAX,
        };

        // Enum Kraken.EKrakenTentacleBehaviourDamageActions
        public enum EKrakenTentacleBehaviourDamageActions : byte
        {
           	StayActive,
           	MoveActive,
           	FleeInactive,
           	EKrakenTentacleBehaviourDamageActions_MAX,
        };

        // Enum Landscape.ELandscapeGizmoType
        public enum ELandscapeGizmoType : byte
        {
           	LGT_None,
           	LGT_Height,
           	LGT_Weight,
           	LGT_MAX,
        };

        // Enum Landscape.ELandscapeLODFalloff
        public enum ELandscapeLODFalloff : byte
        {
           	Linear,
           	SquareRoot,
           	ELandscapeLODFalloff_MAX,
        };

        // Enum Landscape.ELandscapeLayerPaintingRestriction
        public enum ELandscapeLayerPaintingRestriction : byte
        {
           	None,
           	UseMaxLayers,
           	ExistingOnly,
           	ELandscapeLayerPaintingRestriction_MAX,
        };

        // Enum Landscape.ELandscapeSetupErrors
        public enum ELandscapeSetupErrors : byte
        {
           	LSE_None,
           	LSE_NoLandscapeInfo,
           	LSE_CollsionXY,
           	LSE_NoLayerInfo,
           	LSE_MAX,
        };

        // Enum Landscape.LandscapeSplineMeshOrientation
        public enum LandscapeSplineMeshOrientation : byte
        {
           	LSMO_XUp,
           	LSMO_YUp,
           	LSMO_MAX,
        };

        // Enum Landscape.ELandscapeLayerBlendType
        public enum ELandscapeLayerBlendType : byte
        {
           	LB_WeightBlend,
           	LB_AlphaBlend,
           	LB_HeightBlend,
           	LB_MAX,
        };

        // Enum Landscape.ELandscapeCustomizedCoordType
        public enum ELandscapeCustomizedCoordType : byte
        {
           	LCCT_None,
           	LCCT_CustomUV0,
           	LCCT_CustomUV1,
           	LCCT_CustomUV2,
           	LCCT_WeightMapUV,
           	LCCT_MAX,
        };

        // Enum Landscape.ETerrainCoordMappingType
        public enum ETerrainCoordMappingType : byte
        {
           	TCMT_Auto,
           	TCMT_XY,
           	TCMT_XZ,
           	TCMT_YZ,
           	TCMT_MAX,
        };

        // Enum LiquidContainer.ELiquidType
        public enum ELiquidType : byte
        {
           	Water,
           	Vomit,
           	BoilingWater,
           	Grog,
           	GreenGrog,
           	ELiquidType_MAX,
        };

        // Enum LostShipmentsClueFramework.EClueSiteLootType
        public enum EClueSiteLootType : byte
        {
           	Loot,
           	Debris,
           	None,
           	EClueSiteLootType_MAX,
        };

        // Enum LostShipmentsClueVariants.EInteractableGrammaticalGender
        public enum EInteractableGrammaticalGender : byte
        {
           	Default,
           	Masculine,
           	Feminine,
           	EInteractableGrammaticalGender_MAX,
        };

        // Enum Maths.EBuoyancyBlend
        public enum EBuoyancyBlend : byte
        {
           	PrimaryToSecondary,
           	SecondaryToTertiary,
           	EBuoyancyBlend_MAX,
        };

        // Enum Maths.EPlaneLineIntersectionType
        public enum EPlaneLineIntersectionType : byte
        {
           	IntersectionWithinLineSegment,
           	IntersectionOutsideOfLineSegment,
           	PlaneAndLineParallel,
           	EPlaneLineIntersectionType_MAX,
        };

        // Enum Maths.ESpatialOffsetMethod
        public enum ESpatialOffsetMethod : byte
        {
           	ThreeDimensional,
           	Horizontal,
           	Vertical,
           	ESpatialOffsetMethod_MAX,
        };

        // Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
        public enum EMediaWebcamCaptureDeviceFilter : byte
        {
           	None,
           	DepthSensor,
           	Front,
           	Rear,
           	Unknown,
           	EMediaWebcamCaptureDeviceFilter_MAX,
        };

        // Enum MediaAssets.EMediaVideoCaptureDeviceFilter
        public enum EMediaVideoCaptureDeviceFilter : byte
        {
           	None,
           	Card,
           	Software,
           	Unknown,
           	Webcam,
           	EMediaVideoCaptureDeviceFilter_MAX,
        };

        // Enum MediaAssets.EMediaAudioCaptureDeviceFilter
        public enum EMediaAudioCaptureDeviceFilter : byte
        {
           	None,
           	Card,
           	Microphone,
           	Software,
           	Unknown,
           	EMediaAudioCaptureDeviceFilter_MAX,
        };

        // Enum MediaAssets.EMediaPlayerTrack
        public enum EMediaPlayerTrack : byte
        {
           	Audio,
           	Caption,
           	Metadata,
           	Script,
           	Subtitle,
           	Text,
           	Video,
           	EMediaPlayerTrack_MAX,
        };

        // Enum MediaAssets.MediaTextureOrientation
        public enum MediaTextureOrientation : byte
        {
           	MTORI_Original,
           	MTORI_CW90,
           	MTORI_CW180,
           	MTORI_CW270,
           	MTORI_MAX,
        };

        // Enum MediaAssets.MediaTextureOutputFormat
        public enum MediaTextureOutputFormat : byte
        {
           	MTOF_Default,
           	MTOF_SRGB_LINOUT,
           	MTOF_MAX,
        };

        // Enum MediaUtils.EMediaPlayerOptionBooleanOverride
        public enum EMediaPlayerOptionBooleanOverride : byte
        {
           	UseMediaPlayerSetting,
           	Enabled,
           	Disabled,
           	EMediaPlayerOptionBooleanOverride_MAX,
        };

        // Enum MovieSceneCapture.EHDRCaptureGamut
        public enum EHDRCaptureGamut : byte
        {
           	HCGM_Rec709,
           	HCGM_P3DCI,
           	HCGM_Rec2020,
           	HCGM_ACES,
           	HCGM_ACEScg,
           	HCGM_MAX,
        };

        // Enum MovieSceneTracks.MovieScene3DPathSection_Axis
        public enum MovieScene3DPathSection_Axis : byte
        {
           	X,
           	Y,
           	Z,
           	NEG_X,
           	NEG_Y,
           	NEG_Z,
           	MovieScene3DPathSection_MAX,
        };

        // Enum MovieSceneTracks.EShow3DTrajectory
        public enum EShow3DTrajectory : byte
        {
           	EST_OnlyWhenSelected,
           	EST_Always,
           	EST_Never,
           	EST_MAX,
        };

        // Enum MovieSceneTracks.ELevelVisibility
        public enum ELevelVisibility : byte
        {
           	Visible,
           	Hidden,
           	ELevelVisibility_MAX,
        };

        // Enum MovieSceneTracks.EParticleKey
        public enum EParticleKey : byte
        {
           	Activate,
           	Deactivate,
           	Trigger,
           	EParticleKey_MAX,
        };

        // Enum MovieSceneTracks.EAnimationTrackSubtype
        public enum EAnimationTrackSubtype : byte
        {
           	None,
           	CameraDockable_1stPerson,
           	CameraDockable_3rdPerson,
           	EAnimationTrackSubtype_MAX,
        };

        // Enum MovieScene.ESpawnOwnership
        public enum ESpawnOwnership : byte
        {
           	InnerSequence,
           	MasterSequence,
           	External,
           	ESpawnOwnership_MAX,
        };

        // Enum MovieScene.EMovieSceneKeyInterpolation
        public enum EMovieSceneKeyInterpolation : byte
        {
           	Auto,
           	User,
           	Break,
           	Linear,
           	Constant,
           	EMovieSceneKeyInterpolation_MAX,
        };

        // Enum MovieScene.EMovieSceneCompletionMode
        public enum EMovieSceneCompletionMode : byte
        {
           	KeepState,
           	RestoreState,
           	EMovieSceneCompletionMode_MAX,
        };

        // Enum MovieScene.EEvaluationMethod
        public enum EEvaluationMethod : byte
        {
           	Static,
           	Swept,
           	EEvaluationMethod_MAX,
        };

        // Enum Music.EAISpawnerMusicZoneState
        public enum EAISpawnerMusicZoneState : byte
        {
           	Passive,
           	InCombat,
           	BattleWon,
           	EAISpawnerMusicZoneState_MAX,
        };

        // Enum NaturalDisasters.EAshCloudState
        public enum EAshCloudState : byte
        {
           	Spawning,
           	Active,
           	Dissipating,
           	EAshCloudState_MAX,
        };

        // Enum NaturalDisasters.EVolcanoTargetHitType
        public enum EVolcanoTargetHitType : byte
        {
           	OnTarget,
           	NearMiss,
           	Random,
           	EVolcanoTargetHitType_MAX,
        };

        // Enum NaturalDisasters.EVolcanoTargetType
        public enum EVolcanoTargetType : byte
        {
           	Player,
           	Ship,
           	Watercraft,
           	EVolcanoTargetType_MAX,
        };

        // Enum NaturalDisasters.EAshenLordWorldEndCloudState
        public enum EAshenLordWorldEndCloudState : byte
        {
           	Inactive,
           	Active,
           	EAshenLordWorldEndCloudState_MAX,
        };

        // Enum NaturalDisasters.EGeyserState
        public enum EGeyserState : byte
        {
           	Dormant,
           	Active,
           	Disabled,
           	EGeyserState_MAX,
        };

        // Enum NaturalDisasters.EEarthquakeState
        public enum EEarthquakeState : byte
        {
           	Dormant,
           	WarmingUp,
           	Active,
           	CoolingDown,
           	EEarthquakeState_MAX,
        };

        // Enum NaturalDisasters.EGeyserManagerState
        public enum EGeyserManagerState : byte
        {
           	Dormant,
           	Active,
           	EGeyserManagerState_MAX,
        };

        // Enum NaturalDisasters.EVolcanoState
        public enum EVolcanoState : byte
        {
           	Dormant,
           	WarmingUp,
           	Erupting,
           	EVolcanoState_MAX,
        };

        // Enum NetworkRegions.ENetworkRegion
        public enum ENetworkRegion : byte
        {
           	MainWorld,
           	DeepSea,
           	Max,
           	ENetworkRegion_MAX,
        };

        // Enum Occlusion.EOcclusionTypes
        public enum EOcclusionTypes : byte
        {
           	Visible,
           	Occluded,
           	Unknown,
           	MAX,
           	EOcclusionTypes_MAX,
        };

        // Enum OnlineSubsystemUtils.EBeaconConnectionState
        public enum EBeaconConnectionState : byte
        {
           	Invalid,
           	Closed,
           	Pending,
           	Open,
           	EBeaconConnectionState_MAX,
        };

        // Enum OnlineSubsystemUtils.EPartyReservationResult
        public enum EPartyReservationResult : byte
        {
           	NoResult,
           	RequestPending,
           	GeneralError,
           	PartyLimitReached,
           	IncorrectPlayerCount,
           	RequestTimedOut,
           	ReservationDuplicate,
           	ReservationNotFound,
           	ReservationAccepted,
           	ReservationDenied,
           	ReservationDenied_Banned,
           	ReservationRequestCanceled,
           	ReservationInvalid,
           	BadSessionId,
           	EPartyReservationResult_MAX,
        };

        // Enum OnlineSubsystemUtils.EClientRequestType
        public enum EClientRequestType : byte
        {
           	NonePending,
           	ExistingSessionReservation,
           	ReservationUpdate,
           	EmptyServerReservation,
           	ChangeWorldRequest,
           	Reconnect,
           	EClientRequestType_MAX,
        };

        // Enum OnlineSubsystem.EOnlineStatsSuccess
        public enum EOnlineStatsSuccess : byte
        {
           	Success,
           	UnknownError,
           	InvalidStatId,
           	InvalidArgument,
           	InvalidUser,
           	EOnlineStatsSuccess_MAX,
        };

        // Enum OnlineSubsystem.EInAppPurchaseState
        public enum EInAppPurchaseState : byte
        {
           	Success,
           	Failed,
           	Cancelled,
           	Invalid,
           	NotAllowed,
           	Restored,
           	Unknown,
           	EInAppPurchaseState_MAX,
        };

        // Enum OnlineSubsystem.EMPMatchOutcome
        public enum EMPMatchOutcome : byte
        {
           	None,
           	Quit,
           	Won,
           	Lost,
           	Tied,
           	TimeExpired,
           	First,
           	Second,
           	Third,
           	Fourth,
           	EMPMatchOutcome_MAX,
        };

        // Enum OnlineSubsystem.EPlatformId
        public enum EPlatformId : byte
        {
           	Unknown,
           	XboxLive,
           	Steam,
           	EPlatformId_MAX,
        };

        // Enum Pets.EPetDangerHearingResponseType
        public enum EPetDangerHearingResponseType : byte
        {
           	RunAway,
           	RunToHangoutSpot,
           	TurnToward,
           	RunToOwner,
           	MAX,
           	EPetDangerHearingResponseType_MAX,
        };

        // Enum Pets.EPetDangerHearingTarget
        public enum EPetDangerHearingTarget : byte
        {
           	None,
           	Owner,
           	Crew,
           	Alliance,
           	EPetDangerHearingTarget_MAX,
        };

        // Enum Pets.EHangoutRotationMode
        public enum EHangoutRotationMode : byte
        {
           	Match,
           	Randomise,
           	EHangoutRotationMode_MAX,
        };

        // Enum Pets.EWieldablePetDropRequestReason
        public enum EWieldablePetDropRequestReason : byte
        {
           	None,
           	Submerged,
           	Escaped,
           	EWieldablePetDropRequestReason_MAX,
        };

        // Enum Pets.EPetFeedingReactionType
        public enum EPetFeedingReactionType : byte
        {
           	None,
           	Sick,
           	Happy,
           	EPetFeedingReactionType_MAX,
        };

        // Enum PirateGenerator.EIPGEthnicity
        public enum EIPGEthnicity : byte
        {
           	UNSPECIFIED,
           	ASIAN,
           	BLACK,
           	WHITE,
           	EIPGEthnicity_MAX,
        };

        // Enum PirateGenerator.EIPGGender
        public enum EIPGGender : byte
        {
           	UNSPECIFIED,
           	MALE,
           	FEMALE,
           	EIPGGender_MAX,
        };

        // Enum PirateGenerator.EIPGPirateType
        public enum EIPGPirateType : byte
        {
           	PLAYER,
           	NPC,
           	BONES,
           	GHOST,
           	EIPGPirateType_MAX,
        };

        // Enum PirateGenerator.EIPGTestEnum
        public enum EIPGTestEnum : byte
        {
           	RANDOM,
           	RANDOM_OR_NONE,
           	EIPGTestEnum_MAX,
        };

        // Enum PirateGenerator.EIPGPartType
        public enum EIPGPartType : byte
        {
           	DEFAULT,
           	INVERSE,
           	EIPGPartType_MAX,
        };

        // Enum PirateGenerator.EIPGSlotType
        public enum EIPGSlotType : byte
        {
           	DEFAULT,
           	DYNAMIC,
           	EIPGSlotType_MAX,
        };

        // Enum PirateGenerator.EIPGSetMode
        public enum EIPGSetMode : byte
        {
           	RANDOM,
           	RANDOM_OR_NONE,
           	BLEND2_FIRST_ORDER,
           	BLEND2_RANDOM,
           	NONE,
           	BLEND2_LAST_UNDERSCORE,
           	EIPGSetMode_MAX,
        };

        // Enum PirateGenerator.EIPGBlendType
        public enum EIPGBlendType : byte
        {
           	NIX,
           	NIL,
           	RND,
           	ONOFF,
           	POSNEG,
           	MAP,
           	ON,
           	ONOFF_NEAREST,
           	ONOFF_BIAS,
           	ONOFF_BIAS_NEAREST,
           	EIPGBlendType_MAX,
        };

        // Enum PirateGenerator.EPirateBakeFlags
        public enum EPirateBakeFlags : byte
        {
           	None,
           	FirstPerson,
           	NoObjectFading,
           	NoLODs,
           	StripTopLOD,
           	KeepCPUData,
           	DiscardImmediately,
           	HighPriority,
           	EPirateBakeFlags_MAX,
        };

        // Enum PirateGenerator.EFileAccessAsyncResult
        public enum EFileAccessAsyncResult : byte
        {
           	Succeeded,
           	Failed,
           	EFileAccessAsyncResult_MAX,
        };

        // Enum PositionalVoice.EVoiceChatState
        public enum EVoiceChatState : byte
        {
           	Silent,
           	Talking,
           	Muted,
           	Deafened,
           	EVoiceChatState_MAX,
        };

        // Enum PrioritisedPrompts.EPromptEvaluatedType
        public enum EPromptEvaluatedType : byte
        {
           	ShowPrompt,
           	ShowNoPrompt,
           	CompleteCoordinator,
           	EPromptEvaluatedType_MAX,
        };

        // Enum PrioritisedPrompts.EPromptStartStop
        public enum EPromptStartStop : byte
        {
           	Start,
           	Stop,
           	EPromptStartStop_MAX,
        };

        // Enum RareAudio.EEmitterRelationship
        public enum EEmitterRelationship : byte
        {
           	Audio_Remote,
           	Audio_Local,
           	Audio_Default,
           	Audio_MAX,
        };

        // Enum RareEngine.EMemoryUsageVisualiserInstanceType
        public enum EMemoryUsageVisualiserInstanceType : byte
        {
           	Server,
           	Client,
           	EMemoryUsageVisualiserInstanceType_MAX,
        };

        // Enum RareEngine.EMemoryGatheringMode
        public enum EMemoryGatheringMode : byte
        {
           	Exclusive,
           	Inclusive,
           	EMemoryGatheringMode_MAX,
        };

        // Enum RareEngine.ETestEnum
        public enum ETestEnum : byte
        {
           	Alpha,
           	Beta,
           	ETestEnum_MAX,
        };

        // Enum Repair.ERepairableState
        public enum ERepairableState : byte
        {
           	NeverDamaged,
           	Repairable,
           	Repairing,
           	Repaired,
           	UndoingRepair,
           	ERepairableState_MAX,
        };

        // Enum Reviving.EReviveState
        public enum EReviveState : byte
        {
           	Revivable,
           	NotRevivable,
           	BeingRevived,
           	Revived,
           	EReviveState_MAX,
        };

        // Enum SafeZoneReservationFramework.ESafeZoneState
        public enum ESafeZoneState : byte
        {
           	Initial,
           	Activated,
           	Deactivated,
           	ESafeZoneState_MAX,
        };

        // Enum SeasonProgressionFramework.ETrackedObjectiveType
        public enum ETrackedObjectiveType : byte
        {
           	ProgressUpdate,
           	Completion,
           	ETrackedObjectiveType_MAX,
        };

        // Enum SeasonProgressionFramework.ESeasonGoalType
        public enum ESeasonGoalType : byte
        {
           	Goal,
           	Challenge,
           	Individual,
           	ESeasonGoalType_MAX,
        };

        // Enum SeasonProgressionUI.EMoreButtonSource
        public enum EMoreButtonSource : byte
        {
           	Popup,
           	TextNotification,
           	EMoreButtonSource_MAX,
        };

        // Enum SeasonProgressionUI.ENavigationAction
        public enum ENavigationAction : byte
        {
           	ShowDeed,
           	ShowTrial,
           	ShowReward,
           	ShowProgress,
           	None,
           	ENavigationAction_MAX,
        };

        // Enum SeasonProgressionUI.ESeasonStyleModifiers
        public enum ESeasonStyleModifiers : byte
        {
           	Owned,
           	SeasonMark,
           	PirateLegend,
           	ESeasonStyleModifiers_MAX,
        };

        // Enum ServerMigration.EExecutionTarget
        public enum EExecutionTarget : byte
        {
           	OldServer,
           	NewServer,
           	Client,
           	EExecutionTarget_MAX,
        };

        // Enum ServiceHttp.EServiceHttpMetricsLevel
        public enum EServiceHttpMetricsLevel : byte
        {
           	None,
           	Failed,
           	FailedOrAborted,
           	FailedOrAbortedOrNonSuccess,
           	All,
           	EServiceHttpMetricsLevel_MAX,
        };

        // Enum Sessions.ESessionStyle
        public enum ESessionStyle : byte
        {
           	Invalid,
           	Standard,
           	BeachNPCSpawn,
           	Max,
           	ESessionStyle_MAX,
        };

        // Enum Sessions.ESessionGrouping
        public enum ESessionGrouping : byte
        {
           	Invalid,
           	Default,
           	MediumLargeShip,
           	Max,
           	ESessionGrouping_MAX,
        };

        // Enum Sessions.ECrewSessionType
        public enum ECrewSessionType : byte
        {
           	Invalid,
           	SmallShip,
           	MediumShip,
           	LargeShip,
           	ServerLarge,
           	SloopSolo,
           	Lobby,
           	ECrewSessionType_MAX,
        };

        // Enum Sessions.ESessionVisibility
        public enum ESessionVisibility : byte
        {
           	Invalid,
           	Open,
           	Closed,
           	ESessionVisibility_MAX,
        };

        // Enum Sessions.ECrewSessionQoSServerResolveResult
        public enum ECrewSessionQoSServerResolveResult : byte
        {
           	Success,
           	InvalidLocation,
           	TimedOut,
           	Failed,
           	ECrewSessionQoSServerResolveResult_MAX,
        };

        // Enum ShantyPuzzle.EShantyPuzzleCompletionReactionState
        public enum EShantyPuzzleCompletionReactionState : byte
        {
           	None,
           	CompletionStarted,
           	CompletionAborted,
           	UnlockComplete,
           	EShantyPuzzleCompletionReactionState_MAX,
        };

        // Enum ShantyPuzzle.EGlitterBeardPlayerPuzzleOutcome
        public enum EGlitterBeardPlayerPuzzleOutcome : byte
        {
           	WrongTime,
           	WrongInstrument,
           	WrongShanty,
           	ConditionsMetForThisPosition,
           	EGlitterBeardPlayerPuzzleOutcome_MAX,
        };

        // Enum ShipDamage.EHullDamageDeck
        public enum EHullDamageDeck : byte
        {
           	Bottom,
           	Mid,
           	EHullDamageDeck_MAX,
        };

        // Enum SlateCore.EFontLanguage
        public enum EFontLanguage : byte
        {
           	German,
           	English,
           	Spanish,
           	Mexican,
           	French,
           	Italian,
           	Korean,
           	Polish,
           	Portuguese,
           	Russian,
           	SimplifiedChinese,
           	TraditionalChinese,
           	Japanese,
           	Thai,
           	Turkish,
           	COUNT,
           	EFontLanguage_MAX,
        };

        // Enum SlateCore.EFontHinting
        public enum EFontHinting : byte
        {
           	Default,
           	Auto,
           	AutoLight,
           	Monochrome,
           	None,
           	EFontHinting_MAX,
        };

        // Enum SlateCore.ESelectInfo
        public enum ESelectInfo : byte
        {
           	OnKeyPress,
           	OnNavigation,
           	OnMouseClick,
           	Direct,
           	ESelectInfo_MAX,
        };

        // Enum SlateCore.ETextCommit
        public enum ETextCommit : byte
        {
           	Default,
           	OnEnter,
           	OnUserMovedFocus,
           	OnCleared,
           	ETextCommit_MAX,
        };

        // Enum SlateCore.EScrollDirection
        public enum EScrollDirection : byte
        {
           	Scroll_Down,
           	Scroll_Up,
           	Scroll_MAX,
        };

        // Enum SlateCore.EOrientation
        public enum EOrientation : byte
        {
           	Orient_Horizontal,
           	Orient_Vertical,
           	Orient_MAX,
        };

        // Enum SlateCore.EMenuPlacement
        public enum EMenuPlacement : byte
        {
           	MenuPlacement_BelowAnchor,
           	MenuPlacement_CenteredBelowAnchor,
           	MenuPlacement_ComboBox,
           	MenuPlacement_ComboBoxRight,
           	MenuPlacement_MenuRight,
           	MenuPlacement_AboveAnchor,
           	MenuPlacement_CenteredAboveAnchor,
           	MenuPlacement_MenuLeft,
           	MenuPlacement_MAX,
        };

        // Enum SlateCore.EVerticalAlignment
        public enum EVerticalAlignment : byte
        {
           	VAlign_Fill,
           	VAlign_Top,
           	VAlign_Center,
           	VAlign_Bottom,
           	VAlign_MAX,
        };

        // Enum SlateCore.EHorizontalAlignment
        public enum EHorizontalAlignment : byte
        {
           	HAlign_Fill,
           	HAlign_Left,
           	HAlign_Center,
           	HAlign_Right,
           	HAlign_MAX,
        };

        // Enum SlateCore.EUINavigation
        public enum EUINavigation : byte
        {
           	Left,
           	Right,
           	Up,
           	Down,
           	Next,
           	Previous,
           	Num,
           	Invalid,
           	EUINavigation_MAX,
        };

        // Enum SlateCore.EButtonPressMethod
        public enum EButtonPressMethod : byte
        {
           	DownAndUp,
           	ButtonPress,
           	ButtonRelease,
           	EButtonPressMethod_MAX,
        };

        // Enum SlateCore.EButtonTouchMethod
        public enum EButtonTouchMethod : byte
        {
           	DownAndUp,
           	PreciseTap,
           	EButtonTouchMethod_MAX,
        };

        // Enum SlateCore.EButtonClickMethod
        public enum EButtonClickMethod : byte
        {
           	DownAndUp,
           	MouseDown,
           	MouseUp,
           	PreciseClick,
           	EButtonClickMethod_MAX,
        };

        // Enum SlateCore.ESlateColorStylingMode
        public enum ESlateColorStylingMode : byte
        {
           	UseColor_Specified,
           	UseColor_Specified_Link,
           	UseColor_Foreground,
           	UseColor_Foreground_Subdued,
           	UseColor_MAX,
        };

        // Enum SlateCore.ESlateBrushImageType
        public enum ESlateBrushImageType : byte
        {
           	NoImage,
           	FullColor,
           	Linear,
           	ESlateBrushImageType_MAX,
        };

        // Enum SlateCore.ESlateBrushMirrorType
        public enum ESlateBrushMirrorType : byte
        {
           	NoMirror,
           	Horizontal,
           	Vertical,
           	Both,
           	ESlateBrushMirrorType_MAX,
        };

        // Enum SlateCore.ESlateBrushTileType
        public enum ESlateBrushTileType : byte
        {
           	NoTile,
           	Horizontal,
           	Vertical,
           	Both,
           	ESlateBrushTileType_MAX,
        };

        // Enum SlateCore.ESlateBrushDrawType
        public enum ESlateBrushDrawType : byte
        {
           	NoDrawType,
           	Box,
           	Border,
           	Image,
           	ESlateBrushDrawType_MAX,
        };

        // Enum SlateCore.ECheckBoxState
        public enum ECheckBoxState : byte
        {
           	Unchecked,
           	Checked,
           	Undetermined,
           	ECheckBoxState_MAX,
        };

        // Enum SlateCore.ESlateCheckBoxType
        public enum ESlateCheckBoxType : byte
        {
           	CheckBox,
           	ToggleButton,
           	ESlateCheckBoxType_MAX,
        };

        // Enum SlateCore.EConsumeMouseWheel
        public enum EConsumeMouseWheel : byte
        {
           	WhenScrollingPossible,
           	Always,
           	EConsumeMouseWheel_MAX,
        };

        // Enum SlateCore.EFocusCause
        public enum EFocusCause : byte
        {
           	Mouse,
           	Navigation,
           	SetDirectly,
           	Cleared,
           	OtherWidgetLostFocus,
           	WindowActivate,
           	EFocusCause_MAX,
        };

        // Enum SlateCore.EUINavigationRule
        public enum EUINavigationRule : byte
        {
           	Escape,
           	Explicit,
           	Wrap,
           	Stop,
           	Custom,
           	Invalid,
           	EUINavigationRule_MAX,
        };

        // Enum Slate.ETextFlowDirection
        public enum ETextFlowDirection : byte
        {
           	Auto,
           	LeftToRight,
           	RightToLeft,
           	ETextFlowDirection_MAX,
        };

        // Enum Slate.ETextWrappingPolicy
        public enum ETextWrappingPolicy : byte
        {
           	DefaultWrapping,
           	AllowPerCharacterWrapping,
           	ETextWrappingPolicy_MAX,
        };

        // Enum Slate.ETextJustify
        public enum ETextJustify : byte
        {
           	Left,
           	Center,
           	Right,
           	ETextJustify_MAX,
        };

        // Enum Slate.ETableViewMode
        public enum ETableViewMode : byte
        {
           	List,
           	Tile,
           	Tree,
           	ETableViewMode_MAX,
        };

        // Enum Slate.ESelectionMode
        public enum ESelectionMode : byte
        {
           	None,
           	Single,
           	SingleToggle,
           	Multi,
           	ESelectionMode_MAX,
        };

        // Enum Slate.EStretch
        public enum EStretch : byte
        {
           	None,
           	Fill,
           	ScaleToFit,
           	ScaleToFitX,
           	ScaleToFitY,
           	ScaleToFill,
           	UserSpecified,
           	EStretch_MAX,
        };

        // Enum Slate.EStretchDirection
        public enum EStretchDirection : byte
        {
           	Both,
           	DownOnly,
           	UpOnly,
           	EStretchDirection_MAX,
        };

        // Enum Slate.EProgressBarFillType
        public enum EProgressBarFillType : byte
        {
           	LeftToRight,
           	RightToLeft,
           	FillFromCenter,
           	TopToBottom,
           	BottomToTop,
           	EProgressBarFillType_MAX,
        };

        // Enum SpireFramework.EDirectionOfMovement
        public enum EDirectionOfMovement : byte
        {
           	None,
           	Rising,
           	Lowering,
           	EDirectionOfMovement_MAX,
        };

        // Enum StatusEffects.EStatusComparisonMode
        public enum EStatusComparisonMode : byte
        {
           	Ordered,
           	Unordered,
           	Partial,
           	Any,
           	EStatusComparisonMode_MAX,
        };

        // Enum StudiosAutomation.EComparisonMethod
        public enum EComparisonMethod : byte
        {
           	Equal_To,
           	Not_Equal_To,
           	Greater_Than_Or_Equal_To,
           	Less_Than_Or_Equal_To,
           	Greater_Than,
           	Less_Than,
           	EComparisonMethod_MAX,
        };

        // Enum StudiosAutomation.ETestAutomationPlayModeOverride
        public enum ETestAutomationPlayModeOverride : byte
        {
           	Adventure,
           	Contest,
           	Tutorial,
           	NotSelectedYet,
           	ETestAutomationPlayModeOverride_MAX,
        };

        // Enum StudiosAutomation.EPerformanceCaptureType
        public enum EPerformanceCaptureType : byte
        {
           	None,
           	FrameTime,
           	StreamingMemory,
           	StreamingPositional,
           	EPerformanceCaptureType_MAX,
        };

        // Enum StudiosAutomation.ETestArea
        public enum ETestArea : byte
        {
           	None,
           	Rendering,
           	UserInterface,
           	UserInterfaceInitialization,
           	Art,
           	Audio,
           	AI,
           	ETestArea_MAX,
        };

        // Enum StudiosAutomation.ETestCategory
        public enum ETestCategory : byte
        {
           	Unit,
           	Integration,
           	Acceptance,
           	Stress,
           	Soak,
           	Performance,
           	ETestCategory_MAX,
        };

        // Enum StudiosAutomation.ETextureAuditorMipSetting
        public enum ETextureAuditorMipSetting : byte
        {
           	MipGenRequired,
           	NoMipGenRequired,
           	MipGenOptional,
           	ETextureAuditorMipSetting_MAX,
        };

        // Enum StudiosAutomation.ECollectionAuditType
        public enum ECollectionAuditType : byte
        {
           	NoneSet,
           	UseParentType,
           	Totals,
           	MeshLimits,
           	AnimSequenceLimits,
           	PhysicsAudits,
           	ExceptionList,
           	WIP,
           	ECollectionAuditType_MAX,
        };

        // Enum TaleCore.ETaleStructStatus
        public enum ETaleStructStatus : byte
        {
           	Dirty,
           	UpToData,
           	Error,
           	ETaleStructStatus_MAX,
        };

        // Enum Tales.ETaleQuestStepBeginMode
        public enum ETaleQuestStepBeginMode : byte
        {
           	Cold,
           	Warm,
           	ETaleQuestStepBeginMode_MAX,
        };

        // Enum Tales.ETaleQuestStepState
        public enum ETaleQuestStepState : byte
        {
           	Inactive,
           	Active,
           	PendingCompletion,
           	Completed,
           	ETaleQuestStepState_MAX,
        };

        // Enum Tales.ETaleQuestQueryableStateDataIntComparison
        public enum ETaleQuestQueryableStateDataIntComparison : byte
        {
           	Equal,
           	Greater,
           	GreaterOrEqual,
           	Less,
           	LessOrEqual,
           	ETaleQuestQueryableStateDataIntComparison_MAX,
        };

        // Enum Tales.ETaleInteractionState
        public enum ETaleInteractionState : byte
        {
           	Enabled,
           	Disabled,
           	ETaleInteractionState_MAX,
        };

        // Enum Tales.ELostShipmentsIslandTypes
        public enum ELostShipmentsIslandTypes : byte
        {
           	Feature,
           	Resource,
           	Seapost,
           	Outpost,
           	Fort,
           	ELostShipmentsIslandTypes_MAX,
        };

        // Enum Tales.EModifyAtIndexType
        public enum EModifyAtIndexType : byte
        {
           	AddPageAtIndex,
           	ReplacePageAtIndex,
           	ReplacePageFromIndex,
           	EModifyAtIndexType_MAX,
        };

        // Enum Tethering.ETetherConstrainMode
        public enum ETetherConstrainMode : byte
        {
           	ShrinkLength,
           	ConstantLength,
           	GrowLength,
           	ETetherConstrainMode_MAX,
        };

        // Enum Time.ETimeOfDay
        public enum ETimeOfDay : byte
        {
           	Day,
           	Night,
           	ETimeOfDay_MAX,
        };

        // Enum TradeRouteFramework.ETradeRouteMapOrientation
        public enum ETradeRouteMapOrientation : byte
        {
           	Landscape,
           	Portrait,
           	ETradeRouteMapOrientation_MAX,
        };

        // Enum TreasuryFramework.ETreasuryWaveType
        public enum ETreasuryWaveType : byte
        {
           	Regular,
           	FinalWave,
           	ETreasuryWaveType_MAX,
        };

        // Enum TreasuryFramework.ETreasuryVaultDoorState
        public enum ETreasuryVaultDoorState : byte
        {
           	Opening,
           	Open,
           	Closing,
           	Closed,
           	ETreasuryVaultDoorState_MAX,
        };

        // Enum TreasuryFramework.ETreasuryEncounterType
        public enum ETreasuryEncounterType : byte
        {
           	Sirens,
           	OceanCrawlers,
           	ETreasuryEncounterType_MAX,
        };

        // Enum TreasuryFramework.ETreasuryWaveResult
        public enum ETreasuryWaveResult : byte
        {
           	Continue,
           	ChangeType,
           	ETreasuryWaveResult_MAX,
        };

        // Enum TreasuryFramework.ETreasuryState
        public enum ETreasuryState : byte
        {
           	Inactive,
           	Waiting,
           	Active,
           	Completed,
           	Failed,
           	Aftermath,
           	ETreasuryState_MAX,
        };

        // Enum Tutorial.ETutorialType
        public enum ETutorialType : byte
        {
           	Undecided,
           	NoTutorial,
           	MaidenVoyage,
           	BeachNPCSpawnFlow,
           	CompanyOnBoarding,
           	Captaincy,
           	ETutorialType_MAX,
        };

        // Enum UMG.ESlateVisibility
        public enum ESlateVisibility : byte
        {
           	Visible,
           	Collapsed,
           	Hidden,
           	HitTestInvisible,
           	SelfHitTestInvisible,
           	ESlateVisibility_MAX,
        };

        // Enum UMG.EDragPivot
        public enum EDragPivot : byte
        {
           	MouseDown,
           	TopLeft,
           	TopCenter,
           	TopRight,
           	CenterLeft,
           	CenterCenter,
           	CenterRight,
           	BottomLeft,
           	BottomCenter,
           	BottomRight,
           	EDragPivot_MAX,
        };

        // Enum UMG.ESlateSizeRule
        public enum ESlateSizeRule : byte
        {
           	Automatic,
           	Fill,
           	ESlateSizeRule_MAX,
        };

        // Enum UMG.EWidgetDesignFlags
        public enum EWidgetDesignFlags : byte
        {
           	None,
           	Designing,
           	ShowOutline,
           	EWidgetDesignFlags_MAX,
        };

        // Enum UMG.EDesignPreviewSizeMode
        public enum EDesignPreviewSizeMode : byte
        {
           	FillScreen,
           	Custom,
           	CustomOnScreen,
           	Desired,
           	DesiredOnScreen,
           	EDesignPreviewSizeMode_MAX,
        };

        // Enum UMG.EUMGSequencePlayMode
        public enum EUMGSequencePlayMode : byte
        {
           	Forward,
           	Reverse,
           	PingPong,
           	EUMGSequencePlayMode_MAX,
        };

        // Enum UMG.EBindingKind
        public enum EBindingKind : byte
        {
           	Function,
           	Property,
           	EBindingKind_MAX,
        };

        // Enum UMG.EWidgetBlendMode
        public enum EWidgetBlendMode : byte
        {
           	Opaque,
           	Masked,
           	Transparent,
           	EWidgetBlendMode_MAX,
        };

        // Enum UMG.EWidgetSpace
        public enum EWidgetSpace : byte
        {
           	World,
           	Screen,
           	EWidgetSpace_MAX,
        };

        // Enum Watercrafts.EOarInputState
        public enum EOarInputState : byte
        {
           	Inactive,
           	Active,
           	Braking,
           	EOarInputState_MAX,
        };

        // Enum Watercrafts.EOarState
        public enum EOarState : byte
        {
           	Idle,
           	InStroke,
           	ApexOfStroke,
           	RecoveringFromStroke,
           	Braking,
           	EOarState_MAX,
        };

        // Enum Watercrafts.EOarIdentifier
        public enum EOarIdentifier : byte
        {
           	Left,
           	Right,
           	EOarIdentifier_MAX,
        };

        // Enum Watercrafts.ERowboatActionTelemetry
        public enum ERowboatActionTelemetry : byte
        {
           	None,
           	Mount,
           	Unmount,
           	ERowboatActionTelemetry_MAX,
        };

        // Enum Watercrafts.EWatercraftDespawnReason
        public enum EWatercraftDespawnReason : byte
        {
           	Unknown,
           	Destroyed,
           	ExternalRequest,
           	Migration,
           	WorldEnding,
           	EWatercraftDespawnReason_MAX,
        };

        // Enum WaterSlide.ERideDirection
        public enum ERideDirection : byte
        {
           	Forwards,
           	Backwards,
           	ERideDirection_MAX,
        };

        // Enum WaterSlide.EZiplineAttachPointConfig
        public enum EZiplineAttachPointConfig : byte
        {
           	NoAttachPoints,
           	AttachPointAtStart,
           	AttachPointAtEnd,
           	AttachPointAtStartAndEnd,
           	EZiplineAttachPointConfig_MAX,
        };

        // Enum Water.EWaterQueryResult
        public enum EWaterQueryResult : byte
        {
           	Success,
           	Failed,
           	NoWater,
           	Count,
           	EWaterQueryResult_MAX,
        };

        // Enum Water.EBuoyancyDragSampleType
        public enum EBuoyancyDragSampleType : byte
        {
           	Spherical,
           	Planar,
           	EBuoyancyDragSampleType_MAX,
        };

        // Enum Water.EBuoyancySampleType
        public enum EBuoyancySampleType : byte
        {
           	Spherical,
           	Cuboidal,
           	ProbeCurve,
           	EBuoyancySampleType_MAX,
        };

        // Enum Water.EWaterHeightType
        public enum EWaterHeightType : byte
        {
           	Dynamic,
           	Static,
           	EWaterHeightType_MAX,
        };

        // Enum Water.EWaterSplashProbeType
        public enum EWaterSplashProbeType : byte
        {
           	ThresholdedRateOfChange,
           	StateChangeWaterToAir,
           	StateChangeAirToWater,
           	StateChangeAny,
           	Continuous,
           	EWaterSplashProbeType_MAX,
        };

        // Enum WwiseAudioCore.EWwiseEventDurationType
        public enum EWwiseEventDurationType : byte
        {
           	OneShot,
           	Mixed,
           	Infinite,
           	Unknown,
           	EWwiseEventDurationType_MAX,
        };

        // Enum WwiseAudioCore.EWwiseAsyncIOPriorityDisplay
        public enum EWwiseAsyncIOPriorityDisplay : byte
        {
           	Low,
           	BelowNormal,
           	Normal,
           	High,
           	EWwiseAsyncIOPriorityDisplay_MAX,
        };

        // Enum WwiseAudio.EAnimNotify_WwiseSound_PerspectiveRestriction
        public enum EAnimNotify_WwiseSound_PerspectiveRestriction : byte
        {
           	NoRestriction,
           	FirstPersonOnly,
           	ThirdPersonOnly,
           	EAnimNotify_WwiseSound_MAX,
        };

    }
}
