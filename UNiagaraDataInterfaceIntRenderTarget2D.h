// Class /Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D
// Size: 0xa8
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
	struct FIntPoint* Size; // 0x38 (0x8)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x40 (0x18)
	struct TMap<uint64_t, class UTextureRenderTarget2D*> ManagedRenderTargets; // 0x58 (0x50)
};

