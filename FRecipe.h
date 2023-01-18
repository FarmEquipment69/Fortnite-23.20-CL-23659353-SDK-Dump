// ScriptStruct /Script/FortniteGame.Recipe
// Size: 0x58
struct FRecipe : FTableRowBase
{
	struct TArray<struct FFortItemQuantityPair> RecipeResults; // 0x8 (0x10)
	bool bIsConsumed; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct TArray<struct FFortItemQuantityPair> RecipeCosts; // 0x20 (0x10)
	struct FGameplayTagContainer RequiredCatalysts; // 0x30 (0x20)
	int Score; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

