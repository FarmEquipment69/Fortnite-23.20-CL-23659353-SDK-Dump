// Class /Script/FortniteGame.FortAthenaMutator_PlayerAbilitiesOnGamePhase
// Size: 0x390
class AFortAthenaMutator_PlayerAbilitiesOnGamePhase : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x8]; // 0x330 (0x8) 
	struct TMap<enum EAthenaGamePhase, struct FPlayerAbilitiesOnGamePhaseAbilityList> AbilitySetsToGiveOnGamePhaseMap; // 0x338 (0x50)
	unsigned char padding_388[0x8]; // 0x388 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_PlayerAbilitiesOnGamePhase.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x8489340)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Native | Protected)
};

