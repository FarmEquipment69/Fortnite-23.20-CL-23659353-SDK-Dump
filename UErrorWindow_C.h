// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C
// Size: 0x640
class UErrorWindow_C : public UFortErrorWindow
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x5c0 (0x8)
	class UWidgetAnimation* Llama3; // 0x5c8 (0x8)
	class UWidgetAnimation* Llama2; // 0x5d0 (0x8)
	class UWidgetAnimation* Intro1; // 0x5d8 (0x8)
	class UWidgetAnimation* Llama1; // 0x5e0 (0x8)
	class UErrorLlama_C* ErrorLlama0; // 0x5e8 (0x8)
	class UErrorLlama_C* ErrorLlamaC0; // 0x5f0 (0x8)
	class UErrorLlama_C* ErrorLlamaC1; // 0x5f8 (0x8)
	class UImage* ImageSeparatorDown; // 0x600 (0x8)
	class UImage* ImageSeparatorUp; // 0x608 (0x8)
	class ULightbox_C* Lightbox; // 0x610 (0x8)
	class UWidgetAnimation* CurLlamaAnim; // 0x618 (0x8)
	struct TArray<class UErrorLlama_C*> LlamaArray; // 0x620 (0x10)
	struct FTimerHandle* LlamaReverseTimer; // 0x630 (0x8)
	struct FTimerHandle* AmbientLlamaPlayTimer; // 0x638 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.OnAnalogValueChanged (Has no native function)
	struct FEventReply OnAnalogValueChanged(struct FGeometry& MyGeometry, struct FAnalogInputEvent& InAnalogInputEvent); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.Initialize Close Button (Has no native function)
	void InitializeCloseButton(class UFortGlobalUIContext*& CallFuncGetContextReturnValue, int& CallFuncGetInputPriorityReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.OnBeginOutro (Has no native function)
	void OnBeginOutro(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.OnBeginIntro (Has no native function)
	void OnBeginIntro(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.BP_OnActivated (Has no native function)
	void BPOnActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.HandleLlamaAnimFinish (Has no native function)
	void HandleLlamaAnimFinish(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.LlamaReverse (Has no native function)
	void LlamaReverse(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.HandleLlamaCycleFinished (Has no native function)
	void HandleLlamaCycleFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.PlayRandomAmbientLlama (Has no native function)
	void PlayRandomAmbientLlama(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.StartAmbientLlamaSequence (Has no native function)
	void StartAmbientLlamaSequence(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.ResetLlamas (Has no native function)
	void ResetLlamas(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.OnOverrideCloseButtonText (Has no native function)
	void OnOverrideCloseButtonText(struct FText& OverrideText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow (Has no native function)
	void ExecuteUbergraphErrorWindow(int& EntryPoint, int& TempintVariable, int& TempintVariable1, int& CallFuncAddIntIntReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, int& CallFuncRandomIntegerInRangeReturnValue, class UWidgetAnimation*& K2NodeSelectDefault, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, double& CallFuncRandomFloatInRangeReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct TArray<class UErrorLlama_C*>& K2NodeMakeArrayArray, class UErrorLlama_C*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, double& CallFuncRandomFloatInRangeReturnValue1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, bool& CallFuncIsMobileGameReturnValue, float& CallFuncGetEndTimeReturnValue, float& CallFuncGetEndTimeReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue3, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue4, float& CallFuncGetEndTimeReturnValue2, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue5, struct FText& K2NodeEventOverrideText, class UIconTextButton_C*& K2NodeDynamicCastAsIconTextButton, bool& K2NodeDynamicCastbSuccess, float& CallFuncK2SetTimerDelegateTimeImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast1); // (Final | 0x00008000 | HasDefaults)
};

