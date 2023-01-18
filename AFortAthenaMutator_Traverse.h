// Class /Script/FortniteGame.FortAthenaMutator_Traverse
// Size: 0x6d8
class AFortAthenaMutator_Traverse : public AFortAthenaMutator_GameModeBase
{
	struct TArray<class AAthenaTraversePoint*> TraversePoints; // 0x450 (0x10)
	int CurrentPointIndex; // 0x460 (0x4)
	unsigned char unreflected_464[0x4]; // 0x464 (0x4) 
	struct FScalableFloat RaceStartIndex; // 0x468 (0x28)
	struct FScalableFloat NumOfCheckpoints; // 0x490 (0x28)
	struct FScalableFloat TraversePointSpawnZ; // 0x4b8 (0x28)
	struct FScalableFloat InitialRadius; // 0x4e0 (0x28)
	struct FScalableFloat RespawnRadius; // 0x508 (0x28)
	struct FScalableFloat DelayBeforeFirstReveal; // 0x530 (0x28)
	struct FScalableFloat MinDistanceAwayFromOtherPoints; // 0x558 (0x28)
	struct FFortRespawnLogicData RespawnData; // 0x580 (0x140)
	class UClass* TraversePointClass; // 0x6c0 (0x8)
	class UClass* BoundsXYSplineClass; // 0x6c8 (0x8)
	unsigned char padding_6d0[0x8]; // 0x6d0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Traverse.OnRep_CurrentPointIndex (Underlying native function: OnRep_CurrentPointIndex 0x26daa0c)
	void OnRepCurrentPointIndex(); // (Final | Native | Protected)
};

