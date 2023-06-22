// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t {
	AddToInput,
	ReplaceComponent,
	AddToRefPose,
	EDrivenBoneModificationMode_MAX,
};

// Enum AnimGraphRuntime.EComponentType
enum class EComponentType : uint8_t {
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
enum class EInterpolationBlend : uint8_t {
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
enum class EAxisOption : uint8_t {
	X,
	Y,
	Z,
	X_Neg,
	Y_Neg,
	Z_Neg,
	EAxisOption_MAX,
};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t {
	BMM_Ignore,
	BMM_Replace,
	BMM_Additive,
	BMM_MAX,
};

// Enum AnimGraphRuntime.EBoneAxis
enum class EBoneAxis : uint8_t {
	BA_X,
	BA_Y,
	BA_Z,
	BA_MAX,
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0xc0 (Inherited: 0x30)
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	struct USkeletalMeshComponent* SourceMeshComponent; // 0x30(0x08)
	bool bUseAttachedParent; // 0x38(0x01)
	char UnknownData_39[0x87]; // 0x39(0x87)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0x58 (Inherited: 0x30)
struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x30(0x18)
	float Alpha; // 0x48(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x4c(0x08)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0xa0 (Inherited: 0x58)
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0x58(0x0c)
	char SourceComponent; // 0x64(0x01)
	char UnknownData_65[0x3]; // 0x65(0x03)
	struct UCurveFloat* DrivingCurve; // 0x68(0x08)
	float Multiplier; // 0x70(0x04)
	bool bUseRange; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
	float RangeMin; // 0x78(0x04)
	float RangeMax; // 0x7c(0x04)
	float RemappedMin; // 0x80(0x04)
	float RemappedMax; // 0x84(0x04)
	struct FBoneReference TargetBone; // 0x88(0x0c)
	char TargetComponent; // 0x94(0x01)
	char UnknownData_95[0x3]; // 0x95(0x03)
	char bAffectTargetTranslationX : 1; // 0x98(0x01)
	char bAffectTargetTranslationY : 1; // 0x98(0x01)
	char bAffectTargetTranslationZ : 1; // 0x98(0x01)
	char bAffectTargetRotationX : 1; // 0x98(0x01)
	char bAffectTargetRotationY : 1; // 0x98(0x01)
	char bAffectTargetRotationZ : 1; // 0x98(0x01)
	char bAffectTargetScaleX : 1; // 0x98(0x01)
	char bAffectTargetScaleY : 1; // 0x98(0x01)
	char bAffectTargetScaleZ : 1; // 0x99(0x01)
	char UnknownData_99_1 : 7; // 0x99(0x01)
	char UnknownData_9A[0x2]; // 0x9a(0x02)
	char ModificationMode; // 0x9c(0x01)
	char UnknownData_9D[0x3]; // 0x9d(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Size: 0x78 (Inherited: 0x58)
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0x58(0x0c)
	struct FBoneReference TargetBone; // 0x64(0x0c)
	bool bCopyTranslation; // 0x70(0x01)
	bool bCopyRotation; // 0x71(0x01)
	bool bCopyScale; // 0x72(0x01)
	char UnknownData_73[0x5]; // 0x73(0x05)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size: 0xd0 (Inherited: 0x58)
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	char UnknownData_58[0x8]; // 0x58(0x08)
	struct FTransform EffectorTransform; // 0x60(0x30)
	char EffectorTransformSpace; // 0x90(0x01)
	char UnknownData_91[0x3]; // 0x91(0x03)
	struct FBoneReference EffectorTransformBone; // 0x94(0x0c)
	char EffectorRotationSource; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	struct FBoneReference TipBone; // 0xa4(0x0c)
	struct FBoneReference RootBone; // 0xb0(0x0c)
	float Precision; // 0xbc(0x04)
	int32_t MaxIterations; // 0xc0(0x04)
	bool bEnableDebugDraw; // 0xc4(0x01)
	char UnknownData_C5[0xb]; // 0xc5(0x0b)
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0xa0 (Inherited: 0x58)
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	struct FBoneReference RightHandFK; // 0x58(0x0c)
	struct FBoneReference LeftHandFK; // 0x64(0x0c)
	struct FBoneReference RightHandIK; // 0x70(0x0c)
	struct FBoneReference LeftHandIK; // 0x7c(0x0c)
	struct TArray<struct FBoneReference> IKBonesToMove; // 0x88(0x10)
	float HandFKWeight; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Size: 0xc0 (Inherited: 0x58)
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0x58(0x0c)
	struct FBoneReference LookAtBone; // 0x64(0x0c)
	struct FVector LookAtLocation; // 0x70(0x0c)
	char LookAtAxis; // 0x7c(0x01)
	bool bUseLookUpAxis; // 0x7d(0x01)
	char LookUpAxis; // 0x7e(0x01)
	char UnknownData_7F[0x1]; // 0x7f(0x01)
	float LookAtClamp; // 0x80(0x04)
	char InterpolationType; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
	float InterpolationTime; // 0x88(0x04)
	float InterpolationTriggerThreashold; // 0x8c(0x04)
	bool bEnableDebug; // 0x90(0x01)
	char UnknownData_91[0x2f]; // 0x91(0x2f)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0x90 (Inherited: 0x58)
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0x58(0x0c)
	struct FVector Translation; // 0x64(0x0c)
	struct FRotator Rotation; // 0x70(0x0c)
	struct FVector Scale; // 0x7c(0x0c)
	char TranslationMode; // 0x88(0x01)
	char RotationMode; // 0x89(0x01)
	char ScaleMode; // 0x8a(0x01)
	char TranslationSpace; // 0x8b(0x01)
	char RotationSpace; // 0x8c(0x01)
	char ScaleSpace; // 0x8d(0x01)
	char UnknownData_8E[0x2]; // 0x8e(0x02)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0x90 (Inherited: 0x58)
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToObserve; // 0x58(0x0c)
	char DisplaySpace; // 0x64(0x01)
	bool bRelativeToRefPose; // 0x65(0x01)
	char UnknownData_66[0x2]; // 0x66(0x02)
	struct FVector Translation; // 0x68(0x0c)
	struct FRotator Rotation; // 0x74(0x0c)
	struct FVector Scale; // 0x80(0x0c)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0x78 (Inherited: 0x58)
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	struct FBoneReference TargetBone; // 0x58(0x0c)
	struct FBoneReference SourceBone; // 0x64(0x0c)
	float Multiplier; // 0x70(0x04)
	char RotationAxisToRefer; // 0x74(0x01)
	bool bIsAdditive; // 0x75(0x01)
	char UnknownData_76[0x2]; // 0x76(0x02)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size: 0xa8 (Inherited: 0x58)
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SpringBone; // 0x58(0x0c)
	bool bLimitDisplacement; // 0x64(0x01)
	char UnknownData_65[0x3]; // 0x65(0x03)
	float MaxDisplacement; // 0x68(0x04)
	float SpringStiffness; // 0x6c(0x04)
	float SpringDamping; // 0x70(0x04)
	float ErrorResetThresh; // 0x74(0x04)
	bool bNoZSpring; // 0x78(0x01)
	bool bTranslateX; // 0x79(0x01)
	bool bTranslateY; // 0x7a(0x01)
	bool bTranslateZ; // 0x7b(0x01)
	bool bRotateX; // 0x7c(0x01)
	bool bRotateY; // 0x7d(0x01)
	bool bRotateZ; // 0x7e(0x01)
	char UnknownData_7F[0x29]; // 0x7f(0x29)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size: 0xe0 (Inherited: 0x58)
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	struct FBoneReference TrailBone; // 0x58(0x0c)
	int32_t ChainLength; // 0x64(0x04)
	char ChainBoneAxis; // 0x68(0x01)
	bool bInvertChainBoneAxis; // 0x69(0x01)
	bool bLimitStretch; // 0x6a(0x01)
	char UnknownData_6B[0x1]; // 0x6b(0x01)
	float TrailRelaxation; // 0x6c(0x04)
	float StretchLimit; // 0x70(0x04)
	struct FVector FakeVelocity; // 0x74(0x0c)
	bool bActorSpaceFakeVel; // 0x80(0x01)
	char UnknownData_81[0x5f]; // 0x81(0x5f)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0xa0 (Inherited: 0x58)
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference IKBone; // 0x58(0x0c)
	struct FVector EffectorLocation; // 0x64(0x0c)
	struct FVector JointTargetLocation; // 0x70(0x0c)
	struct FVector2D StretchLimits; // 0x7c(0x08)
	struct FName EffectorSpaceBoneName; // 0x84(0x08)
	char bTakeRotationFromEffectorSpace : 1; // 0x8c(0x01)
	char bMaintainEffectorRelRot : 1; // 0x8c(0x01)
	char bAllowStretching : 1; // 0x8c(0x01)
	char UnknownData_8C_3 : 5; // 0x8c(0x01)
	char UnknownData_8D[0x3]; // 0x8d(0x03)
	char EffectorLocationSpace; // 0x90(0x01)
	char JointTargetLocationSpace; // 0x91(0x01)
	char UnknownData_92[0x2]; // 0x92(0x02)
	struct FName JointTargetSpaceBoneName; // 0x94(0x08)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

