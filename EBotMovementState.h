// Enum /Script/FortniteAI.EBotMovementState
enum class EBotMovementState : uint8_t
{
  None = 0,
  InProgress = 1,
  Failed_NoPathFound = 2,
  Failed_Aborted = 3,
  Failed_AgentOffNavmesh = 4,
  Failed_GoalOffNavmesh = 5,
  Failed_Blocked = 6,
  Failed_OffPath = 7,
  Failed_Falling = 8,
  Success = 9,
  Success_Partial = 10,
  Success_AlreadyAtGoal = 11,
  EBotMovementState_MAX = 12
};