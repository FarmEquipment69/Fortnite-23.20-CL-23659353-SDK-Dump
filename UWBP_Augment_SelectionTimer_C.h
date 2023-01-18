// WidgetBlueprintGeneratedClass /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C
// Size: 0x448
class UWBP_Augment_SelectionTimer_C : public UFortPlayerAugmentHUDTimerWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2d0 (0x8)
	class UWidgetAnimation* AnimAugmentReadyIncreaseCount; // 0x2d8 (0x8)
	class UWidgetAnimation* AnimAugmentReadyReminder; // 0x2e0 (0x8)
	class UWidgetAnimation* AnimAugmentReadyLooping; // 0x2e8 (0x8)
	class UWidgetAnimation* AnimAugmentReady; // 0x2f0 (0x8)
	class UWidgetAnimation* AnimTimerTextCountdownUpdated; // 0x2f8 (0x8)
	class UWidgetAnimation* AnimProgressBarCountdownUpdated; // 0x300 (0x8)
	class UWidgetAnimation* AnimCountdownReveal; // 0x308 (0x8)
	class UBorder* AttentionLineAnimBorder; // 0x310 (0x8)
	class UBorder* BorderMobile; // 0x318 (0x8)
	class UImage* BottomShadow; // 0x320 (0x8)
	class UOverlay* DeviceAndProgressBar; // 0x328 (0x8)
	class UHorizontalBox* HorizontalBoxContent; // 0x330 (0x8)
	class UImage* ImageTimerProgressBar; // 0x338 (0x8)
	class UKeybindWidget_C* KeybindOpenAugmentsAction; // 0x340 (0x8)
	class USizeBox* KeybindSizeBox; // 0x348 (0x8)
	class UImage* MultiplierBacking; // 0x350 (0x8)
	class USpacer* OverallHeightControl; // 0x358 (0x8)
	class UOverlay* OverlayAttentionLIne; // 0x360 (0x8)
	class UOverlay* OverlayDeviceAndTimer; // 0x368 (0x8)
	class UOverlay* OverlayFXGlowAndBacking; // 0x370 (0x8)
	class UOverlay* OverlayMain; // 0x378 (0x8)
	class UOverlay* OverlayReadyPrompt; // 0x380 (0x8)
	class USpacer* ScreenEdgePadding; // 0x388 (0x8)
	class USizeBox* SizeBoxTimer; // 0x390 (0x8)
	class UCommonTextBlock* TextAugmentMulitplier; // 0x398 (0x8)
	class UCommonTextBlock* TextAugmentReady; // 0x3a0 (0x8)
	class UCommonTextBlock* TextAugmentTimer; // 0x3a8 (0x8)
	class UImage* TopShadow; // 0x3b0 (0x8)
	class UFortControllerComponent_SpyTechPerkSystem* OwningPerkComponent; // 0x3b8 (0x8)
	int CountdownStartTime; // 0x3c0 (0x4)
	unsigned char unreflected_3c4[0x4]; // 0x3c4 (0x4) 
	class UMaterialInstanceDynamic* TimerProgressDMI; // 0x3c8 (0x8)
	int NumPendingAugmentstoGrant; // 0x3d0 (0x4)
	bool CanSelectAugment; // 0x3d4 (0x1)
	bool IsCountdownActive; // 0x3d5 (0x1)
	unsigned char unreflected_3d6[0x2]; // 0x3d6 (0x2) 
	struct FText TextAugmentReady; // 0x3d8 (0x18)
	struct FText TextAugmentCount; // 0x3f0 (0x18)
	bool IsAugmentReadyVisible; // 0x408 (0x1)
	unsigned char unreflected_409[0x7]; // 0x409 (0x7) 
	double ReminderFrequencyInSeconds; // 0x410 (0x8)
	struct FTimerHandle* AugmentReadyReminderTimer; // 0x418 (0x8)
	double CountdownAnimStartPoint; // 0x420 (0x8)
	double CountdownAnimStopPoint; // 0x428 (0x8)
	class USoundBase* MultiplierSound; // 0x430 (0x8)
	bool IsOffline; // 0x438 (0x1)
	unsigned char unreflected_439[0x7]; // 0x439 (0x7) 
	struct FTimerHandle* HideTimerHandle; // 0x440 (0x8)

	/* Functions */

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnHideTimerEventFinished (Has no native function)
	void OnHideTimerEventFinished(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.StartHideTimerEvent (Has no native function)
	void StartHideTimerEvent(struct FDelegate& K2NodeCreateDelegateOutputDelegate, float& CallFuncConvIntToFloatReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.IsCountdownVisible (Has no native function)
	void IsCountdownVisible(bool& IsVisible, bool& CallFuncK2IsTimerActiveHandleReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanANDReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnNumPendingAugmentsToGrantUpdated (Has no native function)
	void OnNumPendingAugmentsToGrantUpdated(int& NumPendingAugmentsToGrant, bool& DidValueIncrease, bool& TempboolVariable, struct FText& TemptextVariable, bool& CallFuncIsVisibleReturnValue, class UAudioComponent*& CallFuncSpawnSound2DReturnValue, bool& CallFuncGreaterIntIntReturnValue, bool& CallFuncGreaterIntIntReturnValue1, int64_t& CallFuncConvIntToInt64ReturnValue, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData, struct TArray<struct FFormatArgumentData>& K2NodeMakeArrayArray, bool& CallFuncIsAugmentSelectionAvailableIsEnabled, struct FText& CallFuncFormatReturnValue, bool& CallFuncGreaterIntIntReturnValue2, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, struct FText& K2NodeSelectDefault); // (Event | Protected | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.SetMobileVisuals (Has no native function)
	void SetMobileVisuals(struct FVector2D& TempstructVariable, struct FVector2D& TempstructVariable1, bool& TempboolVariable, struct FVector2D& TempstructVariable2, struct FVector2D& TempstructVariable3, bool& TempboolVariable1, struct FVector2D& TempstructVariable4, struct FVector2D& TempstructVariable5, bool& TempboolVariable2, float& TemprealVariable, float& TemprealVariable1, bool& TempboolVariable3, bool& CallFuncHasChildReturnValue, class UHorizontalBoxSlot*& CallFuncSlotAsHorizontalBoxSlotReturnValue, enum ESlateVisibility& TempbyteVariable, class UHorizontalBoxSlot*& CallFuncAddChildToHorizontalBoxReturnValue, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable4, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, bool& TempboolVariable5, bool& CallFuncIsMobileGameReturnValue, enum ESlateVisibility& TempbyteVariable4, class UHorizontalBoxSlot*& CallFuncSlotAsHorizontalBoxSlotReturnValue1, enum ESlateVisibility& TempbyteVariable5, bool& TempboolVariable6, enum ESlateVisibility& TempbyteVariable6, class UOverlaySlot*& CallFuncAddChildToOverlayReturnValue, enum ESlateVisibility& TempbyteVariable7, bool& TempboolVariable7, bool& CallFuncIsUsingTouchReturnValue, bool& CallFuncBooleanANDReturnValue, enum ESlateVisibility& K2NodeSelectDefault, enum ESlateVisibility& K2NodeSelectDefault1, enum ESlateVisibility& K2NodeSelectDefault2, enum ESlateVisibility& K2NodeSelectDefault3, float& K2NodeSelectDefault4, struct FVector2D& K2NodeSelectDefault5, struct FMargin& K2NodeMakeStructMargin, struct FVector2D& K2NodeSelectDefault6, struct FVector2D& K2NodeSelectDefault7); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.PlayReminderAnimation (Has no native function)
	void PlayReminderAnimation(bool& CallFuncIsVisibleReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.UpdateVisibility (Has no native function)
	void UpdateVisibility(bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& CallFuncIsCountdownVisibleIsVisible, bool& CallFuncBooleanORReturnValue, enum ESlateVisibility& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnAugmentReadyFadeInFinished (Has no native function)
	void OnAugmentReadyFadeInFinished(class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.ResetAugmentReadyStateAnims (Has no native function)
	void ResetAugmentReadyStateAnims(float& CallFuncGetEndTimeReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, bool& CallFuncIsAnimationPlayingReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.ForceAugmentReadyState (Has no native function)
	void ForceAugmentReadyState(bool& AugmentSelectionAvailable, class UAudioComponent*& CallFuncSpawnSound2DReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.SetAugmentReadyState (Has no native function)
	void SetAugmentReadyState(bool& AugmentSelectionAvailable, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& CallFuncNotEqualBoolBoolReturnValue, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.IsAugmentSelectionAvailable (Has no native function)
	void IsAugmentSelectionAvailable(bool& IsEnabled, bool& CallFuncGreaterEqualIntIntReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.UpdateCountdown (Has no native function)
	void UpdateCountdown(double& InTimeLeft, bool& IsNewlyActivated, bool& NewIsCountdownActive, int& TimeLeft, int& CallFuncRoundReturnValue, bool& CallFuncGreaterIntIntReturnValue, bool& CallFuncK2IsTimerActiveHandleReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncIsCountdownVisibleIsVisible, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, bool& CallFuncNotEqualBoolBoolReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanANDReturnValue1, float& CallFuncConvIntToFloatReturnValue, bool& CallFuncBooleanANDReturnValue2, float& CallFuncConvIntToFloatReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncAddDoubleDoubleReturnValue, struct FText& CallFuncConvIntToTextReturnValue, bool& CallFuncLessEqualIntIntReturnValue, bool& CallFuncBooleanANDReturnValue3, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1, double& CallFuncDivideDoubleDoubleBImplicitCast, double& CallFuncDivideDoubleDoubleAImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnAugmentGrantingTimersFinishedForMatch (Has no native function)
	void OnAugmentGrantingTimersFinishedForMatch(); // (Event | Protected | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnInitialized (Has no native function)
	void OnInitialized(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnTimerUpdated (Has no native function)
	void OnTimerUpdated(float& TimeRemaining, float& TimePercentage); // (Event | Protected | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnCanSelectAugmentChanged (Has no native function)
	void OnCanSelectAugmentChanged(bool& bCanSelectAugment); // (Event | Protected | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.ExecuteUbergraph_WBP_Augment_SelectionTimer (Has no native function)
	void ExecuteUbergraphWBPAugmentSelectionTimer(int& EntryPoint, bool& CallFuncCanSelectAugmentReturnValue, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncIsAugmentSelectionAvailableIsEnabled, float& K2NodeEventTimeRemaining, float& K2NodeEventTimePercentage, bool& K2NodeEventbCanSelectAugment, bool& K2NodeEventIsDesignTime, double& CallFuncUpdateCountdownInTimeLeftImplicitCast); // (Final | 0x00008000)
};

