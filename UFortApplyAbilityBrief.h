// Class /Script/FortniteConversationUI.FortApplyAbilityBrief
// Size: 0x2c8
class UFortApplyAbilityBrief : public UFortItemTransactionBrief
{
	struct FText PurchaseServiceText; // 0x2a8 (0x18)
	class UCommonRichTextBlock* TextDisplay; // 0x2c0 (0x8)

	/* Functions */

	// Function /Script/FortniteConversationUI.FortApplyAbilityBrief.OnUnableToPurchase (Has no native function)
	void OnUnableToPurchase(enum EPreventAbilityUseReason& Reason); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortApplyAbilityBrief.OnAbleToPurchase (Has no native function)
	void OnAbleToPurchase(); // (Event | Protected | BlueprintEvent)
};

