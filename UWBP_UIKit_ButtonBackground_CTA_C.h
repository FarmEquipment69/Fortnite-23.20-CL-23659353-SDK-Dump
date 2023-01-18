// WidgetBlueprintGeneratedClass /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C
// Size: 0x318
class UWBP_UIKit_ButtonBackground_CTA_C : public UWBP_UIKit_Block_Base_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2a8 (0x8)
	class UWidgetAnimation* AnimOutlineGlow; // 0x2b0 (0x8)
	class UWidgetAnimation* AnimOutline; // 0x2b8 (0x8)
	class UWidgetAnimation* AnimDisabledTransition; // 0x2c0 (0x8)
	class UWidgetAnimation* AnimPressedTransition; // 0x2c8 (0x8)
	class UWidgetAnimation* AnimFocusedTransition; // 0x2d0 (0x8)
	class UImage* Backing; // 0x2d8 (0x8)
	class UImage* FocusOutline; // 0x2e0 (0x8)
	class UImage* FocusOutlineGlow; // 0x2e8 (0x8)
	class UImage* Glow; // 0x2f0 (0x8)
	class UOverlay* Root; // 0x2f8 (0x8)
	class UMaterialInstance* BackgroundMaterial; // 0x300 (0x8)
	bool AdditiveBorder; // 0x308 (0x1)
	unsigned char unreflected_309[0x7]; // 0x309 (0x7) 
	class UMaterialInstanceDynamic* BackgroundDynamicMaterial; // 0x310 (0x8)

	/* Functions */

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetEnabled (Has no native function)
	void SetEnabled(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetBorderMaterial (Has no native function)
	void SetBorderMaterial(class UMaterialInstance*& BorderMaterial, bool& IsAdditive); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetBackgroundMaterial (Has no native function)
	void SetBackgroundMaterial(class UMaterialInstance*& Brush, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionEnabled (Has no native function)
	void TransitionEnabled(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionDisabled (Has no native function)
	void TransitionDisabled(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionReleased (Has no native function)
	void TransitionReleased(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionPressed (Has no native function)
	void TransitionPressed(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionUnfocused (Has no native function)
	void TransitionUnfocused(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionFocused (Has no native function)
	void TransitionFocused(class UWidgetAnimation*& AnimTransition, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA (Has no native function)
	void ExecuteUbergraphWBPUIKitButtonBackgroundCTA(int& EntryPoint, bool& K2NodeEventIsDesignTime); // (Final | 0x00008000)
};

