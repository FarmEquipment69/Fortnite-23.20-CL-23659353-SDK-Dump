// Class /Script/FortniteGame.FortControllerComponent_InventoryNetworkManagement
// Size: 0xa0
class UFortControllerComponent_InventoryNetworkManagement : public UFortControllerComponent
{

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_InventoryNetworkManagement.ServerSwapItems (Underlying native function: ServerSwapItems 0x86d1828)
	void ServerSwapItems(class UObject*& SourceOwner, class UObject*& TargetOwner, struct TArray<struct FItemGuidAndCount>& ItemGuids); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortControllerComponent_InventoryNetworkManagement.ServerSwapItem (Underlying native function: ServerSwapItem 0x86d1694)
	void ServerSwapItem(class UObject*& SourceOwner, class UObject*& TargetOwner, struct FGuid& ItemGuid, int& Count); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | BlueprintCallable | 0x80000000)
};

