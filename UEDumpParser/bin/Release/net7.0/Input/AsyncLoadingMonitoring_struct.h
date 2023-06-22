// ScriptStruct AsyncLoadingMonitoring.AsyncExcessiveLoadTelemetryEvent
// Size: 0x38 (Inherited: 0x00)
struct FAsyncExcessiveLoadTelemetryEvent {
	int32_t FrameCounter; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	double ExpectedAsyncLoadingTime; // 0x08(0x08)
	double ActualAsyncLoadingTime; // 0x10(0x08)
	struct TArray<struct FString> AssetRequestList; // 0x18(0x10)
	struct TArray<struct FString> LoadedAssetList; // 0x28(0x10)
};

