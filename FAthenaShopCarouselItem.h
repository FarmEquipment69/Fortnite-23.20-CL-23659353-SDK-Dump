// ScriptStruct /Script/FortniteUI.AthenaShopCarouselItem
// Size: 0x68
struct FAthenaShopCarouselItem
{
	struct FText PreviewTitle; // 0x0 (0x18)
	struct FText FullTitle; // 0x18 (0x18)
	struct FString TileImage; // 0x30 (0x10)
	struct FString VideoString; // 0x40 (0x10)
	struct FString OfferId; // 0x50 (0x10)
	int LandingPriority; // 0x60 (0x4)
	enum EItemShopNavigationAction Action; // 0x64 (0x1)
	bool bHidden; // 0x65 (0x1)
	unsigned char padding_66[0x2]; // 0x66 (0x2)
};

