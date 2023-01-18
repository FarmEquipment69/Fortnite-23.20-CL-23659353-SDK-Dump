// Enum /Script/Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
  PSORTMODE_None = 0,
  PSORTMODE_ViewProjDepth = 1,
  PSORTMODE_DistanceToView = 2,
  PSORTMODE_Age_OldestFirst = 3,
  PSORTMODE_Age_NewestFirst = 4,
  PSORTMODE_MAX = 5
};