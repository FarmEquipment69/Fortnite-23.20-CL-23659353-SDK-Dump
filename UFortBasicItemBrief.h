// Class /Script/FortniteConversationUI.FortBasicItemBrief
// Size: 0x300
class UFortBasicItemBrief : public UFortConversationOptionBrief
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class UCommonTextBlock* TextTitleBar; // 0x298 (0x8)
	class UFortTransactionStrip* TransactionStripMain; // 0x2a0 (0x8)
	class UFortItem* DisplayItem; // 0x2a8 (0x8)
	struct TMap<struct FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs; // 0x2b0 (0x50)

	/* Functions */

	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnUpdateDescriptionText (Has no native function)
	void OnUpdateDescriptionText(struct FText& DescriptionText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnUnableToUse (Has no native function)
	void OnUnableToUse(struct FText& Reason); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnItemInfoReceived (Has no native function)
	void OnItemInfoReceived(class UFortItem*& Item, int& StackSize); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnAbleToUse (Has no native function)
	void OnAbleToUse(bool& bShowWarningMessage); // (Event | Protected | BlueprintEvent)
};

