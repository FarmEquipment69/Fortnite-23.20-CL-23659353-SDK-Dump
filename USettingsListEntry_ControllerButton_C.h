// WidgetBlueprintGeneratedClass /Game/Athena/Settings/SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C
// Size: 0x300
class USettingsListEntry_ControllerButton_C : public UFortSettingsListEntrySetting_ControllerButton
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2f0 (0x8)
	class USimpleCommonButton_C* ButtonControllerAction; // 0x2f8 (0x8)

	/* Functions */

	// Function /Game/Athena/Settings/SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.OnSettingAssigned (Has no native function)
	void OnSettingAssigned(struct FText& ActionText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Settings/SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtButtonControllerActionK2NodeComponentBoundEvent0CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/Athena/Settings/SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.ExecuteUbergraph_SettingsListEntry_ControllerButton (Has no native function)
	void ExecuteUbergraphSettingsListEntryControllerButton(int& EntryPoint, struct FText& K2NodeEventActionText, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton); // (Final | 0x00008000 | HasDefaults)
};

