// ScriptStruct /Script/FortniteGame.CreativeIslandMatchmakingSettings
// Size: 0x50
struct FCreativeIslandMatchmakingSettings
{
	int MinimumNumberOfPlayers; // 0x0 (0x4)
	int MaximumNumberOfPlayers; // 0x4 (0x4)
	struct FString MmsType; // 0x8 (0x10)
	struct FString MmsPrivacy; // 0x18 (0x10)
	struct FString OverridePlaylist; // 0x28 (0x10)
	int PlayerCount; // 0x38 (0x4)
	int NumberOfTeams; // 0x3c (0x4)
	int PlayersPerTeam; // 0x40 (0x4)
	bool bAllowJoinInProgress; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	int SelectedJoinInProgressType; // 0x48 (0x4)
	unsigned char JoinInProgressTeam; // 0x4c (0x1)
	unsigned char padding_4d[0x3]; // 0x4d (0x3)
};

