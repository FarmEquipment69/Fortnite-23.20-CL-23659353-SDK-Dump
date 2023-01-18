// Class /Script/FortniteUI.AthenaInventoryItemInfo
// Size: 0x3e8
class UAthenaInventoryItemInfo : public UAthenaItemElementWidgetBase
{
	unsigned char unreflected_298[0xd8]; // 0x298 (0xd8) 
	class UCommonTextBlock* TextItemName; // 0x370 (0x8)
	class UCommonTextBlock* TextItemDescription; // 0x378 (0x8)
	class UCommonTextBlock* TextItemRarity; // 0x380 (0x8)
	class UCommonTextBlock* TextItemCategory; // 0x388 (0x8)
	class UImage* ImageItemCategory; // 0x390 (0x8)
	class UAthenaItemIcon* ItemIcon; // 0x398 (0x8)
	class UAthenaItemTierWidget* ItemTierWidget; // 0x3a0 (0x8)
	class UAthenaInventoryItemStatsWidget* ItemStatsWidget; // 0x3a8 (0x8)
	struct FDataTableRowHandle InspectItemInputRowHandle; // 0x3b0 (0x10)
	struct FText ItemRarityTextFormat; // 0x3c0 (0x18)
	struct FName CategoryIconTextureParamName; // 0x3d8 (0x4)
	unsigned char padding_3dc[0xc]; // 0x3dc (0xc)

	/* Functions */

	// Function /Script/FortniteUI.AthenaInventoryItemInfo.OnOwnerDeactivated (Has no native function)
	void OnOwnerDeactivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaInventoryItemInfo.OnItemRarityTextUpdated (Has no native function)
	void OnItemRarityTextUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaInventoryItemInfo.OnItemNameTextUpdated (Has no native function)
	void OnItemNameTextUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaInventoryItemInfo.OnItemDescriptionTextUpdated (Has no native function)
	void OnItemDescriptionTextUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaInventoryItemInfo.OnItemCategoryTextUpdated (Has no native function)
	void OnItemCategoryTextUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaInventoryItemInfo.OnItemCategoryIconUpdated (Has no native function)
	void OnItemCategoryIconUpdated(bool& bHasCategoryIcon); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaInventoryItemInfo.OnInspectItemInput (Has no native function)
	void OnInspectItemInput(bool& bPressed); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaInventoryItemInfo.OnExtensionWidgetAdded (Has no native function)
	void OnExtensionWidgetAdded(class UUserWidget*& ExtensionWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaInventoryItemInfo.HandleInventoryItemSelected (Underlying native function: HandleInventoryItemSelected 0xa53222c)
	void HandleInventoryItemSelected(class UFortItem*& SelectedItem); // (Final | Native | Private)
};

