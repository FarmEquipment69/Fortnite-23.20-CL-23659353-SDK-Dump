// Enum /Script/StateTreeModule.EStateTreeTransitionType
enum class EStateTreeTransitionType : uint8_t
{
  Succeeded = 0,
  Failed = 1,
  GotoState = 2,
  NotSet = 3,
  NextState = 4,
  EStateTreeTransitionType_MAX = 5
};