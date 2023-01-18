// Class /Script/FortniteUI.FortItemListView
// Size: 0xd10
class UFortItemListView : public UCommonListView
{
	unsigned char unreflected_b90[0x118]; // 0xb90 (0x118) 
	bool bShouldShowNullItemListEntry; // 0xca8 (0x1)
	bool bAutomaticallyLoadItemDetails; // 0xca9 (0x1)
	enum EItemListViewDisplayType DisplayType; // 0xcaa (0x1)
	unsigned char unreflected_cab[0x5]; // 0xcab (0x5) 
	struct FMulticastInlineDelegate OnInventoryUpdatedEvent; // 0xcb0 (0x10)
	struct FMulticastInlineDelegate OnLoadItemsBegin; // 0xcc0 (0x10)
	struct FMulticastInlineDelegate OnLoadItemsEnd; // 0xcd0 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortItem>> CustomItemList; // 0xce0 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortItem>> ItemsForListView; // 0xcf0 (0x10)
	struct TScriptInterface<class IFortItemViewContextInterface> ItemViewContext; // 0xd00 (0x10)
};

