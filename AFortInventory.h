// Class /Script/FortniteGame.FortInventory
// Size: 0x500
class AFortInventory : public AActor
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	struct TArray<class UFortItem*> RecentlyAdded; // 0x298 (0x10)
	struct TArray<class UFortItem*> RecentlyRemoved; // 0x2a8 (0x10)
	struct TArray<class UFortItem*> RecentlyChanged; // 0x2b8 (0x10)
	unsigned char unreflected_2c8[0x1]; // 0x2c8 (0x1) 
	struct TEnumAsByte<EFortInventoryType> InventoryType; // 0x2c9 (0x1)
	unsigned char unreflected_2ca[0x6]; // 0x2ca (0x6) 
	struct FFortItemList Inventory; // 0x2d0 (0x1c8)
	struct TArray<class UFortWorldItem*> PendingExistingItems; // 0x498 (0x10)
	unsigned char unreflected_4a8[0xc]; // 0x4a8 (0xc) 
	struct TWeakObjectPtr<class AFortPawn> ReplayPawn; // 0x4b4 (0x8)
	bool bRequiresLocalUpdate; // 0x4bc (0x1)
	bool bRequiresSaving; // 0x4bd (0x1)
	bool bIsShuttingDown; // 0x4be (0x1)
	unsigned char unreflected_4bf[0x19]; // 0x4bf (0x19) 
	struct TArray<class UFortWorldItem*> PendingInstances; // 0x4d8 (0x10)
	unsigned char padding_4e8[0x18]; // 0x4e8 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortInventory.HandleInventoryLocalUpdate (Underlying native function: HandleInventoryLocalUpdate 0x19a8350)
	void HandleInventoryLocalUpdate(); // (Final | 0x00000002 | Native | Public)
};

