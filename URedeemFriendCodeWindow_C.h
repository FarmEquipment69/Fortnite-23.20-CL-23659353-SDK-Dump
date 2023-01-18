// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C
// Size: 0x588
class URedeemFriendCodeWindow_C : public UFortRedeemCodeBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x520 (0x8)
	class UCloseButton_C* ButtonCancel; // 0x528 (0x8)
	class UIconTextButton_C* CancelButton; // 0x530 (0x8)
	class UWidgetSwitcher* EntryProgressSwitcher; // 0x538 (0x8)
	class UVerticalBox* EntryVBox; // 0x540 (0x8)
	class UCommonTextBlock* ErrorText; // 0x548 (0x8)
	class UImage* Image0; // 0x550 (0x8)
	class ULightbox_C* Lightbox; // 0x558 (0x8)
	class USizeBox* ProgressSizeBox; // 0x560 (0x8)
	class UCommonTextBlock* ProgressText; // 0x568 (0x8)
	class UVerticalBox* ProgressVBox; // 0x570 (0x8)
	class UIconTextButton_C* RedeemButton; // 0x578 (0x8)
	class UCommonTextBlock* Title; // 0x580 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.HandleRedeemCodeComplete (Has no native function)
	void HandleRedeemCodeComplete(bool& Success, enum ERedeemCodeFailureReason& FailureReason, enum ERedeemCodeFailureReason& TempbyteVariable, struct FText& TemptextVariable, struct FText& TemptextVariable1, struct FText& TemptextVariable2, struct FText& TemptextVariable3, struct FText& TemptextVariable4, struct TArray<struct FPurchasedItemInfo>& K2NodeMakeArrayArray, class UFortMcpContext*& CallFuncGetContextReturnValue, struct FText& K2NodeSelectDefault); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Close (Has no native function)
	void Close(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtCancelButtonK2NodeComponentBoundEvent57CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtSendButtonK2NodeComponentBoundEvent75CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.OnRedeemFriendCodeComplete (Has no native function)
	void OnRedeemFriendCodeComplete(bool& bSuccess, enum ERedeemCodeFailureReason& FailureReason); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature (Has no native function)
	void BndEvtFriendCodeEntryK2NodeComponentBoundEvent0OnEditableTextChangedEventDelegateSignature(struct FText& Text); // (HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtButtonCancelK2NodeComponentBoundEvent1CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.ExecuteUbergraph_RedeemFriendCodeWindow (Has no native function)
	void ExecuteUbergraphRedeemFriendCodeWindow(int& EntryPoint, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton1, bool& K2NodeEventbSuccess, enum ERedeemCodeFailureReason& K2NodeEventFailureReason, struct FText& CallFuncGetTextReturnValue, struct FString& CallFuncConvTextToStringReturnValue, bool& CallFuncTextIsEmptyReturnValue, struct FText& K2NodeComponentBoundEventText, bool& CallFuncIsVisibleReturnValue, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton2); // (Final | 0x00008000 | HasDefaults)
};

