// Class /Script/FortniteGame.FortAthenaMutator_BallerRace
// Size: 0x3c8
class AFortAthenaMutator_BallerRace : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x18]; // 0x330 (0x18) 
	float ServerWorldTimeToStartRace; // 0x348 (0x4)
	unsigned char unreflected_34c[0x4]; // 0x34c (0x4) 
	struct FScalableFloat DelayBeforeRace; // 0x350 (0x28)
	struct FAthenaGameMessageData GameMsgIntroMessage; // 0x378 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_BallerRace.OnRep_ServerWorldTimeToStartRace (Underlying native function: OnRep_ServerWorldTimeToStartRace 0x848a144)
	void OnRepServerWorldTimeToStartRace(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_BallerRace.OnMutatorGameplayEvent (Underlying native function: OnMutatorGameplayEvent 0x84899b0)
	void OnMutatorGameplayEvent(int& EventId, int& EventParam1, int& EventParam2, int& EventParam3); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_BallerRace.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x84893c4)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | Native | Protected)
};

