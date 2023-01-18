// ScriptStruct /Script/FortniteGame.TDMPlayerStandingInfo
// Size: 0x28
struct FTDMPlayerStandingInfo
{
	class AFortPlayerStateAthena* PlayerState; // 0x0 (0x8)
	bool bIsLocalPlayer; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	int PlayerScore; // 0xc (0x4)
	struct FString PlayerName; // 0x10 (0x10)
	unsigned char PlayerTeamId; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	int PlayerRanking; // 0x24 (0x4)
};

