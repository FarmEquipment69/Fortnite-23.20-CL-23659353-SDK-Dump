// Enum /Script/GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
  ScalableFloat = 0,
  AttributeBased = 1,
  CustomCalculationClass = 2,
  SetByCaller = 3,
  EGameplayEffectMagnitudeCalculation_MAX = 4
};