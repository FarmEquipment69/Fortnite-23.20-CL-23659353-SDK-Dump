// Class /Script/CommonConversationRuntime.ConversationChoiceNode
// Size: 0x90
class UConversationChoiceNode : public UConversationSubNode
{
	struct FText DefaultChoiceDisplayText; // 0x58 (0x18)
	struct FGameplayTagContainer ChoiceTags; // 0x70 (0x20)

	/* Functions */

	// Function /Script/CommonConversationRuntime.ConversationChoiceNode.FillChoice (Underlying native function: FillChoice 0x70e0760)
	void FillChoice(struct FConversationContext& Context, struct FClientConversationOptionEntry& ChoiceEntry); // (Native | Event | Protected | HasOutParms | BlueprintEvent | Const)
};

