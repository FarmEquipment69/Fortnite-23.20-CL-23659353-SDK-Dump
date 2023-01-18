// Enum /Script/FortniteGame.ESendFriendInviteFailureReason
enum class ESendFriendInviteFailureReason : uint8_t
{
  NotFound = 0,
  AlreadyFriends = 1,
  InvitePending = 2,
  AddingSelfFail = 3,
  AddingBlockedFail = 4,
  AutoDeclined = 5,
  BlockedByTarget = 6,
  InviteeInboxFull = 7,
  SelfOutboxFull = 8,
  MissingPin = 9,
  InvalidPin = 10,
  PinAttemptsExceeded = 11,
  UnknownError = 12,
  ESendFriendInviteFailureReason_MAX = 13
};