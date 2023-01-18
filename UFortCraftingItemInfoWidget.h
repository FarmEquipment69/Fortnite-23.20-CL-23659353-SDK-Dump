// Class /Script/CraftingUI.FortCraftingItemInfoWidget
// Size: 0x410
class UFortCraftingItemInfoWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	struct FText RarityTextFormat; // 0x3b0 (0x18)
	class UCommonTextBlock* TextItemName; // 0x3c8 (0x8)
	class UCommonTextBlock* TextItemRarity; // 0x3d0 (0x8)
	class UCommonTextBlock* TextItemCategory; // 0x3d8 (0x8)
	class UFortItemCategoryIndicator* ItemCategoryIndicator; // 0x3e0 (0x8)
	class UCommonTextBlock* TextItemDescription; // 0x3e8 (0x8)
	class UAthenaInventoryItemStatsWidget* ItemStatsWidget; // 0x3f0 (0x8)
	class UFortCraftingFormulaIngredientsWidget* IngredientsWidget; // 0x3f8 (0x8)
	class UCommonButtonLegacy* ButtonStartCrafting; // 0x400 (0x8)
	unsigned char padding_408[0x8]; // 0x408 (0x8)

	/* Functions */

	// Function /Script/CraftingUI.FortCraftingItemInfoWidget.OnItemRaritySet (Has no native function)
	void OnItemRaritySet(enum EFortRarity& Rarity, struct FFortRarityItemData& RarityItemData); // (Event | Protected | BlueprintEvent)
};

