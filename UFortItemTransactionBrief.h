// Class /Script/FortniteConversationUI.FortItemTransactionBrief
// Size: 0x2a8
class UFortItemTransactionBrief : public UFortConversationOptionBrief
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class UFortTransactionStrip* TransactionStripMain; // 0x298 (0x8)
	class UFortItem* DisplayItem; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/FortniteConversationUI.FortItemTransactionBrief.OnTransactionInfoReceived (Has no native function)
	void OnTransactionInfoReceived(class UFortItem*& Item); // (Event | Protected | BlueprintEvent)
};

