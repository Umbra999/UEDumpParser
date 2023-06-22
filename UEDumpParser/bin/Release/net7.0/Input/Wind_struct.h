// ScriptStruct Wind.ExtraWind
// Size: 0x38 (Inherited: 0x00)
struct FExtraWind {
	struct UObject* Source; // 0x00(0x08)
	struct AActor* Basis; // 0x08(0x08)
	char UnknownData_10[0x28]; // 0x10(0x28)
};

// ScriptStruct Wind.WindServiceParams
// Size: 0x24 (Inherited: 0x00)
struct FWindServiceParams {
	float MinAngleChange; // 0x00(0x04)
	float MaxAngleChange; // 0x04(0x04)
	float MinTimeChange; // 0x08(0x04)
	float MaxTimeChange; // 0x0c(0x04)
	float MinWindMagnitude; // 0x10(0x04)
	float MaxWindMagnitude; // 0x14(0x04)
	float AbsoluteMaxWindMagnitude; // 0x18(0x04)
	float MinBlendTimeBetweenChanges; // 0x1c(0x04)
	float MaxBlendTimeBetweenChanges; // 0x20(0x04)
};

// ScriptStruct Wind.WindZoneTurbulence
// Size: 0x08 (Inherited: 0x00)
struct FWindZoneTurbulence {
	float Base; // 0x00(0x04)
	float Current; // 0x04(0x04)
};

// ScriptStruct Wind.WindZoneParams
// Size: 0x10 (Inherited: 0x00)
struct FWindZoneParams {
	float OuterRadius; // 0x00(0x04)
	float InnerRadius; // 0x04(0x04)
	float TurbulenceScalar; // 0x08(0x04)
	bool WindOnlyAffectsTrees; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Wind.WindTurbulenceParameters
// Size: 0x70 (Inherited: 0x00)
struct FWindTurbulenceParameters {
	struct FFloatRange GustPower; // 0x00(0x10)
	struct FWeightedProbabilityRangeOfRanges GustTime; // 0x10(0x30)
	struct FWeightedProbabilityRangeOfRanges CalmTime; // 0x40(0x30)
};

// ScriptStruct Wind.WindMagnitudeChanged
// Size: 0x01 (Inherited: 0x00)
struct FWindMagnitudeChanged {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Wind.WindDirectionChanged
// Size: 0x01 (Inherited: 0x00)
struct FWindDirectionChanged {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

