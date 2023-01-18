// Class /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal
// Size: 0x570
class UFortCollectionBookSlotConfirmationModal : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x8]; // 0x518 (0x8) 
	class UFortAccountItem* CurrentlySlottedItem; // 0x520 (0x8)
	class UFortAccountItem* NewItemToSlot; // 0x528 (0x8)
	class UCommonTextBlock* TextSlottingDescription; // 0x530 (0x8)
	class UFortMultiSizeItemCard* ItemCardNewlySlottedItem; // 0x538 (0x8)
	class UFortCollectionBookRecycleSlotResultsWidget* RecycleSlotResultsWidget; // 0x540 (0x8)
	class UCommonButtonLegacy* ButtonSlotItem; // 0x548 (0x8)
	class UCommonButtonLegacy* ButtonBack; // 0x550 (0x8)
	unsigned char padding_558[0x18]; // 0x558 (0x18)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.OnSlotItemRequestedComplete (Has no native function)
	void OnSlotItemRequestedComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.OnSlotItemRequested (Has no native function)
	void OnSlotItemRequested(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.HandleSlotItemComplete (Underlying native function: HandleSlotItemComplete 0x756f9e0)
	void HandleSlotItemComplete(class UFortAccountItem*& SlottedItem, struct FName& SlotId); // (Final | Native | Private)
};

