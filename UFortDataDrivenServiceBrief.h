// Class /Script/FortniteConversationUI.FortDataDrivenServiceBrief
// Size: 0x308
class UFortDataDrivenServiceBrief : public UFortConversationOptionBrief
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class UCommonTextBlock* TextTitleBar; // 0x298 (0x8)
	class UCommonRichTextBlock* RichTextDescription; // 0x2a0 (0x8)
	class UCommonTextBlock* TextStockRemaining; // 0x2a8 (0x8)
	class UFortTransactionStrip* TransactionStripMain; // 0x2b0 (0x8)
	struct TMap<struct FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs; // 0x2b8 (0x50)

	/* Functions */

	// Function /Script/FortniteConversationUI.FortDataDrivenServiceBrief.OnUnableToPurchase (Has no native function)
	void OnUnableToPurchase(struct FText& Reason); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortDataDrivenServiceBrief.OnTransactionInfoReceived (Has no native function)
	void OnTransactionInfoReceived(class UFortItem*& Item); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortDataDrivenServiceBrief.OnAbleToPurchase (Has no native function)
	void OnAbleToPurchase(); // (Event | Protected | BlueprintEvent)
};

