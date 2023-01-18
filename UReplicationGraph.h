// Class /Script/ReplicationGraph.ReplicationGraph
// Size: 0x570
class UReplicationGraph : public UReplicationDriver
{
	class UClass* ReplicationConnectionManagerClass; // 0x28 (0x8)
	class UNetDriver* NetDriver; // 0x30 (0x8)
	struct TArray<class UNetReplicationGraphConnection*> Connections; // 0x38 (0x10)
	struct TArray<class UNetReplicationGraphConnection*> PendingConnections; // 0x48 (0x10)
	unsigned char unreflected_58[0x40]; // 0x58 (0x40) 
	struct TArray<class UReplicationGraphNode*> GlobalGraphNodes; // 0x98 (0x10)
	struct TArray<class UReplicationGraphNode*> PrepareForReplicationNodes; // 0xa8 (0x10)
	unsigned char padding_b8[0x4b8]; // 0xb8 (0x4b8)
};

