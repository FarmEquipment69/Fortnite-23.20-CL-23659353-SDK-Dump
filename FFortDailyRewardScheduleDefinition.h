// ScriptStruct /Script/FortniteGame.FortDailyRewardScheduleDefinition
// Size: 0xa8
struct FFortDailyRewardScheduleDefinition
{
	struct FName ScheduleName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TWeakObjectPtr<class UFortDailyRewardScheduleTokenDefinition> EnablingToken; // 0x8 (0x28)
	class UDataTable* Rewards; // 0x30 (0x8)
	struct FFortDailyRewardScheduleDisplayData DisplayData; // 0x38 (0x60)
	struct FDateTime* BeginDate; // 0x98 (0x8)
	struct FDateTime* EndDate; // 0xa0 (0x8)
};

