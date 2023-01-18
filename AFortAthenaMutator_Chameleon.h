// Class /Script/FortniteGame.FortAthenaMutator_Chameleon
// Size: 0x3d0
class AFortAthenaMutator_Chameleon : public AFortAthenaMutator
{
	struct FAthenaGameMessageData GameMsgIntroMessageTeam0; // 0x330 (0x50)
	struct FAthenaGameMessageData GameMsgIntroMessageTeam1; // 0x380 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Chameleon.OnMutatorGameplayEvent (Underlying native function: OnMutatorGameplayEvent 0x8489d58)
	void OnMutatorGameplayEvent(int& EventId, int& EventParam1, int& EventParam2, int& EventParam3); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Chameleon.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x848953c)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | Native | Protected)
};

