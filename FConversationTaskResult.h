// ScriptStruct /Script/CommonConversationRuntime.ConversationTaskResult
// Size: 0x80
struct FConversationTaskResult
{
	enum EConversationTaskResultType Type; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FAdvanceConversationRequest AdvanceToChoice; // 0x8 (0x30)
	struct FClientConversationMessage message; // 0x38 (0x48)
};

