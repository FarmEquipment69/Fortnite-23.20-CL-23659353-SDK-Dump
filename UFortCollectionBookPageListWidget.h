// Class /Script/SaveTheWorldUI.FortCollectionBookPageListWidget
// Size: 0x1460
class UFortCollectionBookPageListWidget : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UCommonTextBlock* PageNameWidget; // 0x1438 (0x8)
	class UCommonNumericTextBlock* AvailableSlotsWidget; // 0x1440 (0x8)
	class UCommonTextBlock* PageCompletionWidget; // 0x1448 (0x8)
	struct TWeakObjectPtr<class UObject> AssociatedPageOrCategory; // 0x1450 (0x8)
	bool bIsExpanded; // 0x1458 (0x1)
	unsigned char padding_1459[0x7]; // 0x1459 (0x7)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.SetupAsPage (Has no native function)
	void SetupAsPage(class UFortCollectionBookPage*& Page); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.SetupAsCategory (Has no native function)
	void SetupAsCategory(class UFortCollectionBookCategory*& category); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.OnSlottedItemOperationComplete (Underlying native function: OnSlottedItemOperationComplete 0x7571b7c)
	void OnSlottedItemOperationComplete(class UFortAccountItem*& SlottedItem, struct FName& SlotId); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.OnPageDetailsUpdated (Has no native function)
	void OnPageDetailsUpdated(int& AvailableSlots, int& FilledSlots, int& TotalSlots, enum EFortCollectionBookState& State); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.OnCategoryDetailsUpdated (Has no native function)
	void OnCategoryDetailsUpdated(int& AvailableSlots, int& FilledSlots, int& TotalSlots); // (Event | Protected | BlueprintEvent)
};

