// Class /Script/FortniteGame.UserOptionValuesInterface
// Size: 0x28
class IUserOptionValuesInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.UserOptionValuesInterface.SetUserOptionValues (Underlying native function: SetUserOptionValues 0x80ab7c8)
	bool SetUserOptionValues(class APlayerController*& PlayerController, struct TMap<struct FString, struct FString>& UserOptionValues); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.UserOptionValuesInterface.SetUserOptionValue (Underlying native function: SetUserOptionValue 0x80ab514)
	bool SetUserOptionValue(class APlayerController*& PlayerController, struct FString& UserOptionKey, struct FString& UserOptionValue); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.UserOptionValuesInterface.GetUserOptionValues (Underlying native function: GetUserOptionValues 0x80ab370)
	bool GetUserOptionValues(struct TMap<struct FString, struct FString>& UserOptionValues); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionValuesInterface.GetUserOptionValue (Underlying native function: GetUserOptionValue 0x80ab0f0)
	bool GetUserOptionValue(struct FString& UserOptionKey, struct FString& UserOptionValue); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionValuesInterface.BP_GetUserOptionDefinitions (Underlying native function: BP_GetUserOptionDefinitions 0x80a5cd8)
	struct TScriptInterface<class IUserOptionDefinitionContainerInterface> BPGetUserOptionDefinitions(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

