// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
// Size: 0xb0
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
	struct FIntVector Size; // 0x38 (0xc)
	struct TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat; // 0x44 (0x1)
	unsigned char bInheritUserParameterSettings; // 0x45 (0x1)
	unsigned char bOverrideFormat; // 0x45 (0x1)
	unsigned char unreflected_46[0x2]; // 0x46 (0x2) 
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x48 (0x18)
	struct TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x60 (0x50)
};

