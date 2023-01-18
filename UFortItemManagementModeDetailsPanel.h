// Class /Script/FortniteUI.FortItemManagementModeDetailsPanel
// Size: 0x2c0
class UFortItemManagementModeDetailsPanel : public UCommonUserWidget
{
	class UCommonWidgetSwitcherLegacy* ModeWidgetSwitcher; // 0x290 (0x8)
	class UFortItemDetailsActivatablePanel* DetailsModeItemDetailsPanel; // 0x298 (0x8)
	class UFortItemDetailsActivatablePanel* ComparisonModeItemDetailsPanel; // 0x2a0 (0x8)
	class UFortItemDetailsActivatablePanel* MulchModeItemDetailsPanel; // 0x2a8 (0x8)
	struct TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen; // 0x2b0 (0x8)
	unsigned char padding_2b8[0x8]; // 0x2b8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemManagementModeDetailsPanel.HandleHostSet (Has no native function)
	void HandleHostSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementModeDetailsPanel.HandleDifferentItemManagementModeSetBP (Has no native function)
	void HandleDifferentItemManagementModeSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementModeDetailsPanel.GetItemManagementMode (Underlying native function: GetItemManagementMode 0xa7e57a0)
	enum EFortItemManagementMode GetItemManagementMode(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

