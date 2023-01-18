// ScriptStruct /Script/Niagara.NiagaraOutlinerSystemInstanceData
// Size: 0x68
struct FNiagaraOutlinerSystemInstanceData
{
	struct FString ComponentName; // 0x0 (0x10)
	struct FVector3f LWCTile; // 0x10 (0xc)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct TArray<struct FNiagaraOutlinerEmitterInstanceData> Emitters; // 0x20 (0x10)
	enum ENiagaraExecutionState ActualExecutionState; // 0x30 (0x4)
	enum ENiagaraExecutionState RequestedExecutionState; // 0x34 (0x4)
	struct FNiagaraScalabilityState ScalabilityState; // 0x38 (0xc)
	unsigned char bPendingKill; // 0x44 (0x1)
	unsigned char bUsingCullProxy; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	enum ENCPoolMethod PoolMethod; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	struct FNiagaraOutlinerTimingData* AverageTime; // 0x4c (0x8)
	struct FNiagaraOutlinerTimingData* MaxTime; // 0x54 (0x8)
	struct TEnumAsByte<ETickingGroup> TickGroup; // 0x5c (0x1)
	struct TEnumAsByte<ENiagaraGpuComputeTickStage> GpuTickStage; // 0x5d (0x1)
	unsigned char unreflected_5e[0x2]; // 0x5e (0x2) 
	unsigned char bIsSolo; // 0x60 (0x1)
	unsigned char bRequiresDistanceFieldData; // 0x60 (0x1)
	unsigned char bRequiresDepthBuffer; // 0x60 (0x1)
	unsigned char bRequiresEarlyViewData; // 0x60 (0x1)
	unsigned char bRequiresViewUniformBuffer; // 0x60 (0x1)
	unsigned char bRequiresRayTracingScene; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

