// Enum /Script/PoseSearch.EPoseSearchTrajectoryFlags
enum class EPoseSearchTrajectoryFlags : uint8_t
{
  Velocity = 1,
  Position = 2,
  VelocityDirection = 4,
  FacingDirection = 8,
  VelocityXY = 16,
  PositionXY = 32,
  VelocityDirectionXY = 64,
  FacingDirectionXY = 128,
  EPoseSearchTrajectoryFlags_MAX = 129
};