// ScriptStruct /Script/FortniteGame.PlaylistData
// Size: 0x58
struct FPlaylistData
{
	struct FName PlaylistName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString TournamentId; // 0x8 (0x10)
	struct FString EventWindowId; // 0x18 (0x10)
	struct FString RegionId; // 0x28 (0x10)
	struct FOnlineLinkId LinkId; // 0x38 (0x18)
	bool bGracefullyUpgraded; // 0x50 (0x1)
	enum EMMSRulePreset MatchmakingRulePreset; // 0x51 (0x1)
	unsigned char padding_52[0x6]; // 0x52 (0x6)
};

