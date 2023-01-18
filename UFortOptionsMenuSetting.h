// Class /Script/FortniteUI.FortOptionsMenuSetting
// Size: 0x310
class UFortOptionsMenuSetting : public UCommonUserWidget
{
	struct FMulticastInlineDelegate SettingValueChanged; // 0x290 (0x10)
	enum ESettingType SettingType; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x7]; // 0x2a1 (0x7) 
	struct FText NameText; // 0x2a8 (0x18)
	class UCommonTextBlock* TabTooltipText; // 0x2c0 (0x8)
	struct FText HoverText; // 0x2c8 (0x18)
	struct FTimerHandle* TooltipTimer; // 0x2e0 (0x8)
	int MinIntegralDigits; // 0x2e8 (0x4)
	int MaxIntegralDigits; // 0x2ec (0x4)
	int MinFractionalDigits; // 0x2f0 (0x4)
	int MaxFractionalDigits; // 0x2f4 (0x4)
	float MinSensitivityValue; // 0x2f8 (0x4)
	float MaxSensitivityValue; // 0x2fc (0x4)
	float PreviousSettingValue; // 0x300 (0x4)
	bool bDisplayRenderScale; // 0x304 (0x1)
	bool HideLabelText; // 0x305 (0x1)
	bool HideSpaceRight; // 0x306 (0x1)
	unsigned char unreflected_307[0x1]; // 0x307 (0x1) 
	class UAnalogSlider* SliderMenu; // 0x308 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortOptionsMenuSetting.UpdateVisuals (Has no native function)
	void UpdateVisuals(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortOptionsMenuSetting.UpdateSetting (Underlying native function: UpdateSetting 0xa79af84)
	void UpdateSetting(class UCommonTextBlock*& TooltipTextBlock); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOptionsMenuSetting.HandleCaptureEnd (Underlying native function: HandleCaptureEnd 0xa798f2c)
	void HandleCaptureEnd(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortOptionsMenuSetting.HandleAnalogCaptureEnd (Underlying native function: HandleAnalogCaptureEnd 0xa798e98)
	void HandleAnalogCaptureEnd(float& Value); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortOptionsMenuSetting.CenterOnWidget (Underlying native function: CenterOnWidget 0xa7984ec)
	void CenterOnWidget(); // (Final | Native | Protected | BlueprintCallable)
};

