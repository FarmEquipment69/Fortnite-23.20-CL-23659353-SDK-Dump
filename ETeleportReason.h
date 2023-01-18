// Enum /Script/FortniteAI.ETeleportReason
enum class ETeleportReason : uint8_t
{
  AgentNotOnNavmesh = 0,
  AgentDestinationNotOnNavMesh = 1,
  AgentStuckInRepetitivePartialPaths = 2,
  AgentBlocked = 3,
  Unknown = 4,
  ETeleportReason_MAX = 5
};