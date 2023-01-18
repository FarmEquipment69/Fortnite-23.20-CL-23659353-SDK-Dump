// Enum /Script/MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
  Tick = 0,
  Platform = 1,
  Audio = 2,
  RelativeTimecode = 3,
  Timecode = 4,
  PlayEveryFrame = 5,
  Custom = 6,
  EUpdateClockSource_MAX = 7
};