// Class SplinePathing.SplinePathingActor
// Size: 0x4b0 (Inherited: 0x3c8)
struct ASplinePathingActor : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct FObjectMessagingDispatcher ObjectMessageDispatcher; // 0x3d0(0xa0)
	struct TArray<struct UPrimitiveComponent*> PrimitiveActors; // 0x470(0x10)
	struct USceneComponent* Root; // 0x480(0x08)
	struct USplineComponent* Spline; // 0x488(0x08)
	float Force; // 0x490(0x04)
	float MaxVelocity; // 0x494(0x04)
	float DistanceAlongSplineToTarget; // 0x498(0x04)
	int32_t DistanceFromDestination; // 0x49c(0x04)
	char UnknownData_4A0[0x10]; // 0x4a0(0x10)
};

