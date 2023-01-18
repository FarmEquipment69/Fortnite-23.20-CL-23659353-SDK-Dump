// ScriptStruct /Script/Niagara.NiagaraSimCacheDataBuffersLayout
// Size: 0x60
struct FNiagaraSimCacheDataBuffersLayout
{
	struct FName LayoutName; // 0x0 (0x4)
	enum ENiagaraSimTarget SimTarget; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TArray<struct FNiagaraSimCacheVariable> Variables; // 0x8 (0x10)
	uint16_t FloatCount; // 0x18 (0x2)
	uint16_t HalfCount; // 0x1a (0x2)
	uint16_t Int32Count; // 0x1c (0x2)
	bool bLocalSpace; // 0x1e (0x1)
	unsigned char unreflected_1f[0x1]; // 0x1f (0x1) 
	struct TArray<struct FName> RebaseVariableNames; // 0x20 (0x10)
	unsigned char padding_30[0x30]; // 0x30 (0x30)
};

