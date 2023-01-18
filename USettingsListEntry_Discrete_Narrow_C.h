// WidgetBlueprintGeneratedClass /Game/Athena/Settings/CustomEntries/SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C
// Size: 0x330
class USettingsListEntry_Discrete_Narrow_C : public UFortSettingsListEntrySetting_Discrete
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x300 (0x8)
	class UWidgetAnimation* OnHover; // 0x308 (0x8)
	class UIconTextButton_C* ButtonFirstOption; // 0x310 (0x8)
	class UIconTextButton_C* ButtonSecondOption; // 0x318 (0x8)
	class UWidgetSwitcher* OptionsSets; // 0x320 (0x8)
	class UHorizontalBox* SeveralOptions; // 0x328 (0x8)

	/* Functions */

	// Function /Game/Athena/Settings/CustomEntries/SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.GetPrimaryGamepadFocusWidget (Has no native function)
	class UWidget* GetPrimaryGamepadFocusWidget(); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Settings/CustomEntries/SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Settings/CustomEntries/SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Settings/CustomEntries/SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.ExecuteUbergraph_SettingsListEntry_Discrete_Narrow (Has no native function)
	void ExecuteUbergraphSettingsListEntryDiscreteNarrow(int& EntryPoint, class USettingsRotator_Narrow_C*& K2NodeDynamicCastAsSettingsRotatorNarrow, bool& K2NodeDynamicCastbSuccess, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, struct FPointerEvent& K2NodeEventMouseEvent, bool& CallFuncIsUsingTouchReturnValue, class USettingsRotator_Narrow_C*& K2NodeDynamicCastAsSettingsRotatorNarrow1, bool& K2NodeDynamicCastbSuccess1); // (Final | 0x00008000 | HasDefaults)
};

