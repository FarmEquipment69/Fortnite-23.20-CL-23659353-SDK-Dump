// Enum /Script/FortniteGame.EClientsReadyToJoinPhase
enum class EClientsReadyToJoinPhase : uint8_t
{
  Uninitialized = 0,
  WaitingForPlaylistInitialize = 1,
  WaitingForPartyLeader = 2,
  WaitingForLoadContentCall = 3,
  ReadyToJoin = 4,
  EClientsReadyToJoinPhase_MAX = 5
};