// Enum /Script/FortniteGame.EMcpSubscriptionState
enum class EMcpSubscriptionState : uint8_t
{
  Inactive = 0,
  Active = 1,
  Canceled = 2,
  PaymentProcessError = 3,
  PlatformAuthError = 4,
  RewardsDelayed = 5,
  Unknown = 6,
  EMcpSubscriptionState_MAX = 7
};