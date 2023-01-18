// Class /Script/EntityActor.EntityActorCustomReplicationComponent
// Size: 0x68
class UEntityActorCustomReplicationComponent : public UEntityComponent
{
	struct TEnumAsByte<EEntityActorReplicationOverrideType> ReplicationOverride; // 0x60 (0x1)
	struct TEnumAsByte<EEntityActorReplicationRelevancyBucketType> ReplicationRelevancyBucketType; // 0x61 (0x1)
	unsigned char unreflected_62[0x2]; // 0x62 (0x2) 
	float CustomReplicationRelevancyRange; // 0x64 (0x4)
};

