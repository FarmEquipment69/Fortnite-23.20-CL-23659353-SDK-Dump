// ScriptStruct /Script/NiagaraShader.NiagaraShaderScriptParametersMetadata
// Size: 0x58
struct FNiagaraShaderScriptParametersMetadata
{
	struct TArray<struct FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo; // 0x0 (0x10)
	struct TArray<struct FString> LooseMetadataNames; // 0x10 (0x10)
	bool bExternalConstantsInterpolated; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct TArray<struct FNiagaraShaderScriptExternalConstant> ExternalConstants; // 0x28 (0x10)
	unsigned char padding_38[0x20]; // 0x38 (0x20)
};

