// Enum /Script/FortniteGame.ECameraStateRestoreReason
enum class ECameraStateRestoreReason : uint8_t
{
  Unknown = 0,
  ChangedFollowTarget = 1,
  ChangedCameraType = 2,
  InvokedHotKey = 3,
  Scrubbed = 4,
  Restored = 5,
  SpecialAction = 6,
  MAX = 7
};