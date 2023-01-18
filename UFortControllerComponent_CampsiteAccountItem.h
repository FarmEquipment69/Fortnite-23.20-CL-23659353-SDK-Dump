// Class /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem
// Size: 0xe0
class UFortControllerComponent_CampsiteAccountItem : public UActorComponent
{
	class UFortCampsiteAccountItemDefinition* CampsiteAccountItemDefinition; // 0xa0 (0x8)
	struct FCampsiteAccountData CampsiteAccountData; // 0xa8 (0x28)
	struct TArray<struct FFortItemEntry> CurrentlyStashedItemEntries; // 0xd0 (0x10)

	/* Functions */

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.WriteStashedItemFromEntry (Underlying native function: WriteStashedItemFromEntry 0x72a4328)
	void WriteStashedItemFromEntry(class AFortPlayerControllerAthena*& PlayerController, struct FFortItemEntry& ItemEntry, int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.WriteStashedItem (Underlying native function: WriteStashedItem 0x72a4244)
	void WriteStashedItem(class AFortPlayerControllerAthena*& PlayerController, class UFortWorldItem*& Item, int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.SwapStashedItem (Underlying native function: SwapStashedItem 0x72a362c)
	bool SwapStashedItem(class AActor*& SourceActor, int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.StashCurrentlyHeldItemAndRemoveFromInventory (Underlying native function: StashCurrentlyHeldItemAndRemoveFromInventory 0x72a38e8)
	bool StashCurrentlyHeldItemAndRemoveFromInventory(int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.OnAthenaProfileInitialized (Underlying native function: OnAthenaProfileInitialized 0x26daa0c)
	void OnAthenaProfileInitialized(); // (Final | Native | Private)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.HasCurrentlyStashedItem (Underlying native function: HasCurrentlyStashedItem 0x72a38e8)
	bool HasCurrentlyStashedItem(int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.GetCurrentlyStashedItemAsItemEntry (Underlying native function: GetCurrentlyStashedItemAsItemEntry 0x72a36ec)
	struct FFortItemEntry GetCurrentlyStashedItemAsItemEntry(int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.ClearStoredCampsiteLocations (Underlying native function: ClearStoredCampsiteLocations 0x26daa0c)
	void ClearStoredCampsiteLocations(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.ClearStashedItemAndGiveToPlayer (Underlying native function: ClearStashedItemAndGiveToPlayer 0x72a362c)
	bool ClearStashedItemAndGiveToPlayer(class AActor*& SourceActor, int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.ClearStashedItem (Underlying native function: ClearStashedItem 0x7239740)
	void ClearStashedItem(int& StashedItemIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.CacheAccountItemData (Underlying native function: CacheAccountItemData 0x26daa0c)
	void CacheAccountItemData(); // (Final | Native | Private)
};

