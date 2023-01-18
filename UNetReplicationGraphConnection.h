// Class /Script/ReplicationGraph.NetReplicationGraphConnection
// Size: 0x328
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
	class UNetConnection* NetConnection; // 0x28 (0x8)
	unsigned char unreflected_30[0x148]; // 0x30 (0x148) 
	class AReplicationGraphDebugActor* DebugActor; // 0x178 (0x8)
	unsigned char unreflected_180[0x8]; // 0x180 (0x8) 
	struct TArray<struct FLastLocationGatherInfo> LastGatherLocations; // 0x188 (0x10)
	unsigned char unreflected_198[0x58]; // 0x198 (0x58) 
	struct TArray<class UReplicationGraphNode*> ConnectionGraphNodes; // 0x1f0 (0x10)
	class UReplicationGraphNode_TearOff_ForConnection* TearOffNode; // 0x200 (0x8)
	unsigned char padding_208[0x120]; // 0x208 (0x120)
};

