// ScriptStruct /Script/FortniteGame.AthenaSeasonRewardLevelInfo
// Size: 0x20
struct FAthenaSeasonRewardLevelInfo
{
	enum EAthenaSeasonRewardTrack track; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int Level; // 0x4 (0x4)
	int XpToNextLevel; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<struct FAthenaRewardItemReference> Rewards; // 0x10 (0x10)
};

