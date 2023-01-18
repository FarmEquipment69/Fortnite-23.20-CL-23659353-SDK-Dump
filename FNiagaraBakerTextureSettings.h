// ScriptStruct /Script/Niagara.NiagaraBakerTextureSettings
// Size: 0x40
struct FNiagaraBakerTextureSettings
{
	struct FName OutputName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FNiagaraBakerTextureSource SourceBinding; // 0x8 (0x18)
	unsigned char bUseFrameSize; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	struct FIntPoint* FrameSize; // 0x24 (0x8)
	struct FIntPoint* TextureSize; // 0x2c (0x8)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	class UTexture2D* GeneratedTexture; // 0x38 (0x8)
};

