// Class /Script/UMG.WidgetSwitcher
// Size: 0x178
class UWidgetSwitcher : public UPanelWidget
{
	int ActiveWidgetIndex; // 0x160 (0x4)
	unsigned char padding_164[0x14]; // 0x164 (0x14)

	/* Functions */

	// Function /Script/UMG.WidgetSwitcher.SetActiveWidgetIndex (Underlying native function: SetActiveWidgetIndex 0x17746a8)
	void SetActiveWidgetIndex(int& Index); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetSwitcher.SetActiveWidget (Underlying native function: SetActiveWidget 0x15debcc)
	void SetActiveWidget(class UWidget*& Widget); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetSwitcher.GetWidgetAtIndex (Underlying native function: GetWidgetAtIndex 0x9b0b3e4)
	class UWidget* GetWidgetAtIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetSwitcher.GetNumWidgets (Underlying native function: GetNumWidgets 0x9b0af80)
	int GetNumWidgets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetSwitcher.GetActiveWidgetIndex (Underlying native function: GetActiveWidgetIndex 0x9b0a5e0)
	int GetActiveWidgetIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.WidgetSwitcher.GetActiveWidget (Underlying native function: GetActiveWidget 0x9b0a5a4)
	class UWidget* GetActiveWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

