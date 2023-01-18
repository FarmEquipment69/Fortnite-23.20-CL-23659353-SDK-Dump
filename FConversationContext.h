// ScriptStruct /Script/CommonConversationRuntime.ConversationContext
// Size: 0x38
struct FConversationContext
{
	class UConversationRegistry* ConversationRegistry; // 0x0 (0x8)
	class UConversationInstance* ActiveConversation; // 0x8 (0x8)
	class UConversationParticipantComponent* ClientParticipant; // 0x10 (0x8)
	class UConversationTaskNode* TaskBeingConsidered; // 0x18 (0x8)
	struct TArray<struct FConversationNodeHandle> ReturnScopeStack; // 0x20 (0x10)
	bool bServer; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

