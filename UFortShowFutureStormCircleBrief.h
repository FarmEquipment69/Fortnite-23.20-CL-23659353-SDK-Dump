// Class /Script/FortniteConversationUI.FortShowFutureStormCircleBrief
// Size: 0x2c8
class UFortShowFutureStormCircleBrief : public UFortItemTransactionBrief
{
	struct FText PurchaseServiceText; // 0x2a8 (0x18)
	class UCommonRichTextBlock* TextDisplay; // 0x2c0 (0x8)

	/* Functions */

	// Function /Script/FortniteConversationUI.FortShowFutureStormCircleBrief.OnUnableToPurchase (Has no native function)
	void OnUnableToPurchase(enum EPreventUseStormCircleServiceReason& Reason); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortShowFutureStormCircleBrief.OnAbleToPurchase (Has no native function)
	void OnAbleToPurchase(); // (Event | Protected | BlueprintEvent)
};

