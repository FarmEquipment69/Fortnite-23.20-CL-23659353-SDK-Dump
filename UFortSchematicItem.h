// Class /Script/FortniteGame.FortSchematicItem
// Size: 0x158
class UFortSchematicItem : public UFortAlterableItem
{
	bool Refundable; // 0x130 (0x1)
	bool refundlegacyitem; // 0x131 (0x1)
	unsigned char unreflected_132[0x6]; // 0x132 (0x6) 
	struct TArray<struct FString> alterationbaserarities; // 0x138 (0x10)
	bool bGrantedByAbility; // 0x148 (0x1)
	unsigned char unreflected_149[0x3]; // 0x149 (0x3) 
	int RequiredTeamLevel; // 0x14c (0x4)
	unsigned char padding_150[0x8]; // 0x150 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortSchematicItem.IsBulkCraftable (Underlying native function: IsBulkCraftable 0x8efd0dc)
	bool IsBulkCraftable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSchematicItem.GetSchematicRecipe (Underlying native function: GetSchematicRecipe 0x8efcde0)
	struct FRecipe GetSchematicRecipe(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSchematicItem.GetSchematicQuantityProduced (Underlying native function: GetSchematicQuantityProduced 0x8efcdbc)
	int GetSchematicQuantityProduced(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSchematicItem.GetRequiredTeamLevelToCraft (Underlying native function: GetRequiredTeamLevelToCraft 0x8efccf4)
	int GetRequiredTeamLevelToCraft(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

