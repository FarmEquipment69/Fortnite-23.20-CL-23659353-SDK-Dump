// Enum /Script/FortniteGame.ERegisteredPlayerUnregistrationStatus
enum class ERegisteredPlayerUnregistrationStatus : uint8_t
{
  Registered = 0,
  UnregistrationStarting = 1,
  UnregistrationWaitingForInitialLock = 2,
  UnregistrationWaitingForScoreSave = 3,
  UnregistrationWaitingForFinalSave = 4,
  UnregistrationWaitingForProfileUnlock = 5,
  UnregistrationComplete = 6,
  ERegisteredPlayerUnregistrationStatus_MAX = 7
};