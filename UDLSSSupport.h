// Enum /Script/DLSSBlueprint.UDLSSSupport
enum class UDLSSSupport : uint8_t
{
  Supported = 0,
  NotSupported = 1,
  NotSupportedIncompatibleHardware = 2,
  NotSupportedDriverOutOfDate = 3,
  NotSupportedOperatingSystemOutOfDate = 4,
  NotSupportedByPlatformAtBuildTime = 5,
  NotSupportedIncompatibleAPICaptureToolActive = 6,
  UDLSSSupport_MAX = 7
};