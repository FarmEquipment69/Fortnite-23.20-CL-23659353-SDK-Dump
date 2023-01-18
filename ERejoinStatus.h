// Enum /Script/Rejoin.ERejoinStatus
enum class ERejoinStatus : uint8_t
{
  NoMatchToRejoin = 0,
  RejoinAvailable = 1,
  UpdatingStatus = 2,
  NeedsRecheck = 3,
  NoMatchToRejoin_MatchEnded = 4,
  ERejoinStatus_MAX = 5
};