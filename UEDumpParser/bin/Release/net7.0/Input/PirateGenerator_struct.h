// Enum PirateGenerator.EIPGEthnicity
enum class EIPGEthnicity : uint8_t {
	UNSPECIFIED,
	ASIAN,
	BLACK,
	WHITE,
	EIPGEthnicity_MAX,
};

// Enum PirateGenerator.EIPGGender
enum class EIPGGender : uint8_t {
	UNSPECIFIED,
	MALE,
	FEMALE,
	EIPGGender_MAX,
};

// Enum PirateGenerator.EIPGPirateType
enum class EIPGPirateType : uint8_t {
	PLAYER,
	NPC,
	BONES,
	GHOST,
	EIPGPirateType_MAX,
};

// Enum PirateGenerator.EIPGTestEnum
enum class EIPGTestEnum : uint8_t {
	RANDOM,
	RANDOM_OR_NONE,
	EIPGTestEnum_MAX,
};

// Enum PirateGenerator.EIPGPartType
enum class EIPGPartType : uint8_t {
	DEFAULT,
	INVERSE,
	EIPGPartType_MAX,
};

// Enum PirateGenerator.EIPGSlotType
enum class EIPGSlotType : uint8_t {
	DEFAULT,
	DYNAMIC,
	EIPGSlotType_MAX,
};

// Enum PirateGenerator.EIPGSetMode
enum class EIPGSetMode : uint8_t {
	RANDOM,
	RANDOM_OR_NONE,
	BLEND2_FIRST_ORDER,
	BLEND2_RANDOM,
	NONE,
	BLEND2_LAST_UNDERSCORE,
	EIPGSetMode_MAX,
};

