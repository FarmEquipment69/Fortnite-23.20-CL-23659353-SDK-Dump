// Enum /Script/FortniteGame.EUseInputWithPartyResult
enum class EUseInputWithPartyResult : uint8_t
{
  Success = 0,
  LocalPlayerNeedsToAllowCrossplay = 1,
  LocalPlayerRestricted = 2,
  RemotePlayerRestricted = 3,
  UnknownFailure = 4,
  EUseInputWithPartyResult_MAX = 5
};