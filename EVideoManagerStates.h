// Enum /Script/FortniteGame.EVideoManagerStates
enum class EVideoManagerStates : uint8_t
{
  INVALID = 0,
  LoadingReplay = 1,
  ScrubbingReplay = 2,
  WaitingForShotSetup = 3,
  WatchingShot = 4,
  ExportingShot = 5,
  PostExportedShot = 6,
  EVideoManagerStates_MAX = 7
};