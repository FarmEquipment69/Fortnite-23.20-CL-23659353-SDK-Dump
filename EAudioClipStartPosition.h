// Enum /Script/HmxAudio.EAudioClipStartPosition
enum class EAudioClipStartPosition : uint8_t
{
  kImmediate = 0,
  kOnNextDownbeat = 1,
  kOnNextBeat = 2,
  kOnNextEighth = 3,
  kOnTickInBar = 4,
  kOnAbsoluteTick = 5,
  kSubdivision = 6,
  kNumStartPositions = 7,
  EAudioClipStartPosition_MAX = 8
};