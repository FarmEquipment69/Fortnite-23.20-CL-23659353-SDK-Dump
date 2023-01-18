// ScriptStruct /Script/CommonUI.CommonNumberFormattingOptions
// Size: 0x14
struct FCommonNumberFormattingOptions
{
	struct TEnumAsByte<ERoundingMode> RoundingMode; // 0x0 (0x1)
	bool UseGrouping; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	int MinimumIntegralDigits; // 0x4 (0x4)
	int MaximumIntegralDigits; // 0x8 (0x4)
	int MinimumFractionalDigits; // 0xc (0x4)
	int MaximumFractionalDigits; // 0x10 (0x4)
};

