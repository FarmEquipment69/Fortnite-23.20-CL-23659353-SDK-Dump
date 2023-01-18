// ScriptStruct /Script/Niagara.NiagaraVariableAttributeBinding
// Size: 0x40
struct FNiagaraVariableAttributeBinding
{
	struct FNiagaraVariableBase* ParamMapVariable; // 0x0 (0x8)
	struct FNiagaraVariable DataSetVariable; // 0x8 (0x18)
	struct FNiagaraVariable RootVariable; // 0x20 (0x18)
	struct TEnumAsByte<ENiagaraBindingSource> BindingSourceMode; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	unsigned char bBindingExistsOnSource; // 0x3c (0x1)
	unsigned char bIsCachedParticleValue; // 0x3c (0x1)
	unsigned char padding_3d[0x3]; // 0x3d (0x3)
};

