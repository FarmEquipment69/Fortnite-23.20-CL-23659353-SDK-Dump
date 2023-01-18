// Enum /Script/FortniteGame.EMatchmakingUtilityState
enum class EMatchmakingUtilityState : uint8_t
{
  Idle = 0,
  MatchmakingUtilityBegin = 1,
  MatchmakingUtilityCompleted = 2,
  Completed = 3,
  Failed = 4,
  CheckSittingOutState = 5,
  InitializePlaylistSelection = 6,
  JoinMatchInProgress = 7,
  CheckingIfBanned = 8,
  PrivateMatchMinPartySize = 9,
  CreativeContentDownloadModal = 10,
  CheckModeratorModePermissions = 11,
  CrossplayOptIn_GameMode = 12,
  CrossplayOptIn_Fill = 13,
  CrossplayDevices = 14,
  FactionChoice = 15,
  SetPartyReadiness = 16,
  WaitingForPartyReadinessConfirmed = 17,
  TournamentEligibility = 18,
  TournamentRegionLock = 19,
  TournamentMFA = 20,
  TournamentEULA = 21,
  AppEnvSecurity = 22,
  WaitingForInitialPlaylistSelection = 23,
  ServerBrowsers = 24,
  WaitingForServerBrowserPlaylistSwap = 25,
  DelayReadyUp = 26,
  QoSSettings_UpdateManager = 27,
  QoSSettings_UpdateManager_Success = 28,
  SetAthenaReady = 29,
  WaitingForAthenaReadinessConfirmed = 30,
  PreloadAthena = 31,
  UpdateHiddenMatchmakingDelay = 32,
  WaitingForUpdateHiddenMatchmakingDelay = 33,
  HiddenMatchmakingDelay = 34,
  FindExistingEditSession = 35,
  SelectingFlow = 36,
  ReadyingUpforFlow = 37,
  PartyMemberSameLocationCheck = 38,
  CallingMatchmakingForFlow = 39,
  WaitingForJoinMatchInProgressResponse = 40,
  WaitingForMatchmakingResponse = 41,
  WaitingForMatchmakingToCompleteAsPartyMember = 42,
  WaitingForEntirePartyReady = 43,
  WaitingForPartyToBeInSameLocation = 44,
  WaitingForPartyToSwitchSubgames = 45,
  WaitingToRestartMatchmaking_TooFrequentRequest = 46,
  RequestingSpectateMatch = 47,
  ProcessingMatchmakingResults_Success = 48,
  ProcessingMatchmakingResults_Fail = 49,
  PreloadingForJoiningMatchInProgress = 50,
  ProcessingJoinMatchInProgressResults_Success = 51,
  ProcessingJoinMatchInProgressResults_Fail = 52,
  DownloadingAdditionalContent = 53,
  RestartingMatchmaking = 54,
  QueryingForLiveSpectatorEula = 55,
  PreTravelToSessionSetup = 56,
  RunningPlaylistChecks = 57,
  INVALID = 58,
  EMatchmakingUtilityState_MAX = 59
};