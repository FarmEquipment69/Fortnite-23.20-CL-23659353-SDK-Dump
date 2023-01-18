// Enum /Script/AIPatrolPath.SegmentPathStatus
enum class SegmentPathStatus : uint8_t
{
  INVALID = 0,
  CALCULATING = 1,
  RECALCULATING_PENDING = 2,
  PATH_FAILED = 3,
  PATH_SUCCESS = 4,
  SegmentPathStatus_MAX = 5
};