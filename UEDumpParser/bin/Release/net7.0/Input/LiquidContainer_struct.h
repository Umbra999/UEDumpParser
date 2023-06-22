// Enum LiquidContainer.ELiquidType
enum class ELiquidType : uint8_t {
	Water,
	Vomit,
	BoilingWater,
	Grog,
	GreenGrog,
	ELiquidType_MAX,
};

// ScriptStruct LiquidContainer.LiquidTypeParams
// Size: 0x54 (Inherited: 0x00)
struct FLiquidTypeParams {
	char LiquidType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FVector FogColour; // 0x04(0x0c)
	struct FVector LiquidColour; // 0x10(0x0c)
	struct FVector ScumColour; // 0x1c(0x0c)
	float EdgeScumStart; // 0x28(0x04)
	float EdgeScumEnd; // 0x2c(0x04)
	float FogFadeDistance; // 0x30(0x04)
	float RefractionScale; // 0x34(0x04)
	float RippleFrequency; // 0x38(0x04)
	float Slosh; // 0x3c(0x04)
	float SurfaceThickness; // 0x40(0x04)
	float Viscosity; // 0x44(0x04)
	float BubbleBrightness; // 0x48(0x04)
	float BillboardScale; // 0x4c(0x04)
	float EmissiveScale; // 0x50(0x04)
};

