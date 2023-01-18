// Class /Script/FortniteGame.FortCosmeticRichColorVariant
// Size: 0x1c8
class UFortCosmeticRichColorVariant : public UFortCosmeticVariant
{
	int AntiConflictChannel; // 0x78 (0x4)
	float MinimumDistance; // 0x7c (0x4)
	float MinimumContrast; // 0x80 (0x4)
	float MinimumHueShift; // 0x84 (0x4)
	float MinimumSaturationShift; // 0x88 (0x4)
	enum EFortRichColorConflictResolutionRules AntiConflictRules; // 0x8c (0x1)
	unsigned char unreflected_8d[0x3]; // 0x8d (0x3) 
	struct FRichColorVariantDef InlineVariant; // 0x90 (0x138)
};

