// Enum /Script/GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
  Uninitialized = 0,
  AwaitingActivation = 1,
  Paused = 2,
  Active = 3,
  Finished = 4,
  EGameplayTaskState_MAX = 5
};