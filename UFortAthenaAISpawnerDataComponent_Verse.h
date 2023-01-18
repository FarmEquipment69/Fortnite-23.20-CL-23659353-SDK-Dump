// Class /Script/VerseAIBase.FortAthenaAISpawnerDataComponent_Verse
// Size: 0x50
class UFortAthenaAISpawnerDataComponent_Verse : public UFortAthenaAISpawnerDataComponent_ScriptBase
{
	struct TArray<class UClass*> EntityComponents; // 0x30 (0x10)
	struct TArray<struct TWeakObjectPtr<class UEntityComponent>> EntityComponentInstances; // 0x40 (0x10)

	/* Functions */

	// Function /Script/VerseAIBase.FortAthenaAISpawnerDataComponent_Verse.AddUniqueEntityComponentInstance (Underlying native function: AddUniqueEntityComponentInstance 0x531c6b0)
	void AddUniqueEntityComponentInstance(class UEntityComponent*& EntityComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VerseAIBase.FortAthenaAISpawnerDataComponent_Verse.AddUniqueEntityComponent (Underlying native function: AddUniqueEntityComponent 0x72162b8)
	void AddUniqueEntityComponent(class UClass*& EntityComponent); // (Final | Native | Public | BlueprintCallable)
};

