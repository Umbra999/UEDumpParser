// Class ServiceMessaging.ServiceMessagingDispatcherInterface
// Size: 0x28 (Inherited: 0x28)
struct UServiceMessagingDispatcherInterface : UInterface {
};

// Class ServiceMessaging.ServiceMessagingFunctions
// Size: 0x28 (Inherited: 0x28)
struct UServiceMessagingFunctions : UBlueprintFunctionLibrary {

	struct FObjectMessagingDispatcherHandle GetServiceMessagingDispatcherFromActor(struct UObject* Object); // Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x32b02b0
	struct FObjectMessagingDispatcherHandle GetServiceMessagingDispatcher(TScriptInterface<struct UServiceMessagingDispatcherInterface> ServiceMessagingDispatcher); // Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32b0210
};

// Class ServiceMessaging.ServiceMessagingListenerTestObject
// Size: 0x38 (Inherited: 0x28)
struct UServiceMessagingListenerTestObject : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)

	void TestFunctionWithMessage(struct FServiceMessagingTestMessage InMessage); // Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage // Final|Native|Public|HasOutParms // @ game+0x32b0340
};

