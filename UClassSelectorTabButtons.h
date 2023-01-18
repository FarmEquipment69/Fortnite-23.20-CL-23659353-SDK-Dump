// Class /Script/CRD_ClassSelectorUI.ClassSelectorTabButtons
// Size: 0x348
class UClassSelectorTabButtons : public UCommonUserWidget
{
	class UCommonActionWidget* LeftActionWidget; // 0x290 (0x8)
	class UCommonActionWidget* RightActionWidget; // 0x298 (0x8)
	class UScrollBox* TabButtonsScrollBox; // 0x2a0 (0x8)
	class UCommonButtonBase* LeftButton; // 0x2a8 (0x8)
	class UCommonButtonBase* RightButton; // 0x2b0 (0x8)
	struct FDataTableRowHandle LeftInputAction; // 0x2b8 (0x10)
	unsigned char unreflected_2c8[0x8]; // 0x2c8 (0x8) 
	struct FDataTableRowHandle RightInputAction; // 0x2d0 (0x10)
	unsigned char unreflected_2e0[0x8]; // 0x2e0 (0x8) 
	struct TArray<class UClassSelectorTeamTile*> TabButtons; // 0x2e8 (0x10)
	class UClass* TabButtonClass; // 0x2f8 (0x8)
	struct FMargin TabButtonPadding; // 0x300 (0x10)
	unsigned char unreflected_310[0x8]; // 0x310 (0x8) 
	struct TArray<struct FText> DesignerPreviewTabNames; // 0x318 (0x10)
	float ButtonScrollAmount; // 0x328 (0x4)
	unsigned char padding_32c[0x1c]; // 0x32c (0x1c)
};

