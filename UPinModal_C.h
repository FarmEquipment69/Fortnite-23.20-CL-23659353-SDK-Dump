// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C
// Size: 0x698
class UPinModal_C : public UFortPinModal
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x5a0 (0x8)
	class UImage* Bad; // 0x5a8 (0x8)
	class UImage* BGINPUTBOX; // 0x5b0 (0x8)
	class UImage* BGWIREFRAME; // 0x5b8 (0x8)
	class UImage* BGWIREFRAME2; // 0x5c0 (0x8)
	class UImage* Border; // 0x5c8 (0x8)
	class UImage* Good; // 0x5d0 (0x8)
	class UImage* GradientForFlipping; // 0x5d8 (0x8)
	class UPinCodeButton_C* HiddenPasscodeButton0; // 0x5e0 (0x8)
	class UPinCodeButton_C* HiddenPasscodeButton1; // 0x5e8 (0x8)
	class UPinCodeButton_C* HiddenPasscodeButton2; // 0x5f0 (0x8)
	class UPinCodeButton_C* HiddenPasscodeButton3; // 0x5f8 (0x8)
	class UPinCodeButton_C* HiddenPasscodeButton4; // 0x600 (0x8)
	class UPinCodeButton_C* HiddenPasscodeButton5; // 0x608 (0x8)
	class UPinCodeButton_C* HiddenPasscodeButton6; // 0x610 (0x8)
	class UPinCodeButton_C* HiddenPasscodeButton7; // 0x618 (0x8)
	class UPinCodeButton_C* HiddenPasscodeButton8; // 0x620 (0x8)
	class UPinCodeButton_C* HiddenPasscodeButton9; // 0x628 (0x8)
	class UPinCodeButton_C* PasscodeButton0; // 0x630 (0x8)
	class UPinCodeButton_C* PasscodeButton1; // 0x638 (0x8)
	class UPinCodeButton_C* PasscodeButton2; // 0x640 (0x8)
	class UPinCodeButton_C* PasscodeButton3; // 0x648 (0x8)
	class UPinCodeButton_C* PasscodeButton4; // 0x650 (0x8)
	class UPinCodeButton_C* PasscodeButton5; // 0x658 (0x8)
	class UPinCodeButton_C* PasscodeButton6; // 0x660 (0x8)
	class UPinCodeButton_C* PasscodeButton7; // 0x668 (0x8)
	class UPinCodeButton_C* PasscodeButton8; // 0x670 (0x8)
	class UPinCodeButton_C* PasscodeButton9; // 0x678 (0x8)
	class UCommonVisibilitySwitcher* StateSwitcher; // 0x680 (0x8)
	class UImage* Waiting; // 0x688 (0x8)
	class UWBP_PinModal_ContentGateDetails_C* WBPPinModalContentGateDetails; // 0x690 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C.Set Visual States (Has no native function)
	void SetVisualStates(enum EPinModalValidityState& PinStates, struct FLinearColor& TempstructVariable, struct FLinearColor& TempstructVariable1, struct FLinearColor& TempstructVariable2, struct FLinearColor& TempstructVariable3, enum EPinModalValidityState& TempbyteVariable, enum EPinModalValidityState& TempbyteVariable1, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, enum ESlateVisibility& TempbyteVariable4, enum ESlateVisibility& TempbyteVariable5, enum EPinModalValidityState& TempbyteVariable6, enum ESlateVisibility& K2NodeSelectDefault, struct FLinearColor& K2NodeSelectDefault1, class UWidget*& K2NodeSelectDefault2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C.SetPreviewData (Has no native function)
	void SetPreviewData(class UPinCodeButton_C*& NewLocalVar0, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, struct TArray<class UPinCodeButton_C*>& K2NodeMakeArrayArray, int& CallFuncArrayLengthReturnValue, class UPinCodeButton_C*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C.CollectPinButtons (Has no native function)
	struct TArray<class UFortPinButton*> CollectPinButtons(); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C.OnSetPinState (Has no native function)
	void OnSetPinState(enum EPinModalValidityState& PinModalState); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C.ExecuteUbergraph_PinModal (Has no native function)
	void ExecuteUbergraphPinModal(int& EntryPoint, bool& K2NodeEventIsDesignTime, enum EPinModalValidityState& K2NodeEventPinModalState); // (Final | 0x00008000)
};

