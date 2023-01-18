// ScriptStruct /Script/FortniteGame.FortObjectiveConversationTriggerInfo
// Size: 0x18
struct FFortObjectiveConversationTriggerInfo
{
	enum EObjectiveConversationTriggerType TriggerType; // 0x0 (0x1)
	unsigned char unreflected_1[0x1]; // 0x1 (0x1) 
	uint16_t StatTarget; // 0x2 (0x2)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FFortObjectiveConversation> ConversationList; // 0x8 (0x10)
};

