// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t {
	InnerSequence,
	MasterSequence,
	External,
	ESpawnOwnership_MAX,
};

// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t {
	Auto,
	User,
	Break,
	Linear,
	Constant,
	EMovieSceneKeyInterpolation_MAX,
};

// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t {
	KeepState,
	RestoreState,
	EMovieSceneCompletionMode_MAX,
};

// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t {
	Static,
	Swept,
	EEvaluationMethod_MAX,
};

// ScriptStruct MovieScene.MovieSceneBinding
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneBinding {
	struct FGuid ObjectGuid; // 0x00(0x10)
	struct FString BindingName; // 0x10(0x10)
	struct TArray<struct UMovieSceneTrack*> Tracks; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieScenePossessable
// Size: 0x38 (Inherited: 0x00)
struct FMovieScenePossessable {
	struct FGuid Guid; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct UClass* PossessedObjectClass; // 0x20(0x08)
	struct FGuid ParentGuid; // 0x28(0x10)
};

// ScriptStruct MovieScene.MovieSceneSpawnable
// Size: 0x48 (Inherited: 0x00)
struct FMovieSceneSpawnable {
	bool IsCameraDockable; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FGuid Guid; // 0x04(0x10)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString Name; // 0x18(0x10)
	struct UObject* ObjectTemplate; // 0x28(0x08)
	struct TArray<struct FGuid> ChildPossessables; // 0x30(0x10)
	char Ownership; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneTrackLabels {
	struct TArray<struct FString> Strings; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// Size: 0x70 (Inherited: 0x00)
struct FMovieSceneEditorData {
	struct TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates; // 0x00(0x50)
	struct FFloatRange WorkingRange; // 0x50(0x10)
	struct FFloatRange ViewRange; // 0x60(0x10)
};

// ScriptStruct MovieScene.MovieSceneExpansionState
// Size: 0x01 (Inherited: 0x00)
struct FMovieSceneExpansionState {
	bool bExpanded; // 0x00(0x01)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingPtr
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneObjectBindingPtr {
	struct FGuid Guid; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size: 0x1c (Inherited: 0x00)
struct FMovieSceneBindingOverrideData {
	struct FMovieSceneObjectBindingPtr ObjectBindingId; // 0x00(0x10)
	struct UObject* Object; // 0x10(0x08)
	bool bOverridesDefault; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneSequencePlaybackSettings {
	int32_t LoopCount; // 0x00(0x04)
	float PlayRate; // 0x04(0x04)
	bool bRandomStartTime; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float StartTime; // 0x0c(0x04)
	bool bRestoreState; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	TScriptInterface<struct UMovieSceneBindingOverridesInterface> BindingOverrides; // 0x18(0x10)
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x02 (Inherited: 0x00)
struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x00(0x01)
	char CompletionMode; // 0x01(0x01)
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneSequenceID
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneSequenceID {
	uint32_t Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneEvaluationField {
	struct TArray<struct FFloatRange> Ranges; // 0x00(0x10)
	struct TArray<struct FMovieSceneEvaluationGroup> Groups; // 0x10(0x10)
	struct TArray<struct FMovieSceneEvaluationMetaData> MetaData; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneEvaluationMetaData {
	struct TArray<struct FMovieSceneSequenceID> ActiveSequences; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneEvaluationGroup {
	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x00(0x10)
	struct TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10(0x10)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// Size: 0x0c (Inherited: 0x08)
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	int32_t SegmentIndex; // 0x08(0x04)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneEvaluationFieldTrackPtr {
	struct FMovieSceneSequenceID SequenceID; // 0x00(0x04)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x04(0x04)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneEvaluationGroupLUTIndex {
	bool bRequiresImmediateFlush; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t LUTOffset; // 0x04(0x04)
	int32_t NumInitPtrs; // 0x08(0x04)
	int32_t NumEvalPtrs; // 0x0c(0x04)
};

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneEvalTemplateBase {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// Size: 0x01 (Inherited: 0x00)
struct FMovieSceneEmptyStruct {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// Size: 0x38 (Inherited: 0x00)
struct FMovieSceneEvalTemplatePtr {
	char UnknownData_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size: 0x18 (Inherited: 0x10)
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	char CompletionMode; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct MovieScene.MovieSceneSegment
// Size: 0x40 (Inherited: 0x00)
struct FMovieSceneSegment {
	char UnknownData_0[0x40]; // 0x00(0x40)
};

// ScriptStruct MovieScene.SectionEvaluationData
// Size: 0x08 (Inherited: 0x00)
struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x00(0x04)
	float ForcedTime; // 0x04(0x04)
};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// Size: 0x38 (Inherited: 0x00)
struct FMovieSceneTrackImplementationPtr {
	char UnknownData_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// Size: 0x10 (Inherited: 0x10)
struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase {
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// Size: 0x80 (Inherited: 0x00)
struct FMovieSceneEvaluationTrack {
	struct FGuid ObjectBindingId; // 0x00(0x10)
	uint16_t EvaluationPriority; // 0x10(0x02)
	char EvaluationMethod; // 0x12(0x01)
	char UnknownData_13[0x5]; // 0x13(0x05)
	struct TArray<struct FMovieSceneSegment> Segments; // 0x18(0x10)
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates; // 0x28(0x10)
	struct FMovieSceneTrackImplementationPtr TrackTemplate; // 0x38(0x38)
	struct FName EvaluationGroup; // 0x70(0x08)
	char bEvaluateInPreroll : 1; // 0x78(0x01)
	char bEvaluateInPostroll : 1; // 0x78(0x01)
	char UnknownData_78_2 : 6; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneSequenceTransform {
	float TimeScale; // 0x00(0x04)
	float Offset; // 0x04(0x04)
};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneSectionParameters {
	float StartOffset; // 0x00(0x04)
	float TimeScale; // 0x04(0x04)
	float PrerollTime; // 0x08(0x04)
	float PostrollTime; // 0x0c(0x04)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// Size: 0xa0 (Inherited: 0x00)
struct FMovieSceneSequenceHierarchy {
	struct TMap<uint32_t, struct FMovieSceneSubSequenceData> SubSequences; // 0x00(0x50)
	struct TMap<uint32_t, struct FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50(0x50)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneSequenceHierarchyNode {
	struct FMovieSceneSequenceID ParentID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FMovieSceneSequenceID> Children; // 0x08(0x10)
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneSubSequenceData {
	struct UMovieSceneSequence* Sequence; // 0x00(0x08)
	struct FMovieSceneSequenceTransform RootToSequenceTransform; // 0x08(0x08)
	struct FGuid SourceSequenceSignature; // 0x10(0x10)
	struct FMovieSceneSequenceID DeterministicSequenceID; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x00(0x01)
	char bEvaluateNearestSection : 1; // 0x00(0x01)
	char bEvaluateInPreroll : 1; // 0x00(0x01)
	char bEvaluateInPostroll : 1; // 0x00(0x01)
	char UnknownData_0_4 : 4; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
};

// ScriptStruct MovieScene.MovieSceneTrackCompilationParams
// Size: 0x01 (Inherited: 0x00)
struct FMovieSceneTrackCompilationParams {
	bool bForEditorPreview; // 0x00(0x01)
};

// ScriptStruct MovieScene.CachedMovieSceneEvaluationTemplate
// Size: 0x220 (Inherited: 0x220)
struct FCachedMovieSceneEvaluationTemplate : FMovieSceneEvaluationTemplate {
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// Size: 0x220 (Inherited: 0x00)
struct FMovieSceneEvaluationTemplate {
	struct TMap<uint32_t, struct FMovieSceneEvaluationTrack> Tracks; // 0x00(0x50)
	char UnknownData_50[0x50]; // 0x50(0x50)
	struct FMovieSceneEvaluationField EvaluationField; // 0xa0(0x30)
	struct FMovieSceneSequenceHierarchy Hierarchy; // 0xd0(0xa0)
	struct FMovieSceneGenerationLedger Ledger; // 0x170(0xa8)
	char bHasLegacyTrackInstances : 1; // 0x218(0x01)
	char bKeepStaleTracks : 1; // 0x218(0x01)
	char UnknownData_218_2 : 6; // 0x218(0x01)
	char UnknownData_219[0x7]; // 0x219(0x07)
};

// ScriptStruct MovieScene.MovieSceneGenerationLedger
// Size: 0xa8 (Inherited: 0x00)
struct FMovieSceneGenerationLedger {
	char UnknownData_0[0xa8]; // 0x00(0xa8)
};

// ScriptStruct MovieScene.MovieSceneSequenceCachedSignature
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneSequenceCachedSignature {
	struct UMovieSceneSequence* Sequence; // 0x00(0x08)
	struct FGuid CachedSignature; // 0x08(0x10)
};

// ScriptStruct MovieScene.MovieSceneLegacyTrackInstanceTemplate
// Size: 0x20 (Inherited: 0x18)
struct FMovieSceneLegacyTrackInstanceTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneTrack* Track; // 0x18(0x08)
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// Size: 0x20 (Inherited: 0x00)
struct FMovieScenePropertySectionData {
	struct FName PropertyName; // 0x00(0x08)
	struct FString PropertyPath; // 0x08(0x10)
	struct FName FunctionName; // 0x18(0x08)
};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneKeyStruct {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

