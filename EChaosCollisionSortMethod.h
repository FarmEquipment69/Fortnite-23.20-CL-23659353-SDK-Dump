// Enum /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t
{
  SortNone = 0,
  SortByHighestMass = 1,
  SortByHighestSpeed = 2,
  SortByHighestImpulse = 3,
  SortByNearestFirst = 4,
  Count = 5,
  EChaosCollisionSortMethod_MAX = 6
};