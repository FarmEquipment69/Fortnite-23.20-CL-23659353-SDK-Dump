// Enum /Script/FortniteGame.EMatchmakingV2_Temp_JoinInProgressState
enum class EMatchmakingV2_Temp_JoinInProgressState : uint8_t
{
  Begin = 0,
  Idle = 1,
  Completed = 2,
  Failed = 3,
  INVALID = 4,
  Branch_JoinHost = 5,
  Branch_JoinParty = 6,
  Branch_JoinBroadcaster = 7,
  Branch_JoinPartyMember = 8,
  ConnectToReservationBeacon = 9,
  ConnectToReservationBeaconForPersistentParty = 10,
  CheckConnectToReservationBeaconForPersistentPartyData = 11,
  DelayingCallToJoin = 12,
  CheckNotMatchmaking = 13,
  CallToJoin = 14,
  EMatchmakingV2_Temp_MAX = 15
};