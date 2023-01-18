// Class /Script/CommonUILegacy.CommonWidgetSwitcherLegacy
// Size: 0x210
class UCommonWidgetSwitcherLegacy : public UCommonAnimatedSwitcher
{
	struct FMulticastInlineDelegate OnActiveWidgetDeactivated; // 0x1e8 (0x10)
	struct FMulticastInlineDelegate OnActiveWidgetChanged; // 0x1f8 (0x10)
	bool bWidgetActivationEnabled; // 0x208 (0x1)
	bool bOutroPanelBelow; // 0x209 (0x1)
	unsigned char padding_20a[0x6]; // 0x20a (0x6)

	/* Functions */

	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidgetIndex_Advanced (Underlying native function: SetActiveWidgetIndex_Advanced 0x7182ba8)
	void SetActiveWidgetIndexAdvanced(int& Index, bool& AttemptActivationChange); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidget_Advanced (Underlying native function: SetActiveWidget_Advanced 0x7182c6c)
	void SetActiveWidgetAdvanced(class UWidget*& Widget, bool& AttemptActivationChange); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.HandleActiveWidgetDeactivated (Underlying native function: HandleActiveWidgetDeactivated 0x7181ac8)
	void HandleActiveWidgetDeactivated(class UCommonActivatablePanelLegacy*& DeactivatedPanel); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.DeactivateWidget (Underlying native function: DeactivateWidget 0x2793f5c)
	void DeactivateWidget(); // (Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.ActivateWidget (Underlying native function: ActivateWidget 0x7180ddc)
	void ActivateWidget(); // (Native | Public | BlueprintCallable)
};

