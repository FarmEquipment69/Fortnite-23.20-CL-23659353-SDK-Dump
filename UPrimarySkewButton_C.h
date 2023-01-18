// WidgetBlueprintGeneratedClass /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C
// Size: 0x1480
class UPrimarySkewButton_C : public UCommonButtonLegacy
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1430 (0x8)
	class UWidgetAnimation* Pressed; // 0x1438 (0x8)
	class UWidgetAnimation* Hover; // 0x1440 (0x8)
	class UCommonTextBlock* CenterButtonTextWidget; // 0x1448 (0x8)
	class UImage* ImageButtonTop; // 0x1450 (0x8)
	class UImage* ImageShadow; // 0x1458 (0x8)
	bool ToUpper; // 0x1460 (0x1)
	bool XL; // 0x1461 (0x1)
	unsigned char unreflected_1462[0x6]; // 0x1462 (0x6) 
	struct FText ButtonNameText; // 0x1468 (0x18)

	/* Functions */

	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.OnMouseButtonUp (Has no native function)
	struct FEventReply OnMouseButtonUp(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.OnMouseButtonDown (Has no native function)
	struct FEventReply OnMouseButtonDown(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.BP_OnClicked (Has no native function)
	void BPOnClicked(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature (Has no native function)
	void BndEvtCommonActionWidgetActionK2NodeComponentBoundEvent0OnInputMethodChangedDelegateSignature(bool& bUsingGamepad); // (BlueprintEvent)

	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.ExecuteUbergraph_PrimarySkewButton (Has no native function)
	void ExecuteUbergraphPrimarySkewButton(int& EntryPoint, bool& K2NodeEventIsDesignTime, bool& TempboolVariable, bool& TempboolVariable1, bool& TempboolVariable2, double& TemprealVariable, struct FSlateFontInfo& K2NodeMakeStructSlateFontInfo, struct FSlateFontInfo& K2NodeMakeStructSlateFontInfo1, bool& TempboolVariable3, struct FSlateFontInfo& K2NodeSelectDefault, float& CallFuncGetStartTimeReturnValue, float& CallFuncGetEndTimeReturnValue, float& CallFuncGetStartTimeReturnValue1, float& CallFuncGetEndTimeReturnValue1, float& CallFuncPauseAnimationReturnValue, float& CallFuncPauseAnimationReturnValue1, bool& CallFuncLessEqualDoubleDoubleReturnValue, double& CallFuncAddDoubleDoubleReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, float& CallFuncPauseAnimationReturnValue2, double& K2NodeSelectDefault1, bool& CallFuncLessEqualDoubleDoubleReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue1, float& CallFuncPauseAnimationReturnValue3, double& CallFuncAddDoubleDoubleReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue3, bool& K2NodeComponentBoundEventbUsingGamepad, struct FText& CallFuncTextToUpperReturnValue, double& TemprealVariable1, struct FText& K2NodeSelectDefault2, double& K2NodeSelectDefault3, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue4, double& CallFuncAddDoubleDoubleBImplicitCast, double& CallFuncLessEqualDoubleDoubleBImplicitCast, double& CallFuncSubtractDoubleDoubleAImplicitCast, double& CallFuncAddDoubleDoubleBImplicitCast1, double& CallFuncLessEqualDoubleDoubleBImplicitCast1, double& CallFuncSubtractDoubleDoubleAImplicitCast1, double& CallFuncSubtractDoubleDoubleBImplicitCast, double& CallFuncLessEqualDoubleDoubleAImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast, float& CallFuncPlayAnimationStartAtTimeImplicitCast, double& CallFuncSubtractDoubleDoubleBImplicitCast1, double& CallFuncLessEqualDoubleDoubleAImplicitCast1, float& CallFuncPlayAnimationStartAtTimeImplicitCast1, double& CallFuncAddDoubleDoubleAImplicitCast1, float& CallFuncPlayAnimationStartAtTimeImplicitCast2, float& CallFuncPlayAnimationStartAtTimeImplicitCast3); // (Final | 0x00008000 | HasDefaults)
};

