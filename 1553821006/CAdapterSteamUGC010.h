class CAdapterSteamUGC010
{
	virtual unknown_ret CreateQueryUserUGCRequest( uint32, EUserUGCList, EUGCMatchingUGCType, EUserUGCListSortOrder, uint32, uint32, uint32 ) = 0;
	virtual unknown_ret CreateQueryAllUGCRequest( EUGCQuery, EUGCMatchingUGCType, uint32, uint32, uint32 ) = 0;
	virtual unknown_ret CreateQueryUGCDetailsRequest( uint64 *, uint32 ) = 0;
	virtual unknown_ret SendQueryUGCRequest( uint64 ) = 0;
	virtual unknown_ret GetQueryUGCResult( uint64, uint32, SteamUGCDetails_t * ) = 0;
	virtual unknown_ret GetQueryUGCPreviewURL( uint64, uint32, char *, uint32 ) = 0;
	virtual unknown_ret GetQueryUGCMetadata( uint64, uint32, char *, uint32 ) = 0;
	virtual unknown_ret GetQueryUGCChildren( uint64, uint32, uint64 *, uint32 ) = 0;
	virtual unknown_ret GetQueryUGCStatistic( uint64, uint32, EItemStatistic, uint64 * ) = 0;
	virtual unknown_ret GetQueryUGCNumAdditionalPreviews( uint64, uint32 ) = 0;
	virtual unknown_ret GetQueryUGCAdditionalPreview( uint64, uint32, uint32, char *, uint32, char *, uint32, EItemPreviewType * ) = 0;
	virtual unknown_ret GetQueryUGCNumKeyValueTags( uint64, uint32 ) = 0;
	virtual unknown_ret GetQueryUGCKeyValueTag( uint64, uint32, uint32, char *, uint32, char *, uint32 ) = 0;
	virtual unknown_ret ReleaseQueryUGCRequest( uint64 ) = 0;
	virtual unknown_ret AddRequiredTag( uint64, char const* ) = 0;
	virtual unknown_ret AddExcludedTag( uint64, char const* ) = 0;
	virtual unknown_ret SetReturnOnlyIDs( uint64, bool ) = 0;
	virtual unknown_ret SetReturnKeyValueTags( uint64, bool ) = 0;
	virtual unknown_ret SetReturnLongDescription( uint64, bool ) = 0;
	virtual unknown_ret SetReturnMetadata( uint64, bool ) = 0;
	virtual unknown_ret SetReturnChildren( uint64, bool ) = 0;
	virtual unknown_ret SetReturnAdditionalPreviews( uint64, bool ) = 0;
	virtual unknown_ret SetReturnTotalOnly( uint64, bool ) = 0;
	virtual unknown_ret SetReturnPlaytimeStats( uint64, uint32 ) = 0;
	virtual unknown_ret SetLanguage( uint64, char const* ) = 0;
	virtual unknown_ret SetAllowCachedResponse( uint64, uint32 ) = 0;
	virtual unknown_ret SetCloudFileNameFilter( uint64, char const* ) = 0;
	virtual unknown_ret SetMatchAnyTag( uint64, bool ) = 0;
	virtual unknown_ret SetSearchText( uint64, char const* ) = 0;
	virtual unknown_ret SetRankedByTrendDays( uint64, uint32 ) = 0;
	virtual unknown_ret AddRequiredKeyValueTag( uint64, char const*, char const* ) = 0;
	virtual unknown_ret RequestUGCDetails( uint64, uint32 ) = 0;
	virtual unknown_ret CreateItem( uint32, EWorkshopFileType ) = 0;
	virtual unknown_ret StartItemUpdate( uint32, uint64 ) = 0;
	virtual unknown_ret SetItemTitle( uint64, char const* ) = 0;
	virtual unknown_ret SetItemDescription( uint64, char const* ) = 0;
	virtual unknown_ret SetItemUpdateLanguage( uint64, char const* ) = 0;
	virtual unknown_ret SetItemMetadata( uint64, char const* ) = 0;
	virtual unknown_ret SetItemVisibility( uint64, ERemoteStoragePublishedFileVisibility ) = 0;
	virtual unknown_ret SetItemTags( uint64, SteamParamStringArray_t const* ) = 0;
	virtual unknown_ret SetItemContent( uint64, char const* ) = 0;
	virtual unknown_ret SetItemPreview( uint64, char const* ) = 0;
	virtual unknown_ret RemoveItemKeyValueTags( uint64, char const* ) = 0;
	virtual unknown_ret AddItemKeyValueTag( uint64, char const*, char const* ) = 0;
	virtual unknown_ret AddItemPreviewFile( uint64, char const*, EItemPreviewType ) = 0;
	virtual unknown_ret AddItemPreviewVideo( uint64, char const* ) = 0;
	virtual unknown_ret UpdateItemPreviewFile( uint64, uint32, char const* ) = 0;
	virtual unknown_ret UpdateItemPreviewVideo( uint64, uint32, char const* ) = 0;
	virtual unknown_ret RemoveItemPreview( uint64, uint32 ) = 0;
	virtual unknown_ret SubmitItemUpdate( uint64, char const* ) = 0;
	virtual unknown_ret GetItemUpdateProgress( uint64, uint64 *, uint64 * ) = 0;
	virtual unknown_ret SetUserItemVote( uint64, bool ) = 0;
	virtual unknown_ret GetUserItemVote( uint64 ) = 0;
	virtual unknown_ret AddItemToFavorites( uint32, uint64 ) = 0;
	virtual unknown_ret RemoveItemFromFavorites( uint32, uint64 ) = 0;
	virtual unknown_ret SubscribeItem( uint64 ) = 0;
	virtual unknown_ret UnsubscribeItem( uint64 ) = 0;
	virtual unknown_ret GetNumSubscribedItems() = 0;
	virtual unknown_ret GetSubscribedItems( uint64 *, uint32 ) = 0;
	virtual unknown_ret GetItemState( uint64 ) = 0;
	virtual unknown_ret GetItemInstallInfo( uint64, uint64 *, char *, uint32, uint32 * ) = 0;
	virtual unknown_ret GetItemDownloadInfo( uint64, uint64 *, uint64 * ) = 0;
	virtual unknown_ret DownloadItem( uint64, bool ) = 0;
	virtual unknown_ret BInitWorkshopForGameServer( uint32, char const* ) = 0;
	virtual unknown_ret SuspendDownloads( bool ) = 0;
	virtual unknown_ret StartPlaytimeTracking( uint64 *, uint32 ) = 0;
	virtual unknown_ret StopPlaytimeTracking( uint64 *, uint32 ) = 0;
	virtual unknown_ret StopPlaytimeTrackingForAllItems() = 0;
	virtual unknown_ret AddDependency( uint64, uint64 ) = 0;
	virtual unknown_ret RemoveDependency( uint64, uint64 ) = 0;
	virtual unknown_ret AddAppDependency( uint64, uint32 ) = 0;
	virtual unknown_ret RemoveAppDependency( uint64, uint32 ) = 0;
	virtual unknown_ret GetAppDependencies( uint64 ) = 0;
	virtual unknown_ret DeleteItem( uint64 ) = 0;
};

