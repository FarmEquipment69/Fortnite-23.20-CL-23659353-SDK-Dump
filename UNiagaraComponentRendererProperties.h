// Class /Script/Niagara.NiagaraComponentRendererProperties
// Size: 0x1e8
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
	class UClass* ComponentType; // 0xc8 (0x8)
	uint32_t ComponentCountLimit; // 0xd0 (0x4)
	unsigned char unreflected_d4[0x4]; // 0xd4 (0x4) 
	struct FNiagaraVariableAttributeBinding EnabledBinding; // 0xd8 (0x40)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x118 (0x40)
	bool bAssignComponentsOnParticleID; // 0x158 (0x1)
	bool bCreateComponentFirstParticleFrame; // 0x159 (0x1)
	bool bOnlyActivateNewlyAquiredComponents; // 0x15a (0x1)
	unsigned char unreflected_15b[0x1]; // 0x15b (0x1) 
	int RendererVisibility; // 0x15c (0x4)
	class USceneComponent* TemplateComponent; // 0x160 (0x8)
	struct TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings; // 0x168 (0x10)
	unsigned char padding_178[0x70]; // 0x178 (0x70)
};

