// ScriptStruct /Script/CommonConversationRuntime.ClientConversationMessage
// Size: 0x48
struct FClientConversationMessage
{
	struct FGameplayTag SpeakerID; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FText ParticipantDisplayName; // 0x8 (0x18)
	struct FText Text; // 0x20 (0x18)
	struct TArray<struct FConversationNodeParameterPair> MetadataParameters; // 0x38 (0x10)
};

