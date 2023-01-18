// ScriptStruct /Script/Niagara.NiagaraVMExecutableData
// Size: 0x190
struct FNiagaraVMExecutableData
{
	struct FNiagaraVMExecutableByteCode ByteCode; // 0x0 (0x18)
	struct FNiagaraVMExecutableByteCode OptimizedByteCode; // 0x18 (0x18)
	unsigned char unreflected_30[0x38]; // 0x30 (0x38) 
	int NumTempRegisters; // 0x68 (0x4)
	int NumUserPtrs; // 0x6c (0x4)
	struct TArray<struct FNiagaraCompilerTag> CompileTags; // 0x70 (0x10)
	struct TArray<unsigned char> ScriptLiterals; // 0x80 (0x10)
	struct TArray<struct FNiagaraVariable> Attributes; // 0x90 (0x10)
	struct FNiagaraScriptDataUsageInfo DataUsage; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0xa8 (0x10)
	struct TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0xb8 (0x10)
	unsigned char unreflected_c8[0x10]; // 0xc8 (0x10) 
	struct TArray<struct FNiagaraDataSetID*> ReadDataSets; // 0xd8 (0x10)
	struct TArray<struct FNiagaraDataSetProperties> WriteDataSets; // 0xe8 (0x10)
	struct TArray<struct FNiagaraStatScope*> StatScopes; // 0xf8 (0x10)
	struct FNiagaraShaderScriptParametersMetadata ShaderScriptParametersMetadata; // 0x108 (0x58)
	enum ENiagaraScriptCompileStatus LastCompileStatus; // 0x160 (0x1)
	unsigned char unreflected_161[0x7]; // 0x161 (0x7) 
	struct TArray<struct FSimulationStageMetaData> SimulationStageMetaData; // 0x168 (0x10)
	struct TArray<unsigned char> ExperimentalContextData; // 0x178 (0x10)
	unsigned char bReadsSignificanceIndex; // 0x188 (0x1)
	unsigned char bNeedsGPUContextInit; // 0x188 (0x1)
	unsigned char padding_189[0x7]; // 0x189 (0x7)
};

