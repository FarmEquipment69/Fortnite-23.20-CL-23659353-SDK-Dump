// WidgetBlueprintGeneratedClass /Game/Athena/Settings/CustomEntries/SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C
// Size: 0x310
class USettingsListEntry_Scalar_Narrow_C : public UFortSettingsListEntrySetting_Scalar
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2f0 (0x8)
	class UWidgetAnimation* OnHover; // 0x2f8 (0x8)
	class UImage* DefaultValueLayer; // 0x300 (0x8)
	class USimpleMaterialProgressBar_C* Progress; // 0x308 (0x8)

	/* Functions */

	// Function /Game/Athena/Settings/CustomEntries/SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.GetPrimaryGamepadFocusWidget (Has no native function)
	class UWidget* GetPrimaryGamepadFocusWidget(); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Settings/CustomEntries/SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnValueChanged (Has no native function)
	void OnValueChanged(float& Value); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Settings/CustomEntries/SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnDefaultValueChanged (Has no native function)
	void OnDefaultValueChanged(float& DefaultValue); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Settings/CustomEntries/SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Settings/CustomEntries/SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Settings/CustomEntries/SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.ExecuteUbergraph_SettingsListEntry_Scalar_Narrow (Has no native function)
	void ExecuteUbergraphSettingsListEntryScalarNarrow(int& EntryPoint, bool& CallFuncIsUsingTouchReturnValue, float& K2NodeEventValue, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, float& K2NodeEventDefaultValue, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, struct FPointerEvent& K2NodeEventMouseEvent); // (Final | 0x00008000 | HasDefaults)
};

