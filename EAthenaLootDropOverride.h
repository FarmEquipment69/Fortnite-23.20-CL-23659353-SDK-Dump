// Enum /Script/FortniteGame.EAthenaLootDropOverride
enum class EAthenaLootDropOverride : uint8_t
{
  NoOverride = 0,
  ForceDrop = 1,
  ForceKeep = 2,
  ForceDestroy = 3,
  ForceDropUnlessRespawning = 4,
  ForceDestroyUnlessRespawning = 5,
  DropUnlessTeamSelectionUpdated = 6,
  EAthenaLootDropOverride_MAX = 7
};