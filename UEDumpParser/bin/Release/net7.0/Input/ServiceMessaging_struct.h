// ScriptStruct ServiceMessaging.ServiceMessagingTestMessage
// Size: 0x04 (Inherited: 0x00)
struct FServiceMessagingTestMessage {
	int32_t Data; // 0x00(0x04)
};

// ScriptStruct ServiceMessaging.ServiceMessagingUnsubscribedEvent
// Size: 0x10 (Inherited: 0x00)
struct FServiceMessagingUnsubscribedEvent {
	struct FString RoutingKey; // 0x00(0x10)
};

// ScriptStruct ServiceMessaging.ServiceMessagingSubscribedEvent
// Size: 0x10 (Inherited: 0x00)
struct FServiceMessagingSubscribedEvent {
	struct FString RoutingKey; // 0x00(0x10)
};

// ScriptStruct ServiceMessaging.TestStructWithNetId
// Size: 0x18 (Inherited: 0x00)
struct FTestStructWithNetId {
	struct FUniqueNetIdRepl NetId; // 0x00(0x18)
};

