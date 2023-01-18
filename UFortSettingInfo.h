// Class /Script/FortniteUI.FortSettingInfo
// Size: 0x88
class UFortSettingInfo : public UObject
{
	enum ESettingType SettingType; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	class UClass* SettingWidgetType; // 0x30 (0x8)
	struct FText OptionDisplayText; // 0x38 (0x18)
	struct FText OptionHoverText; // 0x50 (0x18)
	int MinIntegralDigits; // 0x68 (0x4)
	int MaxIntegralDigits; // 0x6c (0x4)
	int MinFractionalDigits; // 0x70 (0x4)
	int MaxFractionalDigits; // 0x74 (0x4)
	float StepSize; // 0x78 (0x4)
	float MinSensitivityValue; // 0x7c (0x4)
	float MaxSensitivityValue; // 0x80 (0x4)
	struct TEnumAsByte<ERoundingMode> RoundingMode; // 0x84 (0x1)
	unsigned char padding_85[0x3]; // 0x85 (0x3)
};

