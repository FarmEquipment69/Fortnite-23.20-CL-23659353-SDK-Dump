// Enum /Script/FortniteGame.EMatchmakingCancelReasonV2
enum class EMatchmakingCancelReasonV2 : uint8_t
{
  Explicit = 0,
  JoinedParty = 1,
  LeftParty = 2,
  PartyMemberJoined = 3,
  PartyMemberLeft = 4,
  PartyMemberCanceled = 5,
  PartyLeaderSwap = 6,
  PlayReplay = 7,
  UIDestroyed = 8,
  PCDestroyed = 9,
  AppBackgrounded = 10,
  HotfixOutdated = 11,
  TournamentOver = 12,
  NotInParty = 13,
  CrossplayBlocked = 14,
  TournamentCrossplayBlocked = 15,
  AccountLevelTooLow = 16,
  FillNoCrossplay = 17,
  CreativeCanceledByLeader = 18,
  CreativeMemberLeftIsland = 19,
  CreativeIslandStateChanged = 20,
  JoinInProgressRejected = 21,
  MatchmakingDisabled = 22,
  NotLoggedIn = 23,
  NoIdentityInterface = 24,
  NoSessionInterface = 25,
  TimedOut = 26,
  InvalidPlaylist = 27,
  AttemptedToQueueTooFrequently = 28,
  TournamentBlackout = 29,
  CancelledDuringPreTravelSetup = 30,
  Unknown = 31,
  EMatchmakingCancelReasonV2_MAX = 32
};