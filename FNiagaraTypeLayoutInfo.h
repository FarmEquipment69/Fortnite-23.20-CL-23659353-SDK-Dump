// ScriptStruct /Script/Niagara.NiagaraTypeLayoutInfo
// Size: 0x60
struct FNiagaraTypeLayoutInfo
{
	struct TArray<uint32_t> FloatComponentByteOffsets; // 0x0 (0x10)
	struct TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10 (0x10)
	struct TArray<uint32_t> Int32ComponentByteOffsets; // 0x20 (0x10)
	struct TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30 (0x10)
	struct TArray<uint32_t> HalfComponentByteOffsets; // 0x40 (0x10)
	struct TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50 (0x10)
};

