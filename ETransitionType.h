// Enum /Script/Engine.ETransitionType
enum class ETransitionType : uint8_t
{
  None = 0,
  Paused = 1,
  Loading = 2,
  Saving = 3,
  Connecting = 4,
  Precaching = 5,
  WaitingToConnect = 6,
  MAX = 7
};