// Enum /Script/Engine.EContentBundleClientState
enum class EContentBundleClientState : uint8_t
{
  Unregistered = 0,
  Registered = 1,
  ContentInjectionRequested = 2,
  ContentRemovalRequested = 3,
  RegistrationFailed = 4,
  EContentBundleClientState_MAX = 5
};