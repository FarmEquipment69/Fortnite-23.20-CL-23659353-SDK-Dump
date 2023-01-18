// Enum /Script/AugmentedReality.EARServiceAvailability
enum class EARServiceAvailability : uint8_t
{
  UnknownError = 0,
  UnknownChecking = 1,
  UnknownTimedOut = 2,
  UnsupportedDeviceNotCapable = 3,
  SupportedNotInstalled = 4,
  SupportedVersionTooOld = 5,
  SupportedInstalled = 6,
  EARServiceAvailability_MAX = 7
};