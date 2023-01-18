// ScriptStruct /Script/Niagara.NiagaraSystemScalabilitySettings
// Size: 0x98
struct FNiagaraSystemScalabilitySettings
{
	struct FNiagaraPlatformSet Platforms; // 0x0 (0x30)
	unsigned char bCullByDistance; // 0x30 (0x1)
	unsigned char bCullMaxInstanceCount; // 0x30 (0x1)
	unsigned char bCullPerSystemMaxInstanceCount; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float MaxDistance; // 0x34 (0x4)
	unsigned char bCullByMaxTimeWithoutRender; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	int MaxInstances; // 0x3c (0x4)
	int MaxSystemInstances; // 0x40 (0x4)
	float MaxTimeWithoutRender; // 0x44 (0x4)
	enum ENiagaraCullProxyMode CullProxyMode; // 0x48 (0x4)
	int MaxSystemProxies; // 0x4c (0x4)
	struct FNiagaraSystemVisibilityCullingSettings VisibilityCulling; // 0x50 (0xc)
	struct FNiagaraGlobalBudgetScaling BudgetScaling; // 0x5c (0x38)
	unsigned char padding_94[0x4]; // 0x94 (0x4)
};

