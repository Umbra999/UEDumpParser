// Enum AthenaObjectLinkage.EAddLinkResult
enum class EAddLinkResult : uint8_t {
	Success_Set,
	Success_Pending,
	Failed_SourceEndpointIdInvalid,
	Failed_TargetEndpointIdInvalid,
	Failed_CoincidentEndpointIds,
	Failed_Duplicate,
	EAddLinkResult_MAX,
};

// Enum AthenaObjectLinkage.EAddEndpointResult
enum class EAddEndpointResult : uint8_t {
	Success,
	Failed_InvalidInstance,
	Failed_InvalidId,
	Failed_DuplicateId,
	Failed_DoesntImplementEndpointInterface,
	EAddEndpointResult_MAX,
};

// ScriptStruct AthenaObjectLinkage.LinkEndpointId
// Size: 0x08 (Inherited: 0x00)
struct FLinkEndpointId {
	struct FName Raw; // 0x00(0x08)
};

