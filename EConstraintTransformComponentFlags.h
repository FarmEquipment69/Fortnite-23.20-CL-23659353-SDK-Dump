// Enum /Script/Engine.EConstraintTransformComponentFlags
enum class EConstraintTransformComponentFlags : uint8_t
{
  None = 0,
  ChildPosition = 1,
  ChildRotation = 2,
  ParentPosition = 4,
  ParentRotation = 8,
  AllChild = 3,
  AllParent = 12,
  AllPosition = 5,
  AllRotation = 10,
  All = 15,
  EConstraintTransformComponentFlags_MAX = 16
};