// Enum /Script/FortniteAI.EAILootExcludeListReason
enum class EAILootExcludeListReason : uint8_t
{
  Invalid = 0,
  ExecutionError = 1,
  CannotReachLootLocation = 2,
  OutsideSafeZoneRadius = 3,
  NoInventorySpace = 4,
  LootStateUnavailable = 5,
  PathNotFound = 6,
  GoalOffNavmesh = 7,
  AgentBlocked = 8,
  IsolatedIsland = 9,
  UnsupportedItem = 10,
  Count = 11,
  EAILootExcludeListReason_MAX = 12
};