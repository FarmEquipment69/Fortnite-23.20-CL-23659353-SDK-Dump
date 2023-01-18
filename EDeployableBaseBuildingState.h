// Enum /Script/FortniteGame.EDeployableBaseBuildingState
enum class EDeployableBaseBuildingState : uint8_t
{
  Empty = 0,
  Built = 1,
  Unoccupied = 2,
  WaitingToBuild = 3,
  Building = 4,
  WaitingToDestroy = 5,
  Destroying = 6,
  WaitingToReset = 7,
  Resetting = 8,
  EDeployableBaseBuildingState_MAX = 9
};