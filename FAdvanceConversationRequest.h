// ScriptStruct /Script/CommonConversationRuntime.AdvanceConversationRequest
// Size: 0x30
struct FAdvanceConversationRequest
{
	struct FConversationChoiceReference Choice; // 0x0 (0x20)
	struct TArray<struct FConversationNodeParameterPair> UserParameters; // 0x20 (0x10)
};

