// Class /Script/Engine.TextureRenderTarget2D
// Size: 0x170
class UTextureRenderTarget2D : public UTextureRenderTarget
{
	int SizeX; // 0x148 (0x4)
	int SizeY; // 0x14c (0x4)
	struct FLinearColor ClearColor; // 0x150 (0x10)
	struct TEnumAsByte<TextureAddress> AddressX; // 0x160 (0x1)
	struct TEnumAsByte<TextureAddress> AddressY; // 0x161 (0x1)
	unsigned char bForceLinearGamma; // 0x162 (0x1)
	unsigned char bHDR; // 0x162 (0x1)
	unsigned char bGPUSharedFlag; // 0x162 (0x1)
	struct TEnumAsByte<ETextureRenderTargetFormat> RenderTargetFormat; // 0x163 (0x1)
	unsigned char bAutoGenerateMips; // 0x164 (0x1)
	struct TEnumAsByte<TextureFilter> MipsSamplerFilter; // 0x165 (0x1)
	struct TEnumAsByte<TextureAddress> MipsAddressU; // 0x166 (0x1)
	struct TEnumAsByte<TextureAddress> MipsAddressV; // 0x167 (0x1)
	struct TEnumAsByte<EPixelFormat> OverrideFormat; // 0x168 (0x1)
	unsigned char padding_169[0x7]; // 0x169 (0x7)
};

