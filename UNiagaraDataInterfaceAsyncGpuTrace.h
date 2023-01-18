// Class /Script/Niagara.NiagaraDataInterfaceAsyncGpuTrace
// Size: 0x48
class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface
{
	int MaxTracesPerParticle; // 0x38 (0x4)
	int MaxRetraces; // 0x3c (0x4)
	struct TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider> TraceProvider; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

