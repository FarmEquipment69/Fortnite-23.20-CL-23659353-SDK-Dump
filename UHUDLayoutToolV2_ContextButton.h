// Class /Script/FortniteUI.HUDLayoutToolV2_ContextButton
// Size: 0x360
class UHUDLayoutToolV2_ContextButton : public UCommonUserWidget
{
	class UPaperSprite* InEditIcon; // 0x290 (0x8)
	struct FLinearColor InEditIconColorAndOpacity; // 0x298 (0x10)
	struct FLinearColor InEditBackgroundColorAndOpacity; // 0x2a8 (0x10)
	class UPaperSprite* VisibleIcon; // 0x2b8 (0x8)
	struct FLinearColor VisibleIconColorAndOpacity; // 0x2c0 (0x10)
	struct FLinearColor VisibleBackgroundColorAndOpacity; // 0x2d0 (0x10)
	class UPaperSprite* HiddenIcon; // 0x2e0 (0x8)
	struct FLinearColor HiddenIconColorAndOpacity; // 0x2e8 (0x10)
	struct FLinearColor HiddenBackgroundColorAndOpacity; // 0x2f8 (0x10)
	unsigned char unreflected_308[0x38]; // 0x308 (0x38) 
	class UCommonTextBlock* TextLayoutName; // 0x340 (0x8)
	class UHUDLayoutToolV2_Button* ButtonContextVisibility; // 0x348 (0x8)
	class UHUDLayoutToolV2_Button* ButtonToggleContextEditing; // 0x350 (0x8)
	class UImage* ImageSelectionHighlight; // 0x358 (0x8)
};

