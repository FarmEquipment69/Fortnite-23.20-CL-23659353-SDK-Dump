// Enum /Script/Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
  FULLYLOAD_Map = 0,
  FULLYLOAD_Game_PreLoadClass = 1,
  FULLYLOAD_Game_PostLoadClass = 2,
  FULLYLOAD_Always = 3,
  FULLYLOAD_Mutator = 4,
  FULLYLOAD_MAX = 5
};