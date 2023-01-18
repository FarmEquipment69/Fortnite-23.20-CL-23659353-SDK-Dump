// WidgetBlueprintGeneratedClass /Game/Athena/Settings/SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C
// Size: 0x320
class USettingsListEntry_KeyboardInput_C : public UFortSettingsListEntrySetting_KeyboardInput
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x310 (0x8)
	class UWidgetAnimation* OnHover; // 0x318 (0x8)

	/* Functions */

	// Function /Game/Athena/Settings/SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnUpdateKeyText (Has no native function)
	void OnUpdateKeyText(struct FText& PrimaryKeyText, struct FText& SecondaryKeyText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Settings/SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Settings/SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Settings/SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.ExecuteUbergraph_SettingsListEntry_KeyboardInput (Has no native function)
	void ExecuteUbergraphSettingsListEntryKeyboardInput(int& EntryPoint, bool& CallFuncIsUsingTouchReturnValue, struct FText& K2NodeEventPrimaryKeyText, struct FText& K2NodeEventSecondaryKeyText, class UScrollingTextButton_C*& K2NodeDynamicCastAsScrollingTextButton, bool& K2NodeDynamicCastbSuccess, class UScrollingTextButton_C*& K2NodeDynamicCastAsScrollingTextButton1, bool& K2NodeDynamicCastbSuccess1, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, struct FPointerEvent& K2NodeEventMouseEvent); // (Final | 0x00008000 | HasDefaults)
};

