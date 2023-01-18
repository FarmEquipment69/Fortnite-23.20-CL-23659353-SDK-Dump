// ScriptStruct /Script/Niagara.NiagaraSimCacheLayout
// Size: 0x70
struct FNiagaraSimCacheLayout
{
	struct FNiagaraSimCacheDataBuffersLayout SystemLayout; // 0x0 (0x60)
	struct TArray<struct FNiagaraSimCacheDataBuffersLayout> EmitterLayouts; // 0x60 (0x10)
};

