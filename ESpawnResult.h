// Enum /Script/FortniteGame.ESpawnResult
enum class ESpawnResult : uint8_t
{
  Success = 0,
  Failure_NoLocationFound = 1,
  Failure_NoActorClass = 2,
  Failure_BadQueryData = 3,
  ESpawnResult_MAX = 4
};