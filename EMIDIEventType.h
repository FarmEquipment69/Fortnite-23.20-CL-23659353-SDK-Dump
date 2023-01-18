// Enum /Script/MIDIDevice.EMIDIEventType
enum class EMIDIEventType : uint8_t
{
  Unknown = 0,
  NoteOff = 8,
  NoteOn = 9,
  NoteAfterTouch = 10,
  ControlChange = 11,
  ProgramChange = 12,
  ChannelAfterTouch = 13,
  PitchBend = 14,
  EMIDIEventType_MAX = 15
};