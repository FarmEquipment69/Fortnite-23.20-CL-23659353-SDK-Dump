// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Modals/PasscodeModal/PinCodeButton.PinCodeButton_C
// Size: 0x1400
class UPinCodeButton_C : public UFortPinButton
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x13f0 (0x8)
	class UCommonTextBlock* PasscodeText; // 0x13f8 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinCodeButton.PinCodeButton_C.Set Pin Number (Has no native function)
	void SetPinNumber(struct FString& Pin, struct FText& CallFuncConvStringToTextReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinCodeButton.PinCodeButton_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinCodeButton.PinCodeButton_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinCodeButton.PinCodeButton_C.ExecuteUbergraph_PinCodeButton (Has no native function)
	void ExecuteUbergraphPinCodeButton(int& EntryPoint, bool& K2NodeEventIsDesignTime); // (Final | 0x00008000)
};

