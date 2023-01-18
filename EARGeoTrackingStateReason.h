// Enum /Script/AugmentedReality.EARGeoTrackingStateReason
enum class EARGeoTrackingStateReason : uint8_t
{
  None = 0,
  NotAvailableAtLocation = 1,
  NeedLocationPermissions = 2,
  DevicePointedTooLow = 3,
  WorldTrackingUnstable = 4,
  WaitingForLocation = 5,
  GeoDataNotLoaded = 6,
  VisualLocalizationFailed = 7,
  WaitingForAvailabilityCheck = 8,
  EARGeoTrackingStateReason_MAX = 9
};