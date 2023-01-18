// ScriptStruct /Script/FortniteGame.FortQuestRewardNotification
// Size: 0x40
struct FFortQuestRewardNotification
{
	struct FString QuestId; // 0x0 (0x10)
	struct FMcpLootResult Loot; // 0x10 (0x20)
	struct TArray<struct FFortQuestRewardData> QuestsAndRewards; // 0x30 (0x10)
};

