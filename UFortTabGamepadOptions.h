// Class /Script/FortniteUI.FortTabGamepadOptions
// Size: 0x408
class UFortTabGamepadOptions : public UFortOptionsTab
{
	class UCommonListView* InputCommonListView; // 0x3e0 (0x8)
	class UCommonTextBlock* TooltipDisplay; // 0x3e8 (0x8)
	class UClass* InputCategoryWidgetClass; // 0x3f0 (0x8)
	class UCommonButtonLegacy* ButtonAdvancedSettingsToggle; // 0x3f8 (0x8)
	unsigned char padding_400[0x8]; // 0x400 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortTabGamepadOptions.ToggleAdvancedSettingsDisplay (Underlying native function: ToggleAdvancedSettingsDisplay 0xa79ad70)
	void ToggleAdvancedSettingsDisplay(bool& bShowAdvancedSettings); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortTabGamepadOptions.ResetSettingsToDefault (Underlying native function: ResetSettingsToDefault 0xa79a928)
	void ResetSettingsToDefault(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTabGamepadOptions.IsAdvancedSettingsEnabled (Underlying native function: IsAdvancedSettingsEnabled 0xa799c84)
	bool IsAdvancedSettingsEnabled(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortTabGamepadOptions.GetListWidget (Underlying native function: GetListWidget 0xa798d34)
	class UWidget* GetListWidget(class UObject*& Item); // (Final | Native | Protected | BlueprintCallable)
};

