// Class /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW
// Size: 0x2c0
class UFortItemManagementModeDetailsPanel_STW : public UCommonUserWidget
{
	class UCommonWidgetSwitcherLegacy* ModeWidgetSwitcher; // 0x290 (0x8)
	class UFortItemDetailsActivatablePanel_STW* DetailsModeItemDetailsPanel; // 0x298 (0x8)
	class UFortItemDetailsActivatablePanel_STW* ComparisonModeItemDetailsPanel; // 0x2a0 (0x8)
	class UFortItemDetailsActivatablePanel_STW* MulchModeItemDetailsPanel; // 0x2a8 (0x8)
	struct TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen; // 0x2b0 (0x8)
	unsigned char padding_2b8[0x8]; // 0x2b8 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.HandleHostSet (Has no native function)
	void HandleHostSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.HandleDifferentItemManagementModeSetBP (Has no native function)
	void HandleDifferentItemManagementModeSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.GetItemManagementMode (Underlying native function: GetItemManagementMode 0x7596d9c)
	enum EFortItemManagementMode GetItemManagementMode(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

