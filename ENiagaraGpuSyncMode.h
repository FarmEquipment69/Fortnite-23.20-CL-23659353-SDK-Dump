// Enum /Script/Niagara.ENiagaraGpuSyncMode
enum class ENiagaraGpuSyncMode : uint8_t
{
  None = 0,
  SyncCpuToGpu = 1,
  SyncGpuToCpu = 2,
  SyncBoth = 3,
  ENiagaraGpuSyncMode_MAX = 4
};