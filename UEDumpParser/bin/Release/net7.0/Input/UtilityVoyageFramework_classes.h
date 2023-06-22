// Class UtilityVoyageFramework.UtilityVoyageServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UUtilityVoyageServiceInterface : UInterface {
};

// Class UtilityVoyageFramework.UtilityVoyageService
// Size: 0xc0 (Inherited: 0x28)
struct UUtilityVoyageService : UObject {
	char UnknownData_28[0x78]; // 0x28(0x78)
	struct TArray<struct UCrewVoyageParticipant*> Participants; // 0xa0(0x10)
	struct TArray<struct FUtilityVoyageData> Voyages; // 0xb0(0x10)
};

