// Class /Script/Niagara.NiagaraBakerOutputVolumeTexture
// Size: 0x88
class UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput
{
	struct FNiagaraBakerTextureSource SourceBinding; // 0x38 (0x18)
	unsigned char bGenerateAtlas; // 0x50 (0x1)
	unsigned char bGenerateFrames; // 0x50 (0x1)
	unsigned char bExportFrames; // 0x50 (0x1)
	unsigned char unreflected_51[0x7]; // 0x51 (0x7) 
	struct FString AtlasAssetPathFormat; // 0x58 (0x10)
	struct FString FramesAssetPathFormat; // 0x68 (0x10)
	struct FString FramesExportPathFormat; // 0x78 (0x10)
};

