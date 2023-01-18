// Class /Script/FortniteUI.FortPlayerBanner
// Size: 0x260
class UFortPlayerBanner : public UWidget
{
	bool bShowBorder; // 0x148 (0x1)
	bool bUseLargeTexture; // 0x149 (0x1)
	bool bSquareShape; // 0x14a (0x1)
	unsigned char unreflected_14b[0x5]; // 0x14b (0x5) 
	struct FVector2D DesiredSize; // 0x150 (0x10)
	class UMaterialInterface* DefaultBorderlessBannerMaterial; // 0x160 (0x8)
	class UMaterialInterface* DefaultBorderlessSquareBannerMaterial; // 0x168 (0x8)
	struct FSlateBrush BannerBrush; // 0x170 (0xc0)
	unsigned char padding_230[0x30]; // 0x230 (0x30)
};

