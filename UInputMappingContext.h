// Class /Script/EnhancedInput.InputMappingContext
// Size: 0x58
class UInputMappingContext : public UDataAsset
{
	struct TArray<struct FEnhancedActionKeyMapping> Mappings; // 0x30 (0x10)
	struct FText ContextDescription; // 0x40 (0x18)

	/* Functions */

	// Function /Script/EnhancedInput.InputMappingContext.UnmapKey (Underlying native function: UnmapKey 0x731fbec)
	void UnmapKey(class UInputAction*& Action, struct FKey& Key); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/EnhancedInput.InputMappingContext.UnmapAllKeysFromAction (Underlying native function: UnmapAllKeysFromAction 0x731fb28)
	void UnmapAllKeysFromAction(class UInputAction*& Action); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/EnhancedInput.InputMappingContext.UnmapAll (Underlying native function: UnmapAll 0x731fba8)
	void UnmapAll(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/EnhancedInput.InputMappingContext.UnmapAction (Underlying native function: UnmapAction 0x731fb28)
	void UnmapAction(class UInputAction*& Action); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/EnhancedInput.InputMappingContext.MapKey (Underlying native function: MapKey 0x731ec88)
	struct FEnhancedActionKeyMapping MapKey(class UInputAction*& Action, struct FKey& ToKey); // (Final | Native | Public | BlueprintCallable)
};

