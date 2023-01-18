// Class /Script/AIModule.EnvQueryGenerator_BlueprintBase
// Size: 0x88
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
	struct FText GeneratorsActionDescription; // 0x50 (0x18)
	class UClass* Context; // 0x68 (0x8)
	class UClass* GeneratedItemType; // 0x70 (0x8)
	unsigned char padding_78[0x10]; // 0x78 (0x10)

	/* Functions */

	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier (Underlying native function: GetQuerier 0xa1ba878)
	class UObject* GetQuerier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.DoItemGenerationFromActors (Has no native function)
	void DoItemGenerationFromActors(struct TArray<class AActor*>& ContextActors); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration (Has no native function)
	void DoItemGeneration(struct TArray<struct FVector>& ContextLocations); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector (Underlying native function: AddGeneratedVector 0xa1ba150)
	void AddGeneratedVector(struct FVector& GeneratedVector); // (Final | Native | Public | HasDefaults | BlueprintCallable | Const)

	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor (Underlying native function: AddGeneratedActor 0xa1ba0d0)
	void AddGeneratedActor(class AActor*& GeneratedActor); // (Final | Native | Public | BlueprintCallable | Const)
};

