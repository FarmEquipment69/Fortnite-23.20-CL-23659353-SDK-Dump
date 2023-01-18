// ScriptStruct /Script/Niagara.NiagaraParameterStore
// Size: 0x88
struct FNiagaraParameterStore
{
	struct TWeakObjectPtr<class UObject> Owner; // 0x8 (0x8)
	struct TArray<struct FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10 (0x10)
	struct TArray<unsigned char> ParameterData; // 0x20 (0x10)
	struct TArray<class UNiagaraDataInterface*> DataInterfaces; // 0x30 (0x10)
	struct TArray<class UObject*> UObjects; // 0x40 (0x10)
	struct TArray<struct FNiagaraPositionSource> OriginalPositionData; // 0x50 (0x10)
	unsigned char padding_60[0x28]; // 0x60 (0x28)
};

