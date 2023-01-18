// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
// Size: 0x100
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
	struct FIntPoint* Size; // 0x38 (0x8)
	enum ENiagaraMipMapGeneration MipMapGeneration; // 0x40 (0x1)
	enum ENiagaraMipMapGenerationType MipMapGenerationType; // 0x41 (0x1)
	struct TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat; // 0x42 (0x1)
	unsigned char bInheritUserParameterSettings; // 0x43 (0x1)
	unsigned char bOverrideFormat; // 0x43 (0x1)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x48 (0x18)
	unsigned char unreflected_60[0x50]; // 0x60 (0x50) 
	struct TMap<uint64_t, class UTextureRenderTarget2D*> ManagedRenderTargets; // 0xb0 (0x50)
};

