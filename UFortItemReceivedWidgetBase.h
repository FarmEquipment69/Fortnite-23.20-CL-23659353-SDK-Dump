// Class /Script/FortniteUI.FortItemReceivedWidgetBase
// Size: 0x6a0
class UFortItemReceivedWidgetBase : public UFortActivatablePanelWithItemPreview
{
	struct TArray<struct FFortReceivedItemLootInfo> ItemDefs; // 0x660 (0x10)
	class UFortGiftBoxItem* GiftBoxItem; // 0x670 (0x8)
	struct FString FromUsername; // 0x678 (0x10)
	class UHorizontalBox* HeaderContainer; // 0x688 (0x8)
	class UScrollBox* GiftScrollBox; // 0x690 (0x8)
	class UClass* ItemCardClass; // 0x698 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemReceivedWidgetBase.ShowGiftBox (Has no native function)
	void ShowGiftBox(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemReceivedWidgetBase.SetGiftBoxItem (Underlying native function: SetGiftBoxItem 0xa7e80c4)
	void SetGiftBoxItem(class UFortGiftBoxItem*& GiftBoxItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemReceivedWidgetBase.SetAlignmentOnSlots (Underlying native function: SetAlignmentOnSlots 0xa7e79a0)
	void SetAlignmentOnSlots(class UScrollBox*& Widget); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemReceivedWidgetBase.SetAlignmentOnSlot (Underlying native function: SetAlignmentOnSlot 0xa7e78c0)
	void SetAlignmentOnSlot(class UScrollBox*& Widget, int& Index); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemReceivedWidgetBase.OnGiftBoxItemSetInternal (Underlying native function: OnGiftBoxItemSetInternal 0xa7e7514)
	void OnGiftBoxItemSetInternal(bool& bFromSelf); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortItemReceivedWidgetBase.OnGiftBoxItemSet (Has no native function)
	void OnGiftBoxItemSet(bool& bFromSelf); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemReceivedWidgetBase.GetTemporaryInstance (Underlying native function: GetTemporaryInstance 0xa7e5cb8)
	class UFortItem* GetTemporaryInstance(struct FFortReceivedItemLootInfo& ItemReference); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemReceivedWidgetBase.ClosingGiftbox (Underlying native function: ClosingGiftbox 0xa7e4994)
	void ClosingGiftbox(); // (Final | Native | Public | BlueprintCallable)
};

