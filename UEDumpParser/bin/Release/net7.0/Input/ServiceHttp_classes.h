// Class ServiceHttp.ServiceHttpSettings
// Size: 0x70 (Inherited: 0x28)
struct UServiceHttpSettings : UObject {
	struct FString DiscoveryServiceUrl; // 0x28(0x10)
	char ServerMetricsLevel; // 0x38(0x01)
	char ClientMetricsLevel; // 0x39(0x01)
	char UnknownData_3A[0x6]; // 0x3a(0x06)
	struct FString SubStringToFindInUrlForXBLiveTokenRequest; // 0x40(0x10)
	struct FString UrlReplacementStringForXBLiveTokenRequest; // 0x50(0x10)
	struct FString CustomBuildVersionTag; // 0x60(0x10)
};

// Class ServiceHttp.DevelopmentAuthenticationSettings
// Size: 0x78 (Inherited: 0x28)
struct UDevelopmentAuthenticationSettings : UObject {
	struct FString SandboxId; // 0x28(0x10)
	struct FString TokenServiceUrl; // 0x38(0x10)
	struct FString ClientId; // 0x48(0x10)
	struct FString ClientSecret; // 0x58(0x10)
	struct FString LivePrivileges; // 0x68(0x10)
};

