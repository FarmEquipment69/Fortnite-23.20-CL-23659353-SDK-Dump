// Enum /Script/FortniteGame.EKeepPlayingTogetherVotingStatus
enum class EKeepPlayingTogetherVotingStatus : uint8_t
{
  Undecided = 0,
  OptedIn = 1,
  OptedOut_Manual = 2,
  OptedOut_PartySizeIncreased = 3,
  OptedOut_PartyMemberInLobby = 4,
  OptedOut_PartyMemberOptedOut = 5,
  OptedOut_PartyMemberLeft = 6,
  OptedOut_Forced = 7,
  OptedOut_TimedOut = 8,
  OptedOut_PlayerReturnedToLobby = 9,
  OptedOut_OnlyPlayerInSquad = 10,
  OptedOut_Disconnected = 11,
  EKeepPlayingTogetherVotingStatus_MAX = 12
};