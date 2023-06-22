// Class CustomMaps.CustomMapDisplayObjectBase
// Size: 0x38 (Inherited: 0x28)
struct UCustomMapDisplayObjectBase : UObject {
	struct FGuid Guid; // 0x28(0x10)
};

// Class CustomMaps.CustomMap
// Size: 0x8c0 (Inherited: 0x890)
struct ACustomMap : ARenderToTextureMapBase {
	char UnknownData_890[0x8]; // 0x890(0x08)
	struct UFont* Font; // 0x898(0x08)
	struct TArray<struct UCustomMapDisplayObjectBase*> DisplayItems; // 0x8a0(0x10)
	char UnknownData_8B0[0x10]; // 0x8b0(0x10)

	void OnRep_FontUpdated(); // Function CustomMaps.CustomMap.OnRep_FontUpdated // Final|Native|Private // @ game+0x46512f0
	void OnRep_DisplayItem(); // Function CustomMaps.CustomMap.OnRep_DisplayItem // Final|Native|Private // @ game+0x46512d0
	void OnMapItemsUpdate(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function CustomMaps.CustomMap.OnMapItemsUpdate // Final|Native|Private // @ game+0x46511d0
};

// Class CustomMaps.CustomMapCollectionInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomMapCollectionInterface : UInterface {
};

// Class CustomMaps.CustomMapDataTypeBase
// Size: 0x38 (Inherited: 0x28)
struct UCustomMapDataTypeBase : UObject {
	struct FGuid Guid; // 0x28(0x10)
};

// Class CustomMaps.CustomMapData
// Size: 0x48 (Inherited: 0x28)
struct UCustomMapData : UDataAsset {
	struct UClass* CustomMapItemDescClass; // 0x28(0x08)
	struct UFont* Font; // 0x30(0x08)
	struct TArray<struct UCustomMapDataTypeBase*> MapDisplayItemList; // 0x38(0x10)
};

// Class CustomMaps.CustomMapDataTypePositional
// Size: 0x48 (Inherited: 0x38)
struct UCustomMapDataTypePositional : UCustomMapDataTypeBase {
	struct FVector2D Position; // 0x38(0x08)
	float Orientation; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class CustomMaps.CustomMapDisplayObjectPositional
// Size: 0x48 (Inherited: 0x38)
struct UCustomMapDisplayObjectPositional : UCustomMapDisplayObjectBase {
	struct FVector2D Position; // 0x38(0x08)
	float Orientation; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class CustomMaps.CustomMapDisplayObjectText
// Size: 0xd8 (Inherited: 0x48)
struct UCustomMapDisplayObjectText : UCustomMapDisplayObjectPositional {
	struct FText Text; // 0x48(0x38)
	float FontScale; // 0x80(0x04)
	bool StrikeThrough; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
	float StrikethroughThickness; // 0x88(0x04)
	char UnknownData_8C[0x4c]; // 0x8c(0x4c)
};

// Class CustomMaps.CustomMapDataTypeText
// Size: 0x90 (Inherited: 0x48)
struct UCustomMapDataTypeText : UCustomMapDataTypePositional {
	struct FText Text; // 0x48(0x38)
	float FontScale; // 0x80(0x04)
	bool StrikeThrough; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
	float StrikethroughThickness; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class CustomMaps.CustomMapSettings
// Size: 0x40 (Inherited: 0x38)
struct UCustomMapSettings : UDeveloperSettings {
	struct UClass* CustomMapItemDescClass; // 0x38(0x08)
};

