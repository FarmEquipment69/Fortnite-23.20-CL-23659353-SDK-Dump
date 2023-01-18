// Class /Script/Niagara.NiagaraBakerOutputTexture2D
// Size: 0xa0
class UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput
{
	struct FNiagaraBakerTextureSource SourceBinding; // 0x38 (0x18)
	unsigned char bGenerateAtlas; // 0x50 (0x1)
	unsigned char bGenerateFrames; // 0x50 (0x1)
	unsigned char bExportFrames; // 0x50 (0x1)
	unsigned char bSetTextureAddressX; // 0x50 (0x1)
	unsigned char bSetTextureAddressY; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	struct FIntPoint* FrameSize; // 0x54 (0x8)
	struct FIntPoint* AtlasTextureSize; // 0x5c (0x8)
	unsigned char unreflected_64[0x8]; // 0x64 (0x8) 
	struct TEnumAsByte<TextureAddress> TextureAddressX; // 0x6c (0x1)
	struct TEnumAsByte<TextureAddress> TextureAddressY; // 0x6d (0x1)
	unsigned char unreflected_6e[0x2]; // 0x6e (0x2) 
	struct FString AtlasAssetPathFormat; // 0x70 (0x10)
	struct FString FramesAssetPathFormat; // 0x80 (0x10)
	struct FString FramesExportPathFormat; // 0x90 (0x10)
};

