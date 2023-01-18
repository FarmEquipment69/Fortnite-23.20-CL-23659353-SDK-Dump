// ScriptStruct /Script/FortniteGame.BagelPlayerDataEntry
// Size: 0x80
struct FBagelPlayerDataEntry : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class AFortPlayerStateAthena* PlayerState; // 0x10 (0x8)
	int Scores[0xe]; // 0x18 (0x4) (ARRAY) 
	int TotalScore; // 0x50 (0x4)
	unsigned char StreakScoreLevel; // 0x54 (0x1)
	unsigned char StreakMultiplierCurrentKillCount; // 0x55 (0x1)
	unsigned char unreflected_56[0x2]; // 0x56 (0x2) 
	float LastAIKillTime; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct TArray<float> AIKillTimes; // 0x60 (0x10)
	struct FTimerHandle* ResetStreakScoreMultiplierTimerHandle; // 0x70 (0x8)
	int TotalAIKillCount; // 0x78 (0x4)
	unsigned char padding_7c[0x4]; // 0x7c (0x4)
};

