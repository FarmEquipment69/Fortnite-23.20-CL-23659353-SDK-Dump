// Class /Script/FortniteUI.FortSettingsListEntrySetting_Action
// Size: 0x2e0
class UFortSettingsListEntrySetting_Action : public UFortSettingsListEntry_Setting
{
	class UFortSettingAction* ActionSetting; // 0x2d0 (0x8)
	class UCommonButtonLegacy* ButtonAction; // 0x2d8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSettingsListEntrySetting_Action.OnSettingAssigned (Has no native function)
	void OnSettingAssigned(struct FText& ActionText, bool& bShowKeybindWidget); // (Event | Protected | HasOutParms | BlueprintEvent)
};

