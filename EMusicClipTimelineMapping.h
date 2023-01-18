// Enum /Script/HmxAudio.EMusicClipTimelineMapping
enum class EMusicClipTimelineMapping : uint8_t
{
  DO_NOT_USE = 0,
  FromStart = 1,
  FromNextDownbeat = 2,
  FromSectionMarkers = 3,
  FromNearestBeat = 4,
  FromSpecificTick = 5,
  FromNextBeat = 6,
  EMusicClipTimelineMapping_MAX = 7
};