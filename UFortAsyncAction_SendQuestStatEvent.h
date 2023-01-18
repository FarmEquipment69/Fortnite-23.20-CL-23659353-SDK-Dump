// Class /Script/FortniteGame.FortAsyncAction_SendQuestStatEvent
// Size: 0xe0
class UFortAsyncAction_SendQuestStatEvent : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnIgnored; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x50 (0x10)
	class UFortQuestManager* QuestManager; // 0x60 (0x8)
	struct FDataTableRowHandle ObjectiveStat; // 0x68 (0x10)
	struct FGameplayTagContainer TargetTags; // 0x78 (0x20)
	struct FGameplayTagContainer SourceTags; // 0x98 (0x20)
	struct FGameplayTagContainer ContextTags; // 0xb8 (0x20)
	int Count; // 0xd8 (0x4)
	unsigned char padding_dc[0x4]; // 0xdc (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_SendQuestStatEvent.SendClientStatEventWithTags (Underlying native function: SendClientStatEventWithTags 0x8e008d0)
	static class UFortAsyncAction_SendQuestStatEvent* SendClientStatEventWithTags(class UFortQuestManager*& QuestManager, struct FGameplayTagContainer& TargetTags, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& ContextTags, int& Count); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAsyncAction_SendQuestStatEvent.SendClientStatEvent (Underlying native function: SendClientStatEvent 0x8e007b4)
	static class UFortAsyncAction_SendQuestStatEvent* SendClientStatEvent(class UFortQuestManager*& QuestManager, struct FDataTableRowHandle& ObjectiveStat, int& Count); // (Final | Native | Static | Public | BlueprintCallable)
};

