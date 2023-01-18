// ScriptStruct /Script/FortniteGame.CrucibleLeaderboardData
// Size: 0x30
struct FCrucibleLeaderboardData
{
	enum EFortCrucibleLeaderboardId LeaderboardId; // 0x0 (0x1)
	enum EFortCrucibleLeaderboardState CurrentState; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct FString LeaderboardName; // 0x8 (0x10)
	struct TArray<struct FCrucibleLeaderboardEntry> CurrentCompiledResults; // 0x18 (0x10)
	bool bHasBeenRequestedByUser; // 0x28 (0x1)
	bool bHasHadWorkQueued; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	int NumQueries; // 0x2c (0x4)
};

