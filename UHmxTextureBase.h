// Class /Script/HmxGraphics.HmxTextureBase
// Size: 0x150
class UHmxTextureBase : public UTexture
{
	int Width; // 0x140 (0x4)
	unsigned char unreflected_144[0x4]; // 0x144 (0x4) 
	enum ETextureFilterMode TextureFilterMode; // 0x148 (0x4)
	struct TEnumAsByte<TextureAddress> TextureTilingMode; // 0x14c (0x1)
	unsigned char padding_14d[0x3]; // 0x14d (0x3)

	/* Functions */

	// Function /Script/HmxGraphics.HmxTextureBase.GetCurrentTextureWidth (Underlying native function: GetCurrentTextureWidth 0x558d1b0)
	int GetCurrentTextureWidth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxGraphics.HmxTextureBase.GetCurrentTextureHeight (Underlying native function: GetCurrentTextureHeight 0x54490f0)
	int GetCurrentTextureHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

