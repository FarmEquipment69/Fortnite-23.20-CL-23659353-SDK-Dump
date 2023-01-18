// Class /Script/SaveTheWorldUI.FortCollectionBookProgressWidget
// Size: 0x2f0
class UFortCollectionBookProgressWidget : public UCommonUserWidget
{
	int CachedXPLevel; // 0x290 (0x4)
	float CachedXPCompletionPct; // 0x294 (0x4)
	struct TWeakObjectPtr<class UClass> RewardDetailsModalWidgetClass; // 0x298 (0x28)
	class UFortCollectionBookProgressionRewardsPreviewWidget* ProgressionRewardsPreviewWidget; // 0x2c0 (0x8)
	class UCommonTextBlock* XPTextWidget; // 0x2c8 (0x8)
	class UCommonNumericTextBlock* LevelTextWidget; // 0x2d0 (0x8)
	class UCommonButtonLegacy* DetailsButtonWidget; // 0x2d8 (0x8)
	class UFortCollectionBookPageDetailsWidget* PageDetailsWidget; // 0x2e0 (0x8)
	class UFortCollectionBookProgressionRewardsModalWidget* DetailsModalWidget; // 0x2e8 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnSlottedItemOperationComplete (Underlying native function: OnSlottedItemOperationComplete 0x7571c40)
	void OnSlottedItemOperationComplete(class UFortAccountItem*& ItemSlotted, struct FName& SlotId); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnInventoryUpdated (Underlying native function: OnInventoryUpdated 0x7570c5c)
	void OnInventoryUpdated(); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPreviewXPChange (Underlying native function: OnCollectionBookPreviewXPChange 0x7570988)
	void OnCollectionBookPreviewXPChange(float& PreviewCompletionPct); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPageSelected (Underlying native function: OnCollectionBookPageSelected 0x7570904)
	void OnCollectionBookPageSelected(class UFortCollectionBookPage*& SelectedPage); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelProgressionChanged (Underlying native function: OnCollectionBookLevelProgressionChanged 0x75706f0)
	void OnCollectionBookLevelProgressionChanged(float& NewCompletionPct); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelChanged (Underlying native function: OnCollectionBookLevelChanged 0x757066c)
	void OnCollectionBookLevelChanged(int& NewLevel); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.HandleDetailsModalWidgetDeactivated (Underlying native function: HandleDetailsModalWidgetDeactivated 0x756efc0)
	void HandleDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy*& DeactivatedPanel); // (Final | Native | Private)
};

