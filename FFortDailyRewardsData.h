// ScriptStruct /Script/SaveTheWorldUI.FortDailyRewardsData
// Size: 0x18
struct FFortDailyRewardsData
{
	int CurrentLoginDays; // 0x0 (0x4)
	bool bCanClaim; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TArray<struct FFortDailyRewardsScheduleData> Schedules; // 0x8 (0x10)
};

