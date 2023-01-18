// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C
// Size: 0x359
class UToastSocialWidget_C : public UFortSocialNotificationWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2f0 (0x8)
	class UWidgetAnimation* OutroNew; // 0x2f8 (0x8)
	class UWidgetAnimation* Intro; // 0x300 (0x8)
	class UCommonBorder* BNotificationImage; // 0x308 (0x8)
	class UCommonBorder* BNotificationImageExtended; // 0x310 (0x8)
	class UIconTextButton_C* ButtonCursor; // 0x318 (0x8)
	class UIconTextButton_C* ButtonHold; // 0x320 (0x8)
	class UCommonBorder* CommonBorderMainWidget; // 0x328 (0x8)
	class UCommonRichTextBlock* DescriptionRichText; // 0x330 (0x8)
	class UFortLazyImage* NotificationImage; // 0x338 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherInputButtons; // 0x340 (0x8)
	class UCommonRichTextBlock* TitleRichText; // 0x348 (0x8)
	struct FTimerHandle* AnimationDelayTimer; // 0x350 (0x8)
	bool bActionTaken; // 0x358 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.GetDisplayTime (Has no native function)
	float GetDisplayTime(bool& bOutDisplayTimeOverridden); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.GetButtonHoldText (Has no native function)
	void GetButtonHoldText(struct FText& Text, class UFortUIFriendNotification*& K2NodeDynamicCastAsFortUIFriendNotification, bool& K2NodeDynamicCastbSuccess, bool& K2NodeSwitchEnumCmpSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.GetButtonCursorText (Has no native function)
	void GetButtonCursorText(struct FText& Text, class UFortUIFriendNotification*& K2NodeDynamicCastAsFortUIFriendNotification, bool& K2NodeDynamicCastbSuccess, bool& K2NodeSwitchEnumCmpSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.SetVisibilityForOptionalElements (Has no native function)
	void SetVisibilityForOptionalElements(enum ESlateVisibility& CallFuncGetInputSwitcherVisibilityReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.TakeAction (Has no native function)
	void TakeAction(bool& CallFuncHasActionReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.CleanupBeforeClosing (Has no native function)
	void CleanupBeforeClosing(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.GetActiveWidgetIndex (Has no native function)
	int GetActiveWidgetIndex(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.GetInputSwitcherVisibility (Has no native function)
	enum ESlateVisibility GetInputSwitcherVisibility(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.SetupAnimBindings (Has no native function)
	void SetupAnimBindings(bool& Unbind, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.SetImage (Has no native function)
	void SetImage(struct TWeakObjectPtr<class UObject>& CallFuncGetDisplayAssetReturnValue, class UTwitchNotification_C*& K2NodeDynamicCastAsTwitchNotification, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidSoftObjectReferenceReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.StartIntro (Has no native function)
	void StartIntro(class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.UpdateToast (Has no native function)
	void UpdateToast(class UFortUINotification*& Notification, class UCommonWidgetSwitcherLegacy*& NewLocalVar3, struct FText& CallFuncGetDescriptionReturnValue, struct FText& CallFuncGetTitleReturnValue, struct FText& CallFuncGetButtonHoldTextText, struct FText& CallFuncGetButtonCursorTextText, int& CallFuncGetActiveWidgetIndexReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.PlayOutro (Has no native function)
	void PlayOutro(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtOpenButtonK2NodeComponentBoundEvent5CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.HandleOutroFinished (Has no native function)
	void HandleOutroFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.HandleIntroFinished (Has no native function)
	void HandleIntroFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnPlayOpenAnimation (Has no native function)
	void OnPlayOpenAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnCursorModeChanged (Has no native function)
	void OnCursorModeChanged(bool& bCursorModeEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtButtonHoldK2NodeComponentBoundEvent0CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnCancelNotification (Has no native function)
	void OnCancelNotification(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnTakeActionNotification (Has no native function)
	void OnTakeActionNotification(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnUserStartedHoldActionNotification (Has no native function)
	void OnUserStartedHoldActionNotification(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnInputModeChanged (Has no native function)
	void OnInputModeChanged(enum ECommonInputType& NewInputType); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnNotificationSet (Has no native function)
	void OnNotificationSet(class UFortUINotification*& Notification); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnNotificationUpdated (Has no native function)
	void OnNotificationUpdated(class UFortUINotification*& Notification); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.ExecuteUbergraph_ToastSocialWidget (Has no native function)
	void ExecuteUbergraphToastSocialWidget(int& EntryPoint, bool& CallFuncGetDisplayTimebOutDisplayTimeOverridden, float& CallFuncGetDisplayTimeReturnValue, bool& TempboolVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, struct FPointerEvent& K2NodeEventMouseEvent, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, bool& K2NodeEventbCursorModeEnabled, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton, bool& CallFuncIsUsingTouchReturnValue, enum ECommonInputType& K2NodeEventNewInputType, bool& CallFuncBooleanORReturnValue, int& CallFuncGetActiveWidgetIndexReturnValue, class UIconTextButton_C*& K2NodeSelectDefault, class UFortUINotification*& K2NodeEventNotification1, class UFortUINotification*& K2NodeEventNotification); // (Final | 0x00008000 | HasDefaults)
};

