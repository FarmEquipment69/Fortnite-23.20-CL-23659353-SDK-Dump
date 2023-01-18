// Enum /Script/AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
  NotStarted = 0,
  Running = 1,
  NotSupported = 2,
  FatalError = 3,
  PermissionNotGranted = 4,
  UnsupportedConfiguration = 5,
  Other = 6,
  EARSessionStatus_MAX = 7
};