// Class /Script/EnhancedInput.PlayerMappableInputConfig
// Size: 0xb0
class UPlayerMappableInputConfig : public UPrimaryDataAsset
{
	struct FName ConfigName; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FText ConfigDisplayName; // 0x38 (0x18)
	bool bIsDeprecated; // 0x50 (0x1)
	unsigned char unreflected_51[0x7]; // 0x51 (0x7) 
	class UObject* MetaData; // 0x58 (0x8)
	struct TMap<class UInputMappingContext*, int> Contexts; // 0x60 (0x50)

	/* Functions */

	// Function /Script/EnhancedInput.PlayerMappableInputConfig.ResetToDefault (Underlying native function: ResetToDefault 0x26daa0c)
	void ResetToDefault(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/EnhancedInput.PlayerMappableInputConfig.IsDeprecated (Underlying native function: IsDeprecated 0x731e94c)
	bool IsDeprecated(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys (Underlying native function: GetPlayerMappableKeys 0x731e144)
	struct TArray<struct FEnhancedActionKeyMapping> GetPlayerMappableKeys(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMetaData (Underlying native function: GetMetaData 0x731e074)
	class UObject* GetMetaData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMappingContexts (Underlying native function: GetMappingContexts 0x731df20)
	struct TMap<class UInputMappingContext*, int> GetMappingContexts(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMappingByName (Underlying native function: GetMappingByName 0x731de6c)
	struct FEnhancedActionKeyMapping GetMappingByName(struct FName& MappingName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction (Underlying native function: GetKeysBoundToAction 0x731dd98)
	struct TArray<struct FEnhancedActionKeyMapping> GetKeysBoundToAction(class UInputAction*& InAction); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetDisplayName (Underlying native function: GetDisplayName 0x731dcf4)
	struct FText GetDisplayName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetConfigName (Underlying native function: GetConfigName 0x731dc50)
	struct FName GetConfigName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

