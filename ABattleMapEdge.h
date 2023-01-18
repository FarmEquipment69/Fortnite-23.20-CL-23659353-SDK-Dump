// Class /Script/FortniteGame.BattleMapEdge
// Size: 0x2f0
class ABattleMapEdge : public AActor
{
	struct TArray<class UMaterialInterface*> CustomMaterialsPerPlayerIndex; // 0x288 (0x10)
	unsigned char padding_298[0x58]; // 0x298 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.BattleMapEdge.OnNextNextSet (Underlying native function: OnNextNextSet 0x85a3fc0)
	void OnNextNextSet(class ABattleMapNode*& NextNextNode); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapEdge.HandeResizedBattleNode (Underlying native function: HandeResizedBattleNode 0x85a3534)
	void HandeResizedBattleNode(float& NewScaling, class ABattleMapNode*& Node); // (Final | Native | Protected)
};

