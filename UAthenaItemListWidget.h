// Class /Script/FortniteUI.AthenaItemListWidget
// Size: 0x360
class UAthenaItemListWidget : public UFortHUDElementWidget
{
	struct FFortItemFilterDefinition ItemFilter; // 0x2d0 (0x60)
	struct FGameplayTagContainer ItemFilterTags; // 0x330 (0x20)
	enum EInventoryContentSortType ItemSortType; // 0x350 (0x1)
	unsigned char unreflected_351[0x7]; // 0x351 (0x7) 
	class UFortItemListView* ItemListView; // 0x358 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemListWidget.OnInventoryUpdated (Has no native function)
	void OnInventoryUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemListWidget.HandleInventoryUpdated (Underlying native function: HandleInventoryUpdated 0xa5098a4)
	void HandleInventoryUpdated(); // (Final | Native | Private)
};

