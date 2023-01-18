// Class /Script/FortniteGame.InventoryManagementLibrary
// Size: 0x28
class UInventoryManagementLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.InventoryManagementLibrary.SwapItems (Underlying native function: SwapItems 0x8a47a18)
	static void SwapItems(struct TScriptInterface<class IFortInventoryOwnerInterface>& SourceOwner, struct TScriptInterface<class IFortInventoryOwnerInterface>& TargetOwner, struct TArray<struct FItemGuidAndCount>& ItemGuids); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.InventoryManagementLibrary.SwapItem (Underlying native function: SwapItem 0x8a478a4)
	static bool SwapItem(struct TScriptInterface<class IFortInventoryOwnerInterface>& SourceOwner, struct TScriptInterface<class IFortInventoryOwnerInterface>& TargetOwner, struct FGuid& ItemGuid, int& Count); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.InventoryManagementLibrary.RemoveItems (Underlying native function: RemoveItems 0x8a47620)
	static void RemoveItems(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, struct TArray<struct FItemGuidAndCount>& Items); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.InventoryManagementLibrary.RemoveItem (Underlying native function: RemoveItem 0x8a47518)
	static bool RemoveItem(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, struct FGuid& ItemGuid, int& Count); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.InventoryManagementLibrary.GiveItemEntryToInventoryOwner (Underlying native function: GiveItemEntryToInventoryOwner 0x8a46f8c)
	static bool GiveItemEntryToInventoryOwner(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, struct FFortItemEntry& ItemInstance); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.InventoryManagementLibrary.GetItemsFromInventoryOwnerForRarity (Underlying native function: GetItemsFromInventoryOwnerForRarity 0x8a46810)
	static void GetItemsFromInventoryOwnerForRarity(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, struct TArray<class UFortWorldItem*>& Items, enum EFortRarity& RarityType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.InventoryManagementLibrary.GetItemsFromInventoryOwner (Underlying native function: GetItemsFromInventoryOwner 0x8a4672c)
	static void GetItemsFromInventoryOwner(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, struct TArray<class UFortWorldItem*>& Items); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.InventoryManagementLibrary.GetItemCountForItemDefinition (Underlying native function: GetItemCountForItemDefinition 0x8a46588)
	static int GetItemCountForItemDefinition(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, class UFortItemDefinition*& ItemDefinition); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.InventoryManagementLibrary.GetInventoryNetworkComponent (Underlying native function: GetInventoryNetworkComponent 0x8a46500)
	static class UFortControllerComponent_InventoryNetworkManagement* GetInventoryNetworkComponent(class AFortPlayerController*& Owner); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.InventoryManagementLibrary.FindExistingItemForDefinition (Underlying native function: FindExistingItemForDefinition 0x8a4626c)
	static class UFortItem* FindExistingItemForDefinition(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, class UFortItemDefinition*& ItemDefinition, bool& bInStorageVault); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.InventoryManagementLibrary.AddItems (Underlying native function: AddItems 0x8a46144)
	static struct TArray<class UFortWorldItem*> AddItems(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, struct TArray<struct FItemAndCount>& Items); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.InventoryManagementLibrary.AddItem (Underlying native function: AddItem 0x8a4600c)
	static class UFortWorldItem* AddItem(struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, class UFortItemDefinition*& ItemDefinition, int& Count, bool& bShouldFireCollectStatEvent); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)
};

