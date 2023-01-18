// WidgetBlueprintGeneratedClass /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C
// Size: 0x1711
class UPlayerSurveyResponseChoice_C : public UFortPlayerSurveyResponseChoiceBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x13f0 (0x8)
	class UBorder* BorderInputActionCircle; // 0x13f8 (0x8)
	class UImage* ImageCheckbox; // 0x1400 (0x8)
	class UCommonActionWidget* InputActionWidgetSelect; // 0x1408 (0x8)
	struct FSlateBrush BrushRadioUnchecked; // 0x1410 (0xc0)
	struct FSlateBrush BrushRadioChecked; // 0x14d0 (0xc0)
	struct FSlateBrush BrushCheckboxUnchecked; // 0x1590 (0xc0)
	struct FSlateBrush BrushCheckboxChecked; // 0x1650 (0xc0)
	struct TEnumAsByte<EFortPlayerSurveyResponseChoiceType> ChoiceType; // 0x1710 (0x1)

	/* Functions */

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.Update Text Scale (Has no native function)
	void UpdateTextScale(struct FVector2D& CallFuncGetDesiredSizeReturnValue, double& CallFuncBreakVector2DX, double& CallFuncBreakVector2DY, struct FSlateFontInfo& K2NodeMakeStructSlateFontInfo, bool& CallFuncGreaterDoubleDoubleReturnValue); // (Private | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.GetCurrentButtonBrush (Has no native function)
	void GetCurrentButtonBrush(struct FSlateBrush& CurrentBrush, bool& TempboolVariable, bool& TempboolVariable1, bool& TempboolVariable2, bool& TempboolVariable3, bool& TempboolVariable4, bool& TempboolVariable5, bool& CallFuncIsHoveredReturnValue, bool& CallFuncIsPressedReturnValue, bool& CallFuncIsPressedReturnValue1, bool& CallFuncIsHoveredReturnValue1, bool& CallFuncGetSelectedReturnValue, bool& CallFuncGetIsEnabledReturnValue, class UCommonButtonStyle*& CallFuncGetStyleReturnValue, struct FSlateBrush& CallFuncGetDisabledBrushBrush, struct FSlateBrush& CallFuncGetNormalBaseBrushBrush, struct FSlateBrush& CallFuncGetNormalHoveredBrushBrush, struct FSlateBrush& CallFuncGetNormalPressedBrushBrush, struct FSlateBrush& K2NodeSelectDefault, struct FSlateBrush& CallFuncGetSelectedPressedBrushBrush, struct FSlateBrush& K2NodeSelectDefault1, struct FSlateBrush& CallFuncGetSelectedBaseBrushBrush, struct FSlateBrush& CallFuncGetSelectedHoveredBrushBrush, struct FSlateBrush& K2NodeSelectDefault2, struct FSlateBrush& K2NodeSelectDefault3, struct FSlateBrush& K2NodeSelectDefault4, struct FSlateBrush& K2NodeSelectDefault5); // (Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateChoiceImage (Has no native function)
	void UpdateChoiceImage(struct TEnumAsByte<EFortPlayerSurveyResponseChoiceType>& TempbyteVariable, bool& TempboolVariable, bool& TempboolVariable1, bool& CallFuncGetSelectedReturnValue, bool& CallFuncGetSelectedReturnValue1, struct FSlateBrush& K2NodeSelectDefault, struct FSlateBrush& K2NodeSelectDefault1, struct FSlateBrush& K2NodeSelectDefault2); // (Private | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateInputActionRenderOpacity (Has no native function)
	void UpdateInputActionRenderOpacity(bool& TempboolVariable, double& TemprealVariable, double& TemprealVariable1, bool& CallFuncIsHoveredReturnValue, double& K2NodeSelectDefault, float& CallFuncSetRenderOpacityInOpacityImplicitCast, float& CallFuncSetRenderOpacityInOpacityImplicitCast1); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateButtonColor (Has no native function)
	void UpdateButtonColor(bool& TempboolVariable, struct FLinearColor& TempstructVariable, class UClass*& CallFuncGetCurrentTextStyleClassReturnValue, struct FSlateBrush& CallFuncGetCurrentButtonBrushCurrentBrush, bool& CallFuncGetSelectedReturnValue, class UCommonTextStyle*& CallFuncGetCurrentTextStyleReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, struct FLinearColor& CallFuncGetColorOutColor, bool& CallFuncBooleanANDReturnValue, struct FLinearColor& K2NodeSelectDefault, struct FSlateColor& K2NodeMakeStructSlateColor); // (Private | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.SetChoiceType (Has no native function)
	void SetChoiceType(struct TEnumAsByte<EFortPlayerSurveyResponseChoiceType>& Type); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnSurveyResetChoice (Has no native function)
	void OnSurveyResetChoice(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnSelected (Has no native function)
	void BPOnSelected(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnDeselected (Has no native function)
	void BPOnDeselected(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnInitialized (Has no native function)
	void OnInitialized(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnCurrentTextStyleChanged (Has no native function)
	void OnCurrentTextStyleChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.ExecuteUbergraph_PlayerSurveyResponseChoice (Has no native function)
	void ExecuteUbergraphPlayerSurveyResponseChoice(int& EntryPoint, struct TEnumAsByte<EFortPlayerSurveyResponseChoiceType>& K2NodeEventType); // (Final | 0x00008000)
};

