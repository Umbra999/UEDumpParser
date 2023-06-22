// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary {

	void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementId, bool bFoundID, float Progress); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x24aed20
	void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementId, bool bFoundID, struct FText Title, struct FText LockedDescription, struct FText UnlockedDescription, bool bHidden); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x24aea40
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Size: 0x88 (Inherited: 0x28)
struct UInAppPurchaseCallbackProxy : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x40]; // 0x48(0x40)

	struct UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x24ade30
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Size: 0x98 (Inherited: 0x28)
struct UInAppPurchaseQueryCallbackProxy : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x50]; // 0x48(0x50)

	struct UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString> ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x24adf20
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Size: 0x98 (Inherited: 0x28)
struct UInAppPurchaseRestoreCallbackProxy : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x50]; // 0x48(0x50)

	struct UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore // Final|Native|Static|Public|BlueprintCallable // @ game+0x24ae050
};

// Class OnlineSubsystemUtils.IpConnection
// Size: 0x345f0 (Inherited: 0x345a0)
struct UIpConnection : UNetConnection {
	char UnknownData_345A0[0x50]; // 0x345a0(0x50)
};

// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x4c8 (Inherited: 0x478)
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x478(0x01)
	char AllowPlayerPortUnreach : 1; // 0x478(0x01)
	char UnknownData_478_2 : 6; // 0x478(0x01)
	char UnknownData_479[0x3]; // 0x479(0x03)
	uint32_t MaxPortCountToTry; // 0x47c(0x04)
	char UnknownData_480[0x48]; // 0x480(0x48)
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary {

	bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue); // Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger // Final|Native|Static|Public|BlueprintCallable // @ game+0x24b01d0
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x60 (Inherited: 0x28)
struct ULeaderboardFlushCallbackProxy : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x18]; // 0x48(0x18)

	struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush // Final|Native|Static|Public|BlueprintCallable // @ game+0x24add70
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0x90 (Inherited: 0x28)
struct ULeaderboardQueryCallbackProxy : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x48]; // 0x48(0x48)

	struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery // Final|Native|Static|Public|BlueprintCallable // @ game+0x24ae0d0
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x60 (Inherited: 0x28)
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x18]; // 0x48(0x18)

	struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout // Final|Native|Static|Public|BlueprintCallable // @ game+0x24af8a0
};

// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x3f0 (Inherited: 0x3c8)
struct AOnlineBeacon : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	float BeaconConnectionInitialTimeout; // 0x3d0(0x04)
	float BeaconConnectionTimeout; // 0x3d4(0x04)
	struct UNetDriver* NetDriver; // 0x3d8(0x08)
	char UnknownData_3E0[0x10]; // 0x3e0(0x10)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x418 (Inherited: 0x3f0)
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* BeaconOwner; // 0x3f0(0x08)
	struct UNetConnection* BeaconConnection; // 0x3f8(0x08)
	char ConnectionState; // 0x400(0x01)
	char UnknownData_401[0x17]; // 0x401(0x17)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected // Final|Net|NetReliableNative|Event|Private|NetClient // @ game+0x24adb60
};

// Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0x68 (Inherited: 0x28)
struct UPartyBeaconState : UObject {
	struct FName SessionName; // 0x28(0x08)
	int32_t NumConsumedReservations; // 0x30(0x04)
	int32_t MaxReservations; // 0x34(0x04)
	int32_t NumTeams; // 0x38(0x04)
	int32_t NumPlayersPerTeam; // 0x3c(0x04)
	int32_t ReservedHostTeamNum; // 0x40(0x04)
	int32_t ForceTeamNum; // 0x44(0x04)
	struct TArray<struct FPartyReservation> Reservations; // 0x48(0x10)
	char UnknownData_58[0x10]; // 0x58(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x470 (Inherited: 0x418)
struct APartyBeaconClient : AOnlineBeaconClient {
	char UnknownData_418[0x10]; // 0x418(0x10)
	struct FString DestSessionId; // 0x428(0x10)
	struct FPartyReservation PendingReservation; // 0x438(0x30)
	char RequestType; // 0x468(0x01)
	bool bPendingReservationSent; // 0x469(0x01)
	bool bCancelReservation; // 0x46a(0x01)
	char UnknownData_46B[0x5]; // 0x46b(0x05)

	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x24afe50
	void ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x24afd10
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x24afbf0
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates // Net|NetReliableNative|Event|Public|NetClient // @ game+0x24adc20
	void ClientReservationResponse(char ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse // Net|NetReliableNative|Event|Public|NetClient // @ game+0x24adba0
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x418 (Inherited: 0x418)
struct ATestBeaconClient : AOnlineBeaconClient {

	void ServerPong(); // Function OnlineSubsystemUtils.TestBeaconClient.ServerPong // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x24afcc0
	void ClientPing(); // Function OnlineSubsystemUtils.TestBeaconClient.ClientPing // Net|NetReliableNative|Event|Public|NetClient // @ game+0x24adb80
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x4a8 (Inherited: 0x3f0)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x3f0(0x04)
	char UnknownData_3F4[0x4]; // 0x3f4(0x04)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x3f8(0x10)
	char UnknownData_408[0xa0]; // 0x408(0xa0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x3f0 (Inherited: 0x3c8)
struct AOnlineBeaconHostObject : AActor {
	struct FString BeaconTypeName; // 0x3c8(0x10)
	struct UClass* ClientBeaconActorClass; // 0x3d8(0x08)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x3e0(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x428 (Inherited: 0x3f0)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct UPartyBeaconState* State; // 0x3f0(0x08)
	char UnknownData_3F8[0x28]; // 0x3f8(0x28)
	float SessionTimeoutSecs; // 0x420(0x04)
	float TravelSessionTimeoutSecs; // 0x424(0x04)
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x3f0 (Inherited: 0x3f0)
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.OnlineBlueprintCallProxyBase
// Size: 0x28 (Inherited: 0x28)
struct UOnlineBlueprintCallProxyBase : UObject {

	void Activate(); // Function OnlineSubsystemUtils.OnlineBlueprintCallProxyBase.Activate // Native|Public|BlueprintCallable // @ game+0x24ad9c0
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x60 (Inherited: 0x28)
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x18]; // 0x48(0x18)

	struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements // Final|Native|Static|Public|BlueprintCallable // @ game+0x24adaa0
	struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions // Final|Native|Static|Public|BlueprintCallable // @ game+0x24ad9e0
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x80 (Inherited: 0x28)
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x38]; // 0x48(0x38)

	struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress // Final|Native|Static|Public|BlueprintCallable // @ game+0x24b0050
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x68 (Inherited: 0x28)
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x20]; // 0x48(0x20)

	struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService // Final|Native|Static|Public|BlueprintCallable // @ game+0x24adcb0
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0x80 (Inherited: 0x28)
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x38]; // 0x48(0x38)

	struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession // Final|Native|Static|Public|BlueprintCallable // @ game+0x24ae190
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x68 (Inherited: 0x28)
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x20]; // 0x48(0x20)

	struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession // Final|Native|Static|Public|BlueprintCallable // @ game+0x24ae2c0
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x78 (Inherited: 0x28)
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x30]; // 0x48(0x30)

	struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, TScriptInterface<struct UTurnBasedMatchInterface> MatchActor, struct FString MatchID, char LocalPlayerOutcome, char OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch // Final|Native|Static|Public|BlueprintCallable // @ game+0x24ae380
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x70 (Inherited: 0x28)
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x28]; // 0x48(0x28)

	struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, TScriptInterface<struct UTurnBasedMatchInterface> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn // Final|Native|Static|Public|BlueprintCallable // @ game+0x24ae580
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x88 (Inherited: 0x28)
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x40]; // 0x48(0x40)

	struct FString GetServerName(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x24af620
	int32_t GetPingInMs(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x24af380
	int32_t GetMaxPlayers(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x24af120
	int32_t GetCurrentPlayers(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x24aeec0
	struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions // Final|Native|Static|Public|BlueprintCallable // @ game+0x24ae700
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x88 (Inherited: 0x28)
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x40]; // 0x48(0x40)

	struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, TScriptInterface<struct UTurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch // Final|Native|Static|Public|BlueprintCallable // @ game+0x24ae830
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x148 (Inherited: 0x28)
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x100]; // 0x48(0x100)

	struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x24af740
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x70 (Inherited: 0x28)
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x28]; // 0x48(0x28)

	struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, char Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch // Final|Native|Static|Public|BlueprintCallable // @ game+0x24af960
};

// Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x168 (Inherited: 0x28)
struct UOnlineSessionClient : UOnlineSession {
	char UnknownData_28[0x138]; // 0x28(0x138)
	bool bIsFromInvite; // 0x160(0x01)
	bool bHandlingDisconnect; // 0x161(0x01)
	char UnknownData_162[0x6]; // 0x162(0x06)
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x58 (Inherited: 0x28)
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char UnknownData_48[0x10]; // 0x48(0x10)

	struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI // Final|Native|Static|Public|BlueprintCallable // @ game+0x24aff90
};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary {

	void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject // Final|Native|Static|Public|BlueprintCallable // @ game+0x24afb00
	void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString PlayerDisplayName); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x24af460
	void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x24af200
	void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, bool bIsMyTurn); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x24aefa0
};

