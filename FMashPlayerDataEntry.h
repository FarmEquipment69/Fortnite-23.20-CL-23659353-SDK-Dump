// ScriptStruct /Script/FortniteGame.MashPlayerDataEntry
// Size: 0xf8
struct FMashPlayerDataEntry : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class AFortPlayerStateAthena* PlayerState; // 0x10 (0x8)
	struct FString PlayerName; // 0x18 (0x10)
	struct FMashScoreTrackingData* ScoreTracking[0x11]; // 0x28 (0x8) (ARRAY) 
	int TotalScore; // 0xb0 (0x4)
	unsigned char StreakScoreLevel; // 0xb4 (0x1)
	unsigned char StreakMultiplierKillCountCurrentForLevel; // 0xb5 (0x1)
	unsigned char unreflected_b6[0x2]; // 0xb6 (0x2) 
	uint32_t StreakMultiplierKillCountCurrentTotal; // 0xb8 (0x4)
	uint32_t StreakMultiplierKillCountHighestThisSession; // 0xbc (0x4)
	float LastAIKillTime; // 0xc0 (0x4)
	unsigned char unreflected_c4[0x4]; // 0xc4 (0x4) 
	struct TArray<float> AIKillTimes; // 0xc8 (0x10)
	struct FTimerHandle* ResetStreakScoreMultiplierTimerHandle; // 0xd8 (0x8)
	int TotalAIKillCount; // 0xe0 (0x4)
	float TotalAIDamageDealt; // 0xe4 (0x4)
	float TotalRiftDamageDealt; // 0xe8 (0x4)
	float TotalRiftDamageDealtByPickaxe; // 0xec (0x4)
	uint32_t LastReportedTeamScore; // 0xf0 (0x4)
	unsigned char padding_f4[0x4]; // 0xf4 (0x4)
};

