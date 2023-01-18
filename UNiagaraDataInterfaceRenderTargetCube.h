// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetCube
// Size: 0xa8
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{
	int Size; // 0x38 (0x4)
	struct TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat; // 0x3c (0x1)
	unsigned char bInheritUserParameterSettings; // 0x3d (0x1)
	unsigned char bOverrideFormat; // 0x3d (0x1)
	unsigned char unreflected_3e[0x2]; // 0x3e (0x2) 
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x40 (0x18)
	struct TMap<uint64_t, class UTextureRenderTargetCube*> ManagedRenderTargets; // 0x58 (0x50)
};

