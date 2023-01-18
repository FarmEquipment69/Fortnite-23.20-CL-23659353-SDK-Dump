// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C
// Size: 0x311
class UToastWidgetDonut_C : public UFortToastWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2b8 (0x8)
	class UWidgetAnimation* OutroNew; // 0x2c0 (0x8)
	class UWidgetAnimation* Intro; // 0x2c8 (0x8)
	class UCommonBorder* CommonBorderMainWidget; // 0x2d0 (0x8)
	class UCommonTextBlock* Description; // 0x2d8 (0x8)
	class UImage* Image134; // 0x2e0 (0x8)
	class UTextBlock* TextBlock0; // 0x2e8 (0x8)
	class UCommonTextBlock* Title; // 0x2f0 (0x8)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x2f8 (0x10)
	struct FTimerHandle* AnimationDelayTimer; // 0x308 (0x8)
	bool bActionTaken; // 0x310 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.SetupAnimBindings (Has no native function)
	void SetupAnimBindings(bool& Unbind, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.ApplyAdditionalStyling (Has no native function)
	void ApplyAdditionalStyling(class UClass*& TempclassVariable, bool& TempboolVariable, class UClass*& TempclassVariable1, class UClass*& TempclassVariable2, bool& TempboolVariable1, class UClass*& TempclassVariable3, class UClass*& TempclassVariable4, enum EFortNotificationType& CallFuncGetNotificationTypeReturnValue, class UClass*& TempclassVariable5, bool& CallFuncEqualEqualByteByteReturnValue, class UClass*& K2NodeSelectDefault, class UClass*& K2NodeSelectDefault1, bool& TempboolVariable2, class UClass*& K2NodeSelectDefault2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.SetImage (Has no native function)
	void SetImage(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.GetOpenButtonVisibility (Has no native function)
	enum ESlateVisibility GetOpenButtonVisibility(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.StartIntro (Has no native function)
	void StartIntro(class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.UpdateToast (Has no native function)
	void UpdateToast(class UFortUINotification*& Notification, class UFortGlobalUIContext*& CallFuncGetLocalPlayerSubsystemReturnValue, struct FText& CallFuncGetDescriptionReturnValue, bool& CallFuncIsInZoneReturnValue, struct FText& CallFuncGetDescriptionReturnValue1, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData, class UFortUIFriendNotification*& K2NodeDynamicCastAsFortUIFriendNotification, bool& K2NodeDynamicCastbSuccess, bool& CallFuncHasActionReturnValue, bool& K2NodeSwitchEnumCmpSuccess, struct FText& CallFuncMakeLiteralTextReturnValue, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData1, struct TArray<struct FFormatArgumentData>& K2NodeMakeArrayArray, struct FText& CallFuncFormatReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.HandleOutroFinished (Has no native function)
	void HandleOutroFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.PlayOutro (Has no native function)
	void PlayOutro(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.HandleIntroFinished (Has no native function)
	void HandleIntroFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.OnPlayOpenAnimation (Has no native function)
	void OnPlayOpenAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.OnNotificationSet (Has no native function)
	void OnNotificationSet(class UFortUINotification*& Notification); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.OnNotificationUpdated (Has no native function)
	void OnNotificationUpdated(class UFortUINotification*& Notification); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.ExecuteUbergraph_ToastWidgetDonut (Has no native function)
	void ExecuteUbergraphToastWidgetDonut(int& EntryPoint, bool& CallFuncGetDisplayTimebOutDisplayTimeOverridden, float& CallFuncGetDisplayTimeReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UFortUINotification*& K2NodeEventNotification1, class UFortUINotification*& K2NodeEventNotification); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.OnFinishedToast__DelegateSignature (Has no native function)
	void OnFinishedToastDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

