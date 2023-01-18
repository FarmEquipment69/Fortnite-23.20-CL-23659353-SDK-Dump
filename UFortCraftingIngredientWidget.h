// Class /Script/CraftingUI.FortCraftingIngredientWidget
// Size: 0x2b8
class UFortCraftingIngredientWidget : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class UCommonTextBlock* TextNumAvailable; // 0x298 (0x8)
	class UCommonTextBlock* TextNumRequired; // 0x2a0 (0x8)
	class UAthenaItemIcon* ItemIcon; // 0x2a8 (0x8)
	class UCommonLazyImage* LazyImageIcon; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/CraftingUI.FortCraftingIngredientWidget.OnIngredientWidgetUpdated (Has no native function)
	void OnIngredientWidgetUpdated(int& NumAvailable, int& NumRequired, bool& bIsPrimaryIngredient, bool& bIsLastIngredient); // (Event | Protected | BlueprintEvent)
};

