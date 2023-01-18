// WidgetBlueprintGeneratedClass /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C
// Size: 0x30e
class UWBP_ComboBox_C : public UFortComboBox
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x298 (0x8)
	class UWidgetAnimation* OpenAnim; // 0x2a0 (0x8)
	class UWidgetAnimation* HoverAnim; // 0x2a8 (0x8)
	class UImage* Arrow; // 0x2b0 (0x8)
	class UCommonActionWidget* CommonActionWidget; // 0x2b8 (0x8)
	class UOverlay* InputActionOverlay; // 0x2c0 (0x8)
	class UCommonTextBlock* LabelText; // 0x2c8 (0x8)
	class UImage* Outline; // 0x2d0 (0x8)
	bool AlignContentCenter; // 0x2d8 (0x1)
	unsigned char unreflected_2d9[0x3]; // 0x2d9 (0x3) 
	struct FLinearColor OutlineEndColor; // 0x2dc (0x10)
	unsigned char unreflected_2ec[0x4]; // 0x2ec (0x4) 
	class UMaterialInstanceDynamic* OutlineMaterial; // 0x2f0 (0x8)
	struct FName OutlineColorParam; // 0x2f8 (0x4)
	struct TEnumAsByte<E_UI_InputField_ContentSize> ContentSize; // 0x2fc (0x1)
	bool pIsFocused; // 0x2fd (0x1)
	bool pIsListOpened; // 0x2fe (0x1)
	bool pIsHover; // 0x2ff (0x1)
	class UMaterialInstanceDynamic* ArrowMaterial; // 0x300 (0x8)
	struct FName ArrowColorParam; // 0x308 (0x4)
	bool pFocusAnimPlayed; // 0x30c (0x1)
	bool ShowActionOnlyOnFocus; // 0x30d (0x1)

	/* Functions */

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.SetActionVisibility (Has no native function)
	void SetActionVisibility(bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue, bool& CallFuncNotPreBoolReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanANDReturnValue, enum ESlateVisibility& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.SetText (Has no native function)
	void SetText(struct FString& TextValue, struct FText& CallFuncConvStringToTextReturnValue); // (Private | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.SetContentSize (Has no native function)
	void SetContentSize(struct TEnumAsByte<E_UI_InputField_ContentSize>& TempbyteVariable, struct FName& TempnameVariable, struct FName& TempnameVariable1, struct FName& TempnameVariable2, struct TEnumAsByte<E_UI_InputField_ContentSize>& TempbyteVariable1, class UObject*& TempobjectVariable, class UObject*& TempobjectVariable1, class UObject*& TempobjectVariable2, struct TEnumAsByte<E_UI_InputField_ContentSize>& TempbyteVariable2, int& TempintVariable, int& TempintVariable1, int& TempintVariable2, int& K2NodeSelectDefault, struct FName& K2NodeSelectDefault1, class UObject*& K2NodeSelectDefault2, struct FSlateFontInfo& K2NodeMakeStructSlateFontInfo); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.Set Focus Visual (Has no native function)
	void SetFocusVisual(bool& IsFocused, struct FLinearColor& CallFuncSelectColorReturnValue, struct FSlateColor& K2NodeMakeStructSlateColor, struct FLinearColor& CallFuncSelectColorReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.SetContentAlignment (Has no native function)
	void SetContentAlignment(bool& TempboolVariable, struct TEnumAsByte<ETextJustify>& TempbyteVariable, struct TEnumAsByte<ETextJustify>& TempbyteVariable1, struct TEnumAsByte<ETextJustify>& K2NodeSelectDefault); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.OnAddedToFocusPath (Has no native function)
	void OnAddedToFocusPath(struct FFocusEvent*& InFocusEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.OnRemovedFromFocusPath (Has no native function)
	void OnRemovedFromFocusPath(struct FFocusEvent*& InFocusEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature (Has no native function)
	void BndEvtWBPComboBoxComboBoxK2NodeComponentBoundEvent0OnSelectionChangedEventDelegateSignature(struct FString& SelectedItem, struct TEnumAsByte<ESelectInfo>& SelectionType); // (BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature (Has no native function)
	void BndEvtWBPComboBoxComboBoxK2NodeComponentBoundEvent1OnOpeningEventDelegateSignature(); // (BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.RefreshHoverAnim (Has no native function)
	void RefreshHoverAnim(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.OnInputDeviceChanged (Has no native function)
	void OnInputDeviceChanged(enum ECommonInputType& bNewInputType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.ExecuteUbergraph_WBP_ComboBox (Has no native function)
	void ExecuteUbergraphWBPComboBox(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FFocusEvent*& K2NodeEventInFocusEvent1, struct FFocusEvent*& K2NodeEventInFocusEvent, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, struct FPointerEvent& K2NodeEventMouseEvent, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, struct FString& K2NodeComponentBoundEventSelectedItem, struct TEnumAsByte<ESelectInfo>& K2NodeComponentBoundEventSelectionType, struct FString& CallFuncGetSelectedOptionReturnValue, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue1, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue, bool& K2NodeEventIsDesignTime, bool& CallFuncBooleanORReturnValue, bool& CallFuncNotEqualBoolBoolReturnValue, enum ECommonInputType& K2NodeCustomEventbNewInputType); // (Final | 0x00008000 | HasDefaults)
};

