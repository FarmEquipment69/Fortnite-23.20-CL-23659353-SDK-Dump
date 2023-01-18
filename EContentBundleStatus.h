// Enum /Script/Engine.EContentBundleStatus
enum class EContentBundleStatus : uint8_t
{
  Registered = 0,
  ReadyToInject = 1,
  FailedToInject = 2,
  ContentInjected = 3,
  Unknown = -1,
  EContentBundleStatus_MAX = 4
};