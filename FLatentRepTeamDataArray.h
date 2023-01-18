// ScriptStruct /Script/FortniteGame.LatentRepTeamDataArray
// Size: 0x120
struct FLatentRepTeamDataArray : FFastArraySerializer
{
	struct TArray<struct FLatentRepPlayerData> PlayerData; // 0x108 (0x10)
	int CurrPlayerUpdateIndex; // 0x118 (0x4)
	unsigned char padding_11c[0x4]; // 0x11c (0x4)
};

