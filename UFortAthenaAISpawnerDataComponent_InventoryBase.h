// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase
// Size: 0xb0
class UFortAthenaAISpawnerDataComponent_InventoryBase : public UFortAthenaAISpawnerDataComponent
{
	struct TArray<struct FItemAndCount> Items; // 0x30 (0x10)
	struct FScalableFloat ShouldDropCurrencyOnDeath; // 0x40 (0x28)
	struct FScalableFloat DefaultInventoryIgnoresRestrictions; // 0x68 (0x28)
	struct FName CurrencyPayoutRowName; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	struct FDataTableRowHandle LootInfo; // 0x98 (0x10)
	bool bDeathTagsCanBlockLootDrop; // 0xa8 (0x1)
	bool bUseDefenderInventoryManagement; // 0xa9 (0x1)
	unsigned char padding_aa[0x6]; // 0xaa (0x6)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase.SetInventoryItems (Underlying native function: SetInventoryItems 0xa3ac364)
	void SetInventoryItems(struct TArray<struct FItemAndCount>& InItems); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase.GetInventoryItems (Underlying native function: GetInventoryItems 0xa3ac2c4)
	void GetInventoryItems(struct TArray<struct FItemAndCount>& OutList); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)
};

