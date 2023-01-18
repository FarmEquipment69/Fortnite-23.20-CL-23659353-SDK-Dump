// Class /Script/FortniteUI.FortSettingsListEntryBase
// Size: 0x2c8
class UFortSettingsListEntryBase : public UCommonUserWidget
{
	unsigned char unreflected_290[0x10]; // 0x290 (0x10) 
	class UFortSetting* Setting; // 0x2a0 (0x8)
	unsigned char unreflected_2a8[0x18]; // 0x2a8 (0x18) 
	class UUserWidget* Background; // 0x2c0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSettingsListEntryBase.OnEditableStateChanged (Has no native function)
	void OnEditableStateChanged(bool& bIsEditable); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSettingsListEntryBase.GetPrimaryGamepadFocusWidget (Has no native function)
	class UWidget* GetPrimaryGamepadFocusWidget(); // (Event | Protected | BlueprintEvent)
};

