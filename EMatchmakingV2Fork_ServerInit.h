// Enum /Script/FortniteGame.EMatchmakingV2Fork_ServerInit
enum class EMatchmakingV2Fork_ServerInit : uint8_t
{
  Begin = 0,
  Idle = 1,
  Completed = 2,
  Failed = 3,
  INVALID = 4,
  ReadyToTravel = 5,
  WaitForInit = 6,
  WaitForSubGameContent = 7,
  WaitForSubGameContent_Callback = 8,
  WaitForSubGameContent_Callback_Ready = 9,
  WaitForSubGameContent_Callback_NotReady = 10,
  WaitBeforeTravel = 11,
  FailedToConnect = 12,
  MissingParty = 13,
  FailedCallback = 14,
  ServerInitStateChange_Callback = 15,
  ServerInitStateChange_Callback_Ready = 16,
  ServerInitStateChange_Callback_NotReady = 17,
  CancelRequested = 18,
  EMatchmakingV2Fork_MAX = 19
};