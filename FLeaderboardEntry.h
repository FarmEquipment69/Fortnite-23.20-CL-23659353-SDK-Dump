// ScriptStruct /Script/FortniteGame.LeaderboardEntry
// Size: 0x38
struct FLeaderboardEntry
{
	struct FString LeaderboardId; // 0x0 (0x10)
	struct FString LeaderboardName; // 0x10 (0x10)
	struct FString DisplayedAlternativeTrackedStat; // 0x20 (0x10)
	bool ShowDetailsPanel; // 0x30 (0x1)
	bool bIsArena; // 0x31 (0x1)
	unsigned char padding_32[0x6]; // 0x32 (0x6)
};

