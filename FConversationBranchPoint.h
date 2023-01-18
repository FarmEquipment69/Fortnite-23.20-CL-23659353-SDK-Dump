// ScriptStruct /Script/CommonConversationRuntime.ConversationBranchPoint
// Size: 0x80
struct FConversationBranchPoint
{
	struct TArray<struct FConversationNodeHandle> ReturnScopeStack; // 0x0 (0x10)
	struct FClientConversationOptionEntry ClientChoice; // 0x10 (0x70)
};

