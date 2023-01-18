// Class /Script/FortniteUI.FortCreativeSpawnDisplay
// Size: 0x538
class UFortCreativeSpawnDisplay : public UFortActivatablePanel
{
	struct TArray<struct FRarityArray> ItemArray; // 0x518 (0x10)
	struct TArray<class UFortItemDefinition*> AllItems; // 0x528 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeSpawnDisplay.OnLoadedItems (Has no native function)
	void OnLoadedItems(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeSpawnDisplay.LoadItems (Underlying native function: LoadItems 0xa799f10)
	void LoadItems(); // (Final | Native | Public | BlueprintCallable)
};

