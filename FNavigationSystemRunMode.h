// Enum /Script/Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8_t
{
  InvalidMode = 0,
  GameMode = 1,
  EditorMode = 2,
  SimulationMode = 3,
  PIEMode = 4,
  InferFromWorldMode = 5,
  EditorWorldPartitionBuildMode = 6,
  FNavigationSystemRunMode_MAX = 7
};