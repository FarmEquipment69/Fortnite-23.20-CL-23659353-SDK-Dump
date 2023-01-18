// ScriptStruct /Script/SaveTheWorldUI.FortSurvivorSquadSlottingFeedbackData
// Size: 0xb0
struct FFortSurvivorSquadSlottingFeedbackData
{
	bool HadLeaderMatch; // 0x0 (0x1)
	bool HasLeaderMatch; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct TMap<struct FGameplayTag, int> PreviousSetBonusCounts; // 0x8 (0x50)
	struct TMap<struct FGameplayTag, int> CurrentSetBonusCounts; // 0x58 (0x50)
	int PreviousPersonalityMatchCount; // 0xa8 (0x4)
	int CurrentPersonalityMatchCount; // 0xac (0x4)
};

