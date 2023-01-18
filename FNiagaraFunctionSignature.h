// ScriptStruct /Script/Niagara.NiagaraFunctionSignature
// Size: 0x88
struct FNiagaraFunctionSignature
{
	struct FName Name; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FNiagaraVariable> Inputs; // 0x8 (0x10)
	struct TArray<struct FNiagaraVariable> Outputs; // 0x18 (0x10)
	struct FName OwnerName; // 0x28 (0x4)
	unsigned char bRequiresContext; // 0x2c (0x1)
	unsigned char bRequiresExecPin; // 0x2c (0x1)
	unsigned char bMemberFunction; // 0x2c (0x1)
	unsigned char bExperimental; // 0x2c (0x1)
	unsigned char bSupportsCPU; // 0x2c (0x1)
	unsigned char bSupportsGPU; // 0x2c (0x1)
	unsigned char bWriteFunction; // 0x2c (0x1)
	unsigned char bReadFunction; // 0x2c (0x1)
	unsigned char bSoftDeprecatedFunction; // 0x2d (0x1)
	unsigned char bIsCompileTagGenerator; // 0x2d (0x1)
	unsigned char bHidden; // 0x2d (0x1)
	unsigned char unreflected_2e[0x2]; // 0x2e (0x2) 
	int ModuleUsageBitmask; // 0x30 (0x4)
	int ContextStageIndex; // 0x34 (0x4)
	struct TMap<struct FName, struct FName> FunctionSpecifiers; // 0x38 (0x50)
};

