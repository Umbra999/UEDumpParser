// Class BumperZone.ShipBumperZone
// Size: 0x420 (Inherited: 0x3c8)
struct AShipBumperZone : AActor {
	bool UseInverseRightVector; // 0x3c8(0x01)
	char UnknownData_3C9[0x2f]; // 0x3c9(0x2f)
	struct UBoxComponent* BumperZoneComponent; // 0x3f8(0x08)
	struct USphereComponent* DistanceRadiusComponent; // 0x400(0x08)
	bool ApplyAngularImpulse; // 0x408(0x01)
	char UnknownData_409[0x3]; // 0x409(0x03)
	float AngularImpulse; // 0x40c(0x04)
	bool OverrideWheelControl; // 0x410(0x01)
	bool ApplyWheelTurbulence; // 0x411(0x01)
	char UnknownData_412[0x2]; // 0x412(0x02)
	float MinWheelTurbulence; // 0x414(0x04)
	float MaxWheelTurbulence; // 0x418(0x04)
	char UnknownData_41C[0x4]; // 0x41c(0x04)
};

