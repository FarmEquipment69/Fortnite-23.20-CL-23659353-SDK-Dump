// ScriptStruct /Script/NiagaraShader.SimulationStageMetaData
// Size: 0x68
struct FSimulationStageMetaData
{
	struct FName SimulationStageName; // 0x0 (0x4)
	struct FName EnabledBinding; // 0x4 (0x4)
	struct FName ElementCountXBinding; // 0x8 (0x4)
	struct FName ElementCountYBinding; // 0xc (0x4)
	struct FName ElementCountZBinding; // 0x10 (0x4)
	struct FName IterationSource; // 0x14 (0x4)
	enum ENiagaraSimStageExecuteBehavior ExecuteBehavior; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	unsigned char bWritesParticles; // 0x1c (0x1)
	unsigned char bPartialParticleUpdate; // 0x1c (0x1)
	unsigned char bParticleIterationStateEnabled; // 0x1c (0x1)
	unsigned char bOverrideElementCount; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	struct FName ParticleIterationStateBinding; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FIntPoint* ParticleIterationStateRange; // 0x28 (0x8)
	struct TArray<struct FName> OutputDestinations; // 0x30 (0x10)
	struct TArray<struct FName> InputDataInterfaces; // 0x40 (0x10)
	int NumIterations; // 0x50 (0x4)
	struct FName NumIterationsBinding; // 0x54 (0x4)
	enum ENiagaraGpuDispatchType GpuDispatchType; // 0x58 (0x1)
	unsigned char unreflected_59[0x3]; // 0x59 (0x3) 
	struct FIntVector GpuDispatchNumThreads; // 0x5c (0xc)
};