// Enum PirateGenerator.EIPGBlendType
enum class EIPGBlendType : uint8_t {
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
enum class EPirateBakeFlags : uint8_t {
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
enum class EFileAccessAsyncResult : uint8_t {
	Succeeded,
	Failed,
	EFileAccessAsyncResult_MAX,
};

// ScriptStruct PirateGenerator.IPGBlendShape
// Size: 0x14 (Inherited: 0x00)
struct FIPGBlendShape {
	struct FName Name; // 0x00(0x08)
	struct FName NodeName; // 0x08(0x08)
	float Value; // 0x10(0x04)
};

// ScriptStruct PirateGenerator.PirateGeneratorAdditionalBakeInfo
// Size: 0x20 (Inherited: 0x00)
struct FPirateGeneratorAdditionalBakeInfo {
	struct TArray<struct UParticleSystem*> VFXParticles; // 0x00(0x10)
	struct TArray<struct FName> VFXSockets; // 0x10(0x10)
};

// ScriptStruct PirateGenerator.PirateDescription
// Size: 0x80 (Inherited: 0x00)
struct FPirateDescription {
	char Type; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t Version; // 0x04(0x04)
	char Gender; // 0x08(0x01)
	char Ethnicity; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	struct FRadialCoordinate BodyShapeCoordinate; // 0x0c(0x08)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct FIPGBlendShape> BlendShapes; // 0x18(0x10)
	struct TArray<struct FIPGDynamicSlider> DynamicSliders; // 0x28(0x10)
	int32_t Seed; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FName> Items; // 0x40(0x10)
	struct TArray<struct FName> TextureReferences; // 0x50(0x10)
	struct TArray<struct FName> MaterialReferences; // 0x60(0x10)
	struct TArray<struct FIPGScalarParameter> ScalarParameters; // 0x70(0x10)
};

// ScriptStruct PirateGenerator.IPGScalarParameter
// Size: 0x0c (Inherited: 0x00)
struct FIPGScalarParameter {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct PirateGenerator.IPGDynamicSlider
// Size: 0x08 (Inherited: 0x00)
struct FIPGDynamicSlider {
	int32_t AffectedPriority; // 0x00(0x04)
	float Value; // 0x04(0x04)
};

// ScriptStruct PirateGenerator.RadialCoordinate
// Size: 0x08 (Inherited: 0x00)
struct FRadialCoordinate {
	float NormalizedAngle; // 0x00(0x04)
	float RadialDistance; // 0x04(0x04)
};

// ScriptStruct PirateGenerator.WardrobeOutfitCategoryBias
// Size: 0x0c (Inherited: 0x00)
struct FWardrobeOutfitCategoryBias {
	struct FName CategoryName; // 0x00(0x08)
	float EmptyProbability; // 0x08(0x04)
};

// ScriptStruct PirateGenerator.WardrobeOutfitResult
// Size: 0x50 (Inherited: 0x00)
struct FWardrobeOutfitResult {
	struct TArray<struct USkeletalMesh*> Meshes; // 0x00(0x10)
	struct TArray<struct FIPGScalarParameter> ScalarParameters; // 0x10(0x10)
	struct TArray<struct FName> MaterialReferences; // 0x20(0x10)
	struct TArray<struct UParticleSystem*> VFXParticles; // 0x30(0x10)
	struct TArray<struct FName> VFXSockets; // 0x40(0x10)
};

// ScriptStruct PirateGenerator.ClothingCreatorSlotItemConfig
// Size: 0x10 (Inherited: 0x00)
struct FClothingCreatorSlotItemConfig {
	struct TArray<struct FClothingCreatorSlotItem> Items; // 0x00(0x10)
};

// ScriptStruct PirateGenerator.ClothingCreatorSlotItem
// Size: 0x50 (Inherited: 0x00)
struct FClothingCreatorSlotItem {
	struct FString Name; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	struct FString Category; // 0x30(0x10)
	struct TArray<struct FString> Slots; // 0x40(0x10)
};

// ScriptStruct PirateGenerator.IPGTestClass
// Size: 0x60 (Inherited: 0x00)
struct FIPGTestClass {
	struct FName StringTest; // 0x00(0x08)
	float FloatTest; // 0x08(0x04)
	int32_t IntTest; // 0x0c(0x04)
	char EnumTest; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	struct FIPGTestSimpleType ObjectTest; // 0x14(0x0c)
	struct FIPGTestSimpleType ObjectNoneTest; // 0x20(0x0c)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FIPGTestSimpleType> VectorTest; // 0x30(0x10)
	struct TArray<struct FName> StrVectorTest; // 0x40(0x10)
	struct TArray<char> EnumVectorTest; // 0x50(0x10)
};

// ScriptStruct PirateGenerator.IPGTestSimpleType
// Size: 0x0c (Inherited: 0x00)
struct FIPGTestSimpleType {
	struct FName StringTest; // 0x00(0x08)
	int32_t IntTest; // 0x08(0x04)
};

// ScriptStruct PirateGenerator.Config
// Size: 0x78 (Inherited: 0x00)
struct FConfig {
	struct FIPGData IPG; // 0x00(0x48)
	struct FName MaleBaseShape; // 0x48(0x08)
	struct FName FemaleBaseShape; // 0x50(0x08)
	struct FIPGBodyShapes BodyShapes; // 0x58(0x20)
};

// ScriptStruct PirateGenerator.IPGBodyShapes
// Size: 0x20 (Inherited: 0x00)
struct FIPGBodyShapes {
	struct TArray<struct FIPGBodyShape> Male; // 0x00(0x10)
	struct TArray<struct FIPGBodyShape> Female; // 0x10(0x10)
};

// ScriptStruct PirateGenerator.IPGBodyShape
// Size: 0x0c (Inherited: 0x00)
struct FIPGBodyShape {
	struct FName Name; // 0x00(0x08)
	float NormalizedWheelAngle; // 0x08(0x04)
};

// ScriptStruct PirateGenerator.IPGData
// Size: 0x48 (Inherited: 0x00)
struct FIPGData {
	struct TArray<struct FIPGDynamicSliderName> DynamicSliderNames; // 0x00(0x10)
	struct TArray<struct FIPGBlendingMethod> BlendingMethods; // 0x10(0x10)
	struct TArray<struct FIPGSetGroup> Groups; // 0x20(0x10)
	int32_t CurrentVersion; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TArray<struct FIPGSetsData> Versions; // 0x38(0x10)
};

// ScriptStruct PirateGenerator.IPGSetsData
// Size: 0x18 (Inherited: 0x00)
struct FIPGSetsData {
	int32_t Version; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FIPGSetData> Sets; // 0x08(0x10)
};

// ScriptStruct PirateGenerator.IPGSetData
// Size: 0x20 (Inherited: 0x00)
struct FIPGSetData {
	struct FName Name; // 0x00(0x08)
	char Gender; // 0x08(0x01)
	char Ethnicity; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	int32_t Priority; // 0x0c(0x04)
	struct TArray<struct FIPGBlendNode> Nodes; // 0x10(0x10)
};

// ScriptStruct PirateGenerator.IPGBlendNode
// Size: 0x18 (Inherited: 0x00)
struct FIPGBlendNode {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FIPGBlendRange> Ranges; // 0x08(0x10)
};

// ScriptStruct PirateGenerator.IPGBlendRange
// Size: 0x28 (Inherited: 0x00)
struct FIPGBlendRange {
	struct FName Name; // 0x00(0x08)
	float Min; // 0x08(0x04)
	float Max; // 0x0c(0x04)
	float Env; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct FIPGCompatibleSet> Compatibility; // 0x18(0x10)
};

// ScriptStruct PirateGenerator.IPGCompatibleSet
// Size: 0x08 (Inherited: 0x00)
struct FIPGCompatibleSet {
	struct FName SetName; // 0x00(0x08)
};

// ScriptStruct PirateGenerator.IPGSetGroup
// Size: 0x08 (Inherited: 0x00)
struct FIPGSetGroup {
	int32_t Priority; // 0x00(0x04)
	char Mode; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct PirateGenerator.IPGBlendingMethod
// Size: 0x10 (Inherited: 0x00)
struct FIPGBlendingMethod {
	struct FName Name; // 0x00(0x08)
	float Probability; // 0x08(0x04)
	char BlendType; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct PirateGenerator.IPGDynamicSliderName
// Size: 0x0c (Inherited: 0x00)
struct FIPGDynamicSliderName {
	int32_t AffectedPriority; // 0x00(0x04)
	struct FName Name; // 0x04(0x08)
};

// ScriptStruct PirateGenerator.WardrobeConfig
// Size: 0x20 (Inherited: 0x00)
struct FWardrobeConfig {
	struct TArray<struct FClothingSlot> Slots; // 0x00(0x10)
	struct TArray<struct FName> Priority; // 0x10(0x10)
};

// ScriptStruct PirateGenerator.ClothingSlot
// Size: 0x20 (Inherited: 0x00)
struct FClothingSlot {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FName> Tags; // 0x08(0x10)
	char Type; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct PirateGenerator.Outfit
// Size: 0x50 (Inherited: 0x00)
struct FOutfit {
	struct TArray<struct FName> PartNames; // 0x00(0x10)
	struct TArray<struct FName> FreeSlots; // 0x10(0x10)
	struct TArray<struct FIPGScalarParameter> ScalarParameters; // 0x20(0x10)
	struct TArray<struct FName> MaterialReferences; // 0x30(0x10)
	struct TArray<struct FClothingVFX> VFXs; // 0x40(0x10)
};

// ScriptStruct PirateGenerator.ClothingVFX
// Size: 0x28 (Inherited: 0x00)
struct FClothingVFX {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FName> Sockets; // 0x08(0x10)
	struct TArray<struct FName> Slots; // 0x18(0x10)
};

// ScriptStruct PirateGenerator.ClothingItem
// Size: 0x88 (Inherited: 0x00)
struct FClothingItem {
	struct FName Type; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	struct TArray<char> CompatiblePirateTypes; // 0x10(0x10)
	struct TArray<struct FName> Variants; // 0x20(0x10)
	struct TArray<struct FName> NewSlots; // 0x30(0x10)
	struct FName Parent; // 0x40(0x08)
	struct TArray<struct FClothingPart> Parts; // 0x48(0x10)
	struct TArray<struct FClothingVFX> VFXs; // 0x58(0x10)
	struct TArray<struct FIPGScalarParameter> ScalarParameters; // 0x68(0x10)
	struct TArray<struct FName> MaterialReferences; // 0x78(0x10)
};

// ScriptStruct PirateGenerator.ClothingPart
// Size: 0x20 (Inherited: 0x00)
struct FClothingPart {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FName> Slots; // 0x08(0x10)
	char Gender; // 0x18(0x01)
	char PartType; // 0x19(0x01)
	char UnknownData_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct PirateGenerator.AnimationSwitchEntry
// Size: 0x10 (Inherited: 0x00)
struct FAnimationSwitchEntry {
	struct FName BodyShape; // 0x00(0x08)
	struct UClass* AnimSetDataId; // 0x08(0x08)
};

// ScriptStruct PirateGenerator.BlendedSubMeshSpecification
// Size: 0x30 (Inherited: 0x00)
struct FBlendedSubMeshSpecification {
	struct USkeletalMesh* Mesh; // 0x00(0x08)
	float BaseMeshWeight; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UMeshPatchAsset*> MeshPatchAssets; // 0x10(0x10)
	struct TArray<float> MeshPatchAssetWeights; // 0x20(0x10)
};

// ScriptStruct PirateGenerator.MaterialReferencesEntry
// Size: 0x18 (Inherited: 0x00)
struct FMaterialReferencesEntry {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FMaterialReferenceEntry> References; // 0x08(0x10)
};

// ScriptStruct PirateGenerator.MaterialReferenceEntry
// Size: 0x18 (Inherited: 0x00)
struct FMaterialReferenceEntry {
	bool bCopyParametersAcross; // 0x00(0x01)
	bool bReplaceAll; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct UMaterialInterface* FromMaterial; // 0x08(0x08)
	struct UMaterialInstanceConstant* ToMaterial; // 0x10(0x08)
};

// ScriptStruct PirateGenerator.PirateGeneratorTextureReference
// Size: 0x18 (Inherited: 0x00)
struct FPirateGeneratorTextureReference {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FName> References; // 0x08(0x10)
};

// ScriptStruct PirateGenerator.MeshPatchEntry
// Size: 0x18 (Inherited: 0x00)
struct FMeshPatchEntry {
	struct FName Name; // 0x00(0x08)
	struct FStringAssetReference Reference; // 0x08(0x10)
};

// ScriptStruct PirateGenerator.ColorTextureSwitchSeedEntry
// Size: 0x18 (Inherited: 0x00)
struct FColorTextureSwitchSeedEntry {
	struct FName ReferenceName; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct PirateGenerator.TextureSwitchItemEntry
// Size: 0x18 (Inherited: 0x00)
struct FTextureSwitchItemEntry {
	struct FName ItemName; // 0x00(0x08)
	struct FStringAssetReference Texture; // 0x08(0x10)
};

// ScriptStruct PirateGenerator.TextureSwitchBodyShapeEntry
// Size: 0x18 (Inherited: 0x00)
struct FTextureSwitchBodyShapeEntry {
	struct FName BodyShape; // 0x00(0x08)
	struct FStringAssetReference Texture; // 0x08(0x10)
};

// ScriptStruct PirateGenerator.TextureSwitchEthnicityEntry
// Size: 0x18 (Inherited: 0x00)
struct FTextureSwitchEthnicityEntry {
	char Ethnicity; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FStringAssetReference Texture; // 0x08(0x10)
};

// ScriptStruct PirateGenerator.TextureSwitchGenderEntry
// Size: 0x18 (Inherited: 0x00)
struct FTextureSwitchGenderEntry {
	char Gender; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FStringAssetReference Texture; // 0x08(0x10)
};

// ScriptStruct PirateGenerator.TextureSwitchSeedEntry
// Size: 0x18 (Inherited: 0x00)
struct FTextureSwitchSeedEntry {
	struct FName ReferenceName; // 0x00(0x08)
	struct FStringAssetReference Texture; // 0x08(0x10)
};

// ScriptStruct PirateGenerator.TextureSwitchParameters
// Size: 0x58 (Inherited: 0x00)
struct FTextureSwitchParameters {
	char UnknownData_0[0x8]; // 0x00(0x08)
	bool bAsync; // 0x08(0x01)
	bool bHighPriority; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	int32_t Seed; // 0x0c(0x04)
	char SelectedGender; // 0x10(0x01)
	char SelectedEthnicity; // 0x11(0x01)
	char UnknownData_12[0x2]; // 0x12(0x02)
	struct FName SelectedBodyShape; // 0x14(0x08)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FName> SelectedItems; // 0x20(0x10)
	struct TArray<struct FName> SelectedReferences; // 0x30(0x10)
	char UnknownData_40[0x18]; // 0x40(0x18)
};

