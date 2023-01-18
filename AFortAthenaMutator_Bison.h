// Class /Script/FortniteGame.FortAthenaMutator_Bison
// Size: 0x380
class AFortAthenaMutator_Bison : public AFortAthenaMutator
{
	struct FAthenaGameMessageData GameMsgIntroMessage; // 0x330 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Bison.OnMutatorGameplayEvent (Underlying native function: OnMutatorGameplayEvent 0x8489c20)
	void OnMutatorGameplayEvent(int& EventId, int& EventParam1, int& EventParam2, int& EventParam3); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Bison.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x84894a0)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | Native | Protected)
};

