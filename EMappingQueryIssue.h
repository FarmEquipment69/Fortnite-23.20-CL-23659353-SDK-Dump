// Enum /Script/EnhancedInput.EMappingQueryIssue
enum class EMappingQueryIssue : uint8_t
{
  NoIssue = 0,
  ReservedByAction = 1,
  HidesExistingMapping = 2,
  HiddenByExistingMapping = 4,
  CollisionWithMappingInSameContext = 8,
  ForcesTypePromotion = 16,
  ForcesTypeDemotion = 32,
  EMappingQueryIssue_MAX = 33
};