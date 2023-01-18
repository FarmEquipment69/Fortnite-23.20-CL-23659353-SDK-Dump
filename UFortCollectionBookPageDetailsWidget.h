// Class /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget
// Size: 0x300
class UFortCollectionBookPageDetailsWidget : public UCommonUserWidget
{
	class UCommonTextBlock* PageCompletionText; // 0x290 (0x8)
	class UFortMaterialProgressBar* ProgressBar; // 0x298 (0x8)
	class UFortCollectionBookPageCompletionRewardWidget* PageRewardWidget; // 0x2a0 (0x8)
	class UCommonButtonLegacy* RewardDetailsButton; // 0x2a8 (0x8)
	class UFortCollectionBookPage* DetailsPage; // 0x2b0 (0x8)
	struct TWeakObjectPtr<class UClass> RewardDetailsModalWidgetClass; // 0x2b8 (0x28)
	struct FText ModalTitle; // 0x2e0 (0x18)
	class UFortCollectionBookRewardModalWidget* RewardDetailsModalWidget; // 0x2f8 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnUnslotItemComplete (Underlying native function: OnUnslotItemComplete 0x7571ee8)
	void OnUnslotItemComplete(class UFortAccountItem*& SlottedItem, class UFortAccountItem*& OldItem, struct FName& SlotId); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnSlotItemComplete (Underlying native function: OnSlotItemComplete 0x7571ac4)
	void OnSlotItemComplete(class UFortAccountItem*& SlottedItem, struct FName& SlotId); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnPageProgressionUpdated (Underlying native function: OnPageProgressionUpdated 0x757103c)
	void OnPageProgressionUpdated(int& TotalFilledSlots, int& TotalSlots, enum EFortCollectionBookState& State); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnDetailsPageChanged (Underlying native function: OnDetailsPageChanged 0x735cf0c)
	void OnDetailsPageChanged(class UFortCollectionBookPage*& InNewDetailsPage); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.HandleRewardDetailsModalWidgetDeactivated (Underlying native function: HandleRewardDetailsModalWidgetDeactivated 0x756f8e0)
	void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy*& DeactivatedPanel); // (Final | Native | Private)
};

