// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C
// Size: 0x340
class UPowerToastWidget_C : public UFortPlayerPowerRatingToast
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2e8 (0x8)
	class UWidgetAnimation* LookAtMe; // 0x2f0 (0x8)
	class UWidgetAnimation* Outro; // 0x2f8 (0x8)
	class UWidgetAnimation* Intro; // 0x300 (0x8)
	class UImage* Image2; // 0x308 (0x8)
	class UImage* ImagePower; // 0x310 (0x8)
	class UImage* LineSeparator; // 0x318 (0x8)
	class UImage* MoonbeamPowerBack1; // 0x320 (0x8)
	class UImage* MoonbeamPowerBackDifference; // 0x328 (0x8)
	class UImage* PowerIconGlow; // 0x330 (0x8)
	struct FTimerHandle* AnimationDelayTimer; // 0x338 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay (Has no native function)
	void HandleAnimationDelay(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0 (Has no native function)
	void WidgetAnimationEvtIntroK2NodeWidgetAnimationEvent0(); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_1 (Has no native function)
	void WidgetAnimationEvtOutroK2NodeWidgetAnimationEvent1(); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2 (Has no native function)
	void WidgetAnimationEvtOutroK2NodeWidgetAnimationEvent2(); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.ShowToast (Has no native function)
	void ShowToast(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget (Has no native function)
	void ExecuteUbergraphPowerToastWidget(int& EntryPoint, bool& CallFuncGetDisplayTimebOutDisplayTimeOverridden, float& CallFuncGetDisplayTimeReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, struct FPointerEvent& K2NodeEventMouseEvent, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, bool& CallFuncIsAnimationPlayingReturnValue, class UFortRuntimeOptions*& CallFuncGetRuntimeOptionsReturnValue, enum ESlateVisibility& CallFuncGetVisibilityReturnValue); // (Final | 0x00008000 | HasDefaults)
};

