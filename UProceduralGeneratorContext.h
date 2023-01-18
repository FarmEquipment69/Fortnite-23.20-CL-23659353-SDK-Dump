// Class /Script/Procedural.ProceduralGeneratorContext
// Size: 0x58
class UProceduralGeneratorContext : public UObject
{
	class UProceduralGenerator* Generator; // 0x28 (0x8)
	class UProceduralGenerationContext* GenerationContext; // 0x30 (0x8)
	class UProceduralGeneratorContext* OwnerContext; // 0x38 (0x8)
	struct TArray<class UObject*> GeneratedObjects; // 0x40 (0x10)
	class UProceduralPointCloud* ExportedPointCloud; // 0x50 (0x8)

	/* Functions */

	// Function /Script/Procedural.ProceduralGeneratorContext.OnGenerate (Underlying native function: OnGenerate 0x1627e28)
	bool OnGenerate(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Procedural.ProceduralGeneratorContext.OnDrawVisualization (Has no native function)
	void OnDrawVisualization(); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/Procedural.ProceduralGeneratorContext.OnClearGeneratedContent (Underlying native function: OnClearGeneratedContent 0x145ca48)
	void OnClearGeneratedContent(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Procedural.ProceduralGeneratorContext.GetOrCreateGeneratorContext (Underlying native function: GetOrCreateGeneratorContext 0x7f92678)
	void GetOrCreateGeneratorContext(class UProceduralGenerator*& Generator, class UProceduralGeneratorContext*& Context); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Procedural.ProceduralGeneratorContext.GetGeneratedContexts (Underlying native function: GetGeneratedContexts 0x7f92478)
	struct TArray<class UProceduralGeneratorContext*> GetGeneratedContexts(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralGeneratorContext.Generate (Underlying native function: Generate 0x7f92434)
	bool Generate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralGeneratorContext.ClearGeneratedContent (Underlying native function: ClearGeneratedContent 0x7f92394)
	void ClearGeneratedContent(); // (Final | Native | Public | BlueprintCallable)
};

