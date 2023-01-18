// ScriptStruct /Script/Niagara.NiagaraOutlinerWorldData
// Size: 0x68
struct FNiagaraOutlinerWorldData
{
	struct TMap<struct FString, struct FNiagaraOutlinerSystemData> Systems; // 0x0 (0x50)
	bool bHasBegunPlay; // 0x50 (0x1)
	unsigned char WorldType; // 0x51 (0x1)
	unsigned char NetMode; // 0x52 (0x1)
	unsigned char unreflected_53[0x1]; // 0x53 (0x1) 
	struct FNiagaraOutlinerTimingData* AveragePerFrameTime; // 0x54 (0x8)
	struct FNiagaraOutlinerTimingData* MaxPerFrameTime; // 0x5c (0x8)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};

