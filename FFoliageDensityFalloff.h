// ScriptStruct /Script/Foliage.FoliageDensityFalloff
// Size: 0x90
struct FFoliageDensityFalloff
{
	bool bUseFalloffCurve; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FRuntimeFloatCurve FalloffCurve; // 0x8 (0x88)
};

