// Enum /Script/FortniteGame.EServerContentReadinessV2
enum class EServerContentReadinessV2 : uint8_t
{
  Initializing = 0,
  GeneratingManifests = 1,
  WaitingForClient = 2,
  ReadyToJoin = 3,
  Disconnecting = 4,
  EServerContentReadinessV2_MAX = 5
};