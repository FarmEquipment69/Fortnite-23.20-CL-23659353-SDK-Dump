// Class /Script/FortniteUI.FortTextButton
// Size: 0x14d0
class UFortTextButton : public UCommonButtonLegacy
{
	struct FText DefaultText; // 0x1430 (0x18)
	bool bUseAllCaps; // 0x1448 (0x1)
	bool bOverrideFont; // 0x1449 (0x1)
	unsigned char unreflected_144a[0x6]; // 0x144a (0x6) 
	struct FSlateFontInfo Font; // 0x1450 (0x58)
	struct FSlateColor FontColor; // 0x14a8 (0x14)
	unsigned char unreflected_14bc[0x4]; // 0x14bc (0x4) 
	class UCommonTextBlock* TextContent; // 0x14c0 (0x8)
	unsigned char padding_14c8[0x8]; // 0x14c8 (0x8)
};

