// Class /Script/FortniteGame.FortAthenaMutator_MatchCondition
// Size: 0x390
class AFortAthenaMutator_MatchCondition : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x10]; // 0x330 (0x10) 
	struct FScalableFloat bEnabled; // 0x340 (0x28)
	enum EMatchConditionMutatorTimingType TimingType; // 0x368 (0x1)
	unsigned char unreflected_369[0x7]; // 0x369 (0x7) 
	class AFortAthenaMutator_MatchConditionManager* MatchConditionManager; // 0x370 (0x8)
	unsigned char bSatisfied; // 0x378 (0x1)
	unsigned char bLocked; // 0x378 (0x1)
	unsigned char bLockedPermanently; // 0x378 (0x1)
	unsigned char unreflected_379[0x7]; // 0x379 (0x7) 
	struct TArray<struct FMatchConditionMutatorTeamData> TeamDataArray; // 0x380 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_MatchCondition.OnRep_bSatisfied (Underlying native function: OnRep_bSatisfied 0x84ee8d8)
	void OnRepbSatisfied(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_MatchCondition.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x84ee48c)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase, enum EAthenaGamePhase& PreviousHighestGamePhaseProcessed); // (Native | Protected)
};

