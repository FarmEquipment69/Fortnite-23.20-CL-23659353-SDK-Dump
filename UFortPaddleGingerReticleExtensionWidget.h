// Class /Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget
// Size: 0x340
class UFortPaddleGingerReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{
	struct FEventMessageTag PropIndexChangedTag; // 0x2e0 (0x4)
	struct FEventMessageTag PropActivatedTag; // 0x2e4 (0x4)
	class UFortKeybindWidget* KeybindActivateAction; // 0x2e8 (0x8)
	class UFortKeybindWidget* KeybindCycleCategoryAction; // 0x2f0 (0x8)
	class UFortKeybindWidget* KeybindCyclePropAction; // 0x2f8 (0x8)
	unsigned char padding_300[0x40]; // 0x300 (0x40)

	/* Functions */

	// Function /Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropIndexChanged (Has no native function)
	void OnPropIndexChanged(struct FText& CategoryText, int& PropIndex, int& MaxPropCount, int& CategoryIndex, int& MaxCategoryCount); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropActivationChanged (Has no native function)
	void OnPropActivationChanged(bool& Activated); // (Event | Protected | BlueprintEvent)
};

