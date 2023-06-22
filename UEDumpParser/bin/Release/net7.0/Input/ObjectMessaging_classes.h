// Class ObjectMessaging.ObjectMessagingDispatcherInterface
// Size: 0x28 (Inherited: 0x28)
struct UObjectMessagingDispatcherInterface : UInterface {
};

// Class ObjectMessaging.ObjectMessagingDispatcherComponent
// Size: 0x170 (Inherited: 0xc8)
struct UObjectMessagingDispatcherComponent : UActorComponent {
	char UnknownData_C8[0xa8]; // 0xc8(0xa8)
};

// Class ObjectMessaging.ObjectMessagingInterface
// Size: 0x28 (Inherited: 0x28)
struct UObjectMessagingInterface : UInterface {
};

// Class ObjectMessaging.ObjectMessagingFunctions
// Size: 0x28 (Inherited: 0x28)
struct UObjectMessagingFunctions : UBlueprintFunctionLibrary {

	void UnregisterEventsForObject(struct FObjectMessagingObjectScoper ObjectScoper, struct UObject* EventSource); // Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventsForObject // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32157c0
	void UnregisterEvents(struct FObjectMessagingObjectScoper ObjectScoper); // Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvents // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32156d0
	void UnregisterEventFromHandle(struct FObjectMessagingDispatcherHandle Dispatcher, struct FObjectMessagingHandle Handle); // Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32155c0
	void UnregisterEvent(struct FObjectMessagingDispatcher Dispatcher, struct FObjectMessagingHandle Handle); // Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32154d0
	void RegisterEventWithObjectScoper(struct UObject* EventSource, struct FObjectMessagingObjectScoper ObjectScoper, struct UObject* FunctionOwner, struct FString FunctionName, struct UStruct* EventType); // Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventWithObjectScoper // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32152c0
	void RegisterEventFromHandle(struct FObjectMessagingDispatcherHandle MessageDispatcher, struct FObjectMessagingHandle Handle, struct UObject* FunctionOwner, struct FString FunctionName, struct UStruct* EventType); // Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32150d0
	void RegisterEvent(struct FObjectMessagingDispatcher MessageDispatcher, struct FObjectMessagingHandle Handle, struct UObject* FunctionOwner, struct FString FunctionName, struct UStruct* EventType); // Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3214f00
	bool IsObjectMessagingDispatcherValid(struct FObjectMessagingDispatcherHandle Handle); // Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3214e70
	bool IsHandleRegistered(struct FObjectMessagingHandle Handle); // Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3214dc0
	struct FObjectMessagingDispatcherHandle GetObjectMessagingDispatcherFromActor(struct UObject* Object); // Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x3214d30
	struct FObjectMessagingDispatcherHandle GetObjectMessagingDispatcher(TScriptInterface<struct UObjectMessagingDispatcherInterface> ObjectMessagingDispatcher); // Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher // Final|Native|Static|Public|BlueprintCallable // @ game+0x3214c90
	void FireEventWithDataFromHandle(struct FObjectMessagingDispatcherHandle MessageDispatcher, struct UStruct* EventDataStruct, struct FString Scope, struct FString ScopeId, struct FGenericStruct Value); // Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3214ac0
	void FireEventWithData(struct FObjectMessagingDispatcher MessageDispatcher, struct UStruct* EventDataStruct, struct FString Scope, struct FString ScopeId, struct FGenericStruct Value); // Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3214910
};

