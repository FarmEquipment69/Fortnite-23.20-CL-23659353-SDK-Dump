// Class /Script/FortniteGame.FortAthenaMutator_GiveItemsAtGamePhase
// Size: 0x348
class AFortAthenaMutator_GiveItemsAtGamePhase : public AFortAthenaMutator
{
	enum EAthenaGamePhase PhaseToGiveItems; // 0x330 (0x1)
	unsigned char unreflected_331[0x7]; // 0x331 (0x7) 
	struct TArray<struct FItemsToGiveAtPhase> ItemsToGive; // 0x338 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_GiveItemsAtGamePhase.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x72ab98c)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)
};

