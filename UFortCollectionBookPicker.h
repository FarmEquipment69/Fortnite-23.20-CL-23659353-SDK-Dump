// Class /Script/SaveTheWorldUI.FortCollectionBookPicker
// Size: 0x3f8
class UFortCollectionBookPicker : public UFortItemPickerBase
{
	unsigned char unreflected_3d0[0x8]; // 0x3d0 (0x8) 
	class UClass* MulchConfirmationModalClass; // 0x3d8 (0x8)
	unsigned char unreflected_3e0[0x8]; // 0x3e0 (0x8) 
	class UFortAccountItem* CurrentSlottedItem; // 0x3e8 (0x8)
	class UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x3f0 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.ShowMulchDialogForItem (Underlying native function: ShowMulchDialogForItem 0x7573f68)
	void ShowMulchDialogForItem(class UFortItem*& ItemToMulch); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.ShowMulchConfirmationModal (Underlying native function: ShowMulchConfirmationModal 0x7573f4c)
	void ShowMulchConfirmationModal(); // (Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.OnCollectComplete (Has no native function)
	void OnCollectComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.NotifyPanelDeactivated (Underlying native function: NotifyPanelDeactivated 0x7570538)
	void NotifyPanelDeactivated(); // (Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.NotifyPanelActivated (Underlying native function: NotifyPanelActivated 0x757051c)
	void NotifyPanelActivated(); // (Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.HideMulchConfirmationModal (Underlying native function: HideMulchConfirmationModal 0x756ff20)
	void HideMulchConfirmationModal(); // (Native | Protected | BlueprintCallable)
};

