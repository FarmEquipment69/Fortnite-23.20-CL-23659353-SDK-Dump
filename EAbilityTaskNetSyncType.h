// Enum /Script/GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8_t
{
  BothWait = 0,
  OnlyServerWait = 1,
  OnlyClientWait = 2,
  EAbilityTaskNetSyncType_MAX = 3
};