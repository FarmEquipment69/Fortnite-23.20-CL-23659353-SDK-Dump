// ScriptStruct /Script/FortniteUI.FortCreativeItemListCategoryData
// Size: 0x10
struct FFortCreativeItemListCategoryData : FTableRowBase
{
	enum ECreativeItemCategory category; // 0x8 (0x1)
	enum EFortItemCardSize CardSize; // 0x9 (0x1)
	bool bCollapseCardBorderPad; // 0xa (0x1)
	unsigned char padding_b[0x5]; // 0xb (0x5)
};

