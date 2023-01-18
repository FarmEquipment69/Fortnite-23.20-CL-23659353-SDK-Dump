// ScriptStruct /Script/CraftingRuntime.CraftingFormula
// Size: 0x80
struct FCraftingFormula : FTableRowBase
{
	struct FText DisplayName; // 0x8 (0x18)
	unsigned char bEnabled; // 0x20 (0x1)
	unsigned char bAlwaysKnownFormula; // 0x20 (0x1)
	unsigned char bInstantlyConsumeIngredients; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	struct FGameplayTag SourceObjectTag; // 0x24 (0x4)
	struct FGameplayTag CategoryTag; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TArray<struct FCraftingIngredientRequirement> RequiredIngredients; // 0x30 (0x10)
	struct FName ResultLootTierKey; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct TWeakObjectPtr<class UClass> WhileCraftingAbility; // 0x48 (0x28)
	struct TArray<struct FCraftingUpgradeRule> UpgradeRules; // 0x70 (0x10)
};

