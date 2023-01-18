// ScriptStruct /Script/FortniteGame.CrucibleLeaderboardEntry
// Size: 0x50
struct FCrucibleLeaderboardEntry
{
	struct FString DisplayName; // 0x0 (0x10)
	int Rank; // 0x10 (0x4)
	int Value; // 0x14 (0x4)
	bool bIsLocalPlayer; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct FUniqueNetIdRepl UserNetId; // 0x20 (0x30)
};

