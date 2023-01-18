// Class /Script/FortniteUI.AthenaInventoryPanel
// Size: 0x790
class UAthenaInventoryPanel : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0xf0]; // 0x3a8 (0xf0) 
	struct FName TabNameID; // 0x498 (0x4)
	unsigned char unreflected_49c[0x4]; // 0x49c (0x4) 
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4a0 (0xe0)
	struct FFortTabButtonLabelInfo CreativeTabButtonLabelInfo; // 0x580 (0xe0)
	class UClass* QuantitySelectorClass; // 0x660 (0x8)
	class UDataTable* StackSizeDataTable; // 0x668 (0x8)
	struct FDataTableRowHandle DropItemInputRowHandle; // 0x670 (0x10)
	struct FDataTableRowHandle DropAllInputRowHandle; // 0x680 (0x10)
	struct FDataTableRowHandle DropStackInputRowHandle; // 0x690 (0x10)
	struct FDataTableRowHandle DropHalfInputRowHandle; // 0x6a0 (0x10)
	struct FText DropItemsText; // 0x6b0 (0x18)
	struct FText ConfirmDropText; // 0x6c8 (0x18)
	struct FText DropStackTextFormat; // 0x6e0 (0x18)
	struct FGameplayTagContainer CurrencyItemTags; // 0x6f8 (0x20)
	struct FGameplayTagContainer IngredientItemTags; // 0x718 (0x20)
	class UFortItemTileView* CurrencyView; // 0x738 (0x8)
	class UFortItemTileView* IngredientView; // 0x740 (0x8)
	class UFortItemTileView* ResourceView; // 0x748 (0x8)
	class UFortItemTileView* AmmoView; // 0x750 (0x8)
	class UVerticalBox* ExtensionRowsHolder; // 0x758 (0x8)
	class UAthenaQuickbarEditorBase* QuickbarEditor; // 0x760 (0x8)
	struct TArray<class UFortItemTileView*> InventorySections; // 0x768 (0x10)
	unsigned char padding_778[0x18]; // 0x778 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaInventoryPanel.HandleInventoryItemSelected (Underlying native function: HandleInventoryItemSelected 0xa5559c8)
	void HandleInventoryItemSelected(class UFortItem*& SelectedInventoryItem); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaInventoryPanel.GetExtensionRowHeight (Underlying native function: GetExtensionRowHeight 0xa554f68)
	float GetExtensionRowHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

