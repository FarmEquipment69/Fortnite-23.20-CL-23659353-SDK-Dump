// Class /Script/FortniteGame.AthenaSeasonItemEntryQuest
// Size: 0x2b8
class UAthenaSeasonItemEntryQuest : public UAthenaSeasonItemEntryBase
{
	struct FAthenaRewardItemReference QuestItem; // 0x178 (0xa0)
	struct TWeakObjectPtr<class UFortChallengeBundleScheduleDefinition> ChallengeScheduleSoftObjPtr; // 0x218 (0x28)
	struct TWeakObjectPtr<class UFortChallengeBundleItemDefinition> ChallengeBundleSoftObjPtr; // 0x240 (0x28)
	struct TWeakObjectPtr<class UFortQuestItemDefinition> SpecificQuestItem; // 0x268 (0x28)
	struct TWeakObjectPtr<class UFortQuestItemDefinition> OverrideProgressableQuest; // 0x290 (0x28)
};

