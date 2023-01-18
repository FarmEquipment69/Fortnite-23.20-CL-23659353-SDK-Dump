// ScriptStruct /Script/Landmass.BrushEffectCurves
// Size: 0x20
struct FBrushEffectCurves
{
	bool bUseCurveChannel; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UCurveFloat* ElevationCurveAsset; // 0x8 (0x8)
	float ChannelEdgeOffset; // 0x10 (0x4)
	float ChannelDepth; // 0x14 (0x4)
	float CurveRampWidth; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

