// Enum /Script/FortniteGame.EServerRestartReason
enum class EServerRestartReason : uint8_t
{
  HotfixApplied = 0,
  GracefulShutdown = 1,
  BeaconJoinDelayRestart = 2,
  Other = 3,
  EServerRestartReason_MAX = 4
};