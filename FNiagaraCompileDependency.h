// ScriptStruct /Script/Niagara.NiagaraCompileDependency
// Size: 0x50
struct FNiagaraCompileDependency
{
	struct FString LinkerErrorMessage; // 0x0 (0x10)
	struct FGuid NodeGUID; // 0x10 (0x10)
	struct FGuid PinGuid; // 0x20 (0x10)
	struct TArray<struct FGuid> StackGuids; // 0x30 (0x10)
	struct FNiagaraVariableBase* DependentVariable; // 0x40 (0x8)
	bool bDependentVariableFromCustomIterationNamespace; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

