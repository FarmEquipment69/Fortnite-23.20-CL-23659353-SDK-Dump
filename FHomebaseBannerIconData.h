// ScriptStruct /Script/FortniteGame.HomebaseBannerIconData
// Size: 0x98
struct FHomebaseBannerIconData : FTableRowBase
{
	struct TWeakObjectPtr<class UTexture2D> SmallImage; // 0x8 (0x28)
	struct TWeakObjectPtr<class UTexture2D> LargeImage; // 0x30 (0x28)
	struct FName CategoryRowName; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FText DisplayName; // 0x60 (0x18)
	struct FText DisplayDescription; // 0x78 (0x18)
	unsigned char bFullUsageRights; // 0x90 (0x1)
	unsigned char padding_91[0x7]; // 0x91 (0x7)
};

