// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C
// Size: 0x328
class ULightbox_C : public UCommonUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x290 (0x8)
	class UWidgetAnimation* FadeOut; // 0x298 (0x8)
	class UWidgetAnimation* FadeIn; // 0x2a0 (0x8)
	class UBorder* BorderDarken; // 0x2a8 (0x8)
	class UButton* ClickCatcher; // 0x2b0 (0x8)
	class UNamedSlot* Content; // 0x2b8 (0x8)
	class UBorder* Dimmer; // 0x2c0 (0x8)
	class USafeZone* SafeZone0; // 0x2c8 (0x8)
	class UCommonVisibilityWidgetLegacy* WindowButtons; // 0x2d0 (0x8)
	class UOverlay* WindowsOverlay; // 0x2d8 (0x8)
	class Uwindowchromebuttons_C* WindowTitleBar; // 0x2e0 (0x8)
	struct FMulticastInlineDelegate IntroEnded; // 0x2e8 (0x10)
	struct FMulticastInlineDelegate OutroEnded; // 0x2f8 (0x10)
	bool ShowWindowControlButtons; // 0x308 (0x1)
	unsigned char unreflected_309[0x7]; // 0x309 (0x7) 
	double DimAmount; // 0x310 (0x8)
	struct FLinearColor BackgroundColor; // 0x318 (0x10)

	/* Functions */

	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.RemoveContent (Has no native function)
	void RemoveContent(bool& CallFuncHasAnyChildrenReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.AddContent (Has no native function)
	void AddContent(class UCommonUserWidget*& Content, class UPanelSlot*& CallFuncAddChildReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.Outro (Has no native function)
	void Outro(class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.Intro (Has no native function)
	void Intro(class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0 (Has no native function)
	void WidgetAnimationEvtFadeInK2NodeWidgetAnimationEvent0(); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1 (Has no native function)
	void WidgetAnimationEvtFadeOutK2NodeWidgetAnimationEvent1(); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.ExecuteUbergraph_Lightbox (Has no native function)
	void ExecuteUbergraphLightbox(int& EntryPoint, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& K2NodeEventIsDesignTime, bool& TempboolVariable, enum ESlateVisibility& K2NodeSelectDefault, struct FLinearColor& CallFuncMakeColorReturnValue, float& CallFuncMakeColorAImplicitCast); // (Final | 0x00008000)

	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.OutroEnded__DelegateSignature (Has no native function)
	void OutroEndedDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.IntroEnded__DelegateSignature (Has no native function)
	void IntroEndedDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

