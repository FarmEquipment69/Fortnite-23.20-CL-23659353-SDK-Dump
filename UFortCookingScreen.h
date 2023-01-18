// Class /Script/CraftingUI.FortCookingScreen
// Size: 0x3f8
class UFortCookingScreen : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	struct FDataTableRowHandle CloseInputAction; // 0x3b0 (0x10)
	unsigned char unreflected_3c0[0x8]; // 0x3c0 (0x8) 
	class UCommonButtonLegacy* ButtonEjectAll; // 0x3c8 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x3d0 (0x8)
	class UCommonTextBlock* TextRecipeName; // 0x3d8 (0x8)
	class UCommonTextBlock* TextRecipeDescription; // 0x3e0 (0x8)
	class UImage* ImageRecipe; // 0x3e8 (0x8)
	class UFortSlottedRadialMenu* RadialMenuRecipes; // 0x3f0 (0x8)
};

