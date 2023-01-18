// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C
// Size: 0x3a9
class UBP_LocalPlayerBannerEditor_C : public UFortPlayerProfileBannerEditor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2d8 (0x8)
	class UWBP_UIKit_Button_Regular_C* ApplyButton; // 0x2e0 (0x8)
	class UIconTextButton_C* ButtonLeftTab; // 0x2e8 (0x8)
	class UIconTextButton_C* ButtonRightTab; // 0x2f0 (0x8)
	class UCommonTextBlock* CategoryText; // 0x2f8 (0x8)
	class UCloseButton_C* CloseButtonMobile; // 0x300 (0x8)
	class UNormalBangWrapper_C* ColorBangWrapper; // 0x308 (0x8)
	class UCommonTileView* CommonTileView0; // 0x310 (0x8)
	class UIconTextButton_C* EditColorButton; // 0x318 (0x8)
	class UCommonTextBlock* FoundersNoteText; // 0x320 (0x8)
	class UPlayerBanner_C* HomebaseBanner; // 0x328 (0x8)
	class UImage* HomebaseImage; // 0x330 (0x8)
	class UNormalBangWrapper_C* IconBangWrapper; // 0x338 (0x8)
	class UIconTextButton_C* LeftArrowButton; // 0x340 (0x8)
	class UNormalBangWrapper_C* LeftCategoryBang; // 0x348 (0x8)
	class UCommonActionWidget* LeftTriggerAction; // 0x350 (0x8)
	class UIconTextButton_C* RightArrowButton; // 0x358 (0x8)
	class UNormalBangWrapper_C* RightCategoryBang; // 0x360 (0x8)
	class UCommonActionWidget* RightTriggerAction; // 0x368 (0x8)
	struct FMulticastInlineDelegate CloseBannerEditor; // 0x370 (0x10)
	int IconCategoryIndex; // 0x380 (0x4)
	int ColorCategoryIndex; // 0x384 (0x4)
	struct FName CurrentCategory; // 0x388 (0x4)
	bool bViewingIcons; // 0x38c (0x1)
	bool bPickingTile; // 0x38d (0x1)
	unsigned char unreflected_38e[0x2]; // 0x38e (0x2) 
	struct FName TempChosenIcon; // 0x390 (0x4)
	struct FName TempChosenColor; // 0x394 (0x4)
	class UCommonButtonGroupLegacy* ButtonGroup; // 0x398 (0x8)
	struct FTimerHandle* UpdateBangTimerHandle; // 0x3a0 (0x8)
	bool bIsActiveWidget; // 0x3a8 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.IsActiveWidget (Has no native function)
	void IsActiveWidget(bool& IsActivated); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.HandleInputMethodChanged (Has no native function)
	void HandleInputMethodChanged(enum ECommonInputType& InputType, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Category Navigation Visibility (Has no native function)
	void UpdateCategoryNavigationVisibility(enum ESlateVisibility& LocalVisibility, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable1, class UCommonInputSubsystem*& CallFuncGetContextReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, struct TArray<struct FName>& K2NodeSelectDefault, int& CallFuncArrayLengthReturnValue, bool& CallFuncGreaterIntIntReturnValue, enum ESlateVisibility& K2NodeSelectDefault1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Color Category Index (Has no native function)
	void ResetColorCategoryIndex(int& CallFuncArrayFindReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Icon Category Index (Has no native function)
	void ResetIconCategoryIndex(int& CallFuncArrayFindReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Right Color Category Button Bang State (Has no native function)
	void UpdateRightColorCategoryButtonBangState(int& NextIndex, bool& bUnseen, bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable, bool& CallFuncNotPreBoolReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& CallFuncGetNextColorCategoryIndexReturnValue, struct FName& CallFuncArrayGetItem, class APlayerController*& CallFuncGetOwningPlayerReturnValue, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess, struct TArray<class UFortAccountItem*>& CallFuncGetBannerColorsForCategoryBannerColors, class UFortAccountItem*& CallFuncArrayGetItem1, bool& CallFuncNotEqualIntIntReturnValue, bool& CallFuncHasBeenSeenLocallyReturnValue, bool& CallFuncNotPreBoolReturnValue1, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Left Color Category Button Bang State (Has no native function)
	void UpdateLeftColorCategoryButtonBangState(int& PrevIndex, bool& bUnseen, bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable, bool& CallFuncNotPreBoolReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& CallFuncGetPrevColorCategoryIndexReturnValue, struct FName& CallFuncArrayGetItem, class APlayerController*& CallFuncGetOwningPlayerReturnValue, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess, struct TArray<class UFortAccountItem*>& CallFuncGetBannerColorsForCategoryBannerColors, class UFortAccountItem*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue, bool& CallFuncHasBeenSeenLocallyReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& CallFuncNotEqualIntIntReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Right Icon Category Button Bang State (Has no native function)
	void UpdateRightIconCategoryButtonBangState(int& NextIndex, bool& bUnseen, bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable, bool& CallFuncNotPreBoolReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& CallFuncGetNextIconCategoryIndexReturnValue, class APlayerController*& CallFuncGetOwningPlayerReturnValue, struct FName& CallFuncArrayGetItem, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess, struct TArray<class UFortAccountItem*>& CallFuncGetBannerIconsForCategoryBannerIcons, class UFortAccountItem*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue, bool& CallFuncHasBeenSeenLocallyReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& CallFuncNotEqualIntIntReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Left Icon Category Button Bang State (Has no native function)
	void UpdateLeftIconCategoryButtonBangState(int& PrevIndex, bool& bUnseen, bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable, bool& CallFuncNotPreBoolReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& CallFuncGetPrevIconCategoryIndexReturnValue, struct FName& CallFuncArrayGetItem, class APlayerController*& CallFuncGetOwningPlayerReturnValue, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess, struct TArray<class UFortAccountItem*>& CallFuncGetBannerIconsForCategoryBannerIcons, class UFortAccountItem*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue, bool& CallFuncHasBeenSeenLocallyReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& CallFuncNotEqualIntIntReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Prev Color Category Index (Has no native function)
	int GetPrevColorCategoryIndex(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Next Color Category Index (Has no native function)
	int GetNextColorCategoryIndex(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Prev Icon Category Index (Has no native function)
	int GetPrevIconCategoryIndex(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Next Icon Category Index (Has no native function)
	int GetNextIconCategoryIndex(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Color Button Bang State (Has no native function)
	void UpdateColorButtonBangState(bool& bUnseen, bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable, bool& CallFuncNotPreBoolReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, class UFortInventoryContext*& CallFuncGetContextReturnValue, struct TArray<class UFortAccountItem*>& CallFuncGetAccountItemsByTypeItems, int& CallFuncArrayLengthReturnValue, class UFortAccountItem*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, bool& CallFuncHasBeenSeenLocallyReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncNotPreBoolReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Icon Button Bang State (Has no native function)
	void UpdateIconButtonBangState(bool& bUnseen, bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable, bool& CallFuncNotPreBoolReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, class UFortInventoryContext*& CallFuncGetContextReturnValue, struct TArray<class UFortAccountItem*>& CallFuncGetAccountItemsByTypeItems, int& CallFuncArrayLengthReturnValue, class UFortAccountItem*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, bool& CallFuncHasBeenSeenLocallyReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncNotPreBoolReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Bang States (Has no native function)
	void UpdateBangStates(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.FoundsPackTextUpdate (Has no native function)
	void FoundsPackTextUpdate(enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, enum ESlateVisibility& TempbyteVariable4, class UFortGlobalUIContext*& CallFuncGetContextReturnValue, enum ESubGame& CallFuncGetSubGameReturnValue, class UFortFrontEndContext*& CallFuncGetContextReturnValue1, enum ESubGame& TempbyteVariable5, enum EFortFrontEndFeatureState& CallFuncGetFeatureStateOutFeatureState, enum EFortFrontEndFeatureStateReason& CallFuncGetFeatureStateOutReason, bool& K2NodeSwitchEnumCmpSuccess, enum ESlateVisibility& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Pickers and Views (Has no native function)
	void ResetPickersandViews(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset for Keyboard and Mouse (Has no native function)
	void ResetforKeyboardandMouse(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Temp State On Item Selected (Has no native function)
	void UpdateTempStateOnItemSelected(class UObject*& Item, class UFortHomebaseBannerColorItem*& K2NodeDynamicCastAsFortHomebaseBannerColorItem, bool& K2NodeDynamicCastbSuccess, class UFortHomebaseBannerIconItem*& K2NodeDynamicCastAsFortHomebaseBannerIconItem, bool& K2NodeDynamicCastbSuccess1, struct FName& CallFuncGetRowNameForBannerColorItemReturnValue, struct FName& CallFuncGetRowNameForBannerIconItemReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Refresh Apply Button State (Has no native function)
	void RefreshApplyButtonState(struct FText& DisabledReason, bool& CallFuncNotEqualNameNameReturnValue, bool& CallFuncNotEqualNameNameReturnValue1, bool& CallFuncBooleanORReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Apply Chosen Item (Has no native function)
	void ApplyChosenItem(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Set Picking Tile State (Has no native function)
	void SetPickingTileState(bool& bPickingTile); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Attempt Leave Picker (Has no native function)
	void AttemptLeavePicker(bool& Left, bool& LeftPicker); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Navigate to Chosen Color (Has no native function)
	void NavigatetoChosenColor(class UCommonInputSubsystem*& CallFuncGetContextReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, class APlayerController*& CallFuncGetOwningPlayerReturnValue, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess, class UFortHomebaseBannerColorItem*& CallFuncGetBannerColorItemFromRowNameReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Navigate to Chosen Icon (Has no native function)
	void NavigatetoChosenIcon(class UCommonInputSubsystem*& CallFuncGetContextReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, class APlayerController*& CallFuncGetOwningPlayerReturnValue, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess, class UFortHomebaseBannerIconItem*& CallFuncGetBannerIconItemFromRowNameReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnWidgetDeactivated (Has no native function)
	void OnWidgetDeactivated(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Banner Icon Tileview (Has no native function)
	void UpdateBannerIconTileview(struct FName& CurrentCategory); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Banner Color Tileview (Has no native function)
	void UpdateBannerColorTileview(struct FName& CurrentCategory); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Increment Color Category Index (Has no native function)
	void IncrementColorCategoryIndex(int& CallFuncGetNextColorCategoryIndexReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Increment Icon Category Index (Has no native function)
	void IncrementIconCategoryIndex(int& CallFuncGetNextIconCategoryIndexReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Decrement Color Category Index (Has no native function)
	void DecrementColorCategoryIndex(int& CallFuncGetPrevColorCategoryIndexReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Decrement Icon Category Index (Has no native function)
	void DecrementIconCategoryIndex(int& CallFuncGetPrevIconCategoryIndexReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Previous Category (Has no native function)
	void PreviousCategory(class UCommonInputSubsystem*& CallFuncGetContextReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncNotEqualByteByteReturnValue, bool& CallFuncBooleanORReturnValue, struct FName& CallFuncArrayGetItem, struct FName& CallFuncArrayGetItem1); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Next Category (Has no native function)
	void NextCategory(class UCommonInputSubsystem*& CallFuncGetContextReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncNotEqualByteByteReturnValue, bool& CallFuncBooleanORReturnValue, struct FName& CallFuncArrayGetItem, struct FName& CallFuncArrayGetItem1); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Set Current Category (Has no native function)
	void SetCurrentCategory(struct FName& CurrentCategory, struct FText& CategoryDisplayName, struct FText& CallFuncGetBannerColorCategoryNameReturnValue, struct FText& CallFuncGetBannerIconCategoryNameReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Setup Tileview For Colorswatches (Has no native function)
	void SetupTileviewForColorswatches(struct FName& CategoryRowName, class UObject*& CallFuncBPGetSelectedItemReturnValue, class APlayerController*& CallFuncGetOwningPlayerReturnValue, class UCommonInputSubsystem*& CallFuncGetContextReturnValue, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, class UFortHomebaseBannerColorItem*& CallFuncGetBannerColorItemFromRowNameReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, class APlayerController*& CallFuncGetOwningPlayerReturnValue1, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController1, bool& K2NodeDynamicCastbSuccess1, struct TArray<class UFortAccountItem*>& CallFuncGetBannerColorsForCategoryBannerColors, bool& CallFuncArrayContainsReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Setup Tileview For Icons (Has no native function)
	void SetupTileviewForIcons(struct FName& CategoryRowName, class UCommonInputSubsystem*& CallFuncGetContextReturnValue, class UObject*& CallFuncBPGetSelectedItemReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, class APlayerController*& CallFuncGetOwningPlayerReturnValue, class APlayerController*& CallFuncGetOwningPlayerReturnValue1, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController1, bool& K2NodeDynamicCastbSuccess1, class UFortHomebaseBannerIconItem*& CallFuncGetBannerIconItemFromRowNameReturnValue, struct TArray<class UFortAccountItem*>& CallFuncGetBannerIconsForCategoryBannerIcons, bool& CallFuncArrayContainsReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnWidgetActivated (Has no native function)
	void OnWidgetActivated(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature (Has no native function)
	void BndEvtCommonTileView0K2NodeComponentBoundEvent888OnListViewItemClickedDelegateSignature(class UObject*& Item); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature (Has no native function)
	void BndEvtCommonTileView0K2NodeComponentBoundEvent306OnListViewItemWidgetCreatedDelegateSignature(class UUserWidget*& Widget); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BannerTileBangUpdated_Event_0 (Has no native function)
	void BannerTileBangUpdatedEvent0(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Handle Bang State Changed (Has no native function)
	void HandleBangStateChanged(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnShowPreviousCategory (Has no native function)
	void OnShowPreviousCategory(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnShowNextCategory (Has no native function)
	void OnShowNextCategory(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature (Has no native function)
	void BndEvtCommonTileView0K2NodeComponentBoundEvent66OnListViewItemSelectedDelegateSignature(class UObject*& Item, bool& bIsSelected); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CloseButton_97_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtCloseButton97K2NodeComponentBoundEvent1CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__BP_LocalPlayerBannerEditor_ApplyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature (Has no native function)
	void BndEvtBPLocalPlayerBannerEditorApplyButtonK2NodeComponentBoundEvent6CommonButtonBaseClickedDelegateSignature(class UCommonButtonBase*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtRightArrowButtonK2NodeComponentBoundEvent39CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtLeftArrowButtonK2NodeComponentBoundEvent16CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.RefreshBannerEditor (Has no native function)
	void RefreshBannerEditor(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__BP_LocalPlayerBannerEditor_Button_EditIcon_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtBPLocalPlayerBannerEditorButtonEditIconK2NodeComponentBoundEvent8CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__BP_LocalPlayerBannerEditor_EditColorButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtBPLocalPlayerBannerEditorEditColorButtonK2NodeComponentBoundEvent9CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__BP_LocalPlayerBannerEditor_Button_CloseEditorButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature (Has no native function)
	void BndEvtBPLocalPlayerBannerEditorButtonCloseEditorButtonK2NodeComponentBoundEvent2CommonButtonBaseClickedDelegateSignature(class UCommonButtonBase*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__BP_LocalPlayerBannerEditor_Button_LeftTab_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtBPLocalPlayerBannerEditorButtonLeftTabK2NodeComponentBoundEvent3CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__BP_LocalPlayerBannerEditor_Button_RightTab_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtBPLocalPlayerBannerEditorButtonRightTabK2NodeComponentBoundEvent4CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.ExecuteUbergraph_BP_LocalPlayerBannerEditor (Has no native function)
	void ExecuteUbergraphBPLocalPlayerBannerEditor(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UObject*& K2NodeComponentBoundEventItem1, bool& CallFuncAttemptLeavePickerLeft, class UUserWidget*& K2NodeComponentBoundEventWidget, class UBP_BannerEditorTile_C*& K2NodeDynamicCastAsBPBannerEditorTile, bool& K2NodeDynamicCastbSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& CallFuncK2IsValidTimerHandleReturnValue, bool& CallFuncNotPreBoolReturnValue, class UCommonInputSubsystem*& CallFuncGetContextReturnValue, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, class UCommonInputSubsystem*& CallFuncGetContextReturnValue1, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue1, bool& CallFuncAttemptLeavePickerLeft1, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncIsErebusReturnValue, bool& CallFuncNotPreBoolReturnValue1, class UObject*& K2NodeComponentBoundEventItem, bool& K2NodeComponentBoundEventbIsSelected, class UCommonInputSubsystem*& CallFuncGetContextReturnValue2, bool& CallFuncIsMobileGameReturnValue, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue2, bool& CallFuncEqualEqualByteByteReturnValue2, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton8, bool& TempboolVariable, bool& TempboolVariable1, bool& K2NodeSelectDefault, class UCommonButtonBase*& K2NodeComponentBoundEventButton7, bool& CallFuncGetIsEnabledReturnValue, bool& CallFuncBooleanANDReturnValue, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton6, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton5, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton4, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton3, class UCommonButtonBase*& K2NodeComponentBoundEventButton2, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton1, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.CloseBannerEditor__DelegateSignature (Has no native function)
	void CloseBannerEditorDelegateSignature(struct FName& IconId, struct FName& ColorId); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

