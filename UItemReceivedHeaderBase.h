// Class /Script/FortniteUI.ItemReceivedHeaderBase
// Size: 0x280
class UItemReceivedHeaderBase : public UUserWidget
{
	class UFortGiftBoxItem* GiftBoxItem; // 0x268 (0x8)
	struct FString FromUsername; // 0x270 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.ItemReceivedHeaderBase.SetBlueprintGiftBoxItem (Has no native function)
	void SetBlueprintGiftBoxItem(class UFortGiftBoxItem*& GiftBox, struct FString& FromUser, struct TArray<struct FFortReceivedItemLootInfo>& ItemDefs, bool& bSelfGift); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.ItemReceivedHeaderBase.InitFromGiftBoxItem_BP (Has no native function)
	void InitFromGiftBoxItemBP(); // (Event | Public | BlueprintCallable | BlueprintEvent)
};

