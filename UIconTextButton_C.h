// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C
// Size: 0x1598
class UIconTextButton_C : public UCommonButtonLegacy
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1430 (0x8)
	class UCommonTextBlock* CenterButtonTextWidget; // 0x1438 (0x8)
	class UBorder* ContentBorder; // 0x1440 (0x8)
	class UHorizontalBox* HorizontalBoxButtonContent; // 0x1448 (0x8)
	class UImage* LeftSideImage; // 0x1450 (0x8)
	class UNamedSlot* RightExtraContentSlot; // 0x1458 (0x8)
	struct FText ButtonText; // 0x1460 (0x18)
	unsigned char unreflected_1478[0x8]; // 0x1478 (0x8) 
	struct FSlateBrush IconBrush; // 0x1480 (0xc0)
	class UClass* ControllerInputStyle; // 0x1540 (0x8)
	class UClass* MouseKeyboardStyle; // 0x1548 (0x8)
	struct TEnumAsByte<EHorizontalAlignment> ContentAlignment; // 0x1550 (0x1)
	bool bMouseKeyboardStyleSet; // 0x1551 (0x1)
	unsigned char unreflected_1552[0x6]; // 0x1552 (0x6) 
	struct FText OverrideButtonText; // 0x1558 (0x18)
	struct TEnumAsByte<ETextJustify> ButtonTextJustification; // 0x1570 (0x1)
	bool bDisplayAllCaps; // 0x1571 (0x1)
	unsigned char unreflected_1572[0x6]; // 0x1572 (0x6) 
	double PressProgress; // 0x1578 (0x8)
	bool bIgnoreInputActionWidgetText; // 0x1580 (0x1)
	unsigned char unreflected_1581[0x7]; // 0x1581 (0x7) 
	struct FMulticastInlineDelegate FocusChangedEvent; // 0x1588 (0x10)

	/* Functions */

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.OnFocusReceived (Has no native function)
	struct FEventReply OnFocusReceived(struct FGeometry& MyGeometry, struct FFocusEvent*& InFocusEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.GetPressProgress (Has no native function)
	void GetPressProgress(double& Progress); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.Get Dynamic Material (Has no native function)
	void GetDynamicMaterial(class UMaterialInstanceDynamic*& RetMaterial, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.ShowIcon (Has no native function)
	void ShowIcon(bool& bShouldShow); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.SetTextInternal (Has no native function)
	void SetTextInternal(struct FText& InButtonText, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& CallFuncTextIsEmptyReturnValue, enum ESlateVisibility& K2NodeSelectDefault); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.SetInitialMouseKeyboardStyle (Has no native function)
	void SetInitialMouseKeyboardStyle(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.UpdateTextStyle (Has no native function)
	void UpdateTextStyle(class UClass*& CallFuncGetCurrentTextStyleClassReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.SetContentAlignment (Has no native function)
	void SetContentAlignment(struct TEnumAsByte<EHorizontalAlignment>& ContentAlignment); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.UpdateContentAlignment (Has no native function)
	void UpdateContentAlignment(class UPanelSlot*& CallFuncGetContentSlotReturnValue, class UBorderSlot*& K2NodeDynamicCastAsBorderSlot, bool& K2NodeDynamicCastbSuccess); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.SetMouseKeyboardStyle (Has no native function)
	void SetMouseKeyboardStyle(class UClass*& ControllerInputStyle, class UCommonInputSubsystem*& CallFuncGetContextReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.UpdateStyle (Has no native function)
	void UpdateStyle(bool& UsingGamepad, bool& CallFuncIsErebusReturnValue, bool& CallFuncBooleanORReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.UpdateText (Has no native function)
	void UpdateText(bool& TempboolVariable, bool& TempboolVariable1, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncTextIsEmptyReturnValue, struct FText& CallFuncGetDisplayTextReturnValue, struct FText& K2NodeSelectDefault, bool& CallFuncTextIsEmptyReturnValue1, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanANDReturnValue, struct FText& K2NodeSelectDefault1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.SetControllerStyle (Has no native function)
	void SetControllerStyle(class UClass*& ControllerInputStyle, class UCommonInputSubsystem*& CallFuncGetContextReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.UpdateTextAndStyle (Has no native function)
	void UpdateTextAndStyle(enum ECommonInputType& InputType, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.InitializeButton (Has no native function)
	void InitializeButton(class UObject*& CallFuncGetBrushResourceReturnValue, bool& CallFuncNotEqualByteByteReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.Set Icon (Has no native function)
	void SetIcon(struct FSlateBrush& IconBrush); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.Set Text (Has no native function)
	void SetText(struct FText& ButtonText); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.OnCurrentTextStyleChanged (Has no native function)
	void OnCurrentTextStyleChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.SetTabLabelInfo (Has no native function)
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.OnTriggeredInputActionChanged (Has no native function)
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.OnActionProgress (Has no native function)
	void OnActionProgress(float& HeldPercent); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.OnActionComplete (Has no native function)
	void OnActionComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.OnTriggeringInputActionChanged (Has no native function)
	void OnTriggeringInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.OnFocusLost (Has no native function)
	void OnFocusLost(struct FFocusEvent*& InFocusEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.ExecuteUbergraph_IconTextButton (Has no native function)
	void ExecuteUbergraphIconTextButton(int& EntryPoint, bool& K2NodeEventIsDesignTime, class UCommonInputSubsystem*& CallFuncGetContextReturnValue, class UCommonInputSubsystem*& CallFuncGetContextReturnValue1, class UCommonInputSubsystem*& CallFuncGetContextReturnValue2, bool& CallFuncHasAnyChildrenReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, class UCommonInputSubsystem*& CallFuncGetContextReturnValue3, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue1, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, struct FFortTabButtonLabelInfo& K2NodeEventTabLabelInfo, struct FDataTableRowHandle& K2NodeEventNewTriggeredAction1, float& K2NodeEventHeldPercent, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable2, bool& CallFuncEqualEqualSlateBrushReturnValue, enum ESlateVisibility& TempbyteVariable3, enum ESlateVisibility& K2NodeSelectDefault, bool& TempboolVariable1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, enum ESlateVisibility& K2NodeSelectDefault1, struct FDataTableRowHandle& K2NodeEventNewTriggeredAction, struct FFocusEvent*& K2NodeEventInFocusEvent, double& K2NodeVariableSetPressProgressImplicitCast); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.FocusChangedEvent__DelegateSignature (Has no native function)
	void FocusChangedEventDelegateSignature(bool& HasFocus); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

