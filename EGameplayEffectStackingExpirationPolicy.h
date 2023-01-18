// Enum /Script/GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
  ClearEntireStack = 0,
  RemoveSingleStackAndRefreshDuration = 1,
  RefreshDuration = 2,
  EGameplayEffectStackingExpirationPolicy_MAX = 3
};