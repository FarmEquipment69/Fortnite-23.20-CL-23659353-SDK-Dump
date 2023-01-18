// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary
// Size: 0xe8
class UFortAthenaAISpawnerDataComponent_CosmeticLibrary : public UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase
{
	struct TArray<struct TWeakObjectPtr<class UFortAthenaAIBotCosmeticLibraryData>> CosmeticLibraries; // 0x30 (0x10)
	struct FScalableFloat DefaultCosmeticLibraryWeight; // 0x40 (0x28)
	struct FGameplayTag PredefinedCosmeticSetTag; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct FScalableFloat EmotesMaxCount; // 0x70 (0x28)
	struct FScalableFloat bUseFixedSeed; // 0x98 (0x28)
	struct FScalableFloat FixedSeed; // 0xc0 (0x28)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary.GetAICosmeticLibraryDataIndex (Underlying native function: GetAICosmeticLibraryDataIndex 0xa3ab8fc)
	int GetAICosmeticLibraryDataIndex(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary.GetAICosmeticLibraryData (Underlying native function: GetAICosmeticLibraryData 0xa3ab8d4)
	class UFortAthenaAIBotCosmeticLibraryData* GetAICosmeticLibraryData(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

