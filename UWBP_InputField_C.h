// WidgetBlueprintGeneratedClass /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C
// Size: 0x389
class UWBP_InputField_C : public UFortInputField
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x298 (0x8)
	class UWidgetAnimation* ErrorAnim; // 0x2a0 (0x8)
	class UWidgetAnimation* HoverAnim; // 0x2a8 (0x8)
	class UCommonActionWidget* CommonActionWidget; // 0x2b0 (0x8)
	class UOverlay* ErrorIconWrapper; // 0x2b8 (0x8)
	class UCommonTextBlock* ErrorText; // 0x2c0 (0x8)
	class UBorder* ErrorTextWrapper; // 0x2c8 (0x8)
	class UCommonTextBlock* LabelText; // 0x2d0 (0x8)
	class UBorder* LabelTextWrapper; // 0x2d8 (0x8)
	class UImage* Outline; // 0x2e0 (0x8)
	class UOverlay* OverlayActionWidgetShower; // 0x2e8 (0x8)
	class UOverlay* ProcessingFeedbackWrapper; // 0x2f0 (0x8)
	struct TEnumAsByte<E_UI_InputField_State> DebugInputFieldState; // 0x2f8 (0x1)
	bool ShowLabel; // 0x2f9 (0x1)
	bool AlignContentCenter; // 0x2fa (0x1)
	unsigned char unreflected_2fb[0x5]; // 0x2fb (0x5) 
	struct FText DefaultLabelValue; // 0x300 (0x18)
	struct FText ErrorValue; // 0x318 (0x18)
	struct FText DefaultHintTextValue; // 0x330 (0x18)
	struct FLinearColor IdleEndColor; // 0x348 (0x10)
	struct FLinearColor ErrorEndColor; // 0x358 (0x10)
	struct FLinearColor OutlineEndColor; // 0x368 (0x10)
	class UMaterialInstanceDynamic* OutlineMaterial; // 0x378 (0x8)
	struct FName OutlineColorParam; // 0x380 (0x4)
	struct TEnumAsByte<E_UI_InputField_ContentSize> ContentSize; // 0x384 (0x1)
	bool pIsFocused; // 0x385 (0x1)
	bool pIsMouseHovered; // 0x386 (0x1)
	bool pFocusAnimPlayed; // 0x387 (0x1)
	bool ShowActionOnlyOnFocus; // 0x388 (0x1)

	/* Functions */

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetProcessingVisibility (Has no native function)
	void SetProcessingVisibility(bool& IsVisible, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnTouchStarted (Has no native function)
	struct FEventReply OnTouchStarted(struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnMouseButtonUp (Has no native function)
	struct FEventReply OnMouseButtonUp(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetActionVisibility (Has no native function)
	void SetActionVisibility(bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue, bool& CallFuncNotPreBoolReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncBooleanANDReturnValue, enum ESlateVisibility& K2NodeSelectDefault); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnFocusReceived (Has no native function)
	struct FEventReply OnFocusReceived(struct FGeometry& MyGeometry, struct FFocusEvent*& InFocusEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetContentSize (Has no native function)
	void SetContentSize(struct TEnumAsByte<E_UI_InputField_ContentSize>& TempbyteVariable, struct FName& TempnameVariable, struct FName& TempnameVariable1, struct FName& TempnameVariable2, struct TEnumAsByte<E_UI_InputField_ContentSize>& TempbyteVariable1, class UObject*& TempobjectVariable, class UObject*& TempobjectVariable1, class UObject*& TempobjectVariable2, struct TEnumAsByte<E_UI_InputField_ContentSize>& TempbyteVariable2, int& TempintVariable, int& TempintVariable1, int& TempintVariable2, struct FName& K2NodeSelectDefault, class UObject*& K2NodeSelectDefault1, int& K2NodeSelectDefault2, struct FSlateFontInfo& CallFuncGetFontReturnValue, struct FSlateFontInfo& K2NodeMakeStructSlateFontInfo); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.Set Focus Visual (Has no native function)
	void SetFocusVisual(bool& IsFocused, struct FLinearColor& CallFuncSelectColorReturnValue, struct FSlateColor& K2NodeMakeStructSlateColor, struct FEditableTextStyle& K2NodeMakeStructEditableTextStyle, struct FSlateFontInfo& CallFuncGetFontReturnValue, struct FLinearColor& CallFuncSelectColorReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetLabelValue (Has no native function)
	void SetLabelValue(struct FText& LabelValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetContentAlignment (Has no native function)
	void SetContentAlignment(bool& TempboolVariable, struct TEnumAsByte<ETextJustify>& TempbyteVariable, struct TEnumAsByte<ETextJustify>& TempbyteVariable1, struct TEnumAsByte<ETextJustify>& K2NodeSelectDefault); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetTextValue (Has no native function)
	void SetTextValue(struct FText& TextValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetLabelDisplay (Has no native function)
	void SetLabelDisplay(bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetInputFieldState (Has no native function)
	void SetInputFieldState(struct TEnumAsByte<E_UI_InputField_State>& State, struct TEnumAsByte<E_UI_InputField_State>& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, struct TEnumAsByte<E_UI_InputField_State>& TempbyteVariable4, struct FLinearColor& TempstructVariable, struct TEnumAsByte<E_UI_InputField_State>& TempbyteVariable5, enum ESlateVisibility& TempbyteVariable6, enum ESlateVisibility& TempbyteVariable7, enum ESlateVisibility& TempbyteVariable8, enum ESlateVisibility& K2NodeSelectDefault, struct FLinearColor& K2NodeSelectDefault1, enum ESlateVisibility& K2NodeSelectDefault2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnError (Has no native function)
	void OnError(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnAddedToFocusPath (Has no native function)
	void OnAddedToFocusPath(struct FFocusEvent*& InFocusEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnRemovedFromFocusPath (Has no native function)
	void OnRemovedFromFocusPath(struct FFocusEvent*& InFocusEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetEditableText (Has no native function)
	void SetEditableText(struct FText& EditableText); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetErrorText (Has no native function)
	void SetErrorText(struct FText& ErrorText); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetHintText (Has no native function)
	void SetHintText(struct FText& HintText); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.RefreshHoverAnim (Has no native function)
	void RefreshHoverAnim(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnInitialized (Has no native function)
	void OnInitialized(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnInputDeviceChanged (Has no native function)
	void OnInputDeviceChanged(enum ECommonInputType& bNewInputType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.ExecuteUbergraph_WBP_InputField (Has no native function)
	void ExecuteUbergraphWBPInputField(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue, struct FFocusEvent*& K2NodeEventInFocusEvent1, struct FFocusEvent*& K2NodeEventInFocusEvent, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, struct FPointerEvent& K2NodeEventMouseEvent, struct FText& K2NodeEventEditableText, struct FText& K2NodeEventErrorText, struct FText& K2NodeEventHintText, bool& CallFuncTextIsEmptyReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncNotEqualBoolBoolReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, enum ECommonInputType& K2NodeCustomEventbNewInputType, bool& K2NodeEventIsDesignTime); // (Final | 0x00008000 | HasDefaults)
};

