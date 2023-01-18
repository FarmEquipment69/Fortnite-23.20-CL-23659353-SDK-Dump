// Enum /Script/FortniteGame.EDefenderSpawnFailureReason
enum class EDefenderSpawnFailureReason : uint8_t
{
  None = 0,
  AllPlayerSlotsFull = 1,
  DefendersNotUnlocked = 2,
  CurrentlySimulatingDefender = 3,
  NotOutpostOwner = 4,
  EDefenderSpawnFailureReason_MAX = 5
};