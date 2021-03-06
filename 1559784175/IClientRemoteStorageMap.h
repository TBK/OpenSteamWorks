class IClientRemoteStorageMap
{
	virtual void * FileWrite( uint32, ERemoteStorageFileRoot, char const*, void const*, int32 ) = 0;
	virtual void * GetFileSize( uint32, ERemoteStorageFileRoot, char const* ) = 0;
	virtual void * FileWriteAsync( uint32, ERemoteStorageFileRoot, char const*, CUtlBuffer * ) = 0;
	virtual void * FileReadAsync( uint32, ERemoteStorageFileRoot, char const*, uint32, uint32 ) = 0;
	virtual void * FileReadAsyncComplete( uint32, uint64, void *, uint32 ) = 0;
	virtual void * FileRead( uint32, ERemoteStorageFileRoot, char const*, void *, int32 ) = 0;
	virtual void * FileForget( uint32, ERemoteStorageFileRoot, char const* ) = 0;
	virtual void * FileDelete( uint32, ERemoteStorageFileRoot, char const* ) = 0;
	virtual void * FileShare( uint32, ERemoteStorageFileRoot, char const* ) = 0;
	virtual void * FileExists( uint32, ERemoteStorageFileRoot, char const* ) = 0;
	virtual void * FilePersisted( uint32, ERemoteStorageFileRoot, char const* ) = 0;
	virtual void * GetFileTimestamp( uint32, ERemoteStorageFileRoot, char const* ) = 0;
	virtual void * SetSyncPlatforms( uint32, ERemoteStorageFileRoot, char const*, ERemoteStoragePlatform ) = 0;
	virtual void * GetSyncPlatforms( uint32, ERemoteStorageFileRoot, char const* ) = 0;
	virtual void * FileWriteStreamOpen( uint32, ERemoteStorageFileRoot, char const* ) = 0;
	virtual void * FileWriteStreamClose( uint64 ) = 0;
	virtual void * FileWriteStreamCancel( uint64 ) = 0;
	virtual void * FileWriteStreamWriteChunk( uint64, void const*, int32 ) = 0;
	virtual void * GetFileCount( uint32, bool ) = 0;
	virtual const char * GetFileNameAndSize( uint32, int32, ERemoteStorageFileRoot *, int32 *, bool ) = 0;
	virtual void * GetQuota( uint32, uint64 *, uint64 * ) = 0;
	virtual void * IsCloudEnabledForAccount() = 0;
	virtual void * IsCloudEnabledForApp( uint32 ) = 0;
	virtual void SetCloudEnabledForApp( uint32, bool ) = 0;
	virtual void * UGCDownload( uint64, bool, uint32 ) = 0;
	virtual void * UGCDownloadToLocation( uint64, char const*, uint32 ) = 0;
	virtual void * GetUGCDownloadProgress( uint64, int32 *, int32 * ) = 0;
	virtual void * GetUGCDetails( uint64, uint32 *, char **, int32 *, CSteamID * ) = 0;
	virtual void * UGCRead( uint64, void *, int32, uint32, EUGCReadAction ) = 0;
	virtual void * GetCachedUGCCount() = 0;
	virtual void * GetCachedUGCHandle( int32 ) = 0;
	virtual void * PublishFile( uint32, ERemoteStorageFileRoot, char const*, char const*, uint32, char const*, char const*, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t const*, EWorkshopFileType ) = 0;
	virtual void * PublishVideo( uint32, EWorkshopVideoProvider, char const*, char const*, ERemoteStorageFileRoot, char const*, uint32, char const*, char const*, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t const* ) = 0;
	virtual void * PublishVideoFromURL( uint32, ERemoteStorageFileRoot, char const*, char const*, uint32, char const*, char const*, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t const* ) = 0;
	virtual void * CreatePublishedFileUpdateRequest( uint32, uint64 ) = 0;
	virtual void * UpdatePublishedFileFile( uint64, char const* ) = 0;
	virtual void * UpdatePublishedFilePreviewFile( uint64, char const* ) = 0;
	virtual void * UpdatePublishedFileTitle( uint64, char const* ) = 0;
	virtual void * UpdatePublishedFileDescription( uint64, char const* ) = 0;
	virtual void * UpdatePublishedFileSetChangeDescription( uint64, char const* ) = 0;
	virtual void * UpdatePublishedFileVisibility( uint64, ERemoteStoragePublishedFileVisibility ) = 0;
	virtual void * UpdatePublishedFileTags( uint64, SteamParamStringArray_t const* ) = 0;
	virtual void * UpdatePublishedFileURL( uint64, char const* ) = 0;
	virtual void * CommitPublishedFileUpdate( uint32, ERemoteStorageFileRoot, uint64 ) = 0;
	virtual void * GetPublishedFileDetails( uint64, bool, uint32 ) = 0;
	virtual void * DeletePublishedFile( uint64 ) = 0;
	virtual void * EnumerateUserPublishedFiles( uint32, uint32, ERemoteStoragePublishedFileSortOrder ) = 0;
	virtual void * SubscribePublishedFile( uint32, uint64 ) = 0;
	virtual void * EnumerateUserSubscribedFiles( uint32, uint32, uint8, EPublishedFileInfoMatchingFileType ) = 0;
	virtual void * UnsubscribePublishedFile( uint32, uint64 ) = 0;
	virtual void * SetUserPublishedFileAction( uint32, uint64, EWorkshopFileAction ) = 0;
	virtual void * EnumeratePublishedFilesByUserAction( uint32, EWorkshopFileAction, uint32 ) = 0;
	virtual void * EnumerateUserSubscribedFilesWithUpdates( uint32, uint32, uint32 ) = 0;
	virtual void * GetCREItemVoteSummary( uint64 ) = 0;
	virtual void * UpdateUserPublishedItemVote( uint64, bool ) = 0;
	virtual void * GetUserPublishedItemVoteDetails( uint64 ) = 0;
	virtual void * EnumerateUserSharedWorkshopFiles( uint32, CSteamID, uint32, SteamParamStringArray_t const*, SteamParamStringArray_t const* ) = 0;
	virtual void * EnumeratePublishedWorkshopFiles( uint32, EWorkshopEnumerationType, EPublishedFileInfoMatchingFileType, uint32, uint32, uint32, SteamParamStringArray_t const*, SteamParamStringArray_t const* ) = 0;
	virtual void * EGetFileSyncState( uint32, ERemoteStorageFileRoot, char const* ) = 0;
	virtual void * BIsFileSyncing( uint32, ERemoteStorageFileRoot, char const* ) = 0;
	virtual void * FilePersist( uint32, ERemoteStorageFileRoot, char const* ) = 0;
	virtual void * FileFetch( uint32, ERemoteStorageFileRoot, char const* ) = 0;
	virtual void * ResolvePath( uint32, ERemoteStorageFileRoot, char const*, char *, uint32 ) = 0;
	virtual void * FileTouch( uint32, ERemoteStorageFileRoot, char const*, bool ) = 0;
	virtual void SetCloudEnabledForAccount( bool ) = 0;
	virtual void LoadLocalFileInfoCache( uint32 ) = 0;
	virtual void EvaluateRemoteStorageSyncState( uint32, bool ) = 0;
	virtual void * GetRemoteStorageSyncState( uint32 ) = 0;
	virtual void * HaveLatestFilesLocally( uint32 ) = 0;
	virtual void * GetConflictingFileTimestamps( uint32, uint32 *, uint32 * ) = 0;
	virtual void * ResolveSyncConflict( uint32, bool ) = 0;
	virtual void * SynchronizeApp( uint32, bool, bool ) = 0;
	virtual void * IsAppSyncInProgress( uint32 ) = 0;
	virtual void RunAutoCloudOnAppLaunch( uint32 ) = 0;
	virtual void RunAutoCloudOnAppExit( uint32 ) = 0;
	virtual void * ResetFileRequestState( uint32 ) = 0;
	virtual void ClearPublishFileUpdateRequests( uint32 ) = 0;
	virtual void * GetSubscribedFileDownloadCount() = 0;
	virtual void * BGetSubscribedFileDownloadInfo( int32, uint64 *, uint32 *, uint32 *, uint32 * ) = 0;
	virtual void * BGetSubscribedFileDownloadInfo( uint64, uint32 *, uint32 *, uint32 * ) = 0;
	virtual void PauseSubscribedFileDownloadsForApp( uint32 ) = 0;
	virtual void ResumeSubscribedFileDownloadsForApp( uint32 ) = 0;
	virtual void PauseAllSubscribedFileDownloads() = 0;
	virtual void ResumeAllSubscribedFileDownloads() = 0;
};

