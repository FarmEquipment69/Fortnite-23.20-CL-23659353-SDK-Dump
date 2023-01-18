// ScriptStruct /Script/FortniteGame.FortDailyLoginRewardStat
// Size: 0x60
struct FFortDailyLoginRewardStat
{
	int NextDefaultReward; // 0x0 (0x4)
	int TotalDaysLoggedIn; // 0x4 (0x4)
	struct FDateTime* LastClaimDate; // 0x8 (0x8)
	struct TMap<struct FName, struct FFortDailyLoginRewardStat_ScheduleClaimed*> AdditionalSchedules; // 0x10 (0x50)
};

