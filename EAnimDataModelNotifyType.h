// Enum /Script/Engine.EAnimDataModelNotifyType
enum class EAnimDataModelNotifyType : uint8_t
{
  BracketOpened = 0,
  BracketClosed = 1,
  TrackAdded = 2,
  TrackChanged = 3,
  TrackRemoved = 4,
  SequenceLengthChanged = 5,
  FrameRateChanged = 6,
  CurveAdded = 7,
  CurveChanged = 8,
  CurveRemoved = 9,
  CurveFlagsChanged = 10,
  CurveRenamed = 11,
  CurveScaled = 12,
  CurveColorChanged = 13,
  AttributeAdded = 14,
  AttributeRemoved = 15,
  AttributeChanged = 16,
  Populated = 17,
  Reset = 18,
  Invalid = 19,
  EAnimDataModelNotifyType_MAX = 20
};