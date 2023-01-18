// ScriptStruct /Script/FortniteGame.FortCreativeTag
// Size: 0x60
struct FFortCreativeTag : FTableRowBase
{
	struct FText Name; // 0x8 (0x18)
	struct FName category; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct TWeakObjectPtr<class UTexture2D> Icon; // 0x28 (0x28)
	float SortPriority; // 0x50 (0x4)
	bool bNonCosmetic; // 0x54 (0x1)
	unsigned char padding_55[0xb]; // 0x55 (0xb)
};

