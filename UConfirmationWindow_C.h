// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C
// Size: 0x740
class UConfirmationWindow_C : public UFortConfirmationWindow
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x710 (0x8)
	class UWidgetAnimation* Intro; // 0x718 (0x8)
	class USizeBox* SizeBox0; // 0x720 (0x8)
	class UCommonBorder* TapToCloseZone; // 0x728 (0x8)
	struct FLinearColor ButtonIconColor; // 0x730 (0x10)

	/* Functions */

	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.Handle Configure Decline Button (Has no native function)
	void HandleConfigureDeclineButton(class UCommonButtonBase*& NewButton, class UWBP_UIKit_ButtonCTA_Base_C*& CTAButton, class UFortGlobalUIContext*& CallFuncGetContextReturnValue, class UWBP_UIKit_ButtonCTA_Base_C*& K2NodeDynamicCastAsWBPUIKitButtonCTABase, bool& K2NodeDynamicCastbSuccess, struct FFortDialogDescription_NUI& CallFuncGetConfirmationDescriptionReturnValue, int& CallFuncGetInputPriorityReturnValue, struct FDataTableRowHandle& K2NodeMakeStructDataTableRowHandle); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.ConfigureConfirmationButton (Has no native function)
	void ConfigureConfirmationButton(class UCommonButtonBase*& Button, struct FConfirmationDialogAction& Action, bool& bSimpleConfirm, class UWBP_UIKit_ButtonCTA_Base_C*& CTAButton, class UFortGlobalUIContext*& CallFuncGetContextReturnValue, class UWBP_UIKit_ButtonCTA_Base_C*& K2NodeDynamicCastAsWBPUIKitButtonCTABase, bool& K2NodeDynamicCastbSuccess, struct FDataTableRowHandle& CallFuncGetInputActionReturnValue, bool& CallFuncTextIsEmptyReturnValue, int& CallFuncGetInputPriorityReturnValue); // (Event | Protected | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.PlayShowSound (Has no native function)
	void PlayShowSound(struct FFortDialogDescription_NUI& CallFuncGetConfirmationDescriptionReturnValue, bool& CallFuncIsValidReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.TapToClose (Has no native function)
	struct FEventReply TapToClose(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent (Has no native function)
	void SetupNonInteractiveContent(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.GetInputAction (Has no native function)
	struct FDataTableRowHandle GetInputAction(struct FName& RowName, bool& UseInputAction); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.Initialize (Has no native function)
	void Initialize(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro (Has no native function)
	void OnBeginOutro(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.ConfigureDeclineButton (Has no native function)
	void ConfigureDeclineButton(class UCommonButtonBase*& Button); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.BP_OnActivated (Has no native function)
	void BPOnActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtCloseButtonK2NodeComponentBoundEvent1CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow (Has no native function)
	void ExecuteUbergraphConfirmationWindow(int& EntryPoint, bool& TempboolVariable, struct TArray<class UUserWidget*>& CallFuncGetAllEntriesReturnValue, double& TemprealVariable, int& CallFuncArrayLengthReturnValue, double& TemprealVariable1, int& TempintArrayIndexVariable, class UUserWidget*& CallFuncArrayGetItem, class UWBP_UIKit_ButtonCTA_Base_C*& K2NodeDynamicCastAsWBPUIKitButtonCTABase, bool& K2NodeDynamicCastbSuccess, struct FFortDialogDescription_NUI& CallFuncGetConfirmationDescriptionReturnValue, class UCommonButtonBase*& K2NodeEventButton, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton, bool& CallFuncIsMobileGameReturnValue, bool& K2NodeEventIsDesignTime, int& TempintLoopCounterVariable, double& K2NodeSelectDefault, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, float& CallFuncSetMinDesiredWidthInMinDesiredWidthImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

