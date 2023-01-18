// Enum /Script/FortniteGame.ESpawnMachineState
enum class ESpawnMachineState : uint8_t
{
  Default = 0,
  WaitingForUse = 1,
  BeingUsed = 2,
  Active = 3,
  Complete = 4,
  OnCooldown = 5,
  ESpawnMachineState_MAX = 6
};