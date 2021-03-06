class CAdapterSteamUserStats003
{
	virtual unknown_ret RequestCurrentStats() = 0;
	virtual unknown_ret GetStat( char const*, int32 * ) = 0;
	virtual unknown_ret GetStat( char const*, float * ) = 0;
	virtual unknown_ret SetStat( char const*, int32 ) = 0;
	virtual unknown_ret SetStat( char const*, float ) = 0;
	virtual unknown_ret UpdateAvgRateStat( char const*, float, double ) = 0;
	virtual unknown_ret GetAchievement( char const*, bool * ) = 0;
	virtual unknown_ret SetAchievement( char const* ) = 0;
	virtual unknown_ret ClearAchievement( char const* ) = 0;
	virtual unknown_ret StoreStats() = 0;
	virtual unknown_ret GetAchievementIcon( char const* ) = 0;
	virtual unknown_ret GetAchievementDisplayAttribute( char const*, char const* ) = 0;
	virtual unknown_ret IndicateAchievementProgress( char const*, uint32, uint32 ) = 0;
};

