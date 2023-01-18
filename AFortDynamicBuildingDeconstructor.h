// Class /Script/FortniteGame.FortDynamicBuildingDeconstructor
// Size: 0x2f8
class AFortDynamicBuildingDeconstructor : public AActor
{
	struct FBoxSphereBounds Bounds; // 0x288 (0x38)
	bool bDebugDrawBounds; // 0x2c0 (0x1)
	bool bSelectiveDestruction; // 0x2c1 (0x1)
	bool bIgnoreMissionActors; // 0x2c2 (0x1)
	bool bShrinkAndDestroyEffect; // 0x2c3 (0x1)
	int NumOfPiecesToDestroyAtOnce; // 0x2c4 (0x4)
	float TimeBetweenChunks; // 0x2c8 (0x4)
	unsigned char unreflected_2cc[0x4]; // 0x2cc (0x4) 
	struct TArray<struct TWeakObjectPtr<class ABuildingActor>> SortedBuildingActors; // 0x2d0 (0x10)
	int CurrentIndex; // 0x2e0 (0x4)
	unsigned char padding_2e4[0x14]; // 0x2e4 (0x14)
};

