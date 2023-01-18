// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_Inventory
// Size: 0x50
class UFortAthenaAIRuntimeParameters_Inventory : public UFortAthenaAIRuntimeParameters
{
	unsigned char bShouldDropCurrencyOnDeath; // 0x30 (0x1)
	unsigned char bDefaultInventoryIgnoresRestrictions; // 0x30 (0x1)
	unsigned char bSkipInventoryInitialization; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	struct FName CurrencyPayoutRowName; // 0x34 (0x4)
	unsigned char bDeathTagsCanBlockLootDrop; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FDataTableRowHandle LootInfo; // 0x40 (0x10)
};

