// ScriptStruct /Script/Niagara.NiagaraScriptExecutionParameterStore
// Size: 0xa8
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
{
	int ParameterSize; // 0x88 (0x4)
	uint32_t PaddedParameterSize; // 0x8c (0x4)
	struct TArray<struct FNiagaraScriptExecutionPaddingInfo*> PaddingInfo; // 0x90 (0x10)
	unsigned char bInitialized; // 0xa0 (0x1)
	unsigned char padding_a1[0x7]; // 0xa1 (0x7)
};

