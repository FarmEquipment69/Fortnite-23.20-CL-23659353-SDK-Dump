// Enum /Script/FortniteAI.EFortAthenaAICanMoveState
enum class EFortAthenaAICanMoveState : uint8_t
{
  None = 0,
  Failed_AgentOffNavmesh = 1,
  Failed_GoalOffNavmesh = 2,
  Failed_Falling = 3,
  Success = 4,
  Success_Partial = 5,
  EFortAthenaAICanMoveState_MAX = 6
};