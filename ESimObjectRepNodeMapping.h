// Enum /Script/EntityActor.ESimObjectRepNodeMapping
enum class ESimObjectRepNodeMapping : uint8_t
{
  NotReplicated = 0,
  RelevantAllInsidePlayspace = 1,
  Spatial_Static = 2,
  Spatial_Dynamic = 3,
  Spatial_Dormancy = 4,
  ESimObjectRepNodeMapping_MAX = 5
};