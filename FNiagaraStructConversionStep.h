// ScriptStruct /Script/Niagara.NiagaraStructConversionStep
// Size: 0x14
struct FNiagaraStructConversionStep
{
	int SourceBytes; // 0x0 (0x4)
	int SourceOffset; // 0x4 (0x4)
	int SimulationBytes; // 0x8 (0x4)
	int SimulationOffset; // 0xc (0x4)
	enum ENiagaraStructConversionType ConversionType; // 0x10 (0x1)
	unsigned char padding_11[0x3]; // 0x11 (0x3)
};

