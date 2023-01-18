// Class /Script/PlayspaceSystem.PlayspaceLogic
// Size: 0x298
class APlayspaceLogic : public AActor
{
	class APlayspace* Playspace; // 0x288 (0x8)
	bool bAutoStartMatchOnServerStart; // 0x290 (0x1)
	unsigned char unreflected_291[0x1]; // 0x291 (0x1) 
	bool bMatchHasEnded; // 0x292 (0x1)
	unsigned char unreflected_293[0x1]; // 0x293 (0x1) 
	float MatchStartTime; // 0x294 (0x4)

	/* Functions */

	// Function /Script/PlayspaceSystem.PlayspaceLogic.OnRep_MatchStartTime (Underlying native function: OnRep_MatchStartTime 0x7062174)
	void OnRepMatchStartTime(); // (Native | Protected)

	// Function /Script/PlayspaceSystem.PlayspaceLogic.OnRep_bMatchHasEnded (Underlying native function: OnRep_bMatchHasEnded 0x4866d04)
	void OnRepbMatchHasEnded(); // (Final | Native | Private)
};

