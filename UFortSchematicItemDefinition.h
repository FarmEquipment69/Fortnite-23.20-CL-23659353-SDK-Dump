// Class /Script/FortniteGame.FortSchematicItemDefinition
// Size: 0x478
class UFortSchematicItemDefinition : public UFortAlterableItemDefinition
{
	struct FDataTableRowHandle CraftingRecipe; // 0x420 (0x10)
	struct TWeakObjectPtr<class USoundBase> CraftingSuccessSound; // 0x430 (0x28)
	struct TWeakObjectPtr<class UFortWorldItemDefinition> CachedResultWorldItemDefinition; // 0x458 (0x8)
	struct FDataTableCategoryHandle LootLevelData; // 0x460 (0x10)
	struct FName CraftingTimeRowName; // 0x470 (0x4)
	bool bUseSchematicDisplayName; // 0x474 (0x1)
	unsigned char padding_475[0x3]; // 0x475 (0x3)

	/* Functions */

	// Function /Script/FortniteGame.FortSchematicItemDefinition.GetResultWorldItemDefinition (Underlying native function: GetResultWorldItemDefinition 0x8efcd18)
	class UFortWorldItemDefinition* GetResultWorldItemDefinition(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSchematicItemDefinition.GetRecipe (Underlying native function: GetRecipe 0x8efcbb0)
	struct FRecipe GetRecipe(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSchematicItemDefinition.GetQuantityProduced (Underlying native function: GetQuantityProduced 0x8efcb8c)
	int GetQuantityProduced(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSchematicItemDefinition.GetCraftingTimeForCharacter (Underlying native function: GetCraftingTimeForCharacter 0x8efb9c8)
	float GetCraftingTimeForCharacter(int& Level, class AFortPlayerPawn*& FortPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSchematicItemDefinition.GetCraftingTime (Underlying native function: GetCraftingTime 0x8efb938)
	float GetCraftingTime(int& Level); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSchematicItemDefinition.GetCraftingSuccessSound (Underlying native function: GetCraftingSuccessSound 0x8efb8e8)
	class USoundBase* GetCraftingSuccessSound(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSchematicItemDefinition.DoesResultWorldItemDisassembleRecipeMatchExactly (Underlying native function: DoesResultWorldItemDisassembleRecipeMatchExactly 0x8efa884)
	bool DoesResultWorldItemDisassembleRecipeMatchExactly(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

