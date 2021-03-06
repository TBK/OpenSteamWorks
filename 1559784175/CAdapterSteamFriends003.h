class CAdapterSteamFriends003
{
	virtual unknown_ret GetPersonaName() = 0;
	virtual unknown_ret SetPersonaName( char const* ) = 0;
	virtual unknown_ret GetPersonaState() = 0;
	virtual unknown_ret GetFriendCount( int32 ) = 0;
	virtual unknown_ret GetFriendByIndex( int32, int32 ) = 0;
	virtual unknown_ret GetFriendRelationship( CSteamID ) = 0;
	virtual unknown_ret GetFriendPersonaState( CSteamID ) = 0;
	virtual unknown_ret GetFriendPersonaName( CSteamID ) = 0;
	virtual unknown_ret GetFriendAvatar( CSteamID ) = 0;
	virtual unknown_ret GetFriendGamePlayed( CSteamID, uint64 *, uint32 *, uint16 *, uint16 * ) = 0;
	virtual unknown_ret GetFriendPersonaNameHistory( CSteamID, int32 ) = 0;
	virtual unknown_ret HasFriend( CSteamID, int32 ) = 0;
	virtual unknown_ret GetClanCount() = 0;
	virtual unknown_ret GetClanByIndex( int32 ) = 0;
	virtual unknown_ret GetClanName( CSteamID ) = 0;
	virtual unknown_ret GetFriendCountFromSource( CSteamID ) = 0;
	virtual unknown_ret GetFriendFromSourceByIndex( CSteamID, int32 ) = 0;
	virtual unknown_ret IsUserInSource( CSteamID, CSteamID ) = 0;
	virtual unknown_ret SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
	virtual unknown_ret ActivateGameOverlay( char const* ) = 0;
};

