// WidgetBlueprintGeneratedClass /Game/Athena/Settings/CustomEntries/SettingsRotator_Narrow.SettingsRotator_Narrow_C
// Size: 0x1458
class USettingsRotator_Narrow_C : public UFortSettingsRotator
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1440 (0x8)
	class UWidgetAnimation* RotatorHover; // 0x1448 (0x8)
	class UBorder* Background; // 0x1450 (0x8)

	/* Functions */

	// Function /Game/Athena/Settings/CustomEntries/SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnOptionsPopulated (Has no native function)
	void BPOnOptionsPopulated(int& Count); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Settings/CustomEntries/SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnOptionSelected (Has no native function)
	void BPOnOptionSelected(int& Index); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Settings/CustomEntries/SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnDefaultOptionSpecified (Has no native function)
	void BPOnDefaultOptionSpecified(int& DefaultOptionIndex); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Settings/CustomEntries/SettingsRotator_Narrow.SettingsRotator_Narrow_C.OnHover Animation (Has no native function)
	void OnHoverAnimation(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Settings/CustomEntries/SettingsRotator_Narrow.SettingsRotator_Narrow_C.OnUnHover Animation (Has no native function)
	void OnUnHoverAnimation(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Settings/CustomEntries/SettingsRotator_Narrow.SettingsRotator_Narrow_C.ExecuteUbergraph_SettingsRotator_Narrow (Has no native function)
	void ExecuteUbergraphSettingsRotatorNarrow(int& EntryPoint, int& K2NodeEventCount, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, float& CallFuncConvIntToFloatReturnValue, int& K2NodeEventIndex, float& CallFuncConvIntToFloatReturnValue1, int& K2NodeEventDefaultOptionIndex, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue1, float& CallFuncConvIntToFloatReturnValue2, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue2, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1); // (Final | 0x00008000)
};

