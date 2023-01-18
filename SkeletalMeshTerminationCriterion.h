// Enum /Script/Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : uint8_t
{
  SMTC_NumOfTriangles = 0,
  SMTC_NumOfVerts = 1,
  SMTC_TriangleOrVert = 2,
  SMTC_AbsNumOfTriangles = 3,
  SMTC_AbsNumOfVerts = 4,
  SMTC_AbsTriangleOrVert = 5,
  SMTC_MAX = 6
};