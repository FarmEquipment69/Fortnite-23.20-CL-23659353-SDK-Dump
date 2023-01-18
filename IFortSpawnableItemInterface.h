// Class /Script/FortniteGame.FortSpawnableItemInterface
// Size: 0x28
class IFortSpawnableItemInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortSpawnableItemInterface.OnAddedToSpawnList (Underlying native function: OnAddedToSpawnList 0x70afedc)
	void OnAddedToSpawnList(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortSpawnableItemInterface.GetSpawnItemEntries (Underlying native function: GetSpawnItemEntries 0x89b8d08)
	struct TArray<struct FFortItemEntry> GetSpawnItemEntries(class UFortGameplayTagContainer*& InvalidGameplayTagContainer); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpawnableItemInterface.CanBeSpawned (Underlying native function: CanBeSpawned 0x88a0c38)
	bool CanBeSpawned(class UFortGameplayTagContainer*& InvalidGameplayTagContainer, class ABuildingActor*& InBuildingActor); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpawnableItemInterface.CanBeAddedToSpawnList (Underlying native function: CanBeAddedToSpawnList 0x80945b0)
	bool CanBeAddedToSpawnList(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

