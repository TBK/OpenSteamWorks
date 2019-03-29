class CAdapterSteamHTMLSurface004
{
	virtual unknown_ret ~CAdapterSteamHTMLSurface004() = 0;
	virtual unknown_ret ~CAdapterSteamHTMLSurface004() = 0;
	virtual unknown_ret Init() = 0;
	virtual unknown_ret Shutdown() = 0;
	virtual unknown_ret CreateBrowser( char const*, char const* ) = 0;
	virtual unknown_ret RemoveBrowser( uint32 ) = 0;
	virtual unknown_ret LoadURL( uint32, char const*, char const* ) = 0;
	virtual unknown_ret SetSize( uint32, uint32, uint32 ) = 0;
	virtual unknown_ret StopLoad( uint32 ) = 0;
	virtual unknown_ret Reload( uint32 ) = 0;
	virtual unknown_ret GoBack( uint32 ) = 0;
	virtual unknown_ret GoForward( uint32 ) = 0;
	virtual unknown_ret AddHeader( uint32, char const*, char const* ) = 0;
	virtual unknown_ret ExecuteJavascript( uint32, char const* ) = 0;
	virtual unknown_ret MouseUp( uint32, ISteamHTMLSurface::EHTMLMouseButton ) = 0;
	virtual unknown_ret MouseDown( uint32, ISteamHTMLSurface::EHTMLMouseButton ) = 0;
	virtual unknown_ret MouseDoubleClick( uint32, ISteamHTMLSurface::EHTMLMouseButton ) = 0;
	virtual unknown_ret MouseMove( uint32, int32, int32 ) = 0;
	virtual unknown_ret MouseWheel( uint32, int32 ) = 0;
	virtual unknown_ret KeyDown( uint32, uint32, ISteamHTMLSurface::EHTMLKeyModifiers ) = 0;
	virtual unknown_ret KeyUp( uint32, uint32, ISteamHTMLSurface::EHTMLKeyModifiers ) = 0;
	virtual unknown_ret KeyChar( uint32, uint32, ISteamHTMLSurface::EHTMLKeyModifiers ) = 0;
	virtual unknown_ret SetHorizontalScroll( uint32, uint32 ) = 0;
	virtual unknown_ret SetVerticalScroll( uint32, uint32 ) = 0;
	virtual unknown_ret SetKeyFocus( uint32, bool ) = 0;
	virtual unknown_ret ViewSource( uint32 ) = 0;
	virtual unknown_ret CopyToClipboard( uint32 ) = 0;
	virtual unknown_ret PasteFromClipboard( uint32 ) = 0;
	virtual unknown_ret Find( uint32, char const*, bool, bool ) = 0;
	virtual unknown_ret StopFind( uint32 ) = 0;
	virtual unknown_ret GetLinkAtPosition( uint32, int32, int32 ) = 0;
	virtual unknown_ret SetCookie( char const*, char const*, char const*, char const*, uint32, bool, bool ) = 0;
	virtual unknown_ret SetPageScaleFactor( uint32, float, int32, int32 ) = 0;
	virtual unknown_ret SetBackgroundMode( uint32, bool ) = 0;
	virtual unknown_ret SetDPIScalingFactor( uint32, float ) = 0;
	virtual unknown_ret AllowStartRequest( uint32, bool ) = 0;
	virtual unknown_ret JSDialogResponse( uint32, bool ) = 0;
	virtual unknown_ret FileLoadDialogResponse( uint32, char const** ) = 0;
};

