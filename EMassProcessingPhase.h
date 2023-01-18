// Enum /Script/MassEntity.EMassProcessingPhase
enum class EMassProcessingPhase : uint8_t
{
  PrePhysics = 0,
  StartPhysics = 1,
  DuringPhysics = 2,
  EndPhysics = 3,
  PostPhysics = 4,
  FrameEnd = 5,
  MAX = 6
};