// Enum /Script/HmxAudio.EAudioTransportState
enum class EAudioTransportState : uint8_t
{
  Invalid = 0,
  PreBuffering = 1,
  PlayRequested = 2,
  Playing = 3,
  Paused = 4,
  Stopped = 5,
  Stopping = 6,
  EAudioTransportState_MAX = 7
};