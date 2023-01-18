// ScriptStruct /Script/Niagara.NiagaraSystemUpdateContext
// Size: 0x78
struct FNiagaraSystemUpdateContext
{
	struct TArray<class UNiagaraComponent*> ComponentsToReset; // 0x0 (0x10)
	struct TArray<class UNiagaraComponent*> ComponentsToReInit; // 0x10 (0x10)
	struct TArray<class UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20 (0x10)
	struct TArray<class UNiagaraSystem*> SystemSimsToDestroy; // 0x30 (0x10)
	struct TArray<class UNiagaraSystem*> SystemSimsToRecache; // 0x40 (0x10)
	unsigned char padding_50[0x28]; // 0x50 (0x28)
};

