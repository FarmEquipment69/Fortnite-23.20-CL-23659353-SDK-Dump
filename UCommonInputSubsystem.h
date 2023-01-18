// Class /Script/CommonInput.CommonInputSubsystem
// Size: 0x100
class UCommonInputSubsystem : public ULocalPlayerSubsystem
{
	unsigned char unreflected_30[0x28]; // 0x30 (0x28) 
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x58 (0x10)
	int NumberOfInputMethodChangesRecently; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	double LastInputMethodChangeTime; // 0x70 (0x8)
	double LastTimeInputMethodThrashingBegan; // 0x78 (0x8)
	enum ECommonInputType LastInputType; // 0x80 (0x1)
	enum ECommonInputType CurrentInputType; // 0x81 (0x1)
	unsigned char unreflected_82[0x2]; // 0x82 (0x2) 
	struct FName GamepadInputType; // 0x84 (0x4)
	struct TMap<struct FName, enum ECommonInputType> CurrentInputLocks; // 0x88 (0x50)
	unsigned char unreflected_d8[0x18]; // 0xd8 (0x18) 
	class UCommonInputActionDomainTable* ActionDomainTable; // 0xf0 (0x8)
	bool bIsGamepadSimulatedClick; // 0xf8 (0x1)
	unsigned char padding_f9[0x7]; // 0xf9 (0x7)

	/* Functions */

	// Function /Script/CommonInput.CommonInputSubsystem.ShouldShowInputKeys (Underlying native function: ShouldShowInputKeys 0x284c8bc)
	bool ShouldShowInputKeys(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonInput.CommonInputSubsystem.SetGamepadInputType (Underlying native function: SetGamepadInputType 0x6a51240)
	void SetGamepadInputType(struct FName& InGamepadInputType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonInput.CommonInputSubsystem.SetCurrentInputType (Underlying native function: SetCurrentInputType 0x6a511c0)
	void SetCurrentInputType(enum ECommonInputType& NewInputType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonInput.CommonInputSubsystem.IsUsingPointerInput (Underlying native function: IsUsingPointerInput 0x6a51190)
	bool IsUsingPointerInput(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonInput.CommonInputSubsystem.IsInputMethodActive (Underlying native function: IsInputMethodActive 0x6a51100)
	bool IsInputMethodActive(enum ECommonInputType& InputMethod); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonInput.CommonInputSubsystem.GetDefaultInputType (Underlying native function: GetDefaultInputType 0x6a510b0)
	enum ECommonInputType GetDefaultInputType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonInput.CommonInputSubsystem.GetCurrentInputType (Underlying native function: GetCurrentInputType 0x2425a44)
	enum ECommonInputType GetCurrentInputType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonInput.CommonInputSubsystem.GetCurrentGamepadName (Underlying native function: GetCurrentGamepadName 0x2dce25c)
	struct FName GetCurrentGamepadName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

