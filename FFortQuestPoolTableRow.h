// ScriptStruct /Script/FortniteGame.FortQuestPoolTableRow
// Size: 0xa0
struct FFortQuestPoolTableRow : FTableRowBase
{
	struct FString PrerequisiteCompletedQuests; // 0x8 (0x10)
	struct FString PrerequisiteNotCompletedQuests; // 0x18 (0x10)
	struct FString PrerequisiteEventChannel; // 0x28 (0x10)
	struct FString PrerequisiteEventName; // 0x38 (0x10)
	int RefreshIntervalHours; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct FString RefreshEvent; // 0x50 (0x10)
	struct FString LootTierGroup; // 0x60 (0x10)
	int LootTier; // 0x70 (0x4)
	int RerollLimit; // 0x74 (0x4)
	bool bGlobalPull; // 0x78 (0x1)
	bool bRollOnActivation; // 0x79 (0x1)
	bool bDeleteActiveOnRefresh; // 0x7a (0x1)
	unsigned char unreflected_7b[0x1]; // 0x7b (0x1) 
	int MaxActive; // 0x7c (0x4)
	int DaysToKeepClaimed; // 0x80 (0x4)
	int DaysToKeepCompleted; // 0x84 (0x4)
	int MaxUnclaimed; // 0x88 (0x4)
	unsigned char unreflected_8c[0x4]; // 0x8c (0x4) 
	struct FString LockoutName; // 0x90 (0x10)
};

