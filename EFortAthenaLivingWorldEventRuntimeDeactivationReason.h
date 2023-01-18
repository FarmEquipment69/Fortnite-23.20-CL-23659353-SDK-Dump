// Enum /Script/LagerRuntime.EFortAthenaLivingWorldEventRuntimeDeactivationReason
enum class EFortAthenaLivingWorldEventRuntimeDeactivationReason : uint8_t
{
  None = 0,
  NoValidEventData = 1,
  RandomDeactivation = 2,
  CalendarEvent = 3,
  MatchedPrefabAndNormalActor = 4,
  ActorDescDoesntMatchAnySpawnerData = 5,
  EFortAthenaLivingWorldEventRuntimeDeactivationReason_MAX = 6
};