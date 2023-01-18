// Enum /Script/Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
  Function = 0,
  Module = 1,
  DynamicInput = 2,
  ParticleSpawnScript = 3,
  ParticleSpawnScriptInterpolated = 4,
  ParticleUpdateScript = 5,
  ParticleEventScript = 6,
  ParticleSimulationStageScript = 7,
  ParticleGPUComputeScript = 8,
  EmitterSpawnScript = 9,
  EmitterUpdateScript = 10,
  SystemSpawnScript = 11,
  SystemUpdateScript = 12,
  ENiagaraScriptUsage_MAX = 13
};