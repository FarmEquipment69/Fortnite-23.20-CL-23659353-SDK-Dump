// ScriptStruct /Script/Niagara.NiagaraRendererMaterialParameters
// Size: 0x40
struct FNiagaraRendererMaterialParameters
{
	struct TArray<struct FNiagaraMaterialAttributeBinding> AttributeBindings; // 0x0 (0x10)
	struct TArray<struct FNiagaraRendererMaterialScalarParameter*> ScalarParameters; // 0x10 (0x10)
	struct TArray<struct FNiagaraRendererMaterialVectorParameter> VectorParameters; // 0x20 (0x10)
	struct TArray<struct FNiagaraRendererMaterialTextureParameter> TextureParameters; // 0x30 (0x10)
};

