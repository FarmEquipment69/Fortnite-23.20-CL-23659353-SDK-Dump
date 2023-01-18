// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C
// Size: 0x1542
class UScrollingTextButton_C : public UCommonButtonLegacy
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1430 (0x8)
	class UCommonTextBlock* CenterButtonTextWidget; // 0x1438 (0x8)
	class UBorder* ContentBorder; // 0x1440 (0x8)
	class UImage* LeftSideImage; // 0x1448 (0x8)
	struct FText ButtonText; // 0x1450 (0x18)
	unsigned char unreflected_1468[0x8]; // 0x1468 (0x8) 
	struct FSlateBrush IconBrush; // 0x1470 (0xc0)
	class UClass* ControllerInputStyle; // 0x1530 (0x8)
	class UClass* MouseKeyboardStyle; // 0x1538 (0x8)
	struct TEnumAsByte<EHorizontalAlignment> ContentAlignment; // 0x1540 (0x1)
	bool bMouseKeyboardStyleSet; // 0x1541 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.SetInitialMouseKeyboardStyle (Has no native function)
	void SetInitialMouseKeyboardStyle(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.UpdateTextStyle (Has no native function)
	void UpdateTextStyle(class UClass*& CallFuncGetCurrentTextStyleClassReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.SetContentAlignment (Has no native function)
	void SetContentAlignment(struct TEnumAsByte<EHorizontalAlignment>& ContentAlignment); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.UpdateContentAlignment (Has no native function)
	void UpdateContentAlignment(class UPanelSlot*& CallFuncGetContentSlotReturnValue, class UBorderSlot*& K2NodeDynamicCastAsBorderSlot, bool& K2NodeDynamicCastbSuccess); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.SetMouseKeyboardStyle (Has no native function)
	void SetMouseKeyboardStyle(class UClass*& ControllerInputStyle, class UCommonInputSubsystem*& CallFuncGetContextReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.UpdateStyle (Has no native function)
	void UpdateStyle(bool& UsingGamepad); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.UpdateText (Has no native function)
	void UpdateText(bool& TempboolVariable, struct FText& CallFuncGetDisplayTextReturnValue, bool& CallFuncTextIsEmptyReturnValue, bool& CallFuncNotPreBoolReturnValue, struct FText& K2NodeSelectDefault); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.SetControllerStyle (Has no native function)
	void SetControllerStyle(class UClass*& ControllerInputStyle, class UCommonInputSubsystem*& CallFuncGetContextReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.UpdateTextAndStyle (Has no native function)
	void UpdateTextAndStyle(bool& bUsingGamepad); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.InitializeButton (Has no native function)
	void InitializeButton(class UObject*& CallFuncGetBrushResourceReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.Set Icon (Has no native function)
	void SetIcon(struct FSlateBrush& IconBrush); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.Set Text (Has no native function)
	void SetText(struct FText& ButtonText, enum ESlateVisibility& TempbyteVariable, bool& CallFuncTextIsEmptyReturnValue, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable, enum ESlateVisibility& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.OnCurrentTextStyleChanged (Has no native function)
	void OnCurrentTextStyleChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.SetTabLabelInfo (Has no native function)
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature (Has no native function)
	void BndEvtCommonActionWidgetActionK2NodeComponentBoundEvent0OnInputMethodChangedDelegateSignature(bool& bUsingGamepad); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.OnTriggeredInputActionChanged (Has no native function)
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.OnActionProgress (Has no native function)
	void OnActionProgress(float& HeldPercent); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.OnActionComplete (Has no native function)
	void OnActionComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.ExecuteUbergraph_ScrollingTextButton (Has no native function)
	void ExecuteUbergraphScrollingTextButton(int& EntryPoint, bool& TempboolVariable, bool& K2NodeEventIsDesignTime, class UCommonInputSubsystem*& CallFuncGetContextReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, struct FFortTabButtonLabelInfo& K2NodeEventTabLabelInfo, bool& CallFuncEqualEqualByteByteReturnValue, bool& K2NodeComponentBoundEventbUsingGamepad, struct FDataTableRowHandle& K2NodeEventNewTriggeredAction, float& K2NodeEventHeldPercent, class UCommonInputSubsystem*& CallFuncGetContextReturnValue1, bool& CallFuncEqualEqualSlateBrushReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue1, bool& CallFuncEqualEqualByteByteReturnValue1, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& K2NodeSelectDefault); // (Final | 0x00008000 | HasDefaults)
};

