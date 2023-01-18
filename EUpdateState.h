// Enum /Script/Hotfix.EUpdateState
enum class EUpdateState : uint8_t
{
  UpdateIdle = 0,
  UpdatePending = 1,
  CheckingForPatch = 2,
  DetectingPlatformEnvironment = 3,
  CheckingForHotfix = 4,
  WaitingOnInitialLoad = 5,
  InitialLoadComplete = 6,
  UpdateComplete = 7,
  EUpdateState_MAX = 8
};