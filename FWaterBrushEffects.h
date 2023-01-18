// ScriptStruct /Script/Water.WaterBrushEffects
// Size: 0x60
struct FWaterBrushEffects
{
	struct FWaterBrushEffectBlurring* Blurring; // 0x0 (0x8)
	struct FWaterBrushEffectCurlNoise CurlNoise; // 0x8 (0x10)
	struct FWaterBrushEffectDisplacement Displacement; // 0x18 (0x28)
	struct FWaterBrushEffectSmoothBlending* SmoothBlending; // 0x40 (0x8)
	struct FWaterBrushEffectTerracing Terracing; // 0x48 (0x14)
	unsigned char padding_5c[0x4]; // 0x5c (0x4)
};

