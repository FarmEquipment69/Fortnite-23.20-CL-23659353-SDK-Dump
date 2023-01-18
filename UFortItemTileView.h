// Class /Script/FortniteUI.FortItemTileView
// Size: 0xd30
class UFortItemTileView : public UCommonTileView
{
	unsigned char unreflected_bb0[0x118]; // 0xbb0 (0x118) 
	bool bShouldShowNullItemListEntry; // 0xcc8 (0x1)
	bool bAutomaticallyLoadItemDetails; // 0xcc9 (0x1)
	enum EItemListViewDisplayType DisplayType; // 0xcca (0x1)
	bool bShouldOverrideChildItemWidgetCardSize; // 0xccb (0x1)
	enum EFortItemCardSize ChildItemWidgetCardSizeOverride; // 0xccc (0x1)
	unsigned char unreflected_ccd[0x3]; // 0xccd (0x3) 
	float ChildCosmeticItemCardWidthOverride; // 0xcd0 (0x4)
	unsigned char unreflected_cd4[0x4]; // 0xcd4 (0x4) 
	struct FMulticastInlineDelegate OnInventoryUpdatedEvent; // 0xcd8 (0x10)
	unsigned char unreflected_ce8[0x8]; // 0xce8 (0x8) 
	struct TArray<struct TWeakObjectPtr<class UFortItem>> CustomItemList; // 0xcf0 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortItem>> ItemsForListView; // 0xd00 (0x10)
	struct TScriptInterface<class IFortItemViewContextInterface> ItemViewContext; // 0xd10 (0x10)
	unsigned char padding_d20[0x10]; // 0xd20 (0x10)
};

