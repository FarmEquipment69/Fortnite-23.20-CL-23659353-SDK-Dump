// Enum /Script/DataRegistry.EDataRegistryAcquireStatus
enum class EDataRegistryAcquireStatus : uint8_t
{
  NotStarted = 0,
  WaitingForInitialAcquire = 1,
  InitialAcquireFinished = 2,
  WaitingForResources = 3,
  AcquireFinished = 4,
  AcquireError = 5,
  DoesNotExist = 6,
  EDataRegistryAcquireStatus_MAX = 7
};