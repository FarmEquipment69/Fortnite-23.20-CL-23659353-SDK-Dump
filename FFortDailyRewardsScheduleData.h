// ScriptStruct /Script/SaveTheWorldUI.FortDailyRewardsScheduleData
// Size: 0x98
struct FFortDailyRewardsScheduleData
{
	struct FText ScheduleTitle; // 0x0 (0x18)
	struct FText ScheduleDescription; // 0x18 (0x18)
	struct FText ScheduleItemDescription; // 0x30 (0x18)
	struct FText ScheduleEpicItemDescription; // 0x48 (0x18)
	int WeekOffset; // 0x60 (0x4)
	int RewardsGiven; // 0x64 (0x4)
	int RewardsAllowed; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct TArray<struct FFortDailyRewardsItemData> CalendarItems; // 0x70 (0x10)
	struct TArray<struct FFortDailyRewardsItemData> HighValueItems; // 0x80 (0x10)
	bool ClaimedToday; // 0x90 (0x1)
	unsigned char padding_91[0x7]; // 0x91 (0x7)
};

