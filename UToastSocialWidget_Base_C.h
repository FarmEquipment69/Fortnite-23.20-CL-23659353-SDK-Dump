// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C
// Size: 0x451
class UToastSocialWidget_Base_C : public UFortSocialNotificationWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2f0 (0x8)
	class UWidgetAnimation* TapAccept; // 0x2f8 (0x8)
	class UWidgetAnimation* ClickAccept; // 0x300 (0x8)
	class UWidgetAnimation* IntroNeutralInfoSimple; // 0x308 (0x8)
	class UWidgetAnimation* IntroGoodInfoSimple; // 0x310 (0x8)
	class UWidgetAnimation* IntroBadInfoSimple; // 0x318 (0x8)
	class UWidgetAnimation* IntroNeutralInfo; // 0x320 (0x8)
	class UWidgetAnimation* IntroGoodInfo; // 0x328 (0x8)
	class UWidgetAnimation* IntroBadInfo; // 0x330 (0x8)
	class UWidgetAnimation* TimeToRespond; // 0x338 (0x8)
	class UWidgetAnimation* OutroNew; // 0x340 (0x8)
	class UWidgetAnimation* HoldProgress; // 0x348 (0x8)
	class UWidgetAnimation* IntroAction; // 0x350 (0x8)
	class UImage* BackgroundMat; // 0x358 (0x8)
	class UIconTextButtonHold_C* ButtonCursor; // 0x360 (0x8)
	class UIconTextButton_C* ButtonHold; // 0x368 (0x8)
	class UFortMobileImage* HamburgerIcon; // 0x370 (0x8)
	class UImage* ImageFail; // 0x378 (0x8)
	class UImage* ImageInfo; // 0x380 (0x8)
	class UImage* ImageSuccess; // 0x388 (0x8)
	class UImage* ImageTrim; // 0x390 (0x8)
	class UFortLazyImage* LazyImageIcon; // 0x398 (0x8)
	class UOverlay* OverlayInputKeybind; // 0x3a0 (0x8)
	class UOverlay* OverlayResultIcon; // 0x3a8 (0x8)
	class UImage* ProgressCircle; // 0x3b0 (0x8)
	class UScaleBox* ScaleBoxInputPad; // 0x3b8 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherInputButtons; // 0x3c0 (0x8)
	class UCommonTextBlock* TextAction; // 0x3c8 (0x8)
	class UCommonRichTextBlock* TextDesc; // 0x3d0 (0x8)
	class UCommonRichTextBlock* TextTitle; // 0x3d8 (0x8)
	class UImage* TextureIcon; // 0x3e0 (0x8)
	class UImage* ToastCushion; // 0x3e8 (0x8)
	class UVerticalBox* VerticalBoxHoldAction; // 0x3f0 (0x8)
	class UVerticalBox* VerticalBoxInfo; // 0x3f8 (0x8)
	class UWBP_RebootRallyIcon_C* WBPRebootRallyIcon; // 0x400 (0x8)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x408 (0x10)
	struct FTimerHandle* AnimationDelayTimer; // 0x418 (0x8)
	bool bActionTaken; // 0x420 (0x1)
	bool UseComplexAnims; // 0x421 (0x1)
	bool NewVar; // 0x422 (0x1)
	unsigned char unreflected_423[0x5]; // 0x423 (0x5) 
	struct TWeakObjectPtr<class UObject> DownloadOnDemandErrorIcon; // 0x428 (0x28)
	bool bUsingNewAvatars; // 0x450 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.SequenceEvent__ENTRYPOINTToastSocialWidget_Base_1 (Has no native function)
	void SequenceEventENTRYPOINTToastSocialWidgetBase1(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.SequenceEvent__ENTRYPOINTToastSocialWidget_Base_0 (Has no native function)
	void SequenceEventENTRYPOINTToastSocialWidgetBase0(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.SequenceEvent__ENTRYPOINTToastSocialWidget_Base (Has no native function)
	void SequenceEventENTRYPOINTToastSocialWidgetBase(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.UpdateIcons (Has no native function)
	void UpdateIcons(struct TWeakObjectPtr<class UObject>& LocalIconDisplayAsset, bool& bLocalShowIcon, bool& bLocalShowAvatar, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, enum EFortNotificationType& CallFuncGetNotificationTypeReturnValue, struct TWeakObjectPtr<class UObject>& CallFuncGetDisplayAssetReturnValue, bool& K2NodeSwitchEnumCmpSuccess, bool& CallFuncIsValidSoftObjectReferenceReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidSoftObjectReferenceReturnValue1, enum ESlateVisibility& K2NodeSelectDefault, bool& TempboolVariable1, enum ESlateVisibility& K2NodeSelectDefault1, bool& TempboolVariable2, class UWidget*& K2NodeSelectDefault2); // (Private | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.ResetMaterials (Has no native function)
	void ResetMaterials(bool& TempboolVariable, struct FSlateColor& K2NodeMakeStructSlateColor, class UWidget*& K2NodeSelectDefault, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue1, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue2); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.DetermineIntroAnim (Has no native function)
	class UWidgetAnimation* DetermineIntroAnim(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.InputBasedStyling (Has no native function)
	void InputBasedStyling(enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable, double& TemprealVariable, double& TemprealVariable1, enum ECommonInputType& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, enum ESlateVisibility& TempbyteVariable4, enum ESlateVisibility& TempbyteVariable5, enum ECommonInputType& TempbyteVariable6, double& TemprealVariable2, double& TemprealVariable3, double& TemprealVariable4, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, struct FText& CallFuncHandleNotificationTypeReturn, bool& TempboolVariable1, bool& CallFuncGetIsInGameReturnValue, enum ESlateVisibility& K2NodeSelectDefault, enum ESlateVisibility& K2NodeSelectDefault1, double& K2NodeSelectDefault2, double& K2NodeSelectDefault3, struct FVector2D& CallFuncMakeVector2DReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleNotificationType (Has no native function)
	void HandleNotificationType(struct FText& Return, bool& TempboolVariable, enum ECommonInputType& TempbyteVariable, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue, bool& TempboolVariable1, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, enum ECommonInputType& TempbyteVariable1, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue1, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue1, class UFortUIFriendNotification*& K2NodeDynamicCastAsFortUIFriendNotification, bool& K2NodeDynamicCastbSuccess, bool& CallFuncGetIsInGameReturnValue, bool& K2NodeSwitchEnumCmpSuccess, bool& CallFuncGetIsInGameReturnValue1, bool& CallFuncGetIsInGameReturnValue2, bool& CallFuncGetIsInGameReturnValue3, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue2, enum ECommonInputType& TempbyteVariable2, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue2, struct FText& CallFuncMakeLiteralTextReturnValue, struct FText& CallFuncMakeLiteralTextReturnValue1, bool& TempboolVariable2, struct FText& CallFuncMakeLiteralTextReturnValue2, struct FText& CallFuncMakeLiteralTextReturnValue3, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue3, struct FText& K2NodeSelectDefault, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue3, struct FText& K2NodeSelectDefault1, struct FText& CallFuncMakeLiteralTextReturnValue4, struct FText& CallFuncMakeLiteralTextReturnValue5, struct FText& K2NodeSelectDefault2, enum ECommonInputType& TempbyteVariable3, struct FText& K2NodeSelectDefault3, struct FText& CallFuncMakeLiteralTextReturnValue6, struct FText& CallFuncMakeLiteralTextReturnValue7, bool& TempboolVariable3, struct FText& K2NodeSelectDefault4, struct FText& K2NodeSelectDefault5, struct FText& K2NodeSelectDefault6, struct FText& K2NodeSelectDefault7, bool& CallFuncIsValidReturnValue, enum EFortNotificationType& CallFuncGetNotificationTypeReturnValue, bool& K2NodeSwitchEnumCmpSuccess1); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetButtonHoldText (Has no native function)
	void GetButtonHoldText(struct FText& Text, class UFortUIFriendNotification*& K2NodeDynamicCastAsFortUIFriendNotification, bool& K2NodeDynamicCastbSuccess, bool& K2NodeSwitchEnumCmpSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetButtonCursorText (Has no native function)
	void GetButtonCursorText(struct FText& Text, class UFortUIFriendNotification*& K2NodeDynamicCastAsFortUIFriendNotification, bool& K2NodeDynamicCastbSuccess, bool& K2NodeSwitchEnumCmpSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetVisibilityForOptionalElements (Has no native function)
	void SetVisibilityForOptionalElements(enum ESlateVisibility& CallFuncGetInputSwitcherVisibilityReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.TakeAction (Has no native function)
	void TakeAction(bool& CallFuncHasActionReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.CleanupBeforeClosing (Has no native function)
	void CleanupBeforeClosing(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetActiveWidgetIndex (Has no native function)
	int GetActiveWidgetIndex(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetInputSwitcherVisibility (Has no native function)
	enum ESlateVisibility GetInputSwitcherVisibility(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetupAnimBindings (Has no native function)
	void SetupAnimBindings(bool& Unbind, bool& TempboolVariable, class UWidgetAnimation*& CallFuncDetermineIntroAnimReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, class UWidgetAnimation*& K2NodeSelectDefault, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.ApplyAdditionalStyling (Has no native function)
	void ApplyAdditionalStyling(class UClass*& NewLocalVar2, class UClass*& NewLocalVar1, class UClass*& NewLocalVar0, enum EFortNotificationType& CallFuncGetNotificationTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetImage (Has no native function)
	void SetImage(struct TWeakObjectPtr<class UObject>& CallFuncGetDisplayAssetReturnValue, bool& CallFuncIsValidSoftObjectReferenceReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.UpdateToast (Has no native function)
	void UpdateToast(class UFortUINotification*& Notification, class UCommonWidgetSwitcherLegacy*& NewLocalVar3, struct FText& CallFuncGetDescriptionReturnValue, struct FText& CallFuncGetTitleReturnValue, int& CallFuncGetActiveWidgetIndexReturnValue, enum ESlateVisibility& CallFuncGetInputSwitcherVisibilityReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleIntroFinished (Has no native function)
	void HandleIntroFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleOutroFinished (Has no native function)
	void HandleOutroFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.PlayOutro (Has no native function)
	void PlayOutro(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtOpenButtonK2NodeComponentBoundEvent5CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnPlayOpenAnimation (Has no native function)
	void OnPlayOpenAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnCursorModeChanged (Has no native function)
	void OnCursorModeChanged(bool& bCursorModeEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtButtonHoldK2NodeComponentBoundEvent0CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnCancelNotification (Has no native function)
	void OnCancelNotification(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnTakeActionNotification (Has no native function)
	void OnTakeActionNotification(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnUserStartedHoldActionNotification (Has no native function)
	void OnUserStartedHoldActionNotification(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnInputModeChanged (Has no native function)
	void OnInputModeChanged(enum ECommonInputType& NewInputType); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.HoldComplete (Has no native function)
	void HoldComplete(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtToastSocialWidgetBaseButtonCursorK2NodeComponentBoundEvent1CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtToastSocialWidgetBaseButtonCursorK2NodeComponentBoundEvent2CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_3_HoldActionStarted__DelegateSignature (Has no native function)
	void BndEvtToastSocialWidgetBaseIconTextButtonHoldK2NodeComponentBoundEvent3HoldActionStartedDelegateSignature(); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_4_HoldActionEnded__DelegateSignature (Has no native function)
	void BndEvtToastSocialWidgetBaseIconTextButtonHoldK2NodeComponentBoundEvent4HoldActionEndedDelegateSignature(); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_6_HoldActionCompleted__DelegateSignature (Has no native function)
	void BndEvtToastSocialWidgetBaseIconTextButtonHoldK2NodeComponentBoundEvent6HoldActionCompletedDelegateSignature(); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnNotificationSet (Has no native function)
	void OnNotificationSet(class UFortUINotification*& Notification); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnNotificationUpdated (Has no native function)
	void OnNotificationUpdated(class UFortUINotification*& Notification); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnNewAvatarsEnabledChanged (Has no native function)
	void OnNewAvatarsEnabledChanged(bool& bUsingNewAvatars); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.ExecuteUbergraph_ToastSocialWidget_Base (Has no native function)
	void ExecuteUbergraphToastSocialWidgetBase(int& EntryPoint, double& TemprealVariable, struct FSlateColor& K2NodeMakeStructSlateColor, struct FSlateColor& K2NodeMakeStructSlateColor1, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue1, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue1, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, bool& TempboolVariable, bool& TempboolVariable1, bool& TempboolVariable2, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable3, enum ESlateVisibility& K2NodeSelectDefault, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, enum ESlateVisibility& K2NodeSelectDefault1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, struct FPointerEvent& K2NodeEventMouseEvent, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton3, bool& K2NodeEventbCursorModeEnabled, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton2, bool& CallFuncIsUsingTouchReturnValue, enum ECommonInputType& K2NodeEventNewInputType, bool& CallFuncBooleanORReturnValue, int& CallFuncGetActiveWidgetIndexReturnValue, bool& K2NodeEventIsDesignTime, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, double& TemprealVariable1, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, float& CallFuncPauseAnimationReturnValue, bool& CallFuncIsAnimationPlayingReturnValue, float& CallFuncGetAnimationCurrentTimeReturnValue, bool& CallFuncInRangeFloatFloatReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, class UWidgetAnimation*& CallFuncDetermineIntroAnimReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, bool& CallFuncIsValidReturnValue, bool& TempboolVariable4, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton1, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton, double& K2NodeSelectDefault2, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue1, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue2, double& TemprealVariable2, bool& TempboolVariable5, bool& CallFuncNotPreBoolReturnValue, class UWidgetAnimation*& K2NodeSelectDefault3, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue3, class UWidget*& K2NodeSelectDefault4, enum ESlateVisibility& CallFuncGetVisibilityReturnValue, class UFortUINotification*& K2NodeEventNotification1, bool& CallFuncNotEqualByteByteReturnValue, class UFortUINotification*& K2NodeEventNotification, bool& CallFuncHasActionReturnValue, bool& CallFuncHasActionReturnValue1, bool& CallFuncHasActionReturnValue2, double& K2NodeSelectDefault5, bool& CallFuncBooleanANDReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue4, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncGetDisplayTimebOutDisplayTimeOverridden, float& CallFuncGetDisplayTimeReturnValue, bool& CallFuncGetDisplayTimebOutDisplayTimeOverridden1, float& CallFuncGetDisplayTimeReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncDivideDoubleDoubleReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue5, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue6, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& K2NodeEventbUsingNewAvatars, double& CallFuncInRangeFloatFloatValueImplicitCast, float& CallFuncPlayAnimationPlaybackSpeedImplicitCast, double& CallFuncDivideDoubleDoubleBImplicitCast, double& CallFuncDivideDoubleDoubleBImplicitCast1, float& CallFuncPlayAnimationPlaybackSpeedImplicitCast1, float& CallFuncPlayAnimationPlaybackSpeedImplicitCast2); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnFinishedToast__DelegateSignature (Has no native function)
	void OnFinishedToastDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

