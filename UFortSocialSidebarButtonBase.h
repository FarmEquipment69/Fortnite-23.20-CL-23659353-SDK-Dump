// Class /Script/FortniteUI.FortSocialSidebarButtonBase
// Size: 0x1480
class UFortSocialSidebarButtonBase : public UCommonButtonLegacy
{
	enum EFortSidebarButtonType ButtonType; // 0x1430 (0x1)
	unsigned char unreflected_1431[0x3]; // 0x1431 (0x3) 
	struct FLinearColor ColorSkewBoxSelected; // 0x1434 (0x10)
	struct FLinearColor ColorSkewBoxHover; // 0x1444 (0x10)
	unsigned char unreflected_1454[0x4]; // 0x1454 (0x4) 
	class UBorder* BorderSkewBox; // 0x1458 (0x8)
	int NumberToShow; // 0x1460 (0x4)
	bool bShowBang; // 0x1464 (0x1)
	unsigned char unreflected_1465[0x3]; // 0x1465 (0x3) 
	class UFortBangWrapper_NUI* BangWrapper; // 0x1468 (0x8)
	unsigned char padding_1470[0x10]; // 0x1470 (0x10)
};

