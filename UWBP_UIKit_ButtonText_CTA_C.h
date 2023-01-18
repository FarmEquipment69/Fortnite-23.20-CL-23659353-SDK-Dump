// WidgetBlueprintGeneratedClass /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C
// Size: 0x338
class UWBP_UIKit_ButtonText_CTA_C : public UWBP_UIKit_Block_Base_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2a8 (0x8)
	class UWidgetAnimation* AnimBounce; // 0x2b0 (0x8)
	class UWidgetAnimation* AnimDisabledTransition; // 0x2b8 (0x8)
	class UWidgetAnimation* AnimPressedTransition; // 0x2c0 (0x8)
	class UWidgetAnimation* AnimFocusedTransition; // 0x2c8 (0x8)
	class UCommonTextBlock* TextBlock; // 0x2d0 (0x8)
	struct FSlateFontInfo Font; // 0x2d8 (0x58)
	class UMaterialInstanceDynamic* FontDynamicMaterial; // 0x330 (0x8)

	/* Functions */

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetMobileFontSizeMultiplier (Has no native function)
	void SetMobileFontSizeMultiplier(float& MobileFontSizeMultiplier); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetEnabled (Has no native function)
	void SetEnabled(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionEnabled (Has no native function)
	void TransitionEnabled(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionDisabled (Has no native function)
	void TransitionDisabled(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionReleased (Has no native function)
	void TransitionReleased(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionPressed (Has no native function)
	void TransitionPressed(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionUnfocused (Has no native function)
	void TransitionUnfocused(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionFocused (Has no native function)
	void TransitionFocused(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetFont (Has no native function)
	void SetFont(struct FSlateFontInfo& Font, class UMaterialInstanceDynamic*& CallFuncGetDynamicFontMaterialReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetText (Has no native function)
	void SetText(struct FText& Text, bool& Empty, struct FText& CallFuncGetTextReturnValue, bool& CallFuncTextIsEmptyReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.ExecuteUbergraph_WBP_UIKit_ButtonText_CTA (Has no native function)
	void ExecuteUbergraphWBPUIKitButtonTextCTA(int& EntryPoint, bool& K2NodeEventIsDesignTime); // (Final | 0x00008000)
};

