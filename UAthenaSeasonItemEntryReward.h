// Class /Script/FortniteGame.AthenaSeasonItemEntryReward
// Size: 0x318
class UAthenaSeasonItemEntryReward : public UAthenaSeasonItemEntryOfferBase
{
	bool bIsFreePassReward; // 0x248 (0x1)
	unsigned char unreflected_249[0x3]; // 0x249 (0x3) 
	int RewardsNeededForUnlock; // 0x24c (0x4)
	int TotalRewardsNeededForUnlock; // 0x250 (0x4)
	int NeededLevelsToUnlock; // 0x254 (0x4)
	struct TArray<struct TWeakObjectPtr<class UFortItemDefinition>> RequiredItems; // 0x258 (0x10)
	struct TWeakObjectPtr<class UFortItemDefinition> LockingQuest; // 0x268 (0x28)
	struct TWeakObjectPtr<class UFortChallengeBundleScheduleDefinition> LockingChallengeScheduleSoftObjPtr; // 0x290 (0x28)
	struct TWeakObjectPtr<class UFortChallengeBundleItemDefinition> LockingChallengeBundleSoftObjPtr; // 0x2b8 (0x28)
	struct TWeakObjectPtr<class UFortQuestItemDefinition> LockingSpecificQuest; // 0x2e0 (0x28)
	class UFortChallengeBundleScheduleDefinition* DelayQuestSchedule; // 0x308 (0x8)
	int DelayDaysSinceSeasonStart; // 0x310 (0x4)
	unsigned char padding_314[0x4]; // 0x314 (0x4)
};

