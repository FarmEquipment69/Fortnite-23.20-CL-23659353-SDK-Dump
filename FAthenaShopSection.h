// ScriptStruct /Script/FortniteUI.AthenaShopSection
// Size: 0x88
struct FAthenaShopSection
{
	struct FName SectionId; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FText SectionDisplayName; // 0x8 (0x18)
	bool bSortOffersByOwnership; // 0x20 (0x1)
	bool bShowIneligibleOffers; // 0x21 (0x1)
	bool bShowIneligibleOffersIfGiftable; // 0x22 (0x1)
	bool bShowTimer; // 0x23 (0x1)
	bool bEnableToastNotification; // 0x24 (0x1)
	unsigned char unreflected_25[0x3]; // 0x25 (0x3) 
	int LandingPriority; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FDynamicBackground SectionBackground; // 0x30 (0x48)
	bool bHidden; // 0x78 (0x1)
	unsigned char unreflected_79[0x7]; // 0x79 (0x7) 
	struct FDateTime* DateToResetItemShopLanding; // 0x80 (0x8)
};

