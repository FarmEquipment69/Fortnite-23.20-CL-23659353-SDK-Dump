// ScriptStruct /Script/Niagara.NiagaraEmitterScriptProperties
// Size: 0x28
struct FNiagaraEmitterScriptProperties
{
	class UNiagaraScript* Script; // 0x0 (0x8)
	struct TArray<struct FNiagaraEventReceiverProperties> EventReceivers; // 0x8 (0x10)
	struct TArray<struct FNiagaraEventGeneratorProperties> EventGenerators; // 0x18 (0x10)
};

