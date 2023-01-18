// ScriptStruct /Script/CraftingRuntime.CraftingIngredientUIData
// Size: 0x48
struct FCraftingIngredientUIData : FTableRowBase
{
	struct FGameplayTagContainer IngredientTags; // 0x8 (0x20)
	struct TArray<struct TWeakObjectPtr<class UFortItemDefinition>> ItemDefs; // 0x28 (0x10)
	struct TArray<struct TWeakObjectPtr<class UObject>> Icons; // 0x38 (0x10)
};

