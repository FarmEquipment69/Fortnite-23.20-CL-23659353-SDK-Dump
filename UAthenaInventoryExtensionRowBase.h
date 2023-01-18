// Class /Script/FortniteUI.AthenaInventoryExtensionRowBase
// Size: 0x2a8
class UAthenaInventoryExtensionRowBase : public UCommonUserWidget
{
	struct TWeakObjectPtr<class UAthenaInventoryPanel> ParentInventoryPanel; // 0x290 (0x8)
	class UFortItemTileView* ItemTileView; // 0x298 (0x8)
	enum EFortItemType ItemType; // 0x2a0 (0x1)
	unsigned char padding_2a1[0x7]; // 0x2a1 (0x7)
};

