// Enum /Script/EntityActor.EEntityActorReplicationOverrideType
enum class EEntityActorReplicationOverrideType : uint8_t
{
  AutoReplication = 0,
  DoNotReplicate = 1,
  ReplicateAlways = 2,
  Static_Spatial = 3,
  Dynamic_Spatial = 4,
  Dormancy_Spatial = 5,
  EEntityActorReplicationOverrideType_MAX = 6
};