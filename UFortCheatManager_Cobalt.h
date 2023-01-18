// Class /Script/FortniteGame.FortCheatManager_Cobalt
// Size: 0x40
class UFortCheatManager_Cobalt : public UFortCheatManager_Coupled
{
	unsigned char unreflected_40[0x40]; 

	/* Functions */

	// Function /Script/FortniteGame.FortCheatManager_Cobalt.SimulateFullCobaltMatch (Underlying native function: SimulateFullCobaltMatch 0x71a6cc4)
	void SimulateFullCobaltMatch(bool& bSimulate); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Cobalt.EndCobaltRound (Underlying native function: EndCobaltRound 0x26daa0c)
	void EndCobaltRound(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager_Cobalt.AwardCobaltTeamPoints (Underlying native function: AwardCobaltTeamPoints 0x8487db8)
	void AwardCobaltTeamPoints(unsigned char& TeamToAward, int& PointsToAward); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)
};

