// Enum /Script/AugmentedReality.EARSessionConfigFlags
enum class EARSessionConfigFlags : uint8_t
{
  None = 0,
  GenerateMeshData = 1,
  RenderMeshDataInWireframe = 2,
  GenerateCollisionForMeshData = 4,
  GenerateNavMeshForMeshData = 8,
  UseMeshDataForOcclusion = 16,
  EARSessionConfigFlags_MAX = 17
};