// ScriptStruct /Script/CommonConversationRuntime.ClientConversationOptionEntry
// Size: 0x70
struct FClientConversationOptionEntry
{
	struct FText ChoiceText; // 0x0 (0x18)
	struct FGameplayTagContainer ChoiceTags; // 0x18 (0x20)
	enum EConversationChoiceType ChoiceType; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FConversationChoiceReference ChoiceReference; // 0x40 (0x20)
	struct TArray<struct FConversationNodeParameterPair> ExtraData; // 0x60 (0x10)
};

