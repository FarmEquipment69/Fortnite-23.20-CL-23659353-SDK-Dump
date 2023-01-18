// Class /Script/Engine.TextureRenderTargetCube
// Size: 0x160
class UTextureRenderTargetCube : public UTextureRenderTarget
{
	int SizeX; // 0x148 (0x4)
	struct FLinearColor ClearColor; // 0x14c (0x10)
	struct TEnumAsByte<EPixelFormat> OverrideFormat; // 0x15c (0x1)
	unsigned char bHDR; // 0x15d (0x1)
	unsigned char bForceLinearGamma; // 0x15d (0x1)
	unsigned char padding_15e[0x2]; // 0x15e (0x2)
};

