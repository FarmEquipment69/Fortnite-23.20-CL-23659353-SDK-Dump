// WidgetBlueprintGeneratedClass /Game/Athena/Settings/SettingsListEntry_Action.SettingsListEntry_Action_C
// Size: 0x2f0
class USettingsListEntry_Action_C : public UFortSettingsListEntrySetting_Action
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2e0 (0x8)
	class UWidgetAnimation* OnHover; // 0x2e8 (0x8)

	/* Functions */

	// Function /Game/Athena/Settings/SettingsListEntry_Action.SettingsListEntry_Action_C.GetPrimaryGamepadFocusWidget (Has no native function)
	class UWidget* GetPrimaryGamepadFocusWidget(); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Settings/SettingsListEntry_Action.SettingsListEntry_Action_C.OnSettingAssigned (Has no native function)
	void OnSettingAssigned(struct FText& ActionText, bool& bShowKeybindWidget); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Settings/SettingsListEntry_Action.SettingsListEntry_Action_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Settings/SettingsListEntry_Action.SettingsListEntry_Action_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Settings/SettingsListEntry_Action.SettingsListEntry_Action_C.ExecuteUbergraph_SettingsListEntry_Action (Has no native function)
	void ExecuteUbergraphSettingsListEntryAction(int& EntryPoint, class UIconTextButton_C*& K2NodeDynamicCastAsIconTextButton, bool& K2NodeDynamicCastbSuccess, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, struct FPointerEvent& K2NodeEventMouseEvent, bool& CallFuncIsUsingTouchReturnValue, struct FText& K2NodeEventActionText, bool& K2NodeEventbShowKeybindWidget, bool& CallFuncNotPreBoolReturnValue); // (Final | 0x00008000 | HasDefaults)
};

