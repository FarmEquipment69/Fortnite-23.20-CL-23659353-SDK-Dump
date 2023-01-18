// Class /Script/FortniteGame.FortAthenaMutator_MatchConditionManager
// Size: 0x370
class AFortAthenaMutator_MatchConditionManager : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x18]; // 0x330 (0x18) 
	struct TArray<unsigned char> TeamNums; // 0x348 (0x10)
	struct TArray<class AFortAthenaMutator_MatchCondition*> MatchConditionMutators; // 0x358 (0x10)
	unsigned char padding_368[0x8]; // 0x368 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_MatchConditionManager.OnSatisfied (Underlying native function: OnSatisfied 0x70dc11c)
	void OnSatisfied(class AFortAthenaMutator_MatchCondition*& MatchConditionMutator, bool& bSatisfied); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_MatchConditionManager.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x72ab98c)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | 0x00000002 | Native | Private)
};

