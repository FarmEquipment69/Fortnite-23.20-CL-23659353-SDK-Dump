// Class /Script/Niagara.NiagaraLightRendererProperties
// Size: 0x2d8
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
	unsigned char bUseInverseSquaredFalloff; // 0xc8 (0x1)
	unsigned char bAffectsTranslucency; // 0xc8 (0x1)
	unsigned char bAlphaScalesBrightness; // 0xc8 (0x1)
	unsigned char bOverrideInverseExposureBlend; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x3]; // 0xc9 (0x3) 
	float RadiusScale; // 0xcc (0x4)
	float DefaultExponent; // 0xd0 (0x4)
	struct FVector3f ColorAdd; // 0xd4 (0xc)
	float InverseExposureBlend; // 0xe0 (0x4)
	int RendererVisibility; // 0xe4 (0x4)
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0xe8 (0x40)
	struct FNiagaraVariableAttributeBinding LightExponentBinding; // 0x128 (0x40)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x168 (0x40)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x1a8 (0x40)
	struct FNiagaraVariableAttributeBinding RadiusBinding; // 0x1e8 (0x40)
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x228 (0x40)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x268 (0x40)
	unsigned char padding_2a8[0x30]; // 0x2a8 (0x30)
};

