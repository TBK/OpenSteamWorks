class CAdapterSteamFriends011
{
	virtual unknown_ret GetPersonaName() = 0;
	virtual unknown_ret SetPersonaName( char const* ) = 0;
	virtual unknown_ret GetPersonaState() = 0;
	virtual unknown_ret GetFriendCount( int32 ) = 0;
	virtual unknown_ret GetFriendByIndex( int32, int32 ) = 0;
	virtual unknown_ret GetFriendRelationship( CSteamID ) = 0;
	virtual unknown_ret GetFriendPersonaState( CSteamID ) = 0;
	virtual unknown_ret GetFriendPersonaName( CSteamID ) = 0;
	virtual unknown_ret GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
	virtual unknown_ret GetFriendPersonaNameHistory( CSteamID, int32 ) = 0;
	virtual unknown_ret HasFriend( CSteamID, int32 ) = 0;
	virtual unknown_ret GetClanCount() = 0;
	virtual unknown_ret GetClanByIndex( int32 ) = 0;
	virtual unknown_ret GetClanName( CSteamID ) = 0;
	virtual unknown_ret GetClanTag( CSteamID ) = 0;
	virtual unknown_ret GetClanActivityCounts( CSteamID, int32 *, int32 *, int32 * ) = 0;
	virtual unknown_ret DownloadClanActivityCounts( CSteamID *, int32 ) = 0;
	virtual unknown_ret GetFriendCountFromSource( CSteamID ) = 0;
	virtual unknown_ret GetFriendFromSourceByIndex( CSteamID, int32 ) = 0;
	virtual unknown_ret IsUserInSource( CSteamID, CSteamID ) = 0;
	virtual unknown_ret SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
	virtual unknown_ret ActivateGameOverlay( char const* ) = 0;
	virtual unknown_ret ActivateGameOverlayToUser( char const*, CSteamID ) = 0;
	virtual unknown_ret ActivateGameOverlayToWebPage( char const* ) = 0;
	virtual unknown_ret ActivateGameOverlayToStore( uint32 ) = 0;
	virtual unknown_ret SetPlayedWith( CSteamID ) = 0;
	virtual unknown_ret ActivateGameOverlayInviteDialog( CSteamID ) = 0;
	virtual unknown_ret GetSmallFriendAvatar( CSteamID ) = 0;
	virtual unknown_ret GetMediumFriendAvatar( CSteamID ) = 0;
	virtual unknown_ret GetLargeFriendAvatar( CSteamID ) = 0;
	virtual unknown_ret RequestUserInformation( CSteamID, bool ) = 0;
	virtual unknown_ret RequestClanOfficerList( CSteamID ) = 0;
	virtual unknown_ret GetClanOwner( CSteamID ) = 0;
	virtual unknown_ret GetClanOfficerCount( CSteamID ) = 0;
	virtual unknown_ret GetClanOfficerByIndex( CSteamID, int32 ) = 0;
	virtual unknown_ret GetUserRestrictions() = 0;
	virtual unknown_ret SetRichPresence( char const*, char const* ) = 0;
	virtual unknown_ret ClearRichPresence() = 0;
	virtual unknown_ret GetFriendRichPresence( CSteamID, char const* ) = 0;
	virtual unknown_ret GetFriendRichPresenceKeyCount( CSteamID ) = 0;
	virtual unknown_ret GetFriendRichPresenceKeyByIndex( CSteamID, int32 ) = 0;
	virtual unknown_ret RequestFriendRichPresence( CSteamID ) = 0;
	virtual unknown_ret InviteUserToGame( CSteamID, char const* ) = 0;
	virtual unknown_ret GetCoplayFriendCount() = 0;
	virtual unknown_ret GetCoplayFriend( int32 ) = 0;
	virtual unknown_ret GetFriendCoplayTime( CSteamID ) = 0;
	virtual unknown_ret GetFriendCoplayGame( CSteamID ) = 0;
	virtual unknown_ret JoinClanChatRoom( CSteamID ) = 0;
	virtual unknown_ret LeaveClanChatRoom( CSteamID ) = 0;
	virtual unknown_ret GetClanChatMemberCount( CSteamID ) = 0;
	virtual unknown_ret GetChatMemberByIndex( CSteamID, int32 ) = 0;
	virtual unknown_ret SendClanChatMessage( CSteamID, char const* ) = 0;
	virtual unknown_ret GetClanChatMessage( CSteamID, int32, void *, int32, EChatEntryType *, CSteamID* ) = 0;
	virtual unknown_ret IsClanChatAdmin( CSteamID, CSteamID ) = 0;
	virtual unknown_ret IsClanChatWindowOpenInSteam( CSteamID ) = 0;
	virtual unknown_ret OpenClanChatWindowInSteam( CSteamID ) = 0;
	virtual unknown_ret CloseClanChatWindowInSteam( CSteamID ) = 0;
	virtual unknown_ret SetListenForFriendsMessages( bool ) = 0;
	virtual unknown_ret ReplyToFriendMessage( CSteamID, char const* ) = 0;
	virtual unknown_ret GetFriendMessage( CSteamID, int32, void *, int32, EChatEntryType * ) = 0;
	virtual unknown_ret GetFollowerCount( CSteamID ) = 0;
	virtual unknown_ret IsFollowing( CSteamID ) = 0;
	virtual unknown_ret EnumerateFollowingList( uint32 ) = 0;
};

