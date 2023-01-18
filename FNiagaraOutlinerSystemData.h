// ScriptStruct /Script/Niagara.NiagaraOutlinerSystemData
// Size: 0x30
struct FNiagaraOutlinerSystemData
{
	struct TArray<struct FNiagaraOutlinerSystemInstanceData> SystemInstances; // 0x0 (0x10)
	struct FNiagaraOutlinerTimingData* AveragePerFrameTime; // 0x10 (0x8)
	struct FNiagaraOutlinerTimingData* MaxPerFrameTime; // 0x18 (0x8)
	struct FNiagaraOutlinerTimingData* AveragePerInstanceTime; // 0x20 (0x8)
	struct FNiagaraOutlinerTimingData* MaxPerInstanceTime; // 0x28 (0x8)
};

