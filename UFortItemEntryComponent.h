// Class /Script/FortniteGame.FortItemEntryComponent
// Size: 0x240
class UFortItemEntryComponent : public UActorComponent
{
	struct FFortItemEntry OwnedItemEntry; // 0xa0 (0x1a0)

	/* Functions */

	// Function /Script/FortniteGame.FortItemEntryComponent.TrySetLoadedAmmo (Underlying native function: TrySetLoadedAmmo 0x86ea458)
	int TrySetLoadedAmmo(int& NewAmmoAmount); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemEntryComponent.TakeItemFromInventoryOwner (Underlying native function: TakeItemFromInventoryOwner 0x86ea168)
	bool TakeItemFromInventoryOwner(struct FGuid& ItemGuid, int& Count, struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, bool& bTreatAsPickup); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemEntryComponent.SetOwnedItem (Underlying native function: SetOwnedItem 0x86e9ee8)
	void SetOwnedItem(struct FFortItemEntry& Item); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemEntryComponent.HasItem (Underlying native function: HasItem 0x86d03c4)
	bool HasItem(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemEntryComponent.GetOwnedItem (Underlying native function: GetOwnedItem 0x86e8f4c)
	struct FFortItemEntry GetOwnedItem(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemEntryComponent.GetLoadedAmmo (Underlying native function: GetLoadedAmmo 0x86e8e0c)
	int GetLoadedAmmo(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemEntryComponent.GetClipSize (Underlying native function: GetClipSize 0x86e8cac)
	int GetClipSize(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemEntryComponent.Empty (Underlying native function: Empty 0x86e8c28)
	void Empty(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemEntryComponent.AddItemToInventoryOwner (Underlying native function: AddItemToInventoryOwner 0x86e7b28)
	bool AddItemToInventoryOwner(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, bool& bUseItemPickupAnalyticEvent); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

