// ScriptStruct /Script/FortniteGame.MashLeaderboardEntry
// Size: 0x50
struct FMashLeaderboardEntry
{
	struct FString DisplayName; // 0x0 (0x10)
	int Value; // 0x10 (0x4)
	int Rank; // 0x14 (0x4)
	struct FUniqueNetIdRepl UserNetId; // 0x18 (0x30)
	bool bIsSpecialEntry; // 0x48 (0x1)
	bool bIsLocalPlayer; // 0x49 (0x1)
	unsigned char padding_4a[0x6]; // 0x4a (0x6)
};

