// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponentList
// Size: 0x58
class UFortAthenaAISpawnerDataComponentList : public UObject
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponentList.OverrideComponentClass (Underlying native function: OverrideComponentClass 0xa3acdfc)
	class UFortAthenaAISpawnerDataComponentList* OverrideComponentClass(class UClass*& NewComponentSubClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponentList.OverrideComponent (Underlying native function: OverrideComponent 0xa3acd6c)
	class UFortAthenaAISpawnerDataComponentList* OverrideComponent(class UFortAthenaAISpawnerDataComponent*& NewComponent); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponentList.GetOrCreateComponentClassForModification (Underlying native function: GetOrCreateComponentClassForModification 0xa3ac60c)
	class UFortAthenaAISpawnerDataComponent* GetOrCreateComponentClassForModification(class UObject*& ComponentOuter, class UClass*& ClassToClone); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponentList.GetList (Underlying native function: GetList 0xa3ac43c)
	struct TArray<class UFortAthenaAISpawnerDataComponent*> GetList(); // (Final | Native | Public | BlueprintCallable)
};

