// Class /Script/Niagara.NiagaraRendererProperties
// Size: 0xc8
class UNiagaraRendererProperties : public UNiagaraMergeable
{
	struct FNiagaraPlatformSet Platforms; // 0x28 (0x30)
	int SortOrderHint; // 0x58 (0x4)
	enum ENiagaraRendererMotionVectorSetting MotionVectorSetting; // 0x5c (0x4)
	struct FNiagaraVariableAttributeBinding RendererEnabledBinding; // 0x60 (0x40)
	bool bIsEnabled; // 0xa0 (0x1)
	bool bAllowInCullProxies; // 0xa1 (0x1)
	unsigned char unreflected_a2[0x2]; // 0xa2 (0x2) 
	struct FGuid OuterEmitterVersion; // 0xa4 (0x10)
	bool bMotionBlurEnabled; // 0xb4 (0x1)
	unsigned char padding_b5[0x13]; // 0xb5 (0x13)
};

