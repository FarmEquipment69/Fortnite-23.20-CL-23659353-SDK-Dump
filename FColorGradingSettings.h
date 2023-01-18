// ScriptStruct /Script/Engine.ColorGradingSettings
// Size: 0x290
struct FColorGradingSettings
{
	struct FColorGradePerRangeSettings Global; // 0x0 (0xa0)
	struct FColorGradePerRangeSettings Shadows; // 0xa0 (0xa0)
	struct FColorGradePerRangeSettings Midtones; // 0x140 (0xa0)
	struct FColorGradePerRangeSettings Highlights; // 0x1e0 (0xa0)
	float ShadowsMax; // 0x280 (0x4)
	float HighlightsMin; // 0x284 (0x4)
	float HighlightsMax; // 0x288 (0x4)
	unsigned char padding_28c[0x4]; // 0x28c (0x4)
};

