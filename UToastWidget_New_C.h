// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C
// Size: 0x321
class UToastWidget_New_C : public UFortToastWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2b8 (0x8)
	class UWidgetAnimation* OutroNew; // 0x2c0 (0x8)
	class UWidgetAnimation* Intro; // 0x2c8 (0x8)
	class UCommonBorder* BNotificationImage; // 0x2d0 (0x8)
	class UCommonBorder* BNotificationImageExtended; // 0x2d8 (0x8)
	class UCommonBorder* CommonBorderMainWidget; // 0x2e0 (0x8)
	class UCommonRichTextBlock* DescriptionRichText; // 0x2e8 (0x8)
	class UFortLazyImage* NotificationImage; // 0x2f0 (0x8)
	class UIconTextButton_C* OpenButton; // 0x2f8 (0x8)
	class UCommonRichTextBlock* TitleRichText; // 0x300 (0x8)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x308 (0x10)
	struct FTimerHandle* AnimationDelayTimer; // 0x318 (0x8)
	bool bActionTaken; // 0x320 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.GetDisplayTime (Has no native function)
	float GetDisplayTime(bool& bOutDisplayTimeOverridden); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.SetupAnimBindings (Has no native function)
	void SetupAnimBindings(bool& Unbind, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.SetImage (Has no native function)
	void SetImage(struct TWeakObjectPtr<class UObject>& CallFuncGetDisplayAssetReturnValue, class UTwitchNotification_C*& K2NodeDynamicCastAsTwitchNotification, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidSoftObjectReferenceReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.GetOpenButtonVisibility (Has no native function)
	enum ESlateVisibility GetOpenButtonVisibility(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.StartIntro (Has no native function)
	void StartIntro(class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.UpdateToast (Has no native function)
	void UpdateToast(class UFortUINotification*& Notification, struct FText& CallFuncGetDescriptionReturnValue, class UFortUIFriendNotification*& K2NodeDynamicCastAsFortUIFriendNotification, bool& K2NodeDynamicCastbSuccess, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData, bool& K2NodeSwitchEnumCmpSuccess, bool& CallFuncHasActionReturnValue, struct FText& CallFuncGetDescriptionReturnValue1, struct FText& CallFuncGetTitleReturnValue, struct FText& CallFuncMakeLiteralTextReturnValue, class UFortGlobalUIContext*& CallFuncGetLocalPlayerSubsystemReturnValue, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData1, bool& CallFuncIsInZoneReturnValue, struct TArray<struct FFormatArgumentData>& K2NodeMakeArrayArray, struct FText& CallFuncFormatReturnValue, enum ESlateVisibility& CallFuncGetOpenButtonVisibilityReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.PlayOutro (Has no native function)
	void PlayOutro(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtOpenButtonK2NodeComponentBoundEvent5CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.HandleOutroFinished (Has no native function)
	void HandleOutroFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.HandleIntroFinished (Has no native function)
	void HandleIntroFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.OnPlayOpenAnimation (Has no native function)
	void OnPlayOpenAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.OnNotificationSet (Has no native function)
	void OnNotificationSet(class UFortUINotification*& Notification); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.OnNotificationUpdated (Has no native function)
	void OnNotificationUpdated(class UFortUINotification*& Notification); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.ExecuteUbergraph_ToastWidget_New (Has no native function)
	void ExecuteUbergraphToastWidgetNew(int& EntryPoint, bool& CallFuncGetDisplayTimebOutDisplayTimeOverridden, float& CallFuncGetDisplayTimeReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, struct FPointerEvent& K2NodeEventMouseEvent, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UFortUINotification*& K2NodeEventNotification1, class UFortUINotification*& K2NodeEventNotification, bool& CallFuncHasActionReturnValue); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.OnFinishedToast__DelegateSignature (Has no native function)
	void OnFinishedToastDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

