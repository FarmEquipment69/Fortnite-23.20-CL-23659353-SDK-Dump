// Class /Script/CustomizableObjectPopulation.CustomizableObjectPopulation
// Size: 0x50
class UCustomizableObjectPopulation : public UObject
{
	struct FString Name; // 0x28 (0x10)
	struct TArray<struct FClassWeightPair> ClassWeights; // 0x38 (0x10)
	class UCustomizableObjectPopulationGenerator* Generator; // 0x48 (0x8)

	/* Functions */

	// Function /Script/CustomizableObjectPopulation.CustomizableObjectPopulation.RegeneratePopulation (Underlying native function: RegeneratePopulation 0x75088c8)
	bool RegeneratePopulation(int& Seed, struct TArray<class UCustomizableObjectInstance*>& OutInstances, int& NumInstancesToGenerate); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObjectPopulation.CustomizableObjectPopulation.GeneratePopulation (Underlying native function: GeneratePopulation 0x750870c)
	int GeneratePopulation(struct TArray<class UCustomizableObjectInstance*>& OutInstances, int& NumInstancesToGenerate); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

