// ScriptStruct /Script/Niagara.NiagaraModuleDependency
// Size: 0x60
struct FNiagaraModuleDependency
{
	struct FName ID; // 0x0 (0x4)
	enum ENiagaraModuleDependencyType Type; // 0x4 (0x1)
	enum ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x5 (0x1)
	unsigned char unreflected_6[0x2]; // 0x6 (0x2) 
	struct FString RequiredVersion; // 0x8 (0x10)
	int OnlyEvaluateInScriptUsage; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FText Description; // 0x20 (0x18)
	unsigned char padding_38[0x28]; // 0x38 (0x28)
};

