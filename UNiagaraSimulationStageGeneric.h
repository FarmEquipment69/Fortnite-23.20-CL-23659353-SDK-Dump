// Class /Script/Niagara.NiagaraSimulationStageGeneric
// Size: 0x250
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
	struct FNiagaraVariableAttributeBinding EnabledBinding; // 0x38 (0x40)
	struct FNiagaraVariableAttributeBinding ElementCountBinding; // 0x78 (0x40)
	struct FNiagaraVariableAttributeBinding ElementCountXBinding; // 0xb8 (0x40)
	struct FNiagaraVariableAttributeBinding ElementCountYBinding; // 0xf8 (0x40)
	struct FNiagaraVariableAttributeBinding ElementCountZBinding; // 0x138 (0x40)
	enum ENiagaraIterationSource IterationSource; // 0x178 (0x1)
	unsigned char unreflected_179[0x3]; // 0x179 (0x3) 
	int Iterations; // 0x17c (0x4)
	struct FNiagaraVariableAttributeBinding NumIterationsBinding; // 0x180 (0x40)
	unsigned char bSpawnOnly; // 0x1c0 (0x1)
	unsigned char unreflected_1c1[0x3]; // 0x1c1 (0x3) 
	enum ENiagaraSimStageExecuteBehavior ExecuteBehavior; // 0x1c4 (0x1)
	unsigned char unreflected_1c5[0x3]; // 0x1c5 (0x3) 
	unsigned char bDisablePartialParticleUpdate; // 0x1c8 (0x1)
	unsigned char unreflected_1c9[0x7]; // 0x1c9 (0x7) 
	struct FNiagaraVariableDataInterfaceBinding DataInterface; // 0x1d0 (0x18)
	unsigned char bParticleIterationStateEnabled; // 0x1e8 (0x1)
	unsigned char unreflected_1e9[0x7]; // 0x1e9 (0x7) 
	struct FNiagaraVariableAttributeBinding ParticleIterationStateBinding; // 0x1f0 (0x40)
	struct FIntPoint* ParticleIterationStateRange; // 0x230 (0x8)
	unsigned char bGpuDispatchForceLinear; // 0x238 (0x1)
	unsigned char bOverrideGpuDispatchType; // 0x238 (0x1)
	unsigned char unreflected_239[0x3]; // 0x239 (0x3) 
	enum ENiagaraGpuDispatchType OverrideGpuDispatchType; // 0x23c (0x1)
	unsigned char unreflected_23d[0x3]; // 0x23d (0x3) 
	unsigned char bOverrideGpuDispatchNumThreads; // 0x240 (0x1)
	unsigned char unreflected_241[0x3]; // 0x241 (0x3) 
	struct FIntVector OverrideGpuDispatchNumThreads; // 0x244 (0xc)
};

