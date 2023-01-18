// ScriptStruct /Script/CommonConversationRuntime.ConversationEntryList
// Size: 0x18
struct FConversationEntryList
{
	struct FGameplayTag EntryTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FGuid> DestinationList; // 0x8 (0x10)
};

