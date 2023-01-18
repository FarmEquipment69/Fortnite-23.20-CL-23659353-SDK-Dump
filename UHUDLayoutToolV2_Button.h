// Class /Script/FortniteUI.HUDLayoutToolV2_Button
// Size: 0x580
class UHUDLayoutToolV2_Button : public UCommonUserWidget
{
	bool bIsToggleable; // 0x290 (0x1)
	unsigned char unreflected_291[0x3]; // 0x291 (0x3) 
	float ButtonWidthOverride; // 0x294 (0x4)
	float ButtonHeightOverride; // 0x298 (0x4)
	unsigned char unreflected_29c[0x4]; // 0x29c (0x4) 
	struct FText Text; // 0x2a0 (0x18)
	struct FMargin TextPadding; // 0x2b8 (0x10)
	int TextFontSize; // 0x2c8 (0x4)
	unsigned char unreflected_2cc[0x4]; // 0x2cc (0x4) 
	struct FSlateBrush IconBrush; // 0x2d0 (0xc0)
	struct FMargin IconPadding; // 0x390 (0x10)
	bool bMatchIconSize; // 0x3a0 (0x1)
	unsigned char unreflected_3a1[0xf]; // 0x3a1 (0xf) 
	struct FSlateBrush BackgroundBrush; // 0x3b0 (0xc0)
	struct FMargin InternalPadding; // 0x470 (0x10)
	unsigned char bOverrideWidthOverride; // 0x480 (0x1)
	unsigned char bOverrideHeightOverride; // 0x480 (0x1)
	bool bExternallyControlledStates; // 0x481 (0x1)
	unsigned char unreflected_482[0x2]; // 0x482 (0x2) 
	struct FHUDLayoutToolV2_ButtonStateColor NormalButtonStyle; // 0x484 (0x38)
	struct FHUDLayoutToolV2_ButtonStateColor PressedButtonStyle; // 0x4bc (0x38)
	struct FHUDLayoutToolV2_ButtonStateColor SelectedButtonStyle; // 0x4f4 (0x38)
	unsigned char unreflected_52c[0x2c]; // 0x52c (0x2c) 
	class USizeBox* SizeBoxControl; // 0x558 (0x8)
	class UBorder* BorderContainer; // 0x560 (0x8)
	class UCommonTextBlock* TextButtonAction; // 0x568 (0x8)
	class UImage* ImageIcon; // 0x570 (0x8)
	class UImage* ImageBackground; // 0x578 (0x8)
};

