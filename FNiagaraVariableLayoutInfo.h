// ScriptStruct /Script/Niagara.NiagaraVariableLayoutInfo
// Size: 0x70
struct FNiagaraVariableLayoutInfo
{
	uint32_t FloatComponentStart; // 0x0 (0x4)
	uint32_t Int32ComponentStart; // 0x4 (0x4)
	uint32_t HalfComponentStart; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FNiagaraTypeLayoutInfo LayoutInfo; // 0x10 (0x60)
};

