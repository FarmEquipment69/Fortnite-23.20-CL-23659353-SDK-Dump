// Class /Script/Engine.TextureRenderTarget2DArray
// Size: 0x168
class UTextureRenderTarget2DArray : public UTextureRenderTarget
{
	int SizeX; // 0x148 (0x4)
	int SizeY; // 0x14c (0x4)
	int Slices; // 0x150 (0x4)
	struct FLinearColor ClearColor; // 0x154 (0x10)
	struct TEnumAsByte<EPixelFormat> OverrideFormat; // 0x164 (0x1)
	unsigned char bHDR; // 0x165 (0x1)
	unsigned char bForceLinearGamma; // 0x165 (0x1)
	unsigned char padding_166[0x2]; // 0x166 (0x2)
};

