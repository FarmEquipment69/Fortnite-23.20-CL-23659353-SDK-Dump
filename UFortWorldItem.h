// Class /Script/FortniteGame.FortWorldItem
// Size: 0x2a0
class UFortWorldItem : public UFortItem
{
	unsigned char unreflected_88[0x48]; // 0x88 (0x48) 
	bool bIsTemporaryItem; // 0xd0 (0x1)
	bool bNeedsPersistentUpdate; // 0xd1 (0x1)
	bool bPendingPersistentDelete; // 0xd2 (0x1)
	unsigned char unreflected_d3[0x1]; // 0xd3 (0x1) 
	struct TWeakObjectPtr<class AFortInventory> OwnerInventoryWeak; // 0xd4 (0x8)
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct FFortItemEntry ItemEntry; // 0xe0 (0x1a0)
	unsigned char unreflected_280[0x8]; // 0x280 (0x8) 
	float BaseRegenCooldown; // 0x288 (0x4)
	unsigned char padding_28c[0x14]; // 0x28c (0x14)

	/* Functions */

	// Function /Script/FortniteGame.FortWorldItem.SeenInFrontend (Underlying native function: SeenInFrontend 0x8a93444)
	bool SeenInFrontend(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWorldItem.MarkItemAsSeenInFrontend (Underlying native function: MarkItemAsSeenInFrontend 0x8a93298)
	void MarkItemAsSeenInFrontend(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWorldItem.GetOwnedGameplayTags (Underlying native function: GetOwnedGameplayTags 0x8a92c18)
	void GetOwnedGameplayTags(struct FGameplayTagContainer& TagContainer); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWorldItem.GetMaxDurability (Underlying native function: GetMaxDurability 0x8a92ab4)
	float GetMaxDurability(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWorldItem.GetFuelChargeValue (Underlying native function: GetFuelChargeValue 0x8a929fc)
	int GetFuelChargeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

