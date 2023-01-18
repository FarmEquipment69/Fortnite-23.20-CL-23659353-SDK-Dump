// Class /Script/FortniteGame.BattleMapNode
// Size: 0x3b8
class ABattleMapNode : public AActor
{
	class UClass* EdgeClass; // 0x288 (0x8)
	class UClass* ChildrenNodeClass; // 0x290 (0x8)
	bool bEnableAutomaticResize; // 0x298 (0x1)
	bool bSupportSelection; // 0x299 (0x1)
	bool bSupportScrubbing; // 0x29a (0x1)
	unsigned char unreflected_29b[0x5]; // 0x29b (0x5) 
	struct TArray<class UMaterialInterface*> CustomMaterialsPerPlayerIndex; // 0x2a0 (0x10)
	unsigned char unreflected_2b0[0x38]; // 0x2b0 (0x38) 
	struct TArray<class ABattleMapEdge*> NextEdges; // 0x2e8 (0x10)
	unsigned char unreflected_2f8[0x38]; // 0x2f8 (0x38) 
	struct TMap<class ABattleMapNode*, class ABattleMapEdge*> ChildrenNodes; // 0x330 (0x50)
	unsigned char padding_380[0x38]; // 0x380 (0x38)
};

