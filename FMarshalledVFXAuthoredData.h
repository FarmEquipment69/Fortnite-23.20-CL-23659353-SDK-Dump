// ScriptStruct /Script/FortniteGame.MarshalledVFXAuthoredData
// Size: 0x70
struct FMarshalledVFXAuthoredData
{
	struct TArray<struct FMarshalledVFXData> NiagaraVFX; // 0x0 (0x10)
	struct TArray<struct FMarshalledVFXData> CascadeVFX; // 0x10 (0x10)
	struct TMap<struct FName, struct FParameterNameMapping*> NameReplacements; // 0x20 (0x50)
};

