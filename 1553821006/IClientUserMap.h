class IClientUserMap
{
	virtual unknown_ret GetHSteamUser() = 0;
	virtual void * LogOn( CSteamID ) = 0;
	virtual void * LogOnWithPassword( char const*, char const* ) = 0;
	virtual void LogOnAndCreateNewSteamAccountIfNeeded() = 0;
	virtual void * VerifyOfflineLogon() = 0;
	virtual void LogOff() = 0;
	virtual void * BLoggedOn() = 0;
	virtual void * GetLogonState() = 0;
	virtual void * BConnected() = 0;
	virtual void * BTryingToLogin() = 0;
	virtual CSteamID GetSteamID() = 0;
	virtual CSteamID GetConsoleSteamID() = 0;
	virtual void * GetClientInstanceID() = 0;
	virtual void * IsVACBanned( uint32 ) = 0;
	virtual void * SetEmail( char const* ) = 0;
	virtual void * SetConfigString( EConfigSubTree, char const*, char const* ) = 0;
	virtual void * GetConfigString( EConfigSubTree, char const*, char *, int32 ) = 0;
	virtual void * SetConfigInt( EConfigSubTree, char const*, int32 ) = 0;
	virtual void * GetConfigInt( EConfigSubTree, char const*, int32 * ) = 0;
	virtual void * DeleteConfigKey( EConfigSubTree, char const* ) = 0;
	virtual void * GetConfigStoreKeyName( EConfigSubTree, char const*, char *, int32 ) = 0;
	virtual void * InitiateGameConnection( void *, int32, CSteamID, CGameID, uint32, uint16, bool ) = 0;
	virtual void * InitiateGameConnectionOld( void *, int32, CSteamID, CGameID, uint32, uint16, bool, void *, int32 ) = 0;
	virtual void TerminateGameConnection( uint32, uint16 ) = 0;
	virtual void * TerminateAppMultiStep( uint32, uint32 ) = 0;
	virtual void SetSelfAsChatDestination( bool ) = 0;
	virtual void * IsPrimaryChatDestination() = 0;
	virtual void RequestLegacyCDKey( uint32 ) = 0;
	virtual void * AckGuestPass( char const* ) = 0;
	virtual void * RedeemGuestPass( char const* ) = 0;
	virtual void * GetGuestPassToGiveCount() = 0;
	virtual void * GetGuestPassToRedeemCount() = 0;
	virtual void * GetGuestPassToGiveInfo( uint32, uint64 *, uint32 *, uint32 *, uint32 *, uint32 *, uint32 *, char *, int32 ) = 0;
	virtual void * GetGuestPassToGiveOut( uint32 ) = 0;
	virtual void * GetGuestPassToRedeem( uint32 ) = 0;
	virtual void * GetGuestPassToRedeemInfo( uint32, uint64 *, uint32 *, uint32 *, uint32 *, uint32 *, uint32 * ) = 0;
	virtual void * GetGuestPassToRedeemSenderName( uint32, char *, int32 ) = 0;
	virtual void * GetNumAppsInGuestPassesToRedeem() = 0;
	virtual void * GetAppsInGuestPassesToRedeem( uint32 *, uint32 ) = 0;
	virtual void * GetCountUserNotifications() = 0;
	virtual void * GetCountUserNotification( EUserNotification ) = 0;
	virtual void * RequestStoreAuthURL( char const* ) = 0;
	virtual void * SetLanguage( char const* ) = 0;
	virtual void TrackAppUsageEvent( CGameID, int32, char const* ) = 0;
	virtual void * RaiseConnectionPriority( EConnectionPriority, EConnectionPriorityReason ) = 0;
	virtual void ResetConnectionPriority( int32 ) = 0;
	virtual void * BHasCachedCredentials( char const* ) = 0;
	virtual void * SetAccountNameForCachedCredentialLogin( char const*, bool ) = 0;
	virtual void DestroyCachedCredentials( char const* ) = 0;
	virtual void * GetCurrentWebAuthToken( char *, int32, char *, int32 ) = 0;
	virtual void * RequestWebAuthToken() = 0;
	virtual void SetLoginInformation( char const*, char const*, bool ) = 0;
	virtual void SetTwoFactorCode( char const* ) = 0;
	virtual void ClearAllLoginInformation() = 0;
	virtual void * GetLanguage( char *, int32 ) = 0;
	virtual void * BIsCyberCafe() = 0;
	virtual void * BIsAcademicAccount() = 0;
	virtual void * BIsPortal2EducationAccount() = 0;
	virtual void * BIsAlienwareDemoAccount() = 0;
	virtual void TrackNatTraversalStat( CNatTraversalStat const* ) = 0;
	virtual void TrackSteamUsageEvent( ESteamUsageEvent, uint8 const*, uint32 ) = 0;
	virtual void TrackSteamGUIUsage( char const* ) = 0;
	virtual void SetComputerInUse() = 0;
	virtual void * BIsGameRunning( CGameID ) = 0;
	virtual void * BIsGameWindowReady( CGameID ) = 0;
	virtual void * BUpdateAppOwnershipTicket( uint32, bool ) = 0;
	virtual void * RequestCustomBinary( char const*, uint32, bool, bool ) = 0;
	virtual void * GetCustomBinariesState( uint32, int64 *, int64 * ) = 0;
	virtual void * RequestCustomBinaries( uint32, bool, bool, uint32 * ) = 0;
	virtual void SetCellID( uint32 ) = 0;
	virtual const char * GetUserBaseFolder() = 0;
	virtual void * GetUserDataFolder( CGameID, char *, int32 ) = 0;
	virtual void * GetUserConfigFolder( char *, int32 ) = 0;
	virtual void * GetAccountName( char *, uint32 ) = 0;
	virtual void * GetAccountName( CSteamID, char *, uint32 ) = 0;
	virtual void * IsPasswordRemembered() = 0;
	virtual void CheckoutSiteLicenseSeat( uint32 ) = 0;
	virtual void GetAvailableSeats( uint32 ) = 0;
	virtual const char * GetAssociatedSiteName() = 0;
	virtual void * BIsRunningInCafe() = 0;
	virtual void * RequiresLegacyCDKey( uint32, bool * ) = 0;
	virtual void * GetLegacyCDKey( uint32, char *, int32 ) = 0;
	virtual void * SetLegacyCDKey( uint32, char const* ) = 0;
	virtual void * WriteLegacyCDKey( uint32 ) = 0;
	virtual void RemoveLegacyCDKey( uint32 ) = 0;
	virtual void RequestLegacyCDKeyFromApp( uint32, uint32, uint32 ) = 0;
	virtual void * BIsAnyGameRunning() = 0;
	virtual void GetSteamGuardDetails() = 0;
	virtual void GetTwoFactorDetails() = 0;
	virtual void * BHasTwoFactor() = 0;
	virtual void * GetEmail( char *, int32, bool * ) = 0;
	virtual void FindAccountsByCdKey( char const* ) = 0;
	virtual void Test_FakeConnectionTimeout() = 0;
	virtual void * RunInstallScript( uint32, char const*, bool ) = 0;
	virtual void * IsInstallScriptRunning() = 0;
	virtual void * GetInstallScriptState( char *, uint32, uint32 *, uint32 * ) = 0;
	virtual void * SpawnProcess( char const*, char const*, uint32, char const*, CGameID, char const*, uint32, uint32, uint32 ) = 0;
	virtual void * GetAppOwnershipTicketLength( uint32 ) = 0;
	virtual void * GetAppOwnershipTicketData( uint32, void *, uint32 ) = 0;
	virtual void * GetAppOwnershipTicketExtendedData( uint32, void *, uint32, uint32 *, uint32 *, uint32 *, uint32 * ) = 0;
	virtual void * GetMarketingMessageCount() = 0;
	virtual void * GetMarketingMessage( int32, uint64 *, char *, int32, EMarketingMessageFlags * ) = 0;
	virtual void * GetAuthSessionTicket( void *, int32, uint32 * ) = 0;
	virtual void * BeginAuthSession( void const*, int32, CSteamID ) = 0;
	virtual void EndAuthSession( CSteamID ) = 0;
	virtual void CancelAuthTicket( uint32 ) = 0;
	virtual void * IsUserSubscribedAppInTicket( CSteamID, uint32 ) = 0;
	virtual void AdvertiseGame( CGameID, CSteamID, uint32, uint16 ) = 0;
	virtual void * RequestEncryptedAppTicket( void *, int32 ) = 0;
	virtual void * GetEncryptedAppTicket( void *, int32, uint32 * ) = 0;
	virtual void * GetGameBadgeLevel( int32, bool ) = 0;
	virtual void * GetPlayerSteamLevel() = 0;
	virtual void SetAccountLimited( bool ) = 0;
	virtual void * BIsAccountLimited() = 0;
	virtual void SetAccountCommunityBanned( bool ) = 0;
	virtual void * BIsAccountCommunityBanned() = 0;
	virtual void SetLimitedAccountCanInviteFriends( bool ) = 0;
	virtual void * BLimitedAccountCanInviteFriends() = 0;
	virtual void SendValidationEmail() = 0;
	virtual void * BGameConnectTokensAvailable() = 0;
	virtual void * NumGamesRunning() = 0;
	virtual void * GetRunningGameID( int32 ) = 0;
	virtual void * GetRunningGamePID( int32 ) = 0;
	virtual void * GetAccountSecurityPolicyFlags() = 0;
	virtual void SetClientStat( EClientStat, int64, uint32, uint32, uint32 ) = 0;
	virtual void VerifyPassword( char const* ) = 0;
	virtual void * BSupportUser() = 0;
	virtual void * BNeedsSSANextSteamLogon() = 0;
	virtual void ClearNeedsSSANextSteamLogon() = 0;
	virtual void * BIsAppOverlayEnabled( CGameID ) = 0;
	virtual void * BOverlayIgnoreChildProcesses( CGameID ) = 0;
	virtual void * BIsBehindNAT() = 0;
	virtual void * GetMicroTxnAppID( uint64 ) = 0;
	virtual void * GetMicroTxnOrderID( uint64 ) = 0;
	virtual void * BGetMicroTxnPrice( uint64, CAmount *, CAmount *, bool *, CAmount * ) = 0;
	virtual void * GetMicroTxnLineItemCount( uint64 ) = 0;
	virtual void * BGetMicroTxnLineItem( uint64, uint32, CAmount *, uint32 *, char *, uint32, int32 *, uint8 *, CAmount *, bool * ) = 0;
	virtual void * BIsSandboxMicroTxn( uint64, bool * ) = 0;
	virtual void * BMicroTxnRequiresCachedPmtMethod( uint64, bool * ) = 0;
	virtual void * AuthorizeMicroTxn( uint64, EMicroTxnAuthResponse ) = 0;
	virtual void * BGetWalletBalance( bool *, CAmount *, CAmount * ) = 0;
	virtual void * RequestMicroTxnInfo( uint64 ) = 0;
	virtual void * BMicroTxnRefundable( uint64 ) = 0;
	virtual void * BGetAppMinutesPlayed( uint32, int32 *, int32 * ) = 0;
	virtual void * GetAppLastPlayedTime( uint32 ) = 0;
	virtual void * GetAppUpdateDisabledSecondsRemaining( uint32 ) = 0;
	virtual void * BGetGuideURL( uint32, char *, uint32 ) = 0;
	virtual void * BPromptToVerifyEmail() = 0;
	virtual void * BPromptToChangePassword() = 0;
	virtual void * BAccountExtraSecurity() = 0;
	virtual void * BAccountShouldShowLockUI() = 0;
	virtual void * GetCountAuthedComputers() = 0;
	virtual void * BSteamGuardNewMachineNotification() = 0;
	virtual void * GetSteamGuardEnabledTime() = 0;
	virtual void * GetSteamGuardHistoryEntry( int32, uint32 *, uint32 *, bool *, char *, int32, char *, int32 ) = 0;
	virtual void SetSteamGuardNewMachineDialogResponse( bool, bool ) = 0;
	virtual void SetPhoneIsVerified( bool ) = 0;
	virtual void * BIsPhoneVerified() = 0;
	virtual void SetPhoneIsIdentifying( bool ) = 0;
	virtual void * BIsPhoneIdentifying() = 0;
	virtual void SetPhoneIsRequiringVerification( bool ) = 0;
	virtual void * BIsPhoneRequiringVerification() = 0;
	virtual void ChangeTwoFactorAuthOptions( int32 ) = 0;
	virtual void Set2ndFactorAuthCode( char const*, bool ) = 0;
	virtual void SetUserMachineName( char const* ) = 0;
	virtual void * GetUserMachineName( char *, int32 ) = 0;
	virtual void * GetEmailDomainFromLogonFailure( char *, int32 ) = 0;
	virtual void * BIsSubscribedApp( uint32 ) = 0;
	virtual void * GetSubscribedApps( uint32 *, uint32, bool ) = 0;
	virtual void * RegisterActivationCode( char const* ) = 0;
	virtual void AckSystemIM( uint64 ) = 0;
	virtual void * RequestSpecialSurvey( uint32 ) = 0;
	virtual void * SendSpecialSurveyResponse( uint32, uint8 const*, uint32 ) = 0;
	virtual void RequestNotifications() = 0;
	virtual void * GetAppOwnershipInfo( uint32, uint32 *, uint32 *, char * ) = 0;
	virtual void SendGameWebCallback( uint32, char const* ) = 0;
	virtual void * BIsStreamingUIToRemoteDevice() = 0;
	virtual void * BIsCurrentlyNVStreaming() = 0;
	virtual void OnBigPictureForStreamingStartResult( bool, void * ) = 0;
	virtual void OnBigPictureForStreamingDone() = 0;
	virtual void OnBigPictureForStreamingRestarting() = 0;
	virtual void StopStreaming( uint32 ) = 0;
	virtual void LockParentalLock() = 0;
	virtual void * UnlockParentalLock( char const* ) = 0;
	virtual void * BIsParentalLockEnabled() = 0;
	virtual void * BIsParentalLockLocked() = 0;
	virtual void BlockApp( uint32 ) = 0;
	virtual void UnblockApp( uint32 ) = 0;
	virtual void * BIsAppBlocked( uint32 ) = 0;
	virtual void * BIsAppInBlockList( uint32 ) = 0;
	virtual void BlockFeature( EParentalFeature ) = 0;
	virtual void UnblockFeature( EParentalFeature ) = 0;
	virtual void * BIsFeatureBlocked( EParentalFeature ) = 0;
	virtual void * BIsFeatureInBlockList( EParentalFeature ) = 0;
	virtual void * GetParentalUnlockTime() = 0;
	virtual void * BGetRecoveryEmail( char *, int32 ) = 0;
	virtual void RequestParentalRecoveryEmail() = 0;
	virtual void * BGetSerializedParentalSettings( CUtlBuffer * ) = 0;
	virtual void * BSetParentalSettings( CUtlBuffer * ) = 0;
	virtual void * BDisableParentalSettings() = 0;
	virtual void * BGetParentalWebToken( CUtlBuffer *, CUtlBuffer * ) = 0;
	virtual void * GetCommunityPreference( ECommunityPreference ) = 0;
	virtual void SetCommunityPreference( ECommunityPreference, bool ) = 0;
	virtual void * BCanLogonOfflineMode() = 0;
	virtual void * LogOnOfflineMode() = 0;
	virtual void * ValidateOfflineLogonTicket( char const* ) = 0;
	virtual void * BGetOfflineLogonTicket( char const*, COffline_OfflineLogonTicket * ) = 0;
	virtual void UploadLocalClientLogs() = 0;
	virtual void SetAsyncNotificationEnabled( uint32, bool ) = 0;
	virtual void * BIsOtherSessionPlaying( uint32 * ) = 0;
	virtual void * BKickOtherPlayingSession() = 0;
	virtual void * BIsAccountLockedDown() = 0;
	virtual void RemoveAppTag( CGameID, char const* ) = 0;
	virtual void AddAppTag( CGameID, char const* ) = 0;
	virtual void SetAppHidden( CGameID, bool ) = 0;
	virtual void * RequestAccountLinkInfo() = 0;
	virtual void RequestSurveySchedule() = 0;
	virtual void RequestNewSteamAnnouncementState() = 0;
	virtual void UpdateSteamAnnouncementLastRead( uint64, uint32 ) = 0;
	virtual void * GetMarketEligibility() = 0;
};

