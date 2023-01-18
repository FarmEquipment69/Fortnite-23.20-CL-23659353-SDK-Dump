// Enum /Script/GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
  Error = 0,
  Failed = 1,
  Success_Paused = 2,
  Success_Active = 3,
  Success_Finished = 4,
  EGameplayTaskRunResult_MAX = 5
};