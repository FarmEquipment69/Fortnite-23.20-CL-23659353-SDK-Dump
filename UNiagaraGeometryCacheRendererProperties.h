// Class /Script/GeometryCache.NiagaraGeometryCacheRendererProperties
// Size: 0x2a8
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{
	struct TArray<struct FNiagaraGeometryCacheReference> GeometryCaches; // 0xc8 (0x10)
	bool bIsLooping; // 0xd8 (0x1)
	unsigned char unreflected_d9[0x3]; // 0xd9 (0x3) 
	uint32_t ComponentCountLimit; // 0xdc (0x4)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xe0 (0x40)
	struct FNiagaraVariableAttributeBinding RotationBinding; // 0x120 (0x40)
	struct FNiagaraVariableAttributeBinding ScaleBinding; // 0x160 (0x40)
	struct FNiagaraVariableAttributeBinding ElapsedTimeBinding; // 0x1a0 (0x40)
	struct FNiagaraVariableAttributeBinding EnabledBinding; // 0x1e0 (0x40)
	struct FNiagaraVariableAttributeBinding ArrayIndexBinding; // 0x220 (0x40)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x260 (0x40)
	int RendererVisibility; // 0x2a0 (0x4)
	bool bAssignComponentsOnParticleID; // 0x2a4 (0x1)
	unsigned char padding_2a5[0x3]; // 0x2a5 (0x3)
};

