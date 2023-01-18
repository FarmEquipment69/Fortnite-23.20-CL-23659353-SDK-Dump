// WidgetBlueprintGeneratedClass /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C
// Size: 0x2d8
class UWBP_ContentPurchaseBlocker_C : public UUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class USizeBox* SizeBoxMobile; // 0x270 (0x8)
	class UCommonTextBlock* TextDescription; // 0x278 (0x8)
	class UCommonTextBlock* TextTitle; // 0x280 (0x8)
	class UWBP_UIKit_Button_Loud_C* WBPUIKitButtonLoud; // 0x288 (0x8)
	struct FText TextDetails; // 0x290 (0x18)
	int MaxWidth; // 0x2a8 (0x4)
	unsigned char unreflected_2ac[0x4]; // 0x2ac (0x4) 
	struct TWeakObjectPtr<class UClass> ParentalControlsScreenClass; // 0x2b0 (0x28)

	/* Functions */

	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.SetVisuals (Has no native function)
	void SetVisuals(int& MaxWidth); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.Set Data (Has no native function)
	void SetData(struct FText& InText); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.OnComplete_EDE27478404080C54EDC0D863BB58408 (Has no native function)
	void OnCompleteEDE27478404080C54EDC0D863BB58408(class UUserWidget*& UserWidget); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature (Has no native function)
	void BndEvtWBPContentPurchaseBlockerWBPUIKitButtonLoudK2NodeComponentBoundEvent0CommonButtonBaseClickedDelegateSignature(class UCommonButtonBase*& Button); // (BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.OnInputMethodChanged (Has no native function)
	void OnInputMethodChanged(enum ECommonInputType& bNewInputType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.ExecuteUbergraph_WBP_ContentPurchaseBlocker (Has no native function)
	void ExecuteUbergraphWBPContentPurchaseBlocker(int& EntryPoint, class UUserWidget*& TempobjectVariable, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue, enum ECommonInputType& TempbyteVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& TempboolVariable, bool& TempboolVariable1, bool& TempboolVariable2, bool& TempboolVariable3, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue1, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue2, bool& K2NodeEventIsDesignTime, class UCommonButtonBase*& K2NodeComponentBoundEventButton, class APlayerController*& CallFuncGetOwningPlayerReturnValue, class UFortAsyncAction_CreateWidgetAsync*& CallFuncCreateWidgetAsyncReturnValue, enum ECommonInputType& K2NodeCustomEventbNewInputType, bool& CallFuncIsValidReturnValue, bool& K2NodeSelectDefault, class UUserWidget*& K2NodeCustomEventUserWidget, struct FDelegate& K2NodeCreateDelegateOutputDelegate1); // (Final | 0x00008000)
};

