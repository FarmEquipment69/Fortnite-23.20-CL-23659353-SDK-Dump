// ScriptStruct /Script/CommonConversationRuntime.ClientConversationMessagePayload
// Size: 0x78
struct FClientConversationMessagePayload
{
	struct FClientConversationMessage message; // 0x0 (0x48)
	struct FConversationParticipants Participants; // 0x48 (0x10)
	struct FConversationNodeHandle CurrentNode; // 0x58 (0x10)
	struct TArray<struct FClientConversationOptionEntry> Options; // 0x68 (0x10)
};

