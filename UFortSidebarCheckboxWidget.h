// Class /Script/FortniteUI.FortSidebarCheckboxWidget
// Size: 0x2b8
class UFortSidebarCheckboxWidget : public UCommonUserWidget
{
	class UButton* CheckButton; // 0x290 (0x8)
	class UWidgetSwitcher* SwitcherCheckBox; // 0x298 (0x8)
	unsigned char padding_2a0[0x18]; // 0x2a0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortSidebarCheckboxWidget.HandleCheckboxClicked (Underlying native function: HandleCheckboxClicked 0xa759b3c)
	void HandleCheckboxClicked(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortSidebarCheckboxWidget.BP_ToggleCheckbox (Has no native function)
	void BPToggleCheckbox(); // (Event | Protected | BlueprintEvent)
};

