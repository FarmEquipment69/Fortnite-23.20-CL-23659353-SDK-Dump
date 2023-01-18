// ScriptStruct /Script/FortniteGame.NPCConversationGiftRow
// Size: 0x28
struct FNPCConversationGiftRow : FTableRowBase
{
	struct FGameplayTag NPC; // 0x8 (0x4)
	struct FGameplayTag GiftTag; // 0xc (0x4)
	struct FString AnalyticsEventName; // 0x10 (0x10)
	float Weight; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

