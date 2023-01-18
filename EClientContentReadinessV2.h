// Enum /Script/FortniteGame.EClientContentReadinessV2
enum class EClientContentReadinessV2 : uint8_t
{
  NotConnected = 0,
  AwaitingServerResponse = 1,
  GeneratingManifests = 2,
  MountingContent = 3,
  LoadedContent = 4,
  ReadyToJoin = 5,
  AllRequestsComplete = 6,
  Disconnecting = 7,
  None = 8,
  EClientContentReadinessV2_MAX = 9
};