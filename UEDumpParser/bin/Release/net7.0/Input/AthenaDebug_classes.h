// Class AthenaDebug.DrawDebugServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UDrawDebugServiceInterface : UInterface {
};

// Class AthenaDebug.DrawDebugService
// Size: 0x4c0 (Inherited: 0x3c8)
struct ADrawDebugService : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct TArray<struct FDrawDebugItemMessage> MessagesReplicated; // 0x3d0(0x10)
	struct TArray<struct FDrawDebugItemSphere> SpheresReplicated; // 0x3e0(0x10)
	struct TArray<struct FDrawDebugItemBox> BoxesReplicated; // 0x3f0(0x10)
	struct TArray<struct FDrawDebugItemCapsule> CapsulesReplicated; // 0x400(0x10)
	struct TArray<struct FDrawDebugItemLine> LinesReplicated; // 0x410(0x10)
	struct TArray<struct FDrawDebugItemSector> SectorsReplicated; // 0x420(0x10)
	struct TArray<struct FDrawDebugItemString> StringsReplicated; // 0x430(0x10)
	bool IsDrawDebugActive; // 0x440(0x01)
	char UnknownData_441[0x7f]; // 0x441(0x7f)

	void OnRep_PersistentShapeChanged(); // Function AthenaDebug.DrawDebugService.OnRep_PersistentShapeChanged // Final|Native|Private // @ game+0x3737550
	void OnRep_IsDrawDebugActiveChanged(); // Function AthenaDebug.DrawDebugService.OnRep_IsDrawDebugActiveChanged // Final|Native|Private // @ game+0x3737530
	void Multicast_ClearGroup(struct FName GroupName); // Function AthenaDebug.DrawDebugService.Multicast_ClearGroup // Final|Net|NetReliableNative|Event|NetMulticast|Private // @ game+0x37374b0
	void Multicast_AddStrings(struct TArray<struct FDrawDebugItemString> Strings); // Function AthenaDebug.DrawDebugService.Multicast_AddStrings // Final|Net|NetReliableNative|Event|NetMulticast|Private // @ game+0x37373d0
	void Multicast_AddSpheres(struct TArray<struct FDrawDebugItemSphere> Spheres); // Function AthenaDebug.DrawDebugService.Multicast_AddSpheres // Final|Net|NetReliableNative|Event|NetMulticast|Private // @ game+0x3737330
	void Multicast_AddSectors(struct TArray<struct FDrawDebugItemSector> Sectors); // Function AthenaDebug.DrawDebugService.Multicast_AddSectors // Final|Net|NetReliableNative|Event|NetMulticast|Private // @ game+0x3737290
	void Multicast_AddLines(struct TArray<struct FDrawDebugItemLine> Lines); // Function AthenaDebug.DrawDebugService.Multicast_AddLines // Final|Net|NetReliableNative|Event|NetMulticast|Private // @ game+0x37371f0
	void Multicast_AddCapsules(struct TArray<struct FDrawDebugItemCapsule> Capsules); // Function AthenaDebug.DrawDebugService.Multicast_AddCapsules // Final|Net|NetReliableNative|Event|NetMulticast|Private // @ game+0x3737150
	void Multicast_AddBoxes(struct TArray<struct FDrawDebugItemBox> Boxes); // Function AthenaDebug.DrawDebugService.Multicast_AddBoxes // Final|Net|NetReliableNative|Event|NetMulticast|Private // @ game+0x37370b0
};

// Class AthenaDebug.ShippingDebugActorSphereCollection
// Size: 0x3d8 (Inherited: 0x3c8)
struct AShippingDebugActorSphereCollection : AActor {
	struct TArray<struct FSphereData> SphereList; // 0x3c8(0x10)
};

// Class AthenaDebug.TickableDebugDrawingServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UTickableDebugDrawingServiceInterface : UInterface {
};

// Class AthenaDebug.Videprinter
// Size: 0x3f0 (Inherited: 0x3c8)
struct AVideprinter : AActor {
	struct TArray<struct FString> OutputRingBuffer; // 0x3c8(0x10)
	int32_t AddAt; // 0x3d8(0x04)
	struct FName Id; // 0x3dc(0x08)
	char UnknownData_3E4[0xc]; // 0x3e4(0x0c)
};

// Class AthenaDebug.VideprinterServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UVideprinterServiceInterface : UInterface {
};

// Class AthenaDebug.VideprinterService
// Size: 0x40 (Inherited: 0x28)
struct UVideprinterService : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct TArray<struct AVideprinter*> Videprinters; // 0x30(0x10)
};

