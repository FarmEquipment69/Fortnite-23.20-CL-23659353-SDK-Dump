// ScriptStruct /Script/Niagara.NiagaraComponentPropertyBinding
// Size: 0xb0
struct FNiagaraComponentPropertyBinding
{
	struct FNiagaraVariableAttributeBinding AttributeBinding; // 0x0 (0x40)
	struct FName PropertyName; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FNiagaraTypeDefinition PropertyType; // 0x48 (0x10)
	struct FName MetadataSetterName; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; // 0x60 (0x50)
};

