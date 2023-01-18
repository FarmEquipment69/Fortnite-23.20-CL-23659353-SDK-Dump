// WidgetBlueprintGeneratedClass /Game/Athena/UI/Customization/AthenaVariantTileButton.AthenaVariantTileButton_C
// Size: 0x14c8
class UAthenaVariantTileButton_C : public UFortVariantTileButton
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x14b0 (0x8)
	class UWidgetAnimation* WarningPulse; // 0x14b8 (0x8)
	class UImage* ImageConflict; // 0x14c0 (0x8)

	/* Functions */

	// Function /Game/Athena/UI/Customization/AthenaVariantTileButton.AthenaVariantTileButton_C.OnListItemObjectSet (Has no native function)
	void OnListItemObjectSet(class UObject*& ListItemObject); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/UI/Customization/AthenaVariantTileButton.AthenaVariantTileButton_C.BP_OnClicked (Has no native function)
	void BPOnClicked(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/UI/Customization/AthenaVariantTileButton.AthenaVariantTileButton_C.ExecuteUbergraph_AthenaVariantTileButton (Has no native function)
	void ExecuteUbergraphAthenaVariantTileButton(int& EntryPoint, class UObject*& K2NodeEventListItemObject, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, bool& CallFuncIsVisibleReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue); // (Final | 0x00008000)
};

