// Enum /Script/HmxAudio.FAudioContinuationMode
enum class FAudioContinuationMode : uint8_t
{
  kOneshot = 0,
  kRepeatOnDownbeats = 1,
  kRepeatOnQuarters = 2,
  kRepeatOnEigths = 3,
  kRepeatOnEigthTriplets = 4,
  kRepeatOn16ths = 5,
  kRepeatOnSpecificTickInBar = 6,
  kStickyOnScheduledStart = 7,
  kNumContinuationModes = 8,
  FAudioContinuationMode_MAX = 9
};