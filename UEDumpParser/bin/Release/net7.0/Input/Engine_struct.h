// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t {
	KeepRelativeOffset,
	KeepWorldPosition,
	SnapToTarget,
	SnapToTargetIncludingScale,
	EAttachLocation_MAX,
};

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t {
	Destroyed,
	LevelTransition,
	EndPlayInEditor,
	RemovedFromWorld,
	Quit,
	EEndPlayReason_MAX,
};

// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8_t {
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
enum class ESpawnActorCollisionHandlingMethod : uint8_t {
	Undefined,
	AlwaysSpawn,
	AdjustIfPossibleButAlwaysSpawn,
	AdjustIfPossibleButDontSpawnIfColliding,
	DontSpawnIfColliding,
	ESpawnActorCollisionHandlingMethod_MAX,
};

// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t {
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
enum class EActorSpawnRestrictions : uint8_t {
	ServerOnly,
	ClientOnly,
	ServerAndClient,
	SpawnRestrictionMax,
	EActorSpawnRestrictions_MAX,
};

// Enum Engine.ENetRole
enum class ENetRole : uint8_t {
	ROLE_None,
	ROLE_SimulatedProxy,
	ROLE_AutonomousProxy,
	ROLE_Authority,
	ROLE_MAX,
};

// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t {
	ByteComponents,
	ShortComponents,
	ERotatorQuantization_MAX,
};

// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t {
	RoundWholeNumber,
	RoundOneDecimal,
	RoundTwoDecimals,
	EVectorQuantization_MAX,
};

// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t {
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
enum class EComponentNetDormancy : uint8_t {
	NotSupported,
	Awake,
	FollowOwner,
	Dormant,
	Count,
	EComponentNetDormancy_MAX,
};

// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t {
	Native,
	SimpleConstructionScript,
	UserConstructionScript,
	Instance,
	EComponentCreationMethod_MAX,
};

// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t {
	Custom,
	X,
	Y,
	Z,
	UseGlobalPhysicsSetting,
	EPlaneConstraintAxisSetting_MAX,
};

// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t {
	OneShot,
	OneShot_Reverse,
	Loop_Reset,
	PingPong,
	EInterpToBehaviourType_MAX,
};

// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t {
	PIDT_None,
	PIDT_Int,
	PIDT_Float,
	PIDT_String,
	PIDT_Object,
	PIDT_Custom,
	PIDT_MAX,
};

// Enum Engine.EMovementMode
enum class EMovementMode : uint8_t {
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
enum class EOverlapFilterOption : uint8_t {
	OverlapFilter_All,
	OverlapFilter_DynamicOnly,
	OverlapFilter_StaticOnly,
	OverlapFilter_MAX,
};

// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t {
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
enum class EDrawDebugTrace : uint8_t {
	None,
	ForOneFrame,
	ForDuration,
	Persistent,
	EDrawDebugTrace_MAX,
};

// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t {
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
enum class ECollisionChannel : uint8_t {
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
enum class EMoveComponentAction : uint8_t {
	Move,
	Stop,
	Return,
	EMoveComponentAction_MAX,
};

// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t {
	Quit,
	Background,
	EQuitPreference_MAX,
};

// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t {
	NoPins,
	Shown,
	Hidden,
	ENodeAdvancedPins_MAX,
};

// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t {
	FullTitle,
	ListView,
	EditableTitle,
	MenuTitle,
	MAX_TitleTypes,
	ENodeTitleType_MAX,
};

// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t {
	EGPD_Input,
	EGPD_Output,
	EGPD_MAX,
};

// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t {
	BPST_Original,
	BPST_VariantA,
	BPST_MAX,
};

// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t {
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
enum class EDemoPlayFailure : uint8_t {
	Generic,
	DemoNotFound,
	Corrupt,
	InvalidVersion,
	EDemoPlayFailure_MAX,
};

// Enum Engine.ETravelType
enum class ETravelType : uint8_t {
	TRAVEL_Absolute,
	TRAVEL_Partial,
	TRAVEL_Relative,
	TRAVEL_MAX,
};

// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8_t {
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
enum class ENetworkFailure : uint8_t {
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
enum class EInputEvent : uint8_t {
	IE_Pressed,
	IE_Released,
	IE_Repeat,
	IE_DoubleClick,
	IE_Axis,
	IE_MAX,
};

// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t {
	ACM_Free,
	ACM_Limited,
	ACM_Locked,
	ACM_MAX,
};

// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t {
	Invalid,
	Bone,
	Socket,
	EComponentSocketType_MAX,
};

// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t {
	Static,
	Stationary,
	Movable,
	EComponentMobility_MAX,
};

// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8_t {
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
enum class EWalkableSlopeBehavior : uint8_t {
	WalkableSlope_Default,
	WalkableSlope_Increase,
	WalkableSlope_Decrease,
	WalkableSlope_Unwalkable,
	WalkableSlope_Max,
};

// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t {
	Disabled,
	PlacedInWorld,
	Spawned,
	PlacedInWorldOrSpawned,
	EAutoPossessAI_MAX,
};

// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t {
	DORM_Never,
	DORM_Awake,
	DORM_DormantAll,
	DORM_DormantPartial,
	DORM_Initial,
	DORM_MAX,
};

// Enum Engine.ESimplygonMaterialChannel
enum class ESimplygonMaterialChannel : uint8_t {
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
enum class ESimplygonTextureResolution : uint8_t {
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
enum class ESimplygonColorChannels : uint8_t {
	RGBA,
	RGB,
	L,
	ESimplygonColorChannels_MAX,
};

// Enum Engine.ESimplygonTextureSamplingQuality
enum class ESimplygonTextureSamplingQuality : uint8_t {
	Poor,
	Low,
	Medium,
	High,
	ESimplygonTextureSamplingQuality_MAX,
};

// Enum Engine.ESimplygonCasterType
enum class ESimplygonCasterType : uint8_t {
	None,
	Color,
	Normals,
	Opacity,
	ESimplygonCasterType_MAX,
};

// Enum Engine.ESimplygonTextureStrech
enum class ESimplygonTextureStrech : uint8_t {
	None,
	VerySmall,
	Small,
	Medium,
	Large,
	VeryLarge,
	ESimplygonTextureStrech_MAX,
};

// Enum Engine.EMaterialLODType
enum class EMaterialLODType : uint8_t {
	Off,
	BakeTexture,
	BakeVertexColor,
	Replace,
	EMaterialLODType_MAX,
};

// Enum Engine.ESimplygonLODType
enum class ESimplygonLODType : uint8_t {
	Reduction,
	Remeshing,
	ESimplygonLODType_MAX,
};

// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t {
	Off,
	Lowest,
	Low,
	Normal,
	High,
	Highest,
	EMeshFeatureImportance_MAX,
};

// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t {
	SMF_None,
	SMF_Streamed,
	SMF_MAX,
};

// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t {
	LMPT_NormalPadding,
	LMPT_PrePadding,
	LMPT_NoPadding,
	LMPT_MAX,
};

// Enum Engine.EDominanceGroup
enum class EDominanceGroup : uint8_t {
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
enum class ECollisionEnabled : uint8_t {
	NoCollision,
	QueryOnly,
	PhysicsOnly,
	QueryAndPhysics,
	ECollisionEnabled_MAX,
};

// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t {
	ETS_EventSignature,
	ETS_FloatSignature,
	ETS_VectorSignature,
	ETS_LinearColorSignature,
	ETS_InvalidSignature,
	ETS_MAX,
};

// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8_t {
	Normal,
	Sensitive,
	Custom,
	ESleepFamily_MAX,
};

// Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t {
	RIF_Constant,
	RIF_Linear,
	RIF_MAX,
};

// Enum Engine.EInputConsumeOptions
enum class EInputConsumeOptions : uint8_t {
	ICO_ConsumeAll,
	ICO_ConsumeBoundKeys,
	ICO_ConsumeNone,
	ICO_MAX,
};

// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t {
	BSIT_Average,
	BSIT_Linear,
	BSIT_Cubic,
	BSIT_MAX,
};

// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t {
	ECR_Ignore,
	ECR_Overlap,
	ECR_Block,
	ECR_MAX,
};

// Enum Engine.EPhysicsSceneType
enum class EPhysicsSceneType : uint8_t {
	PST_Sync,
	PST_Cloth,
	PST_Async,
	PST_MAX,
};

// Enum Engine.ETriangleSortAxis
enum class ETriangleSortAxis : uint8_t {
	TSA_X_Axis,
	TSA_Y_Axis,
	TSA_Z_Axis,
	TSA_MAX,
};

// Enum Engine.ETriangleSortOption
enum class ETriangleSortOption : uint8_t {
	TRISORT_None,
	TRISORT_CenterRadialDistance,
	TRISORT_Random,
	TRISORT_MergeContiguous,
	TRISORT_Custom,
	TRISORT_CustomLeftRight,
	TRISORT_MAX,
};

// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t {
	Quality_Preview,
	Quality_Medium,
	Quality_High,
	Quality_Production,
	Quality_MAX,
};

// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t {
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
enum class EPresortedBillboardsMode : uint8_t {
	PBM_Disabled,
	PBM_FrontToBack2D,
	PBM_BackToFront2D,
	PBM_MAX,
};

// Enum Engine.EMaterialGeometryMode
enum class EMaterialGeometryMode : uint8_t {
	MGM_Normal,
	MGM_VerticesAsBillboards,
	MGM_TriangleDensityView,
	MGM_TriangleDensityViewWorldSpace,
	MGM_MAX,
};

// Enum Engine.ELowResTranslucencyCascade
enum class ELowResTranslucencyCascade : uint8_t {
	LRTC_QuarterRes,
	LRTC_HalfRes,
	LRTC_FullRes,
	LRTC_MAX,
};

// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t {
	MTM_NoTessellation,
	MTM_FlatTessellation,
	MTM_PNTriangles,
	MTM_MAX,
};

// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t {
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
enum class EParticleCollisionMode : uint8_t {
	SceneDepth,
	DistanceField,
	EParticleCollisionMode_MAX,
};

// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t {
	ETrailWidthMode_FromCentre,
	ETrailWidthMode_FromFirst,
	ETrailWidthMode_FromSecond,
	ETrailWidthMode_MAX,
};

// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t {
	SortByDistance,
	SortByProjectedZ,
	SortAlongAxis,
	ETranslucentSortPolicy_MAX,
};

// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t {
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
enum class ESamplerSourceMode : uint8_t {
	SSM_FromTextureAsset,
	SSM_Wrap_WorldGroupSettings,
	SSM_Clamp_WorldGroupSettings,
	SSM_MAX,
};

// Enum Engine.EConstantMaterial
enum class EConstantMaterial : uint8_t {
	CONSTMAT_None,
	CONSTMAT_GroundCover,
	CONSTMAT_TreeFoliage,
	CONSTMAT_MAX,
};

// Enum Engine.EBlendMode
enum class EBlendMode : uint8_t {
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
enum class EIndirectLightingCacheQuality : uint8_t {
	ILCQ_Off,
	ILCQ_Point,
	ILCQ_Volume,
	ILCQ_MAX,
};

// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t {
	SDPG_World,
	SDPG_Foreground,
	SDPG_MAX,
};

// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t {
	KeepRelative,
	KeepWorld,
	EDetachmentRule_MAX,
};

// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t {
	KeepRelative,
	KeepWorld,
	SnapToTarget,
	EAttachmentRule_MAX,
};

// Enum Engine.EActorMetricsType
enum class EActorMetricsType : uint8_t {
	METRICS_VERTS,
	METRICS_TRIS,
	METRICS_SECTIONS,
	METRICS_MAX,
};

// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t {
	AspectRatio_MaintainYFOV,
	AspectRatio_MaintainXFOV,
	AspectRatio_MajorAxisFOV,
	AspectRatio_MaintainYFOV_UnitIsXFovIn16By9,
	AspectRatio_MAX,
};

// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t {
	BPTYPE_Normal,
	BPTYPE_Const,
	BPTYPE_MacroLibrary,
	BPTYPE_Interface,
	BPTYPE_LevelScript,
	BPTYPE_FunctionLibrary,
	BPTYPE_MAX,
};

// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t {
	BS_Unknown,
	BS_Dirty,
	BS_Error,
	BS_UpToDate,
	BS_BeingCreated,
	BS_UpToDateWithWarnings,
	BS_MAX,
};

// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t {
	RTS_World,
	RTS_Actor,
	RTS_Component,
	RTS_Basis,
	RTS_BasisGrid,
	RTS_MAX,
};

// Enum Engine.EDetailMode
enum class EDetailMode : uint8_t {
	DM_Low,
	DM_Medium,
	DM_High,
	DM_MAX,
};

// Enum Engine.ENetSpatialClusteringOptions
enum class ENetSpatialClusteringOptions : uint8_t {
	OptIn,
	OptOut,
	NeverRelevant,
	ENetSpatialClusteringOptions_MAX,
};

// Enum Engine.EBrushType
enum class EBrushType : uint8_t {
	Brush_Default,
	Brush_Add,
	Brush_Subtract,
	Brush_MAX,
};

// Enum Engine.ECsgOper
enum class ECsgOper : uint8_t {
	CSG_Active,
	CSG_Add,
	CSG_Subtract,
	CSG_Intersect,
	CSG_Deintersect,
	CSG_None,
	CSG_MAX,
};

// Enum Engine.ReverbPreset
enum class ReverbPreset : uint8_t {
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
enum class EStreamingVolumeUsage : uint8_t {
	SVB_Loading,
	SVB_LoadingAndVisibility,
	SVB_VisibilityBlockingOnLoad,
	SVB_BlockingOnLoad,
	SVB_LoadingNotVisible,
	SVB_MAX,
};

// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t {
	Invalid,
	Error,
	Fail,
	Success,
	ENavigationQueryResult_MAX,
};

// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t {
	Invalid,
	Instant,
	Lazy,
	ENavDataGatheringModeConfig_MAX,
};

// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t {
	Default,
	Instant,
	Lazy,
	ENavDataGatheringMode_MAX,
};

// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t {
	Default,
	Enable,
	Disable,
	MAX,
	ENavigationOptionFlag_MAX,
};

// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t {
	BL_AfterTonemapping,
	BL_BeforeTonemapping,
	BL_BeforeTranslucency,
	BL_ReplacingTonemapper,
	BL_ActualBeforeTranslucency,
	BL_BeforeLighting,
	BL_MAX,
};

// Enum Engine.EDisableShadowMapMethod
enum class EDisableShadowMapMethod : uint8_t {
	DSM_None,
	DSM_DisableLast,
	DSM_DisableThirdSecond,
	DSM_DisableAll,
	DSM_MAX,
};

// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t {
	AAM_None,
	AAM_FXAA,
	AAM_TemporalAA,
	AAM_MAX,
};

// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t {
	DOFM_BokehDOF,
	DOFM_Gaussian,
	DOFM_CircleDOF,
	DOFM_MAX,
};

// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t {
	CameraLocal,
	World,
	UserDefined,
	RARE_CutsceneWorld,
	RARE_RelativeToWorldLocation,
	ECameraAnimPlaySpace_MAX,
};

// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t {
	Perspective,
	Orthographic,
	ECameraProjectionMode_MAX,
};

// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t {
	EOO_OffsetRandom,
	EOO_OffsetZero,
	EOO_MAX,
};

// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t {
	VTBlend_Linear,
	VTBlend_Cubic,
	VTBlend_EaseIn,
	VTBlend_EaseOut,
	VTBlend_EaseInOut,
	VTBlend_MAX,
};

// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t {
	CAS_LeftStick,
	CAS_RightStick,
	CAS_MAX,
};

// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t {
	RCCE_Cycle,
	RCCE_CycleWithOffset,
	RCCE_Oscillate,
	RCCE_Linear,
	RCCE_Constant,
	RCCE_None,
	RCCE_MAX,
};

// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t {
	RCTWM_WeightedNone,
	RCTWM_WeightedArrive,
	RCTWM_WeightedLeave,
	RCTWM_WeightedBoth,
	RCTWM_MAX,
};

// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t {
	RCTM_Auto,
	RCTM_User,
	RCTM_Break,
	RCTM_None,
	RCTM_MAX,
};

// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t {
	RCIM_Linear,
	RCIM_Constant,
	RCIM_Cubic,
	RCIM_None,
	RCIM_MAX,
};

// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t {
	Start,
	Update,
	Stop,
	EDynamicForceFeedbackAction_MAX,
};

// Enum Engine.EStandbyType
enum class EStandbyType : uint8_t {
	STDBY_Rx,
	STDBY_Tx,
	STDBY_BadPing,
	STDBY_MAX,
};

// Enum Engine.EWorldCompositionSetting
enum class EWorldCompositionSetting : uint8_t {
	NoWorldComposition,
	WorldComposition,
	NestedWorldComposition,
	EWorldCompositionSetting_MAX,
};

// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t {
	VIS_LeastAggressive,
	VIS_ModeratelyAggressive,
	VIS_MostAggressive,
	VIS_Max,
};

// Enum Engine.ESimpleLightFunctionType
enum class ESimpleLightFunctionType : uint8_t {
	NoFunction,
	Pulse,
	Flicker,
	ESimpleLightFunctionType_MAX,
};

// Enum Engine.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t {
	Static,
	DynamicModifiersOnly,
	Dynamic,
	LegacyGeneration,
	ERuntimeGenerationType_MAX,
};

// Enum Engine.ERecastPartitioning
enum class ERecastPartitioning : uint8_t {
	Monotone,
	Watershed,
	ChunkyMonotone,
	ERecastPartitioning_MAX,
};

// Enum Engine.ENavCostDisplay
enum class ENavCostDisplay : uint8_t {
	TotalCost,
	HeuristicOnly,
	RealCostOnly,
	ENavCostDisplay_MAX,
};

// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t {
	BothWays,
	LeftToRight,
	RightToLeft,
	ENavLinkDirection_MAX,
};

// Enum Engine.ETranslucencyPass
enum class ETranslucencyPass : uint8_t {
	Default,
	BeforeTranslucency,
	BeforeVolumeFog,
	WriteDepth,
	ETranslucencyPass_MAX,
};

// Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t {
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
enum class EDOFMode : uint8_t {
	Default,
	SixDOF,
	YZPlane,
	XZPlane,
	XYPlane,
	None,
	EDOFMode_MAX,
};

// Enum Engine.EExcludeFromCascades
enum class EExcludeFromCascades : uint8_t {
	LastCascade,
	LastTwoCascades,
	LastThreeCascades,
	EExcludeFromCascades_MAX,
};

// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t {
	No,
	Yes,
	EvenIfNotCollidable,
	DontExport,
	EHasCustomNavigableGeometry_MAX,
};

// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t {
	ECB_No,
	ECB_Yes,
	ECB_Owner,
	ECB_MAX,
};

// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
	EPSOBM_None,
	EPSOBM_ParticleBounds,
	EPSOBM_CustomBounds,
	EPSOBM_MAX,
};

// Enum Engine.ParticleSystemLODMethod
enum class ParticleSystemLODMethod : uint8_t {
	PARTICLESYSTEMLODMETHOD_Automatic,
	PARTICLESYSTEMLODMETHOD_DirectSet,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic,
	PARTICLESYSTEMLODMETHOD_MAX,
};

// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t {
	EPSUM_RealTime,
	EPSUM_FixedTime,
	EPSUM_MAX,
};

// Enum Engine.EWaterKillCondition
enum class EWaterKillCondition : uint8_t {
	None,
	AboveWater,
	Underwater,
	EWaterKillCondition_MAX,
};

// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t {
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
enum class ParticleReplayState : uint8_t {
	PRS_Disabled,
	PRS_Capturing,
	PRS_Replaying,
	PRS_MAX,
};

// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t {
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
enum class SkeletalMeshOptimizationType : uint8_t {
	SMOT_NumOfTriangles,
	SMOT_MaxDeviation,
	SMOT_MAX,
};

// Enum Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : uint8_t {
	SMOI_Off,
	SMOI_Lowest,
	SMOI_Low,
	SMOI_Normal,
	SMOI_High,
	SMOI_Highest,
	SMOI_MAX,
};

// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t {
	CanBeLeader,
	AlwaysFollower,
	AlwaysLeader,
	EAnimGroupRole_MAX,
};

// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t {
	NoRootMotionExtraction,
	IgnoreRootMotion,
	RootMotionFromEverything,
	RootMotionFromMontagesOnly,
	ERootMotionMode_MAX,
};

// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t {
	RefPose,
	AnimFirstFrame,
	Zero,
	ERootMotionRootLock_MAX,
};

// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t {
	WorldSpace,
	ComponentSpace,
	EBoneSpaces_MAX,
};

// Enum Engine.EMeshComponentUpdateFlag
enum class EMeshComponentUpdateFlag : uint8_t {
	AlwaysTickPoseAndRefreshBones,
	AlwaysTickPose,
	OnlyTickPoseWhenRendered,
	OnlyIfLODChanged,
	EMeshComponentUpdateFlag_MAX,
};

// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t {
	PBO_None,
	PBO_Term,
	PBO_Disable,
	PBO_MAX,
};

// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t {
	BVS_HiddenByParent,
	BVS_Visible,
	BVS_ExplicitlyHidden,
	BVS_MAX,
};

// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t {
	SLERP,
	TwistAndSwing,
	EAngularDriveMode_MAX,
};

// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8_t {
	Frame1,
	Frame2,
	EConstraintFrame_MAX,
};

// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t {
	LCM_Free,
	LCM_Limited,
	LCM_Locked,
	LCM_MAX,
};

// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t {
	Animation,
	Skeleton,
	AnimationScaled,
	AnimationRelative,
	EBoneTranslationRetargetingMode_MAX,
};

// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t {
	Absolute,
	Relative,
	Proportional,
	EAnimLinkMethod_MAX,
};

// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t {
	MaxWeight,
	NormalizeByWeight,
	BlendByWeight,
	ECurveBlendOption_MAX,
};

// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t {
	AAT_None,
	AAT_LocalSpaceBase,
	AAT_RotationOffsetMeshSpace,
	AAT_MAX,
};

// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t {
	NoFiltering,
	LOD,
	ENotifyFilterType_MAX,
};

// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t {
	Queued,
	BranchingPoint,
	EMontageNotifyTickType_MAX,
};

// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t {
	AnimationBlueprint,
	AnimationSingleNode,
	AnimationCustomMode,
	EAnimationMode_MAX,
};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t {
	SkipSimulatingBones,
	SkipAllBones,
	EKinematicBonesUpdateToPhysics_MAX,
};

// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t {
	Local,
	World,
	ESplineCoordinateSpace_MAX,
};

// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t {
	Linear,
	Curve,
	Constant,
	CurveClamped,
	CurveCustomTangent,
	ESplinePointType_MAX,
};

// Enum Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8_t {
	InvalidMode,
	GameMode,
	EditorMode,
	SimulationMode,
	PIEMode,
	FNavigationSystemRunMode_MAX,
};

// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t {
	ETAA_Default,
	ETAA_Finished,
	ETAA_Looped,
	ETAA_MAX,
};

// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t {
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
enum class ETransitionLogicType : uint8_t {
	TLT_StandardBlend,
	TLT_Custom,
	TLT_MAX,
};

// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t {
	TBM_Linear,
	TBM_Cubic,
	TBM_MAX,
};

// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t {
	BRS_KeepComponentSpaceRotation,
	BRS_KeepLocalSpaceRotation,
	BRS_CopyFromTarget,
	BRS_MAX,
};

// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t {
	BCS_WorldSpace,
	BCS_ComponentSpace,
	BCS_ParentBoneSpace,
	BCS_BoneSpace,
	BCS_MAX,
};

// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t {
	Begin,
	End,
	EAnimNotifyEventType_MAX,
};

// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t {
	SPATIALIZATION_Default,
	SPATIALIZATION_HRTF,
	SPATIALIZATION_MAX,
};

// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t {
	Sphere,
	Capsule,
	Box,
	Cone,
	EAttenuationShape_MAX,
};

// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t {
	SOUNDDISTANCE_Normal,
	SOUNDDISTANCE_InfiniteXYPlane,
	SOUNDDISTANCE_InfiniteXZPlane,
	SOUNDDISTANCE_InfiniteYZPlane,
	SOUNDDISTANCE_MAX,
};

// Enum Engine.ESoundDistanceModel
enum class ESoundDistanceModel : uint8_t {
	ATTENUATION_Linear,
	ATTENUATION_Logarithmic,
	ATTENUATION_Inverse,
	ATTENUATION_LogReverse,
	ATTENUATION_NaturalSound,
	ATTENUATION_Custom,
	ATTENUATION_MAX,
};

// Enum Engine.EAmbientLightClusteringPolicy
enum class EAmbientLightClusteringPolicy : uint8_t {
	OnlyLight,
	ClosePriorityLight,
	BlendableInCouple,
	NoGrouping,
	EAmbientLightClusteringPolicy_MAX,
};

// Enum Engine.EAmbientLightConeShape
enum class EAmbientLightConeShape : uint8_t {
	Sphere,
	Hemisphere,
	VeryWideCone,
	WideCone,
	NarrowishCone,
	EAmbientLightConeShape_MAX,
};

// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t {
	SLS_CapturedScene,
	SLS_SpecifiedCubemap,
	SLS_MAX,
};

// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8_t {
	OT_NumOfTriangles,
	OT_MaxDeviation,
	OT_MAX,
};

// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t {
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
enum class ENormalMode : uint8_t {
	NM_PreserveSmoothingGroups,
	NM_RecalculateNormals,
	NM_RecalculateNormalsSmooth,
	NM_RecalculateNormalsHard,
	TEMP_BROKEN,
	ENormalMode_MAX,
};

// Enum Engine.EPoseableAnimMode
enum class EPoseableAnimMode : uint8_t {
	Poseable,
	Animated,
	EPoseableAnimMode_MAX,
};

// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t {
	Point,
	Bilinear,
	Trilinear,
	AnisotropicPoint,
	AnisotropicLinear,
	ETextureSamplerFilter_MAX,
};

// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t {
	None,
	PadToPowerOfTwo,
	PadToSquarePowerOfTwo,
	PadToMultipleOfFour,
	ETexturePowerOfTwoSetting_MAX,
};

// Enum Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8_t {
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
enum class TextureGroup : uint8_t {
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
enum class ETextureSourceFormat : uint8_t {
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
enum class ETextureSourceArtType : uint8_t {
	TSAT_Uncompressed,
	TSAT_PNGCompressed,
	TSAT_DDSFile,
	TSAT_MAX,
};

// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t {
	TMC_ResidentMips,
	TMC_AllMips,
	TMC_AllMipsBiased,
	TMC_ResidentMipsUnpadded,
	TMC_MAX,
};

// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t {
	CTM_Disabled,
	CTM_NormalRoughnessToRed,
	CTM_NormalRoughnessToGreen,
	CTM_NormalRoughnessToBlue,
	CTM_NormalRoughnessToAlpha,
	CTM_MAX,
};

// Enum Engine.TextureAddress
enum class TextureAddress : uint8_t {
	TA_Wrap,
	TA_Clamp,
	TA_Mirror,
	TA_MAX,
};

// Enum Engine.TextureFilter
enum class TextureFilter : uint8_t {
	TF_Nearest,
	TF_Bilinear,
	TF_Trilinear,
	TF_Default,
	TF_MAX,
};

// Enum Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8_t {
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
enum class ESplineMeshAxis : uint8_t {
	X,
	Y,
	Z,
	ESplineMeshAxis_MAX,
};

// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t {
	EVRTA_TextTop,
	EVRTA_TextCenter,
	EVRTA_TextBottom,
	EVRTA_QuadTop,
	EVRTA_MAX,
};

// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t {
	EHTA_Left,
	EHTA_Center,
	EHTA_Right,
	EHTA_MAX,
};

// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t {
	SCS_SceneColorHDR,
	SCS_FinalColorLDR,
	SCS_MAX,
};

// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t {
	Forward,
	Backward,
	ETimelineDirection_MAX,
};

// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t {
	TL_TimelineLength,
	TL_LastKeyFrame,
	TL_MAX,
};

// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t {
	ABPT_None,
	ABPT_RefPose,
	ABPT_AnimScaled,
	ABPT_AnimFrame,
	ABPT_MAX,
};

// Enum Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8_t {
	AKF_ConstantKeyLerp,
	AKF_VariableKeyLerp,
	AKF_PerTrackCompression,
	AKF_MAX,
};

// Enum Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8_t {
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
enum class ENotifyTriggerMode : uint8_t {
	AllAnimations,
	HighestWeightedAnimation,
	None,
	ENotifyTriggerMode_MAX,
};

// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t {
	BSA_None,
	BSA_X,
	BSA_Y,
	BSA_Max,
};

// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t {
	RowFound,
	RowNotFound,
	EEvaluateCurveTableResult_MAX,
};

// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t {
	Singular,
	Plural,
	EGrammaticalNumber_MAX,
};

// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t {
	Neuter,
	Masculine,
	Feminine,
	Mixed,
	EGrammaticalGender_MAX,
};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t {
	DoNotTrace,
	TraceFullPath,
	OnlyTraceWhileAsceding,
	ESuggestProjVelocityTraceOption_MAX,
};

// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8_t {
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
enum class ERoundingMode : uint8_t {
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
enum class EBodyCollisionResponse : uint8_t {
	BodyCollision_Enabled,
	BodyCollision_Disabled,
	BodyCollision_MAX,
};

// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8_t {
	PhysType_Default,
	PhysType_Kinematic,
	PhysType_Simulated,
	PhysType_MAX,
};

// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t {
	CTF_UseDefault,
	CTF_UseSimpleAsComplex,
	CTF_UseComplexAsSimple,
	CTF_MAX,
};

// Enum Engine.ReliabilityType
enum class ReliabilityType : uint8_t {
	Reliable,
	Unreliable,
	Count,
	ReliabilityType_MAX,
};

// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t {
	ShortestSide,
	LongestSide,
	Horizontal,
	Vertical,
	Custom,
	EUIScalingRule_MAX,
};

// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t {
	Always,
	NonPointer,
	NavigationOnly,
	Never,
	ERenderFocusRule_MAX,
};

// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t {
	None,
	X,
	Y,
	Z,
	Invalid,
	ESettingsLockedAxis_MAX,
};

// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t {
	Full3D,
	YZPlane,
	XZPlane,
	XYPlane,
	ESettingsDOF_MAX,
};

// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t {
	Average,
	Min,
	Multiply,
	Max,
	EFrictionCombineMode_MAX,
};

// Enum Engine.EAntiAliasingMethodUI
enum class EAntiAliasingMethodUI : uint8_t {
	AAM_None,
	AAM_FXAA,
	AAM_TemporalAA,
	AAM_MAX,
};

// Enum Engine.EDepthSort
enum class EDepthSort : uint8_t {
	Default,
	ForcedOff,
	ForcedOn,
	EDepthSort_MAX,
};

// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t {
	None,
	OpaqueOnly,
	OpaqueAndMasked,
	Auto,
	EEarlyZPass_MAX,
};

// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t {
	Disabled,
	Enabled,
	EnabledOnDemand,
	EnabledWithStencil,
	ECustomDepthStencil_MAX,
};

// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t {
	One,
	Two,
	Four,
	Eight,
	ECompositingSampleCount_MAX,
};

// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t {
	NoClear,
	HardwareClear,
	QuadAtMaxZ,
	HardwareClearAndQuadAtMaxZ,
	EClearSceneOptions_MAX,
};

// Enum Engine.DistributionParamMode
enum class DistributionParamMode : uint8_t {
	DPM_Normal,
	DPM_Abs,
	DPM_Direct,
	DPM_MAX,
};

// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t {
	EDVMF_Same,
	EDVMF_Different,
	EDVMF_Mirror,
	EDVMF_MAX,
};

// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t {
	EDVLF_None,
	EDVLF_XY,
	EDVLF_XZ,
	EDVLF_YZ,
	EDVLF_XYZ,
	EDVLF_MAX,
};

// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t {
	CONNECT_RESPONSE_MAKE,
	CONNECT_RESPONSE_DISALLOW,
	CONNECT_RESPONSE_BREAK_OTHERS_A,
	CONNECT_RESPONSE_BREAK_OTHERS_B,
	CONNECT_RESPONSE_BREAK_OTHERS_AB,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE,
	CONNECT_RESPONSE_MAX,
};

// Enum Engine.EGraphType
enum class EGraphType : uint8_t {
	GT_Function,
	GT_Ubergraph,
	GT_Macro,
	GT_Animation,
	GT_StateMachine,
	GT_MAX,
};

// Enum Engine.EConsoleType
enum class EConsoleType : uint8_t {
	CONSOLE_Any,
	CONSOLE_Mobile,
	CONSOLE_MAX,
};

// Enum Engine.ETransitionType
enum class ETransitionType : uint8_t {
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
enum class EFullyLoadPackageType : uint8_t {
	FULLYLOAD_Map,
	FULLYLOAD_Game_PreLoadClass,
	FULLYLOAD_Game_PostLoadClass,
	FULLYLOAD_Always,
	FULLYLOAD_Mutator,
	FULLYLOAD_MAX,
};

// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8_t {
	Closed,
	Error,
	Synchronized,
	Synchronizing,
	ECustomTimeStepSynchronizationState_MAX,
};

// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t {
	FontICS_Default,
	FontICS_Ansi,
	FontICS_Symbol,
	FontICS_MAX,
};

// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t {
	Offline,
	Runtime,
	EFontCacheType_MAX,
};

// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t {
	None,
	LogicalNegateBool,
	EPostCopyOperation_MAX,
};

// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t {
	NeverAsPin,
	PinHiddenByDefault,
	PinShownByDefault,
	AlwaysAsPin,
	EPinHidingMode_MAX,
};

// Enum Engine.EHIKEffector
enum class EHIKEffector : uint8_t {
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
enum class EHIKProperty : uint8_t {
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
enum class EHIKEffectorSpace : uint8_t {
	HIKEffectorSpace_World,
	HIKEffectorSpace_Character,
	HIKEffectorSpace_MAX,
};

// Enum Engine.EHIKHandsContactType
enum class EHIKHandsContactType : uint8_t {
	HIKHandsContactType_Normal,
	HIKHandsContactType_Wrist,
	HIKHandsContactType_FingerBase,
	HIKHandsContactType_Hoof,
	HIKHandsContactType_MAX,
};

// Enum Engine.EHIKFeetContactType
enum class EHIKFeetContactType : uint8_t {
	HIKFeetContactType_Normal,
	HIKFeetContactType_Ankle,
	HIKFeetContactType_ToeBase,
	HIKFeetContactType_Hoof,
	HIKFeetContactType_MAX,
};

// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t {
	ETAC_Always,
	ETAC_GoreEnabled,
	ETAC_GoreDisabled,
	ETAC_MAX,
};

// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t {
	IMR_Keyframed,
	IMR_LookAtGroup,
	IMR_Ignore,
	IMR_MAX,
};

// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t {
	AXIS_TranslationX,
	AXIS_TranslationY,
	AXIS_TranslationZ,
	AXIS_RotationX,
	AXIS_RotationY,
	AXIS_RotationZ,
	AXIS_MAX,
};

// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t {
	ETTA_Off,
	ETTA_On,
	ETTA_Toggle,
	ETTA_Trigger,
	ETTA_MAX,
};

// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t {
	EVTC_Always,
	EVTC_GoreEnabled,
	EVTC_GoreDisabled,
	EVTC_MAX,
};

// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t {
	EVTA_Hide,
	EVTA_Show,
	EVTA_Toggle,
	EVTA_MAX,
};

// Enum Engine.EClampMode
enum class EClampMode : uint8_t {
	CMODE_Clamp,
	CMODE_ClampMin,
	CMODE_ClampMax,
	CMODE_MAX,
};

// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t {
	CMOT_Float1,
	CMOT_Float2,
	CMOT_Float3,
	CMOT_Float4,
	CMOT_MAX,
};

// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t {
	TDOF_NearAndFarMask,
	TDOF_NearMask,
	TDOF_FarMask,
	TDOF_MAX,
};

// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t {
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
enum class EIfExpressionAttribute : uint8_t {
	Default,
	Branch,
	Flatten,
	EIfExpressionAttribute_MAX,
};

// Enum Engine.EIfExpressionCondition
enum class EIfExpressionCondition : uint8_t {
	Equal,
	Greater,
	GreaterOrEqual,
	Less,
	LessOrEqual,
	EIfExpressionCondition_MAX,
};

// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t {
	NOISEFUNCTION_Simplex,
	NOISEFUNCTION_Perlin,
	NOISEFUNCTION_Gradient,
	NOISEFUNCTION_FastGradient,
	NOISEFUNCTION_MAX,
};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t {
	Coordinates,
	OffsetFraction,
	EMaterialSceneAttributeInputMode_MAX,
};

// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t {
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
enum class ESpeedTreeLODType : uint8_t {
	STLOD_Pop,
	STLOD_Smooth,
	STLOD_MAX,
};

// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t {
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
enum class ESpeedTreeGeometryType : uint8_t {
	STG_Branch,
	STG_Frond,
	STG_Leaf,
	STG_FacingLeaf,
	STG_Billboard,
	STG_MAX,
};

// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t {
	TMVM_None,
	TMVM_MipLevel,
	TMVM_MipBias,
	TMVM_Derivative,
	TMVM_MAX,
};

// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t {
	TCC_Red,
	TCC_Green,
	TCC_Blue,
	TCC_Alpha,
	TCC_MAX,
};

// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t {
	TRANSFORM_Tangent,
	TRANSFORM_Local,
	TRANSFORM_World,
	TRANSFORM_View,
	TRANSFORM_MAX,
};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t {
	TRANSFORMSOURCE_Tangent,
	TRANSFORMSOURCE_Local,
	TRANSFORMSOURCE_World,
	TRANSFORMSOURCE_View,
	TRANSFORMSOURCE_MAX,
};

// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t {
	TRANSFORMPOSSOURCE_Local,
	TRANSFORMPOSSOURCE_World,
	TRANSFORMPOSSOURCE_TranslatedWorld,
	TRANSFORMPOSSOURCE_View,
	TRANSFORMPOSSOURCE_MAX,
};

// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t {
	MEVP_BufferSize,
	MEVP_FieldOfView,
	MEVP_TanHalfFieldOfView,
	MEVP_ViewSize,
	MEVP_WorldSpaceCameraPosition,
	MEVP_MAX,
};

// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t {
	WPT_Default,
	WPT_ExcludeAllShaderOffsets,
	WPT_CameraRelative,
	WPT_CameraRelativeNoOffsets,
	WPT_MAX,
};

// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t {
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
enum class EMaterialDomain : uint8_t {
	MD_Surface,
	MD_DeferredDecal,
	MD_LightFunction,
	MD_PostProcess,
	MD_UI,
	MD_MAX,
};

// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t {
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
enum class ECanvasRenderTargetMips : uint8_t {
	Disabled,
	Enabled,
	ECanvasRenderTargetMips_MAX,
};

// Enum Engine.EResolveOperationResult
enum class EResolveOperationResult : uint8_t {
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
enum class EEmitterRenderMode : uint8_t {
	ERM_Normal,
	ERM_Point,
	ERM_Cross,
	ERM_LightsOnly,
	ERM_None,
	ERM_MAX,
};

// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t {
	PSUVIM_None,
	PSUVIM_Linear,
	PSUVIM_Linear_NoBlend,
	PSUVIM_Linear_Blend,
	PSUVIM_Random,
	PSUVIM_Random_Blend,
	PSUVIM_MAX,
};

// Enum Engine.EEmitterQuality
enum class EEmitterQuality : uint8_t {
	Low,
	Medium,
	High,
	EEmitterQuality_MAX,
};

// Enum Engine.EBurstGroup
enum class EBurstGroup : uint8_t {
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
enum class EParticleBurstMethod : uint8_t {
	EPBM_Instant,
	EPBM_Interpolated,
	EPBM_MAX,
};

// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t {
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
enum class EParticleSourceSelectionMethod : uint8_t {
	EPSSM_Random,
	EPSSM_Sequential,
	EPSSM_MAX,
};

// Enum Engine.EModuleType
enum class EModuleType : uint8_t {
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
enum class EAccelerationGroupNames : uint8_t {
	AccelerationGroupB,
	AccelerationGroupC,
	AccelerationGroupD,
	AccelerationGroupE,
	AccelerationGroupReplacement,
	AccelerationGroup_MAX,
	EAccelerationGroupNames_MAX,
};

// Enum Engine.EDragOnLocalVelocityGroupName
enum class EDragOnLocalVelocityGroupName : uint8_t {
	DragOnLocalVelocityGroupB,
	DragOnLocalVelocityGroupC,
	DragOnLocalVelocityGroupD,
	DragOnLocalVelocityGroupE,
	DragOnLocalVelocityGroupReplacement,
	DragOnLocalVelocityGroup_MAX,
	EDragOnLocalVelocityGroupName_MAX,
};

// Enum Engine.EDragCoefficientGroupName
enum class EDragCoefficientGroupName : uint8_t {
	DragCoefficientGroupB,
	DragCoefficientGroupC,
	DragCoefficientGroupD,
	DragCoefficientGroupE,
	DragCoefficientGroupReplacement,
	DragCoefficientGroup_MAX,
	EDragCoefficientGroupName_MAX,
};

// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t {
	EAPSM_Random,
	EAPSM_Sequential,
	EAPSM_MAX,
};

// Enum Engine.Beam2SourceTargetTangentMethod
enum class Beam2SourceTargetTangentMethod : uint8_t {
	PEB2STTM_Direct,
	PEB2STTM_UserSet,
	PEB2STTM_Distribution,
	PEB2STTM_Emitter,
	PEB2STTM_MAX,
};

// Enum Engine.Beam2SourceTargetMethod
enum class Beam2SourceTargetMethod : uint8_t {
	PEB2STM_Default,
	PEB2STM_UserSet,
	PEB2STM_Emitter,
	PEB2STM_Particle,
	PEB2STM_Actor,
	PEB2STM_MAX,
};

// Enum Engine.BeamModifierType
enum class BeamModifierType : uint8_t {
	PEB2MT_Source,
	PEB2MT_Target,
	PEB2MT_MAX,
};

// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t {
	EPCOUM_DirectSet,
	EPCOUM_Additive,
	EPCOUM_Scalar,
	EPCOUM_MAX,
};

// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t {
	EPCC_Kill,
	EPCC_Freeze,
	EPCC_HaltCollisions,
	EPCC_FreezeTranslation,
	EPCC_FreezeRotation,
	EPCC_FreezeMovement,
	EPCC_MAX,
};

// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t {
	Bounce,
	Stop,
	Kill,
	EParticleCollisionResponse_MAX,
};

// Enum Engine.EStartAlphaGroupsName
enum class EStartAlphaGroupsName : uint8_t {
	StartAlphaB,
	StartAlphaC,
	StartAlphaD,
	StartAlphaE,
	StartAlphaReplacement,
	StartAlpha_MAX,
	EStartAlphaGroupsName_MAX,
};

// Enum Engine.EStartColorGroupsName
enum class EStartColorGroupsName : uint8_t {
	StartColorB,
	StartColorC,
	StartColorD,
	StartColorE,
	StartColorReplacement,
	StartColor_MAX,
	EStartColorGroupsName_MAX,
};

// Enum Engine.EGPUParticleCollisionEventLimit
enum class EGPUParticleCollisionEventLimit : uint8_t {
	OnlyOnFirstCollision,
	OnlyOnFirstTwoCollisions,
	Unlimited,
	EGPUParticleCollisionEventLimit_MAX,
};

// Enum Engine.ESpawnEventGroupNames
enum class ESpawnEventGroupNames : uint8_t {
	SpawnEventGroupB,
	SpawnEventGroupC,
	SpawnEventGroupD,
	SpawnEventGroupE,
	SpawnEventGroupReplacemnent,
	SpawnEventGroup_MAX,
	ESpawnEventGroupNames_MAX,
};

// Enum Engine.EFFTWaterKillPointLocation
enum class EFFTWaterKillPointLocation : uint8_t {
	FFTWaterKillPointLocation_LowerBound,
	FFTWaterKillPointLocation_Center,
	FFTWaterKillPointLocation_UpperBound,
	FFTWaterKillPointLocation_MAX,
};

// Enum Engine.EFFTWaterKillPointGroupName
enum class EFFTWaterKillPointGroupName : uint8_t {
	FFTWaterKillPointGroupB,
	FFTWaterKillPointGroupC,
	FFTWaterKillPointGroupD,
	FFTWaterKillPointGroupE,
	FFTWaterKillPointGroupReplacement,
	FFTWaterKillPointGroup_MAX,
	EFFTWaterKillPointGroupName_MAX,
};

// Enum Engine.ELifetimeGroupsName
enum class ELifetimeGroupsName : uint8_t {
	LifetimeB,
	LifetimeC,
	LifetimeD,
	LifetimeE,
	LifetimeReplacement,
	Lifetime_MAX,
	ELifetimeGroupsName_MAX,
};

// Enum Engine.EStartLocationGroupNames
enum class EStartLocationGroupNames : uint8_t {
	StartLocationGroupB,
	StartLocationGroupC,
	StartLocationGroupD,
	StartLocationGroupE,
	StartLocationGroup_MAX,
	EStartLocationGroupNames_MAX,
};

// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t {
	BONESOCKETSEL_Sequential,
	BONESOCKETSEL_Random,
	BONESOCKETSEL_MAX,
};

// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t {
	BONESOCKETSOURCE_Bones,
	BONESOCKETSOURCE_Sockets,
	BONESOCKETSOURCE_MAX,
};

// Enum Engine.EMissingParentParticlesBehaviour
enum class EMissingParentParticlesBehaviour : uint8_t {
	SpawnFromEmitterLocation,
	PreventSpawning,
	EMissingParentParticlesBehaviour_MAX,
};

// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t {
	ELESM_Random,
	ELESM_Sequential,
	ELESM_MAX,
};

// Enum Engine.EStartLocationGPUGroupNames
enum class EStartLocationGPUGroupNames : uint8_t {
	StartLocationGPUGroupB,
	StartLocationGPUGroupC,
	StartLocationGPUGroupD,
	StartLocationGPUGroupE,
	StartLocationGPUGroupReplacement,
	StartLocationGPUGroup_MAX,
	EStartLocationGPUGroupNames_MAX,
};

// Enum Engine.ESpawnLocationValueSemantic
enum class ESpawnLocationValueSemantic : uint8_t {
	Absolute,
	Additive,
	ESpawnLocationValueSemantic_MAX,
};

// Enum Engine.ESpawnLocationValueSemanticGPUGroupNames
enum class ESpawnLocationValueSemanticGPUGroupNames : uint8_t {
	SpawnLocationValueSemanticGPUGroupB,
	SpawnLocationValueSemanticGPUGroupC,
	SpawnLocationValueSemanticGPUGroupD,
	SpawnLocationValueSemanticGPUGroupE,
	SpawnLocationValueSemanticGPUGroupReplacement,
	SpawnLocationValueSemanticGPUGroup_MAX,
	ESpawnLocationValueSemanticGPUGroupNames_MAX,
};

// Enum Engine.EStartHeightGroupNames
enum class EStartHeightGroupNames : uint8_t {
	StartHeightGroupB,
	StartHeightGroupC,
	StartHeightGroupD,
	StartHeightGroupE,
	StartHeightGroup_MAX,
	EStartHeightGroupNames_MAX,
};

// Enum Engine.EStartRadiusGroupNames
enum class EStartRadiusGroupNames : uint8_t {
	StartRadiusGroupB,
	StartRadiusGroupC,
	StartRadiusGroupD,
	StartRadiusGroupE,
	StartRadiusGroup_MAX,
	EStartRadiusGroupNames_MAX,
};

// Enum Engine.EAngleRangeGroupNames
enum class EAngleRangeGroupNames : uint8_t {
	AngleRangeGroupB,
	AngleRangeGroupC,
	AngleRangeGroupD,
	AngleRangeGroupE,
	AngleRangeGroup_MAX,
	EAngleRangeGroupNames_MAX,
};

// Enum Engine.CylinderHeightAxis
enum class CylinderHeightAxis : uint8_t {
	PMLPC_HEIGHTAXIS_X,
	PMLPC_HEIGHTAXIS_Y,
	PMLPC_HEIGHTAXIS_Z,
	PMLPC_HEIGHTAXIS_MAX,
};

// Enum Engine.EVelocityScaleGroupNames
enum class EVelocityScaleGroupNames : uint8_t {
	VelocityScaleGroupB,
	VelocityScaleGroupC,
	VelocityScaleGroupD,
	VelocityScaleGroupE,
	VelocityScaleGroup_MAX,
	EVelocityScaleGroupNames_MAX,
};

// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t {
	VERTSURFACESOURCE_Vert,
	VERTSURFACESOURCE_Surface,
	VERTSURFACESOURCE_MAX,
};

// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t {
	EOChainMode_Add,
	EOChainMode_Scale,
	EOChainMode_Link,
	EOChainMode_MAX,
};

// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t {
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
enum class EEmitterDynamicParameterValue : uint8_t {
	EDPV_UserSet,
	EDPV_VelocityX,
	EDPV_VelocityY,
	EDPV_VelocityZ,
	EDPV_VelocityMag,
	EDPV_MAX,
};

// Enum Engine.EGroupScales
enum class EGroupScales : uint8_t {
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
enum class EOpacitySourceMode : uint8_t {
	OSM_Alpha,
	OSM_ColorBrightness,
	OSM_RedChannel,
	OSM_GreenChannel,
	OSM_BlueChannel,
	OSM_MAX,
};

// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t {
	BVC_FourVertices,
	BVC_EightVertices,
	BVC_MAX,
};

// Enum Engine.EPriorityGroups
enum class EPriorityGroups : uint8_t {
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
enum class EScreenAlignmentGroupNames : uint8_t {
	ScreenAlignmentGroupB,
	ScreenAlignmentGroupC,
	ScreenAlignmentGroupD,
	ScreenAlignmentGroupE,
	ScreenAlignmentGroupReplacement,
	ScreenAlignmentGroup_MAX,
	EScreenAlignmentGroupNames_MAX,
};

// Enum Engine.EEmitterOriginGroupNames
enum class EEmitterOriginGroupNames : uint8_t {
	EmitterOriginGroupB,
	EmitterOriginGroupC,
	EmitterOriginGroupD,
	EmitterOriginGroupE,
	EmitterOriginGroupReplacement,
	EmitterOriginGroup_MAX,
	EEmitterOriginGroupNames_MAX,
};

// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t {
	ENM_CameraFacing,
	ENM_Spherical,
	ENM_Cylindrical,
	ENM_MAX,
};

// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t {
	PSORTMODE_None,
	PSORTMODE_ViewProjDepth,
	PSORTMODE_DistanceToView,
	PSORTMODE_Age_OldestFirst,
	PSORTMODE_Age_NewestFirst,
	PSORTMODE_MAX,
};

// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t {
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
enum class ERotationAboutArbitraryAxisGroupName : uint8_t {
	RotationAboutArbitraryAxisGroupB,
	RotationAboutArbitraryAxisGroupC,
	RotationAboutArbitraryAxisGroupD,
	RotationAboutArbitraryAxisGroupE,
	RotationAboutArbitraryAxisGroupReplacement,
	RotationAboutArbitraryAxisGroup_MAX,
	ERotationAboutArbitraryAxisGroupName_MAX,
};

// Enum Engine.EStartRotationGroupNames
enum class EStartRotationGroupNames : uint8_t {
	StartRotationGroupB,
	StartRotationGroupC,
	StartRotationGroupD,
	StartRotationGroupE,
	StartRotationGroupReplacement,
	StartRotationGroup_MAX,
	EStartRotationGroupNames_MAX,
};

// Enum Engine.EStartRotationRateGroupNames
enum class EStartRotationRateGroupNames : uint8_t {
	StartRotationRateGroupB,
	StartRotationRateGroupC,
	StartRotationRateGroupD,
	StartRotationRateGroupE,
	StartRotationRateGroupReplacement,
	StartRotationRateGroup_MAX,
	EStartRotationRateGroupNames_MAX,
};

// Enum Engine.EStartSizeGroupNames
enum class EStartSizeGroupNames : uint8_t {
	StartSizeB,
	StartSizeC,
	StartSizeD,
	StartSizeE,
	StartSizeReplacement,
	StartSize_MAX,
	EStartSizeGroupNames_MAX,
};

// Enum Engine.ERateGroupNames
enum class ERateGroupNames : uint8_t {
	RateB,
	RateC,
	RateD,
	RateE,
	RateReplacement,
	Rate_MAX,
	ERateGroupNames_MAX,
};

// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t {
	PET2SRCM_Default,
	PET2SRCM_Particle,
	PET2SRCM_Actor,
	PET2SRCM_MAX,
};

// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t {
	PEBTM_None,
	PEBTM_Full,
	PEBTM_Partial,
	PEBTM_MAX,
};

// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8_t {
	PEB2M_Distance,
	PEB2M_Target,
	PEB2M_Branch,
	PEB2M_MAX,
};

// Enum Engine.EKillPlaneKillPointLocation
enum class EKillPlaneKillPointLocation : uint8_t {
	KillPlaneKillPointLocation_LowerBound,
	KillPlaneKillPointLocation_Center,
	KillPlaneKillPointLocation_UpperBound,
	KillPlaneKillPointLocation_MAX,
};

// Enum Engine.EInteractionWithKillPlane
enum class EInteractionWithKillPlane : uint8_t {
	None,
	KillOnFrontOfPlanes,
	KillOnBackOfPlanes,
	CollideWithFront,
	KillOnIntersectionPlanes,
	EInteractionWithKillPlane_MAX,
};

// Enum Engine.EParticleAlphaThresholdLevel
enum class EParticleAlphaThresholdLevel : uint8_t {
	NoCulling,
	Permissive,
	Mild,
	MildAggressive,
	Aggressive,
	EParticleAlphaThresholdLevel_MAX,
};

// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t {
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
enum class EMeshCameraFacingUpAxis : uint8_t {
	CameraFacing_NoneUP,
	CameraFacing_ZUp,
	CameraFacing_NegativeZUp,
	CameraFacing_YUp,
	CameraFacing_NegativeYUp,
	CameraFacing_MAX,
};

// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t {
	PSMA_MeshFaceCameraWithRoll,
	PSMA_MeshFaceCameraWithSpin,
	PSMA_MeshFaceCameraWithLockedAxis,
	PSMA_MAX,
};

// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t {
	Trails_CameraUp,
	Trails_SourceUp,
	Trails_WorldUp,
	Trails_MAX,
};

// Enum Engine.EStartVelocityGroupsName
enum class EStartVelocityGroupsName : uint8_t {
	StartVelocityB,
	StartVelocityC,
	StartVelocityD,
	StartVelocityE,
	StartVelocityReplacemnent,
	StartVelocity_MAX,
	EStartVelocityGroupsName_MAX,
};

// Enum Engine.EVelocityConeGroupNames
enum class EVelocityConeGroupNames : uint8_t {
	VelocityConeGroupB,
	VelocityConeGroupC,
	VelocityConeGroupD,
	VelocityConeGroupE,
	VelocityConeGroupReplacemnent,
	VelocityConeGroup_MAX,
	EVelocityConeGroupNames_MAX,
};

// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t {
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
enum class EAdManagerDelegate : uint8_t {
	AMD_ClickedBanner,
	AMD_UserClosedAd,
	AMD_MAX,
};

// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t {
	MTR_Succeeded,
	MTR_Failed,
	MTR_Canceled,
	MTR_RestoredFromServer,
	MTR_MAX,
};

// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t {
	MTD_PurchaseQueryComplete,
	MTD_PurchaseComplete,
	MTD_MAX,
};

// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t {
	TID_AuthorizeComplete,
	TID_TweetUIComplete,
	TID_RequestComplete,
	TID_MAX,
};

// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t {
	TRM_Get,
	TRM_Post,
	TRM_Delete,
	TRM_MAX,
};

// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t {
	Line,
	Dash,
	EReporterLineStyle_MAX,
};

// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t {
	Outside,
	Inside,
	ELegendPosition_MAX,
};

// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t {
	Lines,
	Filled,
	EGraphDataStyle_MAX,
};

// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t {
	Lines,
	Notches,
	Grid,
	EGraphAxisStyle_MAX,
};

// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t {
	Absolute,
	Relative,
	EConstraintTransform_MAX,
};

// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8_t {
	Orientation,
	Translation,
	Max,
	EControlConstraint_MAX,
};

// Enum Engine.EImpactDamageOverride
enum class EImpactDamageOverride : uint8_t {
	IDO_None,
	IDO_On,
	IDO_Off,
	IDO_MAX,
};

// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t {
	PreventNew,
	StopOldest,
	StopFarthestThenPreventNew,
	StopFarthestThenOldest,
	EMaxConcurrentResolutionRule_MAX,
};

// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8_t {
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
enum class EDecompressionType : uint8_t {
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
enum class EAudioOutputTarget : uint8_t {
	Speaker,
	Controller,
	ControllerFallbackToSpeaker,
	EAudioOutputTarget_MAX,
};

// Enum Engine.ModulationParamMode
enum class ModulationParamMode : uint8_t {
	MPM_Normal,
	MPM_Abs,
	MPM_Direct,
	MPM_MAX,
};

// Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8_t {
	Closed,
	Error,
	Synchronized,
	Synchronizing,
	ETimecodeProviderSynchronizationState_MAX,
};

// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t {
	UDSS_UpToDate,
	UDSS_Dirty,
	UDSS_Error,
	UDSS_Duplicate,
	UDSS_MAX,
};

// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t {
	VFCO_Extrude,
	VFCO_Revolve,
	VFCO_MAX,
};

// Enum Engine.EHIKLookAtInterpolation
enum class EHIKLookAtInterpolation : uint8_t {
	EHIKLookAtInterpolation_Constant,
	EHIKLookAtInterpolation_EaseOut,
	EHIKLookAtInterpolation_MAX,
};

// Enum Engine.EHIKLookAtLimits
enum class EHIKLookAtLimits : uint8_t {
	EHIKLookAtLimits_None,
	EHIKLookAtLimits_Clamp,
	EHIKLookAtLimits_Disable,
	EHIKLookAtLimits_MAX,
};

// Enum Engine.ERefPoseType
enum class ERefPoseType : uint8_t {
	EIT_LocalSpace,
	EIT_Additive,
	EIT_MAX,
};

// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t {
	EM_Standard,
	EM_Freeze,
	EM_DelayedFreeze,
	EM_MAX,
};

// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t {
	EDS_SourcePose,
	EDS_DestinationPose,
	EDS_MAX,
};

// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t {
	CABM_Linear,
	CABM_Cubic,
	CABM_MAX,
};

// Enum Engine.EChannelDormancy
enum class EChannelDormancy : uint8_t {
	Awake,
	PendingDormant,
	Dormant,
	EChannelDormancy_MAX,
};

// Enum Engine.EActorChannelState
enum class EActorChannelState : uint8_t {
	NoChannel,
	ChannelCreated,
	SpawnAcked,
	EActorChannelState_MAX,
};

// Enum Engine.EShippingStatCategory
enum class EShippingStatCategory : uint8_t {
	FrameSegment,
	Game,
	Engine,
	Blueprint,
	EShippingStatCategory_MAX,
};

// ScriptStruct Engine.DistributionLookupTable
// Size: 0x28 (Inherited: 0x00)
struct FDistributionLookupTable {
	char Op; // 0x00(0x01)
	char EntryCount; // 0x01(0x01)
	char EntryStride; // 0x02(0x01)
	char SubEntryStride; // 0x03(0x01)
	float TimeScale; // 0x04(0x04)
	float TimeBias; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<float> Values; // 0x10(0x10)
	char LockFlag; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.RawDistribution
// Size: 0x28 (Inherited: 0x00)
struct FRawDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.FloatDistribution
// Size: 0x28 (Inherited: 0x00)
struct FFloatDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.VectorDistribution
// Size: 0x28 (Inherited: 0x00)
struct FVectorDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.Vector4Distribution
// Size: 0x28 (Inherited: 0x00)
struct FVector4Distribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.ExpressionInput
// Size: 0x38 (Inherited: 0x00)
struct FExpressionInput {
	struct UMaterialExpression* Expression; // 0x00(0x08)
	int32_t OutputIndex; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString InputName; // 0x10(0x10)
	int32_t Mask; // 0x20(0x04)
	int32_t MaskR; // 0x24(0x04)
	int32_t MaskG; // 0x28(0x04)
	int32_t MaskB; // 0x2c(0x04)
	int32_t MaskA; // 0x30(0x04)
	int32_t GCC64_Padding; // 0x34(0x04)
};

// ScriptStruct Engine.MaterialAttributesInput
// Size: 0x38 (Inherited: 0x38)
struct FMaterialAttributesInput : FExpressionInput {
};

// ScriptStruct Engine.ExpressionOutput
// Size: 0x28 (Inherited: 0x00)
struct FExpressionOutput {
	struct FString OutputName; // 0x00(0x10)
	int32_t Mask; // 0x10(0x04)
	int32_t MaskR; // 0x14(0x04)
	int32_t MaskG; // 0x18(0x04)
	int32_t MaskB; // 0x1c(0x04)
	int32_t MaskA; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.MaterialInput
// Size: 0x38 (Inherited: 0x00)
struct FMaterialInput {
	struct UMaterialExpression* Expression; // 0x00(0x08)
	int32_t OutputIndex; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString InputName; // 0x10(0x10)
	int32_t Mask; // 0x20(0x04)
	int32_t MaskR; // 0x24(0x04)
	int32_t MaskG; // 0x28(0x04)
	int32_t MaskB; // 0x2c(0x04)
	int32_t MaskA; // 0x30(0x04)
	int32_t GCC64_Padding; // 0x34(0x04)
};

// ScriptStruct Engine.ColorMaterialInput
// Size: 0x40 (Inherited: 0x38)
struct FColorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	struct FColor Constant; // 0x3c(0x04)
};

// ScriptStruct Engine.ScalarMaterialInput
// Size: 0x40 (Inherited: 0x38)
struct FScalarMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	float Constant; // 0x3c(0x04)
};

// ScriptStruct Engine.VectorMaterialInput
// Size: 0x48 (Inherited: 0x38)
struct FVectorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	struct FVector Constant; // 0x3c(0x0c)
};

// ScriptStruct Engine.Vector2MaterialInput
// Size: 0x48 (Inherited: 0x38)
struct FVector2MaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	float ConstantX; // 0x3c(0x04)
	float ConstantY; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Engine.HitResult
// Size: 0x80 (Inherited: 0x00)
struct FHitResult {
	char bBlockingHit : 1; // 0x00(0x01)
	char bStartPenetrating : 1; // 0x00(0x01)
	char UnknownData_0_2 : 6; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float Time; // 0x04(0x04)
	float Distance; // 0x08(0x04)
	struct FVector_NetQuantize Location; // 0x0c(0x0c)
	struct FVector_NetQuantize ImpactPoint; // 0x18(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x24(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x30(0x0c)
	struct FVector_NetQuantize TraceStart; // 0x3c(0x0c)
	struct FVector_NetQuantize TraceEnd; // 0x48(0x0c)
	float PenetrationDepth; // 0x54(0x04)
	int32_t Item; // 0x58(0x04)
	struct UPhysicalMaterial* PhysMaterial; // 0x5c(0x08)
	struct AActor* Actor; // 0x64(0x08)
	struct UPrimitiveComponent* Component; // 0x6c(0x08)
	struct FName BoneName; // 0x74(0x08)
	int32_t FaceIndex; // 0x7c(0x04)
};

// ScriptStruct Engine.Vector_NetQuantize
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize : FVector {
};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantizeNormal : FVector {
};

// ScriptStruct Engine.ActorPtr
// Size: 0x08 (Inherited: 0x00)
struct FActorPtr {
	struct AActor* Actor; // 0x00(0x08)
};

