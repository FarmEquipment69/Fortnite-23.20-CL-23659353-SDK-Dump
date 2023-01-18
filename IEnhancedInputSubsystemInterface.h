// Class /Script/EnhancedInput.EnhancedInputSubsystemInterface
// Size: 0x28
class IEnhancedInputSubsystemInterface : public IInterface
{

	/* Functions */

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings (Underlying native function: RequestRebuildControlMappings 0x731f99c)
	void RequestRebuildControlMappings(struct FModifyContextOptions& Options, enum EInputMappingRebuildType& RebuildType); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappedKey (Underlying native function: RemovePlayerMappedKey 0x731f8c0)
	int RemovePlayerMappedKey(struct FName& MappingName, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig (Underlying native function: RemovePlayerMappableConfig 0x731f7e4)
	void RemovePlayerMappableConfig(class UPlayerMappableInputConfig*& Config, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext (Underlying native function: RemoveMappingContext 0x731f70c)
	void RemoveMappingContext(class UInputMappingContext*& MappingContext, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeysForMapping (Underlying native function: RemoveAllPlayerMappedKeysForMapping 0x5369e00)
	int RemoveAllPlayerMappedKeysForMapping(struct FName& MappingName, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys (Underlying native function: RemoveAllPlayerMappedKeys 0x731f674)
	void RemoveAllPlayerMappedKeys(struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet (Underlying native function: QueryMapKeyInContextSet 0x731f288)
	enum EMappingQueryResult QueryMapKeyInContextSet(struct TArray<class UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext*& InputContext, class UInputAction*& Action, struct FKey& Key, struct TArray<struct FMappingQueryIssue>& OutIssues, enum EMappingQueryIssue& BlockingIssues); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet (Underlying native function: QueryMapKeyInActiveContextSet 0x731efbc)
	enum EMappingQueryResult QueryMapKeyInActiveContextSet(class UInputMappingContext*& InputContext, class UInputAction*& Action, struct FKey& Key, struct TArray<struct FMappingQueryIssue>& OutIssues, enum EMappingQueryIssue& BlockingIssues); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction (Underlying native function: QueryKeysMappedToAction 0x731ef14)
	struct TArray<struct FKey> QueryKeysMappedToAction(class UInputAction*& Action); // (BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.K2_RemovePlayerMappedKeyInSlot (Underlying native function: K2_RemovePlayerMappedKeyInSlot 0x5369900)
	int K2RemovePlayerMappedKeyInSlot(struct FName& MappingName, struct FPlayerMappableKeySlot& KeySlot, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.K2_GetPlayerMappedKeyInSlot (Underlying native function: K2_GetPlayerMappedKeyInSlot 0x53697b0)
	struct FKey K2GetPlayerMappedKeyInSlot(struct FName& MappingName, struct FPlayerMappableKeySlot& KeySlot); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.K2_AddPlayerMappedKeyInSlot (Underlying native function: K2_AddPlayerMappedKeyInSlot 0x53695a0)
	int K2AddPlayerMappedKeyInSlot(struct FName& MappingName, struct FKey& NewKey, struct FPlayerMappableKeySlot& KeySlot, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction (Underlying native function: InjectInputVectorForAction 0x731e634)
	void InjectInputVectorForAction(class UInputAction*& Action, struct FVector& Value, struct TArray<class UInputModifier*>& Modifiers, struct TArray<class UInputTrigger*>& Triggers); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction (Underlying native function: InjectInputForAction 0x731e474)
	void InjectInputForAction(class UInputAction*& Action, struct FInputActionValue& RawValue, struct TArray<class UInputModifier*>& Modifiers, struct TArray<class UInputTrigger*>& Triggers); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext (Underlying native function: HasMappingContext 0x731e3a0)
	bool HasMappingContext(class UInputMappingContext*& MappingContext, int& OutFoundPriority); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.GetPlayerMappedKey (Underlying native function: GetPlayerMappedKey 0x731e180)
	struct FKey GetPlayerMappedKey(struct FName& MappingName); // (BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappedKeys (Underlying native function: GetAllPlayerMappedKeys 0x5369430)
	struct TArray<struct FKey> GetAllPlayerMappedKeys(struct FName& MappingName); // (BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings (Underlying native function: GetAllPlayerMappableActionKeyMappings 0x731daa0)
	struct TArray<struct FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings(); // (BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings (Underlying native function: ClearAllMappings 0x70afedc)
	void ClearAllMappings(); // (BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappedKey (Underlying native function: AddPlayerMappedKey 0x731d3d4)
	int AddPlayerMappedKey(struct FName& MappingName, struct FKey& NewKey, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig (Underlying native function: AddPlayerMappableConfig 0x731d2f8)
	void AddPlayerMappableConfig(class UPlayerMappableInputConfig*& Config, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext (Underlying native function: AddMappingContext 0x731d1ec)
	void AddMappingContext(class UInputMappingContext*& MappingContext, int& Priority, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)
};

