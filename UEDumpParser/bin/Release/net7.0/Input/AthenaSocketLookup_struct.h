// ScriptStruct AthenaSocketLookup.SocketPathNode
// Size: 0x08 (Inherited: 0x00)
struct FSocketPathNode {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct AthenaSocketLookup.SocketPath
// Size: 0x18 (Inherited: 0x00)
struct FSocketPath {
	struct TArray<struct FSocketPathNode> Nodes; // 0x00(0x10)
	char UnknownData_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AthenaSocketLookup.SocketId
// Size: 0x20 (Inherited: 0x00)
struct FSocketId {
	struct FSocketPath path; // 0x00(0x18)
	struct FName Name; // 0x18(0x08)
};

// ScriptStruct AthenaSocketLookup.SocketLookupCache
// Size: 0x50 (Inherited: 0x00)
struct FSocketLookupCache {
	char UnknownData_0[0x50]; // 0x00(0x50)
};

