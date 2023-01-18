// ScriptStruct /Script/Niagara.NiagaraSimCacheDataBuffers
// Size: 0x50
struct FNiagaraSimCacheDataBuffers
{
	uint32_t NumInstances; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<unsigned char> FloatData; // 0x8 (0x10)
	struct TArray<unsigned char> HalfData; // 0x18 (0x10)
	struct TArray<unsigned char> Int32Data; // 0x28 (0x10)
	struct TArray<int> IDToIndexTable; // 0x38 (0x10)
	uint32_t IDAcquireTag; // 0x48 (0x4)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};

