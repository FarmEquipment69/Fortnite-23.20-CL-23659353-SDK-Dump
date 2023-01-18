// Class /Script/EnhancedInput.InputTrigger
// Size: 0x50
class UInputTrigger : public UObject
{
	float ActuationThreshold; // 0x28 (0x4)
	bool bShouldAlwaysTick; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	struct FInputActionValue LastValue; // 0x30 (0x20)

	/* Functions */

	// Function /Script/EnhancedInput.InputTrigger.UpdateState (Underlying native function: UpdateState 0x731fd04)
	enum ETriggerState UpdateState(class UEnhancedPlayerInput*& PlayerInput, struct FInputActionValue& ModifiedValue, float& DeltaTime); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/EnhancedInput.InputTrigger.IsActuated (Underlying native function: IsActuated 0x731e890)
	bool IsActuated(struct FInputActionValue& ForValue); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.InputTrigger.GetTriggerType (Underlying native function: GetTriggerType 0x2ab4d90)
	enum ETriggerType GetTriggerType(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

