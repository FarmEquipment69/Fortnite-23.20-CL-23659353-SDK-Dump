// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C
// Size: 0x349
class UToastWidget_MinorError_C : public UFortToastWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2b8 (0x8)
	class UWidgetAnimation* OutroNew; // 0x2c0 (0x8)
	class UWidgetAnimation* Intro212; // 0x2c8 (0x8)
	class UWidgetAnimation* Intro4114; // 0x2d0 (0x8)
	class UWidgetAnimation* Intronew2; // 0x2d8 (0x8)
	class UWidgetAnimation* Outro; // 0x2e0 (0x8)
	class UWidgetAnimation* Intro; // 0x2e8 (0x8)
	class UCommonBorder* BNotificationImage; // 0x2f0 (0x8)
	class UCommonBorder* BNotificationImageExtended; // 0x2f8 (0x8)
	class UCommonBorder* CommonBorderMainWidget; // 0x300 (0x8)
	class UCommonTextBlock* Description; // 0x308 (0x8)
	class UImage* NotificationImage; // 0x310 (0x8)
	class UIconTextButton_C* OpenButton; // 0x318 (0x8)
	class UCommonTextBlock* ProgrammerNote; // 0x320 (0x8)
	class UCommonTextBlock* Title; // 0x328 (0x8)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x330 (0x10)
	struct FTimerHandle* AnimationDelayTimer; // 0x340 (0x8)
	bool bActionTaken; // 0x348 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.SetupAnimBindings (Has no native function)
	void SetupAnimBindings(bool& Unbind, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.ApplyAdditionalStyling (Has no native function)
	void ApplyAdditionalStyling(class UClass*& TempclassVariable, bool& TempboolVariable, class UClass*& TempclassVariable1, class UClass*& TempclassVariable2, bool& TempboolVariable1, class UClass*& TempclassVariable3, class UClass*& TempclassVariable4, class UClass*& TempclassVariable5, enum EFortNotificationType& CallFuncGetNotificationTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, class UClass*& K2NodeSelectDefault, class UClass*& K2NodeSelectDefault1, bool& TempboolVariable2, class UClass*& K2NodeSelectDefault2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.GetOpenButtonVisibility (Has no native function)
	enum ESlateVisibility GetOpenButtonVisibility(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.StartIntro (Has no native function)
	void StartIntro(class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.UpdateToast (Has no native function)
	void UpdateToast(class UFortUINotification*& Notification, int& TempintVariable, struct FText& TemptextVariable, struct FText& TemptextVariable1, struct FText& TemptextVariable2, enum EFortNotificationType& CallFuncGetNotificationTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, struct FText& CallFuncGetDescriptionReturnValue, struct FLinearColor& K2NodeMakeStructLinearColor, struct FText& CallFuncGetTitleReturnValue, struct FLinearColor& K2NodeMakeStructLinearColor1, struct FSlateBrush& K2NodeMakeStructSlateBrush, bool& TempboolVariable, int& CallFuncRandomIntegerInRangeReturnValue, struct FLinearColor& K2NodeSelectDefault, struct FText& K2NodeSelectDefault1, enum ESlateVisibility& CallFuncGetOpenButtonVisibilityReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.PlayOutro (Has no native function)
	void PlayOutro(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtOpenButtonK2NodeComponentBoundEvent5CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.HandleOutroFinished (Has no native function)
	void HandleOutroFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.HandleIntroFinished (Has no native function)
	void HandleIntroFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.OnPlayOpenAnimation (Has no native function)
	void OnPlayOpenAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.OnNotificationSet (Has no native function)
	void OnNotificationSet(class UFortUINotification*& Notification); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.OnNotificationUpdated (Has no native function)
	void OnNotificationUpdated(class UFortUINotification*& Notification); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.ExecuteUbergraph_ToastWidget_MinorError (Has no native function)
	void ExecuteUbergraphToastWidgetMinorError(int& EntryPoint, bool& CallFuncGetDisplayTimebOutDisplayTimeOverridden, float& CallFuncGetDisplayTimeReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, struct FPointerEvent& K2NodeEventMouseEvent, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UFortUINotification*& K2NodeEventNotification1, class UFortUINotification*& K2NodeEventNotification, bool& CallFuncHasActionReturnValue); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.OnFinishedToast__DelegateSignature (Has no native function)
	void OnFinishedToastDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

