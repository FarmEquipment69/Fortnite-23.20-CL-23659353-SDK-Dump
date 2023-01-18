// WidgetBlueprintGeneratedClass /Game/Athena/UI/Customization/AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C
// Size: 0x360
class UAthenaFloatSliderVariantPicker_C : public UFortFloatSliderVariantPicker
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x348 (0x8)
	class UOverlay* PanelValue; // 0x350 (0x8)
	class USimpleMaterialProgressBar_C* Progress; // 0x358 (0x8)

	/* Functions */

	// Function /Game/Athena/UI/Customization/AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.OnUpdateValue (Has no native function)
	void OnUpdateValue(float& NormalizedValue, bool& bIsLocked); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/UI/Customization/AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.ExecuteUbergraph_AthenaFloatSliderVariantPicker (Has no native function)
	void ExecuteUbergraphAthenaFloatSliderVariantPicker(int& EntryPoint, float& K2NodeEventNormalizedValue, bool& K2NodeEventbIsLocked, struct FLinearColor& CallFuncSelectColorReturnValue); // (Final | 0x00008000)
};

