// ScriptStruct /Script/FortniteGame.FortCreativeItemListData
// Size: 0x20
struct FFortCreativeItemListData : FTableRowBase
{
	enum ECreativeItemCategory category; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	struct FPrimaryAssetId* ItemPrimaryAssetId; // 0xc (0x8)
	int Count; // 0x14 (0x4)
	float SortPriority; // 0x18 (0x4)
	bool bIncluded; // 0x1c (0x1)
	unsigned char padding_1d[0x3]; // 0x1d (0x3)
};

