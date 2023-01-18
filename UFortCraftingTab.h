// Class /Script/CraftingUI.FortCraftingTab
// Size: 0x4e0
class UFortCraftingTab : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	struct FName TabNameID; // 0x3b0 (0x4)
	unsigned char unreflected_3b4[0xc]; // 0x3b4 (0xc) 
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x3c0 (0xe0)
	struct FGameplayTagContainer PrimaryIngredientTags; // 0x4a0 (0x20)
	class UFortCraftingItemInfoWidget* CraftingItemInfo; // 0x4c0 (0x8)
	class UCommonListView* ListViewRecipes; // 0x4c8 (0x8)
	class UAthenaQuickbarEditorBase* QuickbarEditor; // 0x4d0 (0x8)
	unsigned char padding_4d8[0x8]; // 0x4d8 (0x8)

	/* Functions */

	// Function /Script/CraftingUI.FortCraftingTab.OnFormulaListUpdated (Has no native function)
	void OnFormulaListUpdated(int& NumFormulas); // (Event | Protected | BlueprintEvent)

	// Function /Script/CraftingUI.FortCraftingTab.HandleInventoryItemSelected (Underlying native function: HandleInventoryItemSelected 0x7302398)
	void HandleInventoryItemSelected(class UFortItem*& Item); // (Final | Native | Private)
};

