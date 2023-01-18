// Class /Script/FortniteUI.FortSettingsListEntrySetting_ControllerButton
// Size: 0x2f0
class UFortSettingsListEntrySetting_ControllerButton : public UFortSettingsListEntry_Setting
{
	class UClass* BindingMenuClass; // 0x2d0 (0x8)
	class UFortSettingControllerInput* ControllerInputSetting; // 0x2d8 (0x8)
	class UFortKeybindWidget* KeyControllerButton; // 0x2e0 (0x8)
	class UMenuAnchor* MenuAnchorBindableActions; // 0x2e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSettingsListEntrySetting_ControllerButton.OnSettingAssigned (Has no native function)
	void OnSettingAssigned(struct FText& ActionText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortSettingsListEntrySetting_ControllerButton.HandleActionButtonClicked (Underlying native function: HandleActionButtonClicked 0xa8c3ce4)
	void HandleActionButtonClicked(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsListEntrySetting_ControllerButton.GetPopupMenu (Underlying native function: GetPopupMenu 0xa8c3cc0)
	class UUserWidget* GetPopupMenu(); // (Final | Native | Protected)
};

