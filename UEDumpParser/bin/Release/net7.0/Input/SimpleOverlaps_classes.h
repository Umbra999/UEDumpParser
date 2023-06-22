// Class SimpleOverlaps.SimpleOverlapCollectionKey
// Size: 0x28 (Inherited: 0x28)
struct USimpleOverlapCollectionKey : UObject {
};

// Class SimpleOverlaps.SimpleOverlapComponent
// Size: 0xd0 (Inherited: 0xc8)
struct USimpleOverlapComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
};

// Class SimpleOverlaps.SimpleOverlapZone
// Size: 0x4a0 (Inherited: 0x3c8)
struct ASimpleOverlapZone : AActor {
	char UnknownData_3C8[0xa8]; // 0x3c8(0xa8)
	struct FMulticastDelegate Blueprint_OnStartOverlap; // 0x470(0x10)
	struct FMulticastDelegate Blueprint_OnStopOverlap; // 0x480(0x10)
	struct UBoxComponent* CollisionMesh; // 0x490(0x08)
	bool StartActive; // 0x498(0x01)
	char UnknownData_499[0x7]; // 0x499(0x07)
};

