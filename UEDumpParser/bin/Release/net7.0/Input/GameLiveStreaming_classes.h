// Class GameLiveStreaming.GameLiveStreamingFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGameLiveStreamingFunctionLibrary : UBlueprintFunctionLibrary {

	void StopBroadcastingGame(); // Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame // Final|Native|Static|Public|BlueprintCallable // @ game+0x24b9eb0
	void StartBroadcastingGame(int32_t FrameRate, float ScreenScaling, bool bEnableWebCam, int32_t DesiredWebCamWidth, int32_t DesiredWebCamHeight, bool bMirrorWebCamImage, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, bool bDrawSimpleWebCamVideo); // Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame // Final|Native|Static|Public|BlueprintCallable // @ game+0x24b9c20
	bool IsBroadcastingGame(); // Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x24b9b50
};

// Class GameLiveStreaming.QueryLiveStreamsCallbackProxy
// Size: 0x48 (Inherited: 0x28)
struct UQueryLiveStreamsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastDelegate OnQueriedLiveStreams; // 0x28(0x10)
	char UnknownData_38[0x10]; // 0x38(0x10)

	struct UQueryLiveStreamsCallbackProxy* QueryLiveStreams(struct FString GameName); // Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams // Final|Native|Static|Public|BlueprintCallable // @ game+0x24b9b80
};

