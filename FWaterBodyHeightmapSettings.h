// ScriptStruct /Script/Water.WaterBodyHeightmapSettings
// Size: 0x80
struct FWaterBodyHeightmapSettings
{
	enum EWaterBrushBlendType BlendMode; // 0x0 (0x1)
	bool bInvertShape; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	struct FWaterFalloffSettings FalloffSettings; // 0x4 (0x14)
	struct FWaterBrushEffects Effects; // 0x18 (0x60)
	int Priority; // 0x78 (0x4)
	unsigned char padding_7c[0x4]; // 0x7c (0x4)
};

