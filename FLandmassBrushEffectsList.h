// ScriptStruct /Script/Landmass.LandmassBrushEffectsList
// Size: 0x60
struct FLandmassBrushEffectsList
{
	struct FBrushEffectBlurring* Blurring; // 0x0 (0x8)
	struct FBrushEffectCurlNoise CurlNoise; // 0x8 (0x10)
	struct FBrushEffectDisplacement Displacement; // 0x18 (0x28)
	struct FBrushEffectSmoothBlending* SmoothBlending; // 0x40 (0x8)
	struct FBrushEffectTerracing Terracing; // 0x48 (0x14)
	unsigned char padding_5c[0x4]; // 0x5c (0x4)
};

