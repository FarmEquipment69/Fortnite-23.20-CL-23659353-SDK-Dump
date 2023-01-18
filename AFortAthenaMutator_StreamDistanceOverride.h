// Class /Script/FortniteGame.FortAthenaMutator_StreamDistanceOverride
// Size: 0x380
class AFortAthenaMutator_StreamDistanceOverride : public AFortAthenaMutator
{
	struct FScalableFloat StreamDistanceScale; // 0x330 (0x28)
	bool bApplyScalability; // 0x358 (0x1)
	unsigned char unreflected_359[0x1f]; // 0x359 (0x1f) 
	bool bApplyAfterWarmup; // 0x378 (0x1)
	bool bForceOverride; // 0x379 (0x1)
	unsigned char padding_37a[0x6]; // 0x37a (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_StreamDistanceOverride.HandleGamePhaseChanged (Underlying native function: HandleGamePhaseChanged 0x8489340)
	void HandleGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Native | Protected)
};

