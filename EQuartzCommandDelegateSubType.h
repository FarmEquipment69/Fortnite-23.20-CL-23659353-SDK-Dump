// Enum /Script/Engine.EQuartzCommandDelegateSubType
enum class EQuartzCommandDelegateSubType : uint8_t
{
  CommandOnFailedToQueue = 0,
  CommandOnQueued = 1,
  CommandOnCanceled = 2,
  CommandOnAboutToStart = 3,
  CommandOnStarted = 4,
  Count = 5,
  EQuartzCommandDelegateSubType_MAX = 6
};