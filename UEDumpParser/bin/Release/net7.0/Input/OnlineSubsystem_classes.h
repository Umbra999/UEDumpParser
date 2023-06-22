// Class OnlineSubsystem.DefaultOnlineEnvironmentSettings
// Size: 0x60 (Inherited: 0x28)
struct UDefaultOnlineEnvironmentSettings : UObject {
	struct FString EnvironmentId; // 0x28(0x10)
	uint32_t TitleId; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FString ServiceConfigId; // 0x40(0x10)
	struct FString ClientCertificateThumbprint; // 0x50(0x10)
};

// Class OnlineSubsystem.NamedInterfaces
// Size: 0x60 (Inherited: 0x28)
struct UNamedInterfaces : UObject {
	struct TArray<struct FNamedInterface> NamedInterfaces; // 0x28(0x10)
	struct TArray<struct FNamedInterfaceDef> NamedInterfaceDefs; // 0x38(0x10)
	char UnknownData_48[0x18]; // 0x48(0x18)
};

// Class OnlineSubsystem.TurnBasedMatchInterface
// Size: 0x28 (Inherited: 0x28)
struct UTurnBasedMatchInterface : UInterface {

	void OnMatchReceivedTurn(struct FString Match, bool bDidBecomeActive); // Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn // Event|Public|BlueprintEvent // @ game+0x1848130
	void OnMatchEnded(struct FString Match); // Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded // Event|Public|BlueprintEvent // @ game+0x1848130
};

