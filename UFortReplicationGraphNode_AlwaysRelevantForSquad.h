// Class /Script/FortniteGame.FortReplicationGraphNode_AlwaysRelevantForSquad
// Size: 0x88
class UFortReplicationGraphNode_AlwaysRelevantForSquad : public UReplicationGraphNode
{
	unsigned char unreflected_50[0x8]; // 0x50 (0x8) 
	struct TArray<class AFortPlayerStateAthena*> PlayerStates; // 0x58 (0x10)
	struct TArray<class AActor*> AlwaysRelevantActors; // 0x68 (0x10)
	unsigned char padding_78[0x10]; // 0x78 (0x10)
};

