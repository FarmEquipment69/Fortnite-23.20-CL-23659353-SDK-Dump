// Enum /Script/FortniteGame.EContentRequestInstallState
enum class EContentRequestInstallState : uint8_t
{
  None = 0,
  Initialized = 1,
  ManifestsBuilt = 2,
  Installed = 3,
  HostLoadedClientsInstalled = 4,
  HostActiveClientsInstalled = 5,
  Loaded = 6,
  Active = 7,
  ClientsUninstalled = 8,
  Uninstalled = 9,
  COMPLETELYLOADED = 7,
  EContentRequestInstallState_MAX = 10
};