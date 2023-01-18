// ScriptStruct /Script/Niagara.NiagaraDataSetCompiledData
// Size: 0x40
struct FNiagaraDataSetCompiledData
{
	struct TArray<struct FNiagaraVariable> Variables; // 0x0 (0x10)
	struct TArray<struct FNiagaraVariableLayoutInfo> VariableLayouts; // 0x10 (0x10)
	struct FNiagaraDataSetID* ID; // 0x20 (0x8)
	uint32_t TotalFloatComponents; // 0x28 (0x4)
	uint32_t TotalInt32Components; // 0x2c (0x4)
	uint32_t TotalHalfComponents; // 0x30 (0x4)
	unsigned char bRequiresPersistentIDs; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	enum ENiagaraSimTarget SimTarget; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

