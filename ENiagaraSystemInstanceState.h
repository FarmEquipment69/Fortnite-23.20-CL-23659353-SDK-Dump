// Enum /Script/Niagara.ENiagaraSystemInstanceState
enum class ENiagaraSystemInstanceState : uint8_t
{
  None = 0,
  PendingSpawn = 1,
  PendingSpawnPaused = 2,
  Spawning = 3,
  Running = 4,
  Paused = 5,
  Num = 6,
  ENiagaraSystemInstanceState_MAX = 7
};