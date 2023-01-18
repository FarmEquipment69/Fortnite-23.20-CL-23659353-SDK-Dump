// Class /Script/Niagara.NiagaraScript
// Size: 0x3a8
class UNiagaraScript : public UNiagaraScriptBase
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	enum ENiagaraScriptUsage Usage; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	struct FGuid UsageId; // 0x34 (0x10)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FNiagaraParameterStore RapidIterationParameters; // 0x48 (0x88)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xd0 (0xa8)
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x178 (0x10)
	struct FNiagaraVMExecutableDataId CachedScriptVMId; // 0x188 (0x58)
	unsigned char unreflected_1e0[0x10]; // 0x1e0 (0x10) 
	struct FNiagaraVMExecutableData CachedScriptVM; // 0x1f0 (0x190)
	struct TArray<class UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x380 (0x10)
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x390 (0x10)
	unsigned char padding_3a0[0x8]; // 0x3a0 (0x8)

	/* Functions */

	// Function /Script/Niagara.NiagaraScript.RaiseOnGPUCompilationComplete (Underlying native function: RaiseOnGPUCompilationComplete 0x26daa0c)
	void RaiseOnGPUCompilationComplete(); // (Final | Native | Public)
};

