// Enum /Script/Chaos.EClusterUnionMethod
enum class EClusterUnionMethod : uint8_t
{
  PointImplicit = 0,
  DelaunayTriangulation = 1,
  MinimalSpanningSubsetDelaunayTriangulation = 2,
  PointImplicitAugmentedWithMinimalDelaunay = 3,
  BoundsOverlapFilteredDelaunayTriangulation = 4,
  None = 5,
  EClusterUnionMethod_MAX = 6
};