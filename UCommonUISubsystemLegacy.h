// Class /Script/CommonUILegacy.CommonUISubsystemLegacy
// Size: 0x70
class UCommonUISubsystemLegacy : public UCommonUISubsystemBase
{
	struct FMulticastInlineDelegate OnInputSuspensionChanged; // 0x40 (0x10)
	class UCommonInputManagerLegacy* CommonInputManager; // 0x50 (0x8)
	unsigned char padding_58[0x18]; // 0x58 (0x18)

	/* Functions */

	// DelegateFunction /Script/CommonUILegacy.CommonUISubsystemLegacy.InputSuspensionChanged__DelegateSignature (Has no native function)
	void InputSuspensionChangedDelegateSignature(bool& bInputSuspended); // (MulticastDelegate | Public | Delegate)

	// Function /Script/CommonUILegacy.CommonUISubsystemLegacy.GetInputManager (Underlying native function: GetInputManager 0x71819a4)
	class UCommonInputManagerLegacy* GetInputManager(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

