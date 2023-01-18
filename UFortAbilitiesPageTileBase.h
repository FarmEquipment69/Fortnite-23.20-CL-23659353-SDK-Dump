// Class /Script/FortniteUI.FortAbilitiesPageTileBase
// Size: 0x1460
class UFortAbilitiesPageTileBase : public UCommonButtonLegacy
{
	class UCommonWidgetSwitcherLegacy* SwitcherAbilityBindingSwitcher; // 0x1430 (0x8)
	class UFortKeybindWidget* KeybindAbilityKeybind; // 0x1438 (0x8)
	class UFortKeybindWidget* KeybindAbilityKeybindCombo1; // 0x1440 (0x8)
	class UFortKeybindWidget* KeybindAbilityKeybindCombo2; // 0x1448 (0x8)
	int QuickBarSlot; // 0x1450 (0x4)
	unsigned char padding_1454[0xc]; // 0x1454 (0xc)

	/* Functions */

	// Function /Script/FortniteUI.FortAbilitiesPageTileBase.UpdateGamepadKeyBindingText (Underlying native function: UpdateGamepadKeyBindingText 0xa6b660c)
	void UpdateGamepadKeyBindingText(); // (Final | Native | Public | BlueprintCallable)
};

