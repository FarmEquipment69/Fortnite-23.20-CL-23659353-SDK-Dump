// Class /Script/Procedural.ProceduralGenerationContext
// Size: 0xf0
class UProceduralGenerationContext : public UObject
{
	class UProceduralGeneratorContext* GeneratorContext; // 0x28 (0x8)
	struct TArray<class UProceduralGeneratorContext*> GeneratedContexts; // 0x30 (0x10)
	struct TArray<class UProceduralGeneratorContext*> RegisteredContexts; // 0x40 (0x10)
	struct TMap<struct FGuid, class UProceduralGeneratorContext*> GeneratorContexts; // 0x50 (0x50)
	unsigned char padding_a0[0x50]; // 0xa0 (0x50)

	/* Functions */

	// Function /Script/Procedural.ProceduralGenerationContext.GetGenerationVolume (Underlying native function: GetGenerationVolume 0x7f92628)
	class AVolume* GetGenerationVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralGenerationContext.GetGenerationComponent (Underlying native function: GetGenerationComponent 0x7f925e8)
	class UProceduralGenerationComponent* GetGenerationComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

