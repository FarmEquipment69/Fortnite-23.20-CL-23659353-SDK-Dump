// ScriptStruct /Script/Niagara.NiagaraOutlinerEmitterInstanceData
// Size: 0x20
struct FNiagaraOutlinerEmitterInstanceData
{
	struct FString EmitterName; // 0x0 (0x10)
	enum ENiagaraSimTarget SimTarget; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	enum ENiagaraExecutionState ExecState; // 0x14 (0x4)
	int NumParticles; // 0x18 (0x4)
	unsigned char bRequiresPersistentIDs; // 0x1c (0x1)
	unsigned char padding_1d[0x3]; // 0x1d (0x3)
};

