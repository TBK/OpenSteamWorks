class CAdapterSteamHTTP001
{
	virtual unknown_ret CreateHTTPRequest( EHTTPMethod, char const* ) = 0;
	virtual unknown_ret SetHTTPRequestContextValue( uint32, uint64 ) = 0;
	virtual unknown_ret SetHTTPRequestNetworkActivityTimeout( uint32, uint32 ) = 0;
	virtual unknown_ret SetHTTPRequestHeaderValue( uint32, char const*, char const* ) = 0;
	virtual unknown_ret SetHTTPRequestGetOrPostParameter( uint32, char const*, char const* ) = 0;
	virtual unknown_ret SendHTTPRequest( uint32, uint64 * ) = 0;
	virtual unknown_ret DeferHTTPRequest( uint32 ) = 0;
	virtual unknown_ret PrioritizeHTTPRequest( uint32 ) = 0;
	virtual unknown_ret GetHTTPResponseHeaderSize( uint32, char const*, uint32 * ) = 0;
	virtual unknown_ret GetHTTPResponseHeaderValue( uint32, char const*, uint8 *, uint32 ) = 0;
	virtual unknown_ret GetHTTPResponseBodySize( uint32, uint32 * ) = 0;
	virtual unknown_ret GetHTTPResponseBodyData( uint32, uint8 *, uint32 ) = 0;
	virtual unknown_ret ReleaseHTTPRequest( uint32 ) = 0;
	virtual unknown_ret GetHTTPDownloadProgressPct( uint32, float * ) = 0;
	virtual unknown_ret SetHTTPRequestRawPostBody( uint32, char const*, uint8 *, uint32 ) = 0;
};

