// WidgetBlueprintGeneratedClass /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C
// Size: 0x2a8
class UWBP_UIKit_Block_Base_C : public UUserWidget
{
	double TimeHovering; // 0x268 (0x8)
	double TimeUnhovering; // 0x270 (0x8)
	double TimeFocusing; // 0x278 (0x8)
	double TimeUnfocusing; // 0x280 (0x8)
	double TimePressing; // 0x288 (0x8)
	double TimeReleasing; // 0x290 (0x8)
	double TimeDisabling; // 0x298 (0x8)
	double TimeEnabling; // 0x2a0 (0x8)

	/* Functions */

	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetEnabled (Has no native function)
	void SetEnabled(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionEnabled (Has no native function)
	void TransitionEnabled(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionDisabled (Has no native function)
	void TransitionDisabled(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionReleased (Has no native function)
	void TransitionReleased(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionPressed (Has no native function)
	void TransitionPressed(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionUnfocused (Has no native function)
	void TransitionUnfocused(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionFocused (Has no native function)
	void TransitionFocused(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionUnhovered (Has no native function)
	void TransitionUnhovered(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionHovered (Has no native function)
	void TransitionHovered(class UWidgetAnimation*& AnimTransition); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionState (Has no native function)
	void TransitionState(class UWidgetAnimation*& TransitionAnimation, double& TransitionTime, bool& PlayForward, bool& CallFuncNotEqualDoubleDoubleReturnValue, double& CallFuncSafeDivideReturnValue, double& CallFuncSelectFloatReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue, float& CallFuncPlayAnimationForwardPlaybackSpeedImplicitCast, float& CallFuncPlayAnimationReversePlaybackSpeedImplicitCast); // (Private | BlueprintCallable | BlueprintEvent)
};

