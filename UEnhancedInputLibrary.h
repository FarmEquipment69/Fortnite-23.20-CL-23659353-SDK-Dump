// Class /Script/EnhancedInput.EnhancedInputLibrary
// Size: 0x28
class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext (Underlying native function: RequestRebuildControlMappingsUsingContext 0x731fa74)
	static void RequestRebuildControlMappingsUsingContext(class UInputMappingContext*& Context, bool& bForceImmediately); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType (Underlying native function: MakeInputActionValueOfType 0x731eb08)
	static struct FInputActionValue MakeInputActionValueOfType(double& X, double& Y, double& Z, enum EInputActionValueType& ValueType); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.MakeInputActionValue (Underlying native function: MakeInputActionValue 0x731e960)
	static struct FInputActionValue MakeInputActionValue(double& X, double& Y, double& Z, struct FInputActionValue& MatchValueType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable (Underlying native function: IsActionKeyMappingPlayerMappable 0x731e7d8)
	static bool IsActionKeyMappingPlayerMappable(struct FEnhancedActionKeyMapping& ActionKeyMapping); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetThirdPlayerMappableKeySlot (Underlying native function: GetThirdPlayerMappableKeySlot 0x5369560)
	static struct FPlayerMappableKeySlot GetThirdPlayerMappableKeySlot(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetSecondPlayerMappableKeySlot (Underlying native function: GetSecondPlayerMappableKeySlot 0x5369540)
	static struct FPlayerMappableKeySlot GetSecondPlayerMappableKeySlot(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings (Underlying native function: GetPlayerMappableKeySettings 0x731e08c)
	static class UPlayerMappableKeySettings* GetPlayerMappableKeySettings(struct FEnhancedActionKeyMapping& ActionKeyMapping); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetMappingName (Underlying native function: GetMappingName 0x731dfac)
	static struct FName GetMappingName(struct FEnhancedActionKeyMapping& ActionKeyMapping); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetFourthPlayerMappableKeySlot (Underlying native function: GetFourthPlayerMappableKeySlot 0x5369520)
	static struct FPlayerMappableKeySlot GetFourthPlayerMappableKeySlot(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetFirstPlayerMappableKeySlot (Underlying native function: GetFirstPlayerMappableKeySlot 0x5369500)
	static struct FPlayerMappableKeySlot GetFirstPlayerMappableKeySlot(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetBoundActionValue (Underlying native function: GetBoundActionValue 0x731db7c)
	static struct FInputActionValue GetBoundActionValue(class AActor*& Actor, class UInputAction*& Action); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString (Underlying native function: Conv_InputActionValueToString 0x731d9dc)
	static struct FString ConvInputActionValueToString(struct FInputActionValue& ActionValue); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool (Underlying native function: Conv_InputActionValueToBool 0x731d91c)
	static bool ConvInputActionValueToBool(struct FInputActionValue& InValue); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D (Underlying native function: Conv_InputActionValueToAxis3D 0x731d87c)
	static struct FVector ConvInputActionValueToAxis3D(struct FInputActionValue& ActionValue); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D (Underlying native function: Conv_InputActionValueToAxis2D 0x731d7e8)
	static struct FVector2D ConvInputActionValueToAxis2D(struct FInputActionValue& InValue); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D (Underlying native function: Conv_InputActionValueToAxis1D 0x731d74c)
	static double ConvInputActionValueToAxis1D(struct FInputActionValue& InValue); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EnhancedInput.EnhancedInputLibrary.BreakInputActionValue (Underlying native function: BreakInputActionValue 0x731d548)
	static void BreakInputActionValue(struct FInputActionValue& InActionValue, double& X, double& Y, double& Z, enum EInputActionValueType& Type); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

