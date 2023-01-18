// ScriptStruct /Script/FortniteGame.FortRewardReport
// Size: 0x70
struct FFortRewardReport
{
	struct FText MissionName; // 0x0 (0x18)
	struct FText TheaterName; // 0x18 (0x18)
	struct FText Difficulty; // 0x30 (0x18)
	float DifficultyValue; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct TArray<struct FFortRewardActivity> RewardActivities; // 0x50 (0x10)
	bool bIsFinalized; // 0x60 (0x1)
	unsigned char padding_61[0xf]; // 0x61 (0xf)
};

