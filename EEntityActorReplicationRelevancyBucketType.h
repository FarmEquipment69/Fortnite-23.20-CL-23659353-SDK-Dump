// Enum /Script/EntityActor.EEntityActorReplicationRelevancyBucketType
enum class EEntityActorReplicationRelevancyBucketType : uint8_t
{
  UseVisualCullDistanceForReplicationRelevancy = 0,
  SmallReplicationRelevancy = 1,
  MediumReplicationRelevancy = 2,
  LargeReplicationRelevancy = 3,
  MaxTargetRangeReplicationRelevancy = 4,
  ImportantReplicationRelevancy = 5,
  CustomReplicationRelevancy = 6,
  EEntityActorReplicationRelevancyBucketType_MAX = 7
};