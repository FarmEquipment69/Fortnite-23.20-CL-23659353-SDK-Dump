// ScriptStruct /Script/FortniteGame.FortObjectiveAvailableConversationTriggerInfo
// Size: 0x18
struct FFortObjectiveAvailableConversationTriggerInfo
{
	uint16_t StatTarget; // 0x0 (0x2)
	uint16_t CurrentCounter; // 0x2 (0x2)
	bool bCounterWraps; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TArray<struct FFortObjectiveAvailableConversation> ConversationList; // 0x8 (0x10)
};

