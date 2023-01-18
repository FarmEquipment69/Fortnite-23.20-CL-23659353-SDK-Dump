// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C
// Size: 0x319
class UBattlePassPageUnlockedToast_C : public UFortToastWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2b8 (0x8)
	class UWidgetAnimation* OutroNew; // 0x2c0 (0x8)
	class UWidgetAnimation* Intro; // 0x2c8 (0x8)
	class UCommonBorder* BNotificationImage; // 0x2d0 (0x8)
	class UCommonBorder* BNotificationImageExtended; // 0x2d8 (0x8)
	class UCommonBorder* CommonBorderMainWidget; // 0x2e0 (0x8)
	class UCommonTextBlock* Description; // 0x2e8 (0x8)
	class UFortLazyImage* NotificationImage; // 0x2f0 (0x8)
	class UCommonTextBlock* Title; // 0x2f8 (0x8)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x300 (0x10)
	struct FTimerHandle* AnimationDelayTimer; // 0x310 (0x8)
	bool bActionTaken; // 0x318 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetupAnimBindings (Has no native function)
	void SetupAnimBindings(bool& Unbind, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ApplyAdditionalStyling (Has no native function)
	void ApplyAdditionalStyling(class UClass*& NewLocalVar2, class UClass*& NewLocalVar1, class UClass*& NewLocalVar0, enum EFortNotificationType& CallFuncGetNotificationTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetImage (Has no native function)
	void SetImage(struct TWeakObjectPtr<class UObject>& CallFuncGetDisplayAssetReturnValue, class UTwitchNotification_C*& K2NodeDynamicCastAsTwitchNotification, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidSoftObjectReferenceReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.GetOpenButtonVisibility (Has no native function)
	enum ESlateVisibility GetOpenButtonVisibility(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.StartIntro (Has no native function)
	void StartIntro(class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.UpdateToast (Has no native function)
	void UpdateToast(class UFortUINotification*& Notification, struct FText& CallFuncGetDescriptionReturnValue, struct FText& CallFuncGetTitleReturnValue, enum ESlateVisibility& CallFuncGetOpenButtonVisibilityReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.HandleOutroFinished (Has no native function)
	void HandleOutroFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.PlayOutro (Has no native function)
	void PlayOutro(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.HandleIntroFinished (Has no native function)
	void HandleIntroFinished(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnPlayOpenAnimation (Has no native function)
	void OnPlayOpenAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnNotificationSet (Has no native function)
	void OnNotificationSet(class UFortUINotification*& Notification); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnNotificationUpdated (Has no native function)
	void OnNotificationUpdated(class UFortUINotification*& Notification); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ExecuteUbergraph_BattlePassPageUnlockedToast (Has no native function)
	void ExecuteUbergraphBattlePassPageUnlockedToast(int& EntryPoint, bool& CallFuncGetDisplayTimebOutDisplayTimeOverridden, float& CallFuncGetDisplayTimeReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, struct FPointerEvent& K2NodeEventMouseEvent, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UFortUINotification*& K2NodeEventNotification1, class UFortUINotification*& K2NodeEventNotification); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnFinishedToast__DelegateSignature (Has no native function)
	void OnFinishedToastDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

