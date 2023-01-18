// Enum /Script/StateTreeModule.EStateTreeTransitionTrigger
enum class EStateTreeTransitionTrigger : uint8_t
{
  None = 0,
  OnStateCompleted = 3,
  OnStateSucceeded = 1,
  OnStateFailed = 2,
  OnTick = 4,
  OnEvent = 8,
  MAX = 9
};