// Enum /Script/FortniteGame.EAcceptFriendInviteFailureReason
enum class EAcceptFriendInviteFailureReason : uint8_t
{
  InviterTooManyFriends = 0,
  SelfTooManyFriends = 1,
  MissingPin = 2,
  InvalidPin = 3,
  PinAttemptsExceeded = 4,
  UnknownError = 5,
  EAcceptFriendInviteFailureReason_MAX = 6
};