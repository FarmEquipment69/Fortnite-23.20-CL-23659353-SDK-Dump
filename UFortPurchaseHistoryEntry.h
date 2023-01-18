// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry
// Size: 0x14b0
class UFortPurchaseHistoryEntry : public UFortHoldableButton
{
	class UClass* ItemCardClass; // 0x1480 (0x8)
	float CardWidthOverride; // 0x1488 (0x4)
	unsigned char unreflected_148c[0x4]; // 0x148c (0x4) 
	class UCommonTextBlock* TextName; // 0x1490 (0x8)
	struct TArray<struct FString> LootEntryItemTypesToExclude; // 0x1498 (0x10)
	unsigned char padding_14a8[0x8]; // 0x14a8 (0x8)

	/* Functions */

	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry.UpdateItemList (Has no native function)
	void UpdateItemList(struct TArray<class UFortCosmeticItemCard*>& ItemCards); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetupItemCard (Has no native function)
	void SetupItemCard(class UFortCosmeticItemCard*& ItemCard, class UFortItem*& Item); // (Event | Protected | BlueprintEvent)

	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetPurchaseText (Has no native function)
	void SetPurchaseText(struct FText& PurchaseDateText, struct FText& RefundDateText, bool& bHasBeenRefunded, enum EFortPurchaseHistoryRefundType& RefundType); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry.OnSetHistory (Has no native function)
	void OnSetHistory(bool& bHasBeenRefunded, bool& bIsTokenlessRefund, bool& bPlayerHasTokens, bool& bNonRefundable); // (Event | Protected | BlueprintEvent)
};

