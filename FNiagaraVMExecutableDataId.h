// ScriptStruct /Script/Niagara.NiagaraVMExecutableDataId
// Size: 0x58
struct FNiagaraVMExecutableDataId
{
	struct FGuid CompilerVersionID; // 0x0 (0x10)
	enum ENiagaraScriptUsage ScriptUsageType; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	struct FGuid ScriptUsageTypeID; // 0x14 (0x10)
	unsigned char bUsesRapidIterationParams; // 0x24 (0x1)
	unsigned char bDisableDebugSwitches; // 0x24 (0x1)
	unsigned char bInterpolatedSpawn; // 0x24 (0x1)
	unsigned char bRequiresPersistentIDs; // 0x24 (0x1)
	unsigned char unreflected_25[0x3]; // 0x25 (0x3) 
	struct FGuid BaseScriptID; // 0x28 (0x10)
	struct FNiagaraCompileHash BaseScriptCompileHash; // 0x38 (0x10)
	struct FGuid ScriptVersionID; // 0x48 (0x10)
};

