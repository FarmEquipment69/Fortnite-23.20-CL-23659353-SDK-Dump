// Class /Script/FortniteUI.FortSettingsListEntrySetting_KeyboardInput
// Size: 0x310
class UFortSettingsListEntrySetting_KeyboardInput : public UFortSettingsListEntry_Setting
{
	class UFortSettingKeyboardInputBase* KeyboardInputSetting; // 0x2d0 (0x8)
	class UClass* PressAnyKeyPanelClass; // 0x2d8 (0x8)
	class UClass* PreviewActionUnbindClass; // 0x2e0 (0x8)
	unsigned char unreflected_2e8[0x10]; // 0x2e8 (0x10) 
	class UCommonButtonLegacy* ButtonPrimaryKey; // 0x2f8 (0x8)
	class UCommonButtonLegacy* ButtonSecondaryKey; // 0x300 (0x8)
	class UCommonButtonLegacy* ButtonClear; // 0x308 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSettingsListEntrySetting_KeyboardInput.OnUpdateKeyText (Has no native function)
	void OnUpdateKeyText(struct FText& PrimaryKeyText, struct FText& SecondaryKeyText); // (Event | Protected | HasOutParms | BlueprintEvent)
};

