class CSteamClient
{
	virtual unknown_ret CreateSteamPipe() = 0;
	virtual unknown_ret BReleaseSteamPipe( int32 ) = 0;
	virtual unknown_ret CreateGlobalUser( int32 * ) = 0;
	virtual unknown_ret ConnectToGlobalUser( int32 ) = 0;
	virtual unknown_ret CreateLocalUser( int32 *, EAccountType ) = 0;
	virtual unknown_ret CreatePipeToLocalUser( int32, int32 * ) = 0;
	virtual unknown_ret ReleaseUser( int32, int32 ) = 0;
	virtual unknown_ret IsValidHSteamUserPipe( int32, int32 ) = 0;
	virtual unknown_ret GetIClientUser( int32, int32 ) = 0;
	virtual unknown_ret GetIClientGameServer( int32, int32 ) = 0;
	virtual unknown_ret SetLocalIPBinding( uint32, uint16 ) = 0;
	virtual unknown_ret GetUniverseName( EUniverse ) = 0;
	virtual unknown_ret GetIClientFriends( int32, int32 ) = 0;
	virtual unknown_ret GetIClientUtils( int32 ) = 0;
	virtual unknown_ret GetIClientBilling( int32, int32 ) = 0;
	virtual unknown_ret GetIClientMatchmaking( int32, int32 ) = 0;
	virtual unknown_ret GetIClientApps( int32, int32 ) = 0;
	virtual unknown_ret GetIClientMatchmakingServers( int32, int32 ) = 0;
	virtual unknown_ret GetIClientGameSearch( int32, int32 ) = 0;
	virtual unknown_ret RunFrame() = 0;
	virtual unknown_ret GetIPCCallCount() = 0;
	virtual unknown_ret GetIClientUserStats( int32, int32 ) = 0;
	virtual unknown_ret GetIClientGameServerStats( int32, int32 ) = 0;
	virtual unknown_ret GetIClientNetworking( int32, int32 ) = 0;
	virtual unknown_ret GetIClientRemoteStorage( int32, int32 ) = 0;
	virtual unknown_ret GetIClientScreenshots( int32, int32 ) = 0;
	virtual unknown_ret SetWarningMessageHook( void ( * )( int32, char const* ) ) = 0;
	virtual unknown_ret GetIClientGameCoordinator( int32, int32 ) = 0;
	virtual unknown_ret SetOverlayNotificationPosition( ENotificationPosition ) = 0;
	virtual unknown_ret SetOverlayNotificationInset( int32, int32 ) = 0;
	virtual unknown_ret HookScreenshots( bool ) = 0;
	virtual unknown_ret IsScreenshotsHooked() = 0;
	virtual unknown_ret IsOverlayEnabled() = 0;
	virtual unknown_ret GetAPICallResult( int32, uint64, void *, int32, int32, bool * ) = 0;
	virtual unknown_ret GetIClientProductBuilder( int32, int32 ) = 0;
	virtual unknown_ret GetIClientDepotBuilder( int32, int32 ) = 0;
	virtual unknown_ret GetIClientNetworkDeviceManager( int32 ) = 0;
	virtual unknown_ret ConCommandInit( IConCommandBaseAccessor * ) = 0;
	virtual unknown_ret GetIClientAppManager( int32, int32 ) = 0;
	virtual unknown_ret GetIClientConfigStore( int32, int32 ) = 0;
	virtual unknown_ret BOverlayNeedsPresent() = 0;
	virtual unknown_ret GetIClientGameStats( int32, int32 ) = 0;
	virtual unknown_ret GetIClientHTTP( int32, int32 ) = 0;
	virtual unknown_ret FlushBeforeValidate() = 0;
	virtual unknown_ret BShutdownIfAllPipesClosed() = 0;
	virtual unknown_ret GetIClientAudio( int32, int32 ) = 0;
	virtual unknown_ret GetIClientMusic( int32, int32 ) = 0;
	virtual unknown_ret GetIClientUnifiedMessages( int32, int32 ) = 0;
	virtual unknown_ret GetIClientController( int32, int32 ) = 0;
	virtual unknown_ret GetIClientParentalSettings( int32, int32 ) = 0;
	virtual unknown_ret GetIClientStreamLauncher( int32, int32 ) = 0;
	virtual unknown_ret GetIClientDeviceAuth( int32, int32 ) = 0;
	virtual unknown_ret GetIClientRemoteClientManager( int32 ) = 0;
	virtual unknown_ret GetIClientStreamClient( int32, int32 ) = 0;
	virtual unknown_ret GetIClientShortcuts( int32, int32 ) = 0;
	virtual unknown_ret GetIClientUGC( int32, int32 ) = 0;
	virtual unknown_ret GetIClientInventory( int32, int32 ) = 0;
	virtual unknown_ret GetIClientVR( int32 ) = 0;
	virtual unknown_ret GetIClientGameNotifications( int32, int32 ) = 0;
	virtual unknown_ret GetIClientHTMLSurface( int32, int32 ) = 0;
	virtual unknown_ret GetIClientVideo( int32, int32 ) = 0;
	virtual unknown_ret GetIClientControllerSerialized( int32 ) = 0;
	virtual unknown_ret GetIClientAppDisableUpdate( int32, int32 ) = 0;
	virtual unknown_ret Set_Client_API_CCheckCallbackRegisteredInProcess( uint32 ( * )( int32 ) ) = 0;
	virtual unknown_ret GetIClientBluetoothManager( int32 ) = 0;
	virtual unknown_ret GetIClientSharedConnection( int32, int32 ) = 0;
	virtual unknown_ret GetIClientShader( int32, int32 ) = 0;
	virtual unknown_ret GetIClientNetworkingSocketsSerialized( int32, int32 ) = 0;
	virtual unknown_ret GetIClientCompat( int32, int32 ) = 0;
	virtual unknown_ret SetClientCommandLine( int32, char ** ) = 0;
	virtual unknown_ret GetIClientParties( int32, int32 ) = 0;
	virtual unknown_ret GetIClientNetworkingMessages( int32, int32 ) = 0;
	virtual unknown_ret GetIClientNetworkingSockets( int32, int32 ) = 0;
	virtual unknown_ret GetIClientNetworkingUtils( int32 ) = 0;
	virtual unknown_ret GetIClientNetworkingUtilsSerialized( int32 ) = 0;
	virtual unknown_ret GetIClientSTARInternal( int32, int32 ) = 0;
	virtual unknown_ret ~CSteamClient() = 0;
	virtual unknown_ret ~CSteamClient() = 0;
	virtual unknown_ret GetIPCServerMap() = 0;
	virtual unknown_ret OnDebugTextArrived( char const* ) = 0;
	virtual unknown_ret OnThreadLocalRegistration() = 0;
	virtual unknown_ret OnThreadBuffersOverLimit() = 0;
};

