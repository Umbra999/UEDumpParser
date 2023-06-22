// ScriptStruct AthenaServerMigration.IncomingMigrationPreventionZone
// Size: 0x0c (Inherited: 0x00)
struct FIncomingMigrationPreventionZone {
	struct FVector2D Location; // 0x00(0x08)
	float Radius; // 0x08(0x04)
};

// ScriptStruct AthenaServerMigration.ServerMigrationSetupCompleteEvent
// Size: 0x01 (Inherited: 0x00)
struct FServerMigrationSetupCompleteEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaServerMigration.ServerMigrationSetupRequestEvent
// Size: 0x01 (Inherited: 0x00)
struct FServerMigrationSetupRequestEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaServerMigration.ServerMigrationReadyToTransferActors
// Size: 0x90 (Inherited: 0x00)
struct FServerMigrationReadyToTransferActors {
	char UnknownData_0[0x90]; // 0x00(0x90)
};

// ScriptStruct AthenaServerMigration.AddedPendingIncomingInvaderCrewEvent
// Size: 0x48 (Inherited: 0x00)
struct FAddedPendingIncomingInvaderCrewEvent {
	char UnknownData_0[0x48]; // 0x00(0x48)
};

// ScriptStruct AthenaServerMigration.ServerMigrationAboutToStartEvent
// Size: 0x20 (Inherited: 0x00)
struct FServerMigrationAboutToStartEvent {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct AthenaServerMigration.ServerMigrationAbortEvent
// Size: 0x10 (Inherited: 0x00)
struct FServerMigrationAbortEvent {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct AthenaServerMigration.ServerMigrationCompleteEvent
// Size: 0x01 (Inherited: 0x00)
struct FServerMigrationCompleteEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AthenaServerMigration.ServerMigrationRefusedEvent
// Size: 0x20 (Inherited: 0x00)
struct FServerMigrationRefusedEvent {
	struct FGuid MigrationId; // 0x00(0x10)
	struct TArray<struct FGuid> CrewIds; // 0x10(0x10)
};

// ScriptStruct AthenaServerMigration.OutgoingServerMigrationAbortedEvent
// Size: 0x20 (Inherited: 0x20)
struct FOutgoingServerMigrationAbortedEvent : FServerMigrationInstanceEventBase {
};

// ScriptStruct AthenaServerMigration.ServerMigrationInstanceEventBase
// Size: 0x20 (Inherited: 0x00)
struct FServerMigrationInstanceEventBase {
	struct FGuid ServerId; // 0x00(0x10)
	struct FGuid MigrationId; // 0x10(0x10)
};

// ScriptStruct AthenaServerMigration.OutgoingServerMigrationCompletedEvent
// Size: 0x20 (Inherited: 0x20)
struct FOutgoingServerMigrationCompletedEvent : FServerMigrationInstanceEventBase {
};

// ScriptStruct AthenaServerMigration.OutgoingServerMigrationStartedEvent
// Size: 0x20 (Inherited: 0x20)
struct FOutgoingServerMigrationStartedEvent : FServerMigrationInstanceEventBase {
};

// ScriptStruct AthenaServerMigration.ServerMigrationRequestEvent
// Size: 0x50 (Inherited: 0x00)
struct FServerMigrationRequestEvent {
	struct FGuid MigrationId; // 0x00(0x10)
	struct FString DestinationAddress; // 0x10(0x10)
	struct TArray<struct FGuid> CrewIds; // 0x20(0x10)
	struct FString SubMode; // 0x30(0x10)
	struct TArray<char> MatchmakingReasons; // 0x40(0x10)
};

// ScriptStruct AthenaServerMigration.ServerMigrationRequestBroadcastEvent
// Size: 0x20 (Inherited: 0x00)
struct FServerMigrationRequestBroadcastEvent {
	struct FString DestinationAddress; // 0x00(0x10)
	struct FGuid CrewId; // 0x10(0x10)
};

// ScriptStruct AthenaServerMigration.PrepareForWorldSwitchRpc
// Size: 0x10 (Inherited: 0x10)
struct FPrepareForWorldSwitchRpc : FBoxedRpc {
};

// ScriptStruct AthenaServerMigration.AthenaServerMigrationClientContext
// Size: 0x10 (Inherited: 0x00)
struct FAthenaServerMigrationClientContext {
	struct FString StampId; // 0x00(0x10)
};

