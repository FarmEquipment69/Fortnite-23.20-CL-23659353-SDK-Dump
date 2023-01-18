// WidgetBlueprintGeneratedClass /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C
// Size: 0x19e0
class UWBP_UIKit_ButtonCTA_Base_C : public UFortCTAButton
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1490 (0x8)
	class UWidgetAnimation* AnimHoldProgress; // 0x1498 (0x8)
	class UWidgetAnimation* AnimPressedBase; // 0x14a0 (0x8)
	class UWidgetAnimation* AnimFocusedBase; // 0x14a8 (0x8)
	class UWBP_UIKit_ButtonBackground_CTA_C* Background; // 0x14b0 (0x8)
	class UGridPanel* Button; // 0x14b8 (0x8)
	class UImage* HoldIcon; // 0x14c0 (0x8)
	class UImage* HoldProgressBar; // 0x14c8 (0x8)
	class UGridPanel* Prompt; // 0x14d0 (0x8)
	class UGridPanel* PromptAlignment; // 0x14d8 (0x8)
	class UWBP_UIKit_ButtonText_CTA_C* SecondaryTextBlock; // 0x14e0 (0x8)
	class UWBP_UIKit_ButtonText_CTA_C* TextBlock; // 0x14e8 (0x8)
	class UVerticalBox* VerticalBoxText; // 0x14f0 (0x8)
	struct TEnumAsByte<ModularButtonSize> ButtonSize; // 0x14f8 (0x1)
	unsigned char unreflected_14f9[0x7]; // 0x14f9 (0x7) 
	struct FText Text; // 0x1500 (0x18)
	struct FText TextSecondary; // 0x1518 (0x18)
	struct TArray<class UWBP_UIKit_Block_Base_C*> ModularBlocks; // 0x1530 (0x10)
	class UMaterialInstanceDynamic* InputActionProgressMaterial; // 0x1540 (0x8)
	class UMaterialInstance* BackgroundMaterial; // 0x1548 (0x8)
	class UMaterialInstance* BorderMaterial; // 0x1550 (0x8)
	bool IsBorderAdditive; // 0x1558 (0x1)
	unsigned char unreflected_1559[0x3]; // 0x1559 (0x3) 
	int LargeHeight; // 0x155c (0x4)
	int MediumHeight; // 0x1560 (0x4)
	int SmallHeight; // 0x1564 (0x4)
	struct FMargin SingleTextLargePadding; // 0x1568 (0x10)
	struct FMargin SingleTextMediumPadding; // 0x1578 (0x10)
	struct FMargin SingleTextSmallPadding; // 0x1588 (0x10)
	struct FMargin DoubleTextLargePadding; // 0x1598 (0x10)
	struct FMargin DoubleTextMediumPadding; // 0x15a8 (0x10)
	struct FMargin DoubleTextSmallPadding; // 0x15b8 (0x10)
	struct FMargin DoubleTextSecondaryLargePadding; // 0x15c8 (0x10)
	struct FMargin DoubleTextSecondaryMediumPadding; // 0x15d8 (0x10)
	struct FMargin DoubleTextSecondarySmallPadding; // 0x15e8 (0x10)
	int GridUnit; // 0x15f8 (0x4)
	unsigned char unreflected_15fc[0x4]; // 0x15fc (0x4) 
	struct FSlateFontInfo LargePrimaryFont; // 0x1600 (0x58)
	struct FSlateFontInfo MediumPrimaryFont; // 0x1658 (0x58)
	struct FSlateFontInfo SmallPrimaryFont; // 0x16b0 (0x58)
	struct FSlateFontInfo LargeSecondaryFont; // 0x1708 (0x58)
	struct FSlateFontInfo MeduimSecondaryFont; // 0x1760 (0x58)
	struct FSlateFontInfo SmallSecondaryFont; // 0x17b8 (0x58)
	struct FWidgetTransform LeftToRightTransform; // 0x1810 (0x38)
	struct FWidgetTransform RightToLeftTransform; // 0x1848 (0x38)
	bool SingleText; // 0x1880 (0x1)
	unsigned char unreflected_1881[0x7]; // 0x1881 (0x7) 
	struct FMulticastInlineDelegate OnFocusChanged; // 0x1888 (0x10)
	double MobileFontSizeMultiplierLarge; // 0x1898 (0x8)
	double MobileFontSizeMultiplierMedium; // 0x18a0 (0x8)
	double MobileFontSizeMultiplierSmall; // 0x18a8 (0x8)
	int MobileMinWidth; // 0x18b0 (0x4)
	bool OverrideDefaultHeight; // 0x18b4 (0x1)
	unsigned char unreflected_18b5[0x3]; // 0x18b5 (0x3) 
	int MobileMinHeight; // 0x18b8 (0x4)
	int MobileLargeHeight; // 0x18bc (0x4)
	int MobileMediumHeight; // 0x18c0 (0x4)
	int MobileSmallHeight; // 0x18c4 (0x4)
	struct FMargin MobileSingleTextLargePadding; // 0x18c8 (0x10)
	struct FMargin MobileSingleTextMediumPadding; // 0x18d8 (0x10)
	struct FMargin MobileSingleTextSmallPadding; // 0x18e8 (0x10)
	struct FMargin MobileDoubleTextLargePadding; // 0x18f8 (0x10)
	struct FMargin MobileDoubleTextMediumPadding; // 0x1908 (0x10)
	struct FMargin MobileDoubleTextSmallPadding; // 0x1918 (0x10)
	struct FMargin MobileDoubleTextSecondaryLargePadding; // 0x1928 (0x10)
	struct FMargin MobileDoubleTextSecondaryMediumPadding; // 0x1938 (0x10)
	struct FMargin MobileDoubleTextSecondarySmallPadding; // 0x1948 (0x10)
	double MobileFontSizeMultiplierSecondaryLarge; // 0x1958 (0x8)
	double MobileFontSizeMultiplierSecondaryMedium; // 0x1960 (0x8)
	double MobileFontSizeMultiplierSecondarySmall; // 0x1968 (0x8)
	bool OverrideDefaultMobileFontSizeMultiplier; // 0x1970 (0x1)
	unsigned char unreflected_1971[0x7]; // 0x1971 (0x7) 
	double MobileFontSizeMultiplierOverride; // 0x1978 (0x8)
	struct TArray<bool> EnabledEvents; // 0x1980 (0x10)
	bool SkipEnable; // 0x1990 (0x1)
	unsigned char unreflected_1991[0x7]; // 0x1991 (0x7) 
	double AudioLoopFadeoutTime; // 0x1998 (0x8)
	double AudioLoopFadeInTime; // 0x19a0 (0x8)
	class USoundBase* HoldPressedSound; // 0x19a8 (0x8)
	class USoundBase* HoldSound; // 0x19b0 (0x8)
	class USoundBase* HoldReleasedSound; // 0x19b8 (0x8)
	class USoundBase* HoldCompleteSound; // 0x19c0 (0x8)
	class UAudioComponent* HoldSoundAudioComponent; // 0x19c8 (0x8)
	enum ECommonInputType CurrentInputType; // 0x19d0 (0x1)
	bool OverrideSecondaryTextSize; // 0x19d1 (0x1)
	unsigned char unreflected_19d2[0x6]; // 0x19d2 (0x6) 
	double OverrideSecondaryTextSizeMultiplier; // 0x19d8 (0x8)

	/* Functions */

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.IsPromptHoldable (Has no native function)
	void IsPromptHoldable(bool& Holdable, bool& CallFuncGetIsHoldRequiredReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncIsHeldActionReturnValue, bool& CallFuncBooleanORReturnValue); // (Private | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.IsPromptIcon (Has no native function)
	void IsPromptIcon(bool& Valid, struct FSlateBrush& CallFuncGetIconReturnValue, bool& CallFuncIsValidReturnValue); // (Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.IsPromptAction (Has no native function)
	void IsPromptAction(bool& Valid, bool& CallFuncArrayIsNotEmptyReturnValue, bool& CallFuncNotEqualNameNameReturnValue); // (Private | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetButtonIsEnabled (Has no native function)
	void SetButtonIsEnabled(int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable1, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, int& TempintArrayIndexVariable2, bool& CallFuncIsHoveredReturnValue, int& CallFuncArrayLastIndexReturnValue, bool& CallFuncArrayGetItem, bool& CallFuncArrayIsNotEmptyReturnValue, int& TempintLoopCounterVariable2, class UWBP_UIKit_Block_Base_C*& CallFuncArrayGetItem1, int& CallFuncAddIntIntReturnValue2, class UWBP_UIKit_Block_Base_C*& CallFuncArrayGetItem2, class UWBP_UIKit_Block_Base_C*& CallFuncArrayGetItem3, int& CallFuncArrayLengthReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue, bool& CallFuncLessIntIntReturnValue1, int& CallFuncArrayLengthReturnValue2, bool& CallFuncLessIntIntReturnValue2); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetLanguageDirection (Has no native function)
	void SetLanguageDirection(bool& RightToLeft, bool& TempboolVariable, struct FWidgetTransform& K2NodeSelectDefault); // (Private | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdateButtonSIze (Has no native function)
	void UpdateButtonSIze(struct TEnumAsByte<ModularButtonSize>& TempbyteVariable, bool& TempboolVariable, struct TEnumAsByte<ModularButtonSize>& TempbyteVariable1, struct TEnumAsByte<ModularButtonSize>& TempbyteVariable2, bool& TempboolVariable1, struct TEnumAsByte<ModularButtonSize>& TempbyteVariable3, struct TEnumAsByte<ModularButtonSize>& TempbyteVariable4, struct TEnumAsByte<ModularButtonSize>& TempbyteVariable5, bool& TempboolVariable2, struct TEnumAsByte<ModularButtonSize>& TempbyteVariable6, struct TEnumAsByte<ModularButtonSize>& TempbyteVariable7, class UVerticalBoxSlot*& CallFuncSlotAsVerticalBoxSlotReturnValue, struct FMargin& K2NodeSelectDefault, struct FMargin& K2NodeSelectDefault1, class UHorizontalBoxSlot*& CallFuncSlotAsHorizontalBoxSlotReturnValue, struct FMargin& K2NodeSelectDefault2, bool& CallFuncIsMobileGameReturnValue, struct FMargin& K2NodeSelectDefault3, int& K2NodeSelectDefault4, class UVerticalBoxSlot*& CallFuncSlotAsVerticalBoxSlotReturnValue1, int& K2NodeSelectDefault5, struct FMargin& K2NodeSelectDefault6, struct FMargin& K2NodeSelectDefault7, struct FMargin& K2NodeSelectDefault8, class UHorizontalBoxSlot*& CallFuncSlotAsHorizontalBoxSlotReturnValue1, struct FMargin& K2NodeSelectDefault9, int& K2NodeSelectDefault10); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ShowPromptFallbackAction (Has no native function)
	void ShowPromptFallbackAction(bool& Show, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& K2NodeSelectDefault, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncBooleanANDReturnValue); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ResetPrompt (Has no native function)
	void ResetPrompt(); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdatePrompt (Has no native function)
	void UpdatePrompt(enum ECommonInputType& InputType, bool& IsPromptHoldable, bool& IsPromptIcon, enum ECommonInputType& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable4, enum ESlateVisibility& TempbyteVariable5, enum ECommonInputType& TempbyteVariable6, float& TemprealVariable, float& TemprealVariable1, float& TemprealVariable2, bool& TempboolVariable1, float& TemprealVariable3, float& TemprealVariable4, bool& TempboolVariable2, enum ESlateVisibility& TempbyteVariable7, enum ESlateVisibility& TempbyteVariable8, bool& TempboolVariable3, enum ESlateVisibility& TempbyteVariable9, enum ESlateVisibility& TempbyteVariable10, bool& TempboolVariable4, enum ESlateVisibility& TempbyteVariable11, enum ESlateVisibility& TempbyteVariable12, enum ECommonInputType& TempbyteVariable13, enum ESlateVisibility& TempbyteVariable14, bool& CallFuncGetIsEnabledReturnValue, enum ESlateVisibility& K2NodeSelectDefault, float& K2NodeSelectDefault1, enum ESlateVisibility& K2NodeSelectDefault2, float& K2NodeSelectDefault3, bool& CallFuncNotPreBoolReturnValue, enum ESlateVisibility& TempbyteVariable15, enum ESlateVisibility& K2NodeSelectDefault4, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanANDReturnValue, enum ESlateVisibility& K2NodeSelectDefault5, bool& TempboolVariable5, enum ESlateVisibility& K2NodeSelectDefault6, enum ESlateVisibility& K2NodeSelectDefault7, bool& CallFuncIsPromptHoldableHoldable, enum ESlateVisibility& K2NodeSelectDefault8, bool& CallFuncIsPromptIconValid); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Set Prompt (Has no native function)
	void SetPrompt(class UCommonInputSubsystem*& CallFuncGetContextReturnValue, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncIsValidReturnValue); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdateButtonSizeToGrid (Has no native function)
	void UpdateButtonSizeToGrid(double& NewGridAlignedSize, struct TEnumAsByte<ModularButtonSize>& TempbyteVariable, int& CallFuncFTruncReturnValue, int& K2NodeSelectDefault, struct FVector2D& CallFuncGetDesiredSizeReturnValue, bool& CallFuncNotEqualIntIntReturnValue, double& CallFuncBreakVector2DX, double& CallFuncBreakVector2DY, int& CallFuncSelectIntReturnValue, double& CallFuncConvIntToDoubleReturnValue, int& CallFuncFTruncReturnValue1, double& CallFuncConvIntToDoubleReturnValue1, bool& CallFuncGreaterIntIntReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, int& CallFuncFCeilReturnValue, double& CallFuncConvIntToDoubleReturnValue2, double& CallFuncMultiplyDoubleDoubleReturnValue); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdateFonts (Has no native function)
	void UpdateFonts(bool& TempboolVariable, struct TEnumAsByte<ModularButtonSize>& TempbyteVariable, struct TEnumAsByte<ModularButtonSize>& TempbyteVariable1, struct TEnumAsByte<ModularButtonSize>& TempbyteVariable2, struct TEnumAsByte<ModularButtonSize>& TempbyteVariable3, struct TEnumAsByte<ModularButtonSize>& TempbyteVariable4, double& K2NodeSelectDefault, bool& TempboolVariable1, double& K2NodeSelectDefault1, double& K2NodeSelectDefault2, double& K2NodeSelectDefault3, double& K2NodeSelectDefault4, struct FSlateFontInfo& K2NodeSelectDefault5, struct FSlateFontInfo& K2NodeSelectDefault6, double& CallFuncConvIntToDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, int& CallFuncFTruncReturnValue, struct FSlateFontInfo& K2NodeMakeStructSlateFontInfo, float& CallFuncSetMobileFontSizeMultiplierMobileFontSizeMultiplierImplicitCast, float& CallFuncSetMobileFontSizeMultiplierMobileFontSizeMultiplierImplicitCast1, float& CallFuncSetMobileFontSizeMultiplierMobileFontSizeMultiplierImplicitCast2); // (Private | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBlockTiming (Has no native function)
	void SetBlockTiming(class UWBP_UIKit_Block_Base_C*& bLock, double& TimeHovering, double& TimeUnhovering, double& TimeFocusing, double& TimeUnfocusing, double& TimePressing, double& TimeReleasing, double& TimeDisabling, double& TimeEnabling); // (Protected | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetButtonTiming (Has no native function)
	void SetButtonTiming(double& TimeHovering, double& TimeUnhovering, double& TimeFocusing, double& TimeUnfocusing, double& TimePressing, double& TimeReleasing, double& TimeDisabling, double& TimeEnabling, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& CallFuncArrayLengthReturnValue, class UWBP_UIKit_Block_Base_C*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue); // (Protected | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBackgroundMaterial (Has no native function)
	void SetBackgroundMaterial(class UMaterialInstance*& Background); // (Protected | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBackgroundVisibility (Has no native function)
	void SetBackgroundVisibility(bool& Visible); // (Protected | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBorderMaterial (Has no native function)
	void SetBorderMaterial(class UMaterialInstance*& BorderMaterial, bool& IsAdditive); // (Protected | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.AddModularBlock (Has no native function)
	void AddModularBlock(class UWBP_UIKit_Block_Base_C*& ModularBlock, int& CallFuncArrayAddReturnValue); // (Protected | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ResetButtonState (Has no native function)
	void ResetButtonState(int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable1, bool& CallFuncGetIsEnabledReturnValue, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, int& CallFuncArrayLengthReturnValue, class UWBP_UIKit_Block_Base_C*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, class UWBP_UIKit_Block_Base_C*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ShowInputActionText (Has no native function)
	void ShowInputActionText(struct FText& CallFuncGetDisplayTextReturnValue, bool& CallFuncSetTextEmpty); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetButtonSize (Has no native function)
	void SetButtonSize(struct TEnumAsByte<ModularButtonSize>& ButtonSize); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnPressed (Has no native function)
	void BPOnPressed(); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnReleased (Has no native function)
	void BPOnReleased(); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnDisabled (Has no native function)
	void BPOnDisabled(); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnEnabled (Has no native function)
	void BPOnEnabled(); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnInputMethodChanged (Has no native function)
	void BPOnInputMethodChanged(enum ECommonInputType& CurrentInputType); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.OnActionProgress (Has no native function)
	void OnActionProgress(float& HeldPercent); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnHoldStarted (Has no native function)
	void BPOnHoldStarted(float& HoldPercentage, bool& bInUseSecondaryHoldAnimation); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnHoldCompleted (Has no native function)
	void BPOnHoldCompleted(); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnHoldReset (Has no native function)
	void BPOnHoldReset(); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnHoldEnded (Has no native function)
	void BPOnHoldEnded(float& HoldPercentage, bool& bInUseSecondaryHoldAnimation); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_SetText (Has no native function)
	void BPSetText(struct FText& Text); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_SetSecondaryText (Has no native function)
	void BPSetSecondaryText(struct FText& Text); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.EventOnFocusedManually (Has no native function)
	void EventOnFocusedManually(); // (BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnFocusReceived (Has no native function)
	void BPOnFocusReceived(); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnFocusLost (Has no native function)
	void BPOnFocusLost(); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnInputActionUpdated (Has no native function)
	void BPOnInputActionUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base (Has no native function)
	void ExecuteUbergraphWBPUIKitButtonCTABase(int& EntryPoint, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable1, bool& TempboolVariable, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, class UAudioComponent*& CallFuncSpawnSound2DReturnValue, bool& CallFuncIsValidReturnValue2, class UAudioComponent*& CallFuncCreateSound2DReturnValue, bool& CallFuncIsValidReturnValue3, class UAudioComponent*& CallFuncSpawnSound2DReturnValue1, bool& K2NodeEventIsDesignTime, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue1, int& CallFuncArrayAddReturnValue, int& CallFuncArrayAddReturnValue1, enum ECommonInputType& K2NodeEventCurrentInputType, float& K2NodeEventHeldPercent, float& K2NodeEventHoldPercentage1, bool& K2NodeEventbInUseSecondaryHoldAnimation1, float& K2NodeEventHoldPercentage, bool& K2NodeEventbInUseSecondaryHoldAnimation, bool& CallFuncGreaterDoubleDoubleReturnValue, float& CallFuncGetEndTimeReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, int& TempintLoopCounterVariable2, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, int& CallFuncAddIntIntReturnValue2, bool& TempboolVariable1, struct FString& CallFuncGetCurrentLanguageReturnValue, bool& CallFuncEqualEqualStriStriReturnValue, int& CallFuncArrayAddReturnValue2, class UWBP_UIKit_Block_Base_C*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, int& CallFuncArrayLengthReturnValue1, class UWBP_UIKit_Block_Base_C*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue2, bool& CallFuncLessIntIntReturnValue1, int& CallFuncArrayLengthReturnValue3, bool& CallFuncLessIntIntReturnValue2, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue1, int& TempintArrayIndexVariable2, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue2, class UWBP_UIKit_Block_Base_C*& CallFuncArrayGetItem2, bool& CallFuncSetTextEmpty, struct FText& K2NodeEventText1, bool& CallFuncSetTextEmpty1, struct FText& K2NodeEventText, int& CallFuncArrayAddReturnValue3, int& CallFuncArrayAddReturnValue4, bool& CallFuncIsPromptHoldableHoldable, bool& CallFuncIsValidReturnValue4, bool& CallFuncIsPromptHoldableHoldable1, int& TempintLoopCounterVariable3, int& TempintArrayIndexVariable3, class UWBP_UIKit_Block_Base_C*& CallFuncArrayGetItem3, bool& CallFuncLessIntIntReturnValue3, int& CallFuncAddIntIntReturnValue3, bool& CallFuncIsValidReturnValue5, class UAudioComponent*& CallFuncSpawnSound2DReturnValue2, float& CallFuncFadeInFadeInDurationImplicitCast, float& CallFuncFadeOutFadeOutDurationImplicitCast, float& CallFuncFadeOutFadeOutDurationImplicitCast1, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncGreaterDoubleDoubleAImplicitCast, double& CallFuncDivideDoubleDoubleBImplicitCast, double& CallFuncDivideDoubleDoubleAImplicitCast, double& CallFuncMultiplyDoubleDoubleBImplicitCast, float& CallFuncPlayAnimationStartAtTimeImplicitCast, float& CallFuncPlayAnimationPlaybackSpeedImplicitCast); // (Final | 0x00008000 | HasDefaults)

	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.OnFocusChanged__DelegateSignature (Has no native function)
	void OnFocusChangedDelegateSignature(bool& HasFocus); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

