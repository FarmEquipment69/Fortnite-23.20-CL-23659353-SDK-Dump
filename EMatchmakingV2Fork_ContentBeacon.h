// Enum /Script/FortniteGame.EMatchmakingV2Fork_ContentBeacon
enum class EMatchmakingV2Fork_ContentBeacon : uint8_t
{
  Begin = 0,
  Idle = 1,
  Completed = 2,
  Failed = 3,
  INVALID = 4,
  V2_DisconnectedBegin = 5,
  V2_ReadinessChangedBegin = 6,
  V2_OnContentBeaconErrorFailed = 7,
  V2_OnContentBeaconErrorSuccess = 8,
  V2_OnClientReadinessChangedFailed = 9,
  V2_OnClientReadinessChangedSuccess = 10,
  V2_CancelRequested = 11,
  V1_Begin = 12,
  V1_WaitingForContent = 13,
  V1_Disconnected = 14,
  V1_Failed = 15,
  V1_ReadinessCallback = 16,
  V1_JoinAnyways = 17,
  V1_TravelToSession = 18,
  V1_TravelToSessionLambda = 19,
  V1_TravelToSessionTimeout = 20,
  V1_ReadinessCallbackFailed = 21,
  V1_CancelRequested = 22,
  EMatchmakingV2Fork_MAX = 23
};