// Enum /Script/FortniteUI.ERedeemCodeFailureReason
enum class ERedeemCodeFailureReason : uint8_t
{
  InvalidCode = 0,
  CodeAlreadyUsed = 1,
  AlreadyHasAccess = 2,
  FailedToGetItem = 3,
  Unknown = 4,
  ERedeemCodeFailureReason_MAX = 5
};