// ScriptStruct Engine.RepAttachment
// Size: 0x48 (Inherited: 0x00)
struct FRepAttachment {
	struct AActor* AttachParent; // 0x00(0x08)
	struct FVector_NetQuantize100 LocationOffset; // 0x08(0x0c)
	struct FVector_NetQuantize100 RelativeScale3D; // 0x14(0x0c)
	struct FRotator RotationOffset; // 0x20(0x0c)
	struct FName AttachSocket; // 0x2c(0x08)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct USceneComponent* AttachComponent; // 0x38(0x08)
	char UnknownData_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Engine.Vector_NetQuantize100
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize100 : FVector {
};

// ScriptStruct Engine.RepMovement
// Size: 0x38 (Inherited: 0x00)
struct FRepMovement {
	struct FVector LinearVelocity; // 0x00(0x0c)
	struct FVector AngularVelocity; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)
	char bSimulatedPhysicSleep : 1; // 0x30(0x01)
	char bRepPhysics : 1; // 0x30(0x01)
	char UnknownData_30_2 : 6; // 0x30(0x01)
	char LocationQuantizationLevel; // 0x31(0x01)
	char VelocityQuantizationLevel; // 0x32(0x01)
	char RotationQuantizationLevel; // 0x33(0x01)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Engine.ActorTickFunction
// Size: 0x50 (Inherited: 0x48)
struct FActorTickFunction : FTickFunction {
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Engine.TickFunction
// Size: 0x48 (Inherited: 0x00)
struct FTickFunction {
	char UnknownData_0[0x30]; // 0x00(0x30)
	char TickGroup; // 0x30(0x01)
	char UnknownData_31[0x1]; // 0x31(0x01)
	char bTickEvenWhenPaused : 1; // 0x32(0x01)
	char bCanEverTick : 1; // 0x32(0x01)
	char bStartWithTickEnabled : 1; // 0x32(0x01)
	char bAllowTickOnDedicatedServer : 1; // 0x32(0x01)
	char UnknownData_32_4 : 4; // 0x32(0x01)
	char UnknownData_33[0xd]; // 0x33(0x0d)
	float TickInterval; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Engine.SimpleMemberReference
// Size: 0x20 (Inherited: 0x00)
struct FSimpleMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FName MemberName; // 0x08(0x08)
	struct FGuid MemberGuid; // 0x10(0x10)
};

// ScriptStruct Engine.ActorComponentTickFunction
// Size: 0x50 (Inherited: 0x48)
struct FActorComponentTickFunction : FTickFunction {
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Engine.SubtitleCue
// Size: 0x40 (Inherited: 0x00)
struct FSubtitleCue {
	struct FText Text; // 0x00(0x38)
	float Time; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Engine.InterpControlPoint
// Size: 0x1c (Inherited: 0x00)
struct FInterpControlPoint {
	struct FVector PositionControlPoint; // 0x00(0x0c)
	bool bPositionIsRelative; // 0x0c(0x01)
	char UnknownData_D[0xf]; // 0x0d(0x0f)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// Size: 0x38 (Inherited: 0x00)
struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FPlatformInterfaceData Data; // 0x08(0x30)
};

// ScriptStruct Engine.PlatformInterfaceData
// Size: 0x30 (Inherited: 0x00)
struct FPlatformInterfaceData {
	struct FName DataName; // 0x00(0x08)
	char Type; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	int32_t IntValue; // 0x0c(0x04)
	float FloatValue; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString StringValue; // 0x18(0x10)
	struct UObject* ObjectValue; // 0x28(0x08)
};

// ScriptStruct Engine.DebugFloatHistory
// Size: 0x20 (Inherited: 0x00)
struct FDebugFloatHistory {
	struct TArray<float> Samples; // 0x00(0x10)
	float MaxSamples; // 0x10(0x04)
	float MinValue; // 0x14(0x04)
	float MaxValue; // 0x18(0x04)
	bool bAutoAdjustMinMax; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.LatentActionInfo
// Size: 0x18 (Inherited: 0x00)
struct FLatentActionInfo {
	int32_t Linkage; // 0x00(0x04)
	int32_t UUID; // 0x04(0x04)
	struct FName ExecutionFunction; // 0x08(0x08)
	struct UObject* CallbackTarget; // 0x10(0x08)
};

// ScriptStruct Engine.TimerHandle
// Size: 0x04 (Inherited: 0x00)
struct FTimerHandle {
	char UnknownData_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Engine.CollisionProfileName
// Size: 0x08 (Inherited: 0x00)
struct FCollisionProfileName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Engine.GenericStruct
// Size: 0x04 (Inherited: 0x00)
struct FGenericStruct {
	int32_t Data; // 0x00(0x04)
};

// ScriptStruct Engine.FastArraySerializerItem
// Size: 0x08 (Inherited: 0x00)
struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x00(0x04)
	int32_t ReplicationKey; // 0x04(0x04)
};

// ScriptStruct Engine.FastArraySerializer
// Size: 0xa8 (Inherited: 0x00)
struct FFastArraySerializer {
	char UnknownData_0[0xa8]; // 0x00(0xa8)
};

// ScriptStruct Engine.OverlapInfo
// Size: 0x84 (Inherited: 0x00)
struct FOverlapInfo {
	char UnknownData_0[0x84]; // 0x00(0x84)
};

// ScriptStruct Engine.WalkableSlopeOverride
// Size: 0x08 (Inherited: 0x00)
struct FWalkableSlopeOverride {
	char WalkableSlopeBehavior; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float WalkableSlopeAngle; // 0x04(0x04)
};

// ScriptStruct Engine.PrimitiveComponentPostPhysicsTickFunction
// Size: 0x50 (Inherited: 0x48)
struct FPrimitiveComponentPostPhysicsTickFunction : FTickFunction {
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Engine.BodyInstance
// Size: 0x180 (Inherited: 0x00)
struct FBodyInstance {
	char UnknownData_0[0x4]; // 0x00(0x04)
	struct FVector Scale3D; // 0x04(0x0c)
	char UnknownData_10[0x4]; // 0x10(0x04)
	struct FName CollisionProfileName; // 0x14(0x08)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FCollisionResponse CollisionResponses; // 0x20(0x30)
	char bUseCCD : 1; // 0x50(0x01)
	char bNotifyRigidBodyCollision : 1; // 0x50(0x01)
	char bSimulatePhysics : 1; // 0x50(0x01)
	char bOverrideMass : 1; // 0x50(0x01)
	char bOverrideMassProperties : 1; // 0x50(0x01)
	char bEnableGravity : 1; // 0x50(0x01)
	char bAutoWeld : 1; // 0x50(0x01)
	char bStartAwake : 1; // 0x51(0x01)
	char bGenerateWakeEvents : 1; // 0x51(0x01)
	char bUpdateMassWhenScaleChanges : 1; // 0x51(0x01)
	char bLockTranslation : 1; // 0x51(0x01)
	char bLockRotation : 1; // 0x51(0x01)
	char bLockXTranslation : 1; // 0x51(0x01)
	char bLockYTranslation : 1; // 0x51(0x01)
	char bLockZTranslation : 1; // 0x51(0x01)
	char bLockXRotation : 1; // 0x52(0x01)
	char bLockYRotation : 1; // 0x52(0x01)
	char bLockZRotation : 1; // 0x52(0x01)
	char bOverrideMaxAngularVelocity : 1; // 0x52(0x01)
	char UnknownData_52_4 : 1; // 0x52(0x01)
	char bUseAsyncScene : 1; // 0x52(0x01)
	char bOverrideMaxDepenetrationVelocity : 1; // 0x52(0x01)
	char bOverrideWalkableSlopeOnInstance : 1; // 0x52(0x01)
	char UnknownData_53[0x1]; // 0x53(0x01)
	float MaxDepenetrationVelocity; // 0x54(0x04)
	float MassInKg; // 0x58(0x04)
	struct FMassPropertiesOverride MassPropertiesOverride; // 0x5c(0x24)
	float LinearDamping; // 0x80(0x04)
	float AngularDamping; // 0x84(0x04)
	struct FVector COMNudge; // 0x88(0x0c)
	float MassScale; // 0x94(0x04)
	char UnknownData_98[0x10]; // 0x98(0x10)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0xa8(0x08)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0xb0(0x08)
	float MaxAngularVelocity; // 0xb8(0x04)
	float CustomSleepThresholdMultiplier; // 0xbc(0x04)
	float PhysicsBlendWeight; // 0xc0(0x04)
	int32_t PositionSolverIterationCount; // 0xc4(0x04)
	char DominanceGroup; // 0xc8(0x01)
	char UnknownData_C9[0x37]; // 0xc9(0x37)
	uint64_t RigidActorSyncId; // 0x100(0x08)
	uint64_t RigidActorAsyncId; // 0x108(0x08)
	int32_t VelocitySolverIterationCount; // 0x110(0x04)
	char UnknownData_114[0x68]; // 0x114(0x68)
	char SleepFamily; // 0x17c(0x01)
	char DOFMode; // 0x17d(0x01)
	char CollisionEnabled; // 0x17e(0x01)
	char ObjectType; // 0x17f(0x01)
};

// ScriptStruct Engine.MassPropertiesOverride
// Size: 0x24 (Inherited: 0x00)
struct FMassPropertiesOverride {
	struct FVector InertiaTensorOverride; // 0x00(0x0c)
	struct FVector COMTranslationOverride; // 0x0c(0x0c)
	struct FRotator COMRotatorOverride; // 0x18(0x0c)
};

// ScriptStruct Engine.CollisionResponse
// Size: 0x30 (Inherited: 0x00)
struct FCollisionResponse {
	struct FCollisionResponseContainer ResponseToChannels; // 0x00(0x20)
	struct TArray<struct FResponseChannel> ResponseArray; // 0x20(0x10)
};

// ScriptStruct Engine.ResponseChannel
// Size: 0x0c (Inherited: 0x00)
struct FResponseChannel {
	struct FName Channel; // 0x00(0x08)
	char Response; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.CollisionResponseContainer
// Size: 0x20 (Inherited: 0x00)
struct FCollisionResponseContainer {
	char WorldStatic; // 0x00(0x01)
	char WorldDynamic; // 0x01(0x01)
	char Pawn; // 0x02(0x01)
	char Visibility; // 0x03(0x01)
	char Camera; // 0x04(0x01)
	char PhysicsBody; // 0x05(0x01)
	char Vehicle; // 0x06(0x01)
	char Destructible; // 0x07(0x01)
	char EngineTraceChannel1; // 0x08(0x01)
	char EngineTraceChannel2; // 0x09(0x01)
	char EngineTraceChannel3; // 0x0a(0x01)
	char EngineTraceChannel4; // 0x0b(0x01)
	char EngineTraceChannel5; // 0x0c(0x01)
	char EngineTraceChannel6; // 0x0d(0x01)
	char GameTraceChannel1; // 0x0e(0x01)
	char GameTraceChannel2; // 0x0f(0x01)
	char GameTraceChannel3; // 0x10(0x01)
	char GameTraceChannel4; // 0x11(0x01)
	char GameTraceChannel5; // 0x12(0x01)
	char GameTraceChannel6; // 0x13(0x01)
	char GameTraceChannel7; // 0x14(0x01)
	char GameTraceChannel8; // 0x15(0x01)
	char GameTraceChannel9; // 0x16(0x01)
	char GameTraceChannel10; // 0x17(0x01)
	char GameTraceChannel11; // 0x18(0x01)
	char GameTraceChannel12; // 0x19(0x01)
	char GameTraceChannel13; // 0x1a(0x01)
	char GameTraceChannel14; // 0x1b(0x01)
	char GameTraceChannel15; // 0x1c(0x01)
	char GameTraceChannel16; // 0x1d(0x01)
	char GameTraceChannel17; // 0x1e(0x01)
	char GameTraceChannel18; // 0x1f(0x01)
};

// ScriptStruct Engine.CustomPrimitiveData
// Size: 0x10 (Inherited: 0x00)
struct FCustomPrimitiveData {
	struct TArray<float> Data; // 0x00(0x10)
};

// ScriptStruct Engine.RuntimeFloatCurve
// Size: 0x80 (Inherited: 0x00)
struct FRuntimeFloatCurve {
	struct FRichCurve EditorCurveData; // 0x00(0x78)
	struct UCurveFloat* ExternalCurve; // 0x78(0x08)
};

// ScriptStruct Engine.RichCurve
// Size: 0x78 (Inherited: 0x58)
struct FRichCurve : FIndexedCurve {
	char PreInfinityExtrap; // 0x58(0x01)
	char PostInfinityExtrap; // 0x59(0x01)
	char UnknownData_5A[0x6]; // 0x5a(0x06)
	struct TArray<struct FRichCurveKey> Keys; // 0x60(0x10)
	float DefaultValue; // 0x70(0x04)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Engine.IndexedCurve
// Size: 0x58 (Inherited: 0x00)
struct FIndexedCurve {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FKeyHandleMap KeyHandlesToIndices; // 0x08(0x50)
};

// ScriptStruct Engine.KeyHandleMap
// Size: 0x50 (Inherited: 0x00)
struct FKeyHandleMap {
	char UnknownData_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.RichCurveKey
// Size: 0x1c (Inherited: 0x00)
struct FRichCurveKey {
	char InterpMode; // 0x00(0x01)
	char TangentMode; // 0x01(0x01)
	char TangentWeightMode; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	float Time; // 0x04(0x04)
	float Value; // 0x08(0x04)
	float ArriveTangent; // 0x0c(0x04)
	float ArriveTangentWeight; // 0x10(0x04)
	float LeaveTangent; // 0x14(0x04)
	float LeaveTangentWeight; // 0x18(0x04)
};

// ScriptStruct Engine.FeatureFlag
// Size: 0x0c (Inherited: 0x00)
struct FFeatureFlag {
	struct FName FeatureName; // 0x00(0x08)
	bool InverseToggle; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.NetActorPtr
// Size: 0x14 (Inherited: 0x00)
struct FNetActorPtr {
	struct FNetObjectPtr ObjectPtr; // 0x00(0x14)
};

// ScriptStruct Engine.NetObjectPtr
// Size: 0x14 (Inherited: 0x00)
struct FNetObjectPtr {
	char UnknownData_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Engine.PacketDiscardStats
// Size: 0x20 (Inherited: 0x00)
struct FPacketDiscardStats {
	int32_t DiscardCounts[0x07]; // 0x00(0x1c)
	int32_t BytesDiscarded; // 0x1c(0x04)
};

// ScriptStruct Engine.UniqueNetIdRepl
// Size: 0x18 (Inherited: 0x00)
struct FUniqueNetIdRepl {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.RainPostProcessSettings
// Size: 0xc0 (Inherited: 0x00)
struct FRainPostProcessSettings {
	char bOverride_RainParticleTexture : 1; // 0x00(0x01)
	char bOverride_RainMeshTexture : 1; // 0x00(0x01)
	char bOverride_RainIntensity : 1; // 0x00(0x01)
	char bOverride_RainParticleAlpha : 1; // 0x00(0x01)
	char bOverride_RainCloseParticleAlphaReductionMultiplier : 1; // 0x00(0x01)
	char bOverride_RainCloseParticleAlphaDistance : 1; // 0x00(0x01)
	char bOverride_RainParticleDensity : 1; // 0x00(0x01)
	char bOverride_RainParticleSpeed : 1; // 0x00(0x01)
	char bOverride_RainParticleWindVelocity : 1; // 0x01(0x01)
	char bOverride_RainParticleWidth : 1; // 0x01(0x01)
	char bOverride_RainParticleLength : 1; // 0x01(0x01)
	char bOverride_RainMeshScale : 1; // 0x01(0x01)
	char bOverride_RainMeshTextureScroll : 1; // 0x01(0x01)
	char bOverride_RainMeshTextureTiling : 1; // 0x01(0x01)
	char bOverride_RainMeshAlpha : 1; // 0x01(0x01)
	char bOverride_RainMeshRowDivision : 1; // 0x01(0x01)
	char bOverride_RainMeshColumnDivision : 1; // 0x02(0x01)
	char bOverride_RainMeshBrightness : 1; // 0x02(0x01)
	char bOverride_RainBrightness : 1; // 0x02(0x01)
	char bOverride_RainTint : 1; // 0x02(0x01)
	char bOverride_RainMeshEndRadiusScale : 1; // 0x02(0x01)
	char bOverride_RainMeshEndAlphaFade : 1; // 0x02(0x01)
	char bOverride_RainMeshFadeDistance : 1; // 0x02(0x01)
	char bOverride_RainAnimationFrameTime : 1; // 0x02(0x01)
	char bOverride_RainSplashesPerSecond : 1; // 0x03(0x01)
	char bOverride_RainSplashesPerSquareMetre : 1; // 0x03(0x01)
	char bOverride_RainSplashesMaxPlacementAngle : 1; // 0x03(0x01)
	char bOverride_RainSplashData : 1; // 0x03(0x01)
	char bOverride_RainSplashesMaxDistance1 : 1; // 0x03(0x01)
	char bOverride_RainSplashData2 : 1; // 0x03(0x01)
	char bOverride_RainSplashesMaxDistance2 : 1; // 0x03(0x01)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UTexture* RainParticleTexture; // 0x08(0x08)
	struct UTexture* RainMeshTexture; // 0x10(0x08)
	float RainIntensity; // 0x18(0x04)
	float RainParticleAlpha; // 0x1c(0x04)
	float RainCloseParticleAlphaReductionMultiplier; // 0x20(0x04)
	float RainCloseParticleAlphaDistance; // 0x24(0x04)
	float RainParticleDensity; // 0x28(0x04)
	float RainParticleSpeed; // 0x2c(0x04)
	struct FVector RainParticleWindVelocity; // 0x30(0x0c)
	float RainParticleWidth; // 0x3c(0x04)
	float RainParticleLength; // 0x40(0x04)
	struct FVector RainMeshScale; // 0x44(0x0c)
	struct FVector2D RainMeshTextureScroll; // 0x50(0x08)
	struct FVector2D RainMeshTextureTiling; // 0x58(0x08)
	float RainMeshAlpha; // 0x60(0x04)
	int32_t RainMeshRowDivision; // 0x64(0x04)
	int32_t RainMeshColumnDivision; // 0x68(0x04)
	float RainMeshEndRadiusScale; // 0x6c(0x04)
	float RainMeshEndAlphaFade; // 0x70(0x04)
	float RainMeshFadeDistance; // 0x74(0x04)
	float RainMeshBrightness; // 0x78(0x04)
	float RainBrightness; // 0x7c(0x04)
	struct FLinearColor RainTint; // 0x80(0x10)
	float RainAnimationFrameTime; // 0x90(0x04)
	int32_t RainSplashesPerSecond; // 0x94(0x04)
	float RainSplashesPerSquareMetre; // 0x98(0x04)
	float RainSplashesMaxPlacementAngle; // 0x9c(0x04)
	struct UParticleComputeShaderData* RainSplashData; // 0xa0(0x08)
	float RainSplashesMaxDistance1; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
	struct UParticleComputeShaderData* RainSplashData2; // 0xb0(0x08)
	float RainSplashesMaxDistance2; // 0xb8(0x04)
	char UnknownData_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct Engine.RuntimeVectorCurve
// Size: 0x170 (Inherited: 0x00)
struct FRuntimeVectorCurve {
	struct FRichCurve FloatCurves[0x03]; // 0x00(0x168)
	struct UCurveVector* ExternalCurve; // 0x168(0x08)
};

// ScriptStruct Engine.TableRowBase
// Size: 0x01 (Inherited: 0x00)
struct FTableRowBase {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.NetSubObjectPtr
// Size: 0x14 (Inherited: 0x00)
struct FNetSubObjectPtr {
	struct FNetObjectPtr SubObject; // 0x00(0x14)
};

// ScriptStruct Engine.SerializeNewActorFailureContext
// Size: 0x38 (Inherited: 0x00)
struct FSerializeNewActorFailureContext {
	struct FString Description; // 0x00(0x10)
	struct TArray<struct FNetGuidResolveStackEntry> ActorGuidResolveStack; // 0x10(0x10)
	struct TArray<struct FNetGuidResolveStackEntry> ArchetypeGuidResolveStack; // 0x20(0x10)
	bool IsCloseBunch; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Engine.NetGuidResolveStackEntry
// Size: 0x30 (Inherited: 0x00)
struct FNetGuidResolveStackEntry {
	uint32_t NetGuid; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FString ObjectPath; // 0x08(0x10)
	struct FString path; // 0x18(0x10)
	char Result; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Engine.AnimNode_Base
// Size: 0x30 (Inherited: 0x00)
struct FAnimNode_Base {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FExposedValueHandler EvaluateGraphExposedInputs; // 0x08(0x28)
};

// ScriptStruct Engine.ExposedValueHandler
// Size: 0x28 (Inherited: 0x00)
struct FExposedValueHandler {
	struct FName BoundFunction; // 0x00(0x08)
	struct TArray<struct FExposedValueCopyRecord> CopyRecords; // 0x08(0x10)
	char UnknownData_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// Size: 0x70 (Inherited: 0x00)
struct FExposedValueCopyRecord {
	struct UProperty* SourceProperty; // 0x00(0x08)
	struct FName SourcePropertyName; // 0x08(0x08)
	struct TArray<struct FName> SourceSubPropertyNames; // 0x10(0x10)
	int32_t SourceArrayIndex; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct UProperty* DestProperty; // 0x28(0x08)
	int32_t DestArrayIndex; // 0x30(0x04)
	int32_t Size; // 0x34(0x04)
	char PostCopyOperation; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct UBoolProperty* CachedBoolSourceProperty; // 0x40(0x08)
	struct UBoolProperty* CachedBoolDestProperty; // 0x48(0x08)
	char UnknownData_50[0x20]; // 0x50(0x20)
};

// ScriptStruct Engine.InputScaleBias
// Size: 0x08 (Inherited: 0x00)
struct FInputScaleBias {
	float Scale; // 0x00(0x04)
	float Bias; // 0x04(0x04)
};

// ScriptStruct Engine.ComponentSpacePoseLink
// Size: 0x18 (Inherited: 0x18)
struct FComponentSpacePoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.PoseLinkBase
// Size: 0x18 (Inherited: 0x00)
struct FPoseLinkBase {
	int32_t LinkID; // 0x00(0x04)
	char UnknownData_4[0x14]; // 0x04(0x14)
};

// ScriptStruct Engine.BoneReference
// Size: 0x0c (Inherited: 0x00)
struct FBoneReference {
	struct FName BoneName; // 0x00(0x08)
	char UnknownData_8[0x4]; // 0x08(0x04)
};

// ScriptStruct Engine.IntegralCurve
// Size: 0x70 (Inherited: 0x58)
struct FIntegralCurve : FIndexedCurve {
	struct TArray<struct FIntegralKey> Keys; // 0x58(0x10)
	int32_t DefaultValue; // 0x68(0x04)
	bool bUseDefaultValueBeforeFirstKey; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.IntegralKey
// Size: 0x08 (Inherited: 0x00)
struct FIntegralKey {
	float Time; // 0x00(0x04)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct Engine.StringCurve
// Size: 0x78 (Inherited: 0x58)
struct FStringCurve : FIndexedCurve {
	struct FString DefaultValue; // 0x58(0x10)
	struct TArray<struct FStringCurveKey> Keys; // 0x68(0x10)
};

// ScriptStruct Engine.StringCurveKey
// Size: 0x18 (Inherited: 0x00)
struct FStringCurveKey {
	float Time; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct Engine.DirectoryPath
// Size: 0x10 (Inherited: 0x00)
struct FDirectoryPath {
	struct FString path; // 0x00(0x10)
};

// ScriptStruct Engine.EdGraphPinType
// Size: 0x50 (Inherited: 0x00)
struct FEdGraphPinType {
	struct FString PinCategory; // 0x00(0x10)
	struct FString PinSubCategory; // 0x10(0x10)
	struct UObject* PinSubCategoryObject; // 0x20(0x08)
	struct FSimpleMemberReference PinSubCategoryMemberReference; // 0x28(0x20)
	bool bIsArray; // 0x48(0x01)
	bool bIsReference; // 0x49(0x01)
	bool bIsConst; // 0x4a(0x01)
	bool bIsWeakPointer; // 0x4b(0x01)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Engine.ExposureSettings
// Size: 0x08 (Inherited: 0x00)
struct FExposureSettings {
	int32_t LogOffset; // 0x00(0x04)
	bool bFixed; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.URL
// Size: 0x70 (Inherited: 0x00)
struct FURL {
	struct FString Protocol; // 0x00(0x10)
	struct FString Host; // 0x10(0x10)
	int32_t Port; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FString Map; // 0x28(0x10)
	struct FString RedirectURL; // 0x38(0x10)
	struct TArray<struct FString> Op; // 0x48(0x10)
	struct FString Portal; // 0x58(0x10)
	int32_t Valid; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.TickPrerequisite
// Size: 0x10 (Inherited: 0x00)
struct FTickPrerequisite {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.Float_NetQuantized
// Size: 0x04 (Inherited: 0x00)
struct FFloat_NetQuantized {
	char UnknownData_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Engine.Vector_NetQuantize10
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize10 : FVector {
};

// ScriptStruct Engine.SimplygonRemeshingSettings
// Size: 0x50 (Inherited: 0x00)
struct FSimplygonRemeshingSettings {
	bool bActive; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t ScreenSize; // 0x04(0x04)
	bool bRecalculateNormals; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float HardAngleThreshold; // 0x0c(0x04)
	int32_t MergeDistance; // 0x10(0x04)
	bool bUseClippingPlane; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	float ClippingLevel; // 0x18(0x04)
	int32_t AxisIndex; // 0x1c(0x04)
	bool bPlaneNegativeHalfspace; // 0x20(0x01)
	bool bUseMassiveLOD; // 0x21(0x01)
	bool bUseAggregateLOD; // 0x22(0x01)
	char UnknownData_23[0x5]; // 0x23(0x05)
	struct FSimplygonMaterialLODSettings MaterialLODSettings; // 0x28(0x28)
};

// ScriptStruct Engine.SimplygonMaterialLODSettings
// Size: 0x28 (Inherited: 0x00)
struct FSimplygonMaterialLODSettings {
	bool bActive; // 0x00(0x01)
	char MaterialLODType; // 0x01(0x01)
	bool bUseAutomaticSizes; // 0x02(0x01)
	char TextureWidth; // 0x03(0x01)
	char TextureHeight; // 0x04(0x01)
	char SamplingQuality; // 0x05(0x01)
	char UnknownData_6[0x2]; // 0x06(0x02)
	int32_t GutterSpace; // 0x08(0x04)
	char TextureStrech; // 0x0c(0x01)
	bool bReuseExistingCharts; // 0x0d(0x01)
	char UnknownData_E[0x2]; // 0x0e(0x02)
	struct TArray<struct FSimplygonChannelCastingSettings> ChannelsToCast; // 0x10(0x10)
	bool bBakeVertexData; // 0x20(0x01)
	bool bBakeActorData; // 0x21(0x01)
	bool bAllowMultiMaterial; // 0x22(0x01)
	bool bPreferTwoSideMaterials; // 0x23(0x01)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.SimplygonChannelCastingSettings
// Size: 0x10 (Inherited: 0x00)
struct FSimplygonChannelCastingSettings {
	char MaterialChannel; // 0x00(0x01)
	char Caster; // 0x01(0x01)
	bool bActive; // 0x02(0x01)
	char ColorChannels; // 0x03(0x01)
	int32_t BitsPerChannel; // 0x04(0x04)
	bool bUseSRGB; // 0x08(0x01)
	bool bBakeVertexColors; // 0x09(0x01)
	bool bFlipBackfacingNormals; // 0x0a(0x01)
	bool bUseTangentSpaceNormals; // 0x0b(0x01)
	bool bFlipGreenChannel; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.CanvasUVTri
// Size: 0x60 (Inherited: 0x00)
struct FCanvasUVTri {
	struct FVector2D V0_Pos; // 0x00(0x08)
	struct FVector2D V0_UV; // 0x08(0x08)
	struct FLinearColor V0_Color; // 0x10(0x10)
	struct FVector2D V1_Pos; // 0x20(0x08)
	struct FVector2D V1_UV; // 0x28(0x08)
	struct FLinearColor V1_Color; // 0x30(0x10)
	struct FVector2D V2_Pos; // 0x40(0x08)
	struct FVector2D V2_UV; // 0x48(0x08)
	struct FLinearColor V2_Color; // 0x50(0x10)
};

// ScriptStruct Engine.FontRenderInfo
// Size: 0x28 (Inherited: 0x00)
struct FFontRenderInfo {
	char bClipText : 1; // 0x00(0x01)
	char bEnableShadow : 1; // 0x00(0x01)
	char UnknownData_0_2 : 6; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FDepthFieldGlowInfo GlowInfo; // 0x04(0x24)
};

// ScriptStruct Engine.DepthFieldGlowInfo
// Size: 0x24 (Inherited: 0x00)
struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x00(0x01)
	char UnknownData_0_1 : 7; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FLinearColor GlowColor; // 0x04(0x10)
	struct FVector2D GlowOuterRadius; // 0x14(0x08)
	struct FVector2D GlowInnerRadius; // 0x1c(0x08)
};

// ScriptStruct Engine.Redirector
// Size: 0x10 (Inherited: 0x00)
struct FRedirector {
	struct FName OldName; // 0x00(0x08)
	struct FName NewName; // 0x08(0x08)
};

// ScriptStruct Engine.FilePath
// Size: 0x10 (Inherited: 0x00)
struct FFilePath {
	struct FString FilePath; // 0x00(0x10)
};

// ScriptStruct Engine.ComponentReference
// Size: 0x18 (Inherited: 0x00)
struct FComponentReference {
	struct AActor* OtherActor; // 0x00(0x08)
	struct FName ComponentProperty; // 0x08(0x08)
	char UnknownData_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.ConstrainComponentPropName
// Size: 0x08 (Inherited: 0x00)
struct FConstrainComponentPropName {
	struct FName ComponentName; // 0x00(0x08)
};

// ScriptStruct Engine.RadialDamageEvent
// Size: 0x40 (Inherited: 0x10)
struct FRadialDamageEvent : FDamageEvent {
	struct FRadialDamageParams Params; // 0x10(0x14)
	struct FVector Origin; // 0x24(0x0c)
	struct TArray<struct FHitResult> ComponentHits; // 0x30(0x10)
};

// ScriptStruct Engine.DamageEvent
// Size: 0x10 (Inherited: 0x00)
struct FDamageEvent {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UClass* DamageTypeClass; // 0x08(0x08)
};

// ScriptStruct Engine.RadialDamageParams
// Size: 0x14 (Inherited: 0x00)
struct FRadialDamageParams {
	float BaseDamage; // 0x00(0x04)
	float MinimumDamage; // 0x04(0x04)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float DamageFalloff; // 0x10(0x04)
};

// ScriptStruct Engine.PointDamageEvent
// Size: 0xa0 (Inherited: 0x10)
struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10(0x04)
	struct FVector_NetQuantizeNormal ShotDirection; // 0x14(0x0c)
	struct FHitResult HitInfo; // 0x20(0x80)
};

// ScriptStruct Engine.CollisionMergingSettings
// Size: 0x01 (Inherited: 0x00)
struct FCollisionMergingSettings {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.MeshMergingSettings
// Size: 0x50 (Inherited: 0x00)
struct FMeshMergingSettings {
	bool bGenerateLightMapUV; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t TargetLightMapUVChannel; // 0x04(0x04)
	int32_t TargetLightMapResolution; // 0x08(0x04)
	bool bImportVertexColors; // 0x0c(0x01)
	bool bPivotPointAtZero; // 0x0d(0x01)
	bool bMergePhysicsData; // 0x0e(0x01)
	bool bMergeMaterials; // 0x0f(0x01)
	bool bExportNormalMap; // 0x10(0x01)
	bool bExportMetallicMap; // 0x11(0x01)
	bool bExportRoughnessMap; // 0x12(0x01)
	bool bExportSpecularMap; // 0x13(0x01)
	int32_t MergedMaterialAtlasResolution; // 0x14(0x04)
	bool bEnableCollisionMerging; // 0x18(0x01)
	bool bUseRelativeTransform; // 0x19(0x01)
	bool bMergeRelativeToFirstComponent; // 0x1a(0x01)
	bool bDuplicateLODs; // 0x1b(0x01)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct TArray<float> LODScreenSizes; // 0x20(0x10)
	int32_t LODForCollision; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TArray<float> LODReductionPercentTriangles; // 0x38(0x10)
	int32_t MaxNumberOfLODs; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Engine.MeshProxySettings
// Size: 0x70 (Inherited: 0x00)
struct FMeshProxySettings {
	int32_t ScreenSize; // 0x00(0x04)
	struct FMaterialSimplificationSettings Material; // 0x04(0x44)
	int32_t TextureWidth; // 0x48(0x04)
	int32_t TextureHeight; // 0x4c(0x04)
	bool bExportNormalMap; // 0x50(0x01)
	bool bExportMetallicMap; // 0x51(0x01)
	bool bExportRoughnessMap; // 0x52(0x01)
	bool bExportSpecularMap; // 0x53(0x01)
	bool bRecalculateNormals; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	float HardAngleThreshold; // 0x58(0x04)
	int32_t MergeDistance; // 0x5c(0x04)
	bool bUseClippingPlane; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	float ClippingLevel; // 0x64(0x04)
	int32_t AxisIndex; // 0x68(0x04)
	bool bPlaneNegativeHalfspace; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.MaterialSimplificationSettings
// Size: 0x44 (Inherited: 0x00)
struct FMaterialSimplificationSettings {
	struct FIntPoint BaseColorMapSize; // 0x00(0x08)
	bool bNormalMap; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FIntPoint NormalMapSize; // 0x0c(0x08)
	float MetallicConstant; // 0x14(0x04)
	bool bMetallicMap; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	struct FIntPoint MetallicMapSize; // 0x1c(0x08)
	float RoughnessConstant; // 0x24(0x04)
	bool bRoughnessMap; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	struct FIntPoint RoughnessMapSize; // 0x2c(0x08)
	float SpecularConstant; // 0x34(0x04)
	bool bSpecularMap; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	struct FIntPoint SpecularMapSize; // 0x3c(0x08)
};

// ScriptStruct Engine.MeshBuildSettings
// Size: 0x40 (Inherited: 0x00)
struct FMeshBuildSettings {
	bool bUseMikkTSpace; // 0x00(0x01)
	bool bRecomputeNormals; // 0x01(0x01)
	bool bRecomputeTangents; // 0x02(0x01)
	bool bRemoveDegenerates; // 0x03(0x01)
	bool bBuildAdjacencyBuffer; // 0x04(0x01)
	bool bUseFullPrecisionUVs; // 0x05(0x01)
	bool bGenerateLightmapUVs; // 0x06(0x01)
	char UnknownData_7[0x1]; // 0x07(0x01)
	struct FPresortedBillboardsParams PresortedBillboardsParams; // 0x08(0x08)
	int32_t MinLightmapResolution; // 0x10(0x04)
	int32_t SrcLightmapIndex; // 0x14(0x04)
	int32_t DstLightmapIndex; // 0x18(0x04)
	float BuildScale; // 0x1c(0x04)
	struct FVector BuildScale3D; // 0x20(0x0c)
	float DistanceFieldResolutionScale; // 0x2c(0x04)
	bool bGenerateDistanceFieldAsIfTwoSided; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct UStaticMesh* DistanceFieldReplacementMesh; // 0x38(0x08)
};

// ScriptStruct Engine.PresortedBillboardsParams
// Size: 0x08 (Inherited: 0x00)
struct FPresortedBillboardsParams {
	char Mode; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t NumDirections; // 0x04(0x04)
};

// ScriptStruct Engine.MeshReductionSettings
// Size: 0x58 (Inherited: 0x00)
struct FMeshReductionSettings {
	float PercentTriangles; // 0x00(0x04)
	float MaxDeviation; // 0x04(0x04)
	float WeldingThreshold; // 0x08(0x04)
	float HardAngleThreshold; // 0x0c(0x04)
	char SilhouetteImportance; // 0x10(0x01)
	char TextureImportance; // 0x11(0x01)
	char ShadingImportance; // 0x12(0x01)
	bool bActive; // 0x13(0x01)
	bool bRecalculateNormals; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	int32_t BaseLODModel; // 0x18(0x04)
	bool bGenerateUniqueLightmapUVs; // 0x1c(0x01)
	bool bKeepSymmetry; // 0x1d(0x01)
	bool bVisibilityAided; // 0x1e(0x01)
	bool bCullOccluded; // 0x1f(0x01)
	char VisibilityAggressiveness; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct FSimplygonMaterialLODSettings MaterialLODSettings; // 0x28(0x28)
	char VertexColorImportance; // 0x50(0x01)
	bool bForceRebuild; // 0x51(0x01)
	char UnknownData_52[0x6]; // 0x52(0x06)
};

// ScriptStruct Engine.POV
// Size: 0x1c (Inherited: 0x00)
struct FPOV {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// Size: 0x38 (Inherited: 0x00)
struct FAnimUpdateRateParameters {
	char UnknownData_0[0x4]; // 0x00(0x04)
	int32_t UpdateRate; // 0x04(0x04)
	int32_t EvaluationRate; // 0x08(0x04)
	bool bInterpolateSkippedFrames; // 0x0c(0x01)
	bool bSkipUpdate; // 0x0d(0x01)
	bool bSkipEvaluation; // 0x0e(0x01)
	char UnknownData_F[0x1]; // 0x0f(0x01)
	float TickedPoseOffestTime; // 0x10(0x04)
	float AdditionalTime; // 0x14(0x04)
	char UnknownData_18[0x4]; // 0x18(0x04)
	int32_t BaseNonRenderedUpdateRate; // 0x1c(0x04)
	char UnknownData_20[0x8]; // 0x20(0x08)
	struct TArray<float> BaseVisibleDistanceFactorThesholds; // 0x28(0x10)
};

// ScriptStruct Engine.AnimSlotDesc
// Size: 0x0c (Inherited: 0x00)
struct FAnimSlotDesc {
	struct FName SlotName; // 0x00(0x08)
	int32_t NumChannels; // 0x08(0x04)
};

// ScriptStruct Engine.AnimSlotInfo
// Size: 0x18 (Inherited: 0x00)
struct FAnimSlotInfo {
	struct FName SlotName; // 0x00(0x08)
	struct TArray<float> ChannelWeights; // 0x08(0x10)
};

// ScriptStruct Engine.MTDResult
// Size: 0x10 (Inherited: 0x00)
struct FMTDResult {
	struct FVector Direction; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
};

// ScriptStruct Engine.OverlapResult
// Size: 0x18 (Inherited: 0x00)
struct FOverlapResult {
	struct AActor* Actor; // 0x00(0x08)
	struct UPrimitiveComponent* Component; // 0x08(0x08)
	char UnknownData_10[0x4]; // 0x10(0x04)
	char bBlockingHit : 1; // 0x14(0x01)
	char UnknownData_14_1 : 7; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Engine.PrimitiveMaterialRef
// Size: 0x18 (Inherited: 0x00)
struct FPrimitiveMaterialRef {
	struct UPrimitiveComponent* Primitive; // 0x00(0x08)
	struct UDecalComponent* Decal; // 0x08(0x08)
	int32_t ElementIndex; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.SwarmDebugOptions
// Size: 0x04 (Inherited: 0x00)
struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x00(0x01)
	char bForceContentExport : 1; // 0x00(0x01)
	char bInitialized : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.LightmassDebugOptions
// Size: 0x10 (Inherited: 0x00)
struct FLightmassDebugOptions {
	char bDebugMode : 1; // 0x00(0x01)
	char bStatsEnabled : 1; // 0x00(0x01)
	char bGatherBSPSurfacesAcrossComponents : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float CoplanarTolerance; // 0x04(0x04)
	char bUseImmediateImport : 1; // 0x08(0x01)
	char bImmediateProcessMappings : 1; // 0x08(0x01)
	char bSortMappings : 1; // 0x08(0x01)
	char bDumpBinaryFiles : 1; // 0x08(0x01)
	char bDebugMaterials : 1; // 0x08(0x01)
	char bPadMappings : 1; // 0x08(0x01)
	char bDebugPaddings : 1; // 0x08(0x01)
	char bOnlyCalcDebugTexelMappings : 1; // 0x08(0x01)
	char bUseRandomColors : 1; // 0x09(0x01)
	char bColorBordersGreen : 1; // 0x09(0x01)
	char bColorByExecutionTime : 1; // 0x09(0x01)
	char UnknownData_9_3 : 5; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	float ExecutionTimeDivisor; // 0x0c(0x04)
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// Size: 0x18 (Inherited: 0x00)
struct FLightmassPrimitiveSettings {
	char bUseTwoSidedLighting : 1; // 0x00(0x01)
	char bShadowIndirectOnly : 1; // 0x00(0x01)
	char bUseEmissiveForStaticLighting : 1; // 0x00(0x01)
	char bUseVertexNormalForHemisphereGather : 1; // 0x00(0x01)
	char UnknownData_0_4 : 4; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float EmissiveLightFalloffExponent; // 0x04(0x04)
	float EmissiveLightExplicitInfluenceRadius; // 0x08(0x04)
	float EmissiveBoost; // 0x0c(0x04)
	float DiffuseBoost; // 0x10(0x04)
	float FullyOccludedSamplesFraction; // 0x14(0x04)
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// Size: 0x10 (Inherited: 0x0c)
struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0x0c(0x04)
};

// ScriptStruct Engine.LightmassLightSettings
// Size: 0x0c (Inherited: 0x00)
struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x00(0x04)
	float ShadowExponent; // 0x04(0x04)
	bool bUseAreaShadowsForStationaryLight; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.LightmassPointLightSettings
// Size: 0x0c (Inherited: 0x0c)
struct FLightmassPointLightSettings : FLightmassLightSettings {
};

// ScriptStruct Engine.LocalizedSubtitle
// Size: 0x28 (Inherited: 0x00)
struct FLocalizedSubtitle {
	struct FString LanguageExt; // 0x00(0x10)
	struct TArray<struct FSubtitleCue> Subtitles; // 0x10(0x10)
	char bMature : 1; // 0x20(0x01)
	char bManualWordWrap : 1; // 0x20(0x01)
	char bSingleLine : 1; // 0x20(0x01)
	char UnknownData_20_3 : 5; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.BasedPosition
// Size: 0x38 (Inherited: 0x00)
struct FBasedPosition {
	struct AActor* Base; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	struct FVector CachedBaseLocation; // 0x14(0x0c)
	struct FRotator CachedBaseRotation; // 0x20(0x0c)
	struct FVector CachedTransPosition; // 0x2c(0x0c)
};

// ScriptStruct Engine.FractureEffect
// Size: 0x10 (Inherited: 0x00)
struct FFractureEffect {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct USoundBase* Sound; // 0x08(0x08)
};

// ScriptStruct Engine.CollisionImpactData
// Size: 0x28 (Inherited: 0x00)
struct FCollisionImpactData {
	struct TArray<struct FRigidBodyContactInfo> ContactInfos; // 0x00(0x10)
	struct FVector TotalNormalImpulse; // 0x10(0x0c)
	struct FVector TotalFrictionImpulse; // 0x1c(0x0c)
};

// ScriptStruct Engine.RigidBodyContactInfo
// Size: 0x30 (Inherited: 0x00)
struct FRigidBodyContactInfo {
	struct FVector ContactPosition; // 0x00(0x0c)
	struct FVector ContactNormal; // 0x0c(0x0c)
	float ContactPenetration; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct UPhysicalMaterial* PhysMaterial[0x02]; // 0x20(0x10)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// Size: 0x1c (Inherited: 0x00)
struct FRigidBodyErrorCorrection {
	float LinearDeltaThresholdSq; // 0x00(0x04)
	float LinearInterpAlpha; // 0x04(0x04)
	float LinearRecipFixTime; // 0x08(0x04)
	float AngularDeltaThreshold; // 0x0c(0x04)
	float AngularInterpAlpha; // 0x10(0x04)
	float AngularRecipFixTime; // 0x14(0x04)
	float BodySpeedThresholdSq; // 0x18(0x04)
};

// ScriptStruct Engine.RigidBodyState
// Size: 0x40 (Inherited: 0x00)
struct FRigidBodyState {
	struct FVector_NetQuantize100 Position; // 0x00(0x0c)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector_NetQuantize100 LinVel; // 0x20(0x0c)
	struct FVector_NetQuantize100 AngVel; // 0x2c(0x0c)
	char Flags; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.EditedDocumentInfo
// Size: 0x18 (Inherited: 0x00)
struct FEditedDocumentInfo {
	struct UObject* EditedObject; // 0x00(0x08)
	struct FVector2D SavedViewOffset; // 0x08(0x08)
	float SavedZoomAmount; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.BPInterfaceDescription
// Size: 0x18 (Inherited: 0x00)
struct FBPInterfaceDescription {
	struct UClass* Interface; // 0x00(0x08)
	struct TArray<struct UEdGraph*> Graphs; // 0x08(0x10)
};

// ScriptStruct Engine.BPVariableDescription
// Size: 0xe0 (Inherited: 0x00)
struct FBPVariableDescription {
	struct FName VarName; // 0x00(0x08)
	struct FGuid VarGuid; // 0x08(0x10)
	struct FEdGraphPinType VarType; // 0x18(0x50)
	struct FString FriendlyName; // 0x68(0x10)
	struct FText Category; // 0x78(0x38)
	uint64_t PropertyFlags; // 0xb0(0x08)
	struct FName RepNotifyFunc; // 0xb8(0x08)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0xc0(0x10)
	struct FString DefaultValue; // 0xd0(0x10)
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// Size: 0x18 (Inherited: 0x00)
struct FBPVariableMetaDataEntry {
	struct FName DataKey; // 0x00(0x08)
	struct FString DataValue; // 0x08(0x10)
};

// ScriptStruct Engine.MemberReference
// Size: 0x38 (Inherited: 0x00)
struct FMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FString MemberScope; // 0x08(0x10)
	struct FName MemberName; // 0x18(0x08)
	struct FGuid MemberGuid; // 0x20(0x10)
	bool bSelfContext; // 0x30(0x01)
	bool bWasDeprecated; // 0x31(0x01)
	char UnknownData_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Engine.AutomaticInstancingMeshComponentArray
// Size: 0x10 (Inherited: 0x00)
struct FAutomaticInstancingMeshComponentArray {
	struct TArray<struct UInstancedStaticMeshComponent*> Array; // 0x00(0x10)
};

// ScriptStruct Engine.LatentActionManager
// Size: 0xf0 (Inherited: 0x00)
struct FLatentActionManager {
	char UnknownData_0[0xf0]; // 0x00(0xf0)
};

// ScriptStruct Engine.EndClothSimulationFunction
// Size: 0x50 (Inherited: 0x48)
struct FEndClothSimulationFunction : FTickFunction {
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Engine.StartClothSimulationFunction
// Size: 0x50 (Inherited: 0x48)
struct FStartClothSimulationFunction : FTickFunction {
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Engine.EndPhysicsTickFunction
// Size: 0x50 (Inherited: 0x48)
struct FEndPhysicsTickFunction : FTickFunction {
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Engine.StartPhysicsTickFunction
// Size: 0x50 (Inherited: 0x48)
struct FStartPhysicsTickFunction : FTickFunction {
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Engine.LevelViewportInfo
// Size: 0x20 (Inherited: 0x00)
struct FLevelViewportInfo {
	struct FVector CamPosition; // 0x00(0x0c)
	struct FRotator CamRotation; // 0x0c(0x0c)
	float CamOrthoZoom; // 0x18(0x04)
	bool CamUpdated; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.LevelSimplificationDetails
// Size: 0xac (Inherited: 0x00)
struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float ProxyPixelSize; // 0x04(0x04)
	struct FMaterialSimplificationSettings StaticMeshMaterial; // 0x08(0x44)
	bool bOverrideLandscapeExportLOD; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
	int32_t LandscapeExportLOD; // 0x50(0x04)
	struct FMaterialSimplificationSettings LandscapeMaterial; // 0x54(0x44)
	bool bRemoveDownwardFacingTriangles; // 0x98(0x01)
	char UnknownData_99[0x3]; // 0x99(0x03)
	float CullAngleThreshold; // 0x9c(0x04)
	bool bBakeFoliageToLandscape; // 0xa0(0x01)
	bool bBakeGrassToLandscape; // 0xa1(0x01)
	bool bGenerateMeshNormalMap; // 0xa2(0x01)
	bool bGenerateMeshMetallicMap; // 0xa3(0x01)
	bool bGenerateMeshRoughnessMap; // 0xa4(0x01)
	bool bGenerateMeshSpecularMap; // 0xa5(0x01)
	bool bGenerateLandscapeNormalMap; // 0xa6(0x01)
	bool bGenerateLandscapeMetallicMap; // 0xa7(0x01)
	bool bGenerateLandscapeRoughnessMap; // 0xa8(0x01)
	bool bGenerateLandscapeSpecularMap; // 0xa9(0x01)
	char UnknownData_AA[0x2]; // 0xaa(0x02)
};

// ScriptStruct Engine.DynamicTextureInstance
// Size: 0x28 (Inherited: 0x14)
struct FDynamicTextureInstance : FStreamableTextureInstance {
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct UTexture2D* Texture; // 0x18(0x08)
	bool bAttached; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	float OriginalRadius; // 0x24(0x04)
};

// ScriptStruct Engine.StreamableTextureInstance
// Size: 0x14 (Inherited: 0x00)
struct FStreamableTextureInstance {
	char UnknownData_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Engine.GeomSelection
// Size: 0x0c (Inherited: 0x00)
struct FGeomSelection {
	int32_t Type; // 0x00(0x04)
	int32_t Index; // 0x04(0x04)
	int32_t SelectionIndex; // 0x08(0x04)
};

// ScriptStruct Engine.InteriorSettings
// Size: 0x24 (Inherited: 0x00)
struct FInteriorSettings {
	char bIsWorldSettings : 1; // 0x00(0x01)
	char UnknownData_0_1 : 7; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float ExteriorVolume; // 0x04(0x04)
	float ExteriorTime; // 0x08(0x04)
	float ExteriorLPF; // 0x0c(0x04)
	float ExteriorLPFTime; // 0x10(0x04)
	float InteriorVolume; // 0x14(0x04)
	float InteriorTime; // 0x18(0x04)
	float InteriorLPF; // 0x1c(0x04)
	float InteriorLPFTime; // 0x20(0x04)
};

// ScriptStruct Engine.ReverbSettings
// Size: 0x18 (Inherited: 0x00)
struct FReverbSettings {
	char bApplyReverb : 1; // 0x00(0x01)
	char UnknownData_0_1 : 7; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	char ReverbType; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct UReverbEffect* ReverbEffect; // 0x08(0x08)
	float Volume; // 0x10(0x04)
	float FadeTime; // 0x14(0x04)
};

// ScriptStruct Engine.CullDistanceSizePair
// Size: 0x08 (Inherited: 0x00)
struct FCullDistanceSizePair {
	float Size; // 0x00(0x04)
	float CullDistance; // 0x04(0x04)
};

// ScriptStruct Engine.NavDataConfig
// Size: 0x58 (Inherited: 0x30)
struct FNavDataConfig : FNavAgentProperties {
	struct FColor Color; // 0x30(0x04)
	struct FVector DefaultQueryExtent; // 0x34(0x0c)
	struct UClass* NavigationDataClass; // 0x40(0x08)
	struct FStringClassReference NavigationDataClassName; // 0x48(0x10)
};

// ScriptStruct Engine.NavAgentProperties
// Size: 0x30 (Inherited: 0x04)
struct FNavAgentProperties : FMovementProperties {
	struct FName Name; // 0x04(0x08)
	float AgentRadius; // 0x0c(0x04)
	float AgentHeight; // 0x10(0x04)
	float AgentStepHeight; // 0x14(0x04)
	float NavWalkingSearchHeightScale; // 0x18(0x04)
	float NavWalkingSearchRadiusScale; // 0x1c(0x04)
	float NavWalkingSearchRadiusScaleOffMesh; // 0x20(0x04)
	float AgentMaxSlope; // 0x24(0x04)
	float MinRegionArea; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.MovementProperties
// Size: 0x04 (Inherited: 0x00)
struct FMovementProperties {
	char bCanCrouch : 1; // 0x00(0x01)
	char bCanJump : 1; // 0x00(0x01)
	char bCanWalk : 1; // 0x00(0x01)
	char bCanSwim : 1; // 0x00(0x01)
	char bCanFly : 1; // 0x00(0x01)
	char UnknownData_0_5 : 3; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.NavAgentSelector
// Size: 0x04 (Inherited: 0x00)
struct FNavAgentSelector {
	char bSupportsAgent0 : 1; // 0x00(0x01)
	char bSupportsAgent1 : 1; // 0x00(0x01)
	char bSupportsAgent2 : 1; // 0x00(0x01)
	char bSupportsAgent3 : 1; // 0x00(0x01)
	char bSupportsAgent4 : 1; // 0x00(0x01)
	char bSupportsAgent5 : 1; // 0x00(0x01)
	char bSupportsAgent6 : 1; // 0x00(0x01)
	char bSupportsAgent7 : 1; // 0x00(0x01)
	char bSupportsAgent8 : 1; // 0x01(0x01)
	char bSupportsAgent9 : 1; // 0x01(0x01)
	char bSupportsAgent10 : 1; // 0x01(0x01)
	char bSupportsAgent11 : 1; // 0x01(0x01)
	char bSupportsAgent12 : 1; // 0x01(0x01)
	char bSupportsAgent13 : 1; // 0x01(0x01)
	char bSupportsAgent14 : 1; // 0x01(0x01)
	char bSupportsAgent15 : 1; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.PlayerAmbientLightOverrideSettings
// Size: 0x18 (Inherited: 0x00)
struct FPlayerAmbientLightOverrideSettings {
	char OverrideBodyLightAmbience : 1; // 0x00(0x01)
	char UnknownData_0_1 : 7; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float BodyLightAmbienceLightFactor; // 0x04(0x04)
	float BodyLightAmbienceBlendWithDefault; // 0x08(0x04)
	char OverrideLanternAmbience : 1; // 0x0c(0x01)
	char UnknownData_C_1 : 7; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	float LanternAmbienceLightFactor; // 0x10(0x04)
	float LanternAmbienceBlendWithDefault; // 0x14(0x04)
};

// ScriptStruct Engine.PostProcessSettings
// Size: 0x540 (Inherited: 0x00)
struct FPostProcessSettings {
	char bOverride_WhiteTemp : 1; // 0x00(0x01)
	char bOverride_WhiteTint : 1; // 0x00(0x01)
	char bOverride_ColorSaturation : 1; // 0x00(0x01)
	char bOverride_ColorContrast : 1; // 0x00(0x01)
	char bOverride_ColorGamma : 1; // 0x00(0x01)
	char bOverride_ColorGain : 1; // 0x00(0x01)
	char bOverride_ColorOffset : 1; // 0x00(0x01)
	char bOverride_FilmWhitePoint : 1; // 0x00(0x01)
	char bOverride_FilmSaturation : 1; // 0x01(0x01)
	char bOverride_FilmChannelMixerRed : 1; // 0x01(0x01)
	char bOverride_FilmChannelMixerGreen : 1; // 0x01(0x01)
	char bOverride_FilmChannelMixerBlue : 1; // 0x01(0x01)
	char bOverride_FilmContrast : 1; // 0x01(0x01)
	char bOverride_FilmDynamicRange : 1; // 0x01(0x01)
	char bOverride_FilmHealAmount : 1; // 0x01(0x01)
	char bOverride_FilmToeAmount : 1; // 0x01(0x01)
	char bOverride_FilmShadowTint : 1; // 0x02(0x01)
	char bOverride_FilmShadowTintBlend : 1; // 0x02(0x01)
	char bOverride_FilmShadowTintAmount : 1; // 0x02(0x01)
	char bOverride_FilmSlope : 1; // 0x02(0x01)
	char bOverride_FilmToe : 1; // 0x02(0x01)
	char bOverride_FilmShoulder : 1; // 0x02(0x01)
	char bOverride_FilmBlackClip : 1; // 0x02(0x01)
	char bOverride_FilmWhiteClip : 1; // 0x02(0x01)
	char bOverride_SceneColorTint : 1; // 0x03(0x01)
	char bOverride_SceneFringeIntensity : 1; // 0x03(0x01)
	char bOverride_SceneFringeSaturation : 1; // 0x03(0x01)
	char bOverride_AmbientCubemapTint : 1; // 0x03(0x01)
	char bOverride_AmbientCubemapIntensity : 1; // 0x03(0x01)
	char bOverride_BloomIntensity : 1; // 0x03(0x01)
	char bOverride_BloomThreshold : 1; // 0x03(0x01)
	char bOverride_Bloom1Tint : 1; // 0x03(0x01)
	char bOverride_Bloom1Size : 1; // 0x04(0x01)
	char bOverride_Bloom2Size : 1; // 0x04(0x01)
	char bOverride_Bloom2Tint : 1; // 0x04(0x01)
	char bOverride_Bloom3Tint : 1; // 0x04(0x01)
	char bOverride_Bloom3Size : 1; // 0x04(0x01)
	char bOverride_Bloom4Tint : 1; // 0x04(0x01)
	char bOverride_Bloom4Size : 1; // 0x04(0x01)
	char bOverride_Bloom5Tint : 1; // 0x04(0x01)
	char bOverride_Bloom5Size : 1; // 0x05(0x01)
	char bOverride_Bloom6Tint : 1; // 0x05(0x01)
	char bOverride_Bloom6Size : 1; // 0x05(0x01)
	char bOverride_BloomSizeScale : 1; // 0x05(0x01)
	char bOverride_BloomDirtMaskIntensity : 1; // 0x05(0x01)
	char bOverride_BloomDirtMaskTint : 1; // 0x05(0x01)
	char bOverride_BloomDirtMask : 1; // 0x05(0x01)
	char bOverride_AutoExposureLowPercent : 1; // 0x05(0x01)
	char bOverride_AutoExposureHighPercent : 1; // 0x06(0x01)
	char bOverride_AutoExposureMinBrightness : 1; // 0x06(0x01)
	char bOverride_AutoExposureMaxBrightness : 1; // 0x06(0x01)
	char bOverride_AutoExposureSpeedUp : 1; // 0x06(0x01)
	char bOverride_AutoExposureSpeedDown : 1; // 0x06(0x01)
	char bOverride_AutoExposureBias : 1; // 0x06(0x01)
	char bOverride_HistogramLogMin : 1; // 0x06(0x01)
	char bOverride_HistogramLogMax : 1; // 0x06(0x01)
	char bOverride_LensFlareIntensity : 1; // 0x07(0x01)
	char bOverride_LensFlareTint : 1; // 0x07(0x01)
	char bOverride_LensFlareTints : 1; // 0x07(0x01)
	char bOverride_LensFlareBokehSize : 1; // 0x07(0x01)
	char bOverride_LensFlareBokehShape : 1; // 0x07(0x01)
	char bOverride_LensFlareThreshold : 1; // 0x07(0x01)
	char bOverride_VignetteIntensity : 1; // 0x07(0x01)
	char bOverride_GrainIntensity : 1; // 0x07(0x01)
	char bOverride_GrainJitter : 1; // 0x08(0x01)
	char bOverride_AmbientOcclusionIntensity : 1; // 0x08(0x01)
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x08(0x01)
	char bOverride_AmbientOcclusionRadius : 1; // 0x08(0x01)
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x08(0x01)
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x08(0x01)
	char bOverride_AmbientOcclusionDistance : 1; // 0x08(0x01)
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x08(0x01)
	char bOverride_AmbientOcclusionPower : 1; // 0x09(0x01)
	char bOverride_AmbientOcclusionBias : 1; // 0x09(0x01)
	char bOverride_AmbientOcclusionQuality : 1; // 0x09(0x01)
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x09(0x01)
	char bOverride_AmbientOcclusionMipScale : 1; // 0x09(0x01)
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x09(0x01)
	char bOverride_AmbientOcclusionHemiIntensity : 1; // 0x09(0x01)
	char bOverride_AmbientOcclusionHemiPower : 1; // 0x09(0x01)
	char bOverride_AmbientOcclusionHemiRadius : 1; // 0x0a(0x01)
	char bOverride_AmbientOcclusionHemiBlurTolerance : 1; // 0x0a(0x01)
	char bOverride_AmbientOcclusionHemiUpsampleTolerance : 1; // 0x0a(0x01)
	char bOverride_AmbientOcclusionHemiNoiseFilterTolerance : 1; // 0x0a(0x01)
	char bOverride_AmbientOcclusionHemiRejectionFalloff : 1; // 0x0a(0x01)
	char bOverride_AmbientOcclusionHemiBias : 1; // 0x0a(0x01)
	char bOverride_AmbientOcclusionHemiMaxDepthDownsample : 1; // 0x0a(0x01)
	char bOverride_AmbientOcclusionHemiUseNormals : 1; // 0x0a(0x01)
	char bOverride_AmbientOcclusionHemiCombineBeforeBlur : 1; // 0x0b(0x01)
	char bOverride_AmbientOcclusionHemiCombineWithMultiply : 1; // 0x0b(0x01)
	char bOverride_MinOverdrawCount : 1; // 0x0b(0x01)
	char bOverride_MaxOverdrawCount : 1; // 0x0b(0x01)
	char bOverride_MinOverdrawColour : 1; // 0x0b(0x01)
	char bOverride_MaxOverdrawColour : 1; // 0x0b(0x01)
	char bOverride_LPVIntensity : 1; // 0x0b(0x01)
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x0b(0x01)
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x0c(0x01)
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x0c(0x01)
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x0c(0x01)
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x0c(0x01)
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x0c(0x01)
	char bOverride_LPVSize : 1; // 0x0c(0x01)
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x0c(0x01)
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x0c(0x01)
	char bOverride_LPVGeometryVolumeBias : 1; // 0x0d(0x01)
	char bOverride_LPVVplInjectionBias : 1; // 0x0d(0x01)
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x0d(0x01)
	char bOverride_LPVWorldRef : 1; // 0x0d(0x01)
	char bOverride_IndirectLightingColor : 1; // 0x0d(0x01)
	char bOverride_IndirectLightingIntensity : 1; // 0x0d(0x01)
	char bOverride_ColorGradingIntensity : 1; // 0x0d(0x01)
	char bOverride_ColorGradingLUT : 1; // 0x0d(0x01)
	char bOverride_DepthOfFieldFocalDistance : 1; // 0x0e(0x01)
	char bOverride_DepthOfFieldFstop : 1; // 0x0e(0x01)
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x0e(0x01)
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x0e(0x01)
	char bOverride_DepthOfFieldFocalRegion : 1; // 0x0e(0x01)
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x0e(0x01)
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x0e(0x01)
	char bOverride_DepthOfFieldScale : 1; // 0x0e(0x01)
	char bOverride_DepthOfFieldMaxBokehSize : 1; // 0x0f(0x01)
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0x0f(0x01)
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0x0f(0x01)
	char bOverride_DepthOfFieldMethod : 1; // 0x0f(0x01)
	char bOverride_DepthOfFieldBokehShape : 1; // 0x0f(0x01)
	char bOverride_DepthOfFieldOcclusion : 1; // 0x0f(0x01)
	char bOverride_DepthOfFieldColorThreshold : 1; // 0x0f(0x01)
	char bOverride_DepthOfFieldSizeThreshold : 1; // 0x0f(0x01)
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x10(0x01)
	char bOverride_MotionBlurAmount : 1; // 0x10(0x01)
	char bOverride_MotionBlurMax : 1; // 0x10(0x01)
	char bOverride_MotionBlurPerObjectSize : 1; // 0x10(0x01)
	char bOverride_ScreenPercentage : 1; // 0x10(0x01)
	char bOverride_AntiAliasingMethod : 1; // 0x10(0x01)
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x10(0x01)
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x10(0x01)
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x11(0x01)
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x11(0x01)
	char bOverride_SkyLightIntensityScale : 1; // 0x11(0x01)
	char bOverride_SkyLightIntensityScaleForMinSpec : 1; // 0x11(0x01)
	char bOverride_SkyLightIntensityScaleInteriorInfluence : 1; // 0x11(0x01)
	char bOverride_GlobalReflectionTint : 1; // 0x11(0x01)
	char bOverride_InsideAmbientColourForParticlesInfluence : 1; // 0x11(0x01)
	char bOverride_InsideAmbientColourForParticles : 1; // 0x11(0x01)
	char bUseThisVolumeForLPVSettings : 1; // 0x12(0x01)
	char bOverride_GaussianBlur : 1; // 0x12(0x01)
	char bOverride_DisableShadowMapMethod : 1; // 0x12(0x01)
	char bOverride_UseVolumeFogScale : 1; // 0x12(0x01)
	char bOverride_VolumeFogScale : 1; // 0x12(0x01)
	char UnknownData_12_5 : 3; // 0x12(0x01)
	char UnknownData_13[0x1]; // 0x13(0x01)
	float WhiteTemp; // 0x14(0x04)
	float WhiteTint; // 0x18(0x04)
	struct FVector ColorSaturation; // 0x1c(0x0c)
	struct FVector ColorContrast; // 0x28(0x0c)
	struct FVector ColorGamma; // 0x34(0x0c)
	struct FVector ColorGain; // 0x40(0x0c)
	struct FVector ColorOffset; // 0x4c(0x0c)
	struct FLinearColor FilmWhitePoint; // 0x58(0x10)
	struct FLinearColor FilmShadowTint; // 0x68(0x10)
	float FilmShadowTintBlend; // 0x78(0x04)
	float FilmShadowTintAmount; // 0x7c(0x04)
	float FilmSaturation; // 0x80(0x04)
	struct FLinearColor FilmChannelMixerRed; // 0x84(0x10)
	struct FLinearColor FilmChannelMixerGreen; // 0x94(0x10)
	struct FLinearColor FilmChannelMixerBlue; // 0xa4(0x10)
	float FilmContrast; // 0xb4(0x04)
	float FilmToeAmount; // 0xb8(0x04)
	float FilmHealAmount; // 0xbc(0x04)
	float FilmDynamicRange; // 0xc0(0x04)
	float FilmSlope; // 0xc4(0x04)
	float FilmToe; // 0xc8(0x04)
	float FilmShoulder; // 0xcc(0x04)
	float FilmBlackClip; // 0xd0(0x04)
	float FilmWhiteClip; // 0xd4(0x04)
	struct FLinearColor SceneColorTint; // 0xd8(0x10)
	float SceneFringeIntensity; // 0xe8(0x04)
	float SceneFringeSaturation; // 0xec(0x04)
	float BloomIntensity; // 0xf0(0x04)
	float BloomThreshold; // 0xf4(0x04)
	float BloomSizeScale; // 0xf8(0x04)
	float Bloom1Size; // 0xfc(0x04)
	float Bloom2Size; // 0x100(0x04)
	float Bloom3Size; // 0x104(0x04)
	float Bloom4Size; // 0x108(0x04)
	float Bloom5Size; // 0x10c(0x04)
	float Bloom6Size; // 0x110(0x04)
	struct FLinearColor Bloom1Tint; // 0x114(0x10)
	struct FLinearColor Bloom2Tint; // 0x124(0x10)
	struct FLinearColor Bloom3Tint; // 0x134(0x10)
	struct FLinearColor Bloom4Tint; // 0x144(0x10)
	struct FLinearColor Bloom5Tint; // 0x154(0x10)
	struct FLinearColor Bloom6Tint; // 0x164(0x10)
	float BloomDirtMaskIntensity; // 0x174(0x04)
	struct FLinearColor BloomDirtMaskTint; // 0x178(0x10)
	struct UTexture* BloomDirtMask; // 0x188(0x08)
	float LPVIntensity; // 0x190(0x04)
	float LPVVplInjectionBias; // 0x194(0x04)
	float LPVSize; // 0x198(0x04)
	float LPVSecondaryOcclusionIntensity; // 0x19c(0x04)
	float LPVSecondaryBounceIntensity; // 0x1a0(0x04)
	float LPVGeometryVolumeBias; // 0x1a4(0x04)
	float LPVEmissiveInjectionIntensity; // 0x1a8(0x04)
	float LPVDirectionalOcclusionIntensity; // 0x1ac(0x04)
	struct FTransform LPVWorldRef; // 0x1b0(0x30)
	float LPVDirectionalOcclusionRadius; // 0x1e0(0x04)
	float LPVDiffuseOcclusionExponent; // 0x1e4(0x04)
	float LPVSpecularOcclusionExponent; // 0x1e8(0x04)
	float LPVDiffuseOcclusionIntensity; // 0x1ec(0x04)
	float LPVSpecularOcclusionIntensity; // 0x1f0(0x04)
	struct FLinearColor AmbientCubemapTint; // 0x1f4(0x10)
	float AmbientCubemapIntensity; // 0x204(0x04)
	struct UTextureCube* AmbientCubemap; // 0x208(0x08)
	float AutoExposureLowPercent; // 0x210(0x04)
	float AutoExposureHighPercent; // 0x214(0x04)
	float AutoExposureMinBrightness; // 0x218(0x04)
	float AutoExposureMaxBrightness; // 0x21c(0x04)
	float AutoExposureSpeedUp; // 0x220(0x04)
	float AutoExposureSpeedDown; // 0x224(0x04)
	float AutoExposureBias; // 0x228(0x04)
	float HistogramLogMin; // 0x22c(0x04)
	float HistogramLogMax; // 0x230(0x04)
	float LensFlareIntensity; // 0x234(0x04)
	struct FLinearColor LensFlareTint; // 0x238(0x10)
	float LensFlareBokehSize; // 0x248(0x04)
	float LensFlareThreshold; // 0x24c(0x04)
	struct UTexture* LensFlareBokehShape; // 0x250(0x08)
	struct FLinearColor LensFlareTints[0x08]; // 0x258(0x80)
	float VignetteIntensity; // 0x2d8(0x04)
	float GrainJitter; // 0x2dc(0x04)
	float GrainIntensity; // 0x2e0(0x04)
	float AmbientOcclusionIntensity; // 0x2e4(0x04)
	float AmbientOcclusionStaticFraction; // 0x2e8(0x04)
	float AmbientOcclusionRadius; // 0x2ec(0x04)
	char AmbientOcclusionRadiusInWS : 1; // 0x2f0(0x01)
	char UnknownData_2F0_1 : 7; // 0x2f0(0x01)
	char UnknownData_2F1[0x3]; // 0x2f1(0x03)
	float AmbientOcclusionFadeDistance; // 0x2f4(0x04)
	float AmbientOcclusionFadeRadius; // 0x2f8(0x04)
	float AmbientOcclusionDistance; // 0x2fc(0x04)
	float AmbientOcclusionPower; // 0x300(0x04)
	float AmbientOcclusionBias; // 0x304(0x04)
	float AmbientOcclusionQuality; // 0x308(0x04)
	float AmbientOcclusionMipBlend; // 0x30c(0x04)
	float AmbientOcclusionMipScale; // 0x310(0x04)
	float AmbientOcclusionMipThreshold; // 0x314(0x04)
	float AmbientOcclusionHemiIntensity; // 0x318(0x04)
	float AmbientOcclusionHemiPower; // 0x31c(0x04)
	float AmbientOcclusionHemiRadius; // 0x320(0x04)
	float AmbientOcclusionHemiBlurTolerance; // 0x324(0x04)
	float AmbientOcclusionHemiUpsampleTolerance; // 0x328(0x04)
	float AmbientOcclusionHemiNoiseFilterTolerance; // 0x32c(0x04)
	float AmbientOcclusionHemiRejectionFalloff; // 0x330(0x04)
	float AmbientOcclusionHemiBias; // 0x334(0x04)
	char AmbientOcclusionHemiMaxDepthDownsample : 1; // 0x338(0x01)
	char AmbientOcclusionHemiUseNormals : 1; // 0x338(0x01)
	char AmbientOcclusionHemiCombineBeforeBlur : 1; // 0x338(0x01)
	char AmbientOcclusionHemiCombineWithMultiply : 1; // 0x338(0x01)
	char UnknownData_338_4 : 4; // 0x338(0x01)
	char UnknownData_339[0x3]; // 0x339(0x03)
	float MinOverdrawCount; // 0x33c(0x04)
	float MaxOverdrawCount; // 0x340(0x04)
	struct FLinearColor MinOverdrawColour; // 0x344(0x10)
	struct FLinearColor MaxOverdrawColour; // 0x354(0x10)
	struct FLinearColor IndirectLightingColor; // 0x364(0x10)
	float IndirectLightingIntensity; // 0x374(0x04)
	float ColorGradingIntensity; // 0x378(0x04)
	char UnknownData_37C[0x4]; // 0x37c(0x04)
	struct UTexture* ColorGradingLUT; // 0x380(0x08)
	char DepthOfFieldMethod; // 0x388(0x01)
	char UnknownData_389[0x3]; // 0x389(0x03)
	float DepthOfFieldDepthBlurAmount; // 0x38c(0x04)
	float DepthOfFieldDepthBlurRadius; // 0x390(0x04)
	float DepthOfFieldFstop; // 0x394(0x04)
	float DepthOfFieldFocalDistance; // 0x398(0x04)
	float DepthOfFieldFocalRegion; // 0x39c(0x04)
	float DepthOfFieldNearTransitionRegion; // 0x3a0(0x04)
	float DepthOfFieldFarTransitionRegion; // 0x3a4(0x04)
	float DepthOfFieldScale; // 0x3a8(0x04)
	float DepthOfFieldMaxBokehSize; // 0x3ac(0x04)
	float DepthOfFieldNearBlurSize; // 0x3b0(0x04)
	float DepthOfFieldFarBlurSize; // 0x3b4(0x04)
	struct UTexture* DepthOfFieldBokehShape; // 0x3b8(0x08)
	float DepthOfFieldOcclusion; // 0x3c0(0x04)
	float DepthOfFieldColorThreshold; // 0x3c4(0x04)
	float DepthOfFieldSizeThreshold; // 0x3c8(0x04)
	float DepthOfFieldSkyFocusDistance; // 0x3cc(0x04)
	float MotionBlurAmount; // 0x3d0(0x04)
	float MotionBlurMax; // 0x3d4(0x04)
	float MotionBlurPerObjectSize; // 0x3d8(0x04)
	float ScreenPercentage; // 0x3dc(0x04)
	char AntiAliasingMethod; // 0x3e0(0x01)
	char UnknownData_3E1[0x3]; // 0x3e1(0x03)
	float ScreenSpaceReflectionIntensity; // 0x3e4(0x04)
	float ScreenSpaceReflectionQuality; // 0x3e8(0x04)
	float ScreenSpaceReflectionMaxRoughness; // 0x3ec(0x04)
	float SkyLightIntensityScale; // 0x3f0(0x04)
	float SkyLightIntensityScaleForMinSpec; // 0x3f4(0x04)
	float SkyLightIntensityScaleInteriorInfluence; // 0x3f8(0x04)
	char bUseVolumeFogScale : 1; // 0x3fc(0x01)
	char UnknownData_3FC_1 : 7; // 0x3fc(0x01)
	char UnknownData_3FD[0x3]; // 0x3fd(0x03)
	float VolumeFogScale; // 0x400(0x04)
	struct FLinearColor GlobalReflectionTint; // 0x404(0x10)
	float InsideAmbientColourForParticlesInfluence; // 0x414(0x04)
	struct FLinearColor InsideAmbientColourForParticles; // 0x418(0x10)
	struct FRainPostProcessSettings RainSettings; // 0x428(0xc0)
	struct TArray<struct FLPVCascadeSettings> LPVSettings; // 0x4e8(0x10)
	struct FPlayerAmbientLightOverrideSettings PlayerAmbientLightOverrideSettings; // 0x4f8(0x18)
	float GaussianBlurIntensity; // 0x510(0x04)
	char DisableShadowMethod; // 0x514(0x01)
	char UnknownData_515[0x3]; // 0x515(0x03)
	struct FWeightedBlendables WeightedBlendables; // 0x518(0x10)
	struct TArray<struct UObject*> Blendables; // 0x528(0x10)
	char UnknownData_538[0x8]; // 0x538(0x08)
};

// ScriptStruct Engine.WeightedBlendables
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendables {
	struct TArray<struct FWeightedBlendable> Array; // 0x00(0x10)
};

// ScriptStruct Engine.WeightedBlendable
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendable {
	float Weight; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UObject* Object; // 0x08(0x08)
};

// ScriptStruct Engine.LPVCascadeSettings
// Size: 0x70 (Inherited: 0x00)
struct FLPVCascadeSettings {
	char bOverride_LPVIntensity : 1; // 0x00(0x01)
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x00(0x01)
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x00(0x01)
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x00(0x01)
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x00(0x01)
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x00(0x01)
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x00(0x01)
	char bOverride_LPVSize : 1; // 0x00(0x01)
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x01(0x01)
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x01(0x01)
	char bOverride_LPVGeometryVolumeBias : 1; // 0x01(0x01)
	char bOverride_LPVVplInjectionBias : 1; // 0x01(0x01)
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x01(0x01)
	char bOverride_NumberOfPropagationSteps : 1; // 0x01(0x01)
	char bFreezeLPVUpdate : 1; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float LPVIntensity; // 0x04(0x04)
	float LPVVplInjectionBias; // 0x08(0x04)
	float LPVSize; // 0x0c(0x04)
	float LPVSecondaryOcclusionIntensity; // 0x10(0x04)
	float LPVSecondaryBounceIntensity; // 0x14(0x04)
	float LPVGeometryVolumeBias; // 0x18(0x04)
	float LPVEmissiveInjectionIntensity; // 0x1c(0x04)
	float LPVDirectionalOcclusionIntensity; // 0x20(0x04)
	float LPVDirectionalOcclusionRadius; // 0x24(0x04)
	float LPVDiffuseOcclusionExponent; // 0x28(0x04)
	float LPVSpecularOcclusionExponent; // 0x2c(0x04)
	float LPVDiffuseOcclusionIntensity; // 0x30(0x04)
	float LPVSpecularOcclusionIntensity; // 0x34(0x04)
	int32_t LPVNumberOfPropagationSteps; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FTransform LPVWorldRef; // 0x40(0x30)
};

// ScriptStruct Engine.MinimalViewInfo
// Size: 0x5a0 (Inherited: 0x00)
struct FMinimalViewInfo {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	char UnknownData_18[0x10]; // 0x18(0x10)
	float FOV; // 0x28(0x04)
	float OrthoWidth; // 0x2c(0x04)
	float OrthoNearClipPlane; // 0x30(0x04)
	float OrthoFarClipPlane; // 0x34(0x04)
	float AspectRatio; // 0x38(0x04)
	char bConstrainAspectRatio : 1; // 0x3c(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x3c(0x01)
	char UnknownData_3C_2 : 6; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	char ProjectionMode; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	float PostProcessBlendWeight; // 0x44(0x04)
	char UnknownData_48[0x8]; // 0x48(0x08)
	struct FPostProcessSettings PostProcessSettings; // 0x50(0x540)
	char UnknownData_590[0x10]; // 0x590(0x10)
};

// ScriptStruct Engine.VOscillator
// Size: 0x24 (Inherited: 0x00)
struct FVOscillator {
	struct FFOscillator X; // 0x00(0x0c)
	struct FFOscillator Y; // 0x0c(0x0c)
	struct FFOscillator Z; // 0x18(0x0c)
};

// ScriptStruct Engine.FOscillator
// Size: 0x0c (Inherited: 0x00)
struct FFOscillator {
	float Amplitude; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	char InitialOffset; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.ROscillator
// Size: 0x24 (Inherited: 0x00)
struct FROscillator {
	struct FFOscillator Pitch; // 0x00(0x0c)
	struct FFOscillator Yaw; // 0x0c(0x0c)
	struct FFOscillator Roll; // 0x18(0x0c)
};

// ScriptStruct Engine.ViewTargetTransitionParams
// Size: 0x10 (Inherited: 0x00)
struct FViewTargetTransitionParams {
	float BlendTime; // 0x00(0x04)
	char BlendFunction; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	float BlendExp; // 0x08(0x04)
	char bLockOutgoing : 1; // 0x0c(0x01)
	char UnknownData_C_1 : 7; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.TViewTarget
// Size: 0x5c0 (Inherited: 0x00)
struct FTViewTarget {
	struct AActor* Target; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FMinimalViewInfo POV; // 0x10(0x5a0)
	struct APlayerState* PlayerState; // 0x5b0(0x08)
	char UnknownData_5B8[0x8]; // 0x5b8(0x08)
};

// ScriptStruct Engine.CameraCacheEntry
// Size: 0x5b0 (Inherited: 0x00)
struct FCameraCacheEntry {
	float TimeStamp; // 0x00(0x04)
	char UnknownData_4[0xc]; // 0x04(0x0c)
	struct FMinimalViewInfo POV; // 0x10(0x5a0)
};

// ScriptStruct Engine.NameCurve
// Size: 0x68 (Inherited: 0x58)
struct FNameCurve : FIndexedCurve {
	struct TArray<struct FNameCurveKey> Keys; // 0x58(0x10)
};

// ScriptStruct Engine.NameCurveKey
// Size: 0x0c (Inherited: 0x00)
struct FNameCurveKey {
	float Time; // 0x00(0x04)
	struct FName Value; // 0x04(0x08)
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// Size: 0x18 (Inherited: 0x00)
struct FActiveForceFeedbackEffect {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// Size: 0x88 (Inherited: 0x00)
struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x00(0x01)
	char bAffectsLeftSmall : 1; // 0x00(0x01)
	char bAffectsRightLarge : 1; // 0x00(0x01)
	char bAffectsRightSmall : 1; // 0x00(0x01)
	char bAffectsLeftTrigger : 1; // 0x00(0x01)
	char bAffectsRightTrigger : 1; // 0x00(0x01)
	char UnknownData_0_6 : 2; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FRuntimeFloatCurve Curve; // 0x08(0x80)
};

// ScriptStruct Engine.LevelStreamingStatusUpdateInfo
// Size: 0x18 (Inherited: 0x00)
struct FLevelStreamingStatusUpdateInfo {
	struct FString PackageName; // 0x00(0x10)
	int32_t LODIndex; // 0x10(0x04)
	char bNewShouldBeLoaded : 1; // 0x14(0x01)
	char bNewShouldBeVisible : 1; // 0x14(0x01)
	char bNewShouldBlockOnLoad : 1; // 0x14(0x01)
	char UnknownData_14_3 : 5; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Engine.DebugTextInfo
// Size: 0x60 (Inherited: 0x00)
struct FDebugTextInfo {
	struct AActor* SrcActor; // 0x00(0x08)
	struct FVector SrcActorOffset; // 0x08(0x0c)
	struct FVector SrcActorDesiredOffset; // 0x14(0x0c)
	struct FString DebugText; // 0x20(0x10)
	float TimeRemaining; // 0x30(0x04)
	float Duration; // 0x34(0x04)
	struct FColor TextColor; // 0x38(0x04)
	char bAbsoluteLocation : 1; // 0x3c(0x01)
	char bKeepAttachedToActor : 1; // 0x3c(0x01)
	char bDrawShadow : 1; // 0x3c(0x01)
	char UnknownData_3C_3 : 5; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	struct FVector OrigActorLocation; // 0x40(0x0c)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct UFont* Font; // 0x50(0x08)
	float FontScale; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Engine.GameClassShortName
// Size: 0x20 (Inherited: 0x00)
struct FGameClassShortName {
	struct FString ShortName; // 0x00(0x10)
	struct FString GameClassName; // 0x10(0x10)
};

// ScriptStruct Engine.MergedCollisionActorsSimplification
// Size: 0x0c (Inherited: 0x00)
struct FMergedCollisionActorsSimplification {
	struct FCollisionMergingSettings MergeCollisionSettings; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float MaxBoundRadius; // 0x04(0x04)
	int32_t MinNumberOfComponentsToMerge; // 0x08(0x04)
};

// ScriptStruct Engine.HierarchicalSimplification
// Size: 0xd8 (Inherited: 0x00)
struct FHierarchicalSimplification {
	bool bSimplifyMesh; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float DrawDistance; // 0x04(0x04)
	float DesiredBoundRadius; // 0x08(0x04)
	float DesiredFillingPercentage; // 0x0c(0x04)
	int32_t MinNumberOfActorsToBuild; // 0x10(0x04)
	struct FMeshProxySettings ProxySetting; // 0x14(0x70)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct FMeshMergingSettings MergeSetting; // 0x88(0x50)
};

// ScriptStruct Engine.NetViewer
// Size: 0x58 (Inherited: 0x00)
struct FNetViewer {
	struct AActor* InViewer; // 0x00(0x08)
	struct AActor* ViewTarget; // 0x08(0x08)
	struct TArray<struct FVector> CachedViewLocations; // 0x10(0x10)
	struct FVector ViewDir; // 0x20(0x0c)
	char UnknownData_2C[0x2c]; // 0x2c(0x2c)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// Size: 0x44 (Inherited: 0x00)
struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x00(0x04)
	int32_t NumIndirectLightingBounces; // 0x04(0x04)
	float IndirectLightingQuality; // 0x08(0x04)
	float IndirectLightingSmoothness; // 0x0c(0x04)
	struct FColor EnvironmentColor; // 0x10(0x04)
	float EnvironmentIntensity; // 0x14(0x04)
	float EmissiveBoost; // 0x18(0x04)
	float DiffuseBoost; // 0x1c(0x04)
	char bUseAmbientOcclusion : 1; // 0x20(0x01)
	char bGenerateAmbientOcclusionMaterialMask : 1; // 0x20(0x01)
	char UnknownData_20_2 : 6; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	float DirectIlluminationOcclusionFraction; // 0x24(0x04)
	float IndirectIlluminationOcclusionFraction; // 0x28(0x04)
	float OcclusionExponent; // 0x2c(0x04)
	float FullyOccludedSamplesFraction; // 0x30(0x04)
	float MaxOcclusionDistance; // 0x34(0x04)
	char bVisualizeMaterialDiffuse : 1; // 0x38(0x01)
	char bVisualizeAmbientOcclusion : 1; // 0x38(0x01)
	char UnknownData_38_2 : 6; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	float VolumeLightSamplePlacementScale; // 0x3c(0x04)
	char bCompressLightmaps : 1; // 0x40(0x01)
	char UnknownData_40_1 : 7; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
};

// ScriptStruct Engine.GameModePrefix
// Size: 0x20 (Inherited: 0x00)
struct FGameModePrefix {
	struct FString Prefix; // 0x00(0x10)
	struct FString GameMode; // 0x10(0x10)
};

// ScriptStruct Engine.InterpGroupActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FInterpGroupActorInfo {
	struct FName ObjectName; // 0x00(0x08)
	struct TArray<struct AActor*> Actors; // 0x08(0x10)
};

// ScriptStruct Engine.CameraCutInfo
// Size: 0x10 (Inherited: 0x00)
struct FCameraCutInfo {
	struct FVector Location; // 0x00(0x0c)
	float TimeStamp; // 0x0c(0x04)
};

// ScriptStruct Engine.NavigationFilterFlags
// Size: 0x04 (Inherited: 0x00)
struct FNavigationFilterFlags {
	char bNavFlag0 : 1; // 0x00(0x01)
	char bNavFlag1 : 1; // 0x00(0x01)
	char bNavFlag2 : 1; // 0x00(0x01)
	char bNavFlag3 : 1; // 0x00(0x01)
	char bNavFlag4 : 1; // 0x00(0x01)
	char bNavFlag5 : 1; // 0x00(0x01)
	char bNavFlag6 : 1; // 0x00(0x01)
	char bNavFlag7 : 1; // 0x00(0x01)
	char bNavFlag8 : 1; // 0x01(0x01)
	char bNavFlag9 : 1; // 0x01(0x01)
	char bNavFlag10 : 1; // 0x01(0x01)
	char bNavFlag11 : 1; // 0x01(0x01)
	char bNavFlag12 : 1; // 0x01(0x01)
	char bNavFlag13 : 1; // 0x01(0x01)
	char bNavFlag14 : 1; // 0x01(0x01)
	char bNavFlag15 : 1; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.NavigationFilterArea
// Size: 0x18 (Inherited: 0x00)
struct FNavigationFilterArea {
	struct UClass* AreaClass; // 0x00(0x08)
	float TravelCostOverride; // 0x08(0x04)
	float EnteringCostOverride; // 0x0c(0x04)
	char bIsExcluded : 1; // 0x10(0x01)
	char bOverrideTravelCost : 1; // 0x10(0x01)
	char bOverrideEnteringCost : 1; // 0x10(0x01)
	char UnknownData_10_3 : 5; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.SupportedAreaData
// Size: 0x20 (Inherited: 0x00)
struct FSupportedAreaData {
	struct FString AreaClassName; // 0x00(0x10)
	int32_t AreaID; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct UClass* AreaClass; // 0x18(0x08)
};

// ScriptStruct Engine.NavGraphNode
// Size: 0x18 (Inherited: 0x00)
struct FNavGraphNode {
	struct UObject* Owner; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.NavGraphEdge
// Size: 0x18 (Inherited: 0x00)
struct FNavGraphEdge {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.NavigationSegmentLink
// Size: 0x60 (Inherited: 0x30)
struct FNavigationSegmentLink : FNavigationLinkBase {
	struct FVector LeftStart; // 0x30(0x0c)
	struct FVector LeftEnd; // 0x3c(0x0c)
	struct FVector RightStart; // 0x48(0x0c)
	struct FVector RightEnd; // 0x54(0x0c)
};

// ScriptStruct Engine.NavigationLinkBase
// Size: 0x30 (Inherited: 0x00)
struct FNavigationLinkBase {
	float LeftProjectHeight; // 0x00(0x04)
	float MaxFallDownLength; // 0x04(0x04)
	char Direction; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	float SnapRadius; // 0x10(0x04)
	float SnapHeight; // 0x14(0x04)
	char bUseSnapHeight : 1; // 0x18(0x01)
	char bSnapToCheapestArea : 1; // 0x18(0x01)
	char UnknownData_18_2 : 6; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct UClass* AreaClass; // 0x20(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x28(0x04)
	char bSupportsAgent0 : 1; // 0x2c(0x01)
	char bSupportsAgent1 : 1; // 0x2c(0x01)
	char bSupportsAgent2 : 1; // 0x2c(0x01)
	char bSupportsAgent3 : 1; // 0x2c(0x01)
	char bSupportsAgent4 : 1; // 0x2c(0x01)
	char bSupportsAgent5 : 1; // 0x2c(0x01)
	char bSupportsAgent6 : 1; // 0x2c(0x01)
	char bSupportsAgent7 : 1; // 0x2c(0x01)
	char bSupportsAgent8 : 1; // 0x2d(0x01)
	char bSupportsAgent9 : 1; // 0x2d(0x01)
	char bSupportsAgent10 : 1; // 0x2d(0x01)
	char bSupportsAgent11 : 1; // 0x2d(0x01)
	char bSupportsAgent12 : 1; // 0x2d(0x01)
	char bSupportsAgent13 : 1; // 0x2d(0x01)
	char bSupportsAgent14 : 1; // 0x2d(0x01)
	char bSupportsAgent15 : 1; // 0x2d(0x01)
	char UnknownData_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct Engine.NavigationLink
// Size: 0x48 (Inherited: 0x30)
struct FNavigationLink : FNavigationLinkBase {
	struct FVector Left; // 0x30(0x0c)
	struct FVector Right; // 0x3c(0x0c)
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// Size: 0x14 (Inherited: 0x00)
struct FLightmassMaterialInterfaceSettings {
	char bCastShadowAsMasked : 1; // 0x00(0x01)
	char UnknownData_0_1 : 7; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float EmissiveBoost; // 0x04(0x04)
	float DiffuseBoost; // 0x08(0x04)
	float ExportResolutionScale; // 0x0c(0x04)
	char bOverrideCastShadowAsMasked : 1; // 0x10(0x01)
	char bOverrideEmissiveBoost : 1; // 0x10(0x01)
	char bOverrideDiffuseBoost : 1; // 0x10(0x01)
	char bOverrideExportResolutionScale : 1; // 0x10(0x01)
	char UnknownData_10_4 : 4; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.MaterialRelevance
// Size: 0x0c (Inherited: 0x00)
struct FMaterialRelevance {
	char bOpaque : 1; // 0x00(0x01)
	char bMasked : 1; // 0x00(0x01)
	char bDistortion : 1; // 0x00(0x01)
	char bSeparateTranslucency : 1; // 0x00(0x01)
	char bNormalTranslucency : 1; // 0x00(0x01)
	char bDisableDepthTest : 1; // 0x00(0x01)
	char bOutputsVelocityInBasePass : 1; // 0x00(0x01)
	char bUsesGlobalDistanceField : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	uint16_t ShadingModelMask; // 0x04(0x02)
	char UnknownData_6[0x2]; // 0x06(0x02)
	char bOITTranslucencyRelevance : 1; // 0x08(0x01)
	char bOITAfterTranslucencyRelevance : 1; // 0x08(0x01)
	char bLowResTranslucencyRelevance : 1; // 0x08(0x01)
	char bLowResCloudsRelevance : 1; // 0x08(0x01)
	char bMaskPassRelevance : 1; // 0x08(0x01)
	char bTranslucentBeforeTranslucency : 1; // 0x08(0x01)
	char bTranslucentBeforeVolumeFog : 1; // 0x08(0x01)
	char bTranslucentWithDepthWrite : 1; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.SpriteCategoryInfo
// Size: 0x78 (Inherited: 0x00)
struct FSpriteCategoryInfo {
	struct FName Category; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x38)
	struct FText Description; // 0x40(0x38)
};

// ScriptStruct Engine.NamedEmitterMaterial
// Size: 0x10 (Inherited: 0x00)
struct FNamedEmitterMaterial {
	struct FName Name; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Engine.LODSoloTrack
// Size: 0x10 (Inherited: 0x00)
struct FLODSoloTrack {
	struct TArray<char> SoloEnableSetting; // 0x00(0x10)
};

// ScriptStruct Engine.ParticleSystemLOD
// Size: 0x01 (Inherited: 0x00)
struct FParticleSystemLOD {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.ParticleSysParam
// Size: 0x50 (Inherited: 0x00)
struct FParticleSysParam {
	struct FName Name; // 0x00(0x08)
	char ParamType; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float Scalar; // 0x0c(0x04)
	float Scalar_Low; // 0x10(0x04)
	struct FVector Vector; // 0x14(0x0c)
	struct FVector Vector_Low; // 0x20(0x0c)
	struct FColor Color; // 0x2c(0x04)
	struct AActor* Actor; // 0x30(0x08)
	struct UMaterialInterface* Material; // 0x38(0x08)
	struct TArray<struct FEmitterPointData> EmitterPoints; // 0x40(0x10)
};

// ScriptStruct Engine.EmitterPointData
// Size: 0x40 (Inherited: 0x00)
struct FEmitterPointData {
	struct FVector4 Position; // 0x00(0x10)
	struct FVector4 InheritedVelocity; // 0x10(0x10)
	struct FVector4 Orientation; // 0x20(0x10)
	struct FVector Scale; // 0x30(0x0c)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Engine.TriMeshCollisionData
// Size: 0x38 (Inherited: 0x00)
struct FTriMeshCollisionData {
	struct TArray<struct FVector> Vertices; // 0x00(0x10)
	struct TArray<struct FTriIndices> Indices; // 0x10(0x10)
	char bFlipNormals : 1; // 0x20(0x01)
	char UnknownData_20_1 : 7; // 0x20(0x01)
	char UnknownData_21[0x17]; // 0x21(0x17)
};

// ScriptStruct Engine.TriIndices
// Size: 0x0c (Inherited: 0x00)
struct FTriIndices {
	int32_t v0; // 0x00(0x04)
	int32_t v1; // 0x04(0x04)
	int32_t v2; // 0x08(0x04)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// Size: 0x10 (Inherited: 0x00)
struct FPreviewAssetAttachContainer {
	struct TArray<struct FPreviewAttachedObjectPair> AttachedObjects; // 0x00(0x10)
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// Size: 0x30 (Inherited: 0x00)
struct FPreviewAttachedObjectPair {
	struct UObject* AttachedObject; // 0x00(0x20)
	struct UObject* Object; // 0x20(0x08)
	struct FName AttachedTo; // 0x28(0x08)
};

// ScriptStruct Engine.DeformablesSettings
// Size: 0x14 (Inherited: 0x00)
struct FDeformablesSettings {
	float DistanceStiffness; // 0x00(0x04)
	float VolumeStiffness; // 0x04(0x04)
	float Damping; // 0x08(0x04)
	float MaxDistance; // 0x0c(0x04)
	float WeightMultiplier; // 0x10(0x04)
};

// ScriptStruct Engine.SkeletalMaterial
// Size: 0x10 (Inherited: 0x00)
struct FSkeletalMaterial {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	bool bEnableShadowCasting; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.ClothingAssetData
// Size: 0x40 (Inherited: 0x00)
struct FClothingAssetData {
	struct FName AssetName; // 0x00(0x08)
	struct FString ApexFileName; // 0x08(0x10)
	bool bClothPropertiesChanged; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	struct FClothPhysicsProperties PhysicsProperties; // 0x1c(0x24)
};

// ScriptStruct Engine.ClothPhysicsProperties
// Size: 0x24 (Inherited: 0x00)
struct FClothPhysicsProperties {
	float BendResistance; // 0x00(0x04)
	float ShearResistance; // 0x04(0x04)
	float StretchLimit; // 0x08(0x04)
	float Friction; // 0x0c(0x04)
	float Damping; // 0x10(0x04)
	float Drag; // 0x14(0x04)
	float GravityScale; // 0x18(0x04)
	float InertiaBlend; // 0x1c(0x04)
	float SelfCollisionThickness; // 0x20(0x04)
};

// ScriptStruct Engine.MorphTargetMap
// Size: 0x10 (Inherited: 0x00)
struct FMorphTargetMap {
	struct FName Name; // 0x00(0x08)
	struct UMorphTarget* MorphTarget; // 0x08(0x08)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// Size: 0xf0 (Inherited: 0x00)
struct FSkeletalMeshLODInfo {
	float ScreenSize; // 0x00(0x04)
	float LODHysteresis; // 0x04(0x04)
	struct TArray<int32_t> LODMaterialMap; // 0x08(0x10)
	struct TArray<struct FTriangleSortSettings> TriangleSortSettings; // 0x18(0x10)
	char bHasBeenSimplified : 1; // 0x28(0x01)
	char UnknownData_28_1 : 7; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x30(0x70)
	struct FSimplygonRemeshingSettings RemeshingSettings; // 0xa0(0x50)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size: 0x70 (Inherited: 0x00)
struct FSkeletalMeshOptimizationSettings {
	char ReductionMethod; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float MaxDeviationPercentage; // 0x08(0x04)
	float WeldingThreshold; // 0x0c(0x04)
	bool bRecalcNormals; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float NormalsThreshold; // 0x14(0x04)
	char SilhouetteImportance; // 0x18(0x01)
	char TextureImportance; // 0x19(0x01)
	char ShadingImportance; // 0x1a(0x01)
	char SkinningImportance; // 0x1b(0x01)
	float BoneReductionRatio; // 0x1c(0x04)
	int32_t MaxBonesPerVertex; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct TArray<struct FBoneReference> BonesToRemove; // 0x28(0x10)
	int32_t BaseLODModel; // 0x38(0x04)
	int32_t LODChainLastIndex; // 0x3c(0x04)
	bool bForceRebuild; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
	struct FSimplygonMaterialLODSettings MaterialLODSettings; // 0x48(0x28)
};

// ScriptStruct Engine.TriangleSortSettings
// Size: 0x0c (Inherited: 0x00)
struct FTriangleSortSettings {
	char TriangleSorting; // 0x00(0x01)
	char CustomLeftRightAxis; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	struct FName CustomLeftRightBoneName; // 0x04(0x08)
};

// ScriptStruct Engine.BoneMirrorExport
// Size: 0x14 (Inherited: 0x00)
struct FBoneMirrorExport {
	struct FName BoneName; // 0x00(0x08)
	struct FName SourceBoneName; // 0x08(0x08)
	char BoneFlipAxis; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.BoneMirrorInfo
// Size: 0x08 (Inherited: 0x00)
struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x00(0x04)
	char BoneFlipAxis; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.AnimationGroupReference
// Size: 0x0c (Inherited: 0x00)
struct FAnimationGroupReference {
	struct FName GroupName; // 0x00(0x08)
	char GroupRole; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.RootMotionMovementParams
// Size: 0x40 (Inherited: 0x00)
struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float BlendWeight; // 0x04(0x04)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FTransform RootMotionTransform; // 0x10(0x30)
};

// ScriptStruct Engine.AnimGroupInstance
// Size: 0x18 (Inherited: 0x00)
struct FAnimGroupInstance {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.AnimTickRecord
// Size: 0x40 (Inherited: 0x00)
struct FAnimTickRecord {
	struct UAnimationAsset* SourceAsset; // 0x00(0x08)
	char UnknownData_8[0x38]; // 0x08(0x38)
};

// ScriptStruct Engine.AnimExtractContext
// Size: 0x08 (Inherited: 0x00)
struct FAnimExtractContext {
	bool bExtractRootMotion; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float CurrentTime; // 0x04(0x04)
};

// ScriptStruct Engine.BlendFilter
// Size: 0x90 (Inherited: 0x00)
struct FBlendFilter {
	char UnknownData_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.BlendSampleData
// Size: 0x20 (Inherited: 0x00)
struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x00(0x04)
	float TotalWeight; // 0x04(0x04)
	float Time; // 0x08(0x04)
	char UnknownData_C[0x14]; // 0x0c(0x14)
};

// ScriptStruct Engine.BasedMovementInfo
// Size: 0x38 (Inherited: 0x00)
struct FBasedMovementInfo {
	struct UPrimitiveComponent* MovementBase; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct FVector_NetQuantize100 Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	bool bServerHasBaseComponent; // 0x28(0x01)
	bool bRelativeRotation; // 0x29(0x01)
	char UnknownData_2A[0x2]; // 0x2a(0x02)
	struct FVector LinearVelocity; // 0x2c(0x0c)
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// Size: 0x48 (Inherited: 0x00)
struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FRepRootMotionMontage RootMotion; // 0x08(0x40)
};

// ScriptStruct Engine.RepRootMotionMontage
// Size: 0x40 (Inherited: 0x00)
struct FRepRootMotionMontage {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	float Position; // 0x08(0x04)
	struct FVector_NetQuantize10 Location; // 0x0c(0x0c)
	struct FRotator Rotation; // 0x18(0x0c)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct UPrimitiveComponent* MovementBase; // 0x28(0x08)
	struct FName MovementBaseBoneName; // 0x30(0x08)
	bool bRelativePosition; // 0x38(0x01)
	bool bRelativeRotation; // 0x39(0x01)
	char UnknownData_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshComponentLODInfo {
	struct TArray<bool> HiddenMaterials; // 0x00(0x10)
};

// ScriptStruct Engine.ActiveVertexAnim
// Size: 0x10 (Inherited: 0x00)
struct FActiveVertexAnim {
	struct UVertexAnimBase* VertAnim; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	float Time; // 0x0c(0x04)
};

// ScriptStruct Engine.ConstraintInstance
// Size: 0x160 (Inherited: 0x00)
struct FConstraintInstance {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct USceneComponent* OwnerComponent; // 0x08(0x08)
	char UnknownData_10[0xc]; // 0x10(0x0c)
	struct FName JointName; // 0x1c(0x08)
	struct FName ConstraintBone1; // 0x24(0x08)
	struct FName ConstraintBone2; // 0x2c(0x08)
	struct FVector Pos1; // 0x34(0x0c)
	struct FVector PriAxis1; // 0x40(0x0c)
	struct FVector SecAxis1; // 0x4c(0x0c)
	struct FVector Pos2; // 0x58(0x0c)
	struct FVector PriAxis2; // 0x64(0x0c)
	struct FVector SecAxis2; // 0x70(0x0c)
	char bDisableCollision : 1; // 0x7c(0x01)
	char bEnableProjection : 1; // 0x7c(0x01)
	char UnknownData_7C_2 : 6; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
	float ProjectionLinearTolerance; // 0x80(0x04)
	float ProjectionAngularTolerance; // 0x84(0x04)
	char LinearXMotion; // 0x88(0x01)
	char LinearYMotion; // 0x89(0x01)
	char LinearZMotion; // 0x8a(0x01)
	char UnknownData_8B[0x1]; // 0x8b(0x01)
	float LinearLimitSize; // 0x8c(0x04)
	char bLinearLimitSoft : 1; // 0x90(0x01)
	char UnknownData_90_1 : 7; // 0x90(0x01)
	char UnknownData_91[0x3]; // 0x91(0x03)
	float LinearLimitStiffness; // 0x94(0x04)
	float LinearLimitDamping; // 0x98(0x04)
	char bLinearBreakable : 1; // 0x9c(0x01)
	char UnknownData_9C_1 : 7; // 0x9c(0x01)
	char UnknownData_9D[0x3]; // 0x9d(0x03)
	float LinearBreakThreshold; // 0xa0(0x04)
	char AngularSwing1Motion; // 0xa4(0x01)
	char AngularTwistMotion; // 0xa5(0x01)
	char AngularSwing2Motion; // 0xa6(0x01)
	char UnknownData_A7[0x1]; // 0xa7(0x01)
	char bSwingLimitSoft : 1; // 0xa8(0x01)
	char bTwistLimitSoft : 1; // 0xa8(0x01)
	char UnknownData_A8_2 : 6; // 0xa8(0x01)
	char UnknownData_A9[0x3]; // 0xa9(0x03)
	float Swing1LimitAngle; // 0xac(0x04)
	float TwistLimitAngle; // 0xb0(0x04)
	float Swing2LimitAngle; // 0xb4(0x04)
	float SwingLimitStiffness; // 0xb8(0x04)
	float SwingLimitDamping; // 0xbc(0x04)
	float TwistLimitStiffness; // 0xc0(0x04)
	float TwistLimitDamping; // 0xc4(0x04)
	struct FRotator AngularRotationOffset; // 0xc8(0x0c)
	char bAngularBreakable : 1; // 0xd4(0x01)
	char UnknownData_D4_1 : 7; // 0xd4(0x01)
	char UnknownData_D5[0x3]; // 0xd5(0x03)
	float AngularBreakThreshold; // 0xd8(0x04)
	char bLinearXPositionDrive : 1; // 0xdc(0x01)
	char bLinearXVelocityDrive : 1; // 0xdc(0x01)
	char bLinearYPositionDrive : 1; // 0xdc(0x01)
	char bLinearYVelocityDrive : 1; // 0xdc(0x01)
	char bLinearZPositionDrive : 1; // 0xdc(0x01)
	char bLinearZVelocityDrive : 1; // 0xdc(0x01)
	char bLinearPositionDrive : 1; // 0xdc(0x01)
	char bLinearVelocityDrive : 1; // 0xdc(0x01)
	char UnknownData_DD[0x3]; // 0xdd(0x03)
	struct FVector LinearPositionTarget; // 0xe0(0x0c)
	struct FVector LinearVelocityTarget; // 0xec(0x0c)
	float LinearDriveSpring; // 0xf8(0x04)
	float LinearDriveDamping; // 0xfc(0x04)
	float LinearDriveForceLimit; // 0x100(0x04)
	char bSwingPositionDrive : 1; // 0x104(0x01)
	char bSwingVelocityDrive : 1; // 0x104(0x01)
	char bTwistPositionDrive : 1; // 0x104(0x01)
	char bTwistVelocityDrive : 1; // 0x104(0x01)
	char bAngularSlerpDrive : 1; // 0x104(0x01)
	char bAngularOrientationDrive : 1; // 0x104(0x01)
	char bEnableSwingDrive : 1; // 0x104(0x01)
	char bEnableTwistDrive : 1; // 0x104(0x01)
	char bAngularVelocityDrive : 1; // 0x105(0x01)
	char UnknownData_105_1 : 7; // 0x105(0x01)
	char UnknownData_106[0xa]; // 0x106(0x0a)
	struct FQuat AngularPositionTarget; // 0x110(0x10)
	char AngularDriveMode; // 0x120(0x01)
	char UnknownData_121[0x3]; // 0x121(0x03)
	struct FRotator AngularOrientationTarget; // 0x124(0x0c)
	struct FVector AngularVelocityTarget; // 0x130(0x0c)
	float AngularDriveSpring; // 0x13c(0x04)
	float AngularDriveDamping; // 0x140(0x04)
	float AngularDriveForceLimit; // 0x144(0x04)
	char UnknownData_148[0x18]; // 0x148(0x18)
};

// ScriptStruct Engine.SmartNameContainer
// Size: 0x50 (Inherited: 0x00)
struct FSmartNameContainer {
	char UnknownData_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.SmartNameMapping
// Size: 0x68 (Inherited: 0x00)
struct FSmartNameMapping {
	char UnknownData_0[0x68]; // 0x00(0x68)
};

// ScriptStruct Engine.AnimSlotGroup
// Size: 0x18 (Inherited: 0x00)
struct FAnimSlotGroup {
	struct FName GroupName; // 0x00(0x08)
	struct TArray<struct FName> SlotNames; // 0x08(0x10)
};

// ScriptStruct Engine.RigConfiguration
// Size: 0x18 (Inherited: 0x00)
struct FRigConfiguration {
	struct URig* Rig; // 0x00(0x08)
	struct TArray<struct FNameMapping> BoneMappingTable; // 0x08(0x10)
};

// ScriptStruct Engine.NameMapping
// Size: 0x10 (Inherited: 0x00)
struct FNameMapping {
	struct FName NodeName; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
};

// ScriptStruct Engine.BoneReductionSetting
// Size: 0x10 (Inherited: 0x00)
struct FBoneReductionSetting {
	struct TArray<struct FName> BonesToRemove; // 0x00(0x10)
};

// ScriptStruct Engine.ReferencePose
// Size: 0x18 (Inherited: 0x00)
struct FReferencePose {
	struct FName PoseName; // 0x00(0x08)
	struct TArray<struct FTransform> ReferencePose; // 0x08(0x10)
};

// ScriptStruct Engine.BoneNode
// Size: 0x01 (Inherited: 0x00)
struct FBoneNode {
	char TranslationRetargetingMode; // 0x00(0x01)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// Size: 0x20 (Inherited: 0x00)
struct FSkeletonToMeshLinkup {
	struct TArray<int32_t> SkeletonToMeshTable; // 0x00(0x10)
	struct TArray<int32_t> MeshToSkeletonTable; // 0x10(0x10)
};

// ScriptStruct Engine.AnimLinkableElement
// Size: 0x30 (Inherited: 0x00)
struct FAnimLinkableElement {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UAnimMontage* LinkedMontage; // 0x08(0x08)
	int32_t SlotIndex; // 0x10(0x04)
	int32_t SegmentIndex; // 0x14(0x04)
	char LinkMethod; // 0x18(0x01)
	char CachedLinkMethod; // 0x19(0x01)
	char UnknownData_1A[0x2]; // 0x1a(0x02)
	float SegmentBeginTime; // 0x1c(0x04)
	float SegmentLength; // 0x20(0x04)
	float LinkValue; // 0x24(0x04)
	struct UAnimSequenceBase* LinkedSequence; // 0x28(0x08)
};

// ScriptStruct Engine.AnimNotifyTrack
// Size: 0x28 (Inherited: 0x00)
struct FAnimNotifyTrack {
	struct FName TrackName; // 0x00(0x08)
	struct FLinearColor TrackColor; // 0x08(0x10)
	char UnknownData_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Engine.AnimNotifyEvent
// Size: 0xb0 (Inherited: 0x30)
struct FAnimNotifyEvent : FAnimLinkableElement {
	float DisplayTime; // 0x30(0x04)
	float TriggerTimeOffset; // 0x34(0x04)
	float EndTriggerTimeOffset; // 0x38(0x04)
	float TriggerWeightThreshold; // 0x3c(0x04)
	struct FName NotifyName; // 0x40(0x08)
	struct UAnimNotify* Notify; // 0x48(0x08)
	struct UAnimNotifyState* NotifyStateClass; // 0x50(0x08)
	struct UAnimNotifyCondition* NotifyCondition; // 0x58(0x08)
	float Duration; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
	struct FAnimLinkableElement EndLink; // 0x68(0x30)
	bool bConvertedFromBranchingPoint; // 0x98(0x01)
	char MontageTickType; // 0x99(0x01)
	char UnknownData_9A[0x2]; // 0x9a(0x02)
	float NotifyTriggerChance; // 0x9c(0x04)
	char NotifyFilterType; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	int32_t NotifyFilterLOD; // 0xa4(0x04)
	int32_t TrackIndex; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.RawCurveTracks
// Size: 0x10 (Inherited: 0x00)
struct FRawCurveTracks {
	struct TArray<struct FFloatCurve> FloatCurves; // 0x00(0x10)
};

// ScriptStruct Engine.FloatCurve
// Size: 0x90 (Inherited: 0x18)
struct FFloatCurve : FAnimCurveBase {
	struct FRichCurve FloatCurve; // 0x18(0x78)
};

// ScriptStruct Engine.AnimCurveBase
// Size: 0x18 (Inherited: 0x00)
struct FAnimCurveBase {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FName LastObservedName; // 0x08(0x08)
	char UnknownData_10[0x4]; // 0x10(0x04)
	int32_t CurveTypeFlags; // 0x14(0x04)
};

// ScriptStruct Engine.TransformCurve
// Size: 0x498 (Inherited: 0x18)
struct FTransformCurve : FAnimCurveBase {
	struct FVectorCurve TranslationCurve; // 0x18(0x180)
	struct FVectorCurve RotationCurve; // 0x198(0x180)
	struct FVectorCurve ScaleCurve; // 0x318(0x180)
};

// ScriptStruct Engine.VectorCurve
// Size: 0x180 (Inherited: 0x18)
struct FVectorCurve : FAnimCurveBase {
	struct FRichCurve FloatCurves[0x03]; // 0x18(0x168)
};

// ScriptStruct Engine.SkeletalMeshComponentPreClothTickFunction
// Size: 0x50 (Inherited: 0x48)
struct FSkeletalMeshComponentPreClothTickFunction : FTickFunction {
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Engine.SingleAnimationPlayData
// Size: 0x20 (Inherited: 0x00)
struct FSingleAnimationPlayData {
	struct UAnimationAsset* AnimToPlay; // 0x00(0x08)
	struct UVertexAnimation* VertexAnimToPlay; // 0x08(0x08)
	char bSavedLooping : 1; // 0x10(0x01)
	char bSavedPlaying : 1; // 0x10(0x01)
	char UnknownData_10_2 : 6; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float SavedPosition; // 0x14(0x04)
	float SavedPlayRate; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.AnimTrack
// Size: 0x10 (Inherited: 0x00)
struct FAnimTrack {
	struct TArray<struct FAnimSegment> AnimSegments; // 0x00(0x10)
};

// ScriptStruct Engine.AnimSegment
// Size: 0x20 (Inherited: 0x00)
struct FAnimSegment {
	struct UAnimSequenceBase* AnimReference; // 0x00(0x08)
	float StartPos; // 0x08(0x04)
	float AnimStartTime; // 0x0c(0x04)
	float AnimEndTime; // 0x10(0x04)
	float AnimPlayRate; // 0x14(0x04)
	int32_t LoopingCount; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.RootMotionExtractionStep
// Size: 0x10 (Inherited: 0x00)
struct FRootMotionExtractionStep {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float StartPosition; // 0x08(0x04)
	float EndPosition; // 0x0c(0x04)
};

// ScriptStruct Engine.AlphaBlend
// Size: 0x30 (Inherited: 0x00)
struct FAlphaBlend {
	char BlendOption; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float BeginValue; // 0x04(0x04)
	float DesiredValue; // 0x08(0x04)
	float BlendTime; // 0x0c(0x04)
	struct UCurveFloat* CustomCurve; // 0x10(0x08)
	float AlphaLerp; // 0x18(0x04)
	float AlphaBlend; // 0x1c(0x04)
	float AlphaTarget; // 0x20(0x04)
	float BlendTimeRemaining; // 0x24(0x04)
	float BlendedValue; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.BakedAnimationStateMachine
// Size: 0x30 (Inherited: 0x00)
struct FBakedAnimationStateMachine {
	struct FName MachineName; // 0x00(0x08)
	int32_t InitialState; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FBakedAnimationState> States; // 0x10(0x10)
	struct TArray<struct FAnimationTransitionBetweenStates> Transitions; // 0x20(0x10)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// Size: 0x38 (Inherited: 0x08)
struct FAnimationTransitionBetweenStates : FAnimationStateBase {
	int32_t PreviousState; // 0x08(0x04)
	int32_t NextState; // 0x0c(0x04)
	float CrossfadeDuration; // 0x10(0x04)
	int32_t StartNotify; // 0x14(0x04)
	int32_t EndNotify; // 0x18(0x04)
	int32_t InterruptNotify; // 0x1c(0x04)
	char BlendMode; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct UCurveFloat* CustomCurve; // 0x28(0x08)
	char LogicType; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Engine.AnimationStateBase
// Size: 0x08 (Inherited: 0x00)
struct FAnimationStateBase {
	struct FName StateName; // 0x00(0x08)
};

// ScriptStruct Engine.BakedAnimationState
// Size: 0x50 (Inherited: 0x00)
struct FBakedAnimationState {
	struct FName StateName; // 0x00(0x08)
	struct FName PathedStateName; // 0x08(0x08)
	struct TArray<struct FBakedStateExitTransition> Transitions; // 0x10(0x10)
	int32_t StateRootNodeIndex; // 0x20(0x04)
	int32_t StartNotify; // 0x24(0x04)
	int32_t EndNotify; // 0x28(0x04)
	int32_t FullyBlendedNotify; // 0x2c(0x04)
	bool bIsAConduit; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	int32_t EntryRuleNodeIndex; // 0x34(0x04)
	struct TArray<int32_t> PlayerNodeIndices; // 0x38(0x10)
	bool CanBeReEntered; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Engine.BakedStateExitTransition
// Size: 0x20 (Inherited: 0x00)
struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x00(0x04)
	int32_t CustomResultNodeIndex; // 0x04(0x04)
	int32_t TransitionIndex; // 0x08(0x04)
	bool bDesiredTransitionReturnValue; // 0x0c(0x01)
	bool bAutomaticRemainingTimeRule; // 0x0d(0x01)
	char UnknownData_E[0x2]; // 0x0e(0x02)
	struct TArray<int32_t> PoseEvaluatorLinks; // 0x10(0x10)
};

// ScriptStruct Engine.AnimationState
// Size: 0x28 (Inherited: 0x08)
struct FAnimationState : FAnimationStateBase {
	struct TArray<struct FAnimationTransitionRule> Transitions; // 0x08(0x10)
	int32_t StateRootNodeIndex; // 0x18(0x04)
	int32_t StartNotify; // 0x1c(0x04)
	int32_t EndNotify; // 0x20(0x04)
	int32_t FullyBlendedNotify; // 0x24(0x04)
};

// ScriptStruct Engine.AnimationTransitionRule
// Size: 0x10 (Inherited: 0x00)
struct FAnimationTransitionRule {
	struct FName RuleToExecute; // 0x00(0x08)
	bool TransitionReturnVal; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	int32_t TransitionIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.SlotEvaluationPose
// Size: 0x48 (Inherited: 0x00)
struct FSlotEvaluationPose {
	char AdditiveType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)
	char UnknownData_8[0x40]; // 0x08(0x40)
};

// ScriptStruct Engine.PerBoneBlendWeights
// Size: 0x10 (Inherited: 0x00)
struct FPerBoneBlendWeights {
	struct TArray<struct FPerBoneBlendWeight> BoneBlendWeights; // 0x00(0x10)
};

// ScriptStruct Engine.PerBoneBlendWeight
// Size: 0x08 (Inherited: 0x00)
struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x00(0x04)
	float BlendWeight; // 0x04(0x04)
};

// ScriptStruct Engine.A2CSPose
// Size: 0x28 (Inherited: 0x10)
struct FA2CSPose : FA2Pose {
	char UnknownData_10[0x8]; // 0x10(0x08)
	struct TArray<char> ComponentSpaceFlags; // 0x18(0x10)
};

// ScriptStruct Engine.A2Pose
// Size: 0x10 (Inherited: 0x00)
struct FA2Pose {
	struct TArray<struct FTransform> Bones; // 0x00(0x10)
};

// ScriptStruct Engine.AnimMontageInstance
// Size: 0xa0 (Inherited: 0x00)
struct FAnimMontageInstance {
	struct UAnimMontage* Montage; // 0x00(0x08)
	float DesiredWeight; // 0x08(0x04)
	float Weight; // 0x0c(0x04)
	float BlendTime; // 0x10(0x04)
	float DefaultBlendTimeMultiplier; // 0x14(0x04)
	struct TArray<int32_t> NextSections; // 0x18(0x10)
	struct TArray<int32_t> PrevSections; // 0x28(0x10)
	bool bPlaying; // 0x38(0x01)
	char UnknownData_39[0x2f]; // 0x39(0x2f)
	struct TArray<struct FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x68(0x10)
	float Position; // 0x78(0x04)
	float PlayRate; // 0x7c(0x04)
	char UnknownData_80[0x20]; // 0x80(0x20)
};

// ScriptStruct Engine.BranchingPointMarker
// Size: 0x0c (Inherited: 0x00)
struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x00(0x04)
	float TriggerTime; // 0x04(0x04)
	char NotifyEventType; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.BranchingPoint
// Size: 0x40 (Inherited: 0x30)
struct FBranchingPoint : FAnimLinkableElement {
	struct FName EventName; // 0x30(0x08)
	float DisplayTime; // 0x38(0x04)
	float TriggerTimeOffset; // 0x3c(0x04)
};

// ScriptStruct Engine.SlotAnimationTrack
// Size: 0x18 (Inherited: 0x00)
struct FSlotAnimationTrack {
	struct FName SlotName; // 0x00(0x08)
	struct FAnimTrack AnimTrack; // 0x08(0x10)
};

// ScriptStruct Engine.CompositeSection
// Size: 0x58 (Inherited: 0x30)
struct FCompositeSection : FAnimLinkableElement {
	struct FName SectionName; // 0x30(0x08)
	float StartTime; // 0x38(0x04)
	struct FName NextSectionName; // 0x3c(0x08)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct TArray<struct UAnimMetaData*> MetaData; // 0x48(0x10)
};

// ScriptStruct Engine.NavAvoidanceMask
// Size: 0x04 (Inherited: 0x00)
struct FNavAvoidanceMask {
	char bGroup0 : 1; // 0x00(0x01)
	char bGroup1 : 1; // 0x00(0x01)
	char bGroup2 : 1; // 0x00(0x01)
	char bGroup3 : 1; // 0x00(0x01)
	char bGroup4 : 1; // 0x00(0x01)
	char bGroup5 : 1; // 0x00(0x01)
	char bGroup6 : 1; // 0x00(0x01)
	char bGroup7 : 1; // 0x00(0x01)
	char bGroup8 : 1; // 0x01(0x01)
	char bGroup9 : 1; // 0x01(0x01)
	char bGroup10 : 1; // 0x01(0x01)
	char bGroup11 : 1; // 0x01(0x01)
	char bGroup12 : 1; // 0x01(0x01)
	char bGroup13 : 1; // 0x01(0x01)
	char bGroup14 : 1; // 0x01(0x01)
	char bGroup15 : 1; // 0x01(0x01)
	char bGroup16 : 1; // 0x02(0x01)
	char bGroup17 : 1; // 0x02(0x01)
	char bGroup18 : 1; // 0x02(0x01)
	char bGroup19 : 1; // 0x02(0x01)
	char bGroup20 : 1; // 0x02(0x01)
	char bGroup21 : 1; // 0x02(0x01)
	char bGroup22 : 1; // 0x02(0x01)
	char bGroup23 : 1; // 0x02(0x01)
	char bGroup24 : 1; // 0x03(0x01)
	char bGroup25 : 1; // 0x03(0x01)
	char bGroup26 : 1; // 0x03(0x01)
	char bGroup27 : 1; // 0x03(0x01)
	char bGroup28 : 1; // 0x03(0x01)
	char bGroup29 : 1; // 0x03(0x01)
	char bGroup30 : 1; // 0x03(0x01)
	char bGroup31 : 1; // 0x03(0x01)
};

// ScriptStruct Engine.CharacterMovementComponentPreClothTickFunction
// Size: 0x50 (Inherited: 0x48)
struct FCharacterMovementComponentPreClothTickFunction : FTickFunction {
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Engine.FindFloorResult
// Size: 0x8c (Inherited: 0x00)
struct FFindFloorResult {
	char bBlockingHit : 1; // 0x00(0x01)
	char bWalkableFloor : 1; // 0x00(0x01)
	char bLineTrace : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float FloorDist; // 0x04(0x04)
	float LineDist; // 0x08(0x04)
	struct FHitResult HitResult; // 0x0c(0x80)
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// Size: 0x2c (Inherited: 0x00)
struct FAtmospherePrecomputeParameters {
	float DensityHeight; // 0x00(0x04)
	float DecayHeight; // 0x04(0x04)
	int32_t MaxScatteringOrder; // 0x08(0x04)
	int32_t TransmittanceTexWidth; // 0x0c(0x04)
	int32_t TransmittanceTexHeight; // 0x10(0x04)
	int32_t IrradianceTexWidth; // 0x14(0x04)
	int32_t IrradianceTexHeight; // 0x18(0x04)
	int32_t InscatterAltitudeSampleNum; // 0x1c(0x04)
	int32_t InscatterMuNum; // 0x20(0x04)
	int32_t InscatterMuSNum; // 0x24(0x04)
	int32_t InscatterNuNum; // 0x28(0x04)
};

// ScriptStruct Engine.AttenuationSettings
// Size: 0xc0 (Inherited: 0x00)
struct FAttenuationSettings {
	char bAttenuate : 1; // 0x00(0x01)
	char bSpatialize : 1; // 0x00(0x01)
	char bAttenuateWithLPF : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	char DistanceAlgorithm; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x08(0x80)
	char DistanceType; // 0x88(0x01)
	char AttenuationShape; // 0x89(0x01)
	char UnknownData_8A[0x2]; // 0x8a(0x02)
	float dBAttenuationAtMax; // 0x8c(0x04)
	float OmniRadius; // 0x90(0x04)
	char SpatializationAlgorithm; // 0x94(0x01)
	char UnknownData_95[0x3]; // 0x95(0x03)
	float RadiusMin; // 0x98(0x04)
	float RadiusMax; // 0x9c(0x04)
	struct FVector AttenuationShapeExtents; // 0xa0(0x0c)
	float ConeOffset; // 0xac(0x04)
	float FalloffDistance; // 0xb0(0x04)
	float LPFRadiusMin; // 0xb4(0x04)
	float LPFRadiusMax; // 0xb8(0x04)
	char UnknownData_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct Engine.AudioComponentParam
// Size: 0x20 (Inherited: 0x00)
struct FAudioComponentParam {
	struct FName ParamName; // 0x00(0x08)
	float FloatParam; // 0x08(0x04)
	bool BoolParam; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	int32_t IntParam; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct USoundWave* SoundWaveParam; // 0x18(0x08)
};

// ScriptStruct Engine.FogVolumeInfo
// Size: 0x130 (Inherited: 0x00)
struct FFogVolumeInfo {
	struct UFogVolumeComponent* Component; // 0x00(0x08)
	char UnknownData_8[0xf8]; // 0x08(0xf8)
	struct UTexture* VolumeTexture; // 0x100(0x08)
	struct UTexture* MeshFogVolumeTexture; // 0x108(0x08)
	char UnknownData_110[0x20]; // 0x110(0x20)
};

// ScriptStruct Engine.WaterSimPlane
// Size: 0x30 (Inherited: 0x00)
struct FWaterSimPlane {
	struct UClass* WaterId; // 0x00(0x08)
	struct UObject* WaterOwner; // 0x08(0x08)
	struct FPlane NonFFTPlane; // 0x10(0x10)
	bool bUseFFT; // 0x20(0x01)
	bool bActive; // 0x21(0x01)
	char UnknownData_22[0x2]; // 0x22(0x02)
	float FFTBasePlaneHeight; // 0x24(0x04)
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.MurkyRegion
// Size: 0x20 (Inherited: 0x00)
struct FMurkyRegion {
	bool Enabled; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FVector Position; // 0x04(0x0c)
	float InnerRadius; // 0x10(0x04)
	float OuterRadius; // 0x14(0x04)
	float Density; // 0x18(0x04)
	bool IsSuperHeatedWater; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.FFTWaterComponentParams
// Size: 0x310 (Inherited: 0x00)
struct FFFTWaterComponentParams {
	struct FLinearColor AmbientColour; // 0x00(0x10)
	struct FLinearColor WaterColour; // 0x10(0x10)
	struct FLinearColor ShallowWaterColour; // 0x20(0x10)
	struct FLinearColor BackLitColour; // 0x30(0x10)
	struct FLinearColor FoamColour; // 0x40(0x10)
	struct FLinearColor FoamHighlightColour; // 0x50(0x10)
	float FresnelPower; // 0x60(0x04)
	float SpecularBrightness; // 0x64(0x04)
	float FoamBrightness; // 0x68(0x04)
	float ReflectionBrightness; // 0x6c(0x04)
	float FoamFadeStart; // 0x70(0x04)
	float FoamFadeEnd; // 0x74(0x04)
	char DEBUG_Wireframe : 1; // 0x78(0x01)
	char UnknownData_78_1 : 7; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	float Size; // 0x7c(0x04)
	float WindSpeed; // 0x80(0x04)
	float WindSpeedInEditor; // 0x84(0x04)
	float CarrierWaveAmplitude; // 0x88(0x04)
	float CarrierWaveWaveLength; // 0x8c(0x04)
	float CarrierWavePropagationSpeed; // 0x90(0x04)
	float HorizonFadeDistance; // 0x94(0x04)
	float HorizonDarkenStart; // 0x98(0x04)
	float HorizonDarkenRange; // 0x9c(0x04)
	float CloudShadowDarkenStart; // 0xa0(0x04)
	float CloudShadowDarkenRange; // 0xa4(0x04)
	float CausticsDepth; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
	struct UTexture* FoamColourTex; // 0xb0(0x08)
	struct FFFTWaterComponentParticleParams ParticleParams; // 0xb8(0x248)
	float ExtendedPlaneSize; // 0x300(0x04)
	float ExtendedPlaneFadeDistance; // 0x304(0x04)
	struct FVector2D PositionOffset; // 0x308(0x08)
};

// ScriptStruct Engine.FFTWaterComponentParticleParams
// Size: 0x248 (Inherited: 0x00)
struct FFFTWaterComponentParticleParams {
	int32_t MaxParticlesPerFrame; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FFFTWaterComponentWaveParticleType WaveParticles[0x04]; // 0x08(0xe0)
	struct FFFTWaterComponentIntersectParticleType IntersectionParticles[0x04]; // 0xe8(0x160)
};

// ScriptStruct Engine.FFTWaterComponentIntersectParticleType
// Size: 0x58 (Inherited: 0x00)
struct FFFTWaterComponentIntersectParticleType {
	struct FVector2D VelocityRange; // 0x00(0x08)
	struct FVector2D FoamRange; // 0x08(0x08)
	struct FVector2D HeightRange; // 0x10(0x08)
	struct FVector2D ParticleWaveVelocityRange; // 0x18(0x08)
	struct FVector2D ParticleWaveAbsoluteSpeedDifferenceRange; // 0x20(0x08)
	float Density; // 0x28(0x04)
	float VolumeHorizontalVelocityWeight; // 0x2c(0x04)
	float HorizontalDirectionFromVolumeWeight; // 0x30(0x04)
	float HorizontalRandomVelocityWeight; // 0x34(0x04)
	float VolumeVerticalVelocityWeight; // 0x38(0x04)
	float VerticalRandomVelocityWeight; // 0x3c(0x04)
	float WaterVelocityWeight; // 0x40(0x04)
	float VelocityScaling; // 0x44(0x04)
	char UnderwaterParticles : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct UParticleComputeShaderData* ParticleComputeShaderData; // 0x50(0x08)
};

// ScriptStruct Engine.FFTWaterComponentWaveParticleType
// Size: 0x38 (Inherited: 0x00)
struct FFFTWaterComponentWaveParticleType {
	struct FVector2D SpawnRadiusRange; // 0x00(0x08)
	struct FVector2D FoamRange; // 0x08(0x08)
	struct FVector2D HeightRange; // 0x10(0x08)
	struct FVector2D AngleRange; // 0x18(0x08)
	struct FVector2D CalmWaterDampeningFactorRange; // 0x20(0x08)
	float Density; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct UParticleComputeShaderData* ParticleComputeShaderData; // 0x30(0x08)
};

// ScriptStruct Engine.BatchedPoint
// Size: 0x28 (Inherited: 0x00)
struct FBatchedPoint {
	struct FVector Position; // 0x00(0x0c)
	struct FLinearColor Color; // 0x0c(0x10)
	float PointSize; // 0x1c(0x04)
	float RemainingLifeTime; // 0x20(0x04)
	char DepthPriority; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Engine.BatchedLine
// Size: 0x34 (Inherited: 0x00)
struct FBatchedLine {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x04)
	float RemainingLifeTime; // 0x2c(0x04)
	char DepthPriority; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
};

// ScriptStruct Engine.MaterialSpriteElement
// Size: 0x28 (Inherited: 0x00)
struct FMaterialSpriteElement {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UCurveFloat* DistanceToOpacityCurve; // 0x08(0x08)
	char bSizeIsInScreenSpace : 1; // 0x10(0x01)
	char UnknownData_10_1 : 7; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float BaseSizeX; // 0x14(0x04)
	float BaseSizeY; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* DistanceToSizeCurve; // 0x20(0x08)
};

// ScriptStruct Engine.CustomProfile
// Size: 0x18 (Inherited: 0x00)
struct FCustomProfile {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x08(0x10)
};

// ScriptStruct Engine.CustomChannelSetup
// Size: 0x10 (Inherited: 0x00)
struct FCustomChannelSetup {
	char Channel; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	char DefaultResponse; // 0x0c(0x01)
	bool bTraceType; // 0x0d(0x01)
	bool bStaticObject; // 0x0e(0x01)
	char UnknownData_F[0x1]; // 0x0f(0x01)
};

// ScriptStruct Engine.CollisionResponseTemplate
// Size: 0x60 (Inherited: 0x00)
struct FCollisionResponseTemplate {
	struct FName Name; // 0x00(0x08)
	char CollisionEnabled; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FName ObjectTypeName; // 0x0c(0x08)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x18(0x10)
	struct FString HelpMessage; // 0x28(0x10)
	bool bCanModify; // 0x38(0x01)
	char UnknownData_39[0x27]; // 0x39(0x27)
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// Size: 0x28 (Inherited: 0x00)
struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FVector CamOrbitPoint; // 0x04(0x0c)
	struct FVector CamOrbitZoom; // 0x10(0x0c)
	struct FRotator CamOrbitRotation; // 0x1c(0x0c)
};

// ScriptStruct Engine.MeshSectionInfoMap
// Size: 0x50 (Inherited: 0x00)
struct FMeshSectionInfoMap {
	char UnknownData_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.MeshSectionInfo
// Size: 0x08 (Inherited: 0x00)
struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x00(0x04)
	bool bEnableCollision; // 0x04(0x01)
	bool bCastShadow; // 0x05(0x01)
	char UnknownData_6[0x2]; // 0x06(0x02)
};

// ScriptStruct Engine.StaticMeshSourceModel
// Size: 0xf8 (Inherited: 0x00)
struct FStaticMeshSourceModel {
	struct FMeshBuildSettings BuildSettings; // 0x00(0x40)
	struct FMeshReductionSettings ReductionSettings; // 0x40(0x58)
	struct FSimplygonRemeshingSettings RemeshingSettings; // 0x98(0x50)
	int32_t OverriddenLightMapRes; // 0xe8(0x04)
	float LODDistance; // 0xec(0x04)
	float ScreenSize; // 0xf0(0x04)
	float MaxDeviation; // 0xf4(0x04)
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// Size: 0x1c (Inherited: 0x00)
struct FStaticMeshOptimizationSettings {
	char ReductionMethod; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float MaxDeviationPercentage; // 0x08(0x04)
	float WeldingThreshold; // 0x0c(0x04)
	bool bRecalcNormals; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float NormalsThreshold; // 0x14(0x04)
	char SilhouetteImportance; // 0x18(0x01)
	char TextureImportance; // 0x19(0x01)
	char ShadingImportance; // 0x1a(0x01)
	char UnknownData_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.MergedCollisionComponentStaticMeshInstanceData
// Size: 0x40 (Inherited: 0x00)
struct FMergedCollisionComponentStaticMeshInstanceData {
	struct FTransform RelativeTransform; // 0x00(0x30)
	struct UStaticMesh* StaticMesh; // 0x30(0x08)
	int32_t OwningActorCrc32; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// Size: 0x28 (Inherited: 0x00)
struct FStaticMeshComponentLODInfo {
	char UnknownData_0[0x10]; // 0x00(0x10)
	struct TArray<struct FPaintedVertex> PaintedVertices; // 0x10(0x10)
	char UnknownData_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Engine.PaintedVertex
// Size: 0x14 (Inherited: 0x00)
struct FPaintedVertex {
	struct FVector Position; // 0x00(0x0c)
	struct FPackedNormal Normal; // 0x0c(0x04)
	struct FColor Color; // 0x10(0x04)
};

// ScriptStruct Engine.TexturePlatformData
// Size: 0x28 (Inherited: 0x00)
struct FTexturePlatformData {
	char UnknownData_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Engine.TextureSource
// Size: 0x80 (Inherited: 0x00)
struct FTextureSource {
	char UnknownData_0[0x80]; // 0x00(0x80)
};

// ScriptStruct Engine.ExternalMip
// Size: 0x28 (Inherited: 0x00)
struct FExternalMip {
	uint32_t SizeX; // 0x00(0x04)
	uint32_t SizeY; // 0x04(0x04)
	uint32_t OffsetInFile; // 0x08(0x04)
	uint32_t DataSizeOnDisk; // 0x0c(0x04)
	uint32_t DataSize; // 0x10(0x04)
	uint32_t DecompressionFlags; // 0x14(0x04)
	char UnknownData_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Engine.FlatWaterMeshTextureOverride
// Size: 0x18 (Inherited: 0x0c)
struct FFlatWaterMeshTextureOverride : FNameIndexPair {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UTexture* Texture; // 0x10(0x08)
};

// ScriptStruct Engine.NameIndexPair
// Size: 0x0c (Inherited: 0x00)
struct FNameIndexPair {
	char UnknownData_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Engine.InstancedCoverageMeshLOD
// Size: 0x08 (Inherited: 0x00)
struct FInstancedCoverageMeshLOD {
	float LODReduction; // 0x00(0x04)
	float DistanceToLOD; // 0x04(0x04)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// Size: 0x08 (Inherited: 0x00)
struct FInstancedStaticMeshMappingInfo {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// Size: 0x50 (Inherited: 0x00)
struct FInstancedStaticMeshInstanceData {
	struct FMatrix Transform; // 0x00(0x40)
	struct FVector2D LightmapUVBias; // 0x40(0x08)
	struct FVector2D ShadowmapUVBias; // 0x48(0x08)
};

// ScriptStruct Engine.ClusterNode
// Size: 0x28 (Inherited: 0x00)
struct FClusterNode {
	struct FVector BoundMin; // 0x00(0x0c)
	int32_t FirstChild; // 0x0c(0x04)
	struct FVector BoundMax; // 0x10(0x0c)
	int32_t LastChild; // 0x1c(0x04)
	int32_t FirstInstance; // 0x20(0x04)
	int32_t LastInstance; // 0x24(0x04)
};

// ScriptStruct Engine.MobileInstancedStaticMeshLOD
// Size: 0x08 (Inherited: 0x00)
struct FMobileInstancedStaticMeshLOD {
	float LODReduction; // 0x00(0x04)
	float DistanceToLOD; // 0x04(0x04)
};

// ScriptStruct Engine.SplineMeshParams
// Size: 0x58 (Inherited: 0x00)
struct FSplineMeshParams {
	struct FVector StartPos; // 0x00(0x0c)
	struct FVector StartTangent; // 0x0c(0x0c)
	struct FVector2D StartScale; // 0x18(0x08)
	float StartRoll; // 0x20(0x04)
	struct FVector2D StartOffset; // 0x24(0x08)
	struct FVector EndPos; // 0x2c(0x0c)
	struct FVector EndTangent; // 0x38(0x0c)
	struct FVector2D EndScale; // 0x44(0x08)
	float EndRoll; // 0x4c(0x04)
	struct FVector2D EndOffset; // 0x50(0x08)
};

// ScriptStruct Engine.EngineShowFlagsSetting
// Size: 0x18 (Inherited: 0x00)
struct FEngineShowFlagsSetting {
	struct FString ShowFlagName; // 0x00(0x10)
	bool Enabled; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.Timeline
// Size: 0x98 (Inherited: 0x00)
struct FTimeline {
	char LengthMode; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float Length; // 0x04(0x04)
	char bLooping : 1; // 0x08(0x01)
	char bReversePlayback : 1; // 0x08(0x01)
	char bPlaying : 1; // 0x08(0x01)
	char UnknownData_8_3 : 5; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float PlayRate; // 0x0c(0x04)
	float Position; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct FTimelineEventEntry> Events; // 0x18(0x10)
	struct TArray<struct FTimelineVectorTrack> InterpVectors; // 0x28(0x10)
	struct TArray<struct FTimelineFloatTrack> InterpFloats; // 0x38(0x10)
	struct TArray<struct FTimelineLinearColorTrack> InterpLinearColors; // 0x48(0x10)
	DelegateProperty TimelinePostUpdateFunc; // 0x58(0x10)
	DelegateProperty TimelineFinishedFunc; // 0x68(0x10)
	char UnknownData_78[0x8]; // 0x78(0x08)
	struct UObject* PropertySetObject; // 0x80(0x08)
	struct FName DirectionPropertyName; // 0x88(0x08)
	struct UByteProperty* DirectionProperty; // 0x90(0x08)
};

// ScriptStruct Engine.TimelineLinearColorTrack
// Size: 0x30 (Inherited: 0x00)
struct FTimelineLinearColorTrack {
	struct UCurveLinearColor* LinearColorCurve; // 0x00(0x08)
	DelegateProperty InterpFunc; // 0x08(0x10)
	struct FName LinearColorPropertyName; // 0x18(0x08)
	struct UStructProperty* LinearColorProperty; // 0x20(0x08)
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.TimelineFloatTrack
// Size: 0x30 (Inherited: 0x00)
struct FTimelineFloatTrack {
	struct UCurveFloat* FloatCurve; // 0x00(0x08)
	DelegateProperty InterpFunc; // 0x08(0x10)
	struct FName FloatPropertyName; // 0x18(0x08)
	struct UFloatProperty* FloatProperty; // 0x20(0x08)
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.TimelineVectorTrack
// Size: 0x30 (Inherited: 0x00)
struct FTimelineVectorTrack {
	struct UCurveVector* VectorCurve; // 0x00(0x08)
	DelegateProperty InterpFunc; // 0x08(0x10)
	struct FName VectorPropertyName; // 0x18(0x08)
	struct UStructProperty* VectorProperty; // 0x20(0x08)
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.TimelineEventEntry
// Size: 0x14 (Inherited: 0x00)
struct FTimelineEventEntry {
	float Time; // 0x00(0x04)
	DelegateProperty EventFunc; // 0x04(0x10)
};

// ScriptStruct Engine.CompressedOffsetData
// Size: 0x18 (Inherited: 0x00)
struct FCompressedOffsetData {
	struct TArray<int32_t> OffsetData; // 0x00(0x10)
	int32_t StripSize; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.CompressedTrack
// Size: 0x38 (Inherited: 0x00)
struct FCompressedTrack {
	struct TArray<char> ByteStream; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
	float Mins[0x03]; // 0x20(0x0c)
	float Ranges[0x03]; // 0x2c(0x0c)
};

// ScriptStruct Engine.CurveTrack
// Size: 0x18 (Inherited: 0x00)
struct FCurveTrack {
	struct FName CurveName; // 0x00(0x08)
	struct TArray<float> CurveWeights; // 0x08(0x10)
};

// ScriptStruct Engine.ScaleTrack
// Size: 0x20 (Inherited: 0x00)
struct FScaleTrack {
	struct TArray<struct FVector> ScaleKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.RotationTrack
// Size: 0x20 (Inherited: 0x00)
struct FRotationTrack {
	struct TArray<struct FQuat> RotKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.TranslationTrack
// Size: 0x20 (Inherited: 0x00)
struct FTranslationTrack {
	struct TArray<struct FVector> PosKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.TrackToSkeletonMap
// Size: 0x04 (Inherited: 0x00)
struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x00(0x04)
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// Size: 0x20 (Inherited: 0x00)
struct FAnimSequenceTrackContainer {
	struct TArray<struct FRawAnimSequenceTrack> AnimationTracks; // 0x00(0x10)
	struct TArray<struct FName> TrackNames; // 0x10(0x10)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// Size: 0x30 (Inherited: 0x00)
struct FRawAnimSequenceTrack {
	struct TArray<struct FVector> PosKeys; // 0x00(0x10)
	struct TArray<struct FQuat> RotKeys; // 0x10(0x10)
	struct TArray<struct FVector> ScaleKeys; // 0x20(0x10)
};

// ScriptStruct Engine.PerBoneInterpolation
// Size: 0x10 (Inherited: 0x00)
struct FPerBoneInterpolation {
	struct FBoneReference BoneReference; // 0x00(0x0c)
	float InterpolationSpeedPerSec; // 0x0c(0x04)
};

// ScriptStruct Engine.GridBlendSample
// Size: 0x1c (Inherited: 0x00)
struct FGridBlendSample {
	struct FEditorElement GridElement; // 0x00(0x18)
	float BlendWeight; // 0x18(0x04)
};

// ScriptStruct Engine.EditorElement
// Size: 0x18 (Inherited: 0x00)
struct FEditorElement {
	int32_t Indices[0x03]; // 0x00(0x0c)
	float Weights[0x03]; // 0x0c(0x0c)
};

// ScriptStruct Engine.BlendSample
// Size: 0x18 (Inherited: 0x00)
struct FBlendSample {
	struct UAnimSequence* Animation; // 0x00(0x08)
	struct FVector SampleValue; // 0x08(0x0c)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.BlendParameter
// Size: 0x20 (Inherited: 0x00)
struct FBlendParameter {
	struct FString DisplayName; // 0x00(0x10)
	float Min; // 0x10(0x04)
	float Max; // 0x14(0x04)
	int32_t GridNum; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.InterpolationParameter
// Size: 0x08 (Inherited: 0x00)
struct FInterpolationParameter {
	float InterpolationTime; // 0x00(0x04)
	char InterpolationType; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.AnimSetMeshLinkup
// Size: 0x10 (Inherited: 0x00)
struct FAnimSetMeshLinkup {
	struct TArray<int32_t> BoneToTrackTable; // 0x00(0x10)
};

// ScriptStruct Engine.AssetImportInfo
// Size: 0x01 (Inherited: 0x00)
struct FAssetImportInfo {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.LaunchOnTestSettings
// Size: 0x20 (Inherited: 0x00)
struct FLaunchOnTestSettings {
	struct FFilePath LaunchOnTestmap; // 0x00(0x10)
	struct FString DeviceID; // 0x10(0x10)
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// Size: 0x18 (Inherited: 0x00)
struct FEditorMapPerformanceTestDefinition {
	struct FFilePath PerformanceTestmap; // 0x00(0x10)
	int32_t TestTimer; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// Size: 0x210 (Inherited: 0x00)
struct FBuildPromotionTestSettings {
	struct FFilePath DefaultStaticMeshAsset; // 0x00(0x10)
	struct FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10(0x150)
	struct FBuildPromotionOpenAssetSettings OpenAssets; // 0x160(0x60)
	struct FBuildPromotionBlueprintSettings BlueprintSettings; // 0x1c0(0x20)
	struct FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1e0(0x20)
	struct FFilePath SourceControlMaterial; // 0x200(0x10)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// Size: 0x20 (Inherited: 0x00)
struct FBuildPromotionNewProjectSettings {
	struct FDirectoryPath NewProjectFolderOverride; // 0x00(0x10)
	struct FString NewProjectNameOverride; // 0x10(0x10)
};

// ScriptStruct Engine.BuildPromotionBlueprintSettings
// Size: 0x20 (Inherited: 0x00)
struct FBuildPromotionBlueprintSettings {
	struct FFilePath FirstMeshPath; // 0x00(0x10)
	struct FFilePath SecondMeshPath; // 0x10(0x10)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// Size: 0x60 (Inherited: 0x00)
struct FBuildPromotionOpenAssetSettings {
	struct FFilePath BlueprintAsset; // 0x00(0x10)
	struct FFilePath MaterialAsset; // 0x10(0x10)
	struct FFilePath ParticleSystemAsset; // 0x20(0x10)
	struct FFilePath SkeletalMeshAsset; // 0x30(0x10)
	struct FFilePath StaticMeshAsset; // 0x40(0x10)
	struct FFilePath TextureAsset; // 0x50(0x10)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// Size: 0x150 (Inherited: 0x00)
struct FBuildPromotionImportWorkflowSettings {
	struct FEditorImportWorkflowDefinition Diffuse; // 0x00(0x20)
	struct FEditorImportWorkflowDefinition Normal; // 0x20(0x20)
	struct FEditorImportWorkflowDefinition StaticMesh; // 0x40(0x20)
	struct FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60(0x20)
	struct FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80(0x20)
	struct FEditorImportWorkflowDefinition MorphMesh; // 0xa0(0x20)
	struct FEditorImportWorkflowDefinition SkeletalMesh; // 0xc0(0x20)
	struct FEditorImportWorkflowDefinition Animation; // 0xe0(0x20)
	struct FEditorImportWorkflowDefinition Sound; // 0x100(0x20)
	struct FEditorImportWorkflowDefinition SurroundSound; // 0x120(0x20)
	struct TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140(0x10)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// Size: 0x20 (Inherited: 0x00)
struct FEditorImportWorkflowDefinition {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x10(0x10)
};

// ScriptStruct Engine.ImportFactorySettingValues
// Size: 0x20 (Inherited: 0x00)
struct FImportFactorySettingValues {
	struct FString SettingName; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// Size: 0x10 (Inherited: 0x00)
struct FParticleEditorPromotionSettings {
	struct FFilePath DefaultParticleAsset; // 0x00(0x10)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// Size: 0x30 (Inherited: 0x00)
struct FMaterialEditorPromotionSettings {
	struct FFilePath DefaultMaterialAsset; // 0x00(0x10)
	struct FFilePath DefaultDiffuseTexture; // 0x10(0x10)
	struct FFilePath DefaultNormalTexture; // 0x20(0x10)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// Size: 0x38 (Inherited: 0x00)
struct FEditorImportExportTestDefinition {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct FString ExportFileExtension; // 0x10(0x10)
	bool bSkipExport; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x28(0x10)
};

// ScriptStruct Engine.ExternalToolDefinition
// Size: 0x60 (Inherited: 0x00)
struct FExternalToolDefinition {
	struct FString ToolName; // 0x00(0x10)
	struct FFilePath ExecutablePath; // 0x10(0x10)
	struct FString CommandLineOptions; // 0x20(0x10)
	struct FDirectoryPath WorkingDirectory; // 0x30(0x10)
	struct FString ScriptExtension; // 0x40(0x10)
	struct FDirectoryPath ScriptDirectory; // 0x50(0x10)
};

// ScriptStruct Engine.OpenTestAsset
// Size: 0x18 (Inherited: 0x00)
struct FOpenTestAsset {
	struct FFilePath AssetToOpen; // 0x00(0x10)
	bool bSkipTestWhenUnAttended; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.NavAvoidanceData
// Size: 0x3c (Inherited: 0x00)
struct FNavAvoidanceData {
	char UnknownData_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// Size: 0x18 (Inherited: 0x00)
struct FAnimParentNodeAssetOverride {
	struct UAnimationAsset* NewAsset; // 0x00(0x08)
	struct FGuid ParentNodeGuid; // 0x08(0x10)
};

// ScriptStruct Engine.AnimGroupInfo
// Size: 0x18 (Inherited: 0x00)
struct FAnimGroupInfo {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct Engine.DataTableCategoryHandle
// Size: 0x18 (Inherited: 0x00)
struct FDataTableCategoryHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName ColumnName; // 0x08(0x08)
	struct FName RowContents; // 0x10(0x08)
};

// ScriptStruct Engine.DataTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FDataTableRowHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct Engine.DialogueWaveParameter
// Size: 0x20 (Inherited: 0x00)
struct FDialogueWaveParameter {
	struct UDialogueWave* DialogueWave; // 0x00(0x08)
	struct FDialogueContext Context; // 0x08(0x18)
};

// ScriptStruct Engine.DialogueContext
// Size: 0x18 (Inherited: 0x00)
struct FDialogueContext {
	struct UDialogueVoice* Speaker; // 0x00(0x08)
	struct TArray<struct UDialogueVoice*> Targets; // 0x08(0x10)
};

// ScriptStruct Engine.FormatTextArgument
// Size: 0x70 (Inherited: 0x00)
struct FFormatTextArgument {
	struct FText ArgumentName; // 0x00(0x38)
	struct FText TextValue; // 0x38(0x38)
};

// ScriptStruct Engine.EventGraphFastCallPair
// Size: 0x10 (Inherited: 0x00)
struct FEventGraphFastCallPair {
	struct UFunction* FunctionToPatch; // 0x00(0x08)
	int32_t EventGraphCallOffset; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.BlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FBlueprintDebugData {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.PointerToUberGraphFrame
// Size: 0x08 (Inherited: 0x00)
struct FPointerToUberGraphFrame {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// Size: 0x140 (Inherited: 0x00)
struct FDebuggingInfoForSingleFunction {
	char UnknownData_0[0x140]; // 0x00(0x140)
};

// ScriptStruct Engine.NodeToCodeAssociation
// Size: 0x14 (Inherited: 0x00)
struct FNodeToCodeAssociation {
	char UnknownData_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FAnimBlueprintDebugData {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.AnimationFrameSnapshot
// Size: 0x01 (Inherited: 0x00)
struct FAnimationFrameSnapshot {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.StateMachineDebugData
// Size: 0xb0 (Inherited: 0x00)
struct FStateMachineDebugData {
	char UnknownData_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Engine.KShapeElem
// Size: 0x20 (Inherited: 0x00)
struct FKShapeElem {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.KBoxElem
// Size: 0x50 (Inherited: 0x20)
struct FKBoxElem : FKShapeElem {
	struct FVector Center; // 0x20(0x0c)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FQuat Orientation; // 0x30(0x10)
	float X; // 0x40(0x04)
	float Y; // 0x44(0x04)
	float Z; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Engine.KConvexElem
// Size: 0x90 (Inherited: 0x20)
struct FKConvexElem : FKShapeElem {
	struct TArray<struct FVector> VertexData; // 0x20(0x10)
	struct FBox ElemBox; // 0x30(0x1c)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FTransform Transform; // 0x50(0x30)
	char UnknownData_80[0x10]; // 0x80(0x10)
};

// ScriptStruct Engine.KSphereElem
// Size: 0x30 (Inherited: 0x20)
struct FKSphereElem : FKShapeElem {
	struct FVector Center; // 0x20(0x0c)
	float Radius; // 0x2c(0x04)
};

// ScriptStruct Engine.KSphylElem
// Size: 0x50 (Inherited: 0x20)
struct FKSphylElem : FKShapeElem {
	struct FVector Center; // 0x20(0x0c)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FQuat Orientation; // 0x30(0x10)
	float Radius; // 0x40(0x04)
	float Length; // 0x44(0x04)
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Engine.KAggregateGeom
// Size: 0x48 (Inherited: 0x00)
struct FKAggregateGeom {
	struct TArray<struct FKSphereElem> SphereElems; // 0x00(0x10)
	struct TArray<struct FKBoxElem> BoxElems; // 0x10(0x10)
	struct TArray<struct FKSphylElem> SphylElems; // 0x20(0x10)
	struct TArray<struct FKConvexElem> ConvexElems; // 0x30(0x10)
	char UnknownData_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Engine.AggregateGeometry2D
// Size: 0x30 (Inherited: 0x00)
struct FAggregateGeometry2D {
	struct TArray<struct FCircleElement2D> CircleElements; // 0x00(0x10)
	struct TArray<struct FBoxElement2D> BoxElements; // 0x10(0x10)
	struct TArray<struct FConvexElement2D> ConvexElements; // 0x20(0x10)
};

// ScriptStruct Engine.ConvexElement2D
// Size: 0x10 (Inherited: 0x00)
struct FConvexElement2D {
	struct TArray<struct FVector2D> VertexData; // 0x00(0x10)
};

// ScriptStruct Engine.BoxElement2D
// Size: 0x14 (Inherited: 0x00)
struct FBoxElement2D {
	struct FVector2D Center; // 0x00(0x08)
	float Width; // 0x08(0x04)
	float Height; // 0x0c(0x04)
	float Angle; // 0x10(0x04)
};

// ScriptStruct Engine.CircleElement2D
// Size: 0x0c (Inherited: 0x00)
struct FCircleElement2D {
	struct FVector2D Center; // 0x00(0x08)
	float Radius; // 0x08(0x04)
};

// ScriptStruct Engine.InputBlendPose
// Size: 0x10 (Inherited: 0x00)
struct FInputBlendPose {
	struct TArray<struct FBranchFilter> BranchFilters; // 0x00(0x10)
};

// ScriptStruct Engine.BranchFilter
// Size: 0x0c (Inherited: 0x00)
struct FBranchFilter {
	struct FName BoneName; // 0x00(0x08)
	int32_t BlendDepth; // 0x08(0x04)
};

// ScriptStruct Engine.BuilderPoly
// Size: 0x20 (Inherited: 0x00)
struct FBuilderPoly {
	struct TArray<int32_t> VertexIndices; // 0x00(0x10)
	int32_t Direction; // 0x10(0x04)
	struct FName ItemName; // 0x14(0x08)
	int32_t PolyFlags; // 0x1c(0x04)
};

// ScriptStruct Engine.WrappedStringElement
// Size: 0x18 (Inherited: 0x00)
struct FWrappedStringElement {
	struct FString Value; // 0x00(0x10)
	struct FVector2D LineExtent; // 0x10(0x08)
};

// ScriptStruct Engine.TextSizingParameters
// Size: 0x28 (Inherited: 0x00)
struct FTextSizingParameters {
	float DrawX; // 0x00(0x04)
	float DrawY; // 0x04(0x04)
	float DrawXL; // 0x08(0x04)
	float DrawYL; // 0x0c(0x04)
	struct FVector2D Scaling; // 0x10(0x08)
	struct UFont* DrawFont; // 0x18(0x08)
	struct FVector2D SpacingAdjust; // 0x20(0x08)
};

// ScriptStruct Engine.TextureRenderData
// Size: 0x48 (Inherited: 0x00)
struct FTextureRenderData {
	struct UTexture* RenderTexture; // 0x00(0x08)
	struct FVector2D ScreenPosition; // 0x08(0x08)
	struct FVector2D ScreenSize; // 0x10(0x08)
	struct FVector2D CoordinatePosition; // 0x18(0x08)
	struct FVector2D CoordinateSize; // 0x20(0x08)
	struct FLinearColor RenderColor; // 0x28(0x10)
	char BlendMode; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	float Rotation; // 0x3c(0x04)
	struct FVector2D PivotPoint; // 0x40(0x08)
};

// ScriptStruct Engine.CanvasIcon
// Size: 0x18 (Inherited: 0x00)
struct FCanvasIcon {
	struct UTexture* Texture; // 0x00(0x08)
	float U; // 0x08(0x04)
	float V; // 0x0c(0x04)
	float UL; // 0x10(0x04)
	float VL; // 0x14(0x04)
};

// ScriptStruct Engine.RPCStats
// Size: 0xc0 (Inherited: 0x00)
struct FRPCStats {
	struct FRPCStatEntry Entries[0x02]; // 0x00(0xc0)
};

// ScriptStruct Engine.RPCStatEntry
// Size: 0x60 (Inherited: 0x00)
struct FRPCStatEntry {
	char UnknownData_0[0x30]; // 0x00(0x30)
	double AccumulatedPayloadInKB; // 0x30(0x08)
	double TimeIntervalInSec; // 0x38(0x08)
	struct FSpikeStatEntry WorstSpike; // 0x40(0x18)
	uint32_t RPCCount; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Engine.SpikeStatEntry
// Size: 0x18 (Inherited: 0x00)
struct FSpikeStatEntry {
	struct TArray<struct FFuncStatEntry> WorstRPCs; // 0x00(0x10)
	uint32_t TotalRPCCount; // 0x10(0x04)
	char SpikeDetected; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Engine.FuncStatEntry
// Size: 0x20 (Inherited: 0x00)
struct FFuncStatEntry {
	struct FString Name; // 0x00(0x10)
	uint64_t RPCId; // 0x10(0x08)
	uint32_t Count; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.FuncStatHolder
// Size: 0x28 (Inherited: 0x00)
struct FFuncStatHolder {
	char UnknownData_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Engine.AutoCompleteNode
// Size: 0x28 (Inherited: 0x00)
struct FAutoCompleteNode {
	int32_t IndexChar; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> AutoCompleteListIndices; // 0x08(0x10)
	char UnknownData_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// Size: 0x1e8 (Inherited: 0x00)
struct FRuntimeCurveLinearColor {
	struct FRichCurve ColorCurves[0x04]; // 0x00(0x1e0)
	struct UCurveLinearColor* ExternalCurve; // 0x1e0(0x08)
};

// ScriptStruct Engine.CurveTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FCurveTableRowHandle {
	struct UCurveTable* CurveTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct Engine.FeatureToggledStringAssetReferenceEntry
// Size: 0x18 (Inherited: 0x00)
struct FFeatureToggledStringAssetReferenceEntry {
	struct FStringAssetReference Asset; // 0x00(0x10)
	struct FName Feature; // 0x10(0x08)
};

// ScriptStruct Engine.InstancedNavMesh
// Size: 0x38 (Inherited: 0x00)
struct FInstancedNavMesh {
	struct UClass* AssetClass; // 0x00(0x20)
	struct FVector Location; // 0x20(0x0c)
	struct FName NavMeshName; // 0x2c(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x34(0x04)
};

// ScriptStruct Engine.DestructibleChunkParameters
// Size: 0x04 (Inherited: 0x00)
struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x00(0x01)
	bool bDoNotFracture; // 0x01(0x01)
	bool bDoNotDamage; // 0x02(0x01)
	bool bDoNotCrumble; // 0x03(0x01)
};

// ScriptStruct Engine.FractureMaterial
// Size: 0x24 (Inherited: 0x00)
struct FFractureMaterial {
	struct FVector2D UVScale; // 0x00(0x08)
	struct FVector2D UVOffset; // 0x08(0x08)
	struct FVector Tangent; // 0x10(0x0c)
	float UAngle; // 0x1c(0x04)
	int32_t InteriorElementIndex; // 0x20(0x04)
};

// ScriptStruct Engine.AudioQualitySettings
// Size: 0x40 (Inherited: 0x00)
struct FAudioQualitySettings {
	struct FText DisplayName; // 0x00(0x38)
	int32_t MaxChannels; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Engine.PhysicalSurfaceName
// Size: 0x0c (Inherited: 0x00)
struct FPhysicalSurfaceName {
	char Type; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
};

// ScriptStruct Engine.DominanceGroupName
// Size: 0x0c (Inherited: 0x00)
struct FDominanceGroupName {
	char Type; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
};

// ScriptStruct Engine.DominanceGroupPair
// Size: 0x0c (Inherited: 0x00)
struct FDominanceGroupPair {
	char FirstGroupId; // 0x00(0x01)
	char SecondGroupId; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	int32_t FirstDominanceValue; // 0x04(0x04)
	int32_t SecondDominanceValue; // 0x08(0x04)
};

// ScriptStruct Engine.TextureLODGroup
// Size: 0x3c (Inherited: 0x00)
struct FTextureLODGroup {
	char Group; // 0x00(0x01)
	char UnknownData_1[0xb]; // 0x01(0x0b)
	int32_t LODBias; // 0x0c(0x04)
	char UnknownData_10[0x4]; // 0x10(0x04)
	int32_t NumStreamedMips; // 0x14(0x04)
	char MipGenSettings; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	int32_t MinLODSize; // 0x1c(0x04)
	int32_t MaxLODSize; // 0x20(0x04)
	struct FName MinMagFilter; // 0x24(0x08)
	struct FName MipFilter; // 0x2c(0x08)
	int32_t TextureQualityReduction; // 0x34(0x04)
	int32_t bDisableMaxTextureResolutionOverride; // 0x38(0x04)
};

// ScriptStruct Engine.DialogueContextMapping
// Size: 0x28 (Inherited: 0x00)
struct FDialogueContextMapping {
	struct FDialogueContext Context; // 0x00(0x18)
	struct USoundWave* SoundWave; // 0x18(0x08)
	struct UDialogueSoundWaveProxy* Proxy; // 0x20(0x08)
};

// ScriptStruct Engine.RawDistributionFloat
// Size: 0x38 (Inherited: 0x28)
struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x28(0x04)
	float MaxValue; // 0x2c(0x04)
	struct UDistributionFloat* Distribution; // 0x30(0x08)
};

// ScriptStruct Engine.RawDistributionVector
// Size: 0x38 (Inherited: 0x28)
struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x28(0x04)
	float MaxValue; // 0x2c(0x04)
	struct UDistributionVector* Distribution; // 0x30(0x08)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// Size: 0x18 (Inherited: 0x00)
struct FBlueprintComponentDelegateBinding {
	struct FName ComponentPropertyName; // 0x00(0x08)
	struct FName DelegatePropertyName; // 0x08(0x08)
	struct FName FunctionNameToBind; // 0x10(0x08)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// Size: 0x04 (Inherited: 0x00)
struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x00(0x01)
	char bExecuteWhenPaused : 1; // 0x00(0x01)
	char bOverrideParentBinding : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// Size: 0x18 (Inherited: 0x04)
struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	struct FName InputActionName; // 0x04(0x08)
	char InputKeyEvent; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct FName FunctionNameToBind; // 0x10(0x08)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// Size: 0x14 (Inherited: 0x04)
struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	struct FName InputAxisName; // 0x04(0x08)
	struct FName FunctionNameToBind; // 0x0c(0x08)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// Size: 0x30 (Inherited: 0x04)
struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FKey AxisKey; // 0x08(0x20)
	struct FName FunctionNameToBind; // 0x28(0x08)
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// Size: 0x40 (Inherited: 0x04)
struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FInputChord InputChord; // 0x08(0x28)
	char InputKeyEvent; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FName FunctionNameToBind; // 0x34(0x08)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// Size: 0x10 (Inherited: 0x04)
struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	char InputKeyEvent; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct FName FunctionNameToBind; // 0x08(0x08)
};

// ScriptStruct Engine.BlueprintInstancedActorDelegateBinding
// Size: 0x10 (Inherited: 0x00)
struct FBlueprintInstancedActorDelegateBinding {
	struct FName DelegatePropertyName; // 0x00(0x08)
	struct FName FunctionNameToBind; // 0x08(0x08)
};

// ScriptStruct Engine.GraphReference
// Size: 0x20 (Inherited: 0x00)
struct FGraphReference {
	struct UEdGraph* MacroGraph; // 0x00(0x08)
	struct UBlueprint* GraphBlueprint; // 0x08(0x08)
	struct FGuid GraphGuid; // 0x10(0x10)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// Size: 0xd0 (Inherited: 0xc8)
struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	struct UEdGraphNode* NodeTemplate; // 0xc8(0x08)
};

// ScriptStruct Engine.EdGraphSchemaAction
// Size: 0xc8 (Inherited: 0x00)
struct FEdGraphSchemaAction {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FText MenuDescription; // 0x08(0x38)
	struct FString TooltipDescription; // 0x40(0x10)
	struct FText Category; // 0x50(0x38)
	struct FText Keywords; // 0x88(0x38)
	int32_t Grouping; // 0xc0(0x04)
	int32_t SectionID; // 0xc4(0x04)
};

// ScriptStruct Engine.PluginRedirect
// Size: 0x20 (Inherited: 0x00)
struct FPluginRedirect {
	struct FString OldPluginName; // 0x00(0x10)
	struct FString NewPluginName; // 0x10(0x10)
};

// ScriptStruct Engine.StructRedirect
// Size: 0x20 (Inherited: 0x00)
struct FStructRedirect {
	struct FString OldStructName; // 0x00(0x10)
	struct FString NewStructName; // 0x10(0x10)
};

// ScriptStruct Engine.ClassRedirect
// Size: 0x58 (Inherited: 0x00)
struct FClassRedirect {
	struct FString ObjectName; // 0x00(0x10)
	struct FString OldClassName; // 0x10(0x10)
	struct FString NewClassName; // 0x20(0x10)
	struct FString OldSubobjName; // 0x30(0x10)
	struct FString NewSubobjName; // 0x40(0x10)
	bool InstanceOnly; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Engine.GameNameRedirect
// Size: 0x20 (Inherited: 0x00)
struct FGameNameRedirect {
	struct FString OldGameName; // 0x00(0x10)
	struct FString NewGameName; // 0x10(0x10)
};

// ScriptStruct Engine.ScreenMessageString
// Size: 0x30 (Inherited: 0x00)
struct FScreenMessageString {
	uint64_t Key; // 0x00(0x08)
	struct FString ScreenMessage; // 0x08(0x10)
	struct FColor DisplayColor; // 0x18(0x04)
	float TimeToDisplay; // 0x1c(0x04)
	float CurrentTimeDisplayed; // 0x20(0x04)
	char UnknownData_24[0xc]; // 0x24(0x0c)
};

// ScriptStruct Engine.DropNoteInfo
// Size: 0x28 (Inherited: 0x00)
struct FDropNoteInfo {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FString Comment; // 0x18(0x10)
};

// ScriptStruct Engine.StatColorMapping
// Size: 0x28 (Inherited: 0x00)
struct FStatColorMapping {
	struct FString StatName; // 0x00(0x10)
	struct TArray<struct FStatColorMapEntry> ColorMap; // 0x10(0x10)
	char DisableBlend : 1; // 0x20(0x01)
	char UnknownData_20_1 : 7; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.StatColorMapEntry
// Size: 0x08 (Inherited: 0x00)
struct FStatColorMapEntry {
	float In; // 0x00(0x04)
	struct FColor Out; // 0x04(0x04)
};

// ScriptStruct Engine.WorldContext
// Size: 0x298 (Inherited: 0x00)
struct FWorldContext {
	char UnknownData_0[0xe0]; // 0x00(0xe0)
	struct FURL LastURL; // 0xe0(0x70)
	struct FURL LastRemoteURL; // 0x150(0x70)
	struct UPendingNetGame* PendingNetGame; // 0x1c0(0x08)
	struct TArray<struct FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1c8(0x10)
	char UnknownData_1D8[0x10]; // 0x1d8(0x10)
	struct TArray<struct ULevel*> LoadedLevelsForPendingMapChange; // 0x1e8(0x10)
	char UnknownData_1F8[0x18]; // 0x1f8(0x18)
	struct TArray<struct UObjectReferencer*> ObjectReferencers; // 0x210(0x10)
	struct TArray<struct FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x220(0x10)
	struct UGameViewportClient* GameViewport; // 0x230(0x08)
	struct UGameInstance* OwningGameInstance; // 0x238(0x08)
	struct TArray<struct FNamedNetDriver> ActiveNetDrivers; // 0x240(0x10)
	char UnknownData_250[0x48]; // 0x250(0x48)
};

// ScriptStruct Engine.NamedNetDriver
// Size: 0x10 (Inherited: 0x00)
struct FNamedNetDriver {
	struct UNetDriver* NetDriver; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.LevelStreamingStatus
// Size: 0x10 (Inherited: 0x00)
struct FLevelStreamingStatus {
	struct FName PackageName; // 0x00(0x08)
	char bShouldBeLoaded : 1; // 0x08(0x01)
	char bShouldBeVisible : 1; // 0x08(0x01)
	char UnknownData_8_2 : 6; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	uint32_t LODIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// Size: 0x38 (Inherited: 0x00)
struct FFullyLoadedPackagesInfo {
	char FullyLoadType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FString Tag; // 0x08(0x10)
	struct TArray<struct FName> PackagesToLoad; // 0x18(0x10)
	struct TArray<struct UObject*> LoadedObjects; // 0x28(0x10)
};

// ScriptStruct Engine.NetDriverDefinition
// Size: 0x18 (Inherited: 0x00)
struct FNetDriverDefinition {
	struct FName DefName; // 0x00(0x08)
	struct FName DriverClassName; // 0x08(0x08)
	struct FName DriverClassNameFallback; // 0x10(0x08)
};

// ScriptStruct Engine.FontImportOptionsData
// Size: 0xb0 (Inherited: 0x00)
struct FFontImportOptionsData {
	struct FString FontName; // 0x00(0x10)
	float Height; // 0x10(0x04)
	char bEnableAntialiasing : 1; // 0x14(0x01)
	char bEnableBold : 1; // 0x14(0x01)
	char bEnableItalic : 1; // 0x14(0x01)
	char bEnableUnderline : 1; // 0x14(0x01)
	char bAlphaOnly : 1; // 0x14(0x01)
	char UnknownData_14_5 : 3; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	char CharacterSet; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString Chars; // 0x20(0x10)
	struct FString UnicodeRange; // 0x30(0x10)
	struct FString CharsFilePath; // 0x40(0x10)
	struct FString CharsFileWildcard; // 0x50(0x10)
	char bCreatePrintableOnly : 1; // 0x60(0x01)
	char bIncludeASCIIRange : 1; // 0x60(0x01)
	char UnknownData_60_2 : 6; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	struct FLinearColor ForegroundColor; // 0x64(0x10)
	char bEnableDropShadow : 1; // 0x74(0x01)
	char UnknownData_74_1 : 7; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
	int32_t TexturePageWidth; // 0x78(0x04)
	int32_t TexturePageMaxHeight; // 0x7c(0x04)
	int32_t XPadding; // 0x80(0x04)
	int32_t YPadding; // 0x84(0x04)
	int32_t ExtendBoxTop; // 0x88(0x04)
	int32_t ExtendBoxBottom; // 0x8c(0x04)
	int32_t ExtendBoxRight; // 0x90(0x04)
	int32_t ExtendBoxLeft; // 0x94(0x04)
	char bEnableLegacyMode : 1; // 0x98(0x01)
	char UnknownData_98_1 : 7; // 0x98(0x01)
	char UnknownData_99[0x3]; // 0x99(0x03)
	int32_t Kerning; // 0x9c(0x04)
	char bUseDistanceFieldAlpha : 1; // 0xa0(0x01)
	char UnknownData_A0_1 : 7; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	int32_t DistanceFieldScaleFactor; // 0xa4(0x04)
	float DistanceFieldScanRadiusScale; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.FontCharacter
// Size: 0x18 (Inherited: 0x00)
struct FFontCharacter {
	int32_t StartU; // 0x00(0x04)
	int32_t StartV; // 0x04(0x04)
	int32_t USize; // 0x08(0x04)
	int32_t VSize; // 0x0c(0x04)
	char TextureIndex; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	int32_t VerticalOffset; // 0x14(0x04)
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// Size: 0x10 (Inherited: 0x00)
struct FActiveHapticFeedbackEffect {
	struct UHapticFeedbackEffect* HapticEffect; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.HapticFeedbackDetails
// Size: 0x100 (Inherited: 0x00)
struct FHapticFeedbackDetails {
	struct FRuntimeFloatCurve Frequency; // 0x00(0x80)
	struct FRuntimeFloatCurve Amplitude; // 0x80(0x80)
};

// ScriptStruct Engine.PoseLink
// Size: 0x18 (Inherited: 0x18)
struct FPoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.AnimNode_HIKBase
// Size: 0x48 (Inherited: 0x30)
struct FAnimNode_HIKBase : FAnimNode_Base {
	struct FComponentSpacePoseLink HIKSettings; // 0x30(0x18)
};

// ScriptStruct Engine.HIKElements
// Size: 0x58 (Inherited: 0x00)
struct FHIKElements {
	char UnknownData_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Engine.HIKBoneMapping
// Size: 0x0c (Inherited: 0x00)
struct FHIKBoneMapping {
	struct FName UnrealBoneName; // 0x00(0x08)
	int32_t HumanIKBone; // 0x08(0x04)
};

// ScriptStruct Engine.HIKBoneTransform
// Size: 0x30 (Inherited: 0x00)
struct FHIKBoneTransform {
	int32_t BoneID; // 0x00(0x04)
	struct FVector Translation; // 0x04(0x0c)
	struct FQuat Orientation; // 0x10(0x10)
	struct FVector Scale; // 0x20(0x0c)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.ComponentOverrideRecord
// Size: 0x28 (Inherited: 0x00)
struct FComponentOverrideRecord {
	struct UActorComponent* ComponentTemplate; // 0x00(0x08)
	struct FComponentKey ComponentKey; // 0x08(0x20)
};

// ScriptStruct Engine.ComponentKey
// Size: 0x20 (Inherited: 0x00)
struct FComponentKey {
	struct UClass* OwnerClass; // 0x00(0x08)
	struct FName SCSVariableName; // 0x08(0x08)
	struct FGuid AssociatedGuid; // 0x10(0x10)
};

// ScriptStruct Engine.InputCombinedAxisKeyMapping
// Size: 0x58 (Inherited: 0x00)
struct FInputCombinedAxisKeyMapping {
	struct FName AxisName; // 0x00(0x08)
	struct FKey KeyX; // 0x08(0x20)
	struct FKey KeyY; // 0x28(0x20)
	float Scale; // 0x48(0x04)
	float CircularDeadZoneLowerBound; // 0x4c(0x04)
	float CircularDeadZoneUpperBound; // 0x50(0x04)
	float Exponent; // 0x54(0x04)
};

// ScriptStruct Engine.InputAxisKeyMapping
// Size: 0x30 (Inherited: 0x00)
struct FInputAxisKeyMapping {
	struct FName AxisName; // 0x00(0x08)
	struct FKey Key; // 0x08(0x20)
	float Scale; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.InputActionKeyMapping
// Size: 0x30 (Inherited: 0x00)
struct FInputActionKeyMapping {
	struct FName ActionName; // 0x00(0x08)
	struct FKey Key; // 0x08(0x20)
	char bShift : 1; // 0x28(0x01)
	char bCtrl : 1; // 0x28(0x01)
	char bAlt : 1; // 0x28(0x01)
	char bCmd : 1; // 0x28(0x01)
	char UnknownData_28_4 : 4; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Engine.InputAxisConfigEntry
// Size: 0x18 (Inherited: 0x00)
struct FInputAxisConfigEntry {
	struct FName AxisKeyName; // 0x00(0x08)
	struct FInputAxisProperties AxisProperties; // 0x08(0x10)
};

// ScriptStruct Engine.InputAxisProperties
// Size: 0x10 (Inherited: 0x00)
struct FInputAxisProperties {
	float DeadZone; // 0x00(0x04)
	float Sensitivity; // 0x04(0x04)
	float Exponent; // 0x08(0x04)
	char bInvert : 1; // 0x0c(0x01)
	char UnknownData_C_1 : 7; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.KeyBind
// Size: 0x38 (Inherited: 0x00)
struct FKeyBind {
	struct FKey Key; // 0x00(0x20)
	struct FString Command; // 0x20(0x10)
	char Control : 1; // 0x30(0x01)
	char Shift : 1; // 0x30(0x01)
	char Alt : 1; // 0x30(0x01)
	char Cmd : 1; // 0x30(0x01)
	char bIgnoreCtrl : 1; // 0x30(0x01)
	char bIgnoreShift : 1; // 0x30(0x01)
	char bIgnoreAlt : 1; // 0x30(0x01)
	char bIgnoreCmd : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Engine.CurveEdTab
// Size: 0x30 (Inherited: 0x00)
struct FCurveEdTab {
	struct FString TabName; // 0x00(0x10)
	struct TArray<struct FCurveEdEntry> Curves; // 0x10(0x10)
	float ViewStartInput; // 0x20(0x04)
	float ViewEndInput; // 0x24(0x04)
	float ViewStartOutput; // 0x28(0x04)
	float ViewEndOutput; // 0x2c(0x04)
};

// ScriptStruct Engine.CurveEdEntry
// Size: 0x38 (Inherited: 0x00)
struct FCurveEdEntry {
	struct UObject* CurveObject; // 0x00(0x08)
	struct FColor CurveColor; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString CurveName; // 0x10(0x10)
	int32_t bHideCurve; // 0x20(0x04)
	int32_t bColorCurve; // 0x24(0x04)
	int32_t bFloatingPointColorCurve; // 0x28(0x04)
	int32_t bClamp; // 0x2c(0x04)
	float ClampLow; // 0x30(0x04)
	float ClampHigh; // 0x34(0x04)
};

// ScriptStruct Engine.InterpEdSelKey
// Size: 0x18 (Inherited: 0x00)
struct FInterpEdSelKey {
	struct UInterpGroup* Group; // 0x00(0x08)
	struct UInterpTrack* Track; // 0x08(0x08)
	int32_t KeyIndex; // 0x10(0x04)
	float UnsnappedPosition; // 0x14(0x04)
};

// ScriptStruct Engine.CameraPreviewInfo
// Size: 0x30 (Inherited: 0x00)
struct FCameraPreviewInfo {
	struct UClass* PawnClass; // 0x00(0x08)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	struct APawn* PawnInst; // 0x28(0x08)
};

// ScriptStruct Engine.SubTrackGroup
// Size: 0x28 (Inherited: 0x00)
struct FSubTrackGroup {
	struct FString GroupName; // 0x00(0x10)
	struct TArray<int32_t> TrackIndices; // 0x10(0x10)
	char bIsCollapsed : 1; // 0x20(0x01)
	char bIsSelected : 1; // 0x20(0x01)
	char UnknownData_20_2 : 6; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.SupportedSubTrackInfo
// Size: 0x20 (Inherited: 0x00)
struct FSupportedSubTrackInfo {
	struct UClass* SupportedClass; // 0x00(0x08)
	struct FString SubTrackName; // 0x08(0x10)
	int32_t GroupIndex; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.BoolTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FBoolTrackKey {
	float Time; // 0x00(0x04)
	char Value : 1; // 0x04(0x01)
	char UnknownData_4_1 : 7; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.DirectorTrackCut
// Size: 0x14 (Inherited: 0x00)
struct FDirectorTrackCut {
	float Time; // 0x00(0x04)
	float TransitionTime; // 0x04(0x04)
	struct FName TargetCamGroup; // 0x08(0x08)
	int32_t ShotNumber; // 0x10(0x04)
};

// ScriptStruct Engine.EventTrackKey
// Size: 0x0c (Inherited: 0x00)
struct FEventTrackKey {
	float Time; // 0x00(0x04)
	struct FName EventName; // 0x04(0x08)
};

// ScriptStruct Engine.AnimControlTrackKey
// Size: 0x20 (Inherited: 0x00)
struct FAnimControlTrackKey {
	float StartTime; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	float AnimStartOffset; // 0x10(0x04)
	float AnimEndOffset; // 0x14(0x04)
	float AnimPlayRate; // 0x18(0x04)
	char bLooping : 1; // 0x1c(0x01)
	char bReverse : 1; // 0x1c(0x01)
	char UnknownData_1C_2 : 6; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.InterpLookupTrack
// Size: 0x10 (Inherited: 0x00)
struct FInterpLookupTrack {
	struct TArray<struct FInterpLookupPoint> Points; // 0x00(0x10)
};

// ScriptStruct Engine.InterpLookupPoint
// Size: 0x0c (Inherited: 0x00)
struct FInterpLookupPoint {
	struct FName GroupName; // 0x00(0x08)
	float Time; // 0x08(0x04)
};

// ScriptStruct Engine.ParticleReplayTrackKey
// Size: 0x0c (Inherited: 0x00)
struct FParticleReplayTrackKey {
	float Time; // 0x00(0x04)
	float Duration; // 0x04(0x04)
	int32_t ClipIDNumber; // 0x08(0x04)
};

// ScriptStruct Engine.ToggleTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FToggleTrackKey {
	float Time; // 0x00(0x04)
	char ToggleAction; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.SoundTrackKey
// Size: 0x18 (Inherited: 0x00)
struct FSoundTrackKey {
	float Time; // 0x00(0x04)
	float Volume; // 0x04(0x04)
	float Pitch; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct USoundBase* Sound; // 0x10(0x08)
};

// ScriptStruct Engine.VisibilityTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FVisibilityTrackKey {
	float Time; // 0x00(0x04)
	char Action; // 0x04(0x01)
	char ActiveCondition; // 0x05(0x01)
	char UnknownData_6[0x2]; // 0x06(0x02)
};

// ScriptStruct Engine.LayerActorStats
// Size: 0x10 (Inherited: 0x00)
struct FLayerActorStats {
	struct UClass* Type; // 0x00(0x08)
	int32_t Total; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.ClientReceiveData
// Size: 0x40 (Inherited: 0x00)
struct FClientReceiveData {
	struct APlayerController* LocalPC; // 0x00(0x08)
	struct FName MessageType; // 0x08(0x08)
	int32_t MessageIndex; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString MessageString; // 0x18(0x10)
	struct APlayerState* RelatedPlayerState_2; // 0x28(0x08)
	struct APlayerState* RelatedPlayerState_3; // 0x30(0x08)
	struct UObject* OptionalObject; // 0x38(0x08)
};

// ScriptStruct Engine.CustomInput
// Size: 0x48 (Inherited: 0x00)
struct FCustomInput {
	struct FString InputName; // 0x00(0x10)
	struct FExpressionInput Input; // 0x10(0x38)
};

// ScriptStruct Engine.FunctionExpressionOutput
// Size: 0x40 (Inherited: 0x00)
struct FFunctionExpressionOutput {
	struct UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x00(0x08)
	struct FGuid ExpressionOutputId; // 0x08(0x10)
	struct FExpressionOutput Output; // 0x18(0x28)
};

// ScriptStruct Engine.FunctionExpressionInput
// Size: 0x50 (Inherited: 0x00)
struct FFunctionExpressionInput {
	struct UMaterialExpressionFunctionInput* ExpressionInput; // 0x00(0x08)
	struct FGuid ExpressionInputId; // 0x08(0x10)
	struct FExpressionInput Input; // 0x18(0x38)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// Size: 0x18 (Inherited: 0x00)
struct FMaterialParameterCollectionInfo {
	struct FGuid StateId; // 0x00(0x10)
	struct UMaterialParameterCollection* ParameterCollection; // 0x10(0x08)
};

// ScriptStruct Engine.MaterialFunctionInfo
// Size: 0x18 (Inherited: 0x00)
struct FMaterialFunctionInfo {
	struct FGuid StateId; // 0x00(0x10)
	struct UMaterialFunction* Function; // 0x10(0x08)
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// Size: 0x84 (Inherited: 0x00)
struct FMaterialInstanceBasePropertyOverrides {
	bool bOverride_OpacityMaskClipValue; // 0x00(0x01)
	bool bOverride_BlendMode; // 0x01(0x01)
	bool bOverride_ShadingModel; // 0x02(0x01)
	bool bOverride_DitheredLODTransition; // 0x03(0x01)
	bool bOverride_TwoSided; // 0x04(0x01)
	bool bOverride_TessellationMode; // 0x05(0x01)
	bool bOverride_LowResTranslucency; // 0x06(0x01)
	bool bOverride_SkyLightWhenOccluded; // 0x07(0x01)
	bool bOverride_CloudShadowInfluence; // 0x08(0x01)
	bool bOverride_LightColorInfluence; // 0x09(0x01)
	bool bOverride_AmbientLightColorInfluence; // 0x0a(0x01)
	bool bOverride_LightIntensityInfluence; // 0x0b(0x01)
	bool bOverride_AmbientLightIntensityInfluence; // 0x0c(0x01)
	bool bOverride_AlternativeAmbientLightColorInfluence; // 0x0d(0x01)
	bool bOverride_AlternativeAmbientLightIntensityInfluence; // 0x0e(0x01)
	bool bOverride_EvaluateLightningAtParticleCenter; // 0x0f(0x01)
	bool bOverride_DontRenderWhenPlayerInsideShip; // 0x10(0x01)
	bool bOverride_ObjectFadeEnabled; // 0x11(0x01)
	bool bOverride_ObjectFadeRate; // 0x12(0x01)
	bool bOverride_ObjectFadeDistanceThreshold; // 0x13(0x01)
	bool bOverride_TranslucencyDirectionalLightingIntensity; // 0x14(0x01)
	bool bOverride_TranslucencyVolumeFogScale; // 0x15(0x01)
	bool bOverride_TranslucencyDistanceFog; // 0x16(0x01)
	bool bOverride_TranslucencyPass; // 0x17(0x01)
	bool bOverride_TranslucencyInReflection; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	float OpacityMaskClipValue; // 0x1c(0x04)
	char BlendMode; // 0x20(0x01)
	char ShadingModel; // 0x21(0x01)
	char UnknownData_22[0x2]; // 0x22(0x02)
	char TwoSided : 1; // 0x24(0x01)
	char DitheredLODTransition : 1; // 0x24(0x01)
	char UnknownData_24_2 : 6; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
	char D3D11TessellationMode; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	char ForceResolution : 1; // 0x2c(0x01)
	char UnknownData_2C_1 : 7; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	char ForcedResolution; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	char DisableTransition : 1; // 0x34(0x01)
	char UnknownData_34_1 : 7; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
	float FirstSplitDistance; // 0x38(0x04)
	float SecondSplitDistance; // 0x3c(0x04)
	float FullResInFrontMaxDistance; // 0x40(0x04)
	char FullResInFront : 1; // 0x44(0x01)
	char PopPerParticle : 1; // 0x44(0x01)
	char UnknownData_44_2 : 6; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	float SkyLightWhenOccluded; // 0x48(0x04)
	float CloudShadowInfluence; // 0x4c(0x04)
	float LightIntensityInfluence; // 0x50(0x04)
	float LightColorInfluence; // 0x54(0x04)
	float AmbientLightIntensityInfluence; // 0x58(0x04)
	float AmbientLightColorInfluence; // 0x5c(0x04)
	float AlternativeAmbientLightIntensityInfluence; // 0x60(0x04)
	float AlternativeAmbientLightColorInfluence; // 0x64(0x04)
	char bEvaluateLightningAtParticleCenter : 1; // 0x68(0x01)
	char bDontRenderWhenPlayerInsideShip : 1; // 0x68(0x01)
	char ObjectFadeEnabled : 1; // 0x68(0x01)
	char UnknownData_68_3 : 5; // 0x68(0x01)
	char UnknownData_69[0x3]; // 0x69(0x03)
	float ObjectFadeRate; // 0x6c(0x04)
	float ObjectFadeDistanceThreshold; // 0x70(0x04)
	float TranslucencyDirectionalLightingIntensity; // 0x74(0x04)
	float TranslucencyVolumeFogScale; // 0x78(0x04)
	char TranslucencyDistanceFog : 1; // 0x7c(0x01)
	char TranslucencyInReflection : 1; // 0x7c(0x01)
	char UnknownData_7C_2 : 6; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
	char TranslucencyPass; // 0x80(0x01)
	char UnknownData_81[0x3]; // 0x81(0x03)
};

// ScriptStruct Engine.VectorParameterValue
// Size: 0x28 (Inherited: 0x00)
struct FVectorParameterValue {
	struct FName ParameterName; // 0x00(0x08)
	struct FLinearColor ParameterValue; // 0x08(0x10)
	struct FGuid ExpressionGUID; // 0x18(0x10)
};

// ScriptStruct Engine.TextureParameterValue
// Size: 0x20 (Inherited: 0x00)
struct FTextureParameterValue {
	struct FName ParameterName; // 0x00(0x08)
	struct UTexture* ParameterValue; // 0x08(0x08)
	struct FGuid ExpressionGUID; // 0x10(0x10)
};

// ScriptStruct Engine.ScalarParameterValue
// Size: 0x1c (Inherited: 0x00)
struct FScalarParameterValue {
	struct FName ParameterName; // 0x00(0x08)
	float ParameterValue; // 0x08(0x04)
	struct FGuid ExpressionGUID; // 0x0c(0x10)
};

// ScriptStruct Engine.FontParameterValue
// Size: 0x28 (Inherited: 0x00)
struct FFontParameterValue {
	struct FName ParameterName; // 0x00(0x08)
	struct UFont* FontValue; // 0x08(0x08)
	int32_t FontPage; // 0x10(0x04)
	struct FGuid ExpressionGUID; // 0x14(0x10)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.CollectionVectorParameter
// Size: 0x28 (Inherited: 0x18)
struct FCollectionVectorParameter : FCollectionParameterBase {
	struct FLinearColor DefaultValue; // 0x18(0x10)
};

// ScriptStruct Engine.CollectionParameterBase
// Size: 0x18 (Inherited: 0x00)
struct FCollectionParameterBase {
	struct FName ParameterName; // 0x00(0x08)
	struct FGuid Id; // 0x08(0x10)
};

// ScriptStruct Engine.CollectionScalarParameter
// Size: 0x1c (Inherited: 0x18)
struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18(0x04)
};

// ScriptStruct Engine.NavCollisionBox
// Size: 0x18 (Inherited: 0x00)
struct FNavCollisionBox {
	struct FVector Offset; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
};

// ScriptStruct Engine.NavCollisionCylinder
// Size: 0x14 (Inherited: 0x00)
struct FNavCollisionCylinder {
	struct FVector Offset; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	float Height; // 0x10(0x04)
};

// ScriptStruct Engine.ParticleBurst
// Size: 0x14 (Inherited: 0x00)
struct FParticleBurst {
	int32_t Count; // 0x00(0x04)
	int32_t CountLow; // 0x04(0x04)
	float Time; // 0x08(0x04)
	float SpawnMultiplier; // 0x0c(0x04)
	char Group; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// Size: 0x20 (Inherited: 0x00)
struct FParticleRandomSeedInfo {
	struct FName ParameterName; // 0x00(0x08)
	char bGetSeedFromInstance : 1; // 0x08(0x01)
	char bInstanceSeedIsIndex : 1; // 0x08(0x01)
	char bResetSeedOnEmitterLooping : 1; // 0x08(0x01)
	char bRandomlySelectSeedArray : 1; // 0x08(0x01)
	char UnknownData_8_4 : 4; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct TArray<int32_t> RandomSeeds; // 0x10(0x10)
};

// ScriptStruct Engine.ParticleCurvePair
// Size: 0x18 (Inherited: 0x00)
struct FParticleCurvePair {
	struct FString CurveName; // 0x00(0x10)
	struct UObject* CurveObject; // 0x10(0x08)
};

// ScriptStruct Engine.BeamModifierOptions
// Size: 0x04 (Inherited: 0x00)
struct FBeamModifierOptions {
	char bModify : 1; // 0x00(0x01)
	char bScale : 1; // 0x00(0x01)
	char bLock : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// Size: 0x28 (Inherited: 0x00)
struct FParticleEvent_GenerateInfo {
	char Type; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t Frequency; // 0x04(0x04)
	int32_t ParticleFrequency; // 0x08(0x04)
	char FirstTimeOnly : 1; // 0x0c(0x01)
	char LastTimeOnly : 1; // 0x0c(0x01)
	char UseReflectedImpactVector : 1; // 0x0c(0x01)
	char bUseOrbitOffset : 1; // 0x0c(0x01)
	char UnknownData_C_4 : 4; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct FName CustomName; // 0x10(0x08)
	struct TArray<struct UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18(0x10)
};

// ScriptStruct Engine.ParticleEventGPU_GenerateInfo
// Size: 0x28 (Inherited: 0x00)
struct FParticleEventGPU_GenerateInfo {
	char Type; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t Frequency; // 0x04(0x04)
	struct FName CustomName; // 0x08(0x08)
	char CollisionEventLimit; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct TArray<struct UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18(0x10)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// Size: 0x14 (Inherited: 0x00)
struct FLocationBoneSocketInfo {
	struct FName BoneSocketName; // 0x00(0x08)
	struct FVector Offset; // 0x08(0x0c)
};

// ScriptStruct Engine.PrimitiveSphereEmitterAngleRanges
// Size: 0x10 (Inherited: 0x00)
struct FPrimitiveSphereEmitterAngleRanges {
	struct FVector2D HorizontalAngle; // 0x00(0x08)
	struct FVector2D VerticalAngle; // 0x08(0x08)
};

// ScriptStruct Engine.OrbitOptions
// Size: 0x04 (Inherited: 0x00)
struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x00(0x01)
	char bProcessDuringUpdate : 1; // 0x00(0x01)
	char bUseEmitterTime : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.EmitterDynamicParameter
// Size: 0x50 (Inherited: 0x00)
struct FEmitterDynamicParameter {
	struct FName ParamName; // 0x00(0x08)
	char bUseEmitterTime : 1; // 0x08(0x01)
	char bSpawnTimeOnly : 1; // 0x08(0x01)
	char UnknownData_8_2 : 6; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	char ValueMethod; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	char bScaleVelocityByParamValue : 1; // 0x10(0x01)
	char UnknownData_10_1 : 7; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct FRawDistributionFloat ParamValue; // 0x18(0x38)
};

// ScriptStruct Engine.RotationAboutAxisParameters
// Size: 0x10 (Inherited: 0x00)
struct FRotationAboutAxisParameters {
	struct FVector Rotation; // 0x00(0x0c)
	char bUseRotation : 1; // 0x0c(0x01)
	char bUseLocalSpace : 1; // 0x0c(0x01)
	char UnknownData_C_2 : 6; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.BeamTargetData
// Size: 0x0c (Inherited: 0x00)
struct FBeamTargetData {
	struct FName TargetName; // 0x00(0x08)
	float TargetPercentage; // 0x08(0x04)
};

// ScriptStruct Engine.GPUSpriteResourceData
// Size: 0xa00 (Inherited: 0x00)
struct FGPUSpriteResourceData {
	struct TArray<struct FColor> QuantizedColorSamples; // 0x00(0x10)
	struct TArray<struct FColor> QuantizedMiscSamples; // 0x10(0x10)
	struct TArray<struct FColor> QuantizedDynamicParamSamples; // 0x20(0x10)
	struct TArray<struct FColor> QuantizedSimulationAttrSamples; // 0x30(0x10)
	struct TArray<struct FColor> QuantizedSizeOverVelocitySamples; // 0x40(0x10)
	struct FVector4 ColorScale; // 0x50(0x10)
	struct FVector4 ColorBias; // 0x60(0x10)
	struct FVector4 MiscScale; // 0x70(0x10)
	struct FVector4 MiscBias; // 0x80(0x10)
	struct FVector4 DynParamScale; // 0x90(0x10)
	struct FVector4 DynParamBias; // 0xa0(0x10)
	struct FVector4 MurkyColorScale; // 0xb0(0x10)
	struct FVector4 SimulationAttrCurveScale; // 0xc0(0x10)
	struct FVector4 SimulationAttrCurveBias; // 0xd0(0x10)
	struct FVector4 SizeOverVelocityScale; // 0xe0(0x10)
	struct FVector4 SizeOverVelocityBias; // 0xf0(0x10)
	struct FVector4 SubImageSize; // 0x100(0x10)
	struct FVector4 SizeBySpeed; // 0x110(0x10)
	struct FVector ConstantAcceleration; // 0x120(0x0c)
	struct FVector OrbitOffsetBase; // 0x12c(0x0c)
	struct FVector OrbitOffsetRange; // 0x138(0x0c)
	struct FVector OrbitFrequencyBase; // 0x144(0x0c)
	struct FVector OrbitFrequencyRange; // 0x150(0x0c)
	struct FVector OrbitPhaseBase; // 0x15c(0x0c)
	struct FVector OrbitPhaseRange; // 0x168(0x0c)
	float GlobalVectorFieldScale; // 0x174(0x04)
	float GlobalVectorFieldTightness; // 0x178(0x04)
	float PerParticleVectorFieldScale; // 0x17c(0x04)
	float PerParticleVectorFieldBias; // 0x180(0x04)
	float DragCoefficientScale[0x06]; // 0x184(0x18)
	float DragCoefficientBias[0x06]; // 0x19c(0x18)
	float DragLocalVelocityScale[0x06]; // 0x1b4(0x18)
	float DragLocalVelocityBias[0x06]; // 0x1cc(0x18)
	float ResilienceScale; // 0x1e4(0x04)
	float ResilienceBias; // 0x1e8(0x04)
	float CollisionRadiusScale; // 0x1ec(0x04)
	float CollisionRadiusBias; // 0x1f0(0x04)
	float CollisionTimeBias; // 0x1f4(0x04)
	float OneMinusFriction; // 0x1f8(0x04)
	float CameraMotionBlurAmount; // 0x1fc(0x04)
	float AlphaThreshold; // 0x200(0x04)
	char ScreenAlignment[0x06]; // 0x204(0x06)
	char LockAxisFlag; // 0x20a(0x01)
	char UnknownData_20B[0x1]; // 0x20b(0x01)
	struct FVector2D PivotOffset; // 0x20c(0x08)
	char UnknownData_214[0x46c]; // 0x214(0x46c)
	float AlignmentInheritedVelocityScale; // 0x680(0x04)
	char UnknownData_684[0x374]; // 0x684(0x374)
	char SpawnLocationValueSemantic[0x06]; // 0x9f8(0x06)
	char UnknownData_9FE[0x2]; // 0x9fe(0x02)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// Size: 0x2b0 (Inherited: 0x00)
struct FGPUSpriteEmitterInfo {
	struct UParticleModuleRequired* RequiredModule; // 0x00(0x08)
	struct UParticleModuleSpawn* SpawnModule; // 0x08(0x08)
	struct UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10(0x08)
	struct UParticleModuleSpawnRepeatPerPoint* SpawnRepeatPerPointModule; // 0x18(0x08)
	struct UParticleComputeShaderData* ParticleComputeData; // 0x20(0x08)
	struct UParticleModuleParametersOverVelocity* ParametersOverVelocity; // 0x28(0x08)
	struct UParticleModuleParametersOverCustom* ParametersOverCustom; // 0x30(0x08)
	struct TArray<struct UParticleModule*> SpawnModules; // 0x38(0x10)
	char UnknownData_48[0x8]; // 0x48(0x08)
	struct FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x50(0x70)
	struct FFloatDistribution VectorFieldScale; // 0xc0(0x28)
	struct FFloatDistribution PointAttractorStrength; // 0xe8(0x28)
	struct FFloatDistribution Resilience; // 0x110(0x28)
	struct FVector ConstantAcceleration; // 0x138(0x0c)
	struct FVector PointAttractorPosition; // 0x144(0x0c)
	float PointAttractorRadiusSq; // 0x150(0x04)
	struct FVector OrbitOffsetBase; // 0x154(0x0c)
	struct FVector OrbitOffsetRange; // 0x160(0x0c)
	struct FVector2D InvMaxSize; // 0x16c(0x08)
	float MaxLifetime; // 0x174(0x04)
	int32_t MaxParticleCount; // 0x178(0x04)
	int32_t MaxDeathRate; // 0x17c(0x04)
	char ScreenAlignment[0x06]; // 0x180(0x06)
	char LockAxisFlag; // 0x186(0x01)
	char UnknownData_187[0x1]; // 0x187(0x01)
	char bEnableCollision : 1; // 0x188(0x01)
	char bNeedsVectorFields : 1; // 0x188(0x01)
	char bOpacitySpawnsOnCPU : 1; // 0x188(0x01)
	char bSizeSpawnsOnCPU : 1; // 0x188(0x01)
	char bVelocitySpawnsOnCPU : 1; // 0x188(0x01)
	char bIgnoreComponentColorTint : 1; // 0x188(0x01)
	char bGeneratesDeathEvents : 1; // 0x188(0x01)
	char bGeneratesCollisionEvents : 1; // 0x188(0x01)
	char UnknownData_189[0x3]; // 0x189(0x03)
	char CollisionMode; // 0x18c(0x01)
	char UnknownData_18D[0x3]; // 0x18d(0x03)
	struct FRawDistributionVector DynamicColor; // 0x190(0x38)
	struct FRawDistributionFloat DynamicAlpha; // 0x1c8(0x38)
	struct FRawDistributionVector DynamicColorScale; // 0x200(0x38)
	struct FRawDistributionFloat DynamicAlphaScale; // 0x238(0x38)
	struct FVector4 MurkyColorScale; // 0x270(0x10)
	struct FName LocationEmitterName; // 0x280(0x08)
	char bUseInheritedVelocityLocationEmitter : 1; // 0x288(0x01)
	char UnknownData_288_1 : 7; // 0x288(0x01)
	char UnknownData_289[0x3]; // 0x289(0x03)
	struct FVector2D InheritedVelocityScaleLocationEmitter; // 0x28c(0x08)
	char MissingParentParticlesBehaviour; // 0x294(0x01)
	char UnknownData_295[0x3]; // 0x295(0x03)
	char bKillParticlesOnFFTWater : 1; // 0x298(0x01)
	char UnknownData_298_1 : 7; // 0x298(0x01)
	char UnknownData_299[0x17]; // 0x299(0x17)
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// Size: 0x70 (Inherited: 0x00)
struct FGPUSpriteLocalVectorFieldInfo {
	struct UVectorField* Field; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator MinInitialRotation; // 0x40(0x0c)
	struct FRotator MaxInitialRotation; // 0x4c(0x0c)
	struct FRotator RotationRate; // 0x58(0x0c)
	float Intensity; // 0x64(0x04)
	float Tightness; // 0x68(0x04)
	char bIgnoreComponentTransform : 1; // 0x6c(0x01)
	char bTileX : 1; // 0x6c(0x01)
	char bTileY : 1; // 0x6c(0x01)
	char bTileZ : 1; // 0x6c(0x01)
	char UnknownData_6C_4 : 4; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.VelocityConeGroupParams
// Size: 0x80 (Inherited: 0x00)
struct FVelocityConeGroupParams {
	struct FRawDistributionFloat Angle; // 0x00(0x38)
	struct FRawDistributionFloat Velocity; // 0x38(0x38)
	struct FVector Direction; // 0x70(0x0c)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// Size: 0x10 (Inherited: 0x00)
struct FParticleSystemReplayFrame {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// Size: 0x10 (Inherited: 0x00)
struct FParticleEmitterReplayFrame {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.DelegateArray
// Size: 0x10 (Inherited: 0x00)
struct FDelegateArray {
	struct TArray<DelegateProperty> Delegates; // 0x00(0x10)
};

// ScriptStruct Engine.PurchaseInfo
// Size: 0x40 (Inherited: 0x00)
struct FPurchaseInfo {
	struct FString Identifier; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString DisplayDescription; // 0x20(0x10)
	struct FString DisplayPrice; // 0x30(0x10)
};

// ScriptStruct Engine.DebugDisplayProperty
// Size: 0x20 (Inherited: 0x00)
struct FDebugDisplayProperty {
	struct UObject* Obj; // 0x00(0x08)
	struct UClass* WithinClass; // 0x08(0x08)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.TransformBase
// Size: 0x28 (Inherited: 0x00)
struct FTransformBase {
	struct FName Node; // 0x00(0x08)
	struct FTransformBaseConstraint Constraints[0x02]; // 0x08(0x20)
};

// ScriptStruct Engine.TransformBaseConstraint
// Size: 0x10 (Inherited: 0x00)
struct FTransformBaseConstraint {
	struct TArray<struct FRigTransformConstraint> TransformConstraints; // 0x00(0x10)
};

// ScriptStruct Engine.RigTransformConstraint
// Size: 0x10 (Inherited: 0x00)
struct FRigTransformConstraint {
	char TranformType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FName ParentSpace; // 0x04(0x08)
	float Weight; // 0x0c(0x04)
};

// ScriptStruct Engine.Node
// Size: 0x60 (Inherited: 0x00)
struct FNode {
	struct FName Name; // 0x00(0x08)
	struct FName ParentName; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FString DisplayName; // 0x40(0x10)
	bool bAdvanced; // 0x50(0x01)
	char UnknownData_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct Engine.DestructibleParameters
// Size: 0x88 (Inherited: 0x00)
struct FDestructibleParameters {
	struct FDestructibleDamageParameters DamageParameters; // 0x00(0x1c)
	struct FDestructibleDebrisParameters DebrisParameters; // 0x1c(0x2c)
	struct FDestructibleAdvancedParameters AdvancedParameters; // 0x48(0x10)
	struct FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58(0x14)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FDestructibleDepthParameters> DepthParameters; // 0x70(0x10)
	struct FDestructibleParametersFlag Flags; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Engine.DestructibleParametersFlag
// Size: 0x04 (Inherited: 0x00)
struct FDestructibleParametersFlag {
	char bAccumulateDamage : 1; // 0x00(0x01)
	char bAssetDefinedSupport : 1; // 0x00(0x01)
	char bWorldSupport : 1; // 0x00(0x01)
	char bDebrisTimeout : 1; // 0x00(0x01)
	char bDebrisMaxSeparation : 1; // 0x00(0x01)
	char bCrumbleSmallestChunks : 1; // 0x00(0x01)
	char bAccurateRaycasts : 1; // 0x00(0x01)
	char bUseValidBounds : 1; // 0x00(0x01)
	char bFormExtendedStructures : 1; // 0x01(0x01)
	char UnknownData_1_1 : 7; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.DestructibleDepthParameters
// Size: 0x01 (Inherited: 0x00)
struct FDestructibleDepthParameters {
	char ImpactDamageOverride; // 0x00(0x01)
};

// ScriptStruct Engine.DestructibleSpecialHierarchyDepths
// Size: 0x14 (Inherited: 0x00)
struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x00(0x04)
	int32_t MinimumFractureDepth; // 0x04(0x04)
	bool bEnableDebris; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	int32_t DebrisDepth; // 0x0c(0x04)
	int32_t EssentialDepth; // 0x10(0x04)
};

// ScriptStruct Engine.DestructibleAdvancedParameters
// Size: 0x10 (Inherited: 0x00)
struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x00(0x04)
	float ImpactVelocityThreshold; // 0x04(0x04)
	float MaxChunkSpeed; // 0x08(0x04)
	float FractureImpulseScale; // 0x0c(0x04)
};

// ScriptStruct Engine.DestructibleDebrisParameters
// Size: 0x2c (Inherited: 0x00)
struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x00(0x04)
	float DebrisLifetimeMax; // 0x04(0x04)
	float DebrisMaxSeparationMin; // 0x08(0x04)
	float DebrisMaxSeparationMax; // 0x0c(0x04)
	struct FBox ValidBounds; // 0x10(0x1c)
};

// ScriptStruct Engine.DestructibleDamageParameters
// Size: 0x1c (Inherited: 0x00)
struct FDestructibleDamageParameters {
	float DamageThreshold; // 0x00(0x04)
	float DamageSpread; // 0x04(0x04)
	bool bEnableImpactDamage; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float ImpactDamage; // 0x0c(0x04)
	int32_t DefaultImpactDamageDepth; // 0x10(0x04)
	bool bCustomImpactResistance; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	float ImpactResistance; // 0x18(0x04)
};

// ScriptStruct Engine.SoundNodeEditorData
// Size: 0x08 (Inherited: 0x00)
struct FSoundNodeEditorData {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.SoundGroup
// Size: 0x20 (Inherited: 0x00)
struct FSoundGroup {
	char SoundGroup; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FString DisplayName; // 0x08(0x10)
	char bAlwaysDecompressOnLoad : 1; // 0x18(0x01)
	char UnknownData_18_1 : 7; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	float DecompressedDuration; // 0x1c(0x04)
};

// ScriptStruct Engine.StreamedAudioPlatformData
// Size: 0x20 (Inherited: 0x00)
struct FStreamedAudioPlatformData {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.PassiveSoundMixModifier
// Size: 0x10 (Inherited: 0x00)
struct FPassiveSoundMixModifier {
	struct USoundMix* SoundMix; // 0x00(0x08)
	float MinVolumeThreshold; // 0x08(0x04)
	float MaxVolumeThreshold; // 0x0c(0x04)
};

// ScriptStruct Engine.SoundClassProperties
// Size: 0x24 (Inherited: 0x00)
struct FSoundClassProperties {
	float Volume; // 0x00(0x04)
	float Pitch; // 0x04(0x04)
	float StereoBleed; // 0x08(0x04)
	float LFEBleed; // 0x0c(0x04)
	float VoiceCenterChannelVolume; // 0x10(0x04)
	float RadioFilterVolume; // 0x14(0x04)
	float RadioFilterVolumeThreshold; // 0x18(0x04)
	char bApplyEffects : 1; // 0x1c(0x01)
	char bAlwaysPlay : 1; // 0x1c(0x01)
	char bIsUISound : 1; // 0x1c(0x01)
	char bIsMusic : 1; // 0x1c(0x01)
	char bReverb : 1; // 0x1c(0x01)
	char bCenterChannelOnly : 1; // 0x1c(0x01)
	char bApplyAmbientVolumes : 1; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
	char OutputTarget; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
};

// ScriptStruct Engine.SoundClassEditorData
// Size: 0x08 (Inherited: 0x00)
struct FSoundClassEditorData {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.SoundClassAdjuster
// Size: 0x18 (Inherited: 0x00)
struct FSoundClassAdjuster {
	struct USoundClass* SoundClassObject; // 0x00(0x08)
	float VolumeAdjuster; // 0x08(0x04)
	float PitchAdjuster; // 0x0c(0x04)
	char bApplyToChildren : 1; // 0x10(0x01)
	char UnknownData_10_1 : 7; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float VoiceCenterChannelVolumeAdjuster; // 0x14(0x04)
};

// ScriptStruct Engine.AudioEQEffect
// Size: 0x28 (Inherited: 0x00)
struct FAudioEQEffect {
	char UnknownData_0[0x8]; // 0x00(0x08)
	float HFFrequency; // 0x08(0x04)
	float HFGain; // 0x0c(0x04)
	float MFCutoffFrequency; // 0x10(0x04)
	float MFBandwidth; // 0x14(0x04)
	float MFGain; // 0x18(0x04)
	float LFFrequency; // 0x1c(0x04)
	float LFGain; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.DistanceDatum
// Size: 0x14 (Inherited: 0x00)
struct FDistanceDatum {
	float FadeInDistanceStart; // 0x00(0x04)
	float FadeInDistanceEnd; // 0x04(0x04)
	float FadeOutDistanceStart; // 0x08(0x04)
	float FadeOutDistanceEnd; // 0x0c(0x04)
	float Volume; // 0x10(0x04)
};

// ScriptStruct Engine.ModulatorContinuousParams
// Size: 0x20 (Inherited: 0x00)
struct FModulatorContinuousParams {
	struct FName ParameterName; // 0x00(0x08)
	float Default; // 0x08(0x04)
	float MinInput; // 0x0c(0x04)
	float MaxInput; // 0x10(0x04)
	float MinOutput; // 0x14(0x04)
	float MaxOutput; // 0x18(0x04)
	char ParamMode; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// Size: 0x24 (Inherited: 0x00)
struct FSubsurfaceProfileStruct {
	float ScatterRadius; // 0x00(0x04)
	struct FLinearColor SubsurfaceColor; // 0x04(0x10)
	struct FLinearColor FalloffColor; // 0x14(0x10)
};

// ScriptStruct Engine.TTLinearColorTrack
// Size: 0x18 (Inherited: 0x0c)
struct FTTLinearColorTrack : FTTTrackBase {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UCurveLinearColor* CurveLinearColor; // 0x10(0x08)
};

// ScriptStruct Engine.TTTrackBase
// Size: 0x0c (Inherited: 0x00)
struct FTTTrackBase {
	struct FName TrackName; // 0x00(0x08)
	bool bIsExternalCurve; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.TTVectorTrack
// Size: 0x18 (Inherited: 0x0c)
struct FTTVectorTrack : FTTTrackBase {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UCurveVector* CurveVector; // 0x10(0x08)
};

// ScriptStruct Engine.TTFloatTrack
// Size: 0x18 (Inherited: 0x0c)
struct FTTFloatTrack : FTTTrackBase {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* CurveFloat; // 0x10(0x08)
};

// ScriptStruct Engine.TTEventTrack
// Size: 0x18 (Inherited: 0x0c)
struct FTTEventTrack : FTTTrackBase {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* CurveKeys; // 0x10(0x08)
};

// ScriptStruct Engine.TouchInputControl
// Size: 0x78 (Inherited: 0x00)
struct FTouchInputControl {
	struct UTexture2D* Image1; // 0x00(0x08)
	struct UTexture2D* Image2; // 0x08(0x08)
	struct FVector2D Center; // 0x10(0x08)
	struct FVector2D VisualSize; // 0x18(0x08)
	struct FVector2D ThumbSize; // 0x20(0x08)
	struct FVector2D InteractionSize; // 0x28(0x08)
	struct FVector2D InputScale; // 0x30(0x08)
	struct FKey MainInputKey; // 0x38(0x20)
	struct FKey AltInputKey; // 0x58(0x20)
};

// ScriptStruct Engine.AnimationRecordingSettings
// Size: 0x0c (Inherited: 0x00)
struct FAnimationRecordingSettings {
	bool bRecordInWorldSpace; // 0x00(0x01)
	bool bRemoveRootAnimation; // 0x01(0x01)
	bool bAutoSaveAsset; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	float SampleRate; // 0x04(0x04)
	float Length; // 0x08(0x04)
};

// ScriptStruct Engine.AnimNode_ApplyAdditive
// Size: 0x70 (Inherited: 0x30)
struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x30(0x18)
	struct FPoseLink Additive; // 0x48(0x18)
	float Alpha; // 0x60(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x64(0x08)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size: 0x40 (Inherited: 0x30)
struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	bool bIgnoreForRelevancyTest; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float BlendWeight; // 0x34(0x04)
	float InternalTimeAccumulator; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Engine.AnimNode_BlendListBase
// Size: 0xa8 (Inherited: 0x30)
struct FAnimNode_BlendListBase : FAnimNode_Base {
	struct TArray<struct FPoseLink> BlendPose; // 0x30(0x10)
	struct TArray<float> BlendTime; // 0x40(0x10)
	char BlendType; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct UCurveFloat* CustomBlendCurve; // 0x58(0x08)
	struct TArray<struct FAlphaBlend> Blends; // 0x60(0x10)
	struct TArray<float> BlendWeights; // 0x70(0x10)
	struct TArray<float> RemainingBlendTimes; // 0x80(0x10)
	int32_t LastActiveChildIndex; // 0x90(0x04)
	char UnknownData_94[0x14]; // 0x94(0x14)
};

// ScriptStruct Engine.AnimNode_BlendListByBool
// Size: 0xb0 (Inherited: 0xa8)
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct Engine.AnimNode_BlendListByEnum
// Size: 0xc0 (Inherited: 0xa8)
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	struct TArray<int32_t> EnumToPoseIndex; // 0xa8(0x10)
	char ActiveEnumValue; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct Engine.AnimNode_BlendListByInt
// Size: 0xb0 (Inherited: 0xa8)
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.AnimNode_BlendListByObject
// Size: 0xc0 (Inherited: 0xa8)
struct FAnimNode_BlendListByObject : FAnimNode_BlendListBase {
	struct UClass* ActiveTypeValue; // 0xa8(0x08)
	struct TArray<struct UClass*> ObjectToPoseIndex; // 0xb0(0x10)
};

// ScriptStruct Engine.AnimNode_BlendSpacePlayer
// Size: 0x110 (Inherited: 0x40)
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x40(0x04)
	float Y; // 0x44(0x04)
	float Z; // 0x48(0x04)
	float PlayRate; // 0x4c(0x04)
	bool bLoop; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct UBlendSpaceBase* BlendSpace; // 0x58(0x08)
	int32_t GroupIndex; // 0x60(0x04)
	char GroupRole; // 0x64(0x01)
	char UnknownData_65[0x3]; // 0x65(0x03)
	struct FBlendFilter BlendFilter; // 0x68(0x90)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0xf8(0x10)
	char UnknownData_108[0x8]; // 0x108(0x08)
};

// ScriptStruct Engine.AnimNode_BlendSpaceEvaluator
// Size: 0x118 (Inherited: 0x110)
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0x110(0x04)
	char UnknownData_114[0x4]; // 0x114(0x04)
};

// ScriptStruct Engine.AnimNode_HIKFloorContact
// Size: 0xc0 (Inherited: 0x48)
struct FAnimNode_HIKFloorContact : FAnimNode_HIKBase {
	bool FeetContact; // 0x48(0x01)
	bool HandsContact; // 0x49(0x01)
	bool FingersContact; // 0x4a(0x01)
	bool ToesContact; // 0x4b(0x01)
	char FeetContactType; // 0x4c(0x01)
	char HandsContactType; // 0x4d(0x01)
	char UnknownData_4E[0x2]; // 0x4e(0x02)
	float DistanceUp; // 0x50(0x04)
	float DistanceDown; // 0x54(0x04)
	int32_t NbRays; // 0x58(0x04)
	float FootRadius; // 0x5c(0x04)
	float DeltaTime; // 0x60(0x04)
	float Smoothing; // 0x64(0x04)
	struct FCollisionResponseContainer OverrideRaycastCollisionResponse; // 0x68(0x20)
	float FeetHeight; // 0x88(0x04)
	float FeetBack; // 0x8c(0x04)
	float FeetMiddle; // 0x90(0x04)
	float FeetFront; // 0x94(0x04)
	float FeetInSide; // 0x98(0x04)
	float FeetOutSide; // 0x9c(0x04)
	float HandsHeight; // 0xa0(0x04)
	float HandsBack; // 0xa4(0x04)
	float HandsMiddle; // 0xa8(0x04)
	float HandsFront; // 0xac(0x04)
	float HandsInSide; // 0xb0(0x04)
	float HandsOutSide; // 0xb4(0x04)
	char UnknownData_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct Engine.AnimNode_HIKLookAt
// Size: 0x88 (Inherited: 0x48)
struct FAnimNode_HIKLookAt : FAnimNode_HIKBase {
	float Alpha; // 0x48(0x04)
	struct FVector TargetPosition; // 0x4c(0x0c)
	float ChestContribution; // 0x58(0x04)
	bool XYOnly; // 0x5c(0x01)
	char Limits; // 0x5d(0x01)
	char UnknownData_5E[0x2]; // 0x5e(0x02)
	float LimitsHorizontalAngle; // 0x60(0x04)
	float LimitsVerticalAngle; // 0x64(0x04)
	float ActivationSpeed; // 0x68(0x04)
	float TargetPositionSpeed; // 0x6c(0x04)
	char InterpolationMode; // 0x70(0x01)
	char UnknownData_71[0x17]; // 0x71(0x17)
};

// ScriptStruct Engine.AnimNode_HIKOffset
// Size: 0x60 (Inherited: 0x48)
struct FAnimNode_HIKOffset : FAnimNode_HIKBase {
	float Alpha; // 0x48(0x04)
	float ReachT; // 0x4c(0x04)
	struct FVector Translation; // 0x50(0x0c)
	char Effector; // 0x5c(0x01)
	char EffectorSpace; // 0x5d(0x01)
	char UnknownData_5E[0x2]; // 0x5e(0x02)
};

// ScriptStruct Engine.AnimNode_HIKPin
// Size: 0x58 (Inherited: 0x48)
struct FAnimNode_HIKPin : FAnimNode_HIKBase {
	float Alpha; // 0x48(0x04)
	float PinTStrength; // 0x4c(0x04)
	float PinRStrength; // 0x50(0x04)
	char Effector; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
};

// ScriptStruct Engine.AnimNode_HIKPlant
// Size: 0x60 (Inherited: 0x48)
struct FAnimNode_HIKPlant : FAnimNode_HIKBase {
	float Alpha; // 0x48(0x04)
	float HipsLevel; // 0x4c(0x04)
	float ProjectionDistance; // 0x50(0x04)
	bool PullFeetInsteadOfAnkles; // 0x54(0x01)
	bool IsQuadruped; // 0x55(0x01)
	char UnknownData_56[0x2]; // 0x56(0x02)
	float ChestLevel; // 0x58(0x04)
	bool PullHandsInsteadOfWrists; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct Engine.AnimNode_HIKPull
// Size: 0x50 (Inherited: 0x48)
struct FAnimNode_HIKPull : FAnimNode_HIKBase {
	float Alpha; // 0x48(0x04)
	char Effector; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct Engine.AnimNode_HIKReach
// Size: 0x80 (Inherited: 0x48)
struct FAnimNode_HIKReach : FAnimNode_HIKBase {
	float Alpha; // 0x48(0x04)
	float ReachT; // 0x4c(0x04)
	float ReachR; // 0x50(0x04)
	struct FVector Translation; // 0x54(0x0c)
	struct FQuat Orientation; // 0x60(0x10)
	char Effector; // 0x70(0x01)
	char EffectorSpace; // 0x71(0x01)
	char UnknownData_72[0x2]; // 0x72(0x02)
	struct FName ParentBone; // 0x74(0x08)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Engine.AnimNode_HIKReachRotator
// Size: 0x70 (Inherited: 0x48)
struct FAnimNode_HIKReachRotator : FAnimNode_HIKBase {
	float Alpha; // 0x48(0x04)
	float ReachT; // 0x4c(0x04)
	float ReachR; // 0x50(0x04)
	struct FVector Translation; // 0x54(0x0c)
	struct FRotator Orientation; // 0x60(0x0c)
	char Effector; // 0x6c(0x01)
	char EffectorSpace; // 0x6d(0x01)
	char UnknownData_6E[0x2]; // 0x6e(0x02)
};

// ScriptStruct Engine.AnimNode_HIKRelativePlant
// Size: 0x98 (Inherited: 0x48)
struct FAnimNode_HIKRelativePlant : FAnimNode_HIKBase {
	float Alpha; // 0x48(0x04)
	float Depth; // 0x4c(0x04)
	float HipsRotationFactor; // 0x50(0x04)
	float ChestRotationFactor; // 0x54(0x04)
	float DistanceUp; // 0x58(0x04)
	float DistanceDown; // 0x5c(0x04)
	int32_t NbRays; // 0x60(0x04)
	float FootRadius; // 0x64(0x04)
	struct FCollisionResponseContainer OverrideRaycastCollisionResponse; // 0x68(0x20)
	float DeltaTime; // 0x88(0x04)
	float Smoothing; // 0x8c(0x04)
	char UnknownData_90[0x8]; // 0x90(0x08)
};

// ScriptStruct Engine.AnimNode_HIKRelativePlantAndFloorContact
// Size: 0xd0 (Inherited: 0x48)
struct FAnimNode_HIKRelativePlantAndFloorContact : FAnimNode_HIKBase {
	bool FeetContact; // 0x48(0x01)
	bool HandsContact; // 0x49(0x01)
	bool FingersContact; // 0x4a(0x01)
	bool ToesContact; // 0x4b(0x01)
	char FeetContactType; // 0x4c(0x01)
	char HandsContactType; // 0x4d(0x01)
	char UnknownData_4E[0x2]; // 0x4e(0x02)
	float Alpha; // 0x50(0x04)
	float Depth; // 0x54(0x04)
	float HipsRotationFactor; // 0x58(0x04)
	float ChestRotationFactor; // 0x5c(0x04)
	float DistanceUp; // 0x60(0x04)
	float DistanceDown; // 0x64(0x04)
	int32_t NbRays; // 0x68(0x04)
	float FootRadius; // 0x6c(0x04)
	float DeltaTime; // 0x70(0x04)
	float Smoothing; // 0x74(0x04)
	struct FCollisionResponseContainer OverrideRaycastCollisionResponse; // 0x78(0x20)
	float FeetHeight; // 0x98(0x04)
	float FeetBack; // 0x9c(0x04)
	float FeetMiddle; // 0xa0(0x04)
	float FeetFront; // 0xa4(0x04)
	float FeetInSide; // 0xa8(0x04)
	float FeetOutSide; // 0xac(0x04)
	float HandsHeight; // 0xb0(0x04)
	float HandsBack; // 0xb4(0x04)
	float HandsMiddle; // 0xb8(0x04)
	float HandsFront; // 0xbc(0x04)
	float HandsInSide; // 0xc0(0x04)
	float HandsOutSide; // 0xc4(0x04)
	char UnknownData_C8[0x8]; // 0xc8(0x08)
};

// ScriptStruct Engine.AnimNode_HIKResist
// Size: 0x50 (Inherited: 0x48)
struct FAnimNode_HIKResist : FAnimNode_HIKBase {
	float Alpha; // 0x48(0x04)
	char Effector; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct Engine.AnimNode_HIKSetProperty
// Size: 0x50 (Inherited: 0x48)
struct FAnimNode_HIKSetProperty : FAnimNode_HIKBase {
	char Property; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	float Value; // 0x4c(0x04)
};

// ScriptStruct Engine.AnimNode_HIKSolve
// Size: 0x80 (Inherited: 0x48)
struct FAnimNode_HIKSolve : FAnimNode_HIKBase {
	float Alpha; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FComponentSpacePoseLink InputFKPose; // 0x50(0x18)
	bool enablePullEngine; // 0x68(0x01)
	bool enableBodyPartSolving; // 0x69(0x01)
	bool enableLODSolver; // 0x6a(0x01)
	bool enableLegsSNS; // 0x6b(0x01)
	bool enableArmsSNS; // 0x6c(0x01)
	bool boneLengthFromInputPose; // 0x6d(0x01)
	bool bodyPartSolveLeftShoulder; // 0x6e(0x01)
	bool bodyPartSolveRightShoulder; // 0x6f(0x01)
	bool bodyPartSolveLeftArm; // 0x70(0x01)
	bool bodyPartSolveRightArm; // 0x71(0x01)
	bool bodyPartSolveLeftLeg; // 0x72(0x01)
	bool bodyPartSolveRightLeg; // 0x73(0x01)
	bool bodyPartSolveLeftHand; // 0x74(0x01)
	bool bodyPartSolveRightHand; // 0x75(0x01)
	bool bodyPartSolveLeftFoot; // 0x76(0x01)
	bool bodyPartSolveRightFoot; // 0x77(0x01)
	bool bodyPartSolveHead; // 0x78(0x01)
	bool bodyPartSolveSpine; // 0x79(0x01)
	bool checkOutputPoseContainsNaNs; // 0x7a(0x01)
	char UnknownData_7B[0x5]; // 0x7b(0x05)
};

// ScriptStruct Engine.AnimNode_HIKTest
// Size: 0x58 (Inherited: 0x48)
struct FAnimNode_HIKTest : FAnimNode_HIKBase {
	float Alpha; // 0x48(0x04)
	float Param; // 0x4c(0x04)
	float Intensity; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Engine.AnimNode_LayeredBoneBlend
// Size: 0xa0 (Inherited: 0x30)
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	struct TArray<struct FPoseLink> BlendPoses; // 0x48(0x10)
	struct TArray<struct FInputBlendPose> LayerSetup; // 0x58(0x10)
	struct TArray<float> BlendWeights; // 0x68(0x10)
	bool bMeshSpaceRotationBlend; // 0x78(0x01)
	char CurveBlendOption; // 0x79(0x01)
	char UnknownData_7A[0x26]; // 0x7a(0x26)
};

// ScriptStruct Engine.AnimNode_MultiWayBlend
// Size: 0x70 (Inherited: 0x30)
struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	struct TArray<struct FPoseLink> Poses; // 0x30(0x10)
	struct TArray<float> DesiredAlphas; // 0x40(0x10)
	bool bAdditiveNode; // 0x50(0x01)
	bool bNormalizeAlpha; // 0x51(0x01)
	char UnknownData_52[0x2]; // 0x52(0x02)
	struct FInputScaleBias AlphaScaleBias; // 0x54(0x08)
	char UnknownData_5C[0x14]; // 0x5c(0x14)
};

// ScriptStruct Engine.AnimNode_MeshSpaceRefPose
// Size: 0x30 (Inherited: 0x30)
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base {
};

// ScriptStruct Engine.AnimNode_RefPose
// Size: 0x38 (Inherited: 0x30)
struct FAnimNode_RefPose : FAnimNode_Base {
	char RefPoseType; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Engine.AnimNode_Root
// Size: 0x48 (Inherited: 0x30)
struct FAnimNode_Root : FAnimNode_Base {
	struct FPoseLink Result; // 0x30(0x18)
};

// ScriptStruct Engine.AnimNode_RotateRootBone
// Size: 0x60 (Inherited: 0x30)
struct FAnimNode_RotateRootBone : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	float Pitch; // 0x48(0x04)
	float Yaw; // 0x4c(0x04)
	struct FRotator MeshToComponent; // 0x50(0x0c)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Engine.AnimNode_RotationOffsetBlendSpace
// Size: 0x128 (Inherited: 0x110)
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	struct FPoseLink BasePose; // 0x110(0x18)
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// Size: 0x90 (Inherited: 0x30)
struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	int16_t LastInitializedContextCounter; // 0x30(0x02)
	int16_t LastCacheBonesContextCounter; // 0x32(0x02)
	int16_t LastUpdatedContextCounter; // 0x34(0x02)
	int16_t LastEvaluatedContextCounter; // 0x36(0x02)
	struct FPoseLink Pose; // 0x38(0x18)
	char UnknownData_50[0x40]; // 0x50(0x40)
};

// ScriptStruct Engine.AnimNode_SequenceEvaluator
// Size: 0x50 (Inherited: 0x40)
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x40(0x08)
	float ExplicitTime; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// Size: 0x60 (Inherited: 0x40)
struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x40(0x08)
	bool bLoopAnimation; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	float PlayRate; // 0x4c(0x04)
	int32_t GroupIndex; // 0x50(0x04)
	char GroupRole; // 0x54(0x01)
	char UnknownData_55[0xb]; // 0x55(0x0b)
};

// ScriptStruct Engine.AnimNode_Slot
// Size: 0x60 (Inherited: 0x30)
struct FAnimNode_Slot : FAnimNode_Base {
	struct FPoseLink Source; // 0x30(0x18)
	struct FName SlotName; // 0x48(0x08)
	char UnknownData_50[0x8]; // 0x50(0x08)
	int16_t LastSlotNodeInitializationCounter; // 0x58(0x02)
	char UnknownData_5A[0x6]; // 0x5a(0x06)
};

// ScriptStruct Engine.AnimNode_StateMachine
// Size: 0xa8 (Inherited: 0x30)
struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x30(0x04)
	int32_t MaxTransitionsPerFrame; // 0x34(0x04)
	char UnknownData_38[0x8]; // 0x38(0x08)
	int32_t CurrentState; // 0x40(0x04)
	float ElapsedTime; // 0x44(0x04)
	char UnknownData_48[0x60]; // 0x48(0x60)
};

// ScriptStruct Engine.AnimationPotentialTransition
// Size: 0x10 (Inherited: 0x00)
struct FAnimationPotentialTransition {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// Size: 0x90 (Inherited: 0x00)
struct FAnimationActiveTransitionEntry {
	char UnknownData_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// Size: 0x80 (Inherited: 0x30)
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	char DataSource; // 0x30(0x01)
	char EvaluatorMode; // 0x31(0x01)
	char UnknownData_32[0x2]; // 0x32(0x02)
	int32_t FramesToCachePose; // 0x34(0x04)
	char UnknownData_38[0x40]; // 0x38(0x40)
	int32_t CacheFramesRemaining; // 0x78(0x04)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Engine.AnimNode_TransitionResult
// Size: 0x40 (Inherited: 0x30)
struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x30(0x01)
	char UnknownData_31[0xf]; // 0x31(0x0f)
};

// ScriptStruct Engine.AnimationNode_TwoWayBlend
// Size: 0x70 (Inherited: 0x30)
struct FAnimationNode_TwoWayBlend : FAnimNode_Base {
	struct FPoseLink A; // 0x30(0x18)
	struct FPoseLink B; // 0x48(0x18)
	float Alpha; // 0x60(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x64(0x08)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// Size: 0x48 (Inherited: 0x30)
struct FAnimNode_UseCachedPose : FAnimNode_Base {
	struct FPoseLink LinkToCachingNode; // 0x30(0x18)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// Size: 0x48 (Inherited: 0x30)
struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	struct FPoseLink LocalPose; // 0x30(0x18)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// Size: 0x48 (Inherited: 0x30)
struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x30(0x18)
};

// ScriptStruct Engine.DummySpacerCameraTypes
// Size: 0x01 (Inherited: 0x00)
struct FDummySpacerCameraTypes {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.NetRelevancyStat
// Size: 0xe8 (Inherited: 0x00)
struct FNetRelevancyStat {
	struct FGuid RequestID; // 0x00(0x10)
	struct FString Reason; // 0x10(0x10)
	struct FNetRelevancyStateStat State; // 0x20(0xc8)
};

// ScriptStruct Engine.NetRelevancyStateStat
// Size: 0xc8 (Inherited: 0x00)
struct FNetRelevancyStateStat {
	float Duration; // 0x00(0x04)
	int32_t RemainingCycles; // 0x04(0x04)
	struct FString StreamingMode; // 0x08(0x10)
	struct FNetRelevancyConnectionStat Connection; // 0x18(0x90)
	struct TArray<struct FNetRelevancyActorStat> Actors; // 0xa8(0x10)
	struct TArray<struct FNetRelevancyLevelStat> Levels; // 0xb8(0x10)
};

// ScriptStruct Engine.NetRelevancyLevelStat
// Size: 0x18 (Inherited: 0x00)
struct FNetRelevancyLevelStat {
	struct FString Name; // 0x00(0x10)
	bool Visible; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	int32_t LODIndex; // 0x14(0x04)
};

// ScriptStruct Engine.NetRelevancyActorStat
// Size: 0xc8 (Inherited: 0x00)
struct FNetRelevancyActorStat {
	struct FString Name; // 0x00(0x10)
	struct FString path; // 0x10(0x10)
	struct FString Owner; // 0x20(0x10)
	struct FString AttachedParent; // 0x30(0x10)
	struct FString AttachedParentOwner; // 0x40(0x10)
	struct FVector Location; // 0x50(0x0c)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FNetRelevancyActorClusterStat Cluster; // 0x60(0x48)
	char ChannelState; // 0xa8(0x01)
	bool HasBegunPlay; // 0xa9(0x01)
	bool IsNetRelevant; // 0xaa(0x01)
	bool IsAlwaysRelevant; // 0xab(0x01)
	bool UseOwnerRelevancy; // 0xac(0x01)
	bool OnlyRelevantToOwner; // 0xad(0x01)
	char ActorDormancy; // 0xae(0x01)
	char ChannelDormancy; // 0xaf(0x01)
	struct FString PushModelDormancy; // 0xb0(0x10)
	float NetUpdateFrequency; // 0xc0(0x04)
	char UnknownData_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct Engine.NetRelevancyActorClusterStat
// Size: 0x48 (Inherited: 0x00)
struct FNetRelevancyActorClusterStat {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct FString> SubClusters; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct FString Owner; // 0x30(0x10)
	bool IsCustomNamed; // 0x40(0x01)
	bool NeedsPreparation; // 0x41(0x01)
	char UnknownData_42[0x6]; // 0x42(0x06)
};

// ScriptStruct Engine.NetRelevancyConnectionStat
// Size: 0x90 (Inherited: 0x00)
struct FNetRelevancyConnectionStat {
	int32_t Id; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FNetViewer Viewer; // 0x08(0x58)
	struct TArray<struct FIntPoint> ViewerGridLocations; // 0x60(0x10)
	struct TArray<struct FString> DormantActors; // 0x70(0x10)
	struct TArray<struct FString> ConsideredActors; // 0x80(0x10)
};

// ScriptStruct Engine.NetTimeStampCalculator
// Size: 0x70 (Inherited: 0x00)
struct FNetTimeStampCalculator {
	char UnknownData_0[0x6a]; // 0x00(0x6a)
	uint16_t TimesWrapped; // 0x6a(0x02)
	uint16_t PackedTimeStamp; // 0x6c(0x02)
	char UnknownData_6E[0x2]; // 0x6e(0x02)
};

// ScriptStruct Engine.StreamableManager
// Size: 0xc0 (Inherited: 0x00)
struct FStreamableManager {
	char UnknownData_0[0xc0]; // 0x00(0xc0)
};

// ScriptStruct Engine.ServerMigrationTelemetryFailedData
// Size: 0x10 (Inherited: 0x00)
struct FServerMigrationTelemetryFailedData {
	struct FString Stage; // 0x00(0x10)
};

// ScriptStruct Engine.ServerMigrationTelemetrySucceededData
// Size: 0x20 (Inherited: 0x00)
struct FServerMigrationTelemetrySucceededData {
	struct TArray<struct FServerMigrationTelemetryActorData> ActorDetails; // 0x00(0x10)
	float TotalTime; // 0x10(0x04)
	int32_t NumClients; // 0x14(0x04)
	int32_t NumActorsMigrated; // 0x18(0x04)
	int32_t ActorSerialisationBytes; // 0x1c(0x04)
};

// ScriptStruct Engine.ServerMigrationTelemetryActorData
// Size: 0x28 (Inherited: 0x00)
struct FServerMigrationTelemetryActorData {
	struct UClass* ActorClass; // 0x00(0x20)
	int32_t Count; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.ReplicatedPhysicsState
// Size: 0x50 (Inherited: 0x00)
struct FReplicatedPhysicsState {
	struct UPrimitiveComponent* MovementBase; // 0x00(0x08)
	struct USceneComponent* AttachParent; // 0x08(0x08)
	struct FRepMovement ReplicatedMovement; // 0x10(0x38)
	bool IsAttached; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Engine.ReplicatedTransformState
// Size: 0x30 (Inherited: 0x00)
struct FReplicatedTransformState {
	struct USceneComponent* MovementBase; // 0x00(0x08)
	struct USceneComponent* AttachParent; // 0x08(0x08)
	struct FRepTransform ReplicatedMovement; // 0x10(0x18)
	bool IsAttached; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Engine.RepTransform
// Size: 0x18 (Inherited: 0x00)
struct FRepTransform {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct Engine.SkelMeshMergeMorphTarget
// Size: 0x0c (Inherited: 0x00)
struct FSkelMeshMergeMorphTarget {
	char UnknownData_0[0xc]; // 0x00(0x0c)
};

