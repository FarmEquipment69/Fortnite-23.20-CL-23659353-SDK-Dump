// Enum /Script/Engine.EQuartzCommandType
enum class EQuartzCommandType : uint8_t
{
  PlaySound = 0,
  QueueSoundToPlay = 1,
  RetriggerSound = 2,
  TickRateChange = 3,
  TransportReset = 4,
  StartOtherClock = 5,
  Custom = 6,
  EQuartzCommandType_MAX = 7
};