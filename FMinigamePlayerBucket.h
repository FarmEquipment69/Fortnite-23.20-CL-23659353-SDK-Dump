// ScriptStruct /Script/FortniteGame.MinigamePlayerBucket
// Size: 0x48
struct FMinigamePlayerBucket
{
	unsigned char TeamIdAtGameStart; // 0x0 (0x1)
	unsigned char TeamIdAtRoundStart; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	float DesiredTeamSizePercent; // 0x4 (0x4)
	unsigned char unreflected_8[0x30]; // 0x8 (0x30) 
	struct TArray<struct FUniqueNetIdRepl> PlayerIds; // 0x38 (0x10)
};

