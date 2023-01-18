// Class /Script/EnhancedInput.EnhancedInputWorldSubsystem
// Size: 0x210
class UEnhancedInputWorldSubsystem : public UTickableWorldSubsystem
{
	unsigned char unreflected_40[0x1a0]; // 0x40 (0x1a0) 
	class UEnhancedPlayerInput* PlayerInput; // 0x1e0 (0x8)
	unsigned char unreflected_1e8[0x18]; // 0x1e8 (0x18) 
	struct TArray<struct TWeakObjectPtr<class UInputComponent>> CurrentInputStack; // 0x200 (0x10)

	/* Functions */

	// Function /Script/EnhancedInput.EnhancedInputWorldSubsystem.StopConsumingInput (Underlying native function: StopConsumingInput 0x5369f20)
	void StopConsumingInput(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputWorldSubsystem.StartConsumingInput (Underlying native function: StartConsumingInput 0x5369f00)
	void StartConsumingInput(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputWorldSubsystem.PushInputComponent (Underlying native function: PushInputComponent 0x5369b90)
	void PushInputComponent(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputWorldSubsystem.PopInputComponent (Underlying native function: PopInputComponent 0x5369a70)
	bool PopInputComponent(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputWorldSubsystem.IsConsumingInput (Underlying native function: IsConsumingInput 0x5369580)
	bool IsConsumingInput(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

