// Class /Script/FortniteConversationUI.FortTransactionStrip
// Size: 0x288
class UFortTransactionStrip : public UUserWidget
{
	class UCommonTextBlock* TextCostDescription; // 0x268 (0x8)
	class UFortWorldItemDefinition* ResourceCurrency; // 0x270 (0x8)
	unsigned char padding_278[0x10]; // 0x278 (0x10)

	/* Functions */

	// Function /Script/FortniteConversationUI.FortTransactionStrip.OnTransactionInfoReceived (Has no native function)
	void OnTransactionInfoReceived(struct FFortServiceTransactionInfo& TransactionInfo); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortTransactionStrip.OnSetTransactionCostVisibility (Has no native function)
	void OnSetTransactionCostVisibility(bool& bVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortTransactionStrip.HandleOnItemCountChanged (Underlying native function: HandleOnItemCountChanged 0x717220c)
	void HandleOnItemCountChanged(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, class UFortItemDefinition*& Definition, int& Delta); // (Final | Native | Private)
};

