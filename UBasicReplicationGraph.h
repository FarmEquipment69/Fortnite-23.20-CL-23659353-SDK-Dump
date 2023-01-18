// Class /Script/ReplicationGraph.BasicReplicationGraph
// Size: 0x5a0
class UBasicReplicationGraph : public UReplicationGraph
{
	class UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x568 (0x8)
	class UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x570 (0x8)
	struct TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList; // 0x578 (0x10)
	struct TArray<class AActor*> ActorsWithoutNetConnection; // 0x588 (0x10)
	unsigned char padding_598[0x8]; // 0x598 (0x8)
};

