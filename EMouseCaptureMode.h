// Enum /Script/Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
  NoCapture = 0,
  CapturePermanently = 1,
  CapturePermanently_IncludingInitialMouseDown = 2,
  CaptureDuringMouseDown = 3,
  CaptureDuringRightMouseDown = 4,
  EMouseCaptureMode_MAX = 5
};