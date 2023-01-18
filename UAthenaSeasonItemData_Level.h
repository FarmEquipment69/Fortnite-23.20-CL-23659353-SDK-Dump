// Class /Script/FortniteGame.AthenaSeasonItemData_Level
// Size: 0x98
class UAthenaSeasonItemData_Level : public UAthenaSeasonItemData
{
	int NumBattlePassLevels; // 0x28 (0x4)
	int NumAdditionalBattlePassLevels; // 0x2c (0x4)
	class UDataTable* BattlePassXpCurve; // 0x30 (0x8)
	struct TArray<int> FreeLevelsThatNavigateToBattlePass; // 0x38 (0x10)
	struct TArray<struct FTrackCategory> TrackCategories; // 0x48 (0x10)
	struct FGameplayTag BattlePassFreeItemContentTag; // 0x58 (0x4)
	struct FGameplayTag BattlePassPaidItemContentTag; // 0x5c (0x4)
	struct FGameplayTag BattlePassAdditionalItemContentTag; // 0x60 (0x4)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	struct FAthenaRewardSchedule BattlePassXpScheduleFree; // 0x68 (0x10)
	struct FAthenaRewardSchedule BattlePassXpSchedulePaid; // 0x78 (0x10)
	struct FAthenaRewardSchedule AdditionalBattlePassSchedule; // 0x88 (0x10)
};

