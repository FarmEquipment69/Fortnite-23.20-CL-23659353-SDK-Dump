// ScriptStruct /Script/Niagara.NiagaraSystemVisibilityCullingSettings
// Size: 0xc
struct FNiagaraSystemVisibilityCullingSettings
{
	unsigned char bCullWhenNotRendered; // 0x0 (0x1)
	unsigned char bCullByViewFrustum; // 0x0 (0x1)
	unsigned char bAllowPreCullingByViewFrustum; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float MaxTimeOutsideViewFrustum; // 0x4 (0x4)
	float MaxTimeWithoutRender; // 0x8 (0x4)
};

