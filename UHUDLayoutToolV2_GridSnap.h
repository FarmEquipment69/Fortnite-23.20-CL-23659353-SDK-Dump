// Class /Script/FortniteUI.HUDLayoutToolV2_GridSnap
// Size: 0x2f0
class UHUDLayoutToolV2_GridSnap : public UCommonUserWidget
{
	bool bGridSnapEnabled; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	class UPaperSprite* CheckMarkSprite; // 0x298 (0x8)
	unsigned char unreflected_2a0[0x30]; // 0x2a0 (0x30) 
	class UCommonTextBlock* TextSettingValue; // 0x2d0 (0x8)
	class UAnalogSlider* SliderSettingValue; // 0x2d8 (0x8)
	class UHUDLayoutToolV2_Button* ButtonToggleEnabled; // 0x2e0 (0x8)
	class UFortSimpleMaterialProgressBar* ProgressBarColoredBackground; // 0x2e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.HUDLayoutToolV2_GridSnap.HandleSliderValueChanged (Underlying native function: HandleSliderValueChanged 0xa5f5bfc)
	void HandleSliderValueChanged(float& InValue); // (Final | Native | Private)
};

