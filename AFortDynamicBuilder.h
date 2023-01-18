// Class /Script/FortniteGame.FortDynamicBuilder
// Size: 0x870
class AFortDynamicBuilder : public ABuildingActor
{
	class UFortBuildingInstructions* BuildingInstructions; // 0x780 (0x8)
	bool bSelectiveDestruction; // 0x788 (0x1)
	bool bDestroyOverlapping; // 0x789 (0x1)
	bool bDestroyMatchingPiece; // 0x78a (0x1)
	bool bNoCollisionFail; // 0x78b (0x1)
	bool bIgnoreMissionActors; // 0x78c (0x1)
	bool bShrinkAndDestroyEffect; // 0x78d (0x1)
	bool bDebugDrawBounds; // 0x78e (0x1)
	bool bUsePlayerBuildAnimations; // 0x78f (0x1)
	float BuildingConstructionTime; // 0x790 (0x4)
	struct TEnumAsByte<FDynamicBuildOrder> BuildOrder; // 0x794 (0x1)
	bool bReverseBuild; // 0x795 (0x1)
	unsigned char unreflected_796[0x2]; // 0x796 (0x2) 
	int OverrideOwnerPersistentId; // 0x798 (0x4)
	unsigned char unreflected_79c[0x34]; // 0x79c (0x34) 
	struct FMulticastInlineDelegate BPDynamicBuilderFinishedSpawning; // 0x7d0 (0x10)
	unsigned char unreflected_7e0[0x60]; // 0x7e0 (0x60) 
	int CurrentIndex; // 0x840 (0x4)
	unsigned char unreflected_844[0x1c]; // 0x844 (0x1c) 
	struct TArray<class ABuildingActor*> AllBuiltActors; // 0x860 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortDynamicBuilder.RemoveExistingActors (Underlying native function: RemoveExistingActors 0x862ea6c)
	void RemoveExistingActors(); // (Final | BlueprintAuthorityOnly | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortDynamicBuilder.CreateBuilder (Underlying native function: CreateBuilder 0x862b8bc)
	static class AFortDynamicBuilder* CreateBuilder(class UObject*& WorldContextObject, struct FTransform& Transform, class UFortBuildingInstructions*& BuildingInstructions, struct FVector& BuildLocationOffset); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

