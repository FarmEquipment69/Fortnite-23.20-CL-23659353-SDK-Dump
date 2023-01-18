// Class /Script/Niagara.NiagaraEmitter
// Size: 0xb8
class UNiagaraEmitter : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FGuid ExposedVersion; // 0x30 (0x10)
	bool bVersioningEnabled; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct TArray<struct FVersionedNiagaraEmitterData> VersionData; // 0x48 (0x10)
	unsigned char unreflected_58[0x8]; // 0x58 (0x8) 
	struct FString UniqueEmitterName; // 0x60 (0x10)
	struct TArray<class UNiagaraRendererProperties*> RendererProperties; // 0x70 (0x10)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x80 (0x10)
	struct TArray<class UNiagaraSimulationStageBase*> SimulationStages; // 0x90 (0x10)
	class UNiagaraScript* GPUComputeScript; // 0xa0 (0x8)
	struct TArray<struct FName> SharedEventGeneratorIds; // 0xa8 (0x10)
};

