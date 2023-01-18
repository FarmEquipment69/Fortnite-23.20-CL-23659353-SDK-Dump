// ScriptStruct /Script/FortniteGame.AthenaMidSeasonUpdate
// Size: 0x50
struct FAthenaMidSeasonUpdate
{
	int SeasonLevelRequirement; // 0x0 (0x4)
	int BookLevelRequirement; // 0x4 (0x4)
	bool SeasonPurchasedRequirement; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct TArray<struct FAthenaMidSeasonUpdateItemReq> ItemRequirements; // 0x10 (0x10)
	struct TArray<struct FAthenaMidSeasonUpdateQuestReq> QuestRequirements; // 0x20 (0x10)
	struct FAthenaRewardScheduleLevel Grants; // 0x30 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortItemDefinition>> Removals; // 0x40 (0x10)
};

