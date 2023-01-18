// Class /Script/CraftingUI.FortPotContentsPopup
// Size: 0x290
class UFortPotContentsPopup : public UUserWidget
{
	int MaxItemsToShow; // 0x268 (0x4)
	unsigned char unreflected_26c[0xc]; // 0x26c (0xc) 
	class UCommonTileView* TileViewPotContents; // 0x278 (0x8)
	class UCommonTextBlock* TextMoreItems; // 0x280 (0x8)
	class UWidget* OverlayPopup; // 0x288 (0x8)

	/* Functions */

	// Function /Script/CraftingUI.FortPotContentsPopup.SetOwningCraftingObject (Underlying native function: SetOwningCraftingObject 0x73025a8)
	void SetOwningCraftingObject(class ACraftingObjectBGA*& InCraftingObject); // (Final | Native | Public | BlueprintCallable)
};

