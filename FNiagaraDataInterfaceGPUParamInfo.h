// ScriptStruct /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// Size: 0x38
struct FNiagaraDataInterfaceGPUParamInfo
{
	struct FString DataInterfaceHLSLSymbol; // 0x0 (0x10)
	struct FString DIClassName; // 0x10 (0x10)
	uint32_t ShaderParametersOffset; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x28 (0x10)
};

