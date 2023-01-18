// Class /Script/EnhancedInput.InputModifier
// Size: 0x28
class UInputModifier : public UObject
{

	/* Functions */

	// Function /Script/EnhancedInput.InputModifier.ModifyRaw (Underlying native function: ModifyRaw 0x731edb8)
	struct FInputActionValue ModifyRaw(class UEnhancedPlayerInput*& PlayerInput, struct FInputActionValue& CurrentValue, float& DeltaTime); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/EnhancedInput.InputModifier.GetVisualizationColor (Underlying native function: GetVisualizationColor 0x731e264)
	struct FLinearColor GetVisualizationColor(struct FInputActionValue& SampleValue, struct FInputActionValue& FinalValue); // (Native | Event | Public | HasDefaults | BlueprintEvent | Const)
};

