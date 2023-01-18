// Class /Script/Engine.MaterialParameterCollection
// Size: 0x70
class UMaterialParameterCollection : public UObject
{
	struct FGuid StateId; // 0x28 (0x10)
	struct TArray<struct FCollectionScalarParameter> ScalarParameters; // 0x38 (0x10)
	struct TArray<struct FCollectionVectorParameter> VectorParameters; // 0x48 (0x10)
	unsigned char padding_58[0x18]; // 0x58 (0x18)

	/* Functions */

	// Function /Script/Engine.MaterialParameterCollection.GetVectorParameterNames (Underlying native function: GetVectorParameterNames 0x9e53150)
	struct TArray<struct FName> GetVectorParameterNames(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MaterialParameterCollection.GetVectorParameterDefaultValue (Underlying native function: GetVectorParameterDefaultValue 0x9e53034)
	struct FLinearColor GetVectorParameterDefaultValue(struct FName& ParameterName, bool& bParameterFound); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.MaterialParameterCollection.GetScalarParameterNames (Underlying native function: GetScalarParameterNames 0x9e52fb8)
	struct TArray<struct FName> GetScalarParameterNames(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.MaterialParameterCollection.GetScalarParameterDefaultValue (Underlying native function: GetScalarParameterDefaultValue 0x9e52ee8)
	float GetScalarParameterDefaultValue(struct FName& ParameterName, bool& bParameterFound); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

