// ScriptStruct /Script/Niagara.NiagaraEmitterCompiledData
// Size: 0xf8
struct FNiagaraEmitterCompiledData
{
	struct TArray<struct FName> SpawnAttributes; // 0x0 (0x10)
	struct FNiagaraVariable EmitterSpawnIntervalVar; // 0x10 (0x18)
	struct FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x28 (0x18)
	struct FNiagaraVariable EmitterSpawnGroupVar; // 0x40 (0x18)
	struct FNiagaraVariable EmitterAgeVar; // 0x58 (0x18)
	struct FNiagaraVariable EmitterRandomSeedVar; // 0x70 (0x18)
	struct FNiagaraVariable EmitterInstanceSeedVar; // 0x88 (0x18)
	struct FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0xa0 (0x18)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0xb8 (0x40)
};

