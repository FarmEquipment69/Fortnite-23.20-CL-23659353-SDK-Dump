// Enum /Script/FortniteGame.EFortPlayerPartState
enum class EFortPlayerPartState : uint8_t
{
  NeverInitalized = 0,
  AssetsPreloading = 1,
  QueuedForInitialization = 2,
  CurrentlyInitializing = 3,
  InitializationComplete = 4,
  InitializationComplete_EmptyPart = 5,
  InitializationFailed_NoParts = 6,
  NumTypes = 7,
  EFortPlayerPartState_MAX = 8
};