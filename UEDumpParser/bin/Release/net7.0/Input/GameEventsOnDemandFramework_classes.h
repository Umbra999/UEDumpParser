// Class GameEventsOnDemandFramework.GameEventAvailabilityParamsDataAsset
// Size: 0x88 (Inherited: 0x28)
struct UGameEventAvailabilityParamsDataAsset : UDataAsset {
	struct FWeightedProbabilityRangeOfRanges MatchmakingCooldownRanges; // 0x28(0x30)
	struct FWeightedProbabilityRange CrewsJoinedOnDemandLimitRange; // 0x58(0x20)
	float InitialCooldown; // 0x78(0x04)
	int32_t ProgressStateLimit; // 0x7c(0x04)
	bool ShouldApplyShipTypeLimit; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class GameEventsOnDemandFramework.GameEventOnDemandAvailabilityStateTracker
// Size: 0xd8 (Inherited: 0x28)
struct UGameEventOnDemandAvailabilityStateTracker : UObject {
	char UnknownData_28[0x78]; // 0x28(0x78)
	struct UClass* ShipTypeLimit; // 0xa0(0x08)
	char UnknownData_A8[0x30]; // 0xa8(0x30)
};

// Class GameEventsOnDemandFramework.GameEventOnDemandVoyageProposalDesc
// Size: 0x128 (Inherited: 0x128)
struct UGameEventOnDemandVoyageProposalDesc : UVoyageProposalDesc {
};

// Class GameEventsOnDemandFramework.GameEventsOnDemandAvailabilityServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameEventsOnDemandAvailabilityServiceInterface : UInterface {
};

// Class GameEventsOnDemandFramework.GameEventsOnDemandInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameEventsOnDemandInterface : UInterface {
};

