class CAdapterSteamNetworkingUtils001
{
	virtual unknown_ret GetLocalPingLocation( SteamNetworkPingLocation_t & ) = 0;
	virtual unknown_ret EstimatePingTimeBetweenTwoLocations( SteamNetworkPingLocation_t const&, SteamNetworkPingLocation_t const& ) = 0;
	virtual unknown_ret EstimatePingTimeFromLocalHost( SteamNetworkPingLocation_t const& ) = 0;
	virtual unknown_ret ConvertPingLocationToString( SteamNetworkPingLocation_t const&, char *, int32 ) = 0;
	virtual unknown_ret ParsePingLocationString( char const*, SteamNetworkPingLocation_t & ) = 0;
	virtual unknown_ret CheckPingDataUpToDate( float ) = 0;
	virtual unknown_ret IsPingMeasurementInProgress() = 0;
	virtual unknown_ret GetPingToDataCenter( uint32, uint32 * ) = 0;
	virtual unknown_ret GetDirectPingToPOP( uint32 ) = 0;
	virtual unknown_ret GetPOPCount() = 0;
	virtual unknown_ret GetPOPList( uint32 *, int32 ) = 0;
	virtual unknown_ret GetLocalTimestamp() = 0;
	virtual unknown_ret SetDebugOutputFunction( ESteamNetworkingSocketsDebugOutputType, void ( * )( ESteamNetworkingSocketsDebugOutputType, char const* ) ) = 0;
	virtual unknown_ret SetConfigValue( ESteamNetworkingConfigValue, ESteamNetworkingConfigScope, long, ESteamNetworkingConfigDataType, void const* ) = 0;
	virtual unknown_ret GetConfigValue( ESteamNetworkingConfigValue, ESteamNetworkingConfigScope, long, ESteamNetworkingConfigDataType *, void *, unsigned long * ) = 0;
	virtual unknown_ret GetConfigValueInfo( ESteamNetworkingConfigValue, char const**, ESteamNetworkingConfigDataType *, ESteamNetworkingConfigScope *, ESteamNetworkingConfigValue* ) = 0;
	virtual unknown_ret GetFirstConfigValue() = 0;
	virtual unknown_ret SteamNetworkingIPAddr_ToString( SteamNetworkingIPAddr const&, char *, unsigned long, bool ) = 0;
	virtual unknown_ret SteamNetworkingIPAddr_ParseString( SteamNetworkingIPAddr *, char const* ) = 0;
	virtual unknown_ret SteamNetworkingIdentity_ToString( SteamNetworkingIdentity const&, char *, unsigned long ) = 0;
	virtual unknown_ret SteamNetworkingIdentity_ParseString( SteamNetworkingIdentity *, char const* ) = 0;
};

