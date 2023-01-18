// ScriptStruct /Script/ReplicationGraph.ClassReplicationInfo
// Size: 0x70
struct FClassReplicationInfo
{
	float DistancePriorityScale; // 0x0 (0x4)
	float StarvationPriorityScale; // 0x4 (0x4)
	float AccumulatedNetPriorityBias; // 0x8 (0x4)
	uint16_t ReplicationPeriodFrame; // 0xc (0x2)
	uint16_t FastPathReplicationPeriodFrame; // 0xe (0x2)
	uint16_t ActorChannelFrameTimeout; // 0x10 (0x2)
	unsigned char unreflected_12[0x52]; // 0x12 (0x52) 
	float CullDistance; // 0x64 (0x4)
	float CullDistanceSquared; // 0x68 (0x4)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

