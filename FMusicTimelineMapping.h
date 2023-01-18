// Enum /Script/HmxAudio.FMusicTimelineMapping
enum class FMusicTimelineMapping : uint8_t
{
  kTimelineMapping_NOT_USED = 0,
  kTimelineMapping_FromStart = 1,
  kTimelineMapping_FromNextDownbeat = 2,
  kTimelineMapping_FromSectionMarkers = 3,
  kTimelineMapping_FromNearestBeat = 4,
  kTimelineMapping_FromSpecificTick = 5,
  kTimelineMapping_FromNextBeat = 6,
  kTimelineMapping_MAX = 7
};