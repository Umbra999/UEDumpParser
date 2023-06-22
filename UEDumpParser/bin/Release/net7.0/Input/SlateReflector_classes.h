// Class SlateReflector.WidgetReflectorNodeBase
// Size: 0x80 (Inherited: 0x28)
struct UWidgetReflectorNodeBase : UObject {
	struct FGeometry Geometry; // 0x28(0x34)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct UWidgetReflectorNodeBase*> ChildNodes; // 0x60(0x10)
	struct FLinearColor Tint; // 0x70(0x10)
};

// Class SlateReflector.LiveWidgetReflectorNode
// Size: 0x98 (Inherited: 0x80)
struct ULiveWidgetReflectorNode : UWidgetReflectorNodeBase {
	char UnknownData_80[0x18]; // 0x80(0x18)
};

// Class SlateReflector.SnapshotWidgetReflectorNode
// Size: 0x198 (Inherited: 0x80)
struct USnapshotWidgetReflectorNode : UWidgetReflectorNodeBase {
	struct FText CachedWidgetType; // 0x80(0x38)
	struct FText CachedWidgetVisibilityText; // 0xb8(0x38)
	struct FText CachedWidgetReadableLocation; // 0xf0(0x38)
	struct FString CachedWidgetFile; // 0x128(0x10)
	int32_t CachedWidgetLineNumber; // 0x138(0x04)
	struct FName CachedWidgetAssetName; // 0x13c(0x08)
	struct FVector2D CachedWidgetDesiredSize; // 0x144(0x08)
	char UnknownData_14C[0x4]; // 0x14c(0x04)
	struct FSlateColor CachedWidgetForegroundColor; // 0x150(0x30)
	struct FString CachedWidgetAddress; // 0x180(0x10)
	bool CachedWidgetEnabled; // 0x190(0x01)
	char UnknownData_191[0x7]; // 0x191(0x07)
};

