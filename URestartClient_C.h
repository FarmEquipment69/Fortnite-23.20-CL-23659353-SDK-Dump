// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Modals/RestartClient/RestartClient.RestartClient_C
// Size: 0x538
class URestartClient_C : public UFortRestartClientModal
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x520 (0x8)
	class UWidgetAnimation* Intro; // 0x528 (0x8)
	class UIconTextButton_C* ButtonConfirm; // 0x530 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/Modals/RestartClient/RestartClient.RestartClient_C.OnButtonSet (Has no native function)
	void OnButtonSet(bool& InbShouldExit, bool& bShouldShow); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/RestartClient/RestartClient.RestartClient_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtButtonConfirmK2NodeComponentBoundEvent0CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/RestartClient/RestartClient.RestartClient_C.OnInitialized (Has no native function)
	void OnInitialized(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/RestartClient/RestartClient.RestartClient_C.ExecuteUbergraph_RestartClient (Has no native function)
	void ExecuteUbergraphRestartClient(int& EntryPoint, bool& TempboolVariable, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, bool& TempboolVariable1, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& K2NodeEventInbShouldExit, bool& K2NodeEventbShouldShow, enum ESlateVisibility& K2NodeSelectDefault, struct FText& CallFuncMakeLiteralTextReturnValue, struct FText& CallFuncMakeLiteralTextReturnValue1, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton, struct FText& K2NodeSelectDefault1); // (Final | 0x00008000 | HasDefaults)
};